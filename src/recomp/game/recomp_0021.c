/**
 * X-Men Legends - Recompiled code chunk 21
 * Functions: 250 (0x000F81D0 - 0x00100047)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000F81D0
 * Original: 0x000F81D0 - 0x000F8210 (64 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F81D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F81D0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F81DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F81DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F81ED; /* je: equal / zero */

loc_000F81E1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F81EDu); RECOMP_ABI_CALL(0x000FD1C0u, sub_000FD1C0); /* call 0x000FD1C0 */

loc_000F81ED: ;
    esp += 12; return; /* ret 8 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8208; /* je: equal / zero */

loc_000F8201: ;
    ecx = eax;
    PUSH32(esp, 0x000F8208u); RECOMP_ABI_CALL(0x00104290u, sub_00104290); /* call 0x00104290 */

loc_000F8208: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F81F0
 * Original: 0x000F81F0 - 0x000F8210 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F81F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F81F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F81FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F81FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8208; /* je: equal / zero */

loc_000F8201: ;
    ecx = eax;
    PUSH32(esp, 0x000F8208u); RECOMP_ABI_CALL(0x00104290u, sub_00104290); /* call 0x00104290 */

loc_000F8208: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8210
 * Original: 0x000F8210 - 0x000F8215 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8210(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8210: ;
    g_seh_ebp = ebp; sub_0010AB20(); return; /* tail jmp 0x0010AB20 */

}

/**
 * sub_000F8220
 * Original: 0x000F8220 - 0x000F8240 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8220: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F822Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F822D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F823D; /* je: equal / zero */

loc_000F8231: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F823Du); RECOMP_ABI_CALL(0x000FC660u, sub_000FC660); /* call 0x000FC660 */

loc_000F823D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8240
 * Original: 0x000F8240 - 0x000F8270 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8240: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F824Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F824D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8269; /* je: equal / zero */

loc_000F8251: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8266u); RECOMP_ABI_CALL(0x001091C0u, sub_001091C0); /* call 0x001091C0 */

loc_000F8266: ;
    esp += 16; return; /* ret 12 */

loc_000F8269: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8270
 * Original: 0x000F8270 - 0x000F8295 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8270: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F827Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F827D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8290; /* je: equal / zero */

loc_000F8281: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F828Du); RECOMP_ABI_CALL(0x001090B0u, sub_001090B0); /* call 0x001090B0 */

loc_000F828D: ;
    esp += 12; return; /* ret 8 */

loc_000F8290: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F82A0
 * Original: 0x000F82A0 - 0x000F82C0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F82A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F82A0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F82ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F82AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F82BD; /* je: equal / zero */

loc_000F82B1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F82BDu); RECOMP_ABI_CALL(0x00103AB0u, sub_00103AB0); /* call 0x00103AB0 */

loc_000F82BD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F82C0
 * Original: 0x000F82C0 - 0x000F82F0 (48 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F82C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F82C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F82CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F82CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F82E1; /* je: equal / zero */

loc_000F82D1: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F82E1u); RECOMP_ABI_CALL(0x001101F0u, sub_001101F0); /* call 0x001101F0 */

loc_000F82E1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F82F0
 * Original: 0x000F82F0 - 0x000F8314 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F82F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F82F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F82FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F82FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8311; /* je: equal / zero */

loc_000F8301: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8311u); RECOMP_ABI_CALL(0x001102F0u, sub_001102F0); /* call 0x001102F0 */

loc_000F8311: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8320
 * Original: 0x000F8320 - 0x000F834E (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8320: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F832Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F832D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F834B; /* je: equal / zero */

loc_000F8331: ;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(edx, MEM8(eax + 0x28B));
    SET_LO8(ecx, LO8(ecx) << 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x28B) = LO8(edx);

loc_000F834B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8350
 * Original: 0x000F8350 - 0x000F8374 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8350: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F835Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F835D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F836F; /* je: equal / zero */

loc_000F8361: ;
    SET_LO8(eax, MEM8(eax + 0x28B));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F836F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8380
 * Original: 0x000F8380 - 0x000F83A9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8380: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F838Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F838D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F83A6; /* je: equal / zero */

loc_000F8391: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F83A6u); RECOMP_ABI_CALL(0x00108FC0u, sub_00108FC0); /* call 0x00108FC0 */

loc_000F83A6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F83B0
 * Original: 0x000F83B0 - 0x000F83D0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F83B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F83B0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F83BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F83BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F83CD; /* je: equal / zero */

loc_000F83C1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F83CDu); RECOMP_ABI_CALL(0x000FC490u, sub_000FC490); /* call 0x000FC490 */

loc_000F83CD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F83D0
 * Original: 0x000F83D0 - 0x000F83F0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F83D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F83D0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F83DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F83DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F83EB; /* je: equal / zero */

loc_000F83E1: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x464) = ecx;

loc_000F83EB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F83F0
 * Original: 0x000F83F0 - 0x000F8410 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F83F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F83F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F83FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F83FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F840D; /* je: equal / zero */

loc_000F8401: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F840Du); RECOMP_ABI_CALL(0x000FC400u, sub_000FC400); /* call 0x000FC400 */

loc_000F840D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8410
 * Original: 0x000F8410 - 0x000F8440 (48 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8410(void)
{

loc_000F8410: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    eax = esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000F8432u); RECOMP_ABI_CALL(0x000FDDD0u, sub_000FDDD0); /* call 0x000FDDD0 */

loc_000F8432: ;
    esp = esp + 0x14;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000F8440
 * Original: 0x000F8440 - 0x000F8460 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8440: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F844Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F844D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F845D; /* je: equal / zero */

loc_000F8451: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F845Du); RECOMP_ABI_CALL(0x0010EBC0u, sub_0010EBC0); /* call 0x0010EBC0 */

loc_000F845D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8460
 * Original: 0x000F8460 - 0x000F84C0 (96 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8460: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F846Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F846D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F847D; /* je: equal / zero */

loc_000F8471: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F847Du); RECOMP_ABI_CALL(0x000FC450u, sub_000FC450); /* call 0x000FC450 */

loc_000F847D: ;
    esp += 12; return; /* ret 8 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F849D; /* je: equal / zero */

loc_000F8491: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F849Du); RECOMP_ABI_CALL(0x000FC260u, sub_000FC260); /* call 0x000FC260 */

loc_000F849D: ;
    esp += 12; return; /* ret 8 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F84BA; /* je: equal / zero */

loc_000F84B1: ;
    eax = MEM32(eax + 0x468);
    esp += 8; return; /* ret 4 */

loc_000F84BA: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8480
 * Original: 0x000F8480 - 0x000F84C0 (64 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8480: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F848Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F848D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F849D; /* je: equal / zero */

loc_000F8491: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F849Du); RECOMP_ABI_CALL(0x000FC260u, sub_000FC260); /* call 0x000FC260 */

loc_000F849D: ;
    esp += 12; return; /* ret 8 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F84BA; /* je: equal / zero */

loc_000F84B1: ;
    eax = MEM32(eax + 0x468);
    esp += 8; return; /* ret 4 */

loc_000F84BA: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F84A0
 * Original: 0x000F84A0 - 0x000F84C0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F84A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F84A0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F84ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F84AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F84BA; /* je: equal / zero */

loc_000F84B1: ;
    eax = MEM32(eax + 0x468);
    esp += 8; return; /* ret 4 */

loc_000F84BA: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F84C0
 * Original: 0x000F84C0 - 0x000F84E0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F84C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F84C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F84CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F84CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F84DB; /* je: equal / zero */

loc_000F84D1: ;
    ecx = eax;
    PUSH32(esp, 0x000F84D8u); RECOMP_ABI_CALL(0x000FC140u, sub_000FC140); /* call 0x000FC140 */

loc_000F84D8: ;
    esp += 8; return; /* ret 4 */

loc_000F84DB: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F84E0
 * Original: 0x000F84E0 - 0x000F8536 (86 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F84E0(void)
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

loc_000F84E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F84F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F84F3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F852B; /* je: equal / zero */

loc_000F84F9: ;
    eax = MEM32(edi + 0x504);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x000F850Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F850A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F851F; /* je: equal / zero */

loc_000F850E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    ecx = eax;
    g_seh_ebp = ebp; sub_000FADC0(); return; /* tail jmp 0x000FADC0 */

loc_000F851F: ;
    ecx = edi;
    PUSH32(esp, 0x000F8526u); RECOMP_ABI_CALL(0x00107DB0u, sub_00107DB0); /* call 0x00107DB0 */

loc_000F8526: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F852B: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
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
 * sub_000F8540
 * Original: 0x000F8540 - 0x000F8591 (81 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8540(void)
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

loc_000F8540: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8553u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8553: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8586; /* je: equal / zero */

loc_000F8559: ;
    eax = MEM32(edi + 0x504);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x000F856Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F856A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F857A; /* je: equal / zero */

loc_000F856E: ;
    ecx = eax;
    PUSH32(esp, 0x000F8575u); RECOMP_ABI_CALL(0x000FAAD0u, sub_000FAAD0); /* call 0x000FAAD0 */

loc_000F8575: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F857A: ;
    ecx = edi;
    PUSH32(esp, 0x000F8581u); RECOMP_ABI_CALL(0x00107DB0u, sub_00107DB0); /* call 0x00107DB0 */

loc_000F8581: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F8586: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
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
 * sub_000F85A0
 * Original: 0x000F85A0 - 0x000F85A5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F85A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F85A0: ;
    g_seh_ebp = ebp; sub_00106FF0(); return; /* tail jmp 0x00106FF0 */

}

/**
 * sub_000F85B0
 * Original: 0x000F85B0 - 0x000F85B5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F85B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F85B0: ;
    g_seh_ebp = ebp; sub_00106D70(); return; /* tail jmp 0x00106D70 */

}

/**
 * sub_000F85C0
 * Original: 0x000F85C0 - 0x000F85E3 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F85C0(void)
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

loc_000F85C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F85CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F85CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F85DA; /* je: equal / zero */

loc_000F85D1: ;
    fp_push(MEMF(eax + 0x444)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F85DA: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F85F0
 * Original: 0x000F85F0 - 0x000F8610 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F85F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F85F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F85FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F85FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F860D; /* je: equal / zero */

loc_000F8601: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F860Du); RECOMP_ABI_CALL(0x0010B5C0u, sub_0010B5C0); /* call 0x0010B5C0 */

loc_000F860D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8610
 * Original: 0x000F8610 - 0x000F8640 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8610: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F861Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F861D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F862D; /* je: equal / zero */

loc_000F8621: ;
    ecx = MEM32(eax + 0x18);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_000F862D: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8640
 * Original: 0x000F8640 - 0x000F8664 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8640: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F864Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F864D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8661; /* je: equal / zero */

loc_000F8651: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8661u); RECOMP_ABI_CALL(0x001E7D10u, sub_001E7D10); /* call 0x001E7D10 */

loc_000F8661: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8670
 * Original: 0x000F8670 - 0x000F868B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8670: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F867Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F867D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8688; /* je: equal / zero */

loc_000F8681: ;
    ecx = eax;
    PUSH32(esp, 0x000F8688u); RECOMP_ABI_CALL(0x00107FC0u, sub_00107FC0); /* call 0x00107FC0 */

loc_000F8688: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8690
 * Original: 0x000F8690 - 0x000F86B4 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8690: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F869Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F869D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F86B1; /* je: equal / zero */

loc_000F86A1: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F86B1u); RECOMP_ABI_CALL(0x00107050u, sub_00107050); /* call 0x00107050 */

loc_000F86B1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F86C0
 * Original: 0x000F86C0 - 0x000F86E4 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F86C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F86C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F86CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F86CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F86E1; /* je: equal / zero */

loc_000F86D1: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F86E1u); RECOMP_ABI_CALL(0x00107140u, sub_00107140); /* call 0x00107140 */

loc_000F86E1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F86F0
 * Original: 0x000F86F0 - 0x000F871D (45 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F86F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F86F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F86FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F86FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F871A; /* je: equal / zero */

loc_000F8701: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F871Au); RECOMP_ABI_CALL(0x00107270u, sub_00107270); /* call 0x00107270 */

loc_000F871A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8720
 * Original: 0x000F8720 - 0x000F8749 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8720: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F872Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F872D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8746; /* je: equal / zero */

loc_000F8731: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8746u); RECOMP_ABI_CALL(0x0002F3D0u, sub_0002F3D0); /* call 0x0002F3D0 */

loc_000F8746: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8750
 * Original: 0x000F8750 - 0x000F8779 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8750: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F875Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F875D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8776; /* je: equal / zero */

loc_000F8761: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8776u); RECOMP_ABI_CALL(0x00107520u, sub_00107520); /* call 0x00107520 */

loc_000F8776: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8780
 * Original: 0x000F8780 - 0x000F87A9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8780: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F878Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F878D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F87A6; /* je: equal / zero */

loc_000F8791: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F87A6u); RECOMP_ABI_CALL(0x001075E0u, sub_001075E0); /* call 0x001075E0 */

loc_000F87A6: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F87B0
 * Original: 0x000F87B0 - 0x000F87D4 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F87B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F87B0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F87BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F87BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F87D1; /* je: equal / zero */

loc_000F87C1: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F87D1u); RECOMP_ABI_CALL(0x00107410u, sub_00107410); /* call 0x00107410 */

loc_000F87D1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F87E0
 * Original: 0x000F87E0 - 0x000F880E (46 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F87E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F87E0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F87EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F87ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F880B; /* je: equal / zero */

loc_000F87F1: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F880Bu); RECOMP_ABI_CALL(0x001076A0u, sub_001076A0); /* call 0x001076A0 */

loc_000F880B: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000F8810
 * Original: 0x000F8810 - 0x000F8834 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8810: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F881Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F881D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8831; /* je: equal / zero */

loc_000F8821: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8831u); RECOMP_ABI_CALL(0x00107840u, sub_00107840); /* call 0x00107840 */

loc_000F8831: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8840
 * Original: 0x000F8840 - 0x000F8860 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F8840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8840: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F884Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F884D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F885B; /* je: equal / zero */

loc_000F8851: ;
    ecx = eax;
    PUSH32(esp, 0x000F8858u); RECOMP_ABI_CALL(0x000FC190u, sub_000FC190); /* call 0x000FC190 */

loc_000F8858: ;
    esp += 8; return; /* ret 4 */

loc_000F885B: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8860
 * Original: 0x000F8860 - 0x000F8880 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8860: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F886Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F886D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8878; /* je: equal / zero */

loc_000F8871: ;
    ecx = eax;
    PUSH32(esp, 0x000F8878u); RECOMP_ABI_CALL(0x000FC1A0u, sub_000FC1A0); /* call 0x000FC1A0 */

loc_000F8878: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8880
 * Original: 0x000F8880 - 0x000F88C5 (69 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8880: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F888Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F888D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F88C0; /* je: equal / zero */

loc_000F8891: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    edx = esp;
    MEM32(edx) = ecx;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    edx = esp;
    MEM32(edx) = ecx;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    edx = esp;
    MEM32(edx) = ecx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000F88BDu); RECOMP_ABI_CALL(0x00106CE0u, sub_00106CE0); /* call 0x00106CE0 */

loc_000F88BD: ;
    esp += 28; return; /* ret 24 */

loc_000F88C0: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000F88D0
 * Original: 0x000F88D0 - 0x000F8904 (52 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F88D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F88D0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F88DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F88DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8901; /* je: equal / zero */

loc_000F88E1: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F8901u); RECOMP_ABI_CALL(0x00101CE0u, sub_00101CE0); /* call 0x00101CE0 */

loc_000F8901: ;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000F8910
 * Original: 0x000F8910 - 0x000F8915 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8910(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F8910: ;
    g_seh_ebp = ebp; sub_00101E60(); return; /* tail jmp 0x00101E60 */

}

/**
 * sub_000F8920
 * Original: 0x000F8920 - 0x000F894A (42 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F8920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8920: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F892Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F892D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8945; /* je: equal / zero */

loc_000F8931: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000F8942u); RECOMP_ABI_CALL(0x000FDD40u, sub_000FDD40); /* call 0x000FDD40 */

loc_000F8942: ;
    esp += 16; return; /* ret 12 */

loc_000F8945: ;
    eax = 0; /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8950
 * Original: 0x000F8950 - 0x000F8981 (49 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000F8950(void)
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

loc_000F8950: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F895Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F895E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F897D; /* je: equal / zero */

loc_000F8964: ;
    PUSH32(esp, 0x000F8969u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F8969: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000F8973u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8973: ;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    MEMF(esi + 0x2A0) = (float)fp_top(); fp_pop(); /* fstp */

loc_000F897D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F8990
 * Original: 0x000F8990 - 0x000F89B1 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8990: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F899Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F899D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F89AC; /* je: equal / zero */

loc_000F89A1: ;
    SET_LO8(eax, MEM8(eax + 0x289));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F89AC: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F89C0
 * Original: 0x000F89C0 - 0x000F89E0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F89C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F89C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F89CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F89CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F89DD; /* je: equal / zero */

loc_000F89D1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F89DDu); RECOMP_ABI_CALL(0x000FC110u, sub_000FC110); /* call 0x000FC110 */

loc_000F89DD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F89E0
 * Original: 0x000F89E0 - 0x000F8A50 (112 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F89E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F89E0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F89EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F89ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F89FD; /* je: equal / zero */

loc_000F89F1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F89FDu); RECOMP_ABI_CALL(0x000FE500u, sub_000FE500); /* call 0x000FE500 */

loc_000F89FD: ;
    esp += 12; return; /* ret 8 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8A1D; /* je: equal / zero */

loc_000F8A11: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F8A1Du); RECOMP_ABI_CALL(0x0010A5A0u, sub_0010A5A0); /* call 0x0010A5A0 */

loc_000F8A1D: ;
    esp += 12; return; /* ret 8 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8A45; /* je: equal / zero */

loc_000F8A31: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000F8A42u); RECOMP_ABI_CALL(0x00101280u, sub_00101280); /* call 0x00101280 */

loc_000F8A42: ;
    esp += 16; return; /* ret 12 */

loc_000F8A45: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8A00
 * Original: 0x000F8A00 - 0x000F8A50 (80 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8A00: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8A0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8A0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8A1D; /* je: equal / zero */

loc_000F8A11: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F8A1Du); RECOMP_ABI_CALL(0x0010A5A0u, sub_0010A5A0); /* call 0x0010A5A0 */

loc_000F8A1D: ;
    esp += 12; return; /* ret 8 */

    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8A45; /* je: equal / zero */

loc_000F8A31: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000F8A42u); RECOMP_ABI_CALL(0x00101280u, sub_00101280); /* call 0x00101280 */

loc_000F8A42: ;
    esp += 16; return; /* ret 12 */

loc_000F8A45: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8A20
 * Original: 0x000F8A20 - 0x000F8A50 (48 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8A20: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8A2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8A2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8A45; /* je: equal / zero */

loc_000F8A31: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000F8A42u); RECOMP_ABI_CALL(0x00101280u, sub_00101280); /* call 0x00101280 */

loc_000F8A42: ;
    esp += 16; return; /* ret 12 */

loc_000F8A45: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8A50
 * Original: 0x000F8A50 - 0x000F8A70 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8A50: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8A5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8A5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8A6B; /* je: equal / zero */

loc_000F8A61: ;
    ecx = eax;
    PUSH32(esp, 0x000F8A68u); RECOMP_ABI_CALL(0x000FC590u, sub_000FC590); /* call 0x000FC590 */

loc_000F8A68: ;
    esp += 8; return; /* ret 4 */

loc_000F8A6B: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8A70
 * Original: 0x000F8A70 - 0x000F8AA0 (48 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8A70(void)
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

loc_000F8A70: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8A7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8A7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8A95; /* je: equal / zero */

loc_000F8A81: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000F8A92u); RECOMP_ABI_CALL(0x0010CBB0u, sub_0010CBB0); /* call 0x0010CBB0 */

loc_000F8A92: ;
    esp += 16; return; /* ret 12 */

loc_000F8A95: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F8AA0
 * Original: 0x000F8AA0 - 0x000F8AC9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8AA0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8AADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8AAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8AC4; /* je: equal / zero */

loc_000F8AB1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F8ABFu); RECOMP_ABI_CALL(0x0010FF10u, sub_0010FF10); /* call 0x0010FF10 */

loc_000F8ABF: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_000F8AC4: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8AD0
 * Original: 0x000F8AD0 - 0x000F8AF0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8AD0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8ADDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8ADD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8AED; /* je: equal / zero */

loc_000F8AE1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F8AEDu); RECOMP_ABI_CALL(0x001019E0u, sub_001019E0); /* call 0x001019E0 */

loc_000F8AED: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8AF0
 * Original: 0x000F8AF0 - 0x000F8B20 (48 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8AF0(void)
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

loc_000F8AF0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8AFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8AFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8B0A; /* je: equal / zero */

loc_000F8B01: ;
    fp_push(MEMF(eax + 0x2AC)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F8B0A: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F8B20
 * Original: 0x000F8B20 - 0x000F8B40 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8B20: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8B2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8B2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8B3D; /* je: equal / zero */

loc_000F8B31: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F8B3Du); RECOMP_ABI_CALL(0x001017E0u, sub_001017E0); /* call 0x001017E0 */

loc_000F8B3D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8B40
 * Original: 0x000F8B40 - 0x000F8B70 (48 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8B40: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8B4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8B4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8B60; /* je: equal / zero */

loc_000F8B51: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F8B5Du); RECOMP_ABI_CALL(0x00101940u, sub_00101940); /* call 0x00101940 */

loc_000F8B5D: ;
    esp += 12; return; /* ret 8 */

loc_000F8B60: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8B70
 * Original: 0x000F8B70 - 0x000F8B90 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8B70: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8B7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8B7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8B8B; /* je: equal / zero */

loc_000F8B81: ;
    ecx = eax;
    PUSH32(esp, 0x000F8B88u); RECOMP_ABI_CALL(0x00105850u, sub_00105850); /* call 0x00105850 */

loc_000F8B88: ;
    esp += 8; return; /* ret 4 */

loc_000F8B8B: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8B90
 * Original: 0x000F8B90 - 0x000F8BC0 (48 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8B90: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8B9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8B9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8BAC; /* je: equal / zero */

loc_000F8BA1: ;
    SET_LO8(eax, MEM8(eax + 0x24C));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F8BAC: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8BC0
 * Original: 0x000F8BC0 - 0x000F8BDF (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F8BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8BC0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8BCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8BCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8BDA; /* je: equal / zero */

loc_000F8BD1: ;
    eax = MEM32(eax + 0x1AC);
    esp += 8; return; /* ret 4 */

loc_000F8BDA: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8BE0
 * Original: 0x000F8BE0 - 0x000F8BFE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8BE0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8BEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8BED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8BFB; /* je: equal / zero */

loc_000F8BF1: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x1AC) = ecx;

loc_000F8BFB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8C00
 * Original: 0x000F8C00 - 0x000F8D37 (311 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8C00(void)
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

loc_000F8C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8C13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8C13: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8D2C; /* je: equal / zero */

loc_000F8C1D: ;
    eax = MEM32(esi + 0x504);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x000F8C2Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8C2E: ;
    edi = eax;
    _fa = (uint32_t)(MEM8(esi + 0x28A)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x28A), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F8D21; /* jne: not equal / not zero */

loc_000F8C3D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8C67; /* je: equal / zero */

loc_000F8C41: ;
    PUSH32(esp, 0x000F8C46u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F8C46: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000F8C50u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8C50: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x258)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x258] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F8C67; /* jp: parity */

loc_000F8C5D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F8D21; /* jne: not equal / not zero */

loc_000F8C67: ;
    ecx = esi;
    PUSH32(esp, 0x000F8C6Eu); RECOMP_ABI_CALL(0x000FC200u, sub_000FC200); /* call 0x000FC200 */

loc_000F8C6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8CDA; /* je: equal / zero */

loc_000F8C72: ;
    fp_push(MEMF(esi + 0x1B4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9B18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d9b18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F8C91; /* jp: parity */

loc_000F8C85: ;
    MEM32(esi + 0x1B4) = 0x3E6B851F;
    goto loc_000F8CE6;

loc_000F8C91: ;
    fp_push(MEMF(esi + 0x1B4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x1B0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x1b0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F8CC7; /* jp: parity */

loc_000F8CA4: ;
    PUSH32(esp, 0x000F8CA9u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F8CA9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x000F8CB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8CB3: ;
    fp_top() = fp_top() * MEMF(0x3D9B14); /* fmul dword ptr [0x3d9b14] */
    fp_top() = fp_top() + MEMF(esi + 0x1B4); /* fadd dword ptr [esi + 0x1b4] */
    MEMF(esi + 0x1B4) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000F8CE6;

loc_000F8CC7: ;
    fp_push(MEMF(esi + 0x1B4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x1B0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x1b0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F8CE6; /* jne: not equal / not zero */

loc_000F8CDA: ;
    eax = MEM32(esi + 0x1B0);
    MEM32(esi + 0x1B4) = eax;

loc_000F8CE6: ;
    PUSH32(esp, 0x000F8CEBu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F8CEB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x000F8CF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8CF5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x1B4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x1b4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F8D0D; /* jne: not equal / not zero */

loc_000F8D02: ;
    fp_push(MEMF(esi + 0x1B4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F8D0D: ;
    PUSH32(esp, 0x000F8D12u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F8D12: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x000F8D1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8D1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F8D21: ;
    fp_push(MEMF(0x3CA844)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F8D2C: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
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
 * sub_000F8D40
 * Original: 0x000F8D40 - 0x000F8D6E (46 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8D40: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8D4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8D4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8D6B; /* je: equal / zero */

loc_000F8D51: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000F8D6Bu); RECOMP_ABI_CALL(0x00100DD0u, sub_00100DD0); /* call 0x00100DD0 */

loc_000F8D6B: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000F8D70
 * Original: 0x000F8D70 - 0x000F8D9D (45 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8D70: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8D7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8D7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8D90; /* je: equal / zero */

loc_000F8D81: ;
    ecx = MEM32(eax + 0x284);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_000F8D90: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8DA0
 * Original: 0x000F8DA0 - 0x000F8DC0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8DA0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8DADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8DAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8DBB; /* je: equal / zero */

loc_000F8DB1: ;
    ecx = eax;
    PUSH32(esp, 0x000F8DB8u); RECOMP_ABI_CALL(0x001016B0u, sub_001016B0); /* call 0x001016B0 */

loc_000F8DB8: ;
    esp += 8; return; /* ret 4 */

loc_000F8DBB: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8DC0
 * Original: 0x000F8DC0 - 0x000F8DF0 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8DC0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8DCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8DCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8DE9; /* je: equal / zero */

loc_000F8DD1: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8DE6u); RECOMP_ABI_CALL(0x000FF6A0u, sub_000FF6A0); /* call 0x000FF6A0 */

loc_000F8DE6: ;
    esp += 16; return; /* ret 12 */

loc_000F8DE9: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8DF0
 * Original: 0x000F8DF0 - 0x000F8E1E (46 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8DF0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8DFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8DFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8E19; /* je: equal / zero */

loc_000F8E01: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8E16u); RECOMP_ABI_CALL(0x000FF5E0u, sub_000FF5E0); /* call 0x000FF5E0 */

loc_000F8E16: ;
    esp += 16; return; /* ret 12 */

loc_000F8E19: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8E20
 * Original: 0x000F8E20 - 0x000F8E49 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8E20: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8E2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8E2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8E44; /* je: equal / zero */

loc_000F8E31: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8E41u); RECOMP_ABI_CALL(0x000FF4D0u, sub_000FF4D0); /* call 0x000FF4D0 */

loc_000F8E41: ;
    esp += 12; return; /* ret 8 */

loc_000F8E44: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8E50
 * Original: 0x000F8E50 - 0x000F8E6C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F8E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8E50: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8E5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8E5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8E67; /* je: equal / zero */

loc_000F8E61: ;
    eax = MEM32(eax + 0x20);
    esp += 8; return; /* ret 4 */

loc_000F8E67: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8E70
 * Original: 0x000F8E70 - 0x000F8E8B (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8E70: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8E7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8E7D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8E88; /* je: equal / zero */

loc_000F8E81: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x20) = ecx;

loc_000F8E88: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8E90
 * Original: 0x000F8E90 - 0x000F8EB0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8E90: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8E9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8E9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8EAD; /* je: equal / zero */

loc_000F8EA1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F8EADu); RECOMP_ABI_CALL(0x000FDC10u, sub_000FDC10); /* call 0x000FDC10 */

loc_000F8EAD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8EB0
 * Original: 0x000F8EB0 - 0x000F8EE0 (48 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8EB0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8EBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8EBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8ED5; /* je: equal / zero */

loc_000F8EC1: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000F8ED2u); RECOMP_ABI_CALL(0x000FC150u, sub_000FC150); /* call 0x000FC150 */

loc_000F8ED2: ;
    esp += 16; return; /* ret 12 */

loc_000F8ED5: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F8EE0
 * Original: 0x000F8EE0 - 0x000F8EFB (27 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8EE0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8EEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8EED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8EF8; /* je: equal / zero */

loc_000F8EF1: ;
    ecx = eax;
    PUSH32(esp, 0x000F8EF8u); RECOMP_ABI_CALL(0x000FCF40u, sub_000FCF40); /* call 0x000FCF40 */

loc_000F8EF8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8F00
 * Original: 0x000F8F00 - 0x000F8F29 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8F00: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8F0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8F0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8F24; /* je: equal / zero */

loc_000F8F11: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8F21u); RECOMP_ABI_CALL(0x001016C0u, sub_001016C0); /* call 0x001016C0 */

loc_000F8F21: ;
    esp += 12; return; /* ret 8 */

loc_000F8F24: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8F30
 * Original: 0x000F8F30 - 0x000F8F54 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8F30: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8F3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8F3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8F51; /* je: equal / zero */

loc_000F8F41: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8F51u); RECOMP_ABI_CALL(0x00105BE0u, sub_00105BE0); /* call 0x00105BE0 */

loc_000F8F51: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8F60
 * Original: 0x000F8F60 - 0x000F8F84 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8F60: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8F6Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8F6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8F81; /* je: equal / zero */

loc_000F8F71: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F8F81u); RECOMP_ABI_CALL(0x000FF260u, sub_000FF260); /* call 0x000FF260 */

loc_000F8F81: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F8F90
 * Original: 0x000F8F90 - 0x000F8FAF (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8F90: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8F9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8F9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8FA7; /* je: equal / zero */

loc_000F8FA1: ;
    eax = eax + 0x34;
    esp += 8; return; /* ret 4 */

loc_000F8FA7: ;
    eax = 0x5BC9D0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8FB0
 * Original: 0x000F8FB0 - 0x000F8FD1 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8FB0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8FBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8FBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8FC9; /* je: equal / zero */

loc_000F8FC1: ;
    eax = eax + 0x458;
    esp += 8; return; /* ret 4 */

loc_000F8FC9: ;
    eax = 0x5BC9D0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F8FE0
 * Original: 0x000F8FE0 - 0x000F9000 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F8FE0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F8FEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F8FED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F8FFD; /* je: equal / zero */

loc_000F8FF1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F8FFDu); RECOMP_ABI_CALL(0x00102790u, sub_00102790); /* call 0x00102790 */

loc_000F8FFD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9000
 * Original: 0x000F9000 - 0x000F9030 (48 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9000: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F900Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F900D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F902B; /* je: equal / zero */

loc_000F9011: ;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(edx, MEM8(eax + 0x24C));
    SET_LO8(ecx, LO8(ecx) << 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x24C) = LO8(edx);

loc_000F902B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9030
 * Original: 0x000F9030 - 0x000F905E (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9030: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F903Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F903D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F905B; /* je: equal / zero */

loc_000F9041: ;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(edx, MEM8(eax + 0x24C));
    SET_LO8(ecx, LO8(ecx) << 3);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x24C) = LO8(edx);

loc_000F905B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9060
 * Original: 0x000F9060 - 0x000F908E (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9060: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F906Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F906D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F908B; /* je: equal / zero */

loc_000F9071: ;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(edx, MEM8(eax + 0x24C));
    SET_LO8(ecx, LO8(ecx) << 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0x10);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x24C) = LO8(edx);

loc_000F908B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9090
 * Original: 0x000F9090 - 0x000F90BE (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9090: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F909Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F909D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F90BB; /* je: equal / zero */

loc_000F90A1: ;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(edx, MEM8(eax + 0x24C));
    SET_LO8(ecx, LO8(ecx) << 5);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0x20);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x24C) = LO8(edx);

loc_000F90BB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F90C0
 * Original: 0x000F90C0 - 0x000F90EE (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F90C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F90C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F90CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F90CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F90EB; /* je: equal / zero */

loc_000F90D1: ;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(edx, MEM8(eax + 0x24C));
    SET_LO8(ecx, LO8(ecx) << 6);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0x40);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x24C) = LO8(edx);

loc_000F90EB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F90F0
 * Original: 0x000F90F0 - 0x000F911C (44 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F90F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F90F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F90FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F90FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9119; /* je: equal / zero */

loc_000F9101: ;
    SET_LO8(ecx, MEM8(eax + 0x24C));
    SET_LO8(edx, MEM8(esp + 8));
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    SET_LO8(edx, LO8(edx) << 7);
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    MEM8(eax + 0x24C) = LO8(ecx);

loc_000F9119: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9120
 * Original: 0x000F9120 - 0x000F914F (47 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9120: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F912Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F912D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F914C; /* je: equal / zero */

loc_000F9131: ;
    SET_LO8(ecx, MEM8(eax + 0x24D));
    SET_LO8(ecx, LO8(ecx) ^ MEM8(esp + 8));
    SET_LO8(edx, MEM8(eax + 0x24D));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x24D) = LO8(edx);

loc_000F914C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9150
 * Original: 0x000F9150 - 0x000F9175 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9150: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F915Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F915D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9172; /* je: equal / zero */

loc_000F9161: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000F9172u); RECOMP_ABI_CALL(0x00106B00u, sub_00106B00); /* call 0x00106B00 */

loc_000F9172: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F9180
 * Original: 0x000F9180 - 0x000F919E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9180: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F918Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F918D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F919B; /* je: equal / zero */

loc_000F9191: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x274) = ecx;

loc_000F919B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F91A0
 * Original: 0x000F91A0 - 0x000F91C3 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F91A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F91A0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F91ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F91AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F91BE; /* je: equal / zero */

loc_000F91B1: ;
    SET_LO8(eax, MEM8(eax + 0x24C));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F91BE: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F91D0
 * Original: 0x000F91D0 - 0x000F91F4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F91D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F91D0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F91DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F91DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F91EF; /* je: equal / zero */

loc_000F91E1: ;
    SET_LO8(eax, MEM8(eax + 0x24C));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F91EF: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9200
 * Original: 0x000F9200 - 0x000F9224 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9200: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F920Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F920D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F921F; /* je: equal / zero */

loc_000F9211: ;
    SET_LO8(eax, MEM8(eax + 0x24C));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F921F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9230
 * Original: 0x000F9230 - 0x000F9254 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9230: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F923Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F923D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F924F; /* je: equal / zero */

loc_000F9241: ;
    SET_LO8(eax, MEM8(eax + 0x24C));
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F924F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9260
 * Original: 0x000F9260 - 0x000F9284 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9260: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F926Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F926D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F927F; /* je: equal / zero */

loc_000F9271: ;
    SET_LO8(eax, MEM8(eax + 0x24C));
    SET_LO8(eax, LO8(eax) >> 5);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F927F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9290
 * Original: 0x000F9290 - 0x000F92B4 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9290: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F929Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F929D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F92AF; /* je: equal / zero */

loc_000F92A1: ;
    SET_LO8(eax, MEM8(eax + 0x24C));
    SET_LO8(eax, LO8(eax) >> 6);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F92AF: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F92C0
 * Original: 0x000F92C0 - 0x000F92E2 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F92C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F92C0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F92CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F92CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F92DD; /* je: equal / zero */

loc_000F92D1: ;
    SET_LO8(eax, MEM8(eax + 0x24C));
    SET_LO8(eax, LO8(eax) >> 7);
    esp += 8; return; /* ret 4 */

loc_000F92DD: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F92F0
 * Original: 0x000F92F0 - 0x000F9311 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F92F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F92F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F92FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F92FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F930C; /* je: equal / zero */

loc_000F9301: ;
    SET_LO8(eax, MEM8(eax + 0x24D));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F930C: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9320
 * Original: 0x000F9320 - 0x000F9343 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9320: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F932Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F932D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F933E; /* je: equal / zero */

loc_000F9331: ;
    SET_LO8(eax, MEM8(eax + 0x24D));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F933E: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9350
 * Original: 0x000F9350 - 0x000F936F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9350: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F935Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F935D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F936C; /* je: equal / zero */

loc_000F9361: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x000F936Cu); RECOMP_ABI_CALL(0x00106B00u, sub_00106B00); /* call 0x00106B00 */

loc_000F936C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9370
 * Original: 0x000F9370 - 0x000F9393 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9370(void)
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

loc_000F9370: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F937Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F937D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F938A; /* je: equal / zero */

loc_000F9381: ;
    fp_push(MEMF(eax + 0x254)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000F938A: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F93A0
 * Original: 0x000F93A0 - 0x000F93C3 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F93A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F93A0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F93ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F93AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F93BE; /* je: equal / zero */

loc_000F93B1: ;
    SET_LO8(eax, MEM8(eax + 0x289));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F93BE: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F93D0
 * Original: 0x000F93D0 - 0x000F93FD (45 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F93D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F93D0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F93DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F93DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F93FA; /* je: equal / zero */

loc_000F93E1: ;
    SET_LO8(ecx, MEM8(esp + 8));
    SET_LO8(edx, MEM8(eax + 0x289));
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + 0x289) = LO8(edx);

loc_000F93FA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9400
 * Original: 0x000F9400 - 0x000F9424 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9400: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F940Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F940D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F941F; /* je: equal / zero */

loc_000F9411: ;
    SET_LO8(eax, MEM8(eax + 0x24D));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 8; return; /* ret 4 */

loc_000F941F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9430
 * Original: 0x000F9430 - 0x000F9450 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9430: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F943Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F943D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F944D; /* je: equal / zero */

loc_000F9441: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F944Du); RECOMP_ABI_CALL(0x000FC230u, sub_000FC230); /* call 0x000FC230 */

loc_000F944D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9450
 * Original: 0x000F9450 - 0x000F9470 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9450: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F945Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F945D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F946B; /* je: equal / zero */

loc_000F9461: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x254) = ecx;

loc_000F946B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9470
 * Original: 0x000F9470 - 0x000F948E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9470: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F947Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F947D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F948B; /* je: equal / zero */

loc_000F9481: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x250) = ecx;

loc_000F948B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9490
 * Original: 0x000F9490 - 0x000F94AE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9490: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F949Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F949D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F94AB; /* je: equal / zero */

loc_000F94A1: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x258) = ecx;

loc_000F94AB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F94B0
 * Original: 0x000F94B0 - 0x000F94CE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F94B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F94B0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F94BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F94BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F94CB; /* je: equal / zero */

loc_000F94C1: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x25C) = ecx;

loc_000F94CB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F94D0
 * Original: 0x000F94D0 - 0x000F94EE (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F94D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F94D0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F94DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F94DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F94EB; /* je: equal / zero */

loc_000F94E1: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x260) = ecx;

loc_000F94EB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F94F0
 * Original: 0x000F94F0 - 0x000F950E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F94F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F94F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F94FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F94FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F950B; /* je: equal / zero */

loc_000F9501: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x264) = ecx;

loc_000F950B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9510
 * Original: 0x000F9510 - 0x000F952E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9510: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F951Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F951D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F952B; /* je: equal / zero */

loc_000F9521: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x268) = ecx;

loc_000F952B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9530
 * Original: 0x000F9530 - 0x000F954E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9530: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F953Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F953D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F954B; /* je: equal / zero */

loc_000F9541: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x26C) = ecx;

loc_000F954B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9550
 * Original: 0x000F9550 - 0x000F956E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9550: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F955Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F955D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F956B; /* je: equal / zero */

loc_000F9561: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0x43D) = LO8(ecx);

loc_000F956B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9570
 * Original: 0x000F9570 - 0x000F9590 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9570: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F957Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F957D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F958D; /* je: equal / zero */

loc_000F9581: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x000F958Du); RECOMP_ABI_CALL(0x000FD330u, sub_000FD330); /* call 0x000FD330 */

loc_000F958D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9590
 * Original: 0x000F9590 - 0x000F95B0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9590: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F959Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F959D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F95AB; /* je: equal / zero */

loc_000F95A1: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x270) = ecx;

loc_000F95AB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F95B0
 * Original: 0x000F95B0 - 0x000F95CF (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F95B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F95B0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F95BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F95BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F95CA; /* je: equal / zero */

loc_000F95C1: ;
    eax = MEM32(eax + 0x270);
    esp += 8; return; /* ret 4 */

loc_000F95CA: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F95D0
 * Original: 0x000F95D0 - 0x000F9601 (49 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F95D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F95D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F95E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F95E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F95FB; /* je: equal / zero */

loc_000F95E6: ;
    eax = MEM32(eax + 0x504);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x000F95F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F95F7: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F95FB: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9610
 * Original: 0x000F9610 - 0x000F962F (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F9610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9610: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F961Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F961D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F962A; /* je: equal / zero */

loc_000F9621: ;
    eax = MEM32(eax + 0x504);
    esp += 8; return; /* ret 4 */

loc_000F962A: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9630
 * Original: 0x000F9630 - 0x000F964F (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9630: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000F963Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F963D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9647; /* je: equal / zero */

loc_000F9641: ;
    eax = MEM32(eax + 0x14);
    esp += 8; return; /* ret 4 */

loc_000F9647: ;
    eax = 0xB;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9650
 * Original: 0x000F9650 - 0x000F96E1 (145 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F9650: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x000F9667u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000F9667: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F966Du); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_000F966D: ;
    ebp = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x18);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F969E; /* je: equal / zero */

loc_000F967C: ;
    eax = MEM32(eax + 0x5B4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000F968Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F968D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F969E; /* je: equal / zero */

loc_000F9691: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    ecx = eax;
    PUSH32(esp, 0x000F969Eu); RECOMP_ABI_CALL(0x00103740u, sub_00103740); /* call 0x00103740 */

loc_000F969E: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x000F96ABu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000F96AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000F96B1u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_000F96B1: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F96DA; /* je: equal / zero */

loc_000F96B8: ;
    eax = MEM32(eax + 0x5B4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000F96C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F96C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F96DA; /* je: equal / zero */

loc_000F96CD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebx;
    ecx = eax;
    PUSH32(esp, 0x000F96DAu); RECOMP_ABI_CALL(0x00103740u, sub_00103740); /* call 0x00103740 */

loc_000F96DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F96F0
 * Original: 0x000F96F0 - 0x000F972C (60 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F96F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F96F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9725; /* je: equal / zero */

loc_000F96FA: ;
    esi = ecx + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000F9705u); RECOMP_ABI_CALL(0x000F9730u, sub_000F9730); /* call 0x000F9730 */

loc_000F9705: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9725; /* je: equal / zero */

loc_000F9709: ;
    ecx = MEM32(esi + 0xA59C);
    ecx = ecx & edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x524);
    ecx = ecx + esi;
    if ((ecx == 0)) goto loc_000F9725; /* je: equal / zero */

loc_000F971B: ;
    PUSH32(esp, 0x000F9720u); RECOMP_ABI_CALL(0x000FC5B0u, sub_000FC5B0); /* call 0x000FC5B0 */

loc_000F9720: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F9725: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9730
 * Original: 0x000F9730 - 0x000F9770 (64 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000F9730: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0xA59C);
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0xA51C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4 + 0xA51C), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000F976A; /* jne: not equal / not zero */

loc_000F9748: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(esi + edx * 4 + 0xA514);
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

loc_000F976A: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9770
 * Original: 0x000F9770 - 0x000F97C9 (89 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9770: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F97C3; /* je: equal / zero */

loc_000F9779: ;
    eax = MEM32(ecx + 0xAF84);
    edx = ecx + 0xA5A8;
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x9CC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x9CC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F97C3; /* jne: not equal / not zero */

loc_000F9790: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x9C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x9C4), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000F97C3; /* je: equal / zero */

loc_000F97AF: ;
    eax = MEM32(edx + 0x9DC);
    eax = eax & esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x268);
    eax = eax + edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F97C3: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F97D0
 * Original: 0x000F97D0 - 0x000F9826 (86 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F97D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F97D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9820; /* je: equal / zero */

loc_000F97D9: ;
    eax = MEM32(ecx + 0xA5A0);
    edx = ecx + 4;
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0xA51C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0xA51C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9820; /* jne: not equal / not zero */

loc_000F97ED: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0xA514)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0xA514), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000F9820; /* je: equal / zero */

loc_000F980C: ;
    eax = MEM32(edx + 0xA59C);
    eax = eax & esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x524);
    eax = eax + edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000F9820: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9830
 * Original: 0x000F9830 - 0x000F9859 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9830(void)
{

loc_000F9830: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xAF84);
    PUSH32(esp, edi);
    edi = ecx + 0xA5A8;
    esi = esi & edx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000F984Cu); RECOMP_ABI_CALL(0x000F9860u, sub_000F9860); /* call 0x000F9860 */

loc_000F984C: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000F9854u); RECOMP_ABI_CALL(0x000F72E0u, sub_000F72E0); /* call 0x000F72E0 */

loc_000F9854: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9860
 * Original: 0x000F9860 - 0x000F98DD (125 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9860: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000F986Eu); RECOMP_ABI_CALL(0x000F98E0u, sub_000F98E0); /* call 0x000F98E0 */

loc_000F986E: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x9C4);
    eax = esi + eax * 4 + 0x9C4;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x9B8);
    edx = MEM32(esi + 0x9C0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esi + 0x9B8) = eax;
    MEM32(esi + 0x9C0) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000F98C3; /* jl: less (signed <) */

loc_000F98B2: ;
    MEM32(esi + 0x9B8) = 0;
    eax = 3;
    goto loc_000F98C4;

loc_000F98C3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000F98C4: ;
    MEM32(esi + eax * 4 + 0x9A4) = edi;
    eax = MEM32(esi + 0x9C8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x9C8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F98E0
 * Original: 0x000F98E0 - 0x000F9924 (68 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F98E0(void)
{

loc_000F98E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x268);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000F98FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F98FA: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    eax = edi;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x9A0);
    eax = esi + eax * 4 + 0x9A0;
    edx = ~edx;
    ecx = ecx & edx;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9930
 * Original: 0x000F9930 - 0x000F994E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9930: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F9938u); RECOMP_ABI_CALL(0x000F8130u, sub_000F8130); /* call 0x000F8130 */

loc_000F9938: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9948; /* je: equal / zero */

loc_000F993F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F9945u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000F9945: ;
    esp = esp + 4;

loc_000F9948: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9950
 * Original: 0x000F9950 - 0x000F999F (79 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9950(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F9950: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xA5A0);
    PUSH32(esp, edi);
    edi = ecx + 4;
    esi = esi & MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000F9967u); RECOMP_ABI_CALL(0x000F7D80u, sub_000F7D80); /* call 0x000F7D80 */

loc_000F9967: ;
    ecx = MEM32(edi + 0xA5A0);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0xA51C) = MEM32(edi + esi * 4 + 0xA51C) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0xA51C) >= 0)) goto loc_000F999A; /* jns: not sign (positive) */

loc_000F997D: ;
    MEM32(edi + esi * 4 + 0xA51C) = esi;
    ecx = MEM32(edi + 0xA5A0);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0xA51C) = edx;

loc_000F999A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F99A0
 * Original: 0x000F99A0 - 0x000F9A00 (96 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F99A0(void)
{

loc_000F99A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F99A9u); RECOMP_ABI_CALL(0x00110390u, sub_00110390); /* call 0x00110390 */

loc_000F99A9: ;
    PUSH32(esp, 0x000F99AEu); RECOMP_ABI_CALL(0x00101E60u, sub_00101E60); /* call 0x00101E60 */

loc_000F99AE: ;
    PUSH32(esp, 0x000F99B3u); RECOMP_ABI_CALL(0x001027D0u, sub_001027D0); /* call 0x001027D0 */

loc_000F99B3: ;
    ebx = 0; /* xor self */
    ecx = esi + 0xA5A8;
    MEM8(0x48584B) = LO8(ebx);
    MEM8(0x48584A) = LO8(ebx);
    MEM8(0x44BB03) = 1;
    PUSH32(esp, 0x000F99D3u); RECOMP_ABI_CALL(0x000F7F90u, sub_000F7F90); /* call 0x000F7F90 */

loc_000F99D3: ;
    POP32(esp, esi);
    MEM8(0x4FEE21) = LO8(ebx);
    MEM32(0x4FEE08) = ebx;
    MEM32(0x4FF9E0) = ebx;
    MEM8(0x4FF9EC) = LO8(ebx);
    MEM32(0x4FF9E8) = ebx;
    MEM32(0x4FEE14) = ebx;
    MEM32(0x4FF9E4) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9A00
 * Original: 0x000F9A00 - 0x000F9A4E (78 bytes, 17 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9A00: ;
    SET_LO8(ecx, MEM8(0x4FED74));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9A48; /* jne: not equal / not zero */

loc_000F9A0F: ;
    edx = MEM32(0x4FED74);
    edx = edx | eax;
    ecx = 0x4F3DEC;
    MEM32(0x4FED74) = edx;
    MEM32(0x4F3DE8) = 0x3D98CC;
    PUSH32(esp, 0x000F9A31u); RECOMP_ABI_CALL(0x000F8090u, sub_000F8090); /* call 0x000F8090 */

loc_000F9A31: ;
    ecx = 0x4FE390;
    PUSH32(esp, 0x000F9A3Bu); RECOMP_ABI_CALL(0x000F7EE0u, sub_000F7EE0); /* call 0x000F7EE0 */

loc_000F9A3B: ;
    PUSH32(esp, 0x35A200);
    PUSH32(esp, 0x000F9A45u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_000F9A45: ;
    esp = esp + 4;

loc_000F9A48: ;
    eax = 0x4F3DE8;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9A50
 * Original: 0x000F9A50 - 0x000F9A81 (49 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9A50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9A7D; /* je: equal / zero */

loc_000F9A59: ;
    PUSH32(esp, 0x000F9A5Eu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000F9A5E: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20C); PUSH32(esp, 0x000F9A6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9A6F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9A7D; /* je: equal / zero */

loc_000F9A73: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000F9A7Du); RECOMP_ABI_CALL(0x000FB010u, sub_000FB010); /* call 0x000FB010 */

loc_000F9A7D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9A90
 * Original: 0x000F9A90 - 0x000F9AFA (106 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9A90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9AF4; /* je: equal / zero */

loc_000F9A99: ;
    PUSH32(esp, 0x000F9A9Eu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000F9A9E: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20C); PUSH32(esp, 0x000F9AAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9AAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9AD1; /* je: equal / zero */

loc_000F9AB3: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000F9AC7u); RECOMP_ABI_CALL(0x000FAA10u, sub_000FAA10); /* call 0x000FAA10 */

loc_000F9AC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9AF4; /* jne: not equal / not zero */

loc_000F9ACB: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F9AD1: ;
    PUSH32(esp, 0x000F9AD6u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000F9AD6: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5B4);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000F9AEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9AEA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9AF4; /* jne: not equal / not zero */

loc_000F9AEE: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F9AF4: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9B00
 * Original: 0x000F9B00 - 0x000F9B29 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F9B00(void)
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

loc_000F9B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F9B08u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F9B08: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000F9B12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9B12: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x258)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x258] */
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F9B26; /* jp: parity */

loc_000F9B20: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000F9B26: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F9B30
 * Original: 0x000F9B30 - 0x000F9B59 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000F9B30(void)
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

loc_000F9B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F9B38u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F9B38: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000F9B42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9B42: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x25C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x25c] */
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F9B56; /* jp: parity */

loc_000F9B50: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000F9B56: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F9B60
 * Original: 0x000F9B60 - 0x000F9BDF (127 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9B60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000F9BDA; /* je: equal / zero */

loc_000F9B6C: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9BDA; /* je: equal / zero */

loc_000F9B74: ;
    eax = MEM32(edi + 0x264);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9B9F; /* jne: not equal / not zero */

loc_000F9B7E: ;
    eax = MEM32(ecx + 0x1C);
    MEM32(edi + 0x264) = eax;
    MEM8(esi + 0x320) = 0;
    esi = MEM32(esi + 0x314);
    MEM32(edi + 0x260) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000F9B9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9BDA; /* je: equal / zero */

loc_000F9BA4: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9BD3; /* jne: not equal / not zero */

loc_000F9BAA: ;
    eax = MEM32(esi + 0x310);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9BD3; /* jne: not equal / not zero */

loc_000F9BB4: ;
    PUSH32(esp, 0x15);
    ecx = esi;
    PUSH32(esp, 0x000F9BBDu); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000F9BBD: ;
    MEM32(esi + 0x310) = 1;
    edi = MEM32(edi + 0x260);
    MEM32(esi + 0x314) = edi;

loc_000F9BD3: ;
    MEM8(esi + 0x320) = 1;

loc_000F9BDA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000F9BE0
 * Original: 0x000F9BE0 - 0x000F9BEF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9BE0(void)
{

loc_000F9BE0: ;
    eax = 0; /* xor self */
    MEM32(ecx + 0x260) = eax;
    MEM32(ecx + 0x264) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9BF0
 * Original: 0x000F9BF0 - 0x000F9C55 (101 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9BF0(void)
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

loc_000F9BF0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMD(0x3D9B40)); /* fld double */
    PUSH32(esp, 0x000F9BFFu); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_000F9BFF: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F9C1E; /* jp: parity */

loc_000F9C10: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C97B8); /* fadd dword ptr [0x3c97b8] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000F9C1E: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMD(0x3D9B40)); /* fld double */
    PUSH32(esp, 0x000F9C2Du); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_000F9C2D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F9C40; /* jp: parity */

loc_000F9C3A: ;
    fp_top() = fp_top() + MEMF(0x3C97B8); /* fadd dword ptr [0x3c97b8] */

loc_000F9C40: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9C50; /* jne: not equal / not zero */

loc_000F9C4B: ;
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    esp += 4; return; /* ret */

loc_000F9C50: ;
    fp_top() = MEMF(esp + 4) - fp_top(); /* fsubr dword ptr [esp + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F9C60
 * Original: 0x000F9C60 - 0x000F9CC2 (98 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9C60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edi = ebx + 0x3C;
    /* nop */

loc_000F9C70: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9C8F; /* je: equal / zero */

loc_000F9C75: ;
    ecx = edi;
    PUSH32(esp, 0x000F9C7Cu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000F9C7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9C8F; /* je: equal / zero */

loc_000F9C80: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F9C70; /* jl: less (signed <) */

loc_000F9C89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000F9C8F: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = esi + esi * 2;
    eax = ebx + eax * 8 + 0x3C;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    POP32(esp, edi);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 0x14);
    POP32(esp, esi);
    MEM32(eax + 0x14) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9CD0
 * Original: 0x000F9CD0 - 0x000F9D44 (116 bytes, 34 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9CD0(void)
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

loc_000F9CD0: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F9D3D; /* jnp: not parity */

loc_000F9CE7: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, 0x000F9CFCu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F9CFC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000F9D06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9D06: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000F9D0Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F9D0F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000F9D19u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9D19: ;
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    edx = esp + 4;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000F9D3Du); RECOMP_ABI_CALL(0x000F9C60u, sub_000F9C60); /* call 0x000F9C60 */

loc_000F9D3D: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F9D50
 * Original: 0x000F9D50 - 0x000F9D88 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9D50(void)
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

loc_000F9D50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x3C;
    edi = 0x14;
    /* nop */

loc_000F9D60: ;
    PUSH32(esp, 0x000F9D65u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F9D65: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000F9D6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9D6F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9D7F; /* jne: not equal / not zero */

loc_000F9D79: ;
    MEM32(esi) = 0;

loc_000F9D7F: ;
    esi = esi + 0x18;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000F9D60; /* jne: not equal / not zero */

loc_000F9D85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F9D90
 * Original: 0x000F9D90 - 0x000F9E37 (167 bytes, 66 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9D90(void)
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

loc_000F9D90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ebx + 0x3C;
    /* nop */

loc_000F9DA0: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9DE7; /* je: equal / zero */

loc_000F9DA5: ;
    ecx = esi;
    PUSH32(esp, 0x000F9DACu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000F9DAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9DE7; /* je: equal / zero */

loc_000F9DB0: ;
    PUSH32(esp, 0x000F9DB5u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F9DB5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000F9DBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9DBF: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F9DE7; /* jp: parity */

loc_000F9DC9: ;
    PUSH32(esp, 0x000F9DCEu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F9DCE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000F9DD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9DD8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9DE7; /* jne: not equal / not zero */

loc_000F9DE2: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9DF9; /* jne: not equal / not zero */

loc_000F9DE7: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F9DA0; /* jl: less (signed <) */

loc_000F9DF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_000F9DF9: ;
    ecx = MEM32(esp + 0x18);
    eax = edi + edi * 2;
    edx = MEM32(ebx + eax * 8 + 0x3C);
    eax = ebx + eax * 8 + 0x3C;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(eax + 0x14);
    MEM32(ecx + 0x14) = eax;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F9E40
 * Original: 0x000F9E40 - 0x000F9E72 (50 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9E40(void)
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

loc_000F9E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000F9E48u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000F9E48: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000F9E52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9E52: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x258)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x258] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000F9E6E; /* jnp: not parity */

loc_000F9E5F: ;
    eax = MEM32(esp + 8);
    eax = eax + eax * 2;
    MEM32(esi + eax * 8 + 0x3C) = 0;

loc_000F9E6E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000F9E80
 * Original: 0x000F9E80 - 0x000F9EBC (60 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9E80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F9E80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + -1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000F9EB3; /* jl: less (signed <) */

loc_000F9E90: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax);

loc_000F9E96: ;
    eax = esi + edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F9EAA; /* jle: less or equal (signed <=) */

loc_000F9EA5: ;
    esi = eax + -1;
    goto loc_000F9EAF;

loc_000F9EAA: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000F9EB5; /* jge: greater or equal (signed >=) */

loc_000F9EAC: ;
    edi = eax + 1;

loc_000F9EAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000F9E96; /* jge: greater or equal (signed >=) */

loc_000F9EB3: ;
    eax = ebp;

loc_000F9EB5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9EC0
 * Original: 0x000F9EC0 - 0x000FA30B (1099 bytes, 360 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9EC0(void)
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

loc_000F9EC0: ;
    esp = esp - 0x118;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    edi = ecx + 4;
    MEM32(esp + 0x1C) = ecx;
    ebx = 0; /* xor self */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = esi;

loc_000F9EDD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x24) (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000F9EEE; /* jne: not equal / not zero */

loc_000F9EE6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA024; /* je: equal / zero */

loc_000F9EEE: ;
    PUSH32(esp, 0x000F9EF3u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000F9EF3: ;
    ecx = MEM32(edi + ebx * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000F9F01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9F01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000FA01E; /* je: equal / zero */

loc_000F9F0D: ;
    ebp = MEM32(eax + 0x10);
    edi = MEM32(ebp + 0x340);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA015; /* je: equal / zero */

loc_000F9F1E: ;
    _fa = (uint32_t)(MEM8(ebp + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x334), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA015; /* je: equal / zero */

loc_000F9F2B: ;
    SET_LO8(eax, MEM8(eax + 0x289));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA015; /* jne: not equal / not zero */

loc_000F9F39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA015; /* je: equal / zero */

loc_000F9F41: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000F9F4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9F4E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9FD2; /* je: equal / zero */

loc_000F9F53: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + ebx * 4);
    ecx = MEM32(esp + 0x10);
    MEM32(esp + ecx * 4 + 0x108) = edx;
    edx = MEM32(ebp + 0x20);
    ecx = MEM32(ebp + 0x24);
    MEM32(esp + esi + 0xA8) = edx;
    edx = MEM32(ebp + 0x28);
    MEM32(esp + esi + 0xAC) = ecx;
    MEM32(esp + esi + 0xB0) = edx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000F9F8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9F8B: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + esi + 0x48) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + esi + 0x4C) = edx;
    MEM32(esp + esi + 0x50) = eax;
    MEM32(esp + 0x10) = ecx;
    esi = esi + 0xC;
    PUSH32(esp, 0x000F9FB0u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000F9FB0: ;
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(ecx + ebx * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000F9FC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9FC2: ;
    ebx = MEM32(esp + 0x20);
    MEM32(eax + 0x294) = 8;
    goto loc_000F9FF9;

loc_000F9FD2: ;
    PUSH32(esp, 0x000F9FD7u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000F9FD7: ;
    ecx = MEM32(esp + 0x14);
    ecx = MEM32(ecx + ebx * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000F9FE9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000F9FE9: ;
    SET_LO8(ecx, MEM8(eax + 0x289));
    eax = eax + 0x289;
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    MEM8(eax) = LO8(ecx);

loc_000F9FF9: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000FA006u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA006: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000FA015u); RECOMP_ABI_CALL(0x000F9B60u, sub_000F9B60); /* call 0x000F9B60 */

loc_000FA015: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x24 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FA024; /* jge: greater or equal (signed >=) */

loc_000FA01A: ;
    edi = MEM32(esp + 0x14);

loc_000FA01E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000F9EDD;

loc_000FA024: ;
    ecx = MEM32(esp + 0x10);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FA300; /* jle: less or equal (signed <=) */

loc_000FA033: ;
    eax = ecx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FA300; /* jle: less or equal (signed <=) */

loc_000FA042: ;
    ebx = esp + 0x54;
    MEM32(esp + 0x18) = ebx;
    /* nop */

loc_000FA050: ;
    edx = MEM32(esp + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x1C) = edx;
    esi = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000FA0D1; /* jge: greater or equal (signed >=) */

loc_000FA05F: ;
    edi = ebx;

loc_000FA061: ;
    fp_push(MEMF(ebx + -12)); /* fld float */
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    fp_push(MEMF(ebx + -8)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C94A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c94a4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FA0C5; /* jp: parity */

loc_000FA07D: ;
    SET_LO8(edx, 1);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    SET_LO8(ebx, LO8(edx));
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FA0AF; /* jle: less or equal (signed <=) */

loc_000FA087: ;
    goto loc_000FA090;

    /* nop */

loc_000FA090: ;
    ecx = MEM32(esp + eax * 4 + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA09C; /* jne: not equal / not zero */

loc_000FA09A: ;
    SET_LO8(edx, 0); /* xor self */

loc_000FA09C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA0A2; /* jne: not equal / not zero */

loc_000FA0A0: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000FA0A2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FA090; /* jl: less (signed <) */

loc_000FA0A7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_000FA0B8; /* je: equal / zero */

loc_000FA0AF: ;
    edx = MEM32(esp + 0x14);
    MEM32(esp + ebp * 4 + 0x28) = edx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FA0B8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    ebx = MEM32(esp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_000FA0C5; /* je: equal / zero */

loc_000FA0C0: ;
    MEM32(esp + ebp * 4 + 0x28) = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FA0C5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FA061; /* jl: less (signed <) */

loc_000FA0CD: ;
    edx = MEM32(esp + 0x1C);

loc_000FA0D1: ;
    ebx = ebx + 0xC;
    eax = ecx + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_000FA050; /* jl: less (signed <) */

loc_000FA0E7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FA300; /* jle: less or equal (signed <=) */

loc_000FA0F0: ;
    fp_push(MEMF(0x3D9B48)); /* fld float */
    edi = 0; /* xor self */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FA264; /* jl: less (signed <) */

loc_000FA103: ;
    esi = ebp + -3;
    edx = 2;
    goto loc_000FA110;

    /* nop */

loc_000FA110: ;
    eax = MEM32(esp + ecx * 4 + 0x28);
    fp_push(MEMF(esp + 0x50)); /* fld float */
    eax = eax + eax * 2;
    fp_top() = fp_top() - MEMF(esp + eax * 4 + 0xB0); /* fsub dword ptr [esp + eax*4 + 0xb0] */
    eax = esp + eax * 4 + 0xA8;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FA161; /* jp: parity */

loc_000FA159: ;
    fp_pop(); /* fstp st(0) */
    edi = ecx;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_000FA161: ;
    eax = MEM32(esp + ecx * 4 + 0x2C);
    fp_push(MEMF(esp + 0x50)); /* fld float */
    eax = eax + eax * 2;
    fp_top() = fp_top() - MEMF(esp + eax * 4 + 0xB0); /* fsub dword ptr [esp + eax*4 + 0xb0] */
    eax = esp + eax * 4 + 0xA8;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FA1B3; /* jp: parity */

loc_000FA1AA: ;
    fp_pop(); /* fstp st(0) */
    edi = edx + -1;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_000FA1B3: ;
    eax = MEM32(esp + ecx * 4 + 0x30);
    fp_push(MEMF(esp + 0x50)); /* fld float */
    eax = eax + eax * 2;
    fp_top() = fp_top() - MEMF(esp + eax * 4 + 0xB0); /* fsub dword ptr [esp + eax*4 + 0xb0] */
    eax = esp + eax * 4 + 0xA8;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FA204; /* jp: parity */

loc_000FA1FC: ;
    fp_pop(); /* fstp st(0) */
    edi = edx;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_000FA204: ;
    eax = MEM32(esp + ecx * 4 + 0x34);
    fp_push(MEMF(esp + 0x50)); /* fld float */
    eax = eax + eax * 2;
    fp_top() = fp_top() - MEMF(esp + eax * 4 + 0xB0); /* fsub dword ptr [esp + eax*4 + 0xb0] */
    eax = esp + eax * 4 + 0xA8;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FA256; /* jp: parity */

loc_000FA24D: ;
    fp_pop(); /* fstp st(0) */
    edi = edx + 1;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_000FA256: ;
    ecx = ecx + 4;
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FA110; /* jl: less (signed <) */

loc_000FA264: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FA2C6; /* jge: greater or equal (signed >=) */

loc_000FA268: ;
    goto loc_000FA270;

    /* nop */

loc_000FA270: ;
    eax = MEM32(esp + ecx * 4 + 0x28);
    fp_push(MEMF(esp + 0x50)); /* fld float */
    eax = eax + eax * 2;
    fp_top() = fp_top() - MEMF(esp + eax * 4 + 0xB0); /* fsub dword ptr [esp + eax*4 + 0xb0] */
    eax = esp + eax * 4 + 0xA8;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FA2C1; /* jp: parity */

loc_000FA2B9: ;
    fp_pop(); /* fstp st(0) */
    edi = ecx;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_000FA2C1: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FA270; /* jl: less (signed <) */

loc_000FA2C6: ;
    esi = 0; /* xor self */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FA300; /* jle: less or equal (signed <=) */

loc_000FA2CE: ;
    edi = edi;

loc_000FA2D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA2FB; /* je: equal / zero */

loc_000FA2D4: ;
    PUSH32(esp, 0x000FA2D9u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA2D9: ;
    ecx = MEM32(esp + esi * 4 + 0x28);
    ecx = MEM32(esp + ecx * 4 + 0x108);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA2F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA2F4: ;
    ecx = eax;
    PUSH32(esp, 0x000FA2FBu); RECOMP_ABI_CALL(0x000FC110u, sub_000FC110); /* call 0x000FC110 */

loc_000FA2FB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FA2D0; /* jl: less (signed <) */

loc_000FA300: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x118;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FA310
 * Original: 0x000FA310 - 0x000FA449 (313 bytes, 89 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA310(void)
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

loc_000FA310: ;
    esp = esp - 0x5C;
    eax = MEM32(esp + 0x68);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = ecx + 4;
    PUSH32(esp, edi);
    ecx = esp + 0x74;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x20) = 0x41A00000;
    MEM32(esp + 0x24) = 0x41A00000;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = 0xC1A00000u;
    MEM32(esp + 0x30) = 0x41A00000;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = 0xC1A00000u;
    MEM32(esp + 0x3C) = 0xC1A00000u;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, 0x000FA370u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FA370: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA440; /* je: equal / zero */

loc_000FA37A: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FA381u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA381: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA43F; /* je: equal / zero */

loc_000FA3A3: ;
    ebp = MEM32(esp + 0x70);

loc_000FA3A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA3B4; /* jne: not equal / not zero */

loc_000FA3AC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA43F; /* je: equal / zero */

loc_000FA3B4: ;
    PUSH32(esp, 0x000FA3B9u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA3B9: ;
    ecx = MEM32(esi + ebx * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA3C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA3C7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA435; /* je: equal / zero */

loc_000FA3CD: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x74);
    _fa = (uint32_t)(MEM32(edx + 0x5B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x5B4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA435; /* je: equal / zero */

loc_000FA3DC: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA435; /* je: equal / zero */

loc_000FA3E3: ;
    _fa = (uint32_t)(MEM8(esi + 0x288)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x288), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA431; /* jne: not equal / not zero */

loc_000FA3EC: ;
    ecx = MEM32(esp + 0x10);
    eax = ecx + ebp * 2;
    eax = eax + ebp;
    eax = eax + eax * 2;
    fp_push(MEMF(esp + eax * 4 + 0x24)); /* fld float */
    eax = esp + eax * 4 + 0x24;
    fp_top() = fp_top() + MEMF(edi + 0x20); /* fadd dword ptr [edi + 0x20] */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x24); /* fadd dword ptr [edi + 0x24] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x28); /* fadd dword ptr [edi + 0x28] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000FA427u); RECOMP_ABI_CALL(0x00101940u, sub_00101940); /* call 0x00101940 */

loc_000FA427: ;
    MEM32(esi + 0x2B4) = 4;

loc_000FA431: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FA435: ;
    esi = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FA3A7;

loc_000FA43F: ;
    POP32(esp, ebp);

loc_000FA440: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FA450
 * Original: 0x000FA450 - 0x000FA581 (305 bytes, 98 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA450(void)
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

loc_000FA450: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ecx + 4;
    SET_LO8(ebx, 1);
    /* nop */

loc_000FA460: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA46D; /* jne: not equal / not zero */

loc_000FA465: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA579; /* je: equal / zero */

loc_000FA46D: ;
    PUSH32(esp, 0x000FA472u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA472: ;
    ecx = MEM32(esi + edi * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA480u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA480: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA573; /* je: equal / zero */

loc_000FA488: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x340);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA50E; /* je: equal / zero */

loc_000FA495: ;
    _fa = (uint32_t)(MEM8(edx + 0x334)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x334), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA50E; /* je: equal / zero */

loc_000FA49D: ;
    ebp = MEM32(edx + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA50E; /* je: equal / zero */

loc_000FA4A6: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000FA4B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA4B1: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA573; /* je: equal / zero */

loc_000FA4BA: ;
    PUSH32(esp, 0x000FA4BFu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA4BF: ;
    ecx = MEM32(esi + edi * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA4CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA4CD: ;
    SET_LO8(edx, MEM8(eax + 0x289));
    eax = eax + 0x289;
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEM8(eax) = LO8(edx);
    PUSH32(esp, 0x000FA4E1u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA4E1: ;
    ebp = eax;
    PUSH32(esp, 0x000FA4E8u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000FA4E8: ;
    fp_top() = fp_top() + MEMF(0x3C8324); /* fadd dword ptr [0x3c8324] */
    eax = MEM32(esi + edi * 4);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA501u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA501: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x1C) = ecx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FA460;

loc_000FA50E: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA573; /* jne: not equal / not zero */

loc_000FA514: ;
    _fa = (uint32_t)(MEM8(edx + 0x334)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x334), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA573; /* je: equal / zero */

loc_000FA51C: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(edx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x1C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA573; /* je: equal / zero */

loc_000FA525: ;
    PUSH32(esp, 0x000FA52Au); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA52A: ;
    ecx = MEM32(esi + edi * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA538u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA538: ;
    SET_LO8(edx, MEM8(eax + 0x289));
    eax = eax + 0x289;
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    MEM8(eax) = LO8(edx);
    PUSH32(esp, 0x000FA54Cu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA54C: ;
    ebp = eax;
    PUSH32(esp, 0x000FA553u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000FA553: ;
    fp_top() = fp_top() + MEMF(0x3C8324); /* fadd dword ptr [0x3c8324] */
    eax = MEM32(esi + edi * 4);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA56Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA56C: ;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x1C) = ecx;

loc_000FA573: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FA460;

loc_000FA579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FA590
 * Original: 0x000FA590 - 0x000FA5F0 (96 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FA590: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ecx + 4;

loc_000FA5A1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA5AA; /* jne: not equal / not zero */

loc_000FA5A6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA5E9; /* je: equal / zero */

loc_000FA5AA: ;
    PUSH32(esp, 0x000FA5AFu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA5AF: ;
    ecx = MEM32(esi + edi * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA5BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA5BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA5E6; /* je: equal / zero */

loc_000FA5C1: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA5E6; /* je: equal / zero */

loc_000FA5C9: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA5D5; /* je: equal / zero */

loc_000FA5D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA5E6; /* jne: not equal / not zero */

loc_000FA5D5: ;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebx;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = ebp;
    ecx = eax;
    PUSH32(esp, 0x000FA5E6u); RECOMP_ABI_CALL(0x00104AA0u, sub_00104AA0); /* call 0x00104AA0 */

loc_000FA5E6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FA5A1;

loc_000FA5E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FA5F0
 * Original: 0x000FA5F0 - 0x000FAA04 (1044 bytes, 313 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA5F0(void)
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

loc_000FA5F0: ;
    eax = MEM32(esp + 8);
    esp = esp - 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000FA9F8; /* je: equal / zero */

loc_000FA605: ;
    ecx = esp + 0x84;
    PUSH32(esp, 0x000FA611u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FA611: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA9F8; /* je: equal / zero */

loc_000FA619: ;
    ebp = 0; /* xor self */
    edi = edi + 4;
    ebx = 0; /* xor self */
    MEM32(esp + 0x10) = ebx;

loc_000FA624: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA62D; /* jne: not equal / not zero */

loc_000FA629: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA66B; /* je: equal / zero */

loc_000FA62D: ;
    PUSH32(esp, 0x000FA632u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA632: ;
    ecx = MEM32(edi + ebp * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA640u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA640: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA668; /* je: equal / zero */

loc_000FA646: ;
    ecx = esi;
    PUSH32(esp, 0x000FA64Du); RECOMP_ABI_CALL(0x000FC210u, sub_000FC210); /* call 0x000FC210 */

loc_000FA64D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA668; /* jne: not equal / not zero */

loc_000FA651: ;
    esi = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x338);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x84) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA668; /* jne: not equal / not zero */

loc_000FA663: ;
    MEM32(esp + ebx * 4 + 0x34) = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FA668: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FA624;

loc_000FA66B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000FA9F8; /* je: equal / zero */

loc_000FA678: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x88);
    eax = esp;
    MEM32(esp + 0x1C) = 0x43B40000;
    MEM32(esp + 0x18) = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000FA695u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000FA695: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA9F8; /* je: equal / zero */

loc_000FA6A2: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    ebp = MEM32(esp + 0x84);
    fp_top() = fp_top() * MEMF(0x3CA91C); /* fmul dword ptr [0x3ca91c] */
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FA791; /* jle: less or equal (signed <=) */

loc_000FA6C0: ;
    ebx = MEM32(esp + 0x14);

loc_000FA6C4: ;
    edx = MEM32(esi + 0x20);
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = MEM32(esi + 0x24);
    MEM32(esp + 0x20) = eax;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(esp + edi * 4 + 0x34);
    MEM32(esp + 0x24) = ecx;
    fp_top() = fp_top() - MEMF(eax + 0x20); /* fsub dword ptr [eax + 0x20] */
    eax = eax + 0x20;
    edx = esp + 0x1C;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 8); /* fsub dword ptr [eax + 8] */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000FA74Au); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000FA74A: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = fp_top() * MEMF(0x3CA91C); /* fmul dword ptr [0x3ca91c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000FA762u); RECOMP_ABI_CALL(0x000F9BF0u, sub_000F9BF0); /* call 0x000F9BF0 */

loc_000FA762: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEMF(esp + edi * 4 + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0x10;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FA780; /* jp: parity */

loc_000FA778: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = edi;
    goto loc_000FA782;

loc_000FA780: ;
    fp_pop(); /* fstp st(0) */

loc_000FA782: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FA6C4; /* jl: less (signed <) */

loc_000FA78F: ;
    ebx = eax;

loc_000FA791: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA8A9; /* jne: not equal / not zero */

loc_000FA79A: ;
    edi = 0; /* xor self */
    PUSH32(esp, 0x000FA7A1u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA7A1: ;
    esi = MEM32(esp + ebp * 4 + 0x34);
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA7B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA7B6: ;
    MEM32(eax + 0x2B8) = edi;
    PUSH32(esp, 0x000FA7C1u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA7C1: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA7D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA7D2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM8(eax + 0x2BC) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_000FA7E2; /* jne: not equal / not zero */

loc_000FA7DD: ;
    edi = 1;

loc_000FA7E2: ;
    PUSH32(esp, 0x000FA7E7u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA7E7: ;
    esi = MEM32(esp + edi * 4 + 0x34);
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA7FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA7FC: ;
    fp_push(MEMF(esp + ebp * 4 + 0x58)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + edi * 4 + 0x58); /* fsub dword ptr [esp + edi*4 + 0x58] */
    ecx = esp + ebp * 4 + 0x58;
    edx = esp + edi * 4 + 0x58;
    MEM8(eax + 0x2BC) = 1;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA859; /* jne: not equal / not zero */

loc_000FA820: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB1F8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb1f8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FA87D; /* jp: parity */

loc_000FA82D: ;
    PUSH32(esp, 0x000FA832u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA832: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA843u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA843: ;
    MEM32(eax + 0x2B8) = 0xFFFFFFFFu;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 16; return; /* ret 12 */

loc_000FA859: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA9F6; /* jne: not equal / not zero */

loc_000FA870: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB1F8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb1f8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FA82D; /* jp: parity */

loc_000FA87D: ;
    PUSH32(esp, 0x000FA882u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA882: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA893u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA893: ;
    MEM32(eax + 0x2B8) = 1;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 16; return; /* ret 12 */

loc_000FA8A9: ;
    if (CMP_LE(_fas, _fbs)) goto loc_000FA9F8; /* jle: less or equal (signed <=) */

loc_000FA8AF: ;
    PUSH32(esp, 0x000FA8B4u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA8B4: ;
    esi = MEM32(esp + ebp * 4 + 0x34);
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA8C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA8C9: ;
    edi = 0; /* xor self */
    MEM32(eax + 0x2B8) = edi;
    PUSH32(esp, 0x000FA8D6u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA8D6: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA8E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA8E7: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM8(eax + 0x2BC) = 1;
    eax = ebx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    fp_top() = MEMF(0x3C97B8) / fp_top(); /* fdivr dword ptr [0x3c97b8] */
    esi = ebp + 1;
    MEM32(esp + 0x10) = edi;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_000FA9F8; /* jle: less or equal (signed <=) */

loc_000FA90E: ;
    ebp = esp + ebp * 4 + 0x58;
    edi = eax;

loc_000FA914: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FA91A; /* jl: less (signed <) */

loc_000FA918: ;
    esi = 0; /* xor self */

loc_000FA91A: ;
    fp_push(MEMF(ebp)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + esi * 4 + 0x58); /* fsub dword ptr [esp + esi*4 + 0x58] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA967; /* jne: not equal / not zero */

loc_000FA92E: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FA990; /* jp: parity */

loc_000FA941: ;
    PUSH32(esp, 0x000FA946u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA946: ;
    ecx = MEM32(esp + esi * 4 + 0x34);
    ecx = MEM32(ecx + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA95Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA95B: ;
    MEM32(eax + 0x2B8) = 0xFFFFFFFFu;
    goto loc_000FA9B8;

loc_000FA967: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + esi * 4 + 0x58)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA9B6; /* jne: not equal / not zero */

loc_000FA97D: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FA941; /* jp: parity */

loc_000FA990: ;
    PUSH32(esp, 0x000FA995u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA995: ;
    ecx = MEM32(esp + esi * 4 + 0x34);
    ecx = MEM32(ecx + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA9AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA9AA: ;
    MEM32(eax + 0x2B8) = 1;
    goto loc_000FA9B8;

loc_000FA9B6: ;
    fp_pop(); /* fstp st(0) */

loc_000FA9B8: ;
    PUSH32(esp, 0x000FA9BDu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FA9BD: ;
    ecx = MEM32(esp + esi * 4 + 0x34);
    ecx = MEM32(ecx + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FA9D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FA9D2: ;
    ecx = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x2BC) = 1;
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_000FA914; /* jne: not equal / not zero */

loc_000FA9EA: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 16; return; /* ret 12 */

loc_000FA9F6: ;
    fp_pop(); /* fstp st(0) */

loc_000FA9F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x6C;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FAA10
 * Original: 0x000FAA10 - 0x000FAAC6 (182 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAA10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FAA10: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x000FAA2Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FAA2A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FAA6E; /* je: equal / zero */

loc_000FAA30: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FAA36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAA36: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FAA6E; /* je: equal / zero */

loc_000FAA54: ;
    PUSH32(esp, 0x000FAA59u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FAA59: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FAA6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAA6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FAA7A; /* jne: not equal / not zero */

loc_000FAA6E: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_000FAA7A: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAAA3; /* jne: not equal / not zero */

loc_000FAA80: ;
    MEM8(eax + 0x2BC) = 0;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x338);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = edi;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x000FAAA3u); RECOMP_ABI_CALL(0x000FA5F0u, sub_000FA5F0); /* call 0x000FA5F0 */

loc_000FAAA3: ;
    PUSH32(esp, 0x000FAAA8u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FAAA8: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5B4);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000FAABCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAABC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FAAD0
 * Original: 0x000FAAD0 - 0x000FADB7 (743 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAAD0(void)
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

loc_000FAAD0: ;
    esp = esp - 0xDC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ecx + 4;
    ebp = 0; /* xor self */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x10) = ebp;

loc_000FAAED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x24) (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000FAAFE; /* jne: not equal / not zero */

loc_000FAAF6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FACD9; /* je: equal / zero */

loc_000FAAFE: ;
    PUSH32(esp, 0x000FAB03u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FAB03: ;
    ecx = MEM32(esi + edi * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FAB11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAB11: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FACD3; /* je: equal / zero */

loc_000FAB1B: ;
    edi = MEM32(ebx + 0x10);
    _fa = (uint32_t)(MEM8(edi + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x334), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FAB2C; /* je: equal / zero */

loc_000FAB27: ;
    edx = MEM32(ebx + 0x18);
    goto loc_000FAB55;

loc_000FAB2C: ;
    eax = MEM32(edi + 0x33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000FABEF; /* je: equal / zero */

loc_000FAB3E: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000FAB47u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FAB47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FABEF; /* je: equal / zero */

loc_000FAB4F: ;
    edx = MEM32(edi + 0x33C);

loc_000FAB55: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000FAB62u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FAB62: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FABEF; /* je: equal / zero */

loc_000FAB6C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FAB72u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAB72: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FABEB; /* je: equal / zero */

loc_000FAB90: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FABEB; /* jne: not equal / not zero */

loc_000FABA3: ;
    ecx = esi;
    PUSH32(esp, 0x000FABAAu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FABAA: ;
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x000FABB3u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FABB3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FABEB; /* je: equal / zero */

loc_000FABB7: ;
    PUSH32(esp, 0x000FABBCu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FABBC: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FABCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FABCD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FABEB; /* je: equal / zero */

loc_000FABD1: ;
    ecx = eax;
    PUSH32(esp, 0x000FABD8u); RECOMP_ABI_CALL(0x000FC200u, sub_000FC200); /* call 0x000FC200 */

loc_000FABD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FABEB; /* je: equal / zero */

loc_000FABDC: ;
    ebp = MEM32(esp + 0x10);
    MEM32(esp + ebp * 4 + 0x28) = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    goto loc_000FABEF;

loc_000FABEB: ;
    ebp = MEM32(esp + 0x10);

loc_000FABEF: ;
    edi = ebx + 0x198;
    MEM32(esp + 0x10) = 5;
    /* nop */

loc_000FAC00: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FACB5; /* je: equal / zero */

loc_000FAC09: ;
    ecx = edi;
    PUSH32(esp, 0x000FAC10u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FAC10: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FACB5; /* je: equal / zero */

loc_000FAC18: ;
    edx = MEM32(edi);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000FAC27u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FAC27: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FACB5; /* je: equal / zero */

loc_000FAC31: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FAC37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAC37: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FACB5; /* je: equal / zero */

loc_000FAC55: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FACB5; /* jne: not equal / not zero */

loc_000FAC68: ;
    PUSH32(esp, 0x000FAC6Du); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FAC6D: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FAC7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAC7E: ;
    edx = MEM32(esi + 0x2D8);
    fp_push(MEMF(edx + 0x478)); /* fld float */
    ecx = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9B4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d9b4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FACA6; /* je: equal / zero */

loc_000FAC99: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FACB5; /* je: equal / zero */

loc_000FAC9D: ;
    PUSH32(esp, 0x000FACA2u); RECOMP_ABI_CALL(0x000FC200u, sub_000FC200); /* call 0x000FC200 */

loc_000FACA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FACB5; /* je: equal / zero */

loc_000FACA6: ;
    eax = MEM32(esi + 4);
    eax = eax >> 0xE;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FACB5; /* je: equal / zero */

loc_000FACB0: ;
    MEM32(esp + ebp * 4 + 0x28) = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FACB5: ;
    eax = MEM32(esp + 0x10);
    edi = edi - 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000FAC00; /* jne: not equal / not zero */

loc_000FACC7: ;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = ebp;

loc_000FACD3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FAAED;

loc_000FACD9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FADA8; /* jle: less or equal (signed <=) */

loc_000FACE1: ;
    ebx = 1;
    edi = esp + 0x28;
    MEM32(esp + 0x14) = ebp;
    edi = edi;

loc_000FACF0: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FAD95; /* je: equal / zero */

loc_000FACFA: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x246);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = 0x3F800000;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = MEMF(esi + 0x240) / fp_top(); /* fdivr dword ptr [esi + 0x240] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7084)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7084] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FAD4B; /* jp: parity */

loc_000FAD28: ;
    edx = MEM32(esi + 0x2D8);
    fp_push(MEMF(edx + 0x478)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8324)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8324] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FAD4B; /* jp: parity */

loc_000FAD41: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FAD4B: ;
    PUSH32(esp, 0x000FAD50u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FAD50: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FAD61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAD61: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    fp_top() = fp_top() * MEMF(eax + 0x444); /* fmul dword ptr [eax + 0x444] */
    eax = ebx;
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_000FAD95; /* jge: greater or equal (signed >=) */

loc_000FAD79: ;
    /* nop */

loc_000FAD80: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + eax * 4 + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + eax * 4 + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAD90; /* jne: not equal / not zero */

loc_000FAD88: ;
    MEM32(esp + eax * 4 + 0x28) = 0;

loc_000FAD90: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FAD80; /* jl: less (signed <) */

loc_000FAD95: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_000FACF0; /* jne: not equal / not zero */

loc_000FADA8: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xDC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FADC0
 * Original: 0x000FADC0 - 0x000FB009 (585 bytes, 174 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FADC0(void)
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

loc_000FADC0: ;
    esp = esp - 0xDC;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000FADCEu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FADCE: ;
    ecx = MEM32(esi + 0x258);
    edx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FADE2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FADE2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FADFD; /* jp: parity */

loc_000FADED: ;
    fp_push(MEMF(0x3C8244)); /* fld float */
    POP32(esp, esi);
    esp = esp + 0xDC;
    esp += 8; return; /* ret 4 */

loc_000FADFD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    esi = esi + 4;
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x10) = ebp;

loc_000FAE13: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x24) (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000FAE24; /* jne: not equal / not zero */

loc_000FAE1C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FAF25; /* je: equal / zero */

loc_000FAE24: ;
    PUSH32(esp, 0x000FAE29u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FAE29: ;
    ecx = MEM32(esi + ebx * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FAE37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAE37: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FAF1F; /* je: equal / zero */

loc_000FAE41: ;
    edx = MEM32(edi + 0x18);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000FAE51u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FAE51: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FAE97; /* je: equal / zero */

loc_000FAE57: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FAE5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAE5D: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FAE97; /* je: equal / zero */

loc_000FAE7B: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FAE97; /* jne: not equal / not zero */

loc_000FAE8E: ;
    MEM32(esp + ebp * 4 + 0x28) = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;

loc_000FAE97: ;
    edi = edi + 0x198;
    ebx = 5;

loc_000FAEA2: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FAF11; /* je: equal / zero */

loc_000FAEA7: ;
    ecx = edi;
    PUSH32(esp, 0x000FAEAEu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FAEAE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FAF11; /* je: equal / zero */

loc_000FAEB2: ;
    ecx = MEM32(edi);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000FAEC1u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FAEC1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FAF11; /* je: equal / zero */

loc_000FAEC7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FAECDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAECD: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FAF0D; /* je: equal / zero */

loc_000FAEEB: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FAF0D; /* jne: not equal / not zero */

loc_000FAEFE: ;
    ebp = MEM32(esp + 0x10);
    MEM32(esp + ebp * 4 + 0x28) = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebp;
    goto loc_000FAF11;

loc_000FAF0D: ;
    ebp = MEM32(esp + 0x10);

loc_000FAF11: ;
    edi = edi - 8;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FAEA2; /* jne: not equal / not zero */

loc_000FAF17: ;
    ebx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x18);

loc_000FAF1F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FAE13;

loc_000FAF25: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FAFF8; /* jle: less or equal (signed <=) */

loc_000FAF2D: ;
    ebx = 1;
    edi = esp + 0x28;
    MEM32(esp + 0x14) = ebp;
    /* nop */

loc_000FAF40: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FAFE5; /* je: equal / zero */

loc_000FAF4A: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x246);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = 0x3F800000;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = MEMF(esi + 0x240) / fp_top(); /* fdivr dword ptr [esi + 0x240] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7084)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7084] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FAF9B; /* jp: parity */

loc_000FAF78: ;
    ecx = MEM32(esi + 0x2D8);
    fp_push(MEMF(ecx + 0x478)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8324)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8324] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FAF9B; /* jp: parity */

loc_000FAF91: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FAF9B: ;
    PUSH32(esp, 0x000FAFA0u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FAFA0: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FAFB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FAFB1: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    fp_top() = fp_top() * MEMF(eax + 0x444); /* fmul dword ptr [eax + 0x444] */
    eax = ebx;
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_GE(_fas, _fbs)) goto loc_000FAFE5; /* jge: greater or equal (signed >=) */

loc_000FAFC9: ;
    /* nop */

loc_000FAFD0: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + eax * 4 + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + eax * 4 + 0x28) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAFE0; /* jne: not equal / not zero */

loc_000FAFD8: ;
    MEM32(esp + eax * 4 + 0x28) = 0;

loc_000FAFE0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FAFD0; /* jl: less (signed <) */

loc_000FAFE5: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_000FAF40; /* jne: not equal / not zero */

loc_000FAFF8: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0xDC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FB010
 * Original: 0x000FB010 - 0x000FB65B (1611 bytes, 501 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB010(void)
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

loc_000FB010: ;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000FB024u); RECOMP_ABI_CALL(0x0002E030u, sub_0002E030); /* call 0x0002E030 */

loc_000FB024: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB651; /* jne: not equal / not zero */

loc_000FB02C: ;
    PUSH32(esp, 0x000FB031u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000FB031: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000FB038u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB038: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB651; /* jne: not equal / not zero */

loc_000FB040: ;
    PUSH32(esp, 0x000FB045u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB045: ;
    ecx = MEM32(ebp + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB056u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB056: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000FB0FF; /* je: equal / zero */

loc_000FB068: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x14) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, 0x000FB079u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000FB079: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB0BA; /* je: equal / zero */

loc_000FB082: ;
    ecx = esi;
    PUSH32(esp, 0x000FB089u); RECOMP_ABI_CALL(0x00029080u, sub_00029080); /* call 0x00029080 */

loc_000FB089: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB0BA; /* je: equal / zero */

loc_000FB08D: ;
    PUSH32(esp, 0x000FB092u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB092: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB0A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB0A3: ;
    ecx = eax;
    PUSH32(esp, 0x000FB0AAu); RECOMP_ABI_CALL(0x000FC200u, sub_000FC200); /* call 0x000FC200 */

loc_000FB0AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB103; /* jne: not equal / not zero */

loc_000FB0AE: ;
    ecx = ebp;
    PUSH32(esp, 0x000FB0B5u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FB0B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB103; /* jne: not equal / not zero */

loc_000FB0BA: ;
    eax = MEM32(edi + 0x10);
    eax = MEM32(eax + 0x338);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x14) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, 0x000FB0D1u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000FB0D1: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB103; /* jne: not equal / not zero */

loc_000FB0DA: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000FB0E6u); RECOMP_ABI_CALL(0x000FDCC0u, sub_000FDCC0); /* call 0x000FDCC0 */

loc_000FB0E6: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x14) = eax;
    MEM32(ecx) = eax;
    PUSH32(esp, 0x000FB0F8u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000FB0F8: ;
    esp = esp + 4;
    esi = eax;
    goto loc_000FB103;

loc_000FB0FF: ;
    esi = MEM32(esp + 0x50);

loc_000FB103: ;
    PUSH32(esp, 0x000FB108u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_000FB108: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB111; /* je: equal / zero */

loc_000FB10C: ;
    PUSH32(esp, 0x000FB111u); RECOMP_ABI_CALL(0x000C7D10u, sub_000C7D10); /* call 0x000C7D10 */

loc_000FB111: ;
    ecx = MEM32(esp + 0x50);
    ebp = 0; /* xor self */
    edi = ebx + 4;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x000FB12Fu); RECOMP_ABI_CALL(0x0002E030u, sub_0002E030); /* call 0x0002E030 */

loc_000FB12F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB283; /* jne: not equal / not zero */

loc_000FB137: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(MEM32(eax + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB283; /* je: equal / zero */

loc_000FB148: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB19F; /* je: equal / zero */

loc_000FB150: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000FB159u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FB159: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB19F; /* je: equal / zero */

loc_000FB15D: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000FB165u); RECOMP_ABI_CALL(0x000FADC0u, sub_000FADC0); /* call 0x000FADC0 */

loc_000FB165: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FB19F; /* jnp: not parity */

loc_000FB172: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB283; /* je: equal / zero */

loc_000FB17A: ;
    PUSH32(esp, 0x000FB17Fu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB17F: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB190u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB190: ;
    ecx = eax;
    PUSH32(esp, 0x000FB197u); RECOMP_ABI_CALL(0x000FC200u, sub_000FC200); /* call 0x000FC200 */

loc_000FB197: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB283; /* jne: not equal / not zero */

loc_000FB19F: ;
    PUSH32(esp, 0x000FB1A4u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FB1A4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FB1AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB1AE: ;
    fp_top() = fp_top() + MEMF(0x3D9B38); /* fadd dword ptr [0x3d9b38] */
    PUSH32(esp, 0xF);
    MEMF(ebx + 0x25C) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = MEM32(esp + 0x54);
    ecx = ebx;
    PUSH32(esp, 0x000FB1C7u); RECOMP_ABI_CALL(0x000316C0u, sub_000316C0); /* call 0x000316C0 */

loc_000FB1C7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB1D4; /* jne: not equal / not zero */

loc_000FB1CC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB266; /* je: equal / zero */

loc_000FB1D4: ;
    PUSH32(esp, 0x000FB1D9u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB1D9: ;
    ecx = MEM32(edi + ebp * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB1E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB1E7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB651; /* je: equal / zero */

loc_000FB1F1: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB220; /* je: equal / zero */

loc_000FB1F8: ;
    fp_push(MEMF(ecx + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB220; /* jne: not equal / not zero */

loc_000FB20B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB220; /* je: equal / zero */

loc_000FB214: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB223; /* je: equal / zero */

loc_000FB21C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB223; /* je: equal / zero */

loc_000FB220: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FB1C7;

loc_000FB223: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB231; /* jne: not equal / not zero */

loc_000FB22B: ;
    MEM32(esp + 0x14) = ecx;
    goto loc_000FB24A;

loc_000FB231: ;
    PUSH32(esp, 0x000FB236u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000FB236: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7084)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7084] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB24A; /* jne: not equal / not zero */

loc_000FB243: ;
    edx = MEM32(esi + 0x10);
    MEM32(esp + 0x14) = edx;

loc_000FB24A: ;
    PUSH32(esp, ecx);
    MEM32(esi + 0x18) = 0;
    ecx = MEM32(ebx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000FB260u); RECOMP_ABI_CALL(0x000FF4D0u, sub_000FF4D0); /* call 0x000FF4D0 */

loc_000FB260: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FB1C7;

loc_000FB266: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB651; /* je: equal / zero */

loc_000FB272: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000FB279u); RECOMP_ABI_CALL(0x000317C0u, sub_000317C0); /* call 0x000317C0 */

loc_000FB279: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 12; return; /* ret 8 */

loc_000FB283: ;
    PUSH32(esp, 0x000FB288u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FB288: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FB292u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB292: ;
    fp_top() = fp_top() + MEMF(0x3D9B38); /* fadd dword ptr [0x3d9b38] */
    edx = MEM32(esp + 0x50);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, ecx);
    MEMF(ebx + 0x258) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    eax = esp;
    PUSH32(esp, 0x3E8);
    PUSH32(esp, ecx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x77);
    ecx = ebx;
    PUSH32(esp, 0x000FB2C6u); RECOMP_ABI_CALL(0x000F9CD0u, sub_000F9CD0); /* call 0x000F9CD0 */

loc_000FB2C6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB2D3; /* jne: not equal / not zero */

loc_000FB2CB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB60D; /* je: equal / zero */

loc_000FB2D3: ;
    PUSH32(esp, 0x000FB2D8u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB2D8: ;
    ecx = MEM32(edi + ebp * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB2E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB2E6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000FB651; /* je: equal / zero */

loc_000FB2F4: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x50) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB325; /* je: equal / zero */

loc_000FB2FD: ;
    fp_push(MEMF(ecx + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB325; /* jne: not equal / not zero */

loc_000FB310: ;
    _fa = (uint32_t)(MEM32(ecx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB325; /* je: equal / zero */

loc_000FB319: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB32C; /* je: equal / zero */

loc_000FB321: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB32C; /* je: equal / zero */

loc_000FB325: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ebp;
    goto loc_000FB2C6;

loc_000FB32C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB5ED; /* je: equal / zero */

loc_000FB338: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000FB341u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FB341: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB5ED; /* je: equal / zero */

loc_000FB349: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000FB357u); RECOMP_ABI_CALL(0x0002B810u, sub_0002B810); /* call 0x0002B810 */

loc_000FB357: ;
    ecx = MEM32(esp + 0x14);
    edi = eax;
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000FB366u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000FB366: ;
    ebx = eax;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_000FB3B9; /* je: equal / zero */

loc_000FB373: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, 0x000FB37Cu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FB37C: ;
    ecx = ebx;
    ebp = eax;
    PUSH32(esp, 0x000FB385u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FB385: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB3BD; /* jne: not equal / not zero */

loc_000FB389: ;
    ebp = MEM32(esp + 0x2C);

loc_000FB38D: ;
    edi = MEM32(esp + 0x18);

loc_000FB391: ;
    PUSH32(esp, 0x000FB396u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB396: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x000FB3AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB3AF: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ebp;
    goto loc_000FB2C6;

loc_000FB3B9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB38D; /* je: equal / zero */

loc_000FB3BD: ;
    esi = MEM32(esi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB43B; /* je: equal / zero */

loc_000FB3C4: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(edi + 0x20);
    eax = MEM32(edi + 0x24);
    MEM32(esp + 0x3C) = ecx;
    ebp = esi + 0x20;
    PUSH32(esp, ebp);
    ecx = esp + 0x38;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x000FB3E6u); RECOMP_ABI_CALL(0x00196100u, sub_00196100); /* call 0x00196100 */

loc_000FB3E6: ;
    ecx = esp + 0x34;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x000FB3F7u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000FB3F7: ;
    fp_pop(); /* fstp st(0) */
    ebx = MEM32(esi);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FB40Au); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000FB40A: ;
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x150); PUSH32(esp, 0x000FB417u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB417: ;
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000FB42Au); RECOMP_ABI_CALL(0x0003B4F0u, sub_0003B4F0); /* call 0x0003B4F0 */

loc_000FB42A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x000FB434u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB434: ;
    ecx = esi;
    PUSH32(esp, 0x000FB43Bu); RECOMP_ABI_CALL(0x000345A0u, sub_000345A0); /* call 0x000345A0 */

loc_000FB43B: ;
    eax = MEM32(esi + 0x2D8);
    ebp = ZX8(MEM8(eax + 0x31));
    ebp = ebp >> 4;
    PUSH32(esp, 0x000FB44Du); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB44D: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB45Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB45E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000FB4AE; /* je: equal / zero */

loc_000FB466: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB4AE; /* je: equal / zero */

loc_000FB46A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB4B3; /* je: equal / zero */

loc_000FB46F: ;
    SET_LO16(edx, MEM16(esi + 0x2BC));
    ecx = esi;
    MEM16(esp + 0x28) = LO16(edx);
    PUSH32(esp, 0x000FB482u); RECOMP_ABI_CALL(0x0002E8C0u, sub_0002E8C0); /* call 0x0002E8C0 */

loc_000FB482: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C83B0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c83b0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB4AA; /* jne: not equal / not zero */

loc_000FB49E: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FB4A8u); RECOMP_ABI_CALL(0x001034F0u, sub_001034F0); /* call 0x001034F0 */

loc_000FB4A8: ;
    goto loc_000FB4AE;

loc_000FB4AA: ;
    MEM32(esp + 0x24) = esi;

loc_000FB4AE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB4F4; /* jne: not equal / not zero */

loc_000FB4B3: ;
    SET_LO16(ebp, MEM16(esi + 0x2BC));
    ecx = esi;
    PUSH32(esp, 0x000FB4C1u); RECOMP_ABI_CALL(0x0002E8C0u, sub_0002E8C0); /* call 0x0002E8C0 */

loc_000FB4C1: ;
    ecx = LO16(ebp);
    MEM32(esp + 0x28) = ecx;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C83B0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c83b0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB4F0; /* jne: not equal / not zero */

loc_000FB4DB: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 8);
    PUSH32(esp, 0x000FB4EEu); RECOMP_ABI_CALL(0x00101CE0u, sub_00101CE0); /* call 0x00101CE0 */

loc_000FB4EE: ;
    goto loc_000FB4F4;

loc_000FB4F0: ;
    MEM32(esp + 0x24) = esi;

loc_000FB4F4: ;
    edx = MEM32(edi + 0x20);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(edi + 0x24);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edi + 0x28);
    ecx = esi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x000FB511u); RECOMP_ABI_CALL(0x0002E650u, sub_0002E650); /* call 0x0002E650 */

loc_000FB511: ;
    PUSH32(esp, 0x000FB516u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB516: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x000FB529u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB529: ;
    edi = MEM32(esp + 0x50);
    ecx = edi;
    PUSH32(esp, 0x000FB534u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FB534: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB55C; /* jne: not equal / not zero */

loc_000FB539: ;
    PUSH32(esp, 0x000FB53Eu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB53E: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10C); PUSH32(esp, 0x000FB55Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB55A: ;
    goto loc_000FB58C;

loc_000FB55C: ;
    edi = MEM32(edi + 0x2D8);
    _fa = (uint32_t)(MEM8(edi + 0x3A1)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x3A1), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB59B; /* je: equal / zero */

loc_000FB56B: ;
    PUSH32(esp, 0x000FB570u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB570: ;
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x000FB58Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB58C: ;
    edx = MEM32(ebx + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esi;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000FB59Bu); RECOMP_ABI_CALL(0x0003B4F0u, sub_0003B4F0); /* call 0x0003B4F0 */

loc_000FB59B: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB5BB; /* jne: not equal / not zero */

loc_000FB5A3: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x10);
    ebp = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x20);
    MEM32(esp + 0x14) = ecx;
    goto loc_000FB38D;

loc_000FB5BB: ;
    PUSH32(esp, 0x000FB5C0u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000FB5C0: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7084)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7084] */
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x2C);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB391; /* jne: not equal / not zero */

loc_000FB5DD: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x10);
    MEM32(esp + 0x14) = eax;
    goto loc_000FB391;

loc_000FB5ED: ;
    PUSH32(esp, 0x000FB5F2u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB5F2: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1F0); PUSH32(esp, 0x000FB608u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB608: ;
    goto loc_000FB391;

loc_000FB60D: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB624; /* je: equal / zero */

loc_000FB615: ;
    PUSH32(esp, 0x000FB61Au); RECOMP_ABI_CALL(0x00031980u, sub_00031980); /* call 0x00031980 */

loc_000FB61A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 12; return; /* ret 8 */

loc_000FB624: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FB651; /* je: equal / zero */

loc_000FB62C: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000FB635u); RECOMP_ABI_CALL(0x0001CD30u, sub_0001CD30); /* call 0x0001CD30 */

loc_000FB635: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(esp + 0x50);
    if (TEST_Z(_fa, _fb)) goto loc_000FB641; /* je: equal / zero */

loc_000FB63D: ;
    PUSH32(esp, 0xD);
    goto loc_000FB643;

loc_000FB641: ;
    PUSH32(esp, 0xE);

loc_000FB643: ;
    PUSH32(esp, 0x000FB648u); RECOMP_ABI_CALL(0x000316C0u, sub_000316C0); /* call 0x000316C0 */

loc_000FB648: ;
    ecx = esi;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x000FB651u); RECOMP_ABI_CALL(0x000317C0u, sub_000317C0); /* call 0x000317C0 */

loc_000FB651: ;
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
 * sub_000FB660
 * Original: 0x000FB660 - 0x000FB750 (240 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FB660: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FB6B1; /* jle: less or equal (signed <=) */

loc_000FB671: ;
    ebx = ecx + 4;

loc_000FB674: ;
    esi = MEM32(ebx);
    eax = edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FB6A6; /* jge: greater or equal (signed >=) */

loc_000FB685: ;
    edx = ebx;

loc_000FB687: ;
    esi = MEM32(ecx + eax * 4);
    ebp = MEM32(edx);
    MEM32(ecx + eax * 4) = ebp;
    MEM32(edx) = esi;
    esi = eax;
    ebp = MEM32(ecx + esi * 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edx = ecx + esi * 4;
    esi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FB687; /* jl: less (signed <) */

loc_000FB6A6: ;
    eax = MEM32(ecx + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FB674; /* jl: less (signed <) */

loc_000FB6B1: ;
    edi = MEM32(ecx + 0x24);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FB74A; /* jle: less or equal (signed <=) */

loc_000FB6BD: ;
    edx = ecx + edi * 4;
    MEM32(esp + 0x10) = edx;

loc_000FB6C4: ;
    esi = MEM32(edx);
    eax = MEM32(ecx);
    MEM32(ecx) = esi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(edx) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000FB6F1; /* jle: less or equal (signed <=) */

loc_000FB6D3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FB6EA; /* jle: less or equal (signed <=) */

loc_000FB6D8: ;
    eax = MEM32(ecx + 8);
    ebp = MEM32(ecx + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    SET_LO8(ebx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    goto loc_000FB6F3;

loc_000FB6EA: ;
    eax = 1;
    goto loc_000FB6F3;

loc_000FB6F1: ;
    eax = 0; /* xor self */

loc_000FB6F3: ;
    ebx = MEM32(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + eax * 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FB73A; /* jge: greater or equal (signed >=) */

loc_000FB6FA: ;
    /* nop */

loc_000FB700: ;
    ebx = MEM32(ecx + esi * 4);
    edx = ecx + esi * 4;
    esi = MEM32(ecx + eax * 4);
    MEM32(ecx + eax * 4) = ebx;
    MEM32(edx) = esi;
    edx = eax + eax + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    esi = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000FB72E; /* jge: greater or equal (signed >=) */

loc_000FB718: ;
    ebx = eax + eax + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FB72C; /* jge: greater or equal (signed >=) */

loc_000FB720: ;
    ebp = MEM32(ecx + eax * 8 + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 8 + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + eax * 8 + 4) (32-bit) */
    eax = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_000FB72E; /* jge: greater or equal (signed >=) */

loc_000FB72C: ;
    eax = edx;

loc_000FB72E: ;
    edx = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + eax * 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FB700; /* jl: less (signed <) */

loc_000FB736: ;
    edx = MEM32(esp + 0x10);

loc_000FB73A: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_000FB6C4; /* jg: greater (signed >) */

loc_000FB74A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FB750
 * Original: 0x000FB750 - 0x000FB7B0 (96 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB750(void)
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

loc_000FB750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + eax * 4 + 4) = ecx;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = 0; /* xor self */
    MEM32(esi + 0x260) = ebx;
    MEM32(esi + 0x264) = ebx;
    MEM8(esi + 0x220) = LO8(ebx);
    PUSH32(esp, 0x000FB77Bu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FB77B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FB785u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB785: ;
    MEMF(esi + 0x254) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x258) = ebx;
    MEM32(esi + 0x25C) = ebx;
    eax = esi + 0x4C;
    ecx = 0x14;
    /* nop */

loc_000FB7A0: ;
    MEM32(eax + -4) = ebx;
    MEM32(eax) = ebx;
    eax = eax + 0x18;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FB7A0; /* jne: not equal / not zero */

loc_000FB7AB: ;
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
 * sub_000FB7B0
 * Original: 0x000FB7B0 - 0x000FB808 (88 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB7B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0xC;
    esi = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000FB7C3u); RECOMP_ABI_CALL(0x000F9E80u, sub_000F9E80); /* call 0x000F9E80 */

loc_000FB7C3: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FB7CC; /* jl: less (signed <) */

loc_000FB7CA: ;
    eax = ecx;

loc_000FB7CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB7D5; /* jne: not equal / not zero */

loc_000FB7D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB800; /* je: equal / zero */

loc_000FB7D5: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000FB7E1u); RECOMP_ABI_CALL(0x000F9E80u, sub_000F9E80); /* call 0x000F9E80 */

loc_000FB7E1: ;
    ecx = MEM32(esi + 0x24);
    edx = ecx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB7F2; /* je: equal / zero */

loc_000FB7EB: ;
    ecx = MEM32(esi + ecx * 4 + -4);
    MEM32(esi + eax * 4) = ecx;

loc_000FB7F2: ;
    eax = MEM32(esi + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x000FB800u); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_000FB800: ;
    eax = MEM32(edi + 0x28);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FB810
 * Original: 0x000FB810 - 0x000FB9E2 (466 bytes, 166 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB810(void)
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

loc_000FB810: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0xC;
    esi = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000FB823u); RECOMP_ABI_CALL(0x000F9E80u, sub_000F9E80); /* call 0x000F9E80 */

loc_000FB823: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FB82C; /* jl: less (signed <) */

loc_000FB82A: ;
    eax = ecx;

loc_000FB82C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB835; /* jne: not equal / not zero */

loc_000FB831: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB83C; /* je: equal / zero */

loc_000FB835: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000FB83C: ;
    eax = MEM32(edi + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FB9D9; /* jge: greater or equal (signed >=) */

loc_000FB84C: ;
    /* nop */

loc_000FB850: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB85D; /* jne: not equal / not zero */

loc_000FB855: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB9D9; /* je: equal / zero */

loc_000FB85D: ;
    PUSH32(esp, 0x000FB862u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB862: ;
    ecx = MEM32(esi + ebp * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB870u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB870: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB877; /* jne: not equal / not zero */

loc_000FB874: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FB850;

loc_000FB877: ;
    PUSH32(esp, 0x000FB87Cu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB87C: ;
    ecx = MEM32(esi + ebp * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB88Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB88A: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x000FB892u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FB892: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB8BA; /* jne: not equal / not zero */

loc_000FB897: ;
    PUSH32(esp, 0x000FB89Cu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB89C: ;
    edi = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB8ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB8AB: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x000FB8B3u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FB8B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB8FF; /* je: equal / zero */

loc_000FB8B8: ;
    goto loc_000FB8BE;

loc_000FB8BA: ;
    edi = MEM32(esp + 0x14);

loc_000FB8BE: ;
    PUSH32(esp, 0x000FB8C3u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB8C3: ;
    ecx = MEM32(esi + ebp * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB8D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB8D1: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x000FB8D9u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FB8D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB96D; /* jne: not equal / not zero */

loc_000FB8E2: ;
    PUSH32(esp, 0x000FB8E7u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB8E7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB8F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB8F2: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x000FB8FAu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FB8FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB96D; /* jne: not equal / not zero */

loc_000FB8FF: ;
    PUSH32(esp, 0x000FB904u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB904: ;
    edi = eax;
    PUSH32(esp, 0x000FB90Bu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB90B: ;
    ecx = MEM32(esp + 0x14);
    ebx = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x000FB91Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB91C: ;
    edi = MEM32(eax + 0x10);
    eax = MEM32(esi + ebp * 4);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB92Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB92D: ;
    eax = MEM32(eax + 0x10);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    eax = eax + 0x20;
    fp_top() = fp_top() - MEMF(edi + 0x28); /* fsub dword ptr [edi + 0x28] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x24); /* fsub dword ptr [edi + 0x24] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x20); /* fsub dword ptr [edi + 0x20] */
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D91B4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d91b4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FB9B0; /* jnp: not parity */

loc_000FB969: ;
    edi = MEM32(esp + 0x14);

loc_000FB96D: ;
    PUSH32(esp, 0x000FB972u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB972: ;
    ecx = MEM32(esi + ebp * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB980u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB980: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x000FB988u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FB988: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB9AA; /* jne: not equal / not zero */

loc_000FB98D: ;
    PUSH32(esp, 0x000FB992u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FB992: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FB99Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FB99D: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x000FB9A5u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FB9A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FB9BC; /* je: equal / zero */

loc_000FB9AA: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FB850;

loc_000FB9B0: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esp + 0x14);
    MEM32(esi + eax * 4) = ecx;
    goto loc_000FB9C2;

loc_000FB9BC: ;
    edx = MEM32(esi + 0x24);
    MEM32(esi + edx * 4) = edi;

loc_000FB9C2: ;
    eax = MEM32(esi + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x000FB9D0u); RECOMP_ABI_CALL(0x000FB660u, sub_000FB660); /* call 0x000FB660 */

loc_000FB9D0: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000FB9D9: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FB9F0
 * Original: 0x000FB9F0 - 0x000FBA63 (115 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB9F0(void)
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

loc_000FB9F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x220));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FBA5D; /* je: equal / zero */

loc_000FB9FD: ;
    PUSH32(esp, 0x000FBA02u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FBA02: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FBA0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FBA0C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x258)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x258] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FBA35; /* jnp: not parity */

loc_000FBA19: ;
    PUSH32(esp, 0x000FBA1Eu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FBA1E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FBA28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FBA28: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x25C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x25c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FBA4B; /* jp: parity */

loc_000FBA35: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000FBA3Eu); RECOMP_ABI_CALL(0x000FADC0u, sub_000FADC0); /* call 0x000FADC0 */

loc_000FBA3E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D6438)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d6438] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FBA5D; /* jp: parity */

loc_000FBA4B: ;
    eax = MEM32(esp + 8);
    esi = esi + 0x224;
    MEM32(eax) = esi;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000FBA5D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FBA70
 * Original: 0x000FBA70 - 0x000FBFF4 (1412 bytes, 407 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBA70(void)
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

loc_000FBA70: ;
    esp = esp - 0x9C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x7C;
    PUSH32(esp, 0x000FBA85u); RECOMP_ABI_CALL(0x000322B0u, sub_000322B0); /* call 0x000322B0 */

loc_000FBA85: ;
    PUSH32(esp, 0x000FBA8Au); RECOMP_ABI_CALL(0x00118740u, sub_00118740); /* call 0x00118740 */

loc_000FBA8A: ;
    esi = eax;
    PUSH32(esp, 0x000FBA91u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FBA91: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000FBA9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FBA9E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0xE0); PUSH32(esp, 0x000FBAAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FBAAF: ;
    ecx = MEM32(esp + 0x90);
    eax = 0; /* xor self */
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x44) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FBB50; /* jle: less or equal (signed <=) */

loc_000FBAC6: ;
    goto loc_000FBAD0;

    /* nop */
    /* nop */

loc_000FBAD0: ;
    edx = MEM32(esp + eax * 4 + 0x7C);
    ecx = esp + 0x28;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x000FBAE1u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FBAE1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FBB0B; /* je: equal / zero */

loc_000FBAE7: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FBAEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FBAED: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FBB0D; /* jne: not equal / not zero */

loc_000FBB0B: ;
    esi = 0; /* xor self */

loc_000FBB0D: ;
    PUSH32(esp, 0x000FBB12u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FBB12: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FBB23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FBB23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FBB3C; /* je: equal / zero */

loc_000FBB27: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    MEM32(esp + 0x7C) = esp;
    PUSH32(esp, 0x000FBB3Au); RECOMP_ABI_CALL(0x000FDBB0u, sub_000FDBB0); /* call 0x000FDBB0 */

loc_000FBB3A: ;
    edi = edi + eax;

loc_000FBB3C: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x90);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x44) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000FBAD0; /* jl: less (signed <) */

loc_000FBB50: ;
    SET_LO8(eax, MEM8(ebx + 0x220));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = MEM32(esp + 0xB0);
    if (TEST_NZ(_fa, _fb)) goto loc_000FBD0C; /* jne: not equal / not zero */

loc_000FBB65: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FBD0C; /* jle: less or equal (signed <=) */

loc_000FBB6D: ;
    MEM8(ebx + 0x220) = 1;
    PUSH32(esp, 0x000FBB79u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000FBB79: ;
    edx = MEM32(eax);
    ecx = esp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000FBB95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FBB95: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    edx = MEM32(esi + 0x28);
    fp_push(MEMF(esp + 0x48)); /* fld float */
    MEM32(esp + 0x18) = edx;
    fp_top() = fp_top() * MEMF(esp + 0x48); /* fmul dword ptr [esp + 0x48] */
    edi = ebx + 0x224;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    MEM32(esp + 0x68) = 0;
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA96C); /* fmul dword ptr [0x3ca96c] */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA96C); /* fmul dword ptr [0x3ca96c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA96C); /* fmul dword ptr [0x3ca96c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D91B4); /* fmul dword ptr [0x3d91b4] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D91B4); /* fmul dword ptr [0x3d91b4] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    MEM32(edi) = eax;
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    MEM32(edi + 4) = ecx;
    MEMF(edi + 8) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA9F0); /* fmul dword ptr [0x3ca9f0] */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA9F0); /* fmul dword ptr [0x3ca9f0] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(0x3D91B4); /* fmul dword ptr [0x3d91b4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3D91B4); /* fmul dword ptr [0x3d91b4] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    PUSH32(esp, 1);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ebp = ebx + 0x230;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + 4) = edx;
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0x000FBCCAu); RECOMP_ABI_CALL(0x000345B0u, sub_000345B0); /* call 0x000345B0 */

loc_000FBCCA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FBCE2; /* je: equal / zero */

loc_000FBCCE: ;
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x5C);
    MEM32(edi) = edx;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ecx;

loc_000FBCE2: ;
    PUSH32(esp, 1);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000FBCF1u); RECOMP_ABI_CALL(0x000345B0u, sub_000345B0); /* call 0x000345B0 */

loc_000FBCF1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FBD1B; /* je: equal / zero */

loc_000FBCF5: ;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x5C);
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = edx;
    goto loc_000FBD1B;

loc_000FBD0C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBD1B; /* jne: not equal / not zero */

loc_000FBD10: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FBD1B; /* jne: not equal / not zero */

loc_000FBD14: ;
    MEM8(ebx + 0x220) = 0;

loc_000FBD1B: ;
    PUSH32(esp, 0x000FBD20u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000FBD20: ;
    edx = MEM32(eax);
    ecx = esp + 0x94;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000FBD3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FBD3C: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    edx = MEM32(esi + 0x20);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    eax = MEM32(esi + 0x24);
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    ecx = MEM32(esi + 0x28);
    MEM32(esp + 0x10) = edx;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    eax = ebx + 0x248;
    MEM32(esp + 0x74) = 0;
    MEM32(esp + 0x44) = eax;
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA96C); /* fmul dword ptr [0x3ca96c] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA96C); /* fmul dword ptr [0x3ca96c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA96C); /* fmul dword ptr [0x3ca96c] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax) = edx;
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ecx;
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D9B50); /* fmul dword ptr [0x3d9b50] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D9B50); /* fmul dword ptr [0x3d9b50] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ebp = ebx + 0x23C;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    edi = ebx + 0x224;
    fp_top() = fp_top() * MEMF(0x3D9B50); /* fmul dword ptr [0x3d9b50] */
    PUSH32(esp, 1);
    ebx = ebx + 0x230;
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 0x2C);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x28) = ecx;
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(ebp) = edx;
    fp_top() = fp_top() - g_fp_stack[(g_fp_top + 2) & 7]; /* fsub st(2) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(ebp + 4) = eax;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D91B4); /* fmul dword ptr [0x3d91b4] */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D91B4); /* fmul dword ptr [0x3d91b4] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    MEM32(edi) = edx;
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    MEM32(edi + 4) = eax;
    MEMF(edi + 8) = (float)fp_top(); /* fst */
    eax = esp + 0x3C;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(0x3CA9F0); /* fmul dword ptr [0x3ca9f0] */
    PUSH32(esp, edi);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA9F0); /* fmul dword ptr [0x3ca9f0] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(0x3D91B4); /* fmul dword ptr [0x3d91b4] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3D91B4); /* fmul dword ptr [0x3d91b4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(ebx + 4) = ecx;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    ecx = esi;
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebx + 8) = edx;
    PUSH32(esp, 0x000FBF55u); RECOMP_ABI_CALL(0x000345B0u, sub_000345B0); /* call 0x000345B0 */

loc_000FBF55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FBF6D; /* je: equal / zero */

loc_000FBF59: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;

loc_000FBF6D: ;
    PUSH32(esp, 1);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000FBF7Cu); RECOMP_ABI_CALL(0x000345B0u, sub_000345B0); /* call 0x000345B0 */

loc_000FBF7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FBF94; /* je: equal / zero */

loc_000FBF80: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;

loc_000FBF94: ;
    PUSH32(esp, 1);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000FBFA3u); RECOMP_ABI_CALL(0x000345B0u, sub_000345B0); /* call 0x000345B0 */

loc_000FBFA3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FBFBC; /* je: equal / zero */

loc_000FBFA7: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 8) = edx;

loc_000FBFBC: ;
    edi = MEM32(esp + 0x44);
    PUSH32(esp, 1);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000FBFCFu); RECOMP_ABI_CALL(0x000345B0u, sub_000345B0); /* call 0x000345B0 */

loc_000FBFCF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FBFE7; /* je: equal / zero */

loc_000FBFD3: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;

loc_000FBFE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x9C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FC000
 * Original: 0x000FC000 - 0x000FC108 (264 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC000(void)
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

loc_000FC000: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_G(_fas, _fbs)) goto loc_000FC084; /* jg: greater (signed >) */

loc_000FC013: ;
    PUSH32(esp, 0x000FC018u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FC018: ;
    fp_push(MEMF(esi + 0x254)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3D9B38); /* fadd dword ptr [0x3d9b38] */
    edx = MEM32(eax);
    ecx = eax;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FC032u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC032: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FC084; /* jne: not equal / not zero */

loc_000FC03D: ;
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    edi = esi + 4;

loc_000FC044: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x24) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FC04D; /* jne: not equal / not zero */

loc_000FC049: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC07C; /* je: equal / zero */

loc_000FC04D: ;
    PUSH32(esp, 0x000FC052u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FC052: ;
    ecx = MEM32(edi + ebx * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FC060u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC060: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC079; /* je: equal / zero */

loc_000FC066: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x000FC06Eu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FC06E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC079; /* je: equal / zero */

loc_000FC073: ;
    MEM32(esi + 0x504) = ebp;

loc_000FC079: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000FC044;

loc_000FC07C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000FC084: ;
    ecx = esi;
    PUSH32(esp, 0x000FC08Bu); RECOMP_ABI_CALL(0x000F9D50u, sub_000F9D50); /* call 0x000F9D50 */

loc_000FC08B: ;
    PUSH32(esp, 0x000FC090u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FC090: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(eax);
    edi = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FC0A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC0A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC100; /* je: equal / zero */

loc_000FC0A5: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC100; /* je: equal / zero */

loc_000FC0B1: ;
    ecx = esi;
    PUSH32(esp, 0x000FC0B8u); RECOMP_ABI_CALL(0x000F9EC0u, sub_000F9EC0); /* call 0x000F9EC0 */

loc_000FC0B8: ;
    eax = MEM32(esi + 0x28);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FC100; /* jle: less or equal (signed <=) */

loc_000FC0C1: ;
    PUSH32(esp, 0x000FC0C6u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FC0C6: ;
    ecx = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FC0D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC0D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC0E2; /* je: equal / zero */

loc_000FC0D7: ;
    edx = MEM32(eax + 0x10);
    _fa = (uint32_t)(MEM8(edx + 0x334)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x334), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC0F5; /* je: equal / zero */

loc_000FC0E2: ;
    eax = MEM32(esi + 0x28);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FC0C1; /* jl: less (signed <) */

loc_000FC0ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000FC0F5: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000FC100u); RECOMP_ABI_CALL(0x000FBA70u, sub_000FBA70); /* call 0x000FBA70 */

loc_000FC100: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FC110
 * Original: 0x000FC110 - 0x000FC134 (36 bytes, 11 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FC110(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000FC110: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x289) = MEM8(esi + 0x289) | 1;
    PUSH32(esp, 0x000FC11Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FC11F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FC129u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC129: ;
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FC140
 * Original: 0x000FC140 - 0x000FC148 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC140: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC150
 * Original: 0x000FC150 - 0x000FC167 (23 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC150(void)
{

loc_000FC150: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000FC164u); RECOMP_ABI_CALL(0x000345B0u, sub_000345B0); /* call 0x000345B0 */

loc_000FC164: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC170
 * Original: 0x000FC170 - 0x000FC17B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC170(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC170: ;
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x16C)); return; /* indirect tail jmp */

}

/**
 * sub_000FC180
 * Original: 0x000FC180 - 0x000FC18A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC180(void)
{

loc_000FC180: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC190
 * Original: 0x000FC190 - 0x000FC19A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC190(void)
{

loc_000FC190: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(ecx + 0x32C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC1A0
 * Original: 0x000FC1A0 - 0x000FC1B5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC1A0(void)
{

loc_000FC1A0: ;
    eax = ecx;
    ecx = MEM32(eax + 0x494);
    eax = MEM32(eax + 0x32C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000FC1B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC1B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC1C0
 * Original: 0x000FC1C0 - 0x000FC1F7 (55 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC1C0(void)
{

loc_000FC1C0: ;
    esp = esp - 0x14;
    eax = MEM32(esp + 0x18);
    MEM32(esp) = 0xC8;
    MEM32(esp + 4) = 0x64;
    MEM32(esp + 8) = 0x4B;
    MEM32(esp + 0xC) = 0x32;
    MEM32(esp + 0x10) = 0xA;
    eax = MEM32(esp + eax * 4);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC200
 * Original: 0x000FC200 - 0x000FC207 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC200(void)
{

loc_000FC200: ;
    SET_LO8(eax, MEM8(ecx + 0x44C));
    esp += 4; return; /* ret */

}

/**
 * sub_000FC210
 * Original: 0x000FC210 - 0x000FC223 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000FC210: ;
    ecx = MEM32(ecx + 0x494);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000FC21Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC21B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC230
 * Original: 0x000FC230 - 0x000FC25A (42 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC230(void)
{

loc_000FC230: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x24D));
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(eax, MEM8(ecx + 0x278));
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEM8(ecx + 0x24D) = LO8(edx);
    MEM8(ecx + 0x278) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC260
 * Original: 0x000FC260 - 0x000FC3D8 (376 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC260: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x278));
    SET_LO8(ebx, 0xFB);
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    MEM32(esi + 0x468) = ecx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    MEM8(esi + 0x278) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_000FC3AD; /* ja: above (unsigned >) */

loc_000FC288: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0xFC3D8); /* switch: 8 entries, 8 targets */
    if (_jt == 0x000FC28Fu) goto loc_000FC28F;
    if (_jt == 0x000FC2B6u) goto loc_000FC2B6;
    if (_jt == 0x000FC2C2u) goto loc_000FC2C2;
    if (_jt == 0x000FC2FAu) goto loc_000FC2FA;
    if (_jt == 0x000FC31Fu) goto loc_000FC31F;
    if (_jt == 0x000FC353u) goto loc_000FC353;
    if (_jt == 0x000FC37Au) goto loc_000FC37A;
    if (_jt == 0x000FC3ADu) goto loc_000FC3AD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000FC28F: ;
    SET_LO8(ecx, MEM8(esi + 0x24D));
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0xFD);
    SET_LO8(eax, LO8(eax) | 1);
    MEM32(esi + 0x250) = 0x43160000;
    MEM8(esi + 0x24D) = LO8(ecx);
    MEM8(esi + 0x278) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000FC2B6: ;
    MEM32(esi + 0x250) = 0x437A0000;
    goto loc_000FC304;

loc_000FC2C2: ;
    MEM8(esi + 0x24D) = MEM8(esi + 0x24D) & LO8(ebx);
    ecx = MEM32(esi + 0x494);
    SET_LO8(eax, LO8(eax) | 3);
    MEM32(esi + 0x250) = 0x44228000;
    MEM8(esi + 0x278) = LO8(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000FC2E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC2E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FC3AD; /* jne: not equal / not zero */

loc_000FC2EE: ;
    MEM8(esi + 0x28A) = MEM8(esi + 0x28A) & 0xBF;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000FC2FA: ;
    MEM32(esi + 0x250) = 0x44228000;

loc_000FC304: ;
    SET_LO8(edx, MEM8(esi + 0x24D));
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0xFC);
    MEM8(esi + 0x24D) = LO8(edx);
    MEM8(esi + 0x278) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000FC31F: ;
    SET_LO8(edx, MEM8(esi + 0x24D));
    SET_LO8(eax, LO8(eax) & 0xFC);
    MEM8(esi + 0x278) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x28A));
    SET_LO8(edx, LO8(edx) | 4);
    SET_LO8(eax, LO8(eax) & 0xBF);
    MEM32(esi + 0x250) = 0x44FA0000;
    MEM8(esi + 0x24D) = LO8(edx);
    MEM8(esi + 0x28A) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000FC353: ;
    SET_LO8(ecx, MEM8(esi + 0x24D));
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0xFD);
    SET_LO8(eax, LO8(eax) | 1);
    MEM32(esi + 0x250) = 0x44228000;
    MEM8(esi + 0x24D) = LO8(ecx);
    MEM8(esi + 0x278) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000FC37A: ;
    SET_LO8(edx, MEM8(esi + 0x24D));
    SET_LO8(eax, LO8(eax) | 7);
    MEM8(esi + 0x278) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x28A));
    SET_LO8(edx, LO8(edx) & LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0xBF);
    MEM32(esi + 0x250) = 0x44228000;
    MEM8(esi + 0x24D) = LO8(edx);
    MEM8(esi + 0x28A) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000FC3AD: ;
    SET_LO8(ecx, MEM8(esi + 0x24D));
    SET_LO8(eax, MEM8(esi + 0x278));
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0xFC);
    MEM32(esi + 0x250) = 0x44098000;
    MEM8(esi + 0x24D) = LO8(ecx);
    MEM8(esi + 0x278) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC400
 * Original: 0x000FC400 - 0x000FC448 (72 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC400: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(edx, MEM8(ecx + 0x24D));
    if (TEST_Z(_fa, _fb)) goto loc_000FC41D; /* je: equal / zero */

loc_000FC40E: ;
    MEM32(ecx + 0x250) = 0x447A0000;
    SET_LO8(edx, LO8(edx) | 4);
    goto loc_000FC42A;

loc_000FC41D: ;
    MEM32(ecx + 0x250) = 0x43E10000;
    SET_LO8(edx, LO8(edx) & 0xFB);

loc_000FC42A: ;
    MEM8(ecx + 0x24D) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x28A));
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x28A) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC450
 * Original: 0x000FC450 - 0x000FC46C (28 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC450(void)
{

loc_000FC450: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x289));
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x289) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC470
 * Original: 0x000FC470 - 0x000FC482 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC470(void)
{

loc_000FC470: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000FC478u); RECOMP_ABI_CALL(0x000EDFE0u, sub_000EDFE0); /* call 0x000EDFE0 */

loc_000FC478: ;
    MEM32(esi) = 0x3D9BB4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC490
 * Original: 0x000FC490 - 0x000FC4C3 (51 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC490(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000FC490: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx + 0x10);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    eax = eax + 0x20;
    MEMF(ecx + 0x454) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax);
    MEM32(ecx + 0x458) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x45C) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x460) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FC4D0
 * Original: 0x000FC4D0 - 0x000FC4F4 (36 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC4D0(void)
{

loc_000FC4D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000FC4D8u); RECOMP_ABI_CALL(0x000EE0B0u, sub_000EE0B0); /* call 0x000EE0B0 */

loc_000FC4D8: ;
    eax = 0xBF800000u;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi) = 0x3D9C1C;
    MEM32(esi + 0x48) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC500
 * Original: 0x000FC500 - 0x000FC51E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC500: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000FC508u); RECOMP_ABI_CALL(0x000FC520u, sub_000FC520); /* call 0x000FC520 */

loc_000FC508: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC518; /* je: equal / zero */

loc_000FC50F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FC515u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000FC515: ;
    esp = esp + 4;

loc_000FC518: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC520
 * Original: 0x000FC520 - 0x000FC527 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC520(void)
{

loc_000FC520: ;
    MEM32(ecx) = 0x3D8EC4;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC530
 * Original: 0x000FC530 - 0x000FC54F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC530: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D9C80;
    if (TEST_Z(_fa, _fb)) goto loc_000FC549; /* je: equal / zero */

loc_000FC540: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FC546u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000FC546: ;
    esp = esp + 4;

loc_000FC549: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC550
 * Original: 0x000FC550 - 0x000FC557 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC550(void)
{

loc_000FC550: ;
    eax = MEM32(ecx + 0x510);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC560
 * Original: 0x000FC560 - 0x000FC57B (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC560(void)
{

loc_000FC560: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x28B));
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x28B) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC580
 * Original: 0x000FC580 - 0x000FC58F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC580: ;
    _fa = (uint32_t)(MEM8(ecx + 0x28B)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x28B), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FC58C; /* jne: not equal / not zero */

loc_000FC589: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000FC58C: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC590
 * Original: 0x000FC590 - 0x000FC598 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC590: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0x12 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC5A0
 * Original: 0x000FC5A0 - 0x000FC5AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5A0(void)
{

loc_000FC5A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x144) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC5B0
 * Original: 0x000FC5B0 - 0x000FC5CA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC5B0: ;
    eax = MEM32(ecx + 0x290);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC5C7; /* je: equal / zero */

loc_000FC5BA: ;
    MEM32(ecx + 0x290) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000FC5C7: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC5D0
 * Original: 0x000FC5D0 - 0x000FC5F9 (41 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC5D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x2F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC5E9; /* je: equal / zero */

loc_000FC5E0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000FC5E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC5E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FC5F5; /* jne: not equal / not zero */

loc_000FC5E9: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x150)); return; /* indirect tail jmp */

loc_000FC5F5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC600
 * Original: 0x000FC600 - 0x000FC62E (46 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC600: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x2F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC619; /* je: equal / zero */

loc_000FC610: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000FC615u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC615: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FC62A; /* jne: not equal / not zero */

loc_000FC619: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ecx + 0x20;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000FC62Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC62A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC630
 * Original: 0x000FC630 - 0x000FC656 (38 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC630(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC630: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x2F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC649; /* je: equal / zero */

loc_000FC640: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000FC645u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC645: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FC652; /* jne: not equal / not zero */

loc_000FC649: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x34)); return; /* indirect tail jmp */

loc_000FC652: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FC660
 * Original: 0x000FC660 - 0x000FC67A (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC660(void)
{

loc_000FC660: ;
    SET_LO8(eax, MEM8(ecx + 0x28C));
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(eax, LO8(eax) & 0x7F);
    SET_LO8(edx, LO8(edx) << 7);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    MEM8(ecx + 0x28C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC680
 * Original: 0x000FC680 - 0x000FC6B8 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC680(void)
{

loc_000FC680: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax) = 0x3D9C98;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x24) = ecx;
    SET_LO8(edx, MEM8(eax + 0x20));
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x24) = ecx;
    SET_LO8(edx, LO8(edx) & 0xFC);
    MEM8(eax + 0x20) = LO8(edx);
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x2C) = LO8(ecx);
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC6C0
 * Original: 0x000FC6C0 - 0x000FC6C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC6C0(void)
{

loc_000FC6C0: ;
    MEM32(ecx) = 0x3D9C98;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC6D0
 * Original: 0x000FC6D0 - 0x000FC730 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC6D0(void)
{

loc_000FC6D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEM32(edx + 0x20) = ecx;
    MEM32(edx + 0x24) = ecx;
    MEM32(edx + 0x28) = ecx;
    MEM32(edx + 0x2C) = ecx;
    MEM32(edx + 0x30) = ecx;
    MEM32(edx + 0x34) = ecx;
    MEM32(edx + 0x38) = ecx;
    MEM32(edx + 0x3C) = ecx;
    MEM32(edx + 0x40) = ecx;
    MEM32(edx + 0x44) = ecx;
    MEM32(edx + 0x48) = ecx;
    MEM32(edx + 0x4C) = ecx;
    MEM32(edx + 0x50) = ecx;
    MEM32(edx + 0x54) = ecx;
    MEM32(edx + 0x58) = ecx;
    MEM32(edx + 0x5C) = ecx;
    MEM32(edx + 0x60) = ecx;
    MEM32(edx + 0x64) = ecx;
    MEM32(edx + 0x68) = ecx;
    MEM32(edx + 0x6C) = ecx;
    MEM32(edx + 0x70) = ecx;
    MEM32(edx + 0x74) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC730
 * Original: 0x000FC730 - 0x000FC772 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC730: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC771; /* je: equal / zero */

loc_000FC737: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FC73Fu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000FC73F: ;
    edi = MEM32(esp + 0x14);
    esi = eax;
    ebx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FC74Du); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000FC74D: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D9C9C);
    PUSH32(esp, 0x3C6E5C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x3C); PUSH32(esp, 0x000FC760u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC760: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FC766u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000FC766: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x45303C) = eax;
    POP32(esp, ebx);

loc_000FC771: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FC780
 * Original: 0x000FC780 - 0x000FC7D2 (82 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC780(void)
{

loc_000FC780: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x24C));
    SET_LO8(edx, LO8(eax));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) >> 2);
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) >> 3);
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x24D));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(ecx, LO8(ecx) << 5);
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) | LO8(edx));
    edx = MEM32(esp + 8);
    MEM8(edx + 0xA) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC7E0
 * Original: 0x000FC7E0 - 0x000FC888 (168 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC7E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FC7E0: ;
    eax = MEM32(esp + 4);
    edx = eax;
    edx = edx - 9;
    if ((edx == 0)) goto loc_000FC7FC; /* je: equal / zero */

loc_000FC7EB: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FC805; /* jne: not equal / not zero */

loc_000FC7EE: ;
    _fa = (uint32_t)(MEM8(ecx + 0x24C)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x24C), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FC805; /* jne: not equal / not zero */

loc_000FC7F7: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_000FC7FC: ;
    _fa = (uint32_t)(MEM8(ecx + 0x24C)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x24C), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC873; /* je: equal / zero */

loc_000FC805: ;
    edx = MEM32(ecx + 8);
    edx = edx + 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x38 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000FC883; /* ja: above (unsigned >) */

loc_000FC810: ;
    edx = ZX8(MEM8(edx + 0xFC894));
    { uint32_t _jt = MEM32(edx * 4 + 0xFC888); /* switch: 3 entries, 3 targets */
    if (_jt == 0x000FC81Eu) goto loc_000FC81E;
    if (_jt == 0x000FC878u) goto loc_000FC878;
    if (_jt == 0x000FC883u) goto loc_000FC883;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000FC81E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC823: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC828: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x21) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x21 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC82D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x23) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x23 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC832: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC837: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC83C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x29 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC841: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC846: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC84B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC850: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC855: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x33 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC85A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC85F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x39 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC864: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x35 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC869: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC86E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FC883; /* je: equal / zero */

loc_000FC873: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_000FC878: ;
    ecx = MEM32(ecx + 0x494);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x000FC883u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC883: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FC8D0
 * Original: 0x000FC8D0 - 0x000FC98F (191 bytes, 65 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FC8D0(void)
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

loc_000FC8D0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esp + 4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 8) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x000FC8F6u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FC8F6: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000FC907u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC907: ;
    edx = MEM32(eax);
    MEM32(esp + 4) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x000FC920u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FC920: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000FC92Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FC92C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FC988; /* je: equal / zero */

loc_000FC930: ;
    edx = MEM32(esi + 0x10);
    fp_push(MEMF(edx + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9B78)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d9b78] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FC986; /* jne: not equal / not zero */

loc_000FC94F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(esp + 0x20);
    edx = MEM32(eax);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FC970; /* jp: parity */

loc_000FC960: ;
    edx = edx | 0x40;
    MEM32(eax) = edx;
    MEM32(eax + 4) = MEM32(eax + 4) | 0x40;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

loc_000FC970: ;
    edx = edx | 0x100;
    MEM32(eax) = edx;
    MEM32(eax + 4) = MEM32(eax + 4) | 0x100;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

loc_000FC986: ;
    fp_pop(); /* fstp st(0) */

loc_000FC988: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FC990
 * Original: 0x000FC990 - 0x000FCBEC (604 bytes, 185 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC990(void)
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

loc_000FC990: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351288);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x51C)); /* fld float */
    ebx = 0; /* xor self */
    fp_push(MEMF(0x4FEE0C)); /* fld float */
    PUSH32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FC9DF; /* jnp: not parity */

loc_000FC9C2: ;
    eax = MEM32(esi + 0x51C);
    MEM32(0x4FEE0C) = eax;
    MEM32(0x4FEE10) = ebx;
    MEM32(0x4FF9DC) = ebx;
    MEM8(0x4FEE18) = LO8(ebx);

loc_000FC9DF: ;
    ecx = MEM32(esp + 0x30);
    edi = MEM32(esi + 0x2A8);
    edi = edi + ecx;
    MEM32(esi + 0x2A8) = edi;
    ecx = MEM32(0x4FEE10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    eax = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000FCA1D; /* jl: less (signed <) */

loc_000FC9FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4FEE14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x4FEE14) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FCA1D; /* jle: less or equal (signed <=) */

loc_000FCA06: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(eax + 0x1C);
    MEM32(0x4FEE34) = edx;
    eax = MEM32(esi + 0x2A8);
    MEM32(0x4FEE14) = eax;

loc_000FCA1D: ;
    edx = MEM32(0x4FEE34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCA41; /* je: equal / zero */

loc_000FCA27: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCA41; /* je: equal / zero */

loc_000FCA2F: ;
    edx = MEM32(0x4FEE14);
    _fa = (uint32_t)(MEM32(esi + 0x2A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2A8), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FCBA0; /* jle: less or equal (signed <=) */

loc_000FCA41: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FCBA0; /* jge: greater or equal (signed >=) */

loc_000FCA4A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x4FEE10) = ecx;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x2A8) = ebx;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(0x4FEE34)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4FEE34), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FCA7C; /* jne: not equal / not zero */

loc_000FCA65: ;
    MEM32(0x4FEE14) = ebx;
    MEM32(0x4FEE34) = ebx;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x1C);
    MEM32(0x4FF9DC) = eax;

loc_000FCA7C: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x1C);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x4C0A5C);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000FCA99u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000FCA99: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    eax = MEM32(ecx);
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000FCAF1; /* je: equal / zero */

loc_000FCAAB: ;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4D7378);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000FCAB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCAB6: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    PUSH32(esp, 0x48D878);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000FCAC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCAC5: ;
    eax = MEM32(esp + 0x34);
    ebp = MEM32(eax);
    edi = eax;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FCAD7u); RECOMP_ABI_CALL(0x00066AC0u, sub_00066AC0); /* call 0x00066AC0 */

loc_000FCAD7: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x30); PUSH32(esp, 0x000FCAE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCAE1: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FCAEEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCAEE: ;
    POP32(esp, ebp);
    goto loc_000FCB1F;

loc_000FCAF1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000FCAF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCAF8: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FCB05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCB05: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000FCB12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCB12: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FCB1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCB1F: ;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x000FCB39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCB39: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx);
    edx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000FCB47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCB47: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x000FCB54u); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_000FCB54: ;
    ecx = MEM32(esp + 0x34);
    MEM8(ecx) = LO8(eax);
    MEM8(0x4FEE18) = LO8(eax);
    SET_LO8(ecx, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi + 0x28D));
    SET_LO8(ecx, LO8(ecx) << 3);
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 8);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    ecx = esp + 0x30;
    MEM8(esi + 0x28D) = LO8(eax);
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000FCB8Au); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000FCB8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 32; return; /* ret 28 */

loc_000FCBA0: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x4FF9DC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x4FF9DC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FCBD6; /* jne: not equal / not zero */

loc_000FCBAE: ;
    SET_LO8(ecx, MEM8(esi + 0x28D));
    edx = MEM32(esp + 0x34);
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) >> 3);
    SET_LO8(ecx, LO8(ecx) & 1);
    POP32(esp, esi);
    MEM8(edx) = LO8(ecx);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 32; return; /* ret 28 */

loc_000FCBD6: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FCBF0
 * Original: 0x000FCBF0 - 0x000FCDBE (462 bytes, 147 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCBF0(void)
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

loc_000FCBF0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x294);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ebx, 1);
    if (TEST_Z(_fa, _fb)) goto loc_000FCC5A; /* je: equal / zero */

loc_000FCC03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FCC2E; /* jge: greater or equal (signed >=) */

loc_000FCC08: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x294) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(eax) = MEM32(eax) | 0x40;
    MEM32(eax + 4) = MEM32(eax + 4) | 0x40;
    MEM32(esi + 0x294) = 0;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

loc_000FCC2E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x294) = eax;
    eax = MEM32(esp + 0x30);
    MEM32(eax) = MEM32(eax) | 0x100;
    MEM32(eax + 4) = MEM32(eax + 4) | 0x100;
    MEM32(esi + 0x294) = 0;

loc_000FCC50: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

loc_000FCC5A: ;
    SET_LO8(eax, MEM8(esi + 0x289));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FCC50; /* jne: not equal / not zero */

loc_000FCC64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x20);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000FCCD7; /* je: equal / zero */

loc_000FCC80: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x298); /* fsub dword ptr [esi + 0x298] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9B78)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d9b78] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FCCB5; /* jne: not equal / not zero */

loc_000FCC96: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(eax);

loc_000FCC9C: ;
    edx = edx | 0x100;
    MEM32(eax) = edx;
    MEM32(eax + 4) = MEM32(eax + 4) | 0x100;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

loc_000FCCB5: ;
    fp_push(MEMF(esi + 0x298)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x28); /* fsub dword ptr [ecx + 0x28] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9B78)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d9b78] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FCDB4; /* jne: not equal / not zero */

loc_000FCCCF: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(eax);
    goto loc_000FCD52;

loc_000FCCD7: ;
    PUSH32(esp, 0x000FCCDCu); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FCCDC: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000FCCEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCCED: ;
    edx = MEM32(eax);
    MEM32(esp + 8) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x000FCD06u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FCD06: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000FCD12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCD12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FCDB4; /* je: equal / zero */

loc_000FCD1A: ;
    edx = MEM32(esi + 0x10);
    fp_push(MEMF(edx + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(0x3D9B74)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9B78)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d9b78] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FCDB2; /* jne: not equal / not zero */

loc_000FCD3B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9B74)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d9b74] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(esp + 0x30);
    edx = MEM32(eax);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FCC9C; /* jp: parity */

loc_000FCD52: ;
    edx = edx | 0x40;
    MEM32(eax) = edx;
    MEM32(eax + 4) = MEM32(eax + 4) | 0x40;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    SET_LO8(ebx, 0); /* xor self */
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000FCD6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCD6A: ;
    ecx = eax;
    PUSH32(esp, 0x000FCD71u); RECOMP_ABI_CALL(0x00074B80u, sub_00074B80); /* call 0x00074B80 */

loc_000FCD71: ;
    PUSH32(esp, 0x000FCD76u); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_000FCD76: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x28);
    ecx = esp + 0x20;
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000FCD8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCD8C: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FCDB4; /* jp: parity */

loc_000FCDA6: ;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

loc_000FCDB2: ;
    fp_pop(); /* fstp st(0) */

loc_000FCDB4: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FCDC0
 * Original: 0x000FCDC0 - 0x000FCDFE (62 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCDC0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1A4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FCDDA; /* jne: not equal / not zero */

loc_000FCDC9: ;
    eax = MEM32(0x4FEE1C);
    MEM32(ecx + 0x1A4) = eax;
    MEM32(0x4FEE1C) = MEM32(0x4FEE1C) + 1;
    _fa = (uint32_t)(MEM32(0x4FEE1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FCDDA: ;
    eax = MEM32(ecx + 0x1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000FCDED; /* jge: greater or equal (signed >=) */

loc_000FCDE4: ;
    eax = 0; /* xor self */
    MEM32(ecx + 0x1A4) = eax;
    esp += 4; return; /* ret */

loc_000FCDED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FCDF7; /* jle: less or equal (signed <=) */

loc_000FCDF2: ;
    eax = 3;

loc_000FCDF7: ;
    MEM32(ecx + 0x1A4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000FCE00
 * Original: 0x000FCE00 - 0x000FCE1D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCE00: ;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0x330);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FCE1C; /* jne: not equal / not zero */

loc_000FCE0E: ;
    PUSH32(esp, 0x000FCE13u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000FCE13: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FCE1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCE1C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FCE20
 * Original: 0x000FCE20 - 0x000FCE81 (97 bytes, 38 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FCE20(void)
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

loc_000FCE20: ;
    ecx = MEM32(esp + 4);
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
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C94AC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c94ac] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FCE60; /* jp: parity */

loc_000FCE4F: ;
    eax = 0; /* xor self */
    fp_pop(); /* fstp st(0) */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_000FCE60: ;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    SET_LO8(eax, 1);
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FCE90
 * Original: 0x000FCE90 - 0x000FCF35 (165 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCE90(void)
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

loc_000FCE90: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000FCEBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCEBC: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000FCEC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCEC9: ;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, 0x000FCED4u); RECOMP_ABI_CALL(0x000A0770u, sub_000A0770); /* call 0x000A0770 */

loc_000FCED4: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CB260); /* fadd dword ptr [0x3cb260] */
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1E);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ecx = esp + 0x10;
    fp_top() = fp_top() + MEMF(0x3CB260); /* fadd dword ptr [0x3cb260] */
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0x4C) = 1;
    PUSH32(esp, 0x000FCF19u); RECOMP_ABI_CALL(0x000FC990u, sub_000FC990); /* call 0x000FC990 */

loc_000FCF19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_000FCF24; /* jne: not equal / not zero */

loc_000FCF1E: ;
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

loc_000FCF24: ;
    SET_LO8(ecx, MEM8(esp + 0x2C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FCF40
 * Original: 0x000FCF40 - 0x000FCF5C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCF40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FCF40: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(MEM8(eax + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x334), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FCF5B; /* jne: not equal / not zero */

loc_000FCF4C: ;
    PUSH32(esp, 0x000FCF51u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FCF51: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x214)); return; /* indirect tail jmp */

loc_000FCF5B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FCF60
 * Original: 0x000FCF60 - 0x000FCF79 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCF60(void)
{

loc_000FCF60: ;
    SET_LO8(eax, MEM8(ecx + 0x28B));
    SET_LO8(eax, LO8(eax) | 0xC0);
    MEM32(ecx + 0x144) = 0;
    MEM8(ecx + 0x28B) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000FCF80
 * Original: 0x000FCF80 - 0x000FD008 (136 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCF80(void)
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

loc_000FCF80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x510);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000FCFB4; /* je: equal / zero */

loc_000FCF8E: ;
    PUSH32(esp, 0x000FCF93u); RECOMP_ABI_CALL(0x000F7060u, sub_000F7060); /* call 0x000F7060 */

loc_000FCF93: ;
    ecx = MEM32(esi + 0x510);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    edi = esi + 0x50C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0x508;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000FCFB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCFB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FCFF5; /* je: equal / zero */

loc_000FCFB4: ;
    PUSH32(esp, 0x000FCFB9u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FCFB9: ;
    ecx = MEM32(esi + 0x504);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x000FCFCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCFCA: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FCFEC; /* je: equal / zero */

loc_000FCFD0: ;
    PUSH32(esp, 0x000FCFD5u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FCFD5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FCFDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FCFDF: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x25C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x25c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FCFF5; /* jnp: not parity */

loc_000FCFEC: ;
    _fa = (uint32_t)(MEM32(esi + 0x224)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x224), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FCFFA; /* je: equal / zero */

loc_000FCFF5: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000FCFFA: ;
    SET_LO8(eax, MEM8(esi + 0x28A));
    SET_LO8(eax, LO8(eax) >> 4);
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) & 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FD010
 * Original: 0x000FD010 - 0x000FD0A0 (144 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD010(void)
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

loc_000FD010: ;
    esp = esp - 0xC;
    eax = MEM32(0x5BC9D0);
    edx = MEM32(0x5BC9D8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC9D4);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x000FD038u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000FD038: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    ecx = ecx + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x000FD050u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD050: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9CA8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d9ca8] */
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FD09A; /* jnp: not parity */

loc_000FD062: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8380)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8380] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD09A; /* je: equal / zero */

loc_000FD072: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9CA8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d9ca8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FD09A; /* jnp: not parity */

loc_000FD083: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8380)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8380] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD09A; /* je: equal / zero */

loc_000FD094: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_000FD09A: ;
    SET_LO8(eax, 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FD0A0
 * Original: 0x000FD0A0 - 0x000FD0C0 (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD0A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D9C98;
    if (TEST_Z(_fa, _fb)) goto loc_000FD0B9; /* je: equal / zero */

loc_000FD0B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FD0B6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000FD0B6: ;
    esp = esp + 4;

loc_000FD0B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FD0C0
 * Original: 0x000FD0C0 - 0x000FD107 (71 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD0C0: ;
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    edx = eax + 8;
    esi = 0x14;
    edi = 0; /* xor self */
    edi = edi;

loc_000FD0D0: ;
    ecx = MEM32(0x5BC9D0);
    MEM32(edx + -8) = ecx;
    ecx = MEM32(0x5BC9D4);
    MEM32(edx + -4) = ecx;
    ecx = MEM32(0x5BC9D8);
    MEM32(edx) = ecx;
    MEM32(edx + 4) = 0x42700000;
    MEM32(edx + 8) = 0x1A;
    MEM32(edx + 0xC) = edi;
    MEM32(edx + 0x10) = edi;
    edx = edx + 0x1C;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FD0D0; /* jne: not equal / not zero */

loc_000FD104: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD110
 * Original: 0x000FD110 - 0x000FD133 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD110: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD132; /* je: equal / zero */

loc_000FD118: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 8) = LO8(edx);
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;

loc_000FD132: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FD140
 * Original: 0x000FD140 - 0x000FD1B6 (118 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD140(void)
{

loc_000FD140: ;
    esp = esp - 0x10;
    eax = MEM32(0x47A050);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, esi);
    MEM8(esp + 8) = 0;
    PUSH32(esp, 0x000FD157u); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_000FD157: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D9C9C);
    PUSH32(esp, 0x3C6E5C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000FD16Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD16F: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FD183u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_000FD183: ;
    esi = MEM32(esp + 0x24);
    MEM8(esi + 0x10C) = MEM8(esi + 0x10C) | 1;
    PUSH32(esp, 0x100);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FD19Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000FD19E: ;
    ecx = MEM32(esp + 0x28);
    esp = esp + 0x18;
    MEM8(esi + 0xFF) = 0;
    POP32(esp, esi);
    PUSH32(esp, 0x000FD1B2u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000FD1B2: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000FD1C0
 * Original: 0x000FD1C0 - 0x000FD327 (359 bytes, 113 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD1C0(void)
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

loc_000FD1C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x2D8);
    SET_LO8(edx, MEM8(ecx + 0x3A1));
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esi + 0x43D) = LO8(edx);
    eax = MEM32(eax + 0x2D8);
    ecx = MEM32(eax + 0x468);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = esp + 0xC;
    ebp = esi + 0x440;
    MEM32(ebp) = ecx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CCB2C);
    ecx = edi;
    MEM32(esp + 0x14) = 0x44160000;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000FD210u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD210: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esi + 0x10);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    eax = eax + 0x20;
    MEMF(esi + 0x454) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax);
    MEM32(esi + 0x458) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x45C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x460) = eax;
    edx = MEM32(edi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CCB20);
    ecx = edi;
    MEM32(esp + 0x1C) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000FD259u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD259: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FD267; /* jle: less or equal (signed <=) */

loc_000FD261: ;
    MEM32(esi + 0x464) = eax;

loc_000FD267: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x10);
    ecx = ebx;
    PUSH32(esp, 0x000FD272u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FD272: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD283; /* je: equal / zero */

loc_000FD277: ;
    ecx = ebx;
    PUSH32(esp, 0x000FD27Eu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FD27E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD2CE; /* jne: not equal / not zero */

loc_000FD283: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CCB48);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000FD291u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD291: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FD2A7; /* jne: not equal / not zero */

loc_000FD295: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D9CAC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000FD2A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD2A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD2CE; /* je: equal / zero */

loc_000FD2A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FD2ADu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000FD2AD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FD2BC; /* jge: greater or equal (signed >=) */

loc_000FD2B5: ;
    eax = 1;
    goto loc_000FD2C6;

loc_000FD2BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FD2C6; /* jle: less or equal (signed <=) */

loc_000FD2C1: ;
    eax = 8;

loc_000FD2C6: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000FD2CEu); RECOMP_ABI_CALL(0x000FC260u, sub_000FC260); /* call 0x000FC260 */

loc_000FD2CE: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0xB (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000FD2E8; /* jne: not equal / not zero */

loc_000FD2D5: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x2D8);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x454);
    MEM32(esi + 0x14) = eax;

loc_000FD2E8: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CCB04);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000FD2F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD2F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD313; /* je: equal / zero */

loc_000FD2FA: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CCB04);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000FD308u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD308: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esi + 0x43D) = LO8(ecx);

loc_000FD313: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3CCB10);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000FD320u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD320: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FD330
 * Original: 0x000FD330 - 0x000FD7D3 (1187 bytes, 306 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD330(void)
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

loc_000FD330: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351350);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x64;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x494);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 4) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000FD360; /* je: equal / zero */

loc_000FD359: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000FD360u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD360: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FD367u); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000FD367: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0x3E0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000FD378u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD378: ;
    edi = eax;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD39A; /* je: equal / zero */

loc_000FD380: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FD388u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD388: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD39A; /* je: equal / zero */

loc_000FD38C: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000FD393u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD393: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD39A; /* jne: not equal / not zero */

loc_000FD398: ;
    SET_LO8(ebx, 1);

loc_000FD39A: ;
    edi = MEM32(esp + 0x80);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD46E; /* je: equal / zero */

loc_000FD3AA: ;
    PUSH32(esp, 0x000FD3AFu); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000FD3AF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3D9D24);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000FD3BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD3BB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD46E; /* je: equal / zero */

loc_000FD3C3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FD46E; /* jne: not equal / not zero */

loc_000FD3CB: ;
    PUSH32(esp, 0x000FD3D0u); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000FD3D0: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0x3E0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000FD3E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD3E1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD408; /* je: equal / zero */

loc_000FD3E7: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FD3EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD3EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD408; /* je: equal / zero */

loc_000FD3F3: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FD3FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD3FB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000FD402u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD402: ;
    MEMF(esi + 0x254) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FD408: ;
    ecx = esi + 0x498;
    MEM32(esp + 0x80) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x78) = 8;
    if (TEST_Z(_fa, _fb)) goto loc_000FD42A; /* je: equal / zero */

loc_000FD421: ;
    PUSH32(esp, 0x000FD426u); RECOMP_ABI_CALL(0x000EE060u, sub_000EE060); /* call 0x000EE060 */

loc_000FD426: ;
    ecx = eax;
    goto loc_000FD42C;

loc_000FD42A: ;
    ecx = 0; /* xor self */

loc_000FD42C: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x494) = ecx;
    edx = MEM32(eax + 0x2D8);
    _fa = (uint32_t)(MEM8(edx + 0x3A1)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x3A1), 8 (8-bit) */
    MEM32(esp + 0x78) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_000FD458; /* je: equal / zero */

loc_000FD44C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000FD453u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD453: ;
    goto loc_000FD737;

loc_000FD458: ;
    MEM32(esi + 0x280) = 1;

loc_000FD462: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000FD469u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD469: ;
    goto loc_000FD737;

loc_000FD46E: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = eax;
    edx = 3;
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esi + 0x14);
    eax = eax << 2;
    ebx = 5;
    MEM32(esp + 0x10) = 0x43AF0000;
    MEM32(esp + 0x14) = 0x43960000;
    MEM32(esp + 0x18) = 0x43960000;
    MEM32(esp + 0x1C) = 0x43960000;
    MEM32(esp + 0x20) = 0x43C80000;
    MEM32(esp + 0x24) = 0x437A0000;
    MEM32(esp + 0x28) = 0x43960000;
    MEM32(esp + 0x2C) = 0x43960000;
    MEM32(esp + 0x30) = 0x43960000;
    MEM32(esp + 0x34) = 0x43AF0000;
    MEM32(esp + 0x38) = 0x43AF0000;
    MEM32(esp + 0x3C) = 0;
    ecx = MEM32(esp + eax + 0x10);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x60) = edx;
    eax = MEM32(esp + eax + 0x40);
    MEM32(esi + 0x250) = ecx;
    MEM32(esi + 0x3EC) = eax;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    MEM32(esi + 0x254) = 0x42B40000;
    edi = 7;
    if (CMP_EQ(_fa, _fb)) goto loc_000FD6DB; /* je: equal / zero */

loc_000FD53F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD6DB; /* je: equal / zero */

loc_000FD547: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD680; /* je: equal / zero */

loc_000FD550: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD680; /* je: equal / zero */

loc_000FD559: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD680; /* je: equal / zero */

loc_000FD562: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    ecx = esi + 0x498;
    MEM32(esp + 0x80) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000FD583; /* jne: not equal / not zero */

loc_000FD574: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x78) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000FD5ED; /* je: equal / zero */

loc_000FD57C: ;
    PUSH32(esp, 0x000FD581u); RECOMP_ABI_CALL(0x000F07A0u, sub_000F07A0); /* call 0x000F07A0 */

loc_000FD581: ;
    goto loc_000FD5EF;

loc_000FD583: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD59A; /* jne: not equal / not zero */

loc_000FD587: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x78) = 4;
    if (TEST_Z(_fa, _fb)) goto loc_000FD5ED; /* je: equal / zero */

loc_000FD593: ;
    PUSH32(esp, 0x000FD598u); RECOMP_ABI_CALL(0x000FC470u, sub_000FC470); /* call 0x000FC470 */

loc_000FD598: ;
    goto loc_000FD5EF;

loc_000FD59A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD5D5; /* jne: not equal / not zero */

loc_000FD59F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x78) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_000FD5AE; /* je: equal / zero */

loc_000FD5A7: ;
    PUSH32(esp, 0x000FD5ACu); RECOMP_ABI_CALL(0x000FC4D0u, sub_000FC4D0); /* call 0x000FC4D0 */

loc_000FD5AC: ;
    goto loc_000FD5B0;

loc_000FD5AE: ;
    eax = 0; /* xor self */

loc_000FD5B0: ;
    SET_LO8(ecx, MEM8(esi + 0x28A));
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    SET_LO8(ecx, LO8(ecx) | 2);
    MEM32(esp + 0x78) = 0xFFFFFFFFu;
    MEM32(esi + 0x494) = eax;
    MEM8(esi + 0x28A) = LO8(ecx);
    goto loc_000FD737;

loc_000FD5D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD60A; /* jne: not equal / not zero */

loc_000FD5DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x78) = 6;
    if (TEST_Z(_fa, _fb)) goto loc_000FD5ED; /* je: equal / zero */

loc_000FD5E6: ;
    PUSH32(esp, 0x000FD5EBu); RECOMP_ABI_CALL(0x000EE0D0u, sub_000EE0D0); /* call 0x000EE0D0 */

loc_000FD5EB: ;
    goto loc_000FD5EF;

loc_000FD5ED: ;
    eax = 0; /* xor self */

loc_000FD5EF: ;
    MEM32(esi + 0x494) = eax;
    SET_LO8(eax, MEM8(esi + 0x28A));
    MEM32(esp + 0x78) = 0xFFFFFFFFu;
    SET_LO8(eax, LO8(eax) & 0xFC);
    goto loc_000FD731;

loc_000FD60A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x78) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_000FD61B; /* je: equal / zero */

loc_000FD612: ;
    PUSH32(esp, 0x000FD617u); RECOMP_ABI_CALL(0x000EDFE0u, sub_000EDFE0); /* call 0x000EDFE0 */

loc_000FD617: ;
    ecx = eax;
    goto loc_000FD61D;

loc_000FD61B: ;
    ecx = 0; /* xor self */

loc_000FD61D: ;
    edx = MEM32(esi + 0x10);
    MEM32(esi + 0x494) = ecx;
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x78) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_000FD44C; /* jne: not equal / not zero */

loc_000FD63B: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD44C; /* je: equal / zero */

loc_000FD647: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD44C; /* je: equal / zero */

loc_000FD650: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD44C; /* je: equal / zero */

loc_000FD658: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD44C; /* je: equal / zero */

loc_000FD661: ;
    edx = MEM32(edx + 0x2D8);
    _fa = (uint32_t)(MEM8(edx + 0x3A1)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0x3A1), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD462; /* je: equal / zero */

loc_000FD674: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000FD67Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD67B: ;
    goto loc_000FD737;

loc_000FD680: ;
    edi = esi + 0x498;
    MEM32(esp + 0x80) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x78) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_000FD6AA; /* je: equal / zero */

loc_000FD699: ;
    ecx = edi;
    PUSH32(esp, 0x000FD6A0u); RECOMP_ABI_CALL(0x000EDFE0u, sub_000EDFE0); /* call 0x000EDFE0 */

loc_000FD6A0: ;
    MEM32(edi) = 0x3D90CC;
    ecx = edi;
    goto loc_000FD6AC;

loc_000FD6AA: ;
    ecx = 0; /* xor self */

loc_000FD6AC: ;
    MEM32(esi + 0x494) = ecx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000FD6C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD6C1: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD6D3; /* je: equal / zero */

loc_000FD6C7: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD737; /* je: equal / zero */

loc_000FD6D3: ;
    MEM32(esi + 0x280) = ebx;
    goto loc_000FD737;

loc_000FD6DB: ;
    ecx = esi + 0x498;
    MEM32(esi + 0x254) = 0x44098000;
    MEM32(esp + 0x80) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x78) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000FD705; /* je: equal / zero */

loc_000FD6FE: ;
    PUSH32(esp, 0x000FD703u); RECOMP_ABI_CALL(0x000EE060u, sub_000EE060); /* call 0x000EE060 */

loc_000FD703: ;
    goto loc_000FD707;

loc_000FD705: ;
    eax = 0; /* xor self */

loc_000FD707: ;
    MEM32(esi + 0x494) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    ecx = eax;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000FD71Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD71E: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edi (32-bit) */
    MEM32(esi + 0x280) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000FD737; /* jne: not equal / not zero */

loc_000FD729: ;
    SET_LO8(eax, MEM8(esi + 0x28A));
    SET_LO8(eax, LO8(eax) & 0xFE);

loc_000FD731: ;
    MEM8(esi + 0x28A) = LO8(eax);

loc_000FD737: ;
    ecx = MEM32(esi + 0x494);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000FD743u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD743: ;
    MEM32(0x4FED98) = 0;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + 0x2D8);
    eax = eax + 0x20C;
    PUSH32(esp, 0x3C97C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FD766u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000FD766: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000FD799; /* jne: not equal / not zero */

loc_000FD76F: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x2D8);
    eax = eax + 0x20C;
    PUSH32(esp, 0x3D9D20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FD788u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000FD788: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FD799; /* jne: not equal / not zero */

loc_000FD78F: ;
    SET_LO8(eax, MEM8(esi + 0x28B));
    SET_LO8(eax, LO8(eax) & 0xEF);
    goto loc_000FD7BB;

loc_000FD799: ;
    ecx = MEM32(esi + 0x494);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000FD7A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD7A6: ;
    ecx = MEM32(esi + 0x494);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000FD7B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD7B3: ;
    SET_LO8(eax, MEM8(esi + 0x28B));
    SET_LO8(eax, LO8(eax) | 0x10);

loc_000FD7BB: ;
    ecx = MEM32(esp + 0x68);
    MEM8(esi + 0x28B) = LO8(eax);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x70;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FD7E0
 * Original: 0x000FD7E0 - 0x000FDA3F (607 bytes, 202 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD7E0(void)
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

loc_000FD7E0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351370);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    ecx = edi + 0x18;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FD811; /* je: equal / zero */

loc_000FD808: ;
    PUSH32(esp, 0x000FD80Du); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FD80D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FD826; /* jne: not equal / not zero */

loc_000FD811: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x28);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 20; return; /* ret 16 */

loc_000FD826: ;
    eax = MEM32(edi + 0x10);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C0A5C);
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000FD844u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000FD844: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(esp + 0x44) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FD855u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD855: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000FD862u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD862: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FD86Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD86F: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000FD87Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD87C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FD889u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD889: ;
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x10);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x000FD8A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD8A0: ;
    eax = MEM32(edi + 0x10);
    eax = eax + 0x20;
    MEM32(esp + 0x20) = 0x3CA964;
    ecx = MEM32(eax);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0xC);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x38) = 3;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x000FD8DAu); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000FD8DA: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    MEM8(esp + 0x40) = 1;
    PUSH32(esp, 0x000FD8F2u); RECOMP_ABI_CALL(0x000A0770u, sub_000A0770); /* call 0x000A0770 */

loc_000FD8F2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FD8F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD8F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDA0A; /* je: equal / zero */

loc_000FD900: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x4C) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FD90Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD90A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FDA0A; /* jle: less or equal (signed <=) */

loc_000FD912: ;
    PUSH32(esp, ebx);

loc_000FD913: ;
    eax = MEM32(esp + 0x50);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000FD91Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD91F: ;
    edx = MEM32(esi);
    ebx = eax;
    eax = MEM32(esp + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000FD932u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD932: ;
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = edx;
    eax = MEM32(ebx + 4);
    eax = eax >> 0x11;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FD99B; /* jne: not equal / not zero */

loc_000FD944: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FD961; /* jp: parity */

loc_000FD959: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C9784)); /* fld float */

loc_000FD961: ;
    ecx = MEM32(edi + 0x10);
    fp_push(MEMF(ebx + 0x28)); /* fld float */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD99B; /* je: equal / zero */

loc_000FD97D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000FD983u); RECOMP_ABI_CALL(0x00038400u, sub_00038400); /* call 0x00038400 */

loc_000FD983: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD99B; /* je: equal / zero */

loc_000FD987: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FD999; /* je: equal / zero */

loc_000FD98B: ;
    SET_LO8(ecx, MEM8(ebp + 0x2C3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 0x2C3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(ebx + 0x2C3) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000FD99B; /* jae: above or equal (unsigned >=) */

loc_000FD999: ;
    ebp = ebx;

loc_000FD99B: ;
    ebx = MEM32(esp + 0x50);
    edx = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esp + 0x50) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FD9AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FD9AA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FD913; /* jl: less (signed <) */

loc_000FD9B2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000FDA0A; /* je: equal / zero */

loc_000FD9B7: ;
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(esp + 0x44);
    MEM32(eax) = ecx;
    edx = MEM32(ebp + 0x24);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebp + 0x28);
    MEM32(eax + 8) = ecx;
    edx = MEM32(ebp + 0x1C);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x000FD9E0u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000FD9E0: ;
    esp = esp + 4;
    ecx = esp + 0xC;
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000FD9F4u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000FD9F4: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x28);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 20; return; /* ret 16 */

loc_000FDA0A: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x40) = 0;
    PUSH32(esp, 0x000FDA15u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000FDA15: ;
    ecx = esp + 0x10;
    esp = esp + 4;
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000FDA29u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000FDA29: ;
    ecx = MEM32(esp + 0x34);
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FDA40
 * Original: 0x000FDA40 - 0x000FDA66 (38 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDA40: ;
    edx = MEM32(esp + 4);
    eax = 4;
    ecx = ecx + 0x198;
    /* nop */

loc_000FDA50: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDA61; /* je: equal / zero */

loc_000FDA54: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000FDA50; /* jge: greater or equal (signed >=) */

loc_000FDA5C: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_000FDA61: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FDA70
 * Original: 0x000FDA70 - 0x000FDB12 (162 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDA70(void)
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

loc_000FDA70: ;
    fp_push(MEMF(ecx + 0x80)); /* fld float */
    edx = 2;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDA9C; /* jne: not equal / not zero */

loc_000FDA88: ;
    _fa = (uint32_t)(MEM32(ecx + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDA9C; /* jne: not equal / not zero */

loc_000FDA90: ;
    eax = MEM32(ecx + 0x51C);
    MEM32(ecx + 0x80) = eax;

loc_000FDA9C: ;
    fp_push(MEMF(ecx + 0xB8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDAC3; /* jne: not equal / not zero */

loc_000FDAAF: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDAC3; /* jne: not equal / not zero */

loc_000FDAB7: ;
    eax = MEM32(ecx + 0x51C);
    MEM32(ecx + 0xB8) = eax;

loc_000FDAC3: ;
    fp_push(MEMF(ecx + 0xF0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDAEA; /* jne: not equal / not zero */

loc_000FDAD6: ;
    _fa = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xFC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDAEA; /* jne: not equal / not zero */

loc_000FDADE: ;
    eax = MEM32(ecx + 0x51C);
    MEM32(ecx + 0xF0) = eax;

loc_000FDAEA: ;
    fp_push(MEMF(ecx + 0x128)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDB11; /* jne: not equal / not zero */

loc_000FDAFD: ;
    _fa = (uint32_t)(MEM32(ecx + 0x134)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x134), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDB11; /* jne: not equal / not zero */

loc_000FDB05: ;
    edx = MEM32(ecx + 0x51C);
    MEM32(ecx + 0x128) = edx;

loc_000FDB11: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FDB20
 * Original: 0x000FDB20 - 0x000FDBAE (142 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDB20(void)
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

loc_000FDB20: ;
    fp_push(MEMF(ecx + 0x80)); /* fld float */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esi = 0; /* xor self */
    edx = 2;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDB49; /* jne: not equal / not zero */

loc_000FDB3B: ;
    _fa = (uint32_t)(MEM32(ecx + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x8C), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDB49; /* jne: not equal / not zero */

loc_000FDB43: ;
    MEM32(ecx + 0x80) = esi;

loc_000FDB49: ;
    fp_push(MEMF(ecx + 0xB8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDB6A; /* jne: not equal / not zero */

loc_000FDB5C: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDB6A; /* jne: not equal / not zero */

loc_000FDB64: ;
    MEM32(ecx + 0xB8) = esi;

loc_000FDB6A: ;
    fp_push(MEMF(ecx + 0xF0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDB8B; /* jne: not equal / not zero */

loc_000FDB7D: ;
    _fa = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xFC), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDB8B; /* jne: not equal / not zero */

loc_000FDB85: ;
    MEM32(ecx + 0xF0) = esi;

loc_000FDB8B: ;
    fp_push(MEMF(ecx + 0x128)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDBAC; /* jne: not equal / not zero */

loc_000FDB9E: ;
    _fa = (uint32_t)(MEM32(ecx + 0x134)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x134), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDBAC; /* jne: not equal / not zero */

loc_000FDBA6: ;
    MEM32(ecx + 0x128) = esi;

loc_000FDBAC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FDBB0
 * Original: 0x000FDBB0 - 0x000FDC0A (90 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDBB0: ;
    edx = MEM32(ecx + 0x178);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_000FDBCA; /* je: equal / zero */

loc_000FDBC1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDBCA; /* je: equal / zero */

loc_000FDBC5: ;
    eax = 1;

loc_000FDBCA: ;
    edx = MEM32(ecx + 0x180);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDBD9; /* je: equal / zero */

loc_000FDBD4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDBD9; /* je: equal / zero */

loc_000FDBD8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FDBD9: ;
    edx = MEM32(ecx + 0x188);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDBE8; /* je: equal / zero */

loc_000FDBE3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDBE8; /* je: equal / zero */

loc_000FDBE7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FDBE8: ;
    edx = MEM32(ecx + 0x190);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDBF7; /* je: equal / zero */

loc_000FDBF2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDBF7; /* je: equal / zero */

loc_000FDBF6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FDBF7: ;
    ecx = MEM32(ecx + 0x198);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDC06; /* je: equal / zero */

loc_000FDC01: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDC06; /* je: equal / zero */

loc_000FDC05: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FDC06: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FDC10
 * Original: 0x000FDC10 - 0x000FDCB1 (161 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDC10: ;
    SET_LO8(edx, MEM8(ecx + 0x24C));
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x24C));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(ecx + 0x24C) = LO8(ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDCAD; /* jne: not equal / not zero */

loc_000FDC34: ;
    eax = MEM32(ecx + 0x10);
    MEM32(eax + 0x344) = ebx;
    edx = 0x800000;
    MEM32(eax + 0x1B4) = edx;
    MEM32(eax + 0x1B8) = edx;
    MEM32(eax + 0x1BC) = edx;
    MEM32(eax + 0x1C0) = edx;
    MEM32(eax + 0x1C4) = edx;
    MEM32(eax + 0x1C8) = edx;
    MEM32(eax + 0x160) = ebx;
    MEM32(eax + 0x164) = ebx;
    eax = MEM32(ecx + 0x10);
    MEM32(eax + 0x1B4) = edx;
    MEM32(eax + 0x1B8) = edx;
    MEM32(eax + 0x1BC) = edx;
    MEM32(eax + 0x1C0) = edx;
    MEM32(eax + 0x1C4) = edx;
    MEM32(eax + 0x1C8) = edx;
    MEM32(eax + 0x160) = ebx;
    MEM32(eax + 0x164) = ebx;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x000FDCADu); RECOMP_ABI_CALL(0x000345A0u, sub_000345A0); /* call 0x000345A0 */

loc_000FDCAD: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FDCC0
 * Original: 0x000FDCC0 - 0x000FDD0B (75 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDCC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = 4;
    edi = ebx + 0x198;

loc_000FDCD0: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDCE0; /* je: equal / zero */

loc_000FDCD5: ;
    ecx = edi;
    PUSH32(esp, 0x000FDCDCu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FDCDC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDCF8; /* jne: not equal / not zero */

loc_000FDCE0: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi - 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000FDCD0; /* jge: greater or equal (signed >=) */

loc_000FDCE8: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000FDCF8: ;
    ecx = MEM32(ebx + esi * 8 + 0x178);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FDD10
 * Original: 0x000FDD10 - 0x000FDD3D (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FDD10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    esi = ecx + 0x198;
    edi = 5;

loc_000FDD20: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FDD31; /* je: equal / zero */

loc_000FDD25: ;
    ecx = esi;
    PUSH32(esp, 0x000FDD2Cu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FDD2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDD31; /* je: equal / zero */

loc_000FDD30: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FDD31: ;
    esi = esi - 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FDD20; /* jne: not equal / not zero */

loc_000FDD37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FDD40
 * Original: 0x000FDD40 - 0x000FDDC2 (130 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDD40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FDD40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x3E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x3E8), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDD8F; /* je: equal / zero */

loc_000FDD52: ;
    esi = 0; /* xor self */
    ebx = edi + 0x400;
    /* nop */

loc_000FDD60: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDD86; /* je: equal / zero */

loc_000FDD64: ;
    eax = MEM32(esi * 4 + 0x44E4D8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(edi + 0x494);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000FDD82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FDD82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDD98; /* jne: not equal / not zero */

loc_000FDD86: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FDD60; /* jl: less (signed <) */

loc_000FDD8F: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000FDD98: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000FDDAE; /* jne: not equal / not zero */

loc_000FDD9F: ;
    eax = 2;
    eax = eax + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000FDDAE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDDB8; /* jne: not equal / not zero */

loc_000FDDB3: ;
    eax = 4;

loc_000FDDB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax + 4;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FDDD0
 * Original: 0x000FDDD0 - 0x000FDE5C (140 bytes, 42 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FDDD0(void)
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

loc_000FDDD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x4FEE20) = 1;
    esi = 0; /* xor self */
    edi = 0x4FEE54;

loc_000FDDE0: ;
    PUSH32(esp, 0x000FDDE5u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FDDE5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FDDEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FDDEF: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDE07; /* je: equal / zero */

loc_000FDDF8: ;
    edi = edi + 0x1C;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4FF084) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x4FF084 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FDDE0; /* jl: less (signed <) */

loc_000FDE04: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000FDE07: ;
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    ecx = MEM32(eax);
    MEM32(esi + 0x4FEE40) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x4FEE44) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x4FEE48) = eax;
    MEM32(esi + 0x4FEE50) = ecx;
    MEMF(esi + 0x4FEE4C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000FDE45u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FDE45: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FDE4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FDE4F: ;
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    POP32(esp, edi);
    MEMF(esi + 0x4FEE54) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FDE60
 * Original: 0x000FDE60 - 0x000FDF81 (289 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDE60(void)
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

loc_000FDE60: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000FDE6Bu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FDE6B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FDE75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FDE75: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDF7A; /* jne: not equal / not zero */

loc_000FDE83: ;
    PUSH32(esp, 0x000FDE88u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FDE88: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FDE92u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FDE92: ;
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    eax = MEM32(esp + 0x20);
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x28);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x000FDEB9u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FDEB9: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000FDEC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FDEC5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDF7A; /* je: equal / zero */

loc_000FDECD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FDED3u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FDED3: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000FDEE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FDEE4: ;
    edx = MEM32(eax);
    edi = MEM32(esi + 0x1EC);
    MEM32(esp + 8) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(eax + 8);
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000FDF14; /* jge: greater or equal (signed >=) */

loc_000FDF05: ;
    SET_LO8(eax, MEM8(esi + 0x1F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FDF29; /* je: equal / zero */

loc_000FDF0F: ;
    eax = 0x1D;

loc_000FDF14: ;
    eax = eax << 4;
    eax = eax + esi + 8;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000FDF25u); RECOMP_ABI_CALL(0x0002E110u, sub_0002E110); /* call 0x0002E110 */

loc_000FDF25: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FDF79; /* jne: not equal / not zero */

loc_000FDF29: ;
    ecx = MEM32(esp + 8);
    edi = edi << 4;
    MEM32(edi + esi + 8) = ecx;
    edx = MEM32(esp + 0xC);
    eax = edi + esi + 8;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x1EC);
    edx = edx << 4;
    SET_LO8(eax, 1);
    MEM8(edx + esi + 0x14) = LO8(eax);
    edx = MEM32(esi + 0x1EC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1E (32-bit) */
    MEM32(esi + 0x1EC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000FDF79; /* jl: less (signed <) */

loc_000FDF69: ;
    MEM32(esi + 0x1EC) = 0;
    MEM8(esi + 0x1F0) = LO8(eax);

loc_000FDF79: ;
    POP32(esp, edi);

loc_000FDF7A: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FDF90
 * Original: 0x000FDF90 - 0x000FE160 (464 bytes, 142 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDF90(void)
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

loc_000FDF90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351390);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FDFB0u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FDFB0: ;
    edi = MEM32(esp + 0x58);
    esi = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    edx = MEM32(eax);
    MEM32(esp + 0x14) = esp;
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000FDFD1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FDFD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_000FE14A; /* jg: greater (signed >) */

loc_000FDFD9: ;
    edx = MEM32(edi + 0x1C);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C0A5C);
    ecx = esp + 0x14;
    MEM32(esp + 0x60) = edx;
    PUSH32(esp, 0x000FDFF3u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000FDFF3: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(esp + 0x54) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FE008u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE008: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000FE00Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE00F: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    MEM32(esp + 0x38) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(eax + 0x10);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x3C) = ecx;
    fp_top() = fp_top() + MEMF(esi + 4); /* fadd dword ptr [esi + 4] */
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x40) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    edx = esp + 0x1C;
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    PUSH32(esp, edx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(esi); /* fadd dword ptr [esi] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 4); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 8); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000FE081u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE081: ;
    ecx = MEM32(esp + 0xC);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x5C) = 0x3C898C;
    PUSH32(esp, 0x000FE098u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000FE098: ;
    ebp = eax;
    esp = esp + 8;
    MEM32(esp + 0x10) = ebp;
    edx = MEM32(ebp);
    ecx = ebp;
    MEM8(esp + 0x4C) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FE0ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE0AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE12B; /* jne: not equal / not zero */

loc_000FE0B1: ;
    SET_LO8(eax, MEM8(esp + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE12B; /* je: equal / zero */

loc_000FE0B9: ;
    SET_LO8(eax, MEM8(esp + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE0F6; /* jne: not equal / not zero */

loc_000FE0C1: ;
    eax = MEM32(esi);
    fp_push(MEMF(esi + 8)); /* fld float */
    ecx = MEM32(esi + 4);
    fp_top() = fp_top() + MEMF(0x3C9784); /* fadd dword ptr [0x3c9784] */
    edx = MEM32(edi);
    MEM32(esp + 0x2C) = eax;
    eax = esp + 0x2C;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x30) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x000FE0EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE0EA: ;
    PUSH32(esp, 0x5BC9D0);
    ecx = edi;
    PUSH32(esp, 0x000FE0F6u); RECOMP_ABI_CALL(0x000760D0u, xml1_guest_entity_set_velocity); /* call 0x000760D0 */

loc_000FE0F6: ;
    PUSH32(esp, ebp);
    MEM8(esp + 0x50) = 0;
    PUSH32(esp, 0x000FE101u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000FE101: ;
    esp = esp + 4;
    ecx = esp + 0xC;
    MEM32(esp + 0x4C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000FE115u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000FE115: ;
    SET_LO8(eax, 1);
    ecx = MEM32(esp + 0x44);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x44;
    esp += 24; return; /* ret 20 */

loc_000FE12B: ;
    PUSH32(esp, ebp);
    MEM8(esp + 0x50) = 0;
    PUSH32(esp, 0x000FE136u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000FE136: ;
    esp = esp + 4;
    ecx = esp + 0xC;
    MEM32(esp + 0x4C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000FE14Au); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000FE14A: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebp);
    esp = esp + 0x44;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FE160
 * Original: 0x000FE160 - 0x000FE234 (212 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE160: ;
    eax = MEM32(ecx + 0xA0);
    PUSH32(esp, esi);
    esi = ecx + 0xA0;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE18E; /* jne: not equal / not zero */

loc_000FE173: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FE22C; /* jge: greater or equal (signed >=) */

loc_000FE182: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE173; /* je: equal / zero */

loc_000FE18E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE19B; /* jne: not equal / not zero */

loc_000FE195: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000FE19B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE1A5; /* jne: not equal / not zero */

loc_000FE19F: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000FE1A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE1AF; /* jne: not equal / not zero */

loc_000FE1A9: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000FE1AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE1BA; /* jne: not equal / not zero */

loc_000FE1B3: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE1B3; /* je: equal / zero */

loc_000FE1BA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FE22C; /* jge: greater or equal (signed >=) */

loc_000FE1BF: ;
    /* nop */

loc_000FE1C0: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FE22C; /* jge: greater or equal (signed >=) */

loc_000FE1C6: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE1F7; /* jne: not equal / not zero */

loc_000FE1D9: ;
    /* nop */

loc_000FE1E0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FE22C; /* jge: greater or equal (signed >=) */

loc_000FE1EB: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE1E0; /* je: equal / zero */

loc_000FE1F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE204; /* jne: not equal / not zero */

loc_000FE1FE: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000FE204: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE20E; /* jne: not equal / not zero */

loc_000FE208: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000FE20E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE218; /* jne: not equal / not zero */

loc_000FE212: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000FE218: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE227; /* jne: not equal / not zero */

loc_000FE21C: ;
    /* nop */

loc_000FE220: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE220; /* je: equal / zero */

loc_000FE227: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FE1C0; /* jl: less (signed <) */

loc_000FE22C: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FE240
 * Original: 0x000FE240 - 0x000FE27E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE240: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x000FE24Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FE24A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE27A; /* je: equal / zero */

loc_000FE250: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FE257u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE257: ;
    edx = MEM32(0x49ECE8);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000FE27A; /* je: equal / zero */

loc_000FE276: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000FE27A: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FE280
 * Original: 0x000FE280 - 0x000FE2B1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FE280(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000FE280: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] * fp_top(); fp_pop(); /* fmulp st(3) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] + fp_top(); fp_pop(); /* faddp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] + fp_top(); fp_pop(); /* faddp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FE2C0
 * Original: 0x000FE2C0 - 0x000FE2ED (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FE2C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000FE2C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] * fp_top(); fp_pop(); /* fmulp st(3) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] + fp_top(); fp_pop(); /* faddp st(3) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    g_fp_stack[(g_fp_top + 3) & 7] = g_fp_stack[(g_fp_top + 3) & 7] + fp_top(); fp_pop(); /* faddp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FE2F0
 * Original: 0x000FE2F0 - 0x000FE300 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE2F0(void)
{

loc_000FE2F0: ;
    PUSH32(esp, 0xFC6C0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000FE2FFu); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000FE2FF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FE300
 * Original: 0x000FE300 - 0x000FE31E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE300: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000FE308u); RECOMP_ABI_CALL(0x000FE320u, sub_000FE320); /* call 0x000FE320 */

loc_000FE308: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE318; /* je: equal / zero */

loc_000FE30F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FE315u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000FE315: ;
    esp = esp + 4;

loc_000FE318: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FE320
 * Original: 0x000FE320 - 0x000FE327 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE320(void)
{

loc_000FE320: ;
    MEM32(ecx) = 0x3D9C80;
    esp += 4; return; /* ret */

}

/**
 * sub_000FE330
 * Original: 0x000FE330 - 0x000FE4D9 (425 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE330(void)
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

loc_000FE330: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000FE342u); RECOMP_ABI_CALL(0x000FC7E0u, sub_000FC7E0); /* call 0x000FC7E0 */

loc_000FE342: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE34F; /* jne: not equal / not zero */

loc_000FE346: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_000FE34F: ;
    eax = MEM32(esi + 8);
    eax = eax + 0xFFFFFFFCu;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000FE3E5; /* ja: above (unsigned >) */

loc_000FE360: ;
    eax = ZX8(MEM8(eax + 0xFE4F0));
    { uint32_t _jt = MEM32(eax * 4 + 0xFE4DC); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000FE36Eu) goto loc_000FE36E;
    if (_jt == 0x000FE396u) goto loc_000FE396;
    if (_jt == 0x000FE3D5u) goto loc_000FE3D5;
    if (_jt == 0x000FE3DEu) goto loc_000FE3DE;
    if (_jt == 0x000FE3E5u) goto loc_000FE3E5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000FE36E: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM8(esi + 0x234) = LO8(ebx);
    MEM32(eax) = ebx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x000FE381u); RECOMP_ABI_CALL(0x0003B4F0u, sub_0003B4F0); /* call 0x0003B4F0 */

loc_000FE381: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    MEM32(esi + 0x244) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000FE394u); RECOMP_ABI_CALL(0x00033C60u, sub_00033C60); /* call 0x00033C60 */

loc_000FE394: ;
    goto loc_000FE3E5;

loc_000FE396: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE3B7; /* jne: not equal / not zero */

loc_000FE3A2: ;
    ecx = esi;
    PUSH32(esp, 0x000FE3A9u); RECOMP_ABI_CALL(0x000FC210u, sub_000FC210); /* call 0x000FC210 */

loc_000FE3A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE3B7; /* jne: not equal / not zero */

loc_000FE3AD: ;
    SET_LO8(eax, MEM8(esi + 0x28A));
    SET_LO8(eax, LO8(eax) | 0x10);
    goto loc_000FE3BF;

loc_000FE3B7: ;
    SET_LO8(eax, MEM8(esi + 0x28A));
    SET_LO8(eax, LO8(eax) & 0xEF);

loc_000FE3BF: ;
    MEM8(esi + 0x28A) = LO8(eax);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE3E5; /* jne: not equal / not zero */

loc_000FE3CB: ;
    edi = 0x10;
    goto loc_000FE4A6;

loc_000FE3D5: ;
    MEM8(esi + 0x24C) = MEM8(esi + 0x24C) | 1;
    goto loc_000FE3E5;

loc_000FE3DE: ;
    MEM8(esi + 0x28B) = MEM8(esi + 0x28B) & 0xDF;

loc_000FE3E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE417; /* je: equal / zero */

loc_000FE3EA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE403; /* je: equal / zero */

loc_000FE3EF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE4A6; /* jne: not equal / not zero */

loc_000FE3F8: ;
    MEM32(esi + 0x2F0) = ebx;
    goto loc_000FE4A6;

loc_000FE403: ;
    fp_push(MEMF(esi + 0x51C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000FE4A6;

loc_000FE417: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM8(esi + 0x234) = LO8(ebx);
    MEM32(eax) = ebx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x000FE42Au); RECOMP_ABI_CALL(0x0003B4F0u, sub_0003B4F0); /* call 0x0003B4F0 */

loc_000FE42A: ;
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x248) = ebx;
    MEM32(eax + 0x344) = ebx;
    ecx = 0x800000;
    MEM32(eax + 0x1B4) = ecx;
    MEM32(eax + 0x1B8) = ecx;
    MEM32(eax + 0x1BC) = ecx;
    MEM32(eax + 0x1C0) = ecx;
    MEM32(eax + 0x1C4) = ecx;
    MEM32(eax + 0x1C8) = ecx;
    MEM32(eax + 0x160) = ebx;
    MEM32(eax + 0x164) = ebx;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000FE47Bu); RECOMP_ABI_CALL(0x00029470u, sub_00029470); /* call 0x00029470 */

loc_000FE47B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE4A6; /* je: equal / zero */

loc_000FE482: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE4A6; /* je: equal / zero */

loc_000FE488: ;
    ecx = MEM32(esi + 0x494);
    ebx = MEM32(ecx);
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000FE49Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE49C: ;
    ecx = MEM32(esi + 0x494);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x54); PUSH32(esp, 0x000FE4A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE4A6: ;
    fp_push(MEMF(esi + 0x1B0)); /* fld float */
    edx = MEM32(esi + 8);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x274)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x274] */
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 8) = edi;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE4CE; /* jne: not equal / not zero */

loc_000FE4C2: ;
    eax = MEM32(esi + 0x274);
    MEM32(esi + 0x1B0) = eax;

loc_000FE4CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FE500
 * Original: 0x000FE500 - 0x000FE545 (69 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE500(void)
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

loc_000FE500: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esi = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE531; /* jne: not equal / not zero */

loc_000FE514: ;
    MEM8(esi + 0x289) = MEM8(esi + 0x289) | 1;
    PUSH32(esp, 0x000FE520u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FE520: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FE52Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE52A: ;
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FE531: ;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x18) = 0;
    PUSH32(esp, 0x000FE541u); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000FE541: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FE550
 * Original: 0x000FE550 - 0x000FE6CD (381 bytes, 124 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE550(void)
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

loc_000FE550: ;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000FE567u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FE567: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE593; /* je: equal / zero */

loc_000FE56D: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FE574u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE574: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000FE595; /* jne: not equal / not zero */

loc_000FE593: ;
    esi = 0; /* xor self */

loc_000FE595: ;
    eax = MEM32(edi + 0x18);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x000FE5A5u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FE5A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE5AF; /* je: equal / zero */

loc_000FE5A9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FE5AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE5AF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE693; /* je: equal / zero */

loc_000FE5B7: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esi + 0x20);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(esp + 0x24) = edx;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3CAA50); /* fadd dword ptr [0x3caa50] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(0x3CAA50); /* fadd dword ptr [0x3caa50] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB468)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb468] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FE6C3; /* jp: parity */

loc_000FE63C: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000FE647u); RECOMP_ABI_CALL(0x000A0770u, sub_000A0770); /* call 0x000A0770 */

loc_000FE647: ;
    PUSH32(esp, 0);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x48) = 0x3F800000;
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM8(esp + 0x27) = 1;
    PUSH32(esp, 0x000FE688u); RECOMP_ABI_CALL(0x000FC990u, sub_000FC990); /* call 0x000FC990 */

loc_000FE688: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE69D; /* jne: not equal / not zero */

loc_000FE68C: ;
    edx = MEM32(esp + 0x3C);
    MEM8(edx) = 1;

loc_000FE693: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

loc_000FE69D: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE6C3; /* je: equal / zero */

loc_000FE6A5: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x000FE6AEu); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_000FE6AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE6C3; /* je: equal / zero */

loc_000FE6B2: ;
    esi = MEM32(esi + 0x1C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000FE6BEu); RECOMP_ABI_CALL(0x000A0780u, sub_000A0780); /* call 0x000A0780 */

loc_000FE6BE: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE693; /* jne: not equal / not zero */

loc_000FE6C3: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FE6D0
 * Original: 0x000FE6D0 - 0x000FE9B3 (739 bytes, 242 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE6D0(void)
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

loc_000FE6D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3513B0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C0A5C);
    ecx = esp + 0x18;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000FE70Bu); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000FE70B: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    PUSH32(esp, 1);
    MEM32(esp + 0x54) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FE71Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE71E: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000FE72Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE72B: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FE738u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE738: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000FE745u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE745: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FE752u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE752: ;
    PUSH32(esp, 0x000FE757u); RECOMP_ABI_CALL(0x000BEF20u, sub_000BEF20); /* call 0x000BEF20 */

loc_000FE757: ;
    esi = MEM32(ebp + 0x490);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000FE76A; /* jne: not equal / not zero */

loc_000FE763: ;
    eax = 0x3C806C;
    goto loc_000FE780;

loc_000FE76A: ;
    PUSH32(esp, 0x000FE76Fu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000FE76F: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000FE780: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000FE788u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE788: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE7D5; /* je: equal / zero */

loc_000FE78C: ;
    eax = MEM32(eax + 0x1C);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000FE79Cu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FE79C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE7D5; /* je: equal / zero */

loc_000FE7A2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FE7A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE7A8: ;
    edx = MEM32(0x4D815C);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE7D5; /* je: equal / zero */

loc_000FE7C6: ;
    edx = MEM32(ebp + 0x454);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    esi = esi + 0x20;
    PUSH32(esp, esi);
    goto loc_000FE7E3;

loc_000FE7D5: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43480000);
    edx = edx + 0x20;
    PUSH32(esp, edx);

loc_000FE7E3: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x000FE7ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE7EC: ;
    eax = MEM32(ebp + 0x10);
    eax = eax + 0x20;
    MEM32(esp + 0x30) = 0x3CA964;
    ecx = MEM32(eax);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x10);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x48) = 3;
    MEM32(esp + 0x44) = 0;
    PUSH32(esp, 0x000FE826u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000FE826: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x2C) = esi;
    PUSH32(esp, ebx);
    ecx = esp + 0x2C;
    MEM8(esp + 0x50) = 1;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x000FE842u); RECOMP_ABI_CALL(0x000A0770u, sub_000A0770); /* call 0x000A0770 */

loc_000FE842: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FE848u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE848: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE97D; /* je: equal / zero */

loc_000FE850: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x18) = 0x3DCCCCCD;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FE85Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE85E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FE97D; /* jle: less or equal (signed <=) */

loc_000FE866: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000FE86Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE86E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000FE87Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE87D: ;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x28) = edx;
    eax = MEM32(edi + 4);
    eax = eax >> 0x11;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FE927; /* jne: not equal / not zero */

loc_000FE893: ;
    ecx = MEM32(ebp + 0x10);
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9D98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d9d98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE927; /* je: equal / zero */

loc_000FE8B1: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x28); /* fsub dword ptr [edi + 0x28] */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x24); /* fsub dword ptr [edi + 0x24] */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    ecx = ZX8(MEM8(edi + 0x2C3));
    fp_top() = fp_top() - MEMF(edi + 0x20); /* fsub dword ptr [edi + 0x20] */
    MEM32(esp + 0x14) = ecx;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = fp_top() * MEMF(0x3D9D94); /* fmul dword ptr [0x3d9d94] */
    fp_top() = MEMF(0x3C6E40) - fp_top(); /* fsubr dword ptr [0x3c6e40] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FE927; /* jp: parity */

loc_000FE90D: ;
    SET_LO8(eax, MEM8(edi + 0x2C2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000FE927; /* jae: above or equal (unsigned >=) */

loc_000FE917: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000FE927; /* jae: above or equal (unsigned >=) */

loc_000FE91B: ;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = edx;

loc_000FE927: ;
    eax = MEM32(esi);
    ecx = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FE92Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FE92E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FE866; /* jl: less (signed <) */

loc_000FE936: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FE97D; /* je: equal / zero */

loc_000FE93E: ;
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    MEM32(edx) = ecx;
    MEM8(esp + 0x50) = 0;
    PUSH32(esp, 0x000FE952u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000FE952: ;
    esp = esp + 4;
    ecx = esp + 0x10;
    MEM32(esp + 0x4C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000FE966u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000FE966: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x34);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000FE97D: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x50) = 0;
    PUSH32(esp, 0x000FE988u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000FE988: ;
    ecx = esp + 0x14;
    esp = esp + 4;
    MEM32(esp + 0x4C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000FE99Cu); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000FE99C: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FE9C0
 * Original: 0x000FE9C0 - 0x000FECA8 (744 bytes, 223 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE9C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE9C0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3513D0);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x330);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE9FD; /* jne: not equal / not zero */

loc_000FE9E9: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

loc_000FE9FD: ;
    eax = MEM32(eax + 0x2D8);
    edx = MEM32(ebx + 0x518);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x31));
    PUSH32(esp, esi);
    ecx = ecx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEA2E; /* je: equal / zero */

loc_000FEA16: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax + 0x31));
    edx = edx & 0xF;
    esi = 0; /* xor self */
    MEM32(ebx + 0x518) = edx;
    MEM32(0x4FF9F4) = esi;
    goto loc_000FEA30;

loc_000FEA2E: ;
    esi = 0; /* xor self */

loc_000FEA30: ;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(MEM32(0x4FF9F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4FF9F4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEA53; /* je: equal / zero */

loc_000FEA3C: ;
    MEM32(0x4FF9F8) = esi;
    MEM32(0x4FF9FC) = esi;
    MEM32(0x4FFA00) = esi;
    MEM32(0x4FF9F4) = eax;

loc_000FEA53: ;
    eax = 0; /* xor self */

loc_000FEA55: ;
    ecx = MEM32(esp + 0x5C);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x4FF9F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x4FF9F4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEC54; /* je: equal / zero */

loc_000FEA66: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FEA55; /* jl: less (signed <) */

loc_000FEA6C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x485874);
    ecx = esp + 0x68;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x000FEA85u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000FEA85: ;
    ecx = MEM32(esp + 0x60);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    MEM32(esp + 0x60) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000FEA96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FEA96: ;
    ecx = MEM32(esp + 0x60);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FEAA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FEAA3: ;
    ecx = MEM32(esp + 0x60);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000FEAB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FEAB0: ;
    ecx = MEM32(esp + 0x60);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1A);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FEABDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FEABD: ;
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(esp + 0x60);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x43B40000);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x000FEAD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FEAD4: ;
    eax = MEM32(ebx + 0x10);
    eax = eax + 0x20;
    MEM32(esp + 0x3C) = 0x3CA964;
    ecx = MEM32(eax);
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(eax + 4);
    ecx = MEM32(esp + 0x60);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x54) = 3;
    MEM32(esp + 0x50) = 0;
    PUSH32(esp, 0x000FEB0Eu); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000FEB0E: ;
    edi = eax;
    esp = esp + 8;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    MEM8(esp + 0x5C) = 1;
    PUSH32(esp, 0x000FEB26u); RECOMP_ABI_CALL(0x000A0770u, sub_000A0770); /* call 0x000A0770 */

loc_000FEB26: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x10) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FEB3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FEB3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FEBEE; /* jle: less or equal (signed <=) */

loc_000FEB44: ;
    ebp = esp + 0x2C;

loc_000FEB48: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000FEB54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FEB54: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FEBD5; /* je: equal / zero */

loc_000FEB5E: ;
    _fa = (uint32_t)(MEM8(esi + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x334), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FEB7C; /* jne: not equal / not zero */

loc_000FEB67: ;
    eax = MEM32(esp + 0x20);
    MEM32(ebp) = 0;
    ebp = ebp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    goto loc_000FEBD5;

loc_000FEB7C: ;
    _fa = (uint32_t)(MEM32(esi + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FEBD5; /* je: equal / zero */

loc_000FEB85: ;
    PUSH32(esp, 0x000FEB8Au); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FEB8A: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FEB9Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FEB9B: ;
    ecx = MEM32(eax + 0x518);
    edx = 2;
    edx = edx - ecx;
    MEM32(ebp) = edx;
    ebp = ebp + 4;
    PUSH32(esp, 0x000FEBB3u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FEBB3: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FEBC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FEBC4: ;
    edx = MEM32(eax + 0x518);
    edx = edx << 2;
    eax = esp + 0x28;
    eax = eax - edx;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FEBD5: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    MEM32(esp + 0x10) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FEBE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FEBE4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FEB48; /* jl: less (signed <) */

loc_000FEBEC: ;
    esi = 0; /* xor self */

loc_000FEBEE: ;
    ebp = MEM32(ebx + 0x518);
    ecx = 2;
    ecx = ecx - ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000FEC19; /* jle: less or equal (signed <=) */

loc_000FEC01: ;
    ecx = 2;
    edx = ebp;
    ecx = ecx - edx;
    /* nop */

loc_000FEC10: ;
    eax = eax + MEM32(esp + esi * 4 + 0x20);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FEC10; /* jl: less (signed <) */

loc_000FEC19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    esi = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_000FEC31; /* jge: greater or equal (signed >=) */

loc_000FEC20: ;
    eax = MEM32(esi * 4 + 0x4FF9F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FEC67; /* je: equal / zero */

loc_000FEC2B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FEC20; /* jl: less (signed <) */

loc_000FEC31: ;
    PUSH32(esp, edi);
    MEM8(esp + 0x5C) = 0;
    PUSH32(esp, 0x000FEC3Cu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000FEC3C: ;
    esp = esp + 4;
    ecx = esp + 0x60;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000FEC50u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000FEC50: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);

loc_000FEC54: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x40);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

loc_000FEC67: ;
    edx = MEM32(esp + 0x64);
    PUSH32(esp, edi);
    MEM32(esi * 4 + 0x4FF9F4) = edx;
    MEM8(esp + 0x5C) = 0;
    PUSH32(esp, 0x000FEC7Du); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000FEC7D: ;
    esp = esp + 4;
    ecx = esp + 0x60;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000FEC91u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000FEC91: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000FECB0
 * Original: 0x000FECB0 - 0x000FF1C9 (1305 bytes, 341 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FECB0(void)
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

loc_000FECB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x144;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FECD3u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FECD3: ;
    esi = eax;
    edi = edi | 0xFFFFFFFFu;
    ebx = 0; /* xor self */
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x14) = edi;
    eax = 0; /* xor self */

loc_000FECE4: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x4FF9F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x4FF9F4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FECF8; /* je: equal / zero */

loc_000FECF0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FECE4; /* jl: less (signed <) */

loc_000FECF6: ;
    goto loc_000FED03;

loc_000FECF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = eax;
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000FED1F; /* jne: not equal / not zero */

loc_000FED03: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FED1F; /* jne: not equal / not zero */

loc_000FED13: ;
    MEM32(esp + 0x14) = 3;
    edi = MEM32(esp + 0x14);

loc_000FED1F: ;
    ecx = MEM32(esi + 0x20);
    MEM32(esp + 0x44) = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(esp + 0x48) = edx;
    eax = MEM32(esi + 0x28);
    MEM32(esp + 0x4C) = eax;
    ecx = MEM32(esi + 0x34);
    MEM32(esp + 0x40) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FED40u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FED40: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000FED47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FED47: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = eax | 0xFFFFFFFFu;
    ecx = 1;
    edx = 0xFFFFFFFEu;
    MEM32(esp + 0xB0) = edx;
    MEM32(esp + 0xBC) = edx;
    edx = 2;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = ebx;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x88) = ecx;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xA4) = ecx;
    MEM32(esp + 0xA8) = ecx;
    MEM32(esp + 0xAC) = ecx;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = edx;
    MEM32(esp + 0xC8) = edx;
    MEM32(esp + 0xCC) = ebx;
    MEM32(esp + 0xD0) = ebx;
    MEM32(esp + 0xD4) = ebx;
    MEM32(esp + 0xD8) = ebx;
    MEM32(esp + 0xDC) = ebx;
    MEM32(esp + 0xE0) = ebx;
    MEM32(esp + 0xE4) = ebx;
    MEM32(esp + 0xE8) = ebx;
    MEM32(esp + 0xEC) = ebx;
    MEM32(esp + 0xF0) = ebx;
    MEM32(esp + 0xF4) = ebx;
    MEM32(esp + 0xF8) = ebx;
    MEM32(esp + 0xFC) = ebx;
    MEM32(esp + 0x100) = ebx;
    MEM32(esp + 0x104) = ebx;
    MEM32(esp + 0x108) = ebx;
    MEM32(esp + 0x10C) = ebx;
    MEM32(esp + 0x110) = ebx;
    MEM32(esp + 0x114) = eax;
    MEM32(esp + 0x118) = eax;
    MEM32(esp + 0x11C) = ebx;
    MEM32(esp + 0x120) = ecx;
    MEM32(esp + 0x124) = ebx;
    MEM32(esp + 0x128) = ebx;
    MEM32(esp + 0x12C) = ecx;
    MEM32(esp + 0x130) = eax;
    MEM32(esp + 0x134) = ebx;
    MEM32(esp + 0x138) = ebx;
    MEM32(esp + 0x13C) = eax;
    MEM32(esp + 0x140) = ebx;
    MEM32(esp + 0x144) = ecx;
    MEM32(esp + 0x148) = ecx;
    MEM32(esp + 0x14C) = ebx;
    fp_push(MEMF(esi + 0x108)); /* fld float */
    fp_push(MEMF(esi + 0x104)); /* fld float */
    fp_push(MEMF(esi + 0x100)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CD304)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cd304] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FEF48; /* jne: not equal / not zero */

loc_000FEF2E: ;
    ecx = 0x20;
    esi = esp + 0xD0;
    edi = esp + 0x50;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x2C);

loc_000FEF48: ;
    eax = MEM32(esi + 0x330);
    eax = MEM32(eax * 4 + 0x4858BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000FEF66; /* je: equal / zero */

loc_000FEF5D: ;
    ecx = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FEF66u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FEF66: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA91C); /* fmul dword ptr [0x3ca91c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C97B8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c97b8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FEF93; /* jne: not equal / not zero */

loc_000FEF7D: ;
    /* nop */

loc_000FEF80: ;
    fp_top() = fp_top() - MEMF(0x3C97B8); /* fsub dword ptr [0x3c97b8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C97B8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c97b8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FEF80; /* je: equal / zero */

loc_000FEF93: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FEFB3; /* jp: parity */

loc_000FEFA0: ;
    fp_top() = fp_top() + MEMF(0x3C97B8); /* fadd dword ptr [0x3c97b8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FEFA0; /* jnp: not parity */

loc_000FEFB3: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C94A8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c94a8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FF068; /* jnp: not parity */

loc_000FEFC4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9DA0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3d9da0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF068; /* je: equal / zero */

loc_000FEFD5: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C94A8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c94a8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF00E; /* jne: not equal / not zero */

loc_000FEFE2: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9D9C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3d9d9c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FF00E; /* jp: parity */

loc_000FEFEF: ;
    esi = MEM32(ebp + 0x10);
    edi = edi << 5;
    edx = MEM32(esp + edi + 0x58);
    eax = esi;
    eax = eax << 5;
    ecx = MEM32(esp + eax + 0x58);
    ecx = ecx - edx;
    edx = MEM32(esp + eax + 0x5C);
    eax = MEM32(esp + edi + 0x5C);
    goto loc_000FF085;

loc_000FF00E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CA9AC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3ca9ac] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF047; /* jne: not equal / not zero */

loc_000FF01B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D9DA0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d9da0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FF049; /* jp: parity */

loc_000FF028: ;
    esi = MEM32(ebp + 0x10);
    edi = edi << 5;
    edx = MEM32(esp + edi + 0x60);
    eax = esi;
    eax = eax << 5;
    ecx = MEM32(esp + eax + 0x60);
    ecx = ecx - edx;
    edx = MEM32(esp + eax + 0x64);
    eax = MEM32(esp + edi + 0x64);
    goto loc_000FF087;

loc_000FF047: ;
    fp_pop(); /* fstp st(0) */

loc_000FF049: ;
    esi = MEM32(ebp + 0x10);
    edi = edi << 5;
    edx = MEM32(esp + edi + 0x68);
    eax = esi;
    eax = eax << 5;
    ecx = MEM32(esp + eax + 0x68);
    ecx = ecx - edx;
    edx = MEM32(esp + eax + 0x6C);
    eax = MEM32(esp + edi + 0x6C);
    goto loc_000FF087;

loc_000FF068: ;
    esi = MEM32(ebp + 0x10);
    edi = edi << 5;
    edx = MEM32(esp + edi + 0x50);
    eax = esi;
    eax = eax << 5;
    ecx = MEM32(esp + eax + 0x50);
    ecx = ecx - edx;
    edx = MEM32(esp + eax + 0x54);
    eax = MEM32(esp + edi + 0x54);

loc_000FF085: ;
    fp_pop(); /* fstp st(0) */

loc_000FF087: ;
    edx = edx - eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF096u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FF096: ;
    edx = MEM32(eax);
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000FF0A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF0A7: ;
    fp_push(MEMF(eax)); /* fld float */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000FF0D6; /* jne: not equal / not zero */

loc_000FF0C0: ;
    ecx = MEM32(esp + 0x48);
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esp + 0x4C);
    fp_push(MEMF(esp + 0x44)); /* fld float */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;

loc_000FF0D6: ;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM8(esp + 0x13) = LO8(ebx);
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF0FFu); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FF0FF: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000FF10Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF10B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF143; /* je: equal / zero */

loc_000FF10F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF114u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FF114: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000FF125u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF125: ;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x28) = edx;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CB260)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cb260] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF148; /* jne: not equal / not zero */

loc_000FF143: ;
    MEM8(esp + 0x13) = 1;

loc_000FF148: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF14Du); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FF14D: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000FF159u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF159: ;
    MEM8(esp + 0x1B) = LO8(eax);
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x13), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF17E; /* jne: not equal / not zero */

loc_000FF163: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF168u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FF168: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000FF174u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF174: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF17E; /* je: equal / zero */

loc_000FF178: ;
    _fa = (uint32_t)(MEM8(esp + 0x1B)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1B), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000FF1A7; /* jbe: below or equal (unsigned <=) */

loc_000FF17E: ;
    ecx = MEM32(esp + 0x30);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, ebx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FF195u); RECOMP_ABI_CALL(0x000345B0u, sub_000345B0); /* call 0x000345B0 */

loc_000FF195: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF1A7; /* je: equal / zero */

loc_000FF199: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    edx = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    goto loc_000FF1B3;

loc_000FF1A7: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);

loc_000FF1B3: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF1D0
 * Original: 0x000FF1D0 - 0x000FF259 (137 bytes, 44 insns)
 * CC: cdecl, 13 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF1D0(void)
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

loc_000FF1D0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = 0; /* xor self */
    edx = ebx + 0x80;
    goto loc_000FF1E0;

    /* nop */

loc_000FF1E0: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FF1FA; /* jnp: not parity */

loc_000FF1EF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FF1E0; /* jl: less (signed <) */

loc_000FF1F8: ;
    if (CMP_EQ(_fa, _fb)) goto loc_000FF255; /* je: equal / zero */

loc_000FF1FA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF255; /* je: equal / zero */

loc_000FF1FF: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = ecx + ebx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + 0x60;
    edi = edx;
    ecx = 7;
    esi = esp + 0x1C;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x38);
    MEM32(edx + 0x1C) = ecx;
    edx = MEM32(esp + 0x18);
    fp_top() = fp_top() + MEMF(ebx + 0x51C); /* fadd dword ptr [ebx + 0x51c] */
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x5C) = edx;
    SET_LO8(edx, MEM8(esp + 0x3C));
    MEM32(eax + 0x8C) = ecx;
    MEMF(eax + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x40);
    POP32(esp, edi);
    MEM8(eax + 0x84) = LO8(edx);
    MEM32(eax + 0x88) = ecx;
    POP32(esp, esi);

loc_000FF255: ;
    POP32(esp, ebx);
    esp += 56; return; /* ret 52 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF260
 * Original: 0x000FF260 - 0x000FF41C (444 bytes, 141 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF260: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FF26Eu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FF26E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF415; /* je: equal / zero */

loc_000FF277: ;
    PUSH32(esp, 0x000FF27Cu); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FF27C: ;
    ecx = MEM32(esi + 0x504);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x000FF28Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF28D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF2B1; /* je: equal / zero */

loc_000FF293: ;
    ecx = edi;
    PUSH32(esp, 0x000FF29Au); RECOMP_ABI_CALL(0x000F9B00u, sub_000F9B00); /* call 0x000F9B00 */

loc_000FF29A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF415; /* jne: not equal / not zero */

loc_000FF2A2: ;
    ecx = edi;
    PUSH32(esp, 0x000FF2A9u); RECOMP_ABI_CALL(0x000F9B30u, sub_000F9B30); /* call 0x000F9B30 */

loc_000FF2A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF415; /* jne: not equal / not zero */

loc_000FF2B1: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x000FF2BFu); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000FF2BF: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF2D7; /* je: equal / zero */

loc_000FF2C8: ;
    ecx = edi;
    PUSH32(esp, 0x000FF2CFu); RECOMP_ABI_CALL(0x0003ACF0u, sub_0003ACF0); /* call 0x0003ACF0 */

loc_000FF2CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF415; /* jne: not equal / not zero */

loc_000FF2D7: ;
    SET_LO8(eax, MEM8(0x48584A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF311; /* je: equal / zero */

loc_000FF2E0: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x000FF2E8u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FF2E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF311; /* jne: not equal / not zero */

loc_000FF2ED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF311; /* je: equal / zero */

loc_000FF2F1: ;
    ecx = edi;
    PUSH32(esp, 0x000FF2F8u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FF2F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF415; /* je: equal / zero */

loc_000FF301: ;
    ecx = edi;
    PUSH32(esp, 0x000FF308u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FF308: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF415; /* je: equal / zero */

loc_000FF311: ;
    SET_LO8(eax, MEM8(0x48584B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF349; /* je: equal / zero */

loc_000FF31A: ;
    ebp = MEM32(esi + 0x10);
    ecx = ebp;
    PUSH32(esp, 0x000FF324u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FF324: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF335; /* je: equal / zero */

loc_000FF329: ;
    ecx = ebp;
    PUSH32(esp, 0x000FF330u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FF330: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF349; /* jne: not equal / not zero */

loc_000FF335: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF349; /* je: equal / zero */

loc_000FF339: ;
    ecx = edi;
    PUSH32(esp, 0x000FF340u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FF340: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF415; /* je: equal / zero */

loc_000FF349: ;
    eax = MEM32(esi + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF366; /* je: equal / zero */

loc_000FF352: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF366; /* je: equal / zero */

loc_000FF357: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF366; /* je: equal / zero */

loc_000FF35C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF366; /* je: equal / zero */

loc_000FF361: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF3BE; /* jne: not equal / not zero */

loc_000FF366: ;
    _fa = (uint32_t)(MEM8(esi + 0x24C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF3BE; /* je: equal / zero */

loc_000FF36F: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x000FF379u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000FF379: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF415; /* je: equal / zero */

loc_000FF386: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x000FF38Eu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FF38E: ;
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000FF399u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FF399: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF415; /* je: equal / zero */

loc_000FF3A1: ;
    MEM8(esi + 0x288) = MEM8(esi + 0x288) & 0xFE;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x000FF3B1u); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000FF3B1: ;
    ecx = MEM32(esi + 0x494);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000FF3BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF3BC: ;
    goto loc_000FF402;

loc_000FF3BE: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(eax + 0x330);
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF415; /* jne: not equal / not zero */

loc_000FF3CE: ;
    _fa = (uint32_t)(MEM32(eax + 0x3E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3E0), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF415; /* je: equal / zero */

loc_000FF3D6: ;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x000FF3E0u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000FF3E0: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF415; /* je: equal / zero */

loc_000FF3E7: ;
    MEM8(esi + 0x288) = MEM8(esi + 0x288) & 0xFE;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x000FF3F7u); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000FF3F7: ;
    ecx = MEM32(esi + 0x494);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000FF402u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF402: ;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x168) = 0xBF800000u;
    MEM32(esi + 0x144) = ebp;

loc_000FF415: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FF420
 * Original: 0x000FF420 - 0x000FF4CE (174 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF420(void)
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

loc_000FF420: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x40);
    ecx = MEM32(esp + 8);
    eax = ecx + 0x14;
    MEM32(eax) = edx;
    edx = MEM32(esi + 0x44);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 0x48);
    MEM32(eax + 8) = edx;
    MEM32(ecx + 0x1C) = 0;
    edx = MEM32(esi + 0x1B0);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000FF453u); RECOMP_ABI_CALL(0x000FCE20u, sub_000FCE20); /* call 0x000FCE20 */

loc_000FF453: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x51C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x51c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FF4CA; /* jp: parity */

loc_000FF463: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000FF46Cu); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000FF46C: ;
    SET_LO8(eax, MEM8(esi + 0x44C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF4A9; /* je: equal / zero */

loc_000FF476: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF48D; /* je: equal / zero */

loc_000FF482: ;
    ecx = MEM32(esi + 0x51C);
    MEM32(esi + 0x1C) = ecx;
    goto loc_000FF4B2;

loc_000FF48D: ;
    PUSH32(esp, 0x000FF492u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000FF492: ;
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(0x3C8828); /* fmul dword ptr [0x3c8828] */
    fp_top() = fp_top() + MEMF(esi + 0x51C); /* fadd dword ptr [esi + 0x51c] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000FF4B2;

loc_000FF4A9: ;
    edx = MEM32(esi + 0x51C);
    MEM32(esi + 0x1C) = edx;

loc_000FF4B2: ;
    SET_LO8(eax, MEM8(esi + 0x288));
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM32(esi + 0x1AC) = 0;
    MEM8(esi + 0x288) = LO8(eax);

loc_000FF4CA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF4D0
 * Original: 0x000FF4D0 - 0x000FF5D2 (258 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF4D0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000FF55E; /* je: equal / zero */

loc_000FF4E0: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000FF4E9u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FF4E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF55E; /* je: equal / zero */

loc_000FF4ED: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000FF4F6u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FF4F6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF55E; /* je: equal / zero */

loc_000FF4FC: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FF502u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF502: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF55E; /* je: equal / zero */

loc_000FF520: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF55E; /* je: equal / zero */

loc_000FF52C: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esi;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000FF544u); RECOMP_ABI_CALL(0x000FE9C0u, sub_000FE9C0); /* call 0x000FE9C0 */

loc_000FF544: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000FF55Au); RECOMP_ABI_CALL(0x000FECB0u, sub_000FECB0); /* call 0x000FECB0 */

loc_000FF55A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF569; /* jne: not equal / not zero */

loc_000FF55E: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_000FF569: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 5);
    ecx = esi;
    MEM32(esi + 0x18) = edx;
    PUSH32(esp, 0x000FF579u); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000FF579: ;
    SET_LO8(ebx, MEM8(esi + 0x288));
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    SET_LO8(ebx, LO8(ebx) | 1);
    MEM8(esi + 0x288) = LO8(ebx);
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x3C) = edx;
    eax = MEM32(edi + 0x34);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x4C) = ecx;
    edx = MEM32(edi + 0x24);
    MEM32(esi + 0x50) = edx;
    eax = MEM32(edi + 0x28);
    MEM32(esi + 0x54) = eax;
    SET_LO8(ecx, MEM8(esi + 0x288));
    SET_LO8(ecx, LO8(ecx) & 0xEF);
    SET_LO8(ecx, LO8(ecx) | 0x40);
    POP32(esp, edi);
    MEM8(esi + 0x288) = LO8(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000FF5E0
 * Original: 0x000FF5E0 - 0x000FF692 (178 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF5E0(void)
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

loc_000FF5E0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x51C)); /* fld float */
    SET_LO8(ecx, MEM8(esi + 0x288));
    fp_top() = fp_top() + MEMF(0x3C8368); /* fadd dword ptr [0x3c8368] */
    SET_LO8(ecx, LO8(ecx) & 0xBF);
    PUSH32(esp, edi);
    edi = esi + 0x18;
    MEMF(esi + 0x46C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esi + 0x288) = LO8(ecx);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF655; /* je: equal / zero */

loc_000FF612: ;
    ecx = edi;
    PUSH32(esp, 0x000FF619u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FF619: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF655; /* je: equal / zero */

loc_000FF61D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF655; /* jne: not equal / not zero */

loc_000FF621: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF64D; /* jne: not equal / not zero */

loc_000FF629: ;
    MEM8(esi + 0x288) = MEM8(esi + 0x288) & 0xFE;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x168) = 0xBF800000u;
    MEM32(esi + 0x144) = 0;
    PUSH32(esp, 0x000FF64Du); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000FF64D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000FF655: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF64D; /* jne: not equal / not zero */

loc_000FF65A: ;
    MEM8(esi + 0x288) = MEM8(esi + 0x288) & 0xFE;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x168) = 0xBF800000u;
    MEM32(esi + 0x144) = 0;
    PUSH32(esp, 0x000FF67Eu); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000FF67E: ;
    eax = MEM32(esp + 0x10);
    MEM32(edi) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x1C0) = eax;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF6A0
 * Original: 0x000FF6A0 - 0x000FF83C (412 bytes, 126 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF6A0(void)
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

loc_000FF6A0: ;
    esp = esp - 0x4C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x51C)); /* fld float */
    SET_LO8(edx, MEM8(esi + 0x288));
    fp_top() = fp_top() + MEMF(0x3C8368); /* fadd dword ptr [0x3c8368] */
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esi + 0x10);
    SET_LO8(edx, LO8(edx) & 0xBF);
    MEMF(esi + 0x46C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esi + 0x288) = LO8(edx);
    eax = MEM32(eax + 0x330);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000FF6EF; /* jne: not equal / not zero */

loc_000FF6E1: ;
    PUSH32(esp, 0x000FF6E6u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000FF6E6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FF6EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF6EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000FF6F5; /* jge: greater or equal (signed >=) */

loc_000FF6F3: ;
    eax = 0; /* xor self */

loc_000FF6F5: ;
    eax = MEM32(eax * 4 + 0x48585C);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000FF709u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FF709: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF733; /* je: equal / zero */

loc_000FF70F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FF715u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF715: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF735; /* jne: not equal / not zero */

loc_000FF733: ;
    edi = 0; /* xor self */

loc_000FF735: ;
    eax = MEM32(esp + 0x60);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000FF746u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FF746: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF771; /* je: equal / zero */

loc_000FF74C: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FF753u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF753: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF773; /* jne: not equal / not zero */

loc_000FF771: ;
    ebp = 0; /* xor self */

loc_000FF773: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF7C4; /* je: equal / zero */

loc_000FF777: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF7C4; /* je: equal / zero */

loc_000FF77B: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ebx, MEM8(esp + 0x64));
    edi = esi + 0x18;
    if (TEST_Z(_fa, _fb)) goto loc_000FF7D9; /* je: equal / zero */

loc_000FF789: ;
    ecx = edi;
    PUSH32(esp, 0x000FF790u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FF790: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF7D9; /* je: equal / zero */

loc_000FF794: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF7D9; /* jne: not equal / not zero */

loc_000FF798: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF7C4; /* jne: not equal / not zero */

loc_000FF7A0: ;
    MEM8(esi + 0x288) = MEM8(esi + 0x288) & 0xFE;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x168) = 0xBF800000u;
    MEM32(esi + 0x144) = 0;
    PUSH32(esp, 0x000FF7C4u); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000FF7C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x000FF7D3u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000FF7D3: ;
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

loc_000FF7D9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF7C4; /* jne: not equal / not zero */

loc_000FF7DE: ;
    MEM8(esi + 0x288) = MEM8(esi + 0x288) & 0xFE;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x168) = 0xBF800000u;
    MEM32(esi + 0x144) = 0;
    PUSH32(esp, 0x000FF802u); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000FF802: ;
    ebx = MEM32(esp + 0x60);
    PUSH32(esp, 0x40);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ecx);
    MEM32(edi) = ebx;
    MEM8(esp + 0x24) = 0;
    PUSH32(esp, 0x000FF81Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000FF81E: ;
    ecx = MEM32(esp + 0x64);
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM32(esi + 0x1C0) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    PUSH32(esp, 0x000FF836u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000FF836: ;
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FF840
 * Original: 0x000FF840 - 0x000FFA56 (534 bytes, 183 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF840(void)
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

loc_000FF840: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x000FF857u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FF857: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF8C2; /* je: equal / zero */

loc_000FF85D: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FF863u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF863: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF8C2; /* je: equal / zero */

loc_000FF881: ;
    PUSH32(esp, 0x000FF886u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FF886: ;
    ecx = MEM32(edi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x000FF897u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF897: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF8C2; /* je: equal / zero */

loc_000FF89B: ;
    eax = MEM32(eax + 0x494);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000FF8A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF8A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF8C2; /* jne: not equal / not zero */

loc_000FF8AD: ;
    ecx = edi;
    PUSH32(esp, 0x000FF8B4u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000FF8B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF8C2; /* jne: not equal / not zero */

loc_000FF8B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000FF8C2: ;
    PUSH32(esp, ebp);
    ebp = ebp | 0xFFFFFFFFu;
    edi = 4;
    ebx = esi + 0x198;

loc_000FF8D1: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF901; /* je: equal / zero */

loc_000FF8D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF8E8; /* je: equal / zero */

loc_000FF8DD: ;
    ecx = ebx;
    PUSH32(esp, 0x000FF8E4u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000FF8E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF8EA; /* jne: not equal / not zero */

loc_000FF8E8: ;
    ebp = edi;

loc_000FF8EA: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx - 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000FF8D1; /* jge: greater or equal (signed >=) */

loc_000FF8F2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF91E; /* jne: not equal / not zero */

loc_000FF8F7: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000FF901: ;
    fp_push(MEMF(esi + 0x51C)); /* fld float */
    POP32(esp, ebp);
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    SET_LO8(eax, 1);
    MEMF(esi + edi * 8 + 0x17C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000FF91E: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + ebp * 8 + 0x178) = eax;
    fp_push(MEMF(esi + 0x51C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    MEMF(esi + ebp * 8 + 0x17C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000FF949u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FF949: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF973; /* je: equal / zero */

loc_000FF94F: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FF955u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF955: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FF975; /* jne: not equal / not zero */

loc_000FF973: ;
    edi = 0; /* xor self */

loc_000FF975: ;
    PUSH32(esp, 0x000FF97Au); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000FF97A: ;
    ecx = MEM32(esi + 0x504);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x208); PUSH32(esp, 0x000FF98Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF98B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FF9CD; /* je: equal / zero */

loc_000FF991: ;
    PUSH32(esp, 0x000FF996u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FF996: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FF9A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF9A0: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x25C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + 0x25c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FFA4C; /* jnp: not parity */

loc_000FF9B1: ;
    PUSH32(esp, 0x000FF9B6u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000FF9B6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000FF9C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FF9C0: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0x258)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + 0x258] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FFA4C; /* jnp: not parity */

loc_000FF9CD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFA4C; /* je: equal / zero */

loc_000FF9D1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFA4C; /* jne: not equal / not zero */

loc_000FF9D5: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFA4C; /* je: equal / zero */

loc_000FF9DB: ;
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    eax = eax + 0x20;
    fp_top() = fp_top() - MEMF(edi + 0x20); /* fsub dword ptr [edi + 0x20] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x24); /* fsub dword ptr [edi + 0x24] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x28); /* fsub dword ptr [edi + 0x28] */
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
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x250)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x250] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FFA4C; /* jp: parity */

loc_000FFA18: ;
    _fa = (uint32_t)(MEM8(esi + 0x24C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x24C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFA4C; /* je: equal / zero */

loc_000FFA21: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000FFA2Au); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000FFA2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFA4C; /* je: equal / zero */

loc_000FFA2E: ;
    MEM8(esi + 0x288) = MEM8(esi + 0x288) & 0xFE;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x168) = 0xBF800000u;
    MEM32(esi + 0x144) = ebp;
    MEM32(esi + 0x18) = eax;

loc_000FFA4C: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FFA60
 * Original: 0x000FFA60 - 0x001007AD (3405 bytes, 923 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFA60(void)
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

loc_000FFA60: ;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    esi = ecx;
    ecx = MEM32(esi + 0x18);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x000FFA7Cu); RECOMP_ABI_CALL(0x0003A510u, sub_0003A510); /* call 0x0003A510 */

loc_000FFA7C: ;
    edx = MEM32(esi + 0x18);
    ecx = esp + 0x34;
    MEM32(esp + 0x2C) = 0x428C0000;
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x11) = 0;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x000FFA9Eu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FFA9E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010079E; /* je: equal / zero */

loc_000FFAA8: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000FFAAEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FFAAE: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010079E; /* je: equal / zero */

loc_000FFAD0: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + 0x330);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FFAEC; /* jne: not equal / not zero */

loc_000FFADE: ;
    PUSH32(esp, 0x000FFAE3u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000FFAE3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000FFAECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FFAEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000FFAF2; /* jge: greater or equal (signed >=) */

loc_000FFAF0: ;
    eax = 0; /* xor self */

loc_000FFAF2: ;
    eax = MEM32(eax * 4 + 0x48585C);
    ecx = esp + 0x4C;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x000FFB06u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000FFB06: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFB31; /* je: equal / zero */

loc_000FFB0C: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000FFB13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FFB13: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFB33; /* jne: not equal / not zero */

loc_000FFB31: ;
    ebp = 0; /* xor self */

loc_000FFB33: ;
    ecx = MEM32(esi + 0x494);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000FFB44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FFB44: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi + 0x10);
    fp_top() = fp_top() - MEMF(eax + 0x28); /* fsub dword ptr [eax + 0x28] */
    eax = eax + 0x20;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    fp_push(MEMF(edi + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    MEM8(esp + 0x12) = LO8(ebx);
    fp_push(MEMF(edi + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFB9F; /* jne: not equal / not zero */

loc_000FFB81: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x494);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000FFB97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FFB97: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_000FFC03; /* jne: not equal / not zero */

loc_000FFB9F: ;
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 0x28); /* fsub dword ptr [eax + 0x28] */
    eax = eax + 0x20;
    fp_push(MEMF(edi + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(edi + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(eax); /* fsub dword ptr [eax] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C8324); /* fadd dword ptr [0x3c8324] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFBEE; /* jne: not equal / not zero */

loc_000FFBE1: ;
    ecx = MEM32(esi + 0x494);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000FFBEEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FFBEE: ;
    ecx = MEM32(esi + 0x494);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000FFBFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FFBFD: ;
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 0x12) = LO8(ebx);

loc_000FFC03: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5D54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5d54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFCAA; /* jne: not equal / not zero */

loc_000FFC18: ;
    ecx = MEM32(esi + 0x494);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000FFC23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FFC23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFC84; /* je: equal / zero */

loc_000FFC28: ;
    ecx = MEM32(esi + 0x494);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000FFC35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FFC35: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000FFC3Eu); RECOMP_ABI_CALL(0x000FE330u, sub_000FE330); /* call 0x000FE330 */

loc_000FFC3E: ;
    PUSH32(esp, 0x000FFC43u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000FFC43: ;
    fp_top() = fp_top() * MEMF(0x3CA9D8); /* fmul dword ptr [0x3ca9d8] */
    fp_top() = fp_top() + MEMF(esi + 0x51C); /* fadd dword ptr [esi + 0x51c] */
    fp_top() = fp_top() + MEMF(0x3C8828); /* fadd dword ptr [0x3c8828] */
    MEMF(esi + 0x248) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000FFC60u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000FFC60: ;
    fp_top() = fp_top() * MEMF(0x3C97D0); /* fmul dword ptr [0x3c97d0] */
    SET_LO8(eax, 0); /* xor self */
    fp_top() = fp_top() + MEMF(esi + 0x51C); /* fadd dword ptr [esi + 0x51c] */
    fp_top() = fp_top() + MEMF(0x3C8828); /* fadd dword ptr [0x3c8828] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_000FFC84: ;
    eax = MEM32(esi + 0x244);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFCAA; /* je: equal / zero */

loc_000FFC8E: ;
    ecx = MEM32(esi + 0x494);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000FFC99u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FFC99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFCAA; /* je: equal / zero */

loc_000FFC9E: ;
    MEM8(esp + 0x11) = 1;
    MEM8(esi + 0x234) = 0;

loc_000FFCAA: ;
    SET_LO8(eax, MEM8(esi + 0x234));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFDAC; /* je: equal / zero */

loc_000FFCB8: ;
    _fa = (uint32_t)(MEM8(esi + 0x28A)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x28A), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFDAC; /* jne: not equal / not zero */

loc_000FFCC5: ;
    _fa = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x244), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FFCD8; /* jne: not equal / not zero */

loc_000FFCCE: ;
    ecx = MEM32(esp + 0x140);
    MEM8(ecx) = 0;

loc_000FFCD8: ;
    fp_push(MEMF(esi + 0x248)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x51C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x51c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFD13; /* jne: not equal / not zero */

loc_000FFCEB: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFD13; /* jne: not equal / not zero */

loc_000FFCF3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFD13; /* jne: not equal / not zero */

loc_000FFCF7: ;
    eax = MEM32(esp + 0x13C);
    MEM32(eax) = MEM32(eax) | 0x2000;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_000FFD13: ;
    PUSH32(esp, 0x000FFD18u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000FFD18: ;
    ebp = eax;
    eax = MEM32(esi + 0x10);
    edx = esi + 0x228;
    eax = eax + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FFD2Du); RECOMP_ABI_CALL(0x000FE280u, sub_000FE280); /* call 0x000FE280 */

loc_000FFD2D: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp);
    esp = esp + 8;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000FFD3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000FFD3C: ;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFDAC; /* jne: not equal / not zero */

loc_000FFD4D: ;
    fp_push(MEMF(esi + 0x51C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x248); /* fsub dword ptr [esi + 0x248] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C837C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c837c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FFDAC; /* jp: parity */

loc_000FFD66: ;
    esi = esi + 0x238;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FFD72u); RECOMP_ABI_CALL(0x000125F0u, sub_000125F0); /* call 0x000125F0 */

loc_000FFD72: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFD90; /* je: equal / zero */

loc_000FFD79: ;
    ecx = MEM32(esi);
    eax = MEM32(esp + 0x138);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;

loc_000FFD90: ;
    eax = MEM32(esp + 0x13C);
    MEM32(eax) = MEM32(eax) | 0x2000;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_000FFDAC: ;
    MEM8(esi + 0x234) = 0;
    edx = MEM32(edi + 0x20);
    MEM32(esp + 0x20) = edx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = MEM32(edi + 0x24);
    MEM32(esp + 0x24) = eax;
    ecx = MEM32(edi + 0x28);
    eax = MEM32(esi + 0x10);
    MEM32(esp + 0x28) = ecx;
    fp_top() = fp_top() - MEMF(eax + 0x20); /* fsub dword ptr [eax + 0x20] */
    eax = eax + 0x20;
    edx = esp + 0x20;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ecx = esi;
    fp_top() = fp_top() - MEMF(eax + 4); /* fsub dword ptr [eax + 4] */
    MEM32(esp + 0x2C) = 0;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000FFDF8u); RECOMP_ABI_CALL(0x000FCE20u, sub_000FCE20); /* call 0x000FCE20 */

loc_000FFDF8: ;
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0xFC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000FFE08u); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000FFE08: ;
    fp_push(MEMF(esp + 0x108)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA91C); /* fmul dword ptr [0x3ca91c] */
    eax = MEM32(esi + 0x10);
    eax = eax + 0x20;
    ebx = 0; /* xor self */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    ebp = ebp | 0xFFFFFFFFu;
    fp_top() = fp_top() - MEMF(edi + 0x28); /* fsub dword ptr [edi + 0x28] */
    esp = esp + 8;
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(esp + 0x38) = ebx;
    fp_top() = fp_top() - MEMF(edi + 0x24); /* fsub dword ptr [edi + 0x24] */
    MEM32(esp + 0x3C) = ebx;
    fp_push(MEMF(eax)); /* fld float */
    MEM32(esp + 0x40) = ebx;
    fp_top() = fp_top() - MEMF(edi + 0x20); /* fsub dword ptr [edi + 0x20] */
    MEM32(esp + 0x44) = ebx;
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM8(esp + 0x1D) = LO8(ebx);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM8(esp + 0x1E) = LO8(ebx);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEM8(esp + 0x1F) = LO8(ebx);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(esp + 0x34) = ebp;
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    MEM32(esp + 0xD4) = ebx;
    MEM32(esp + 0xD8) = 0x3D4CCCCD;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(esp + 0xDC) = 0x3E19999A;
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    MEM32(esp + 0xE0) = 0x3ECCCCCD;
    MEM32(esp + 0xE4) = 0x3F19999A;
    MEM32(esp + 0xE8) = 0x3F800000;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    edi = 0; /* xor self */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FFEB8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FFF37; /* jne: not equal / not zero */

loc_000FFEBD: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFF37; /* jne: not equal / not zero */

loc_000FFEC5: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFEE2; /* je: equal / zero */

loc_000FFECD: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C94A4); /* fsub dword ptr [0x3c94a4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFF37; /* je: equal / zero */

loc_000FFEE2: ;
    fp_push(MEMF(esi + 0x254)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C977C); /* fsub dword ptr [0x3c977c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001002A6; /* jnp: not parity */

loc_000FFEFD: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x3E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x3E0), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FFF1A; /* jne: not equal / not zero */

loc_000FFF09: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFF1A; /* je: equal / zero */

loc_000FFF11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_000FFF1A: ;
    PUSH32(esp, 0x000FFF1Fu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000FFF1F: ;
    eax = MEM32(esi + 0x280);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + eax * 4 + 0xD4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + eax*4 + 0xd4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001002A6; /* je: equal / zero */

loc_000FFF37: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFF71; /* jne: not equal / not zero */

loc_000FFF3F: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFF71; /* jne: not equal / not zero */

loc_000FFF47: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFF79; /* jne: not equal / not zero */

loc_000FFF4B: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8388)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8388] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001002A6; /* jnp: not parity */

loc_000FFF60: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0x3E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3E0), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FFF79; /* jne: not equal / not zero */

loc_000FFF6C: ;
    goto loc_001002A6;

loc_000FFF71: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_000FFF79: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    edx = MEM32(0x5BC9D0);
    eax = MEM32(0x5BC9D4);
    MEM32(esp + 0xC4) = 0;
    MEM32(esp + 0xC8) = 0x42BE0000;
    MEM32(esp + 0xCC) = 0x43340000;
    MEM32(esp + 0xD0) = 0x43848000;
    fp_top() = fp_top() + MEMF(esp + edi * 4 + 0xC4); /* fadd dword ptr [esp + edi*4 + 0xc4] */
    ecx = esp + 0xB8;
    MEM32(esp + 0xB8) = edx;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    PUSH32(esp, ecx);
    edx = esp + 0x12C;
    PUSH32(esp, edx);
    MEMF(esp + 0xC8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0xC4) = eax;
    PUSH32(esp, 0x000FFFEBu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000FFFEB: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 4);
    esp = esp + 8;
    ecx = esp + 0x20;
    MEM32(esp + 0x24) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0010000Eu); RECOMP_ABI_CALL(0x000FCE20u, sub_000FCE20); /* call 0x000FCE20 */

loc_0010000E: ;
    PUSH32(esp, 0x00100013u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100013: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010001Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010001A: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    eax = MEM32(esi + 0x10);
    eax = eax + 0x20;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x104) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x104)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010006Bu); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_0010006B: ;
    edx = MEM32(eax);
    ecx = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00100077u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00100077: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001002A6; /* je: equal / zero */

loc_0010007F: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001000C0; /* jne: not equal / not zero */

loc_00100087: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001000C0; /* jne: not equal / not zero */

loc_0010008F: ;
    PUSH32(esp, 0x00100094u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100094: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    edx = esp + 0x58;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001000B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001000B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001002A6; /* jg: greater (signed >) */

loc_001000C0: ;
    SET_LO8(eax, MEM8(esi + 0x2BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100110; /* je: equal / zero */

loc_001000CA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100110; /* jne: not equal / not zero */

loc_001000D2: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100110; /* jne: not equal / not zero */

loc_001000DA: ;
    eax = MEM32(esi + 0x2B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001000F4; /* jne: not equal / not zero */

loc_001000E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001000F4; /* jne: not equal / not zero */

loc_001000EA: ;
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) + 5;
    ebx = ebx + 5;
    goto loc_0010011E;

loc_001000F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_001000FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_00100106: ;
    MEM32(esp + 0x44) = MEM32(esp + 0x44) + 5;
    ebx = ebx + 5;
    goto loc_0010011E;

loc_00100110: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010011E; /* je: equal / zero */

loc_00100115: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100251; /* jne: not equal / not zero */

loc_0010011E: ;
    PUSH32(esp, 0x00100123u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100123: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010012Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010012A: ;
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    eax = MEM32(esi + 0x10);
    eax = eax + 0x20;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0xEC)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00100181u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100181: ;
    edx = MEM32(eax);
    ecx = esp + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0010018Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010018D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100251; /* je: equal / zero */

loc_00100195: ;
    PUSH32(esp, 0x0010019Au); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_0010019A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    edx = esp + 0x70;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001001BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001001BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00100251; /* jg: greater (signed >) */

loc_001001C6: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    eax = MEM32(0x5BC9D0);
    ecx = MEM32(0x5BC9D4);
    ebp = edi;
    ebp = ebp >> 1;
    MEM32(esp + 0x74) = 0x42B40000;
    MEM32(esp + 0x78) = 0x43870000;
    fp_top() = fp_top() + MEMF(esp + ebp * 4 + 0x74); /* fadd dword ptr [esp + ebp*4 + 0x74] */
    edx = esp + 0xAC;
    MEM32(esp + 0xAC) = eax;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    PUSH32(esp, edx);
    eax = esp + 0x60;
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM8(esp + edi + 0x24) = 1;
    MEM32(esp + 0xB8) = ecx;
    PUSH32(esp, 0x0010021Fu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0010021F: ;
    esp = esp + 8;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0010022Eu); RECOMP_ABI_CALL(0x000FCE20u, sub_000FCE20); /* call 0x000FCE20 */

loc_0010022E: ;
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    eax = ebp + ebp * 2;
    ebp = MEM32(esp + 0x34);
    eax = esp + eax * 4 + 0x110;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_00100251: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = edi + edi * 2;
    eax = esp + eax * 4 + 0x7C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM8(esp + edi + 0x14) = 1;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010027C; /* jne: not equal / not zero */

loc_00100276: ;
    ebp = edi;
    MEM32(esp + 0x34) = ebp;

loc_0010027C: ;
    eax = MEM32(esp + edi * 4 + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(esp + edi * 4 + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00100290; /* je: equal / zero */

loc_0010028B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100296; /* jne: not equal / not zero */

loc_00100290: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + edi * 4 + 0x38) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00100296: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x244) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_0010029E: ;
    MEM32(esp + edi * 4 + 0x38) = MEM32(esp + edi * 4 + 0x38) + 8;
    ebx = ebx + 8;

loc_001002A6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FFEB8; /* jl: less (signed <) */

loc_001002B0: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0x2BC) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_001002CB; /* jne: not equal / not zero */

loc_001002BF: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100376; /* je: equal / zero */

loc_001002CB: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00100376; /* jle: less or equal (signed <=) */

loc_001002D7: ;
    edx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    ecx = MEM32(esp + 0x80);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x138);
    edx = MEM32(esp + 0x84);
    MEM32(esi + 0x244) = 0;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(eax + 8) = edx;
    MEM32(esi + 0x238) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x23C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x240) = eax;
    ecx = MEM32(esi + 0x51C);
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x248) = ecx;
    MEM8(esi + 0x234) = 1;
    edx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x230) = edx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_00100376: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001004B3; /* je: equal / zero */

loc_00100382: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9784)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9784] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001004B3; /* jne: not equal / not zero */

loc_0010039D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00100408; /* jp: parity */

loc_001003AC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001004B3; /* je: equal / zero */

loc_001003B5: ;
    eax = MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001004B3; /* jle: less or equal (signed <=) */

loc_001003C1: ;
    ecx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    edx = MEM32(esp + 0x98);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x9C);
    MEM32(esi + 0x244) = 2;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x94);
    goto loc_00100453;

loc_00100408: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001004B3; /* jle: less or equal (signed <=) */

loc_00100414: ;
    ecx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    edx = MEM32(esp + 0x80);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x84);
    MEM32(esi + 0x244) = 0;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x7C);

loc_00100453: ;
    MEM32(eax + 8) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x238) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x23C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x240) = edx;
    eax = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = eax;
    eax = MEM32(esi + 0x10);
    MEM8(esi + 0x234) = 1;
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x230) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_001004B3: ;
    SET_LO8(eax, MEM8(esi + 0x28A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010056E; /* je: equal / zero */

loc_001004C1: ;
    SET_LO8(eax, LO8(eax) & 0xDF);
    MEM8(esi + 0x28A) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010054C; /* jne: not equal / not zero */

loc_001004D1: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010056E; /* je: equal / zero */

loc_001004DD: ;
    eax = MEM32(esp + 0x13C);
    MEM32(esi + 0x244) = 3;
    MEM32(eax) = MEM32(eax) | 0x2000000;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x2000000;

loc_001004FD: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0x244);
    ecx = MEM32(esp + 0x138);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + eax * 2;
    edx = MEM32(esp + eax * 4 + 0x110);
    eax = esp + eax * 4 + 0x110;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_0010054C: ;
    eax = MEM32(esp + 0x13C);
    MEM32(esi + 0x244) = 1;
    MEM32(eax) = MEM32(eax) | 0x4000000;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x4000000;
    goto loc_001004FD;

loc_0010056E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00100794; /* jle: less or equal (signed <=) */

loc_00100576: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5D54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5d54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001005E0; /* jp: parity */

loc_00100587: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001005E0; /* je: equal / zero */

loc_0010058C: ;
    eax = MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001005E0; /* jle: less or equal (signed <=) */

loc_00100594: ;
    PUSH32(esp, 0x00100599u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00100599: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001005E0; /* jne: not equal / not zero */

loc_001005A6: ;
    edi = MEM32(esp + 0x138);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    edx = MEM32(esp + 0x98);
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x9C);
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;
    ecx = MEM32(esi + 0x51C);
    ebp = 2;
    MEM32(esi + 0x248) = ecx;
    goto loc_0010065A;

loc_001005E0: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001005E9u); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_001005E9: ;
    esp = esp + 8;
    ecx = 0; /* xor self */
    ebp = 0; /* xor self */

loc_001005F0: ;
    ecx = ecx + MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00100602; /* jge: greater or equal (signed >=) */

loc_001005F8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001005F0; /* jl: less (signed <) */

loc_001005FE: ;
    ebp = MEM32(esp + 0x14);

loc_00100602: ;
    _fa = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x244), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100629; /* je: equal / zero */

loc_0010060A: ;
    PUSH32(esp, 0x0010060Fu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_0010060F: ;
    fp_top() = fp_top() * MEMF(0x3CA9D8); /* fmul dword ptr [0x3ca9d8] */
    fp_top() = fp_top() + MEMF(esi + 0x51C); /* fadd dword ptr [esi + 0x51c] */
    fp_top() = fp_top() + MEMF(0x3C8828); /* fadd dword ptr [0x3c8828] */
    MEMF(esi + 0x248) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00100635;

loc_00100629: ;
    edx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = edx;

loc_00100635: ;
    edi = MEM32(esp + 0x138);
    eax = ebp + ebp * 2;
    ecx = MEM32(esp + eax * 4 + 0x7C);
    edx = MEM32(esp + eax * 4 + 0x80);
    eax = esp + eax * 4 + 0x7C;
    eax = MEM32(eax + 8);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;

loc_0010065A: ;
    MEM32(esi + 0x244) = ebp;
    ecx = MEM32(edi);
    MEM32(esi + 0x238) = ecx;
    edx = MEM32(edi + 4);
    ebx = MEM32(esp + 0x13C);
    MEM32(esi + 0x23C) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0x240) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x230) = eax;
    ecx = MEM32(esi + 0x244);
    _fa = (uint32_t)(MEM8(esp + ecx + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + ecx + 0x1C), 1 (8-bit) */
    MEM8(esi + 0x234) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006BA: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006C6: ;
    PUSH32(esp, 0x001006CBu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_001006CB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006D8: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax + eax * 2;
    edx = MEM32(esp + ecx * 4 + 0x110);
    ecx = esp + ecx * 4 + 0x110;
    MEM32(edi) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = ecx;
    ecx = MEM32(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00100716; /* jne: not equal / not zero */

loc_00100704: ;
    ecx = ecx | 0x4000000;
    MEM32(ebx) = ecx;
    eax = MEM32(ebx + 4);
    eax = eax | 0x4000000;
    goto loc_00100726;

loc_00100716: ;
    ecx = ecx | 0x2000000;
    MEM32(ebx) = ecx;
    eax = MEM32(ebx + 4);
    eax = eax | 0x2000000;

loc_00100726: ;
    MEM32(ebx + 4) = eax;
    edx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = edx;

loc_00100735: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010076D; /* jne: not equal / not zero */

loc_0010073A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010076D; /* jne: not equal / not zero */

loc_00100746: ;
    ecx = MEM32(esp + 0x140);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ebx + 8) = eax;
    MEM8(ecx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_0010076D: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ebx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_00100794: ;
    MEM32(esi + 0x244) = 0xFFFFFFFFu;

loc_0010079E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100002
 * Original: 0x00100002 - 0x001007AD (1963 bytes, 515 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100002(void)
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

loc_00100002: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0010000Eu); RECOMP_ABI_CALL(0x000FCE20u, sub_000FCE20); /* call 0x000FCE20 */

loc_0010000E: ;
    PUSH32(esp, 0x00100013u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100013: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010001Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010001A: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    eax = MEM32(esi + 0x10);
    eax = eax + 0x20;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x104) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x104)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010006Bu); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_0010006B: ;
    edx = MEM32(eax);
    ecx = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00100077u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00100077: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001002A6; /* je: equal / zero */

loc_0010007F: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001000C0; /* jne: not equal / not zero */

loc_00100087: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001000C0; /* jne: not equal / not zero */

loc_0010008F: ;
    PUSH32(esp, 0x00100094u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100094: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    edx = esp + 0x58;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001000B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001000B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001002A6; /* jg: greater (signed >) */

loc_001000C0: ;
    SET_LO8(eax, MEM8(esi + 0x2BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100110; /* je: equal / zero */

loc_001000CA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100110; /* jne: not equal / not zero */

loc_001000D2: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100110; /* jne: not equal / not zero */

loc_001000DA: ;
    eax = MEM32(esi + 0x2B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001000F4; /* jne: not equal / not zero */

loc_001000E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001000F4; /* jne: not equal / not zero */

loc_001000EA: ;
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) + 5;
    ebx = ebx + 5;
    goto loc_0010011E;

loc_001000F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_001000FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_00100106: ;
    MEM32(esp + 0x44) = MEM32(esp + 0x44) + 5;
    ebx = ebx + 5;
    goto loc_0010011E;

loc_00100110: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010011E; /* je: equal / zero */

loc_00100115: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100251; /* jne: not equal / not zero */

loc_0010011E: ;
    PUSH32(esp, 0x00100123u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100123: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010012Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010012A: ;
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    eax = MEM32(esi + 0x10);
    eax = eax + 0x20;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0xEC)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00100181u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100181: ;
    edx = MEM32(eax);
    ecx = esp + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0010018Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010018D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100251; /* je: equal / zero */

loc_00100195: ;
    PUSH32(esp, 0x0010019Au); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_0010019A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    edx = esp + 0x70;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001001BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001001BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00100251; /* jg: greater (signed >) */

loc_001001C6: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    eax = MEM32(0x5BC9D0);
    ecx = MEM32(0x5BC9D4);
    ebp = edi;
    ebp = ebp >> 1;
    MEM32(esp + 0x74) = 0x42B40000;
    MEM32(esp + 0x78) = 0x43870000;
    fp_top() = fp_top() + MEMF(esp + ebp * 4 + 0x74); /* fadd dword ptr [esp + ebp*4 + 0x74] */
    edx = esp + 0xAC;
    MEM32(esp + 0xAC) = eax;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    PUSH32(esp, edx);
    eax = esp + 0x60;
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM8(esp + edi + 0x24) = 1;
    MEM32(esp + 0xB8) = ecx;
    PUSH32(esp, 0x0010021Fu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0010021F: ;
    esp = esp + 8;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0010022Eu); RECOMP_ABI_CALL(0x000FCE20u, sub_000FCE20); /* call 0x000FCE20 */

loc_0010022E: ;
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    eax = ebp + ebp * 2;
    ebp = MEM32(esp + 0x34);
    eax = esp + eax * 4 + 0x110;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_00100251: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = edi + edi * 2;
    eax = esp + eax * 4 + 0x7C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM8(esp + edi + 0x14) = 1;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010027C; /* jne: not equal / not zero */

loc_00100276: ;
    ebp = edi;
    MEM32(esp + 0x34) = ebp;

loc_0010027C: ;
    eax = MEM32(esp + edi * 4 + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(esp + edi * 4 + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00100290; /* je: equal / zero */

loc_0010028B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100296; /* jne: not equal / not zero */

loc_00100290: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + edi * 4 + 0x38) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00100296: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x244) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_0010029E: ;
    MEM32(esp + edi * 4 + 0x38) = MEM32(esp + edi * 4 + 0x38) + 8;
    ebx = ebx + 8;

loc_001002A6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000FFEB8(); return; } /* jl: less (signed <) */

loc_001002B0: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0x2BC) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_001002CB; /* jne: not equal / not zero */

loc_001002BF: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100376; /* je: equal / zero */

loc_001002CB: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00100376; /* jle: less or equal (signed <=) */

loc_001002D7: ;
    edx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    ecx = MEM32(esp + 0x80);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x138);
    edx = MEM32(esp + 0x84);
    MEM32(esi + 0x244) = 0;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(eax + 8) = edx;
    MEM32(esi + 0x238) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x23C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x240) = eax;
    ecx = MEM32(esi + 0x51C);
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x248) = ecx;
    MEM8(esi + 0x234) = 1;
    edx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x230) = edx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_00100376: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001004B3; /* je: equal / zero */

loc_00100382: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9784)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9784] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001004B3; /* jne: not equal / not zero */

loc_0010039D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00100408; /* jp: parity */

loc_001003AC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001004B3; /* je: equal / zero */

loc_001003B5: ;
    eax = MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001004B3; /* jle: less or equal (signed <=) */

loc_001003C1: ;
    ecx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    edx = MEM32(esp + 0x98);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x9C);
    MEM32(esi + 0x244) = 2;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x94);
    goto loc_00100453;

loc_00100408: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001004B3; /* jle: less or equal (signed <=) */

loc_00100414: ;
    ecx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    edx = MEM32(esp + 0x80);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x84);
    MEM32(esi + 0x244) = 0;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x7C);

loc_00100453: ;
    MEM32(eax + 8) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x238) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x23C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x240) = edx;
    eax = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = eax;
    eax = MEM32(esi + 0x10);
    MEM8(esi + 0x234) = 1;
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x230) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_001004B3: ;
    SET_LO8(eax, MEM8(esi + 0x28A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010056E; /* je: equal / zero */

loc_001004C1: ;
    SET_LO8(eax, LO8(eax) & 0xDF);
    MEM8(esi + 0x28A) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010054C; /* jne: not equal / not zero */

loc_001004D1: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010056E; /* je: equal / zero */

loc_001004DD: ;
    eax = MEM32(esp + 0x13C);
    MEM32(esi + 0x244) = 3;
    MEM32(eax) = MEM32(eax) | 0x2000000;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x2000000;

loc_001004FD: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0x244);
    ecx = MEM32(esp + 0x138);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + eax * 2;
    edx = MEM32(esp + eax * 4 + 0x110);
    eax = esp + eax * 4 + 0x110;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_0010054C: ;
    eax = MEM32(esp + 0x13C);
    MEM32(esi + 0x244) = 1;
    MEM32(eax) = MEM32(eax) | 0x4000000;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x4000000;
    goto loc_001004FD;

loc_0010056E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00100794; /* jle: less or equal (signed <=) */

loc_00100576: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5D54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5d54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001005E0; /* jp: parity */

loc_00100587: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001005E0; /* je: equal / zero */

loc_0010058C: ;
    eax = MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001005E0; /* jle: less or equal (signed <=) */

loc_00100594: ;
    PUSH32(esp, 0x00100599u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00100599: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001005E0; /* jne: not equal / not zero */

loc_001005A6: ;
    edi = MEM32(esp + 0x138);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    edx = MEM32(esp + 0x98);
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x9C);
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;
    ecx = MEM32(esi + 0x51C);
    ebp = 2;
    MEM32(esi + 0x248) = ecx;
    goto loc_0010065A;

loc_001005E0: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001005E9u); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_001005E9: ;
    esp = esp + 8;
    ecx = 0; /* xor self */
    ebp = 0; /* xor self */

loc_001005F0: ;
    ecx = ecx + MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00100602; /* jge: greater or equal (signed >=) */

loc_001005F8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001005F0; /* jl: less (signed <) */

loc_001005FE: ;
    ebp = MEM32(esp + 0x14);

loc_00100602: ;
    _fa = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x244), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100629; /* je: equal / zero */

loc_0010060A: ;
    PUSH32(esp, 0x0010060Fu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_0010060F: ;
    fp_top() = fp_top() * MEMF(0x3CA9D8); /* fmul dword ptr [0x3ca9d8] */
    fp_top() = fp_top() + MEMF(esi + 0x51C); /* fadd dword ptr [esi + 0x51c] */
    fp_top() = fp_top() + MEMF(0x3C8828); /* fadd dword ptr [0x3c8828] */
    MEMF(esi + 0x248) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00100635;

loc_00100629: ;
    edx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = edx;

loc_00100635: ;
    edi = MEM32(esp + 0x138);
    eax = ebp + ebp * 2;
    ecx = MEM32(esp + eax * 4 + 0x7C);
    edx = MEM32(esp + eax * 4 + 0x80);
    eax = esp + eax * 4 + 0x7C;
    eax = MEM32(eax + 8);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;

loc_0010065A: ;
    MEM32(esi + 0x244) = ebp;
    ecx = MEM32(edi);
    MEM32(esi + 0x238) = ecx;
    edx = MEM32(edi + 4);
    ebx = MEM32(esp + 0x13C);
    MEM32(esi + 0x23C) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0x240) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x230) = eax;
    ecx = MEM32(esi + 0x244);
    _fa = (uint32_t)(MEM8(esp + ecx + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + ecx + 0x1C), 1 (8-bit) */
    MEM8(esi + 0x234) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006BA: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006C6: ;
    PUSH32(esp, 0x001006CBu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_001006CB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006D8: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax + eax * 2;
    edx = MEM32(esp + ecx * 4 + 0x110);
    ecx = esp + ecx * 4 + 0x110;
    MEM32(edi) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = ecx;
    ecx = MEM32(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00100716; /* jne: not equal / not zero */

loc_00100704: ;
    ecx = ecx | 0x4000000;
    MEM32(ebx) = ecx;
    eax = MEM32(ebx + 4);
    eax = eax | 0x4000000;
    goto loc_00100726;

loc_00100716: ;
    ecx = ecx | 0x2000000;
    MEM32(ebx) = ecx;
    eax = MEM32(ebx + 4);
    eax = eax | 0x2000000;

loc_00100726: ;
    MEM32(ebx + 4) = eax;
    edx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = edx;

loc_00100735: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010076D; /* jne: not equal / not zero */

loc_0010073A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010076D; /* jne: not equal / not zero */

loc_00100746: ;
    ecx = MEM32(esp + 0x140);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ebx + 8) = eax;
    MEM8(ecx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_0010076D: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ebx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_00100794: ;
    MEM32(esi + 0x244) = 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100041
 * Original: 0x00100041 - 0x001007AD (1900 bytes, 496 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100041(void)
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

loc_00100041: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x104)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010006Bu); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_0010006B: ;
    edx = MEM32(eax);
    ecx = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00100077u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00100077: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001002A6; /* je: equal / zero */

loc_0010007F: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001000C0; /* jne: not equal / not zero */

loc_00100087: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001000C0; /* jne: not equal / not zero */

loc_0010008F: ;
    PUSH32(esp, 0x00100094u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100094: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    edx = esp + 0x58;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001000B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001000B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001002A6; /* jg: greater (signed >) */

loc_001000C0: ;
    SET_LO8(eax, MEM8(esi + 0x2BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100110; /* je: equal / zero */

loc_001000CA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100110; /* jne: not equal / not zero */

loc_001000D2: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100110; /* jne: not equal / not zero */

loc_001000DA: ;
    eax = MEM32(esi + 0x2B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001000F4; /* jne: not equal / not zero */

loc_001000E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001000F4; /* jne: not equal / not zero */

loc_001000EA: ;
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) + 5;
    ebx = ebx + 5;
    goto loc_0010011E;

loc_001000F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_001000FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_00100106: ;
    MEM32(esp + 0x44) = MEM32(esp + 0x44) + 5;
    ebx = ebx + 5;
    goto loc_0010011E;

loc_00100110: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010011E; /* je: equal / zero */

loc_00100115: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100251; /* jne: not equal / not zero */

loc_0010011E: ;
    PUSH32(esp, 0x00100123u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100123: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010012Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010012A: ;
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    eax = MEM32(esi + 0x10);
    eax = eax + 0x20;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0xEC)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00100181u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100181: ;
    edx = MEM32(eax);
    ecx = esp + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0010018Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010018D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100251; /* je: equal / zero */

loc_00100195: ;
    PUSH32(esp, 0x0010019Au); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_0010019A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    edx = esp + 0x70;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001001BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001001BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00100251; /* jg: greater (signed >) */

loc_001001C6: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    eax = MEM32(0x5BC9D0);
    ecx = MEM32(0x5BC9D4);
    ebp = edi;
    ebp = ebp >> 1;
    MEM32(esp + 0x74) = 0x42B40000;
    MEM32(esp + 0x78) = 0x43870000;
    fp_top() = fp_top() + MEMF(esp + ebp * 4 + 0x74); /* fadd dword ptr [esp + ebp*4 + 0x74] */
    edx = esp + 0xAC;
    MEM32(esp + 0xAC) = eax;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    PUSH32(esp, edx);
    eax = esp + 0x60;
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM8(esp + edi + 0x24) = 1;
    MEM32(esp + 0xB8) = ecx;
    PUSH32(esp, 0x0010021Fu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0010021F: ;
    esp = esp + 8;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0010022Eu); RECOMP_ABI_CALL(0x000FCE20u, sub_000FCE20); /* call 0x000FCE20 */

loc_0010022E: ;
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    eax = ebp + ebp * 2;
    ebp = MEM32(esp + 0x34);
    eax = esp + eax * 4 + 0x110;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_00100251: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = edi + edi * 2;
    eax = esp + eax * 4 + 0x7C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM8(esp + edi + 0x14) = 1;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010027C; /* jne: not equal / not zero */

loc_00100276: ;
    ebp = edi;
    MEM32(esp + 0x34) = ebp;

loc_0010027C: ;
    eax = MEM32(esp + edi * 4 + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(esp + edi * 4 + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00100290; /* je: equal / zero */

loc_0010028B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100296; /* jne: not equal / not zero */

loc_00100290: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + edi * 4 + 0x38) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00100296: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x244) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_0010029E: ;
    MEM32(esp + edi * 4 + 0x38) = MEM32(esp + edi * 4 + 0x38) + 8;
    ebx = ebx + 8;

loc_001002A6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000FFEB8(); return; } /* jl: less (signed <) */

loc_001002B0: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0x2BC) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_001002CB; /* jne: not equal / not zero */

loc_001002BF: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100376; /* je: equal / zero */

loc_001002CB: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00100376; /* jle: less or equal (signed <=) */

loc_001002D7: ;
    edx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    ecx = MEM32(esp + 0x80);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x138);
    edx = MEM32(esp + 0x84);
    MEM32(esi + 0x244) = 0;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(eax + 8) = edx;
    MEM32(esi + 0x238) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x23C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x240) = eax;
    ecx = MEM32(esi + 0x51C);
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x248) = ecx;
    MEM8(esi + 0x234) = 1;
    edx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x230) = edx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_00100376: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001004B3; /* je: equal / zero */

loc_00100382: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9784)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9784] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001004B3; /* jne: not equal / not zero */

loc_0010039D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00100408; /* jp: parity */

loc_001003AC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001004B3; /* je: equal / zero */

loc_001003B5: ;
    eax = MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001004B3; /* jle: less or equal (signed <=) */

loc_001003C1: ;
    ecx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    edx = MEM32(esp + 0x98);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x9C);
    MEM32(esi + 0x244) = 2;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x94);
    goto loc_00100453;

loc_00100408: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001004B3; /* jle: less or equal (signed <=) */

loc_00100414: ;
    ecx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    edx = MEM32(esp + 0x80);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x84);
    MEM32(esi + 0x244) = 0;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x7C);

loc_00100453: ;
    MEM32(eax + 8) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x238) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x23C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x240) = edx;
    eax = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = eax;
    eax = MEM32(esi + 0x10);
    MEM8(esi + 0x234) = 1;
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x230) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_001004B3: ;
    SET_LO8(eax, MEM8(esi + 0x28A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010056E; /* je: equal / zero */

loc_001004C1: ;
    SET_LO8(eax, LO8(eax) & 0xDF);
    MEM8(esi + 0x28A) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010054C; /* jne: not equal / not zero */

loc_001004D1: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010056E; /* je: equal / zero */

loc_001004DD: ;
    eax = MEM32(esp + 0x13C);
    MEM32(esi + 0x244) = 3;
    MEM32(eax) = MEM32(eax) | 0x2000000;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x2000000;

loc_001004FD: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0x244);
    ecx = MEM32(esp + 0x138);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + eax * 2;
    edx = MEM32(esp + eax * 4 + 0x110);
    eax = esp + eax * 4 + 0x110;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_0010054C: ;
    eax = MEM32(esp + 0x13C);
    MEM32(esi + 0x244) = 1;
    MEM32(eax) = MEM32(eax) | 0x4000000;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x4000000;
    goto loc_001004FD;

loc_0010056E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00100794; /* jle: less or equal (signed <=) */

loc_00100576: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5D54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5d54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001005E0; /* jp: parity */

loc_00100587: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001005E0; /* je: equal / zero */

loc_0010058C: ;
    eax = MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001005E0; /* jle: less or equal (signed <=) */

loc_00100594: ;
    PUSH32(esp, 0x00100599u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00100599: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001005E0; /* jne: not equal / not zero */

loc_001005A6: ;
    edi = MEM32(esp + 0x138);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    edx = MEM32(esp + 0x98);
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x9C);
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;
    ecx = MEM32(esi + 0x51C);
    ebp = 2;
    MEM32(esi + 0x248) = ecx;
    goto loc_0010065A;

loc_001005E0: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001005E9u); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_001005E9: ;
    esp = esp + 8;
    ecx = 0; /* xor self */
    ebp = 0; /* xor self */

loc_001005F0: ;
    ecx = ecx + MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00100602; /* jge: greater or equal (signed >=) */

loc_001005F8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001005F0; /* jl: less (signed <) */

loc_001005FE: ;
    ebp = MEM32(esp + 0x14);

loc_00100602: ;
    _fa = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x244), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100629; /* je: equal / zero */

loc_0010060A: ;
    PUSH32(esp, 0x0010060Fu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_0010060F: ;
    fp_top() = fp_top() * MEMF(0x3CA9D8); /* fmul dword ptr [0x3ca9d8] */
    fp_top() = fp_top() + MEMF(esi + 0x51C); /* fadd dword ptr [esi + 0x51c] */
    fp_top() = fp_top() + MEMF(0x3C8828); /* fadd dword ptr [0x3c8828] */
    MEMF(esi + 0x248) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00100635;

loc_00100629: ;
    edx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = edx;

loc_00100635: ;
    edi = MEM32(esp + 0x138);
    eax = ebp + ebp * 2;
    ecx = MEM32(esp + eax * 4 + 0x7C);
    edx = MEM32(esp + eax * 4 + 0x80);
    eax = esp + eax * 4 + 0x7C;
    eax = MEM32(eax + 8);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;

loc_0010065A: ;
    MEM32(esi + 0x244) = ebp;
    ecx = MEM32(edi);
    MEM32(esi + 0x238) = ecx;
    edx = MEM32(edi + 4);
    ebx = MEM32(esp + 0x13C);
    MEM32(esi + 0x23C) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0x240) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x230) = eax;
    ecx = MEM32(esi + 0x244);
    _fa = (uint32_t)(MEM8(esp + ecx + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + ecx + 0x1C), 1 (8-bit) */
    MEM8(esi + 0x234) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006BA: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006C6: ;
    PUSH32(esp, 0x001006CBu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_001006CB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006D8: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax + eax * 2;
    edx = MEM32(esp + ecx * 4 + 0x110);
    ecx = esp + ecx * 4 + 0x110;
    MEM32(edi) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = ecx;
    ecx = MEM32(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00100716; /* jne: not equal / not zero */

loc_00100704: ;
    ecx = ecx | 0x4000000;
    MEM32(ebx) = ecx;
    eax = MEM32(ebx + 4);
    eax = eax | 0x4000000;
    goto loc_00100726;

loc_00100716: ;
    ecx = ecx | 0x2000000;
    MEM32(ebx) = ecx;
    eax = MEM32(ebx + 4);
    eax = eax | 0x2000000;

loc_00100726: ;
    MEM32(ebx + 4) = eax;
    edx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = edx;

loc_00100735: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010076D; /* jne: not equal / not zero */

loc_0010073A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010076D; /* jne: not equal / not zero */

loc_00100746: ;
    ecx = MEM32(esp + 0x140);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ebx + 8) = eax;
    MEM8(ecx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_0010076D: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ebx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_00100794: ;
    MEM32(esi + 0x244) = 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100043
 * Original: 0x00100043 - 0x001007AD (1898 bytes, 495 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100043(void)
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

loc_00100043: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x104)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010006Bu); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_0010006B: ;
    edx = MEM32(eax);
    ecx = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00100077u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00100077: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001002A6; /* je: equal / zero */

loc_0010007F: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001000C0; /* jne: not equal / not zero */

loc_00100087: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001000C0; /* jne: not equal / not zero */

loc_0010008F: ;
    PUSH32(esp, 0x00100094u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100094: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    edx = esp + 0x58;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001000B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001000B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001002A6; /* jg: greater (signed >) */

loc_001000C0: ;
    SET_LO8(eax, MEM8(esi + 0x2BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100110; /* je: equal / zero */

loc_001000CA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100110; /* jne: not equal / not zero */

loc_001000D2: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100110; /* jne: not equal / not zero */

loc_001000DA: ;
    eax = MEM32(esi + 0x2B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001000F4; /* jne: not equal / not zero */

loc_001000E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001000F4; /* jne: not equal / not zero */

loc_001000EA: ;
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) + 5;
    ebx = ebx + 5;
    goto loc_0010011E;

loc_001000F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_001000FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_00100106: ;
    MEM32(esp + 0x44) = MEM32(esp + 0x44) + 5;
    ebx = ebx + 5;
    goto loc_0010011E;

loc_00100110: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010011E; /* je: equal / zero */

loc_00100115: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100251; /* jne: not equal / not zero */

loc_0010011E: ;
    PUSH32(esp, 0x00100123u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100123: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010012Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010012A: ;
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    eax = MEM32(esi + 0x10);
    eax = eax + 0x20;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0xEC)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00100181u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100181: ;
    edx = MEM32(eax);
    ecx = esp + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0010018Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010018D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100251; /* je: equal / zero */

loc_00100195: ;
    PUSH32(esp, 0x0010019Au); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_0010019A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    edx = esp + 0x70;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001001BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001001BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00100251; /* jg: greater (signed >) */

loc_001001C6: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    eax = MEM32(0x5BC9D0);
    ecx = MEM32(0x5BC9D4);
    ebp = edi;
    ebp = ebp >> 1;
    MEM32(esp + 0x74) = 0x42B40000;
    MEM32(esp + 0x78) = 0x43870000;
    fp_top() = fp_top() + MEMF(esp + ebp * 4 + 0x74); /* fadd dword ptr [esp + ebp*4 + 0x74] */
    edx = esp + 0xAC;
    MEM32(esp + 0xAC) = eax;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    PUSH32(esp, edx);
    eax = esp + 0x60;
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM8(esp + edi + 0x24) = 1;
    MEM32(esp + 0xB8) = ecx;
    PUSH32(esp, 0x0010021Fu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0010021F: ;
    esp = esp + 8;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0010022Eu); RECOMP_ABI_CALL(0x000FCE20u, sub_000FCE20); /* call 0x000FCE20 */

loc_0010022E: ;
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    eax = ebp + ebp * 2;
    ebp = MEM32(esp + 0x34);
    eax = esp + eax * 4 + 0x110;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_00100251: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = edi + edi * 2;
    eax = esp + eax * 4 + 0x7C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM8(esp + edi + 0x14) = 1;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010027C; /* jne: not equal / not zero */

loc_00100276: ;
    ebp = edi;
    MEM32(esp + 0x34) = ebp;

loc_0010027C: ;
    eax = MEM32(esp + edi * 4 + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(esp + edi * 4 + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00100290; /* je: equal / zero */

loc_0010028B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100296; /* jne: not equal / not zero */

loc_00100290: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + edi * 4 + 0x38) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00100296: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x244) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_0010029E: ;
    MEM32(esp + edi * 4 + 0x38) = MEM32(esp + edi * 4 + 0x38) + 8;
    ebx = ebx + 8;

loc_001002A6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000FFEB8(); return; } /* jl: less (signed <) */

loc_001002B0: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0x2BC) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_001002CB; /* jne: not equal / not zero */

loc_001002BF: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100376; /* je: equal / zero */

loc_001002CB: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00100376; /* jle: less or equal (signed <=) */

loc_001002D7: ;
    edx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    ecx = MEM32(esp + 0x80);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x138);
    edx = MEM32(esp + 0x84);
    MEM32(esi + 0x244) = 0;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(eax + 8) = edx;
    MEM32(esi + 0x238) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x23C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x240) = eax;
    ecx = MEM32(esi + 0x51C);
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x248) = ecx;
    MEM8(esi + 0x234) = 1;
    edx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x230) = edx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_00100376: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001004B3; /* je: equal / zero */

loc_00100382: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9784)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9784] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001004B3; /* jne: not equal / not zero */

loc_0010039D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00100408; /* jp: parity */

loc_001003AC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001004B3; /* je: equal / zero */

loc_001003B5: ;
    eax = MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001004B3; /* jle: less or equal (signed <=) */

loc_001003C1: ;
    ecx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    edx = MEM32(esp + 0x98);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x9C);
    MEM32(esi + 0x244) = 2;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x94);
    goto loc_00100453;

loc_00100408: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001004B3; /* jle: less or equal (signed <=) */

loc_00100414: ;
    ecx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    edx = MEM32(esp + 0x80);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x84);
    MEM32(esi + 0x244) = 0;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x7C);

loc_00100453: ;
    MEM32(eax + 8) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x238) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x23C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x240) = edx;
    eax = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = eax;
    eax = MEM32(esi + 0x10);
    MEM8(esi + 0x234) = 1;
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x230) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_001004B3: ;
    SET_LO8(eax, MEM8(esi + 0x28A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010056E; /* je: equal / zero */

loc_001004C1: ;
    SET_LO8(eax, LO8(eax) & 0xDF);
    MEM8(esi + 0x28A) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010054C; /* jne: not equal / not zero */

loc_001004D1: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010056E; /* je: equal / zero */

loc_001004DD: ;
    eax = MEM32(esp + 0x13C);
    MEM32(esi + 0x244) = 3;
    MEM32(eax) = MEM32(eax) | 0x2000000;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x2000000;

loc_001004FD: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0x244);
    ecx = MEM32(esp + 0x138);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + eax * 2;
    edx = MEM32(esp + eax * 4 + 0x110);
    eax = esp + eax * 4 + 0x110;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_0010054C: ;
    eax = MEM32(esp + 0x13C);
    MEM32(esi + 0x244) = 1;
    MEM32(eax) = MEM32(eax) | 0x4000000;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x4000000;
    goto loc_001004FD;

loc_0010056E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00100794; /* jle: less or equal (signed <=) */

loc_00100576: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5D54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5d54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001005E0; /* jp: parity */

loc_00100587: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001005E0; /* je: equal / zero */

loc_0010058C: ;
    eax = MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001005E0; /* jle: less or equal (signed <=) */

loc_00100594: ;
    PUSH32(esp, 0x00100599u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00100599: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001005E0; /* jne: not equal / not zero */

loc_001005A6: ;
    edi = MEM32(esp + 0x138);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    edx = MEM32(esp + 0x98);
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x9C);
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;
    ecx = MEM32(esi + 0x51C);
    ebp = 2;
    MEM32(esi + 0x248) = ecx;
    goto loc_0010065A;

loc_001005E0: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001005E9u); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_001005E9: ;
    esp = esp + 8;
    ecx = 0; /* xor self */
    ebp = 0; /* xor self */

loc_001005F0: ;
    ecx = ecx + MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00100602; /* jge: greater or equal (signed >=) */

loc_001005F8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001005F0; /* jl: less (signed <) */

loc_001005FE: ;
    ebp = MEM32(esp + 0x14);

loc_00100602: ;
    _fa = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x244), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100629; /* je: equal / zero */

loc_0010060A: ;
    PUSH32(esp, 0x0010060Fu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_0010060F: ;
    fp_top() = fp_top() * MEMF(0x3CA9D8); /* fmul dword ptr [0x3ca9d8] */
    fp_top() = fp_top() + MEMF(esi + 0x51C); /* fadd dword ptr [esi + 0x51c] */
    fp_top() = fp_top() + MEMF(0x3C8828); /* fadd dword ptr [0x3c8828] */
    MEMF(esi + 0x248) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00100635;

loc_00100629: ;
    edx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = edx;

loc_00100635: ;
    edi = MEM32(esp + 0x138);
    eax = ebp + ebp * 2;
    ecx = MEM32(esp + eax * 4 + 0x7C);
    edx = MEM32(esp + eax * 4 + 0x80);
    eax = esp + eax * 4 + 0x7C;
    eax = MEM32(eax + 8);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;

loc_0010065A: ;
    MEM32(esi + 0x244) = ebp;
    ecx = MEM32(edi);
    MEM32(esi + 0x238) = ecx;
    edx = MEM32(edi + 4);
    ebx = MEM32(esp + 0x13C);
    MEM32(esi + 0x23C) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0x240) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x230) = eax;
    ecx = MEM32(esi + 0x244);
    _fa = (uint32_t)(MEM8(esp + ecx + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + ecx + 0x1C), 1 (8-bit) */
    MEM8(esi + 0x234) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006BA: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006C6: ;
    PUSH32(esp, 0x001006CBu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_001006CB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006D8: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax + eax * 2;
    edx = MEM32(esp + ecx * 4 + 0x110);
    ecx = esp + ecx * 4 + 0x110;
    MEM32(edi) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = ecx;
    ecx = MEM32(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00100716; /* jne: not equal / not zero */

loc_00100704: ;
    ecx = ecx | 0x4000000;
    MEM32(ebx) = ecx;
    eax = MEM32(ebx + 4);
    eax = eax | 0x4000000;
    goto loc_00100726;

loc_00100716: ;
    ecx = ecx | 0x2000000;
    MEM32(ebx) = ecx;
    eax = MEM32(ebx + 4);
    eax = eax | 0x2000000;

loc_00100726: ;
    MEM32(ebx + 4) = eax;
    edx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = edx;

loc_00100735: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010076D; /* jne: not equal / not zero */

loc_0010073A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010076D; /* jne: not equal / not zero */

loc_00100746: ;
    ecx = MEM32(esp + 0x140);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ebx + 8) = eax;
    MEM8(ecx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_0010076D: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ebx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_00100794: ;
    MEM32(esi + 0x244) = 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00100047
 * Original: 0x00100047 - 0x001007AD (1894 bytes, 494 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100047(void)
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

loc_00100047: ;
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0x104)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0010006Bu); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_0010006B: ;
    edx = MEM32(eax);
    ecx = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00100077u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00100077: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001002A6; /* je: equal / zero */

loc_0010007F: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001000C0; /* jne: not equal / not zero */

loc_00100087: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001000C0; /* jne: not equal / not zero */

loc_0010008F: ;
    PUSH32(esp, 0x00100094u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100094: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    edx = esp + 0x58;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001000B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001000B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001002A6; /* jg: greater (signed >) */

loc_001000C0: ;
    SET_LO8(eax, MEM8(esi + 0x2BC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100110; /* je: equal / zero */

loc_001000CA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100110; /* jne: not equal / not zero */

loc_001000D2: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100110; /* jne: not equal / not zero */

loc_001000DA: ;
    eax = MEM32(esi + 0x2B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001000F4; /* jne: not equal / not zero */

loc_001000E5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001000F4; /* jne: not equal / not zero */

loc_001000EA: ;
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) + 5;
    ebx = ebx + 5;
    goto loc_0010011E;

loc_001000F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_001000FD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_00100106: ;
    MEM32(esp + 0x44) = MEM32(esp + 0x44) + 5;
    ebx = ebx + 5;
    goto loc_0010011E;

loc_00100110: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010011E; /* je: equal / zero */

loc_00100115: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100251; /* jne: not equal / not zero */

loc_0010011E: ;
    PUSH32(esp, 0x00100123u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100123: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0010012Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010012A: ;
    fp_top() = fp_top() * MEMF(0x3C837C); /* fmul dword ptr [0x3c837c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    eax = MEM32(esi + 0x10);
    eax = eax + 0x20;
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_push(MEMF(esp + 0xEC)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00100181u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_00100181: ;
    edx = MEM32(eax);
    ecx = esp + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0010018Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0010018D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100251; /* je: equal / zero */

loc_00100195: ;
    PUSH32(esp, 0x0010019Au); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_0010019A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ecx;
    edx = esp + 0x70;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001001BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001001BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00100251; /* jg: greater (signed >) */

loc_001001C6: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    eax = MEM32(0x5BC9D0);
    ecx = MEM32(0x5BC9D4);
    ebp = edi;
    ebp = ebp >> 1;
    MEM32(esp + 0x74) = 0x42B40000;
    MEM32(esp + 0x78) = 0x43870000;
    fp_top() = fp_top() + MEMF(esp + ebp * 4 + 0x74); /* fadd dword ptr [esp + ebp*4 + 0x74] */
    edx = esp + 0xAC;
    MEM32(esp + 0xAC) = eax;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    PUSH32(esp, edx);
    eax = esp + 0x60;
    MEMF(esp + 0xB8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM8(esp + edi + 0x24) = 1;
    MEM32(esp + 0xB8) = ecx;
    PUSH32(esp, 0x0010021Fu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0010021F: ;
    esp = esp + 8;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0010022Eu); RECOMP_ABI_CALL(0x000FCE20u, sub_000FCE20); /* call 0x000FCE20 */

loc_0010022E: ;
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x60);
    eax = ebp + ebp * 2;
    ebp = MEM32(esp + 0x34);
    eax = esp + eax * 4 + 0x110;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_00100251: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = edi + edi * 2;
    eax = esp + eax * 4 + 0x7C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM8(esp + edi + 0x14) = 1;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0010027C; /* jne: not equal / not zero */

loc_00100276: ;
    ebp = edi;
    MEM32(esp + 0x34) = ebp;

loc_0010027C: ;
    eax = MEM32(esp + edi * 4 + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(esp + edi * 4 + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00100290; /* je: equal / zero */

loc_0010028B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100296; /* jne: not equal / not zero */

loc_00100290: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + edi * 4 + 0x38) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00100296: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x244) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001002A6; /* jne: not equal / not zero */

loc_0010029E: ;
    MEM32(esp + edi * 4 + 0x38) = MEM32(esp + edi * 4 + 0x38) + 8;
    ebx = ebx + 8;

loc_001002A6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000FFEB8(); return; } /* jl: less (signed <) */

loc_001002B0: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0x2BC) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_001002CB; /* jne: not equal / not zero */

loc_001002BF: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100376; /* je: equal / zero */

loc_001002CB: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00100376; /* jle: less or equal (signed <=) */

loc_001002D7: ;
    edx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    ecx = MEM32(esp + 0x80);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(edx + 8) = eax;
    eax = MEM32(esp + 0x138);
    edx = MEM32(esp + 0x84);
    MEM32(esi + 0x244) = 0;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(eax + 8) = edx;
    MEM32(esi + 0x238) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x23C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x240) = eax;
    ecx = MEM32(esi + 0x51C);
    eax = MEM32(esi + 0x10);
    MEM32(esi + 0x248) = ecx;
    MEM8(esi + 0x234) = 1;
    edx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x230) = edx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_00100376: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001004B3; /* je: equal / zero */

loc_00100382: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9784)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9784] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001004B3; /* jne: not equal / not zero */

loc_0010039D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00100408; /* jp: parity */

loc_001003AC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001004B3; /* je: equal / zero */

loc_001003B5: ;
    eax = MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001004B3; /* jle: less or equal (signed <=) */

loc_001003C1: ;
    ecx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    edx = MEM32(esp + 0x98);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x9C);
    MEM32(esi + 0x244) = 2;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x94);
    goto loc_00100453;

loc_00100408: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001004B3; /* jle: less or equal (signed <=) */

loc_00100414: ;
    ecx = MEM32(esp + 0x13C);
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    edx = MEM32(esp + 0x80);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x138);
    ecx = MEM32(esp + 0x84);
    MEM32(esi + 0x244) = 0;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x7C);

loc_00100453: ;
    MEM32(eax + 8) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x238) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x23C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x240) = edx;
    eax = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = eax;
    eax = MEM32(esi + 0x10);
    MEM8(esi + 0x234) = 1;
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x230) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_001004B3: ;
    SET_LO8(eax, MEM8(esi + 0x28A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010056E; /* je: equal / zero */

loc_001004C1: ;
    SET_LO8(eax, LO8(eax) & 0xDF);
    MEM8(esi + 0x28A) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0010054C; /* jne: not equal / not zero */

loc_001004D1: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010056E; /* je: equal / zero */

loc_001004DD: ;
    eax = MEM32(esp + 0x13C);
    MEM32(esi + 0x244) = 3;
    MEM32(eax) = MEM32(eax) | 0x2000000;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x2000000;

loc_001004FD: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0x244);
    ecx = MEM32(esp + 0x138);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + eax * 2;
    edx = MEM32(esp + eax * 4 + 0x110);
    eax = esp + eax * 4 + 0x110;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_0010054C: ;
    eax = MEM32(esp + 0x13C);
    MEM32(esi + 0x244) = 1;
    MEM32(eax) = MEM32(eax) | 0x4000000;
    ecx = MEM32(eax + 4);
    ecx = ecx | 0x4000000;
    goto loc_001004FD;

loc_0010056E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00100794; /* jle: less or equal (signed <=) */

loc_00100576: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D5D54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3d5d54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001005E0; /* jp: parity */

loc_00100587: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001005E0; /* je: equal / zero */

loc_0010058C: ;
    eax = MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001005E0; /* jle: less or equal (signed <=) */

loc_00100594: ;
    PUSH32(esp, 0x00100599u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_00100599: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001005E0; /* jne: not equal / not zero */

loc_001005A6: ;
    edi = MEM32(esp + 0x138);
    fp_push(MEMF(esp + 0x94)); /* fld float */
    edx = MEM32(esp + 0x98);
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x9C);
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;
    ecx = MEM32(esi + 0x51C);
    ebp = 2;
    MEM32(esi + 0x248) = ecx;
    goto loc_0010065A;

loc_001005E0: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001005E9u); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_001005E9: ;
    esp = esp + 8;
    ecx = 0; /* xor self */
    ebp = 0; /* xor self */

loc_001005F0: ;
    ecx = ecx + MEM32(esp + ebp * 4 + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00100602; /* jge: greater or equal (signed >=) */

loc_001005F8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001005F0; /* jl: less (signed <) */

loc_001005FE: ;
    ebp = MEM32(esp + 0x14);

loc_00100602: ;
    _fa = (uint32_t)(MEM32(esi + 0x244)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x244), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100629; /* je: equal / zero */

loc_0010060A: ;
    PUSH32(esp, 0x0010060Fu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_0010060F: ;
    fp_top() = fp_top() * MEMF(0x3CA9D8); /* fmul dword ptr [0x3ca9d8] */
    fp_top() = fp_top() + MEMF(esi + 0x51C); /* fadd dword ptr [esi + 0x51c] */
    fp_top() = fp_top() + MEMF(0x3C8828); /* fadd dword ptr [0x3c8828] */
    MEMF(esi + 0x248) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00100635;

loc_00100629: ;
    edx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = edx;

loc_00100635: ;
    edi = MEM32(esp + 0x138);
    eax = ebp + ebp * 2;
    ecx = MEM32(esp + eax * 4 + 0x7C);
    edx = MEM32(esp + eax * 4 + 0x80);
    eax = esp + eax * 4 + 0x7C;
    eax = MEM32(eax + 8);
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = eax;

loc_0010065A: ;
    MEM32(esi + 0x244) = ebp;
    ecx = MEM32(edi);
    MEM32(esi + 0x238) = ecx;
    edx = MEM32(edi + 4);
    ebx = MEM32(esp + 0x13C);
    MEM32(esi + 0x23C) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0x240) = eax;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x20);
    eax = eax + 0x20;
    MEM32(esi + 0x228) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x22C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x230) = eax;
    ecx = MEM32(esi + 0x244);
    _fa = (uint32_t)(MEM8(esp + ecx + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + ecx + 0x1C), 1 (8-bit) */
    MEM8(esi + 0x234) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006BA: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006C6: ;
    PUSH32(esp, 0x001006CBu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_001006CB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00100735; /* jne: not equal / not zero */

loc_001006D8: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax + eax * 2;
    edx = MEM32(esp + ecx * 4 + 0x110);
    ecx = esp + ecx * 4 + 0x110;
    MEM32(edi) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = ecx;
    ecx = MEM32(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00100716; /* jne: not equal / not zero */

loc_00100704: ;
    ecx = ecx | 0x4000000;
    MEM32(ebx) = ecx;
    eax = MEM32(ebx + 4);
    eax = eax | 0x4000000;
    goto loc_00100726;

loc_00100716: ;
    ecx = ecx | 0x2000000;
    MEM32(ebx) = ecx;
    eax = MEM32(ebx + 4);
    eax = eax | 0x2000000;

loc_00100726: ;
    MEM32(ebx + 4) = eax;
    edx = MEM32(esi + 0x51C);
    MEM32(esi + 0x248) = edx;

loc_00100735: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010076D; /* jne: not equal / not zero */

loc_0010073A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010076D; /* jne: not equal / not zero */

loc_00100746: ;
    ecx = MEM32(esp + 0x140);
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ebx + 8) = eax;
    MEM8(ecx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_0010076D: ;
    edx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edx + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x330), 0xFFFFFFFFu (32-bit) */
    eax = 0x3F800000;
    MEM32(esi + 0x1B0) = eax;
    MEM32(ebx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

loc_00100794: ;
    MEM32(esi + 0x244) = 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x124;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
