/**
 * X-Men Legends - Recompiled code chunk 75
 * Functions: 250 (0x003043A0 - 0x0030ABB0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003043A0
 * Original: 0x003043A0 - 0x003043BC (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003043A0(void)
{

loc_003043A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003043ADu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_003043AD: ;
    eax = 0; /* xor self */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003043C0
 * Original: 0x003043C0 - 0x003043CA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003043C0(void)
{

loc_003043C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(0x5BEC78) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003043D0
 * Original: 0x003043D0 - 0x003043E2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003043D0(void)
{

loc_003043D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003043D7u); RECOMP_ABI_CALL(0x00305160u, sub_00305160); /* call 0x00305160 */

loc_003043D7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003043DEu); RECOMP_ABI_CALL(0x003050B0u, sub_003050B0); /* call 0x003050B0 */

loc_003043DE: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003043F0
 * Original: 0x003043F0 - 0x00304400 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003043F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003043F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003043F8u); RECOMP_ABI_CALL(0x00313770u, sub_00313770); /* call 0x00313770 */

loc_003043F8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_00304400
 * Original: 0x00304400 - 0x00304419 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304400(void)
{

loc_00304400: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00304409u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00304409: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00304418u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304418: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304420
 * Original: 0x00304420 - 0x00304439 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304420(void)
{

loc_00304420: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00304429u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00304429: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00304438u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304438: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304440
 * Original: 0x00304440 - 0x00304467 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304440: ;
    eax = MEM32(0x5BEC74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304454; /* je: equal / zero */

loc_00304449: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304466; /* jne: not equal / not zero */

loc_00304454: ;
    PUSH32(esp, 0x3044B0);
    PUSH32(esp, 0x0030445Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0030445E: ;
    eax = MEM32(0x5BEC74);
    esp = esp + 4;

loc_00304466: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304470
 * Original: 0x00304470 - 0x0030447F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304470(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00304470: ;
    PUSH32(esp, 0x00304475u); RECOMP_ABI_CALL(0x00305670u, sub_00305670); /* call 0x00305670 */

loc_00304475: ;
    PUSH32(esp, 0x0030447Au); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0030447A: ;
    g_seh_ebp = ebp; sub_00305120(); return; /* tail jmp 0x00305120 */

}

/**
 * sub_00304480
 * Original: 0x00304480 - 0x003044A4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304480(void)
{

loc_00304480: ;
    esp = esp - 0x2C;
    ecx = esp;
    PUSH32(esp, 0x0030448Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0030448B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x42ADF8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_003044B0
 * Original: 0x003044B0 - 0x003044F4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003044B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003044B0: ;
    SET_LO8(eax, MEM8(0x5BEC79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003044C0; /* jne: not equal / not zero */

loc_003044B9: ;
    MEM8(0x5BEC79) = 1;

loc_003044C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3042D0);
    PUSH32(esp, 0x304480);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x42AECC);
    PUSH32(esp, 0x304440);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BEC74);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003044F0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_003044F0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00304500
 * Original: 0x00304500 - 0x00304526 (38 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304500(void)
{

loc_00304500: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x304420);
    PUSH32(esp, 0x304400);
    PUSH32(esp, 0x00304513u); RECOMP_ABI_CALL(0x00313FB0u, sub_00313FB0); /* call 0x00313FB0 */

loc_00304513: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00304522u); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_00304522: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304530
 * Original: 0x00304530 - 0x003045F2 (194 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304530(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00304530: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x64);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003045EA; /* je: equal / zero */

loc_00304546: ;
    ecx = MEM32(0x5BEC74);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00304554u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00304554: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003045EA; /* je: equal / zero */

loc_0030455C: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00304591; /* je: equal / zero */

loc_00304564: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030456Au); RECOMP_ABI_CALL(0x00305A90u, sub_00305A90); /* call 0x00305A90 */

loc_0030456A: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00304573u); RECOMP_ABI_CALL(0x00306410u, sub_00306410); /* call 0x00306410 */

loc_00304573: ;
    ebp = MEM32(esi + 0x14);
    esp = esp + 8;
    ecx = edi;
    PUSH32(esp, 0x00304580u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00304580: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0030458Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030458B: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;

loc_00304591: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003045BA; /* je: equal / zero */

loc_00304596: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030459Fu); RECOMP_ABI_CALL(0x003150D0u, sub_003150D0); /* call 0x003150D0 */

loc_0030459F: ;
    ebp = MEM32(esi + 0x1C);
    esp = esp + 4;
    ecx = edi;
    PUSH32(esp, 0x003045ACu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_003045AC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x003045B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003045B7: ;
    MEM32(esi + 0x1C) = ebx;

loc_003045BA: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x003045C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003045C3: ;
    ebp = MEM32(esi + 0xC);
    esp = esp + 4;
    ecx = edi;
    PUSH32(esp, 0x003045D0u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_003045D0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x003045DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003045DB: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003045EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304600
 * Original: 0x00304600 - 0x0030467D (125 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304600: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304676; /* je: equal / zero */

loc_0030460D: ;
    eax = MEM32(0x5BEC74);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0030461Au); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0030461A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304676; /* je: equal / zero */

loc_0030461E: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 2 (32-bit) */
    MEM32(edi + 0x50) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00304650; /* jne: not equal / not zero */

loc_0030462B: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00304634u); RECOMP_ABI_CALL(0x003060D0u, sub_003060D0); /* call 0x003060D0 */

loc_00304634: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030466F; /* je: equal / zero */

loc_0030463B: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00304646u); RECOMP_ABI_CALL(0x00306000u, sub_00306000); /* call 0x00306000 */

loc_00304646: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00304650: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00304659u); RECOMP_ABI_CALL(0x00315170u, sub_00315170); /* call 0x00315170 */

loc_00304659: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030466F; /* jne: not equal / not zero */

loc_00304661: ;
    esi = MEM32(esi + 8);
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ecx + 0x28); PUSH32(esp, 0x0030466Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030466C: ;
    esp = esp + 8;

loc_0030466F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00304676: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304680
 * Original: 0x00304680 - 0x003046FC (124 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304680: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003046F5; /* je: equal / zero */

loc_0030468D: ;
    eax = MEM32(0x5BEC74);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0030469Au); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0030469A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003046F5; /* je: equal / zero */

loc_0030469E: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 2 (32-bit) */
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x50) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003046D0; /* jne: not equal / not zero */

loc_003046AB: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003046B4u); RECOMP_ABI_CALL(0x003060D0u, sub_003060D0); /* call 0x003060D0 */

loc_003046B4: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003046EE; /* jne: not equal / not zero */

loc_003046BB: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003046C6u); RECOMP_ABI_CALL(0x00306000u, sub_00306000); /* call 0x00306000 */

loc_003046C6: ;
    esp = esp + 8;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003046D0: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003046D9u); RECOMP_ABI_CALL(0x00315170u, sub_00315170); /* call 0x00315170 */

loc_003046D9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003046EE; /* jne: not equal / not zero */

loc_003046E0: ;
    esi = MEM32(esi + 8);
    edx = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003046EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003046EB: ;
    esp = esp + 8;

loc_003046EE: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003046F5: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00304700
 * Original: 0x00304700 - 0x0030477E (126 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00304700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00304776; /* je: equal / zero */

loc_00304710: ;
    eax = MEM32(0x5BEC74);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0030471Du); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0030471D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00304776; /* je: equal / zero */

loc_00304721: ;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00304732; /* jne: not equal / not zero */

loc_00304727: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00304730u); RECOMP_ABI_CALL(0x003060D0u, sub_003060D0); /* call 0x003060D0 */

loc_00304730: ;
    goto loc_0030473B;

loc_00304732: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030473Bu); RECOMP_ABI_CALL(0x00315170u, sub_00315170); /* call 0x00315170 */

loc_0030473B: ;
    ecx = MEM32(edi + 0x50);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00304760; /* jne: not equal / not zero */

loc_0030474D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00304760; /* jne: not equal / not zero */

loc_00304751: ;
    eax = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0030475Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030475A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00304760: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00304776; /* jne: not equal / not zero */

loc_00304764: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00304776; /* je: equal / zero */

loc_00304768: ;
    edx = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00304770u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304770: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00304776: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304780
 * Original: 0x00304780 - 0x00304895 (277 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00304780: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x64);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003047A4; /* je: equal / zero */

loc_00304793: ;
    eax = MEM32(0x5BEC74);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003047A0u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_003047A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003047A6; /* jne: not equal / not zero */

loc_003047A4: ;
    esi = 0; /* xor self */

loc_003047A6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(esp + 0x5C) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0030488C; /* je: equal / zero */

loc_003047B4: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x003047BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003047BC: ;
    _fa = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x50), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304888; /* je: equal / zero */

loc_003047C6: ;
    PUSH32(esp, 0x003047CBu); RECOMP_ABI_CALL(0x003055A0u, sub_003055A0); /* call 0x003055A0 */

loc_003047CB: ;
    PUSH32(esp, 0x003047D0u); RECOMP_ABI_CALL(0x003052F0u, sub_003052F0); /* call 0x003052F0 */

loc_003047D0: ;
    ecx = MEM32(esi + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003047DEu); RECOMP_ABI_CALL(0x003161A0u, sub_003161A0); /* call 0x003161A0 */

loc_003047DE: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304825; /* je: equal / zero */

loc_003047E9: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x58);
    eax = MEM32(edi + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003047FFu); RECOMP_ABI_CALL(0x00316820u, sub_00316820); /* call 0x00316820 */

loc_003047FF: ;
    edx = MEM32(edi + 0x34);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00304811u); RECOMP_ABI_CALL(0x00316990u, sub_00316990); /* call 0x00316990 */

loc_00304811: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030481Au); RECOMP_ABI_CALL(0x00315D90u, sub_00315D90); /* call 0x00315D90 */

loc_0030481A: ;
    esp = esp + 0x1C;
    MEM8(esp + 0x60) = 1;
    POP32(esp, edi);
    goto loc_00304828;

loc_00304825: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00304828: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00304831u); RECOMP_ABI_CALL(0x00315700u, sub_00315700); /* call 0x00315700 */

loc_00304831: ;
    ecx = MEM32(esi + 0x24);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00304842; /* jbe: below or equal (unsigned <=) */

loc_0030483B: ;
    MEM32(esi + 0x28) = 0;

loc_00304842: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x0030484Eu); RECOMP_ABI_CALL(0x00315990u, sub_00315990); /* call 0x00315990 */

loc_0030484E: ;
    MEM32(esi + 0x20) = eax;
    esi = MEM32(esi + 8);
    edx = MEM32(esi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0030485Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030485A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304879; /* jne: not equal / not zero */

loc_00304862: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0030486Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030486C: ;
    SET_LO8(eax, MEM8(esp + 0x5C));
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

loc_00304879: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304888; /* jne: not equal / not zero */

loc_0030487E: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00304888u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304888: ;
    SET_LO8(eax, MEM8(esp + 0x5C));

loc_0030488C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003048A0
 * Original: 0x003048A0 - 0x003048D3 (51 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003048A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003048A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003048AF; /* je: equal / zero */

loc_003048AC: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003048AF: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003048CB; /* je: equal / zero */

loc_003048B6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_003048CB; /* jne: not equal / not zero */

loc_003048C6: ;
    PUSH32(esp, 0x003048CBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_003048CB: ;
    MEM32(esi + 0x64) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003048E0
 * Original: 0x003048E0 - 0x00304907 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003048E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003048E0: ;
    eax = MEM32(0x5BEC70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003048F4; /* je: equal / zero */

loc_003048E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304906; /* jne: not equal / not zero */

loc_003048F4: ;
    PUSH32(esp, 0x304BB0);
    PUSH32(esp, 0x003048FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_003048FE: ;
    eax = MEM32(0x5BEC70);
    esp = esp + 4;

loc_00304906: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304910
 * Original: 0x00304910 - 0x00304995 (133 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00304910(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_00304910: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BEC70);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00304920u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00304920: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x476640);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00304930u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00304930: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00304938u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00304938: ;
    MEM8(eax + 0x26) = 0;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00304947u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00304947: ;
    ebp = eax;
    PUSH32(esp, 0x0030494Eu); RECOMP_ABI_CALL(0x001AA8A0u, sub_001AA8A0); /* call 0x001AA8A0 */

loc_0030494E: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    PUSH32(esp, 0x00304960u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00304960: ;
    edx = MEM32(0x5BC554);
    PUSH32(esp, edi);
    PUSH32(esp, 0x476634);
    PUSH32(esp, 0x476628);
    PUSH32(esp, 0x47661C);
    ecx = esi;
    MEM32(eax + 0x38) = edx;
    MEM8(eax + 0x26) = 0;
    PUSH32(esp, 0x00304984u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00304984: ;
    PUSH32(esp, 0x304470);
    PUSH32(esp, 0x0030498Eu); RECOMP_ABI_CALL(0x00204190u, sub_00204190); /* call 0x00204190 */

loc_0030498E: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003049A0
 * Original: 0x003049A0 - 0x00304ACC (300 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003049A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003049A0: ;
    esp = esp - 0x20;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304AC1; /* jne: not equal / not zero */

loc_003049B1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x003049C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003049C1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003049CA; /* je: equal / zero */

loc_003049C7: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003049CA: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003049E6; /* je: equal / zero */

loc_003049D1: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_003049E6; /* jne: not equal / not zero */

loc_003049E1: ;
    PUSH32(esp, 0x003049E6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_003049E6: ;
    MEM32(edi + 0x10) = esi;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304A49; /* jne: not equal / not zero */

loc_003049F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x003049F7u); RECOMP_ABI_CALL(0x0033DA30u, sub_0033DA30); /* call 0x0033DA30 */

loc_003049F7: ;
    esi = eax;
    edx = MEM32(esi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00304A04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304A04: ;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00304A10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304A10: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304A2F; /* je: equal / zero */

loc_00304A1A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00304A2F; /* jne: not equal / not zero */

loc_00304A2A: ;
    PUSH32(esp, 0x00304A2Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00304A2F: ;
    MEM32(edi + 0x14) = esi;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00304A49; /* jne: not equal / not zero */

loc_00304A42: ;
    ecx = esi;
    PUSH32(esp, 0x00304A49u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00304A49: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304A62; /* je: equal / zero */

loc_00304A50: ;
    edx = MEM32(0x5D98B4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00304A5Eu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00304A5E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304A64; /* jne: not equal / not zero */

loc_00304A62: ;
    esi = 0; /* xor self */

loc_00304A64: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00304A6Du); RECOMP_ABI_CALL(0x00305140u, sub_00305140); /* call 0x00305140 */

loc_00304A6D: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = ecx;
    edx = esp + 0x10;
    ebx = 1;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x14) = 0x426FC28F;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x00304AB2u); RECOMP_ABI_CALL(0x00313880u, sub_00313880); /* call 0x00313880 */

loc_00304AB2: ;
    esp = esp + 8;
    POP32(esp, esi);
    MEM8(edi + 0xC) = LO8(ebx);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

loc_00304AC1: ;
    MEM8(edi + 0xC) = 1;
    POP32(esp, edi);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304AD0
 * Original: 0x00304AD0 - 0x00304AE8 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304AD0(void)
{

loc_00304AD0: ;
    PUSH32(esp, 0x3044B0);
    PUSH32(esp, 0x00304ADAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00304ADA: ;
    PUSH32(esp, 0x304BB0);
    PUSH32(esp, 0x00304AE4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00304AE4: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00304AF0
 * Original: 0x00304AF0 - 0x00304AF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304AF0(void)
{

loc_00304AF0: ;
    eax = MEM32(0x5BEC70);
    esp += 4; return; /* ret */

}

/**
 * sub_00304B00
 * Original: 0x00304B00 - 0x00304B58 (88 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304B00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304B1F; /* je: equal / zero */

loc_00304B0A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00304B1F; /* jne: not equal / not zero */

loc_00304B1A: ;
    PUSH32(esp, 0x00304B1Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00304B1F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304B3B; /* je: equal / zero */

loc_00304B26: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00304B3B; /* jne: not equal / not zero */

loc_00304B36: ;
    PUSH32(esp, 0x00304B3Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00304B3B: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304B56; /* je: equal / zero */

loc_00304B42: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00304B56; /* jne: not equal / not zero */

loc_00304B4E: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00304B56u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00304B56: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304B60
 * Original: 0x00304B60 - 0x00304BA2 (66 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304B60(void)
{

loc_00304B60: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00304B6Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00304B6D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x42AF00;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00304B9Bu); RECOMP_ABI_CALL(0x00304B00u, sub_00304B00); /* call 0x00304B00 */

loc_00304B9B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00304BB0
 * Original: 0x00304BB0 - 0x00304BF7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00304BB0: ;
    SET_LO8(eax, MEM8(0x5BEC79));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304BC0; /* jne: not equal / not zero */

loc_00304BB9: ;
    MEM8(0x5BEC79) = 1;

loc_00304BC0: ;
    PUSH32(esp, 0x47664C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x304910);
    PUSH32(esp, 0x304B60);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x3DC758);
    PUSH32(esp, 0x3048E0);
    PUSH32(esp, 0x302060);
    PUSH32(esp, 0x302C40);
    PUSH32(esp, 0x5BEC70);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00304BF3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00304BF3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00304C00
 * Original: 0x00304C00 - 0x00305096 (1174 bytes, 387 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304C00(void)
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

loc_00304C00: ;
    esp = esp - 0x88;
    SET_LO8(eax, MEM8(0x5BEC3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00304C37; /* je: equal / zero */

loc_00304C21: ;
    ebx = MEM32(esp + 0x9C);
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00304C35u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_00304C35: ;
    goto loc_00304C7F;

loc_00304C37: ;
    ecx = ebp;
    PUSH32(esp, 0x00304C3Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00304C3E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00304C44u); RECOMP_ABI_CALL(0x00231770u, sub_00231770); /* call 0x00231770 */

loc_00304C44: ;
    ebx = MEM32(esp + 0xA0);
    esi = eax;
    eax = MEM32(ebx + 0x14);
    edx = MEM32(esi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00304C5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304C5E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00304C68u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_00304C68: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00304C7F; /* jne: not equal / not zero */

loc_00304C78: ;
    ecx = esi;
    PUSH32(esp, 0x00304C7Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00304C7F: ;
    ecx = ebp;
    PUSH32(esp, 0x00304C86u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00304C86: ;
    PUSH32(esp, 0x3044B0);
    esi = eax;
    PUSH32(esp, 0x00304C92u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00304C92: ;
    ecx = MEM32(0x5BEC74);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00304CA1u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00304CA1: ;
    edi = MEM32(esp + 0x10);
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x00304CB3u); RECOMP_ABI_CALL(0x00307390u, sub_00307390); /* call 0x00307390 */

loc_00304CB3: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00304CDC; /* je: equal / zero */

loc_00304CBE: ;
    ecx = ebp;
    PUSH32(esp, 0x00304CC5u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00304CC5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x5000);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x00304CD6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304CD6: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304D1E; /* jne: not equal / not zero */

loc_00304CDC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304CF7; /* je: equal / zero */

loc_00304CE0: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304CF7; /* jne: not equal / not zero */

loc_00304CF0: ;
    ecx = esi;
    PUSH32(esp, 0x00304CF7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00304CF7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304D0F; /* je: equal / zero */

loc_00304CFB: ;
    ecx = MEM32(edi + -4);
    eax = edi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00304D0F; /* jne: not equal / not zero */

loc_00304D07: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00304D0Fu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00304D0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 8; return; /* ret 4 */

loc_00304D1E: ;
    eax = 0; /* xor self */
    ecx = 0x1400;
    edi = ebp;
    PUSH32(esp, ebp);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0x24);
    PUSH32(esp, 0xA);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00304D36u); RECOMP_ABI_CALL(0x00307140u, sub_00307140); /* call 0x00307140 */

loc_00304D36: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00304D3Cu); RECOMP_ABI_CALL(0x003072D0u, sub_003072D0); /* call 0x003072D0 */

loc_00304D3C: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304D61; /* je: equal / zero */

loc_00304D44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304D61; /* je: equal / zero */

loc_00304D49: ;
    PUSH32(esp, 0x00304D4Eu); RECOMP_ABI_CALL(0x00305300u, sub_00305300); /* call 0x00305300 */

loc_00304D4E: ;
    PUSH32(esp, 0x00304D53u); RECOMP_ABI_CALL(0x003052F0u, sub_003052F0); /* call 0x003052F0 */

loc_00304D53: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00304D59u); RECOMP_ABI_CALL(0x003072D0u, sub_003072D0); /* call 0x003072D0 */

loc_00304D59: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304D44; /* jne: not equal / not zero */

loc_00304D61: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00304D67u); RECOMP_ABI_CALL(0x003072F0u, sub_003072F0); /* call 0x003072F0 */

loc_00304D67: ;
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00304D77u); RECOMP_ABI_CALL(0x00314220u, sub_00314220); /* call 0x00314220 */

loc_00304D77: ;
    eax = MEM32(esp + 0x64);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304DF0; /* jne: not equal / not zero */

loc_00304D82: ;
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00304D92u); RECOMP_ABI_CALL(0x00306C60u, sub_00306C60); /* call 0x00306C60 */

loc_00304D92: ;
    ecx = MEM32(esp + 0x28);
    esp = esp + 0xC;
    PUSH32(esp, 0x00304D9Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00304D9E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00304DA9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304DA9: ;
    eax = MEM32(esp + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304DCA; /* jne: not equal / not zero */

loc_00304DB2: ;
    ebp = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x5C);
    MEM32(ebx + 0x18) = 2;
    MEM8(esp + 0x17) = LO8(eax);
    goto loc_00304E4C;

loc_00304DCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = esp + 0x18;
    if (CMP_NE(_fa, _fb)) goto loc_00304E24; /* jne: not equal / not zero */

loc_00304DD3: ;
    PUSH32(esp, 0x00304DD8u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00304DD8: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00304DE1u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_00304DE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 8; return; /* ret 4 */

loc_00304DF0: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x00304DF9u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00304DF9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00304E04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304E04: ;
    edx = MEM32(esp + 0x5C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304E12; /* jne: not equal / not zero */

loc_00304E0C: ;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304E20; /* je: equal / zero */

loc_00304E12: ;
    ebp = MEM32(esp + 0x60);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304E41; /* jne: not equal / not zero */

loc_00304E1A: ;
    _fa = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304E41; /* jne: not equal / not zero */

loc_00304E20: ;
    ecx = esp + 0x18;

loc_00304E24: ;
    PUSH32(esp, 0x00304E29u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00304E29: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00304E32u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_00304E32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 8; return; /* ret 4 */

loc_00304E41: ;
    MEM32(ebx + 0x20) = edx;
    MEM32(ebx + 0x24) = ebp;
    MEM8(esp + 0x17) = 0;

loc_00304E4C: ;
    eax = 0; /* xor self */
    ecx = 0xC;
    edi = esp + 0x24;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ebx + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = 1;
    MEM32(esp + 0x24) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00304E73; /* jne: not equal / not zero */

loc_00304E6E: ;
    eax = 0x5B8D80;

loc_00304E73: ;
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = ebp;
    MEM32(esp + 0x38) = 2;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0x00304E95u); RECOMP_ABI_CALL(0x003141E0u, sub_003141E0); /* call 0x003141E0 */

loc_00304E95: ;
    ecx = MEM32(esp + 0x20);
    esp = esp + 4;
    MEM32(esp + 0x40) = eax;
    edi = eax;
    PUSH32(esp, 0x00304EA7u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00304EA7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00304EB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304EB2: ;
    MEM32(esp + 0x3C) = eax;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00304EC0u); RECOMP_ABI_CALL(0x00314BD0u, sub_00314BD0); /* call 0x00314BD0 */

loc_00304EC0: ;
    MEM32(esi + 8) = eax;
    ecx = MEM32(esp + 0x40);
    MEM32(esi + 0xC) = ecx;
    eax = MEM32(ebx + 0x2C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00304F13; /* je: equal / zero */

loc_00304ED9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304EEF; /* je: equal / zero */

loc_00304EDD: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    goto loc_00304EF5;

loc_00304EEF: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_00304EF5: ;
    fp_top() = fp_top() * MEMF(0x42AF74); /* fmul dword ptr [0x42af74] */
    edi = MEM32(esi + 8);
    ebp = MEM32(edi);
    fp_top() = fp_top() - MEMF(0x42AF74); /* fsub dword ptr [0x42af74] */
    PUSH32(esp, 0x00304F0Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00304F0B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebp + 0x2C); PUSH32(esp, 0x00304F10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304F10: ;
    esp = esp + 8;

loc_00304F13: ;
    _fa = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00304FB2; /* jne: not equal / not zero */

loc_00304F1D: ;
    PUSH32(esp, 0x00304F22u); RECOMP_ABI_CALL(0x00316D40u, sub_00316D40); /* call 0x00316D40 */

loc_00304F22: ;
    ecx = MEM32(esp + 0x1C);
    ebp = eax;
    PUSH32(esp, 0x00304F2Du); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00304F2D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00304F38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304F38: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304F4F; /* je: equal / zero */

loc_00304F3E: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00304F49u); RECOMP_ABI_CALL(0x003150A0u, sub_003150A0); /* call 0x003150A0 */

loc_00304F49: ;
    esp = esp + 0xC;
    MEM32(esi + 0x1C) = edi;

loc_00304F4F: ;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304F64; /* je: equal / zero */

loc_00304F57: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00304F61u); RECOMP_ABI_CALL(0x00316D60u, sub_00316D60); /* call 0x00316D60 */

loc_00304F61: ;
    esp = esp + 8;

loc_00304F64: ;
    eax = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00304FC7; /* je: equal / zero */

loc_00304F70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304F86; /* je: equal / zero */

loc_00304F74: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    goto loc_00304F8C;

loc_00304F86: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_00304F8C: ;
    fp_top() = fp_top() * MEMF(0x42AF74); /* fmul dword ptr [0x42af74] */
    fp_top() = fp_top() - MEMF(0x42AF74); /* fsub dword ptr [0x42af74] */
    PUSH32(esp, 0x00304F9Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00304F9D: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00304FA7u); RECOMP_ABI_CALL(0x00316CD0u, sub_00316CD0); /* call 0x00316CD0 */

loc_00304FA7: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00304FB0u); RECOMP_ABI_CALL(0x00315070u, sub_00315070); /* call 0x00315070 */

loc_00304FB0: ;
    goto loc_00304FC4;

loc_00304FB2: ;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00304FC7; /* je: equal / zero */

loc_00304FBA: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00304FC4u); RECOMP_ABI_CALL(0x00315950u, sub_00315950); /* call 0x00315950 */

loc_00304FC4: ;
    esp = esp + 8;

loc_00304FC7: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00304FF6; /* jne: not equal / not zero */

loc_00304FCF: ;
    SET_LO8(eax, MEM8(ebx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00304FE6; /* je: equal / zero */

loc_00304FD6: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00304FE4u); RECOMP_ABI_CALL(0x00316C10u, sub_00316C10); /* call 0x00316C10 */

loc_00304FE4: ;
    goto loc_00305049;

loc_00304FE6: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x00304FF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00304FF4: ;
    goto loc_00305049;

loc_00304FF6: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x00304FFFu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00304FFF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x231E4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0030500Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030500E: ;
    PUSH32(esp, 0x231E4);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x0030501Eu); RECOMP_ABI_CALL(0x00306590u, sub_00306590); /* call 0x00306590 */

loc_0030501E: ;
    MEM32(esi + 0x10) = eax;
    SET_LO8(eax, MEM8(ebx + 0x1C));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030503B; /* je: equal / zero */

loc_0030502B: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305039u); RECOMP_ABI_CALL(0x00306920u, sub_00306920); /* call 0x00306920 */

loc_00305039: ;
    goto loc_00305049;

loc_0030503B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305049u); RECOMP_ABI_CALL(0x00306800u, sub_00306800); /* call 0x00306800 */

loc_00305049: ;
    esp = esp + 8;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00305054u); RECOMP_ABI_CALL(0x003048A0u, sub_003048A0); /* call 0x003048A0 */

loc_00305054: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0030506B; /* jne: not equal / not zero */

loc_00305064: ;
    ecx = esi;
    PUSH32(esp, 0x0030506Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0030506B: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305087; /* je: equal / zero */

loc_00305073: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00305087; /* jne: not equal / not zero */

loc_0030507F: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305087u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00305087: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003050A0
 * Original: 0x003050A0 - 0x003050AC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003050A0(void)
{

loc_003050A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003050AAu); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_003050AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003050B0
 * Original: 0x003050B0 - 0x00305115 (101 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003050B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003050B0: ;
    PUSH32(esp, 0x003050B5u); RECOMP_ABI_CALL(0x00309690u, sub_00309690); /* call 0x00309690 */

loc_003050B5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3050A0);
    PUSH32(esp, 0x003050C1u); RECOMP_ABI_CALL(0x00308DC0u, sub_00308DC0); /* call 0x00308DC0 */

loc_003050C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x309150);
    PUSH32(esp, 0x42AF7C);
    PUSH32(esp, 0x003050D2u); RECOMP_ABI_CALL(0x003090F0u, sub_003090F0); /* call 0x003090F0 */

loc_003050D2: ;
    PUSH32(esp, 0x003050D7u); RECOMP_ABI_CALL(0x003075B0u, sub_003075B0); /* call 0x003075B0 */

loc_003050D7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3075A0);
    PUSH32(esp, 0x42AF78);
    PUSH32(esp, 0x003050E8u); RECOMP_ABI_CALL(0x003090F0u, sub_003090F0); /* call 0x003090F0 */

loc_003050E8: ;
    PUSH32(esp, 0x42AF78);
    PUSH32(esp, 0x003050F2u); RECOMP_ABI_CALL(0x00308F10u, sub_00308F10); /* call 0x00308F10 */

loc_003050F2: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305108; /* je: equal / zero */

loc_003050FD: ;
    eax = MEM32(eax);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00307F50(); return; /* tail jmp 0x00307F50 */

loc_00305108: ;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00307F50(); return; /* tail jmp 0x00307F50 */

}

/**
 * sub_00305120
 * Original: 0x00305120 - 0x00305138 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305120: ;
    PUSH32(esp, 0x00305125u); RECOMP_ABI_CALL(0x003096A0u, sub_003096A0); /* call 0x003096A0 */

loc_00305125: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030512E; /* jle: less or equal (signed <=) */

loc_00305129: ;
    PUSH32(esp, 0x0030512Eu); RECOMP_ABI_CALL(0x003096B0u, sub_003096B0); /* call 0x003096B0 */

loc_0030512E: ;
    PUSH32(esp, 0x00305133u); RECOMP_ABI_CALL(0x00308930u, sub_00308930); /* call 0x00308930 */

loc_00305133: ;
    g_seh_ebp = ebp; sub_00308820(); return; /* tail jmp 0x00308820 */

}

/**
 * sub_00305140
 * Original: 0x00305140 - 0x00305150 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305140(void)
{

loc_00305140: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030514Cu); RECOMP_ABI_CALL(0x00309740u, sub_00309740); /* call 0x00309740 */

loc_0030514C: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00305150
 * Original: 0x00305150 - 0x00305155 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305150(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305150: ;
    g_seh_ebp = ebp; sub_003454C7(); return; /* tail jmp 0x003454C7 */

}

/**
 * sub_00305160
 * Original: 0x00305160 - 0x0030516F (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305160: ;
    MEM32(0x5BECD8) = 0x305150;
    g_seh_ebp = ebp; sub_00305780(); return; /* tail jmp 0x00305780 */

}

/**
 * sub_00305170
 * Original: 0x00305170 - 0x00305187 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305170: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F5A00);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x0030517Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030517B: ;
    eax = MEM32(0x5BEC98);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5BEC98) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00305190
 * Original: 0x00305190 - 0x003051A7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305190: ;
    eax = MEM32(0x5BEC98);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F5A00);
    MEM32(0x5BEC98) = eax;
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x003051A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003051A6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003051B0
 * Original: 0x003051B0 - 0x003051C5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003051B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003051B0: ;
    ecx = MEM32(esp + 4);
    eax = 1;
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = _tmp; }
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003051D0
 * Original: 0x003051D0 - 0x00305239 (105 bytes, 30 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003051D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003051D0: ;
    PUSH32(esp, esi);
    MEM32(0x5BEC9C) = 1;
    esi = 0; /* xor self */
    /* nop */

loc_003051E0: ;
    eax = MEM32(0x5BEC80);
    ecx = MEM32(0x5F59E8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003051F2u); RECOMP_ABI_CALL(0x0019EF00u, sub_0019EF00); /* call 0x0019EF00 */

loc_003051F2: ;
    edx = MEM32(0x5F59E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003051FEu); RECOMP_ABI_CALL(0x0019F012u, sub_0019F012); /* call 0x0019F012 */

loc_003051FE: ;
    eax = MEM32(0x5BEC9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305210; /* je: equal / zero */

loc_00305207: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2DC6C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2DC6C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003051E0; /* jl: less (signed <) */

loc_00305210: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2DC6C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2DC6C0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00305226; /* jne: not equal / not zero */

loc_00305219: ;
    PUSH32(esp, 0x42AF80);
    PUSH32(esp, 0x00305223u); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_00305223: ;
    esp = esp + 4;

loc_00305226: ;
    eax = MEM32(0x5BEC94);
    ecx = MEM32(0x5F59E8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305238u); RECOMP_ABI_CALL(0x0019EF00u, sub_0019EF00); /* call 0x0019EF00 */

loc_00305238: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305240
 * Original: 0x00305240 - 0x003052DE (158 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00305240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305240: ;
    eax = MEM32(0x5BECD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003052CF; /* jne: not equal / not zero */

loc_0030524D: ;
    PUSH32(esp, esi);
    esi = 1;

loc_00305253: ;
    eax = MEM32(0x5BECA8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5BECA8) = eax;
    PUSH32(esp, 0x00305263u); RECOMP_ABI_CALL(0x0030BC50u, sub_0030BC50); /* call 0x0030BC50 */

loc_00305263: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030526F; /* je: equal / zero */

loc_00305267: ;
    _fa = (uint32_t)(MEM32(0x5BEC9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5BEC9C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003052BA; /* jne: not equal / not zero */

loc_0030526F: ;
    _fa = (uint32_t)(MEM32(0x5BEC9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5BEC9C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305294; /* jne: not equal / not zero */

loc_00305277: ;
    MEM32(0x5BEC9C) = 0;
    ecx = MEM32(0x5BEC94);
    edx = MEM32(0x5F59E8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305294u); RECOMP_ABI_CALL(0x0019EF00u, sub_0019EF00); /* call 0x0019EF00 */

loc_00305294: ;
    eax = MEM32(0x5BECB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003052AE; /* je: equal / zero */

loc_0030529D: ;
    eax = MEM32(0x5BECB4);
    ecx = MEM32(0x5BECB0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x003052ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003052AB: ;
    esp = esp + 4;

loc_003052AE: ;
    edx = MEM32(0x5F59E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003052BAu); RECOMP_ABI_CALL(0x0019EFECu, sub_0019EFEC); /* call 0x0019EFEC */

loc_003052BA: ;
    eax = MEM32(0x5BECD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305253; /* je: equal / zero */

loc_003052C3: ;
    MEM32(0x5BECD4) = esi;
    POP32(esp, esi);
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_003052CF: ;
    MEM32(0x5BECD4) = 1;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003052E0
 * Original: 0x003052E0 - 0x003052EC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003052E0(void)
{
    int _cf = 0; /* carry flag */

loc_003052E0: ;
    eax = MEM32(0x5BEC7C);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003052F0
 * Original: 0x003052F0 - 0x003052F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003052F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003052F0: ;
    g_seh_ebp = ebp; sub_0030BC40(); return; /* tail jmp 0x0030BC40 */

}

/**
 * sub_00305300
 * Original: 0x00305300 - 0x00305305 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305300: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(0x0035B040u); return; /* manual tail jmp 0x0035B040 */

}

/**
 * sub_00305310
 * Original: 0x00305310 - 0x00305491 (385 bytes, 112 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305310: ;
    eax = MEM32(0x5F5A1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00305399; /* je: equal / zero */

loc_00305326: ;
    esi = 0; /* xor self */
    goto loc_00305330;

    /* nop */

loc_00305330: ;
    MEM32(0x5BECC0) = edi;
    eax = MEM32(0x5F5A1C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305343u); RECOMP_ABI_CALL(0x0019EF00u, sub_0019EF00); /* call 0x0019EF00 */

loc_00305343: ;
    ecx = MEM32(0x5F5A1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030534Fu); RECOMP_ABI_CALL(0x0019F012u, sub_0019F012); /* call 0x0019F012 */

loc_0030534F: ;
    edx = MEM32(0x5F5A1C);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305360u); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_00305360: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030536D; /* jne: not equal / not zero */

loc_00305367: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305330; /* jl: less (signed <) */

loc_0030536D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305382; /* jne: not equal / not zero */

loc_00305372: ;
    PUSH32(esp, 0x42B018);
    PUSH32(esp, 0x0030537Cu); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030537C: ;
    esp = esp + 4;
    ebx = ebx | 0xFFFFFFFFu;

loc_00305382: ;
    MEM32(0x5BECC4) = ebp;
    MEM32(0x5BECC0) = ebp;
    eax = MEM32(0x5F5A1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305399u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00305399: ;
    _fa = (uint32_t)(MEM32(0x5F5A30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F5A30), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305418; /* je: equal / zero */

loc_003053A1: ;
    esi = 0; /* xor self */
    goto loc_003053B0;

    /* nop */
    /* nop */

loc_003053B0: ;
    MEM32(0x5BECC8) = edi;
    ecx = MEM32(0x5F5A30);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003053C4u); RECOMP_ABI_CALL(0x0019EF00u, sub_0019EF00); /* call 0x0019EF00 */

loc_003053C4: ;
    edx = MEM32(0x5F5A30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003053D0u); RECOMP_ABI_CALL(0x0019F012u, sub_0019F012); /* call 0x0019F012 */

loc_003053D0: ;
    eax = MEM32(0x5F5A30);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003053E0u); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_003053E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003053ED; /* jne: not equal / not zero */

loc_003053E7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003053B0; /* jl: less (signed <) */

loc_003053ED: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305400; /* jne: not equal / not zero */

loc_003053F2: ;
    PUSH32(esp, 0x42AFE8);
    PUSH32(esp, 0x003053FCu); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_003053FC: ;
    esp = esp + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00305400: ;
    MEM32(0x5BECCC) = ebp;
    MEM32(0x5BECC8) = ebp;
    ecx = MEM32(0x5F5A30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305418u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00305418: ;
    _fa = (uint32_t)(MEM32(0x5F59E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5F59E8), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030548A; /* je: equal / zero */

loc_00305420: ;
    esi = 0; /* xor self */

loc_00305422: ;
    MEM32(0x5BECD0) = edi;
    edx = MEM32(0x5F59E8);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305436u); RECOMP_ABI_CALL(0x0019EF00u, sub_0019EF00); /* call 0x0019EF00 */

loc_00305436: ;
    eax = MEM32(0x5F59E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305441u); RECOMP_ABI_CALL(0x0019F012u, sub_0019F012); /* call 0x0019F012 */

loc_00305441: ;
    ecx = MEM32(0x5F59E8);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305452u); RECOMP_ABI_CALL(0x0019F557u, sub_0019F557); /* call 0x0019F557 */

loc_00305452: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030545F; /* jne: not equal / not zero */

loc_00305459: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305422; /* jl: less (signed <) */

loc_0030545F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305472; /* jne: not equal / not zero */

loc_00305464: ;
    PUSH32(esp, 0x42AFB4);
    PUSH32(esp, 0x0030546Eu); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030546E: ;
    esp = esp + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00305472: ;
    MEM32(0x5BECD4) = ebp;
    MEM32(0x5BECD0) = ebp;
    edx = MEM32(0x5F59E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030548Au); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_0030548A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003054A0
 * Original: 0x003054A0 - 0x00305594 (244 bytes, 78 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003054A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003054A0: ;
    eax = MEM32(0x5BEC88);
    ecx = MEM32(0x5F5A1C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    PUSH32(esp, 0x003054B5u); RECOMP_ABI_CALL(0x0019EF00u, sub_0019EF00); /* call 0x0019EF00 */

loc_003054B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003054C9; /* jne: not equal / not zero */

loc_003054B9: ;
    PUSH32(esp, 0x42B220);
    PUSH32(esp, 0x003054C3u); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_003054C3: ;
    esp = esp + 4;
    esi = esi | 0xFFFFFFFFu;

loc_003054C9: ;
    edx = MEM32(0x5BEC8C);
    eax = MEM32(0x5F5A30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003054DBu); RECOMP_ABI_CALL(0x0019EF00u, sub_0019EF00); /* call 0x0019EF00 */

loc_003054DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003054ED; /* jne: not equal / not zero */

loc_003054DF: ;
    PUSH32(esp, 0x42B1D8);
    PUSH32(esp, 0x003054E9u); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_003054E9: ;
    esp = esp + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003054ED: ;
    ecx = MEM32(0x5BEC94);
    edx = MEM32(0x5F59E8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305500u); RECOMP_ABI_CALL(0x0019EF00u, sub_0019EF00); /* call 0x0019EF00 */

loc_00305500: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305512; /* jne: not equal / not zero */

loc_00305504: ;
    PUSH32(esp, 0x42B190);
    PUSH32(esp, 0x0030550Eu); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030550E: ;
    esp = esp + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00305512: ;
    eax = MEM32(0x5F5A1C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030551Fu); RECOMP_ABI_CALL(0x0019EFA6u, sub_0019EFA6); /* call 0x0019EFA6 */

loc_0030551F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305531; /* jne: not equal / not zero */

loc_00305523: ;
    PUSH32(esp, 0x42B140);
    PUSH32(esp, 0x0030552Du); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030552D: ;
    esp = esp + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00305531: ;
    ecx = MEM32(0x5F5A30);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030553Fu); RECOMP_ABI_CALL(0x0019EFA6u, sub_0019EFA6); /* call 0x0019EFA6 */

loc_0030553F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305551; /* jne: not equal / not zero */

loc_00305543: ;
    PUSH32(esp, 0x42B0F0);
    PUSH32(esp, 0x0030554Du); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030554D: ;
    esp = esp + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00305551: ;
    edx = MEM32(0x5F59E8);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030555Fu); RECOMP_ABI_CALL(0x0019EFA6u, sub_0019EFA6); /* call 0x0019EFA6 */

loc_0030555F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305571; /* jne: not equal / not zero */

loc_00305563: ;
    PUSH32(esp, 0x42B0A0);
    PUSH32(esp, 0x0030556Du); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030556D: ;
    esp = esp + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00305571: ;
    eax = MEM32(0x5F5A2C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030557Eu); RECOMP_ABI_CALL(0x0019EFA6u, sub_0019EFA6); /* call 0x0019EFA6 */

loc_0030557E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305590; /* jne: not equal / not zero */

loc_00305582: ;
    PUSH32(esp, 0x42B050);
    PUSH32(esp, 0x0030558Cu); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030558C: ;
    esp = esp + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00305590: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003055A0
 * Original: 0x003055A0 - 0x003055A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003055A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003055A0: ;
    g_seh_ebp = ebp; sub_00305300(); return; /* tail jmp 0x00305300 */

}

/**
 * sub_003055B0
 * Original: 0x003055B0 - 0x00305622 (114 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003055B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003055B0: ;
    eax = MEM32(0x5BECC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305613; /* jne: not equal / not zero */

loc_003055B9: ;
    /* nop */

loc_003055C0: ;
    PUSH32(esp, 0x003055C5u); RECOMP_ABI_CALL(0x003055A0u, sub_003055A0); /* call 0x003055A0 */

loc_003055C5: ;
    PUSH32(esp, 0x003055CAu); RECOMP_ABI_CALL(0x0019F08Eu, sub_0019F08E); /* call 0x0019F08E */

loc_003055CA: ;
    eax = MEM32(0x5BECA4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5BECA4) = eax;
    PUSH32(esp, 0x003055DAu); RECOMP_ABI_CALL(0x0030BAA0u, sub_0030BAA0); /* call 0x0030BAA0 */

loc_003055DA: ;
    PUSH32(esp, 0x003055DFu); RECOMP_ABI_CALL(0x0030BC20u, sub_0030BC20); /* call 0x0030BC20 */

loc_003055DF: ;
    PUSH32(esp, 0x003055E4u); RECOMP_ABI_CALL(0x0030BDA0u, sub_0030BDA0); /* call 0x0030BDA0 */

loc_003055E4: ;
    ecx = MEM32(0x5F59E8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003055F0u); RECOMP_ABI_CALL(0x0019F012u, sub_0019F012); /* call 0x0019F012 */

loc_003055F0: ;
    eax = MEM32(0x5BECB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030560A; /* je: equal / zero */

loc_003055F9: ;
    edx = MEM32(0x5BECB4);
    eax = MEM32(0x5BECB0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00305607u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00305607: ;
    esp = esp + 4;

loc_0030560A: ;
    eax = MEM32(0x5BECC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003055C0; /* je: equal / zero */

loc_00305613: ;
    MEM32(0x5BECC4) = 1;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305630
 * Original: 0x00305630 - 0x00305667 (55 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00305630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305630: ;
    eax = MEM32(0x5BECC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305658; /* jne: not equal / not zero */

loc_00305639: ;
    /* nop */

loc_00305640: ;
    PUSH32(esp, 0x00305645u); RECOMP_ABI_CALL(0x003055A0u, sub_003055A0); /* call 0x003055A0 */

loc_00305645: ;
    PUSH32(esp, 0x0030564Au); RECOMP_ABI_CALL(0x0019F08Eu, sub_0019F08E); /* call 0x0019F08E */

loc_0030564A: ;
    PUSH32(esp, 0x0030564Fu); RECOMP_ABI_CALL(0x0030BC30u, sub_0030BC30); /* call 0x0030BC30 */

loc_0030564F: ;
    eax = MEM32(0x5BECC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305640; /* je: equal / zero */

loc_00305658: ;
    MEM32(0x5BECCC) = 1;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00305670
 * Original: 0x00305670 - 0x00305688 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305670(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305670: ;
    eax = MEM32(0x5BEC7C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x5BEC7C) = eax;
    if ((_fa != 0)) goto loc_00305687; /* jne: not equal / not zero */

loc_0030567D: ;
    PUSH32(esp, 0x00305682u); RECOMP_ABI_CALL(0x00305310u, sub_00305310); /* call 0x00305310 */

loc_00305682: ;
    g_seh_ebp = ebp; sub_0030BCF0(); return; /* tail jmp 0x0030BCF0 */

loc_00305687: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00305690
 * Original: 0x00305690 - 0x00305777 (231 bytes, 65 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00305690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305690: ;
    eax = MEM32(0x5BECD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305774; /* je: equal / zero */

loc_0030569D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F5A24);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3055B0);
    PUSH32(esp, 0x3000);
    PUSH32(esp, 0);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003056B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003056B4: ;
    MEM32(0x5F5A1C) = eax;
    eax = MEM32(0x5F5A1C);
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003056D6; /* jne: not equal / not zero */

loc_003056C5: ;
    PUSH32(esp, 0x42B340);
    PUSH32(esp, 0x003056CFu); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_003056CF: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_003056D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F5A20);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x305630);
    PUSH32(esp, 0x3000);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(0x5BECD8); PUSH32(esp, 0x003056F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003056F1: ;
    MEM32(0x5F5A30) = eax;
    eax = MEM32(0x5F5A30);
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305713; /* jne: not equal / not zero */

loc_00305702: ;
    PUSH32(esp, 0x42B2F8);
    PUSH32(esp, 0x0030570Cu); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030570C: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00305713: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F5A28);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x305240);
    PUSH32(esp, 0x3000);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(0x5BECD8); PUSH32(esp, 0x0030572Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030572E: ;
    MEM32(0x5F59E8) = eax;
    eax = MEM32(0x5F59E8);
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305750; /* jne: not equal / not zero */

loc_0030573F: ;
    PUSH32(esp, 0x42B2B0);
    PUSH32(esp, 0x00305749u); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_00305749: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00305750: ;
    MEM32(0x5F5A2C) = 0xFFFFFFFEu;
    eax = MEM32(0x5F5A2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305774; /* jne: not equal / not zero */

loc_00305763: ;
    PUSH32(esp, 0x42B268);
    PUSH32(esp, 0x0030576Du); RECOMP_ABI_CALL(0x0030BB20u, sub_0030BB20); /* call 0x0030BB20 */

loc_0030576D: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00305774: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00305780
 * Original: 0x00305780 - 0x003058BC (316 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305780: ;
    eax = MEM32(0x5BEC7C);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003058AF; /* jne: not equal / not zero */

loc_00305790: ;
    MEM32(0x5BECB8) = esi;
    MEM32(0x5BECBC) = esi;
    MEM32(0x5BECC0) = esi;
    MEM32(0x5BECC4) = esi;
    MEM32(0x5BECD0) = esi;
    MEM32(0x5BECD4) = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F5A00);
    MEM32(0x5BECA4) = esi;
    { uint32_t _icall_target = MEM32(0x3C6CC0); PUSH32(esp, 0x003057C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003057C5: ;
    PUSH32(esp, 0x003057CAu); RECOMP_ABI_CALL(0x0030BCD0u, sub_0030BCD0); /* call 0x0030BCD0 */

loc_003057CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x305170);
    PUSH32(esp, 0x003057D5u); RECOMP_ABI_CALL(0x0030BB70u, sub_0030BB70); /* call 0x0030BB70 */

loc_003057D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x305190);
    PUSH32(esp, 0x003057E0u); RECOMP_ABI_CALL(0x0030BB90u, sub_0030BB90); /* call 0x0030BB90 */

loc_003057E0: ;
    PUSH32(esp, 0x3051B0);
    PUSH32(esp, 0x003057EAu); RECOMP_ABI_CALL(0x0030BD20u, sub_0030BD20); /* call 0x0030BD20 */

loc_003057EA: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030582A; /* jne: not equal / not zero */

loc_003057F5: ;
    MEM32(0x5BEC90) = esi;
    eax = 1;
    MEM32(0x5BEC80) = 0xF;
    MEM32(0x5BEC84) = 2;
    MEM32(0x5BEC88) = eax;
    MEM32(0x5BEC8C) = eax;
    MEM32(0x5BEC94) = 0xFFFFFFFEu;
    goto loc_0030585F;

loc_0030582A: ;
    ecx = MEM32(eax);
    MEM32(0x5BEC80) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x5BEC84) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x5BEC88) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x5BEC8C) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x5BEC90) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x5BEC94) = edx;

loc_0030585F: ;
    PUSH32(esp, 0x00305864u); RECOMP_ABI_CALL(0x00305690u, sub_00305690); /* call 0x00305690 */

loc_00305864: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00305871; /* jl: less (signed <) */

loc_00305868: ;
    PUSH32(esp, 0x0030586Du); RECOMP_ABI_CALL(0x003054A0u, sub_003054A0); /* call 0x003054A0 */

loc_0030586D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0030587C; /* jge: greater or equal (signed >=) */

loc_00305871: ;
    PUSH32(esp, 0x00305876u); RECOMP_ABI_CALL(0x00305310u, sub_00305310); /* call 0x00305310 */

loc_00305876: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0030BCF0(); return; /* tail jmp 0x0030BCF0 */

loc_0030587C: ;
    eax = MEM32(0x5F5A1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305887u); RECOMP_ABI_CALL(0x0019F012u, sub_0019F012); /* call 0x0019F012 */

loc_00305887: ;
    ecx = MEM32(0x5F5A30);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305893u); RECOMP_ABI_CALL(0x0019F012u, sub_0019F012); /* call 0x0019F012 */

loc_00305893: ;
    edx = MEM32(0x5F59E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030589Fu); RECOMP_ABI_CALL(0x0019F012u, sub_0019F012); /* call 0x0019F012 */

loc_0030589F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3051D0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x003058ACu); RECOMP_ABI_CALL(0x0030BF00u, sub_0030BF00); /* call 0x0030BF00 */

loc_003058AC: ;
    esp = esp + 0xC;

loc_003058AF: ;
    eax = MEM32(0x5BEC7C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5BEC7C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003058C0
 * Original: 0x003058C0 - 0x003058CC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003058C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003058C0: ;
    eax = MEM32(0x5BECE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003058CB; /* je: equal / zero */

loc_003058C9: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_003058CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003058D0
 * Original: 0x003058D0 - 0x003058DC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003058D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003058D0: ;
    eax = MEM32(0x5BECEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003058DB; /* je: equal / zero */

loc_003058D9: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_003058DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003058E0
 * Original: 0x003058E0 - 0x00305976 (150 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003058E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003058E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 3));
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030590F; /* jle: less or equal (signed <=) */

loc_003058F2: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x18;

loc_003058F6: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x003058FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003058FF: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 3);
    esp = esp + 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003058F6; /* jl: less (signed <) */

loc_0030590E: ;
    POP32(esp, ebp);

loc_0030590F: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030591Du); RECOMP_ABI_CALL(0x0030C340u, sub_0030C340); /* call 0x0030C340 */

loc_0030591D: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0x00305929u); RECOMP_ABI_CALL(0x0030C3C0u, sub_0030C3C0); /* call 0x0030C3C0 */

loc_00305929: ;
    MEM8(esi + 1) = 1;
    MEM32(esi + 0x4C) = ebx;
    MEM8(esi + 0x71) = LO8(ebx);
    MEM32(esi + 0x8C) = 0x7FFFFFFF;
    MEM32(esi + 0x90) = 0xFFFFFFFFu;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA4) = ebx;
    edx = MEM32(0x5BFA40);
    MEM32(esi + 0xA0) = edx;
    esi = MEM32(esi + 0x74);
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305972; /* je: equal / zero */

loc_00305969: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030596Fu); RECOMP_ABI_CALL(0x0030BF80u, sub_0030BF80); /* call 0x0030BF80 */

loc_0030596F: ;
    esp = esp + 4;

loc_00305972: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00305980
 * Original: 0x00305980 - 0x00305A0F (143 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305980(void)
{

loc_00305980: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x3C);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x3E);
    edx = MEM32(esi + 8);
    eax = eax << 0xB;
    PUSH32(esp, eax);
    ecx = ecx << 0xB;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030599Eu); RECOMP_ABI_CALL(0x0030D620u, sub_0030D620); /* call 0x0030D620 */

loc_0030599E: ;
    eax = MEM32(0x476658);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003059ADu); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_003059AD: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003059BAu); RECOMP_ABI_CALL(0x0030D1C0u, sub_0030D1C0); /* call 0x0030D1C0 */

loc_003059BA: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003059C5u); RECOMP_ABI_CALL(0x0030D090u, sub_0030D090); /* call 0x0030D090 */

loc_003059C5: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003059CEu); RECOMP_ABI_CALL(0x0030D160u, sub_0030D160); /* call 0x0030D160 */

loc_003059CE: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003059D7u); RECOMP_ABI_CALL(0x0030D6D0u, sub_0030D6D0); /* call 0x0030D6D0 */

loc_003059D7: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003059F4u); RECOMP_ABI_CALL(0x0030D020u, sub_0030D020); /* call 0x0030D020 */

loc_003059F4: ;
    edx = MEM32(esi + 8);
    esp = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305A00u); RECOMP_ABI_CALL(0x0030D100u, sub_0030D100); /* call 0x0030D100 */

loc_00305A00: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00305A0Au); RECOMP_ABI_CALL(0x003058E0u, sub_003058E0); /* call 0x003058E0 */

loc_00305A0A: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305A10
 * Original: 0x00305A10 - 0x00305A83 (115 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305A10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00305A17u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00305A17: ;
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305A24u); RECOMP_ABI_CALL(0x0030D7D0u, sub_0030D7D0); /* call 0x0030D7D0 */

loc_00305A24: ;
    ecx = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305A30u); RECOMP_ABI_CALL(0x0030D7E0u, sub_0030D7E0); /* call 0x0030D7E0 */

loc_00305A30: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00305A3Au); RECOMP_ABI_CALL(0x0030D7F0u, sub_0030D7F0); /* call 0x0030D7F0 */

loc_00305A3A: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305A43u); RECOMP_ABI_CALL(0x0030C3E0u, sub_0030C3E0); /* call 0x0030C3E0 */

loc_00305A43: ;
    SET_LO8(eax, MEM8(esi + 2));
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305A60; /* jne: not equal / not zero */

loc_00305A4D: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305A60; /* je: equal / zero */

loc_00305A54: ;
    MEM32(esi + 0x14) = ebx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x00305A5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00305A5D: ;
    esp = esp + 4;

loc_00305A60: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305A70; /* je: equal / zero */

loc_00305A67: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305A6Du); RECOMP_ABI_CALL(0x0033EB50u, sub_0033EB50); /* call 0x0033EB50 */

loc_00305A6D: ;
    esp = esp + 4;

loc_00305A70: ;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 1) = LO8(ebx);
    MEM8(esi + 0xA8) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_00305A90
 * Original: 0x00305A90 - 0x00305B03 (115 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305A90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305A90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305AA7; /* jne: not equal / not zero */

loc_00305A99: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42B384;
    g_seh_ebp = ebp; sub_00307410(); return; /* tail jmp 0x00307410 */

loc_00305AA7: ;
    eax = MEM32(0x5BECF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305AC3; /* je: equal / zero */

loc_00305AB0: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305AB9u); RECOMP_ABI_CALL(0x0030C3E0u, sub_0030C3E0); /* call 0x0030C3E0 */

loc_00305AB9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x5BECF0); PUSH32(esp, 0x00305AC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00305AC0: ;
    esp = esp + 8;

loc_00305AC3: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305AD3; /* je: equal / zero */

loc_00305ACA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305AD0u); RECOMP_ABI_CALL(0x0030D6D0u, sub_0030D6D0); /* call 0x0030D6D0 */

loc_00305AD0: ;
    esp = esp + 4;

loc_00305AD3: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305AF8; /* jne: not equal / not zero */

loc_00305AD9: ;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305AE5u); RECOMP_ABI_CALL(0x0030DB00u, sub_0030DB00); /* call 0x0030DB00 */

loc_00305AE5: ;
    eax = MEM32(esi + 0x14);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305AF8; /* je: equal / zero */

loc_00305AEF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00305AF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00305AF5: ;
    esp = esp + 4;

loc_00305AF8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00305AFEu); RECOMP_ABI_CALL(0x00305A10u, sub_00305A10); /* call 0x00305A10 */

loc_00305AFE: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305B10
 * Original: 0x00305B10 - 0x00305B2E (30 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305B10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305B29; /* jne: not equal / not zero */

loc_00305B18: ;
    PUSH32(esp, 0x42B3AC);
    PUSH32(esp, 0x00305B22u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305B22: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00305B29: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00305B30
 * Original: 0x00305B30 - 0x00305BD3 (163 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305B30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00305BAE; /* je: equal / zero */

loc_00305B3D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305BAE; /* je: equal / zero */

loc_00305B41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305B8B; /* jne: not equal / not zero */

loc_00305B45: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305B4Eu); RECOMP_ABI_CALL(0x0030C910u, sub_0030C910); /* call 0x0030C910 */

loc_00305B4E: ;
    edi = MEM32(esp + 0x14);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305B5Du); RECOMP_ABI_CALL(0x0030C8D0u, sub_0030C8D0); /* call 0x0030C8D0 */

loc_00305B5D: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305B6Cu); RECOMP_ABI_CALL(0x0030C8F0u, sub_0030C8F0); /* call 0x0030C8F0 */

loc_00305B6C: ;
    ecx = eax;
    eax = 0x10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esp = esp + 0xC;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi));
    MEM32(edi) = eax;
    edx = MEM32(esi + 0x88);
    eax = eax + edx;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00305B8B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = 0;
    MEM32(ecx) = 1;
    edx = MEM32(esi + 0x88);
    ecx = MEM32(eax);
    ecx = ecx + edx;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00305BAE: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305BC1u); RECOMP_ABI_CALL(0x0030D800u, sub_0030D800); /* call 0x0030D800 */

loc_00305BC1: ;
    eax = MEM32(edi);
    edx = MEM32(esi + 0x88);
    esp = esp + 0xC;
    eax = eax + edx;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305BE0
 * Original: 0x00305BE0 - 0x00305D83 (419 bytes, 131 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305BE0(void)
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

loc_00305BE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00305D71; /* je: equal / zero */

loc_00305BF0: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305D71; /* je: equal / zero */

loc_00305BFC: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305D71; /* je: equal / zero */

loc_00305C08: ;
    eax = MEM32(0x5BECDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305C21; /* jne: not equal / not zero */

loc_00305C11: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00305C19u); RECOMP_ABI_CALL(0x00305B30u, sub_00305B30); /* call 0x00305B30 */

loc_00305C19: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00305C21: ;
    MEM32(0x5F59E0) = 0;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305CA4; /* je: equal / zero */

loc_00305C32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00305CA4; /* je: equal / zero */

loc_00305C36: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305C99; /* jne: not equal / not zero */

loc_00305C3A: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305C43u); RECOMP_ABI_CALL(0x0030C910u, sub_0030C910); /* call 0x0030C910 */

loc_00305C43: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x00305C50u); RECOMP_ABI_CALL(0x0030C8D0u, sub_0030C8D0); /* call 0x0030C8D0 */

loc_00305C50: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00305C5Du); RECOMP_ABI_CALL(0x0030C8F0u, sub_0030C8F0); /* call 0x0030C8F0 */

loc_00305C5D: ;
    ecx = eax;
    eax = 0x10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esp = esp + 0xC;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() / (double)SMEM32(esp + 0xC); /* fidiv dword ptr [esp + 0xc] */
    fp_top() = fp_top() * (double)SMEM32(0x5F59E4); /* fimul dword ptr [0x5f59e4] */
    PUSH32(esp, 0x00305C86u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00305C86: ;
    MEM32(edi) = eax;
    edx = MEM32(esi + 0x9C);
    eax = edx + eax + 1;
    MEM32(edi) = eax;
    goto loc_00305D5C;

loc_00305C99: ;
    MEM32(edi) = 0;
    goto loc_00305D5C;

loc_00305CA4: ;
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305CC8; /* jne: not equal / not zero */

loc_00305CAB: ;
    ecx = MEM32(0x5BFA40);
    edx = MEM32(esi + 0xA0);
    eax = MEM32(esi + 0x9C);
    ecx = ecx - edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    ecx = ecx + eax;
    MEM32(edi) = ecx;
    goto loc_00305CD0;

loc_00305CC8: ;
    edx = MEM32(esi + 0x9C);
    MEM32(edi) = edx;

loc_00305CD0: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00305CE0u); RECOMP_ABI_CALL(0x00305B30u, sub_00305B30); /* call 0x00305B30 */

loc_00305CE0: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esp = esp + 0xC;
    fp_top() = fp_top() / (double)SMEM32(esp + 0xC); /* fidiv dword ptr [esp + 0xc] */
    fp_push((double)SMEM32(edi)); /* fild */
    fp_top() = fp_top() / (double)SMEM32(0x5F59E4); /* fidiv dword ptr [0x5f59e4] */
    fp_st1() = fp_st1() - fp_top(); fp_pop(); /* fsubp st(1) */
    fp_top() = fp_top() * MEMF(0x3CEA68); /* fmul dword ptr [0x3cea68] */
    MEMF(0x5F59E0) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CAA50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3caa50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305D21; /* je: equal / zero */

loc_00305D0E: ;
    fp_push(MEMF(0x5F59E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CA9FC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3ca9fc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00305D5C; /* jp: parity */

loc_00305D21: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305D34u); RECOMP_ABI_CALL(0x0030D800u, sub_0030D800); /* call 0x0030D800 */

loc_00305D34: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esp = esp + 0xC;
    fp_top() = fp_top() / (double)SMEM32(esp + 0xC); /* fidiv dword ptr [esp + 0xc] */
    fp_top() = fp_top() * (double)SMEM32(0x5F59E4); /* fimul dword ptr [0x5f59e4] */
    PUSH32(esp, 0x00305D4Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00305D4A: ;
    MEM32(esi + 0x9C) = eax;
    edx = MEM32(0x5BFA40);
    MEM32(esi + 0xA0) = edx;

loc_00305D5C: ;
    eax = MEM32(esi + 0x88);
    MEM32(edi) = MEM32(edi) + eax;
    ecx = MEM32(0x5F59E4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00305D71: ;
    PUSH32(esp, 0x42B3D4);
    PUSH32(esp, 0x00305D7Bu); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305D7B: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00305D90
 * Original: 0x00305D90 - 0x00305DBE (46 bytes, 15 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00305D90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305D90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305DA9; /* jne: not equal / not zero */

loc_00305D98: ;
    PUSH32(esp, 0x42B3FC);
    PUSH32(esp, 0x00305DA2u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305DA2: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00305DA9: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305DBB; /* jl: less (signed <) */

loc_00305DAF: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030C910(); return; /* tail jmp 0x0030C910 */

loc_00305DBB: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00305DC0
 * Original: 0x00305DC0 - 0x00305DEE (46 bytes, 15 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00305DC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305DC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305DD9; /* jne: not equal / not zero */

loc_00305DC8: ;
    PUSH32(esp, 0x42B428);
    PUSH32(esp, 0x00305DD2u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305DD2: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00305DD9: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305DEB; /* jl: less (signed <) */

loc_00305DDF: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030C8D0(); return; /* tail jmp 0x0030C8D0 */

loc_00305DEB: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00305DF0
 * Original: 0x00305DF0 - 0x00305E1E (46 bytes, 15 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00305DF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305DF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305E09; /* jne: not equal / not zero */

loc_00305DF8: ;
    PUSH32(esp, 0x42B454);
    PUSH32(esp, 0x00305E02u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305E02: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00305E09: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305E1B; /* jl: less (signed <) */

loc_00305E0F: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030C8E0(); return; /* tail jmp 0x0030C8E0 */

loc_00305E1B: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00305E20
 * Original: 0x00305E20 - 0x00305E87 (103 bytes, 40 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305E20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305E38; /* jne: not equal / not zero */

loc_00305E29: ;
    PUSH32(esp, 0x42B4AC);
    PUSH32(esp, 0x00305E33u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305E33: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00305E38: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00305E47u); RECOMP_ABI_CALL(0x0030C9C0u, sub_0030C9C0); /* call 0x0030C9C0 */

loc_00305E47: ;
    esp = esp + 8;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF80 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305E52; /* jne: not equal / not zero */

loc_00305E50: ;
    eax = 0; /* xor self */

loc_00305E52: ;
    ecx = MEM32(esp + 0x14);
    edx = ecx + eax;
    MEM16(esi + edi * 2 + 0x42) = LO16(edx);
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00305E77; /* jge: greater or equal (signed >=) */

loc_00305E66: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305E71u); RECOMP_ABI_CALL(0x0030D870u, sub_0030D870); /* call 0x0030D870 */

loc_00305E71: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00305E77: ;
    PUSH32(esp, 0x42B480);
    PUSH32(esp, 0x00305E81u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305E81: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305E90
 * Original: 0x00305E90 - 0x00305EB2 (34 bytes, 11 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305E90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305EA8; /* jne: not equal / not zero */

loc_00305E98: ;
    PUSH32(esp, 0x42B4D8);
    PUSH32(esp, 0x00305EA2u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305EA2: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00305EA8: ;
    ecx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x42);
    esp += 4; return; /* ret */

}

/**
 * sub_00305EC0
 * Original: 0x00305EC0 - 0x00305F02 (66 bytes, 24 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305EC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305ED8; /* jne: not equal / not zero */

loc_00305EC9: ;
    PUSH32(esp, 0x42B504);
    PUSH32(esp, 0x00305ED3u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305ED3: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00305ED8: ;
    ecx = MEM32(esi + 4);
    SET_LO16(eax, MEM16(esp + 0xC));
    PUSH32(esp, ecx);
    MEM16(esi + 0x40) = LO16(eax);
    PUSH32(esp, 0x00305EEAu); RECOMP_ABI_CALL(0x0030C980u, sub_0030C980); /* call 0x0030C980 */

loc_00305EEA: ;
    ecx = MEM32(esi + 0xC);
    edx = SX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    edx = edx + eax;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00305EFDu); RECOMP_ABI_CALL(0x0030D860u, sub_0030D860); /* call 0x0030D860 */

loc_00305EFD: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305F10
 * Original: 0x00305F10 - 0x00305F2D (29 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305F10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305F28; /* jne: not equal / not zero */

loc_00305F18: ;
    PUSH32(esp, 0x42B530);
    PUSH32(esp, 0x00305F22u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305F22: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00305F28: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_00305F30
 * Original: 0x00305F30 - 0x00305F3A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F30(void)
{

loc_00305F30: ;
    eax = MEM32(esp + 4);
    MEM32(0x5BECE4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00305F40
 * Original: 0x00305F40 - 0x00305F5E (30 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305F40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305F56; /* jne: not equal / not zero */

loc_00305F48: ;
    PUSH32(esp, 0x42B55C);
    PUSH32(esp, 0x00305F52u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305F52: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00305F56: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x38) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00305F60
 * Original: 0x00305F60 - 0x00305F6C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F60(void)
{

loc_00305F60: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0x6D) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00305F70
 * Original: 0x00305F70 - 0x00305FDE (110 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305F70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00305F70: ;
    PUSH32(esp, 0x00305F75u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00305F75: ;
    eax = MEM32(0x5BECE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00305F83; /* je: equal / zero */

loc_00305F7E: ;
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_00305F83: ;
    PUSH32(esp, esi);
    MEM32(0x5BECE0) = 1;
    PUSH32(esp, 0x00305F93u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00305F93: ;
    PUSH32(esp, 0x00305F98u); RECOMP_ABI_CALL(0x0030CE30u, sub_0030CE30); /* call 0x0030CE30 */

loc_00305F98: ;
    MEM32(0x5BECE0) = 2;
    esi = 0x5EEA20;

loc_00305FA7: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00305FB5; /* jne: not equal / not zero */

loc_00305FAC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00305FB2u); RECOMP_ABI_CALL(0x0030E660u, sub_0030E660); /* call 0x0030E660 */

loc_00305FB2: ;
    esp = esp + 4;

loc_00305FB5: ;
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5EF620) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5EF620 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00305FA7; /* jl: less (signed <) */

loc_00305FC3: ;
    MEM32(0x5BECE0) = 3;
    PUSH32(esp, 0x00305FD2u); RECOMP_ABI_CALL(0x0030D830u, sub_0030D830); /* call 0x0030D830 */

loc_00305FD2: ;
    MEM32(0x5BECE0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00305FE0
 * Original: 0x00305FE0 - 0x00305FFE (30 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00305FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00305FE0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00305FF9; /* jne: not equal / not zero */

loc_00305FE8: ;
    PUSH32(esp, 0x42B588);
    PUSH32(esp, 0x00305FF2u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00305FF2: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00305FF9: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x60);
    esp += 4; return; /* ret */

}

/**
 * sub_00306000
 * Original: 0x00306000 - 0x003060C6 (198 bytes, 63 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306000(void)
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

loc_00306000: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030601A; /* jne: not equal / not zero */

loc_0030600A: ;
    PUSH32(esp, 0x42B5B4);
    PUSH32(esp, 0x00306014u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00306014: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030601A: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x72);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 1);
    if (CMP_EQ(_fa, _fb)) goto loc_003060C1; /* je: equal / zero */

loc_00306030: ;
    PUSH32(esp, 0x00306035u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00306035: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM8(esi + 0x72) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00306042; /* je: equal / zero */

loc_0030603D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003060BC; /* jne: not equal / not zero */

loc_00306042: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00306060; /* jne: not equal / not zero */

loc_00306047: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00306052u); RECOMP_ABI_CALL(0x0030D7F0u, sub_0030D7F0); /* call 0x0030D7F0 */

loc_00306052: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030605Bu); RECOMP_ABI_CALL(0x0030A640u, sub_0030A640); /* call 0x0030A640 */

loc_0030605B: ;
    esp = esp + 0xC;
    goto loc_0030607A;

loc_00306060: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030606Bu); RECOMP_ABI_CALL(0x0030D7F0u, sub_0030D7F0); /* call 0x0030D7F0 */

loc_0030606B: ;
    ecx = MEM32(0x5BFA40);
    esp = esp + 8;
    MEM32(esi + 0xA0) = ecx;

loc_0030607A: ;
    edi = MEM32(0x5BECDC);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x5BECDC) = 0;
    PUSH32(esp, 0x0030609Au); RECOMP_ABI_CALL(0x00305BE0u, sub_00305BE0); /* call 0x00305BE0 */

loc_0030609A: ;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esp = esp + 0xC;
    MEM32(0x5BECDC) = edi;
    fp_top() = fp_top() / (double)SMEM32(esp + 0xC); /* fidiv dword ptr [esp + 0xc] */
    fp_top() = fp_top() * (double)SMEM32(0x5F59E4); /* fimul dword ptr [0x5f59e4] */
    PUSH32(esp, 0x003060B6u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_003060B6: ;
    MEM32(esi + 0x9C) = eax;

loc_003060BC: ;
    PUSH32(esp, 0x003060C1u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003060C1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
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
 * sub_003060D0
 * Original: 0x003060D0 - 0x003060ED (29 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003060D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003060D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003060E8; /* jne: not equal / not zero */

loc_003060D8: ;
    PUSH32(esp, 0x42B5DC);
    PUSH32(esp, 0x003060E2u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_003060E2: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003060E8: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x72);
    esp += 4; return; /* ret */

}

/**
 * sub_003060F0
 * Original: 0x003060F0 - 0x00306179 (137 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003060F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003060F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030610Eu); RECOMP_ABI_CALL(0x0030A750u, sub_0030A750); /* call 0x0030A750 */

loc_0030610E: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00306119u); RECOMP_ABI_CALL(0x0030A100u, sub_0030A100); /* call 0x0030A100 */

loc_00306119: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x00306121u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_00306121: ;
    esp = esp + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00306174; /* jne: not equal / not zero */

loc_00306129: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030612Fu); RECOMP_ABI_CALL(0x0030C920u, sub_0030C920); /* call 0x0030C920 */

loc_0030612F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00306144; /* jle: less or equal (signed <=) */

loc_00306139: ;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x38)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x38))); }
    edx = eax + eax * 2;
    MEM32(esi + 0x48) = edx;
    goto loc_00306152;

loc_00306144: ;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x38)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x38))); }
    eax = eax + eax * 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    MEM32(esi + 0x48) = eax;

loc_00306152: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00306158u); RECOMP_ABI_CALL(0x0030C900u, sub_0030C900); /* call 0x0030C900 */

loc_00306158: ;
    ecx = eax;
    eax = MEM32(esi + 0x48);
    ecx = ecx << 1;
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x00306171u); RECOMP_ABI_CALL(0x0030C370u, sub_0030C370); /* call 0x0030C370 */

loc_00306171: ;
    esp = esp + 0xC;

loc_00306174: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306180
 * Original: 0x00306180 - 0x00306190 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306180: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00309F80(); return; /* tail jmp 0x00309F80 */

}

/**
 * sub_00306190
 * Original: 0x00306190 - 0x0030620E (126 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306190(void)
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

loc_00306190: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003061A2; /* jne: not equal / not zero */

loc_0030619D: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003061A2: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003061B2u); RECOMP_ABI_CALL(0x0030D890u, sub_0030D890); /* call 0x0030D890 */

loc_003061B2: ;
    edi = eax;
    PUSH32(esp, 0x003061B9u); RECOMP_ABI_CALL(0x00305F70u, sub_00305F70); /* call 0x00305F70 */

loc_003061B9: ;
    ebx = MEM32(0x5BECDC);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(0x5BECDC) = 0;
    PUSH32(esp, 0x003061D9u); RECOMP_ABI_CALL(0x00305BE0u, sub_00305BE0); /* call 0x00305BE0 */

loc_003061D9: ;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    esp = esp + 0x14;
    MEM32(0x5BECDC) = ebx;
    fp_top() = fp_top() / (double)SMEM32(esp + 0xC); /* fidiv dword ptr [esp + 0xc] */
    fp_top() = fp_top() * (double)SMEM32(0x5F59E4); /* fimul dword ptr [0x5f59e4] */
    PUSH32(esp, 0x003061F5u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_003061F5: ;
    MEM32(esi + 0x9C) = eax;
    ecx = MEM32(0x5BFA40);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(esi + 0xA0) = ecx;
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
 * sub_00306210
 * Original: 0x00306210 - 0x0030621F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306210(void)
{

loc_00306210: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x88) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00306220
 * Original: 0x00306220 - 0x00306243 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306220(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306220: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM8(eax + 0x98) = LO8(ecx);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00306242; /* je: equal / zero */

loc_00306235: ;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030C860(); return; /* tail jmp 0x0030C860 */

loc_00306242: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306250
 * Original: 0x00306250 - 0x003062BE (110 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306250: ;
    ecx = MEM32(esp + 8);
    esp = esp - 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003062A4; /* jl: less (signed <) */

loc_0030625C: ;
    eax = MEM32(esp + 0x18);
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    SET_HI8(edx, MEM8(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x8000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003062A4; /* jne: not equal / not zero */

loc_0030626E: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = esp + 0x11;
    PUSH32(esp, edx);
    edx = esp + 0x16;
    PUSH32(esp, edx);
    edx = esp + 0x1B;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030629Du); RECOMP_ABI_CALL(0x0030E7B0u, sub_0030E7B0); /* call 0x0030E7B0 */

loc_0030629D: ;
    esp = esp + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003062AA; /* jge: greater or equal (signed >=) */

loc_003062A4: ;
    eax = 0; /* xor self */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003062AA: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    eax = 1;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_003062C0
 * Original: 0x003062C0 - 0x003062EA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003062C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003062C0: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003062DB; /* jl: less (signed <) */

loc_003062C9: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    SET_HI8(edx, MEM8(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x8001 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003062DE; /* je: equal / zero */

loc_003062DB: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003062DE: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003062F0
 * Original: 0x003062F0 - 0x00306403 (275 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003062F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003062F0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00306306; /* jne: not equal / not zero */

loc_003062FF: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00306306: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edx = edx & 0x1F;
    eax = eax + edx;
    ebp = eax;
    ebx = ebx + ebx * 8;
    ebx = ebx << 1;
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((5) & 31u));
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x00306332u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00306332: ;
    eax = MEM32(esp + 0x24);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edi = MEM32(esp + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    MEM32(esp + 0x34) = eax;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edi = edx;
    edx = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030636Bu); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_0030636B: ;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00306378u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00306378: ;
    edx = MEM32(esi);
    eax = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00306385u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00306385: ;
    ecx = MEM32(esi);
    edx = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ebp = ebp - edi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esp + 0x6C) = edi;
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x00306399u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00306399: ;
    eax = MEM32(esp + 0x5C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edi = MEM32(esp + 0x58);
    esp = esp + 0x48;
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    ecx = ebp;
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
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003063D1u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_003063D1: ;
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003063DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003063DE: ;
    edx = MEM32(esi);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003063EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003063EB: ;
    ecx = MEM32(esp + 0x4C);
    eax = ecx + ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    esp = esp + 0x28;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = eax << 5;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00306410
 * Original: 0x00306410 - 0x0030653D (301 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306410(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306410: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030642B; /* jne: not equal / not zero */

loc_0030641C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0x42B60C;
    g_seh_ebp = ebp; sub_00307410(); return; /* tail jmp 0x00307410 */

loc_0030642B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00306431u); RECOMP_ABI_CALL(0x003058C0u, sub_003058C0); /* call 0x003058C0 */

loc_00306431: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00306437u); RECOMP_ABI_CALL(0x003058D0u, sub_003058D0); /* call 0x003058D0 */

loc_00306437: ;
    SET_LO8(eax, MEM8(ebp));
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030644A; /* jne: not equal / not zero */

loc_00306441: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00306447u); RECOMP_ABI_CALL(0x00305A90u, sub_00305A90); /* call 0x00305A90 */

loc_00306447: ;
    esp = esp + 4;

loc_0030644A: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030645D; /* je: equal / zero */

loc_00306451: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0xC) = ebx;
    PUSH32(esp, 0x0030645Au); RECOMP_ABI_CALL(0x0030D7B0u, sub_0030D7B0); /* call 0x0030D7B0 */

loc_0030645A: ;
    esp = esp + 4;

loc_0030645D: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306470; /* je: equal / zero */

loc_00306464: ;
    PUSH32(esp, eax);
    MEM32(ebp + 4) = ebx;
    PUSH32(esp, 0x0030646Du); RECOMP_ABI_CALL(0x0030C300u, sub_0030C300); /* call 0x0030C300 */

loc_0030646D: ;
    esp = esp + 4;

loc_00306470: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0030648D; /* je: equal / zero */

loc_00306479: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + 8) = ebx;
    PUSH32(esp, 0x00306484u); RECOMP_ABI_CALL(0x0030D1C0u, sub_0030D1C0); /* call 0x0030D1C0 */

loc_00306484: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030648Au); RECOMP_ABI_CALL(0x0030D730u, sub_0030D730); /* call 0x0030D730 */

loc_0030648A: ;
    esp = esp + 0x10;

loc_0030648D: ;
    eax = MEM32(ebp + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003064A6; /* je: equal / zero */

loc_00306497: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0x94) = ebx;
    PUSH32(esp, 0x003064A3u); RECOMP_ABI_CALL(0x0030DC40u, sub_0030DC40); /* call 0x0030DC40 */

loc_003064A3: ;
    esp = esp + 4;

loc_003064A6: ;
    PUSH32(esp, 0x003064ABu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003064AB: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003064BE; /* je: equal / zero */

loc_003064B2: ;
    MEM32(ebp + 0x10) = ebx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x003064BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003064BB: ;
    esp = esp + 4;

loc_003064BE: ;
    SET_LO8(eax, MEM8(ebp + 3));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00306513; /* jle: less or equal (signed <=) */

loc_003064C7: ;
    esi = ebp + 0x78;
    /* nop */

loc_003064D0: ;
    eax = MEM32(esi + -96);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003064E3; /* je: equal / zero */

loc_003064D7: ;
    MEM32(esi + -96) = ebx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003064E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003064E0: ;
    esp = esp + 4;

loc_003064E3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003064F4; /* je: equal / zero */

loc_003064E9: ;
    MEM32(esi) = ebx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x003064F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003064F1: ;
    esp = esp + 4;

loc_003064F4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306507; /* je: equal / zero */

loc_003064FB: ;
    MEM32(esi + 8) = ebx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00306504u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00306504: ;
    esp = esp + 4;

loc_00306507: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 3);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003064D0; /* jl: less (signed <) */

loc_00306513: ;
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306526; /* je: equal / zero */

loc_0030651A: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0x74) = ebx;
    PUSH32(esp, 0x00306523u); RECOMP_ABI_CALL(0x0030BF60u, sub_0030BF60); /* call 0x0030BF60 */

loc_00306523: ;
    esp = esp + 4;

loc_00306526: ;
    edi = ebp;
    ecx = 0x30;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp) = LO8(ebx);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_00306540
 * Original: 0x00306540 - 0x0030658A (74 bytes, 28 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306540(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306540: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0030657A; /* je: equal / zero */

loc_0030654A: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030657A; /* je: equal / zero */

loc_00306552: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00306558u); RECOMP_ABI_CALL(0x00305A90u, sub_00305A90); /* call 0x00305A90 */

loc_00306558: ;
    PUSH32(esp, 0x0030655Du); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030655D: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00306564u); RECOMP_ABI_CALL(0x003058E0u, sub_003058E0); /* call 0x003058E0 */

loc_00306564: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM8(esi + 2) = 3;
    PUSH32(esp, 0x00306570u); RECOMP_ABI_CALL(0x00306220u, sub_00306220); /* call 0x00306220 */

loc_00306570: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_0030657A: ;
    PUSH32(esp, 0x42B634);
    PUSH32(esp, 0x00306584u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00306584: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306590
 * Original: 0x00306590 - 0x003067FD (621 bytes, 213 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306590(void)
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

loc_00306590: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = eax + 0x3F;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFFFFFFC0u;
    edx = eax;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebp));
    edx = edx - ebp;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_003067EB; /* jl: less (signed <) */

loc_003065B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_003067EB; /* je: equal / zero */

loc_003065BA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_003067EB; /* jl: less (signed <) */

loc_003065C2: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    eax = 0x5EEAE0;
    /* nop */

loc_003065D0: ;
    _fa = (uint32_t)(MEM8(eax + -192)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -192), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0030660C; /* je: equal / zero */

loc_003065D9: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00306601; /* je: equal / zero */

loc_003065DE: ;
    _fa = (uint32_t)(MEM8(eax + 0xC0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xC0), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00306604; /* je: equal / zero */

loc_003065E7: ;
    _fa = (uint32_t)(MEM8(eax + 0x180)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x180), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00306609; /* je: equal / zero */

loc_003065F0: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x300)) >> 32) & 1);
    eax = eax + 0x300;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5EF6E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5EF6E0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003065D0; /* jl: less (signed <) */

loc_003065FF: ;
    goto loc_0030660C;

loc_00306601: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0030660C;

loc_00306604: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    goto loc_0030660C;

loc_00306609: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(3)) >> 32) & 1);
    ecx = ecx + 3;

loc_0030660C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00306623; /* jne: not equal / not zero */

loc_00306611: ;
    PUSH32(esp, 0x42B684);
    PUSH32(esp, 0x0030661Bu); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_0030661B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00306623: ;
    PUSH32(esp, esi);
    esi = ecx + ecx * 2;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    if (6) _cf = (int)(((esi) >> (32 - (6))) & 1);
    esi = esi << 6;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x5EEA20)) >> 32) & 1);
    esi = esi + 0x5EEA20;
    ecx = 0x30;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x40C0);
    eax = edx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x124));
    eax = eax - 0x124;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FF;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    edi = ecx + ebp;
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0xB) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    if (0xB) _cf = (int)(((eax) >> (32 - (0xB))) & 1);
    eax = eax << 0xB;
    PUSH32(esp, 0x24);
    MEM32(esi + 0x2C) = ebp;
    PUSH32(esp, eax);
    ecx = eax + edi + 0x24;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    MEM8(esi + 3) = LO8(ebx);
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = 0x24;
    MEM32(esi + 0xAC) = ecx;
    MEM32(esi + 0x30) = 0x2000;
    MEM32(esi + 0x34) = 0x2060;
    MEM32(esi + 0x14) = ebp;
    PUSH32(esp, 0x00306698u); RECOMP_ABI_CALL(0x0030F470u, sub_0030F470); /* call 0x0030F470 */

loc_00306698: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00306732; /* je: equal / zero */

loc_003066A6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003066ADu); RECOMP_ABI_CALL(0x0030CFE0u, sub_0030CFE0); /* call 0x0030CFE0 */

loc_003066AD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00306732; /* je: equal / zero */

loc_003066B7: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003066F3; /* jle: less or equal (signed <=) */

loc_003066BD: ;
    ebp = esi + 0x18;

loc_003066C0: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x30);
    edx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    if (1) _cf = (int)(((edx) >> (32 - (1))) & 1);
    edx = edx << 1;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x2C);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ecx)) >> 32) & 1);
    ecx = ecx + ecx;
    PUSH32(esp, ecx);
    eax = edx + eax * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003066DFu); RECOMP_ABI_CALL(0x0030F470u, sub_0030F470); /* call 0x0030F470 */

loc_003066DF: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebp) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00306732; /* je: equal / zero */

loc_003066E9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003066C0; /* jl: less (signed <) */

loc_003066F1: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */

loc_003066F3: ;
    ecx = MEM32(esi + 0x10);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00306701u); RECOMP_ABI_CALL(0x0030CA30u, sub_0030CA30); /* call 0x0030CA30 */

loc_00306701: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00306732; /* je: equal / zero */

loc_0030670B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00306712u); RECOMP_ABI_CALL(0x0030D7A0u, sub_0030D7A0); /* call 0x0030D7A0 */

loc_00306712: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00306732; /* je: equal / zero */

loc_0030671C: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306725u); RECOMP_ABI_CALL(0x0030D900u, sub_0030D900); /* call 0x0030D900 */

loc_00306725: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x94) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00306742; /* jne: not equal / not zero */

loc_00306732: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00306738u); RECOMP_ABI_CALL(0x00306410u, sub_00306410); /* call 0x00306410 */

loc_00306738: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00306742: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030674Cu); RECOMP_ABI_CALL(0x0030D9D0u, sub_0030D9D0); /* call 0x0030D9D0 */

loc_0030674C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    PUSH32(esp, 0x00306754u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00306754: ;
    edx = MEM32(0x5BECE4);
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x38) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FF;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0xB) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    MEM16(esi + 0x3C) = LO16(eax);
    eax = SX16(LO16(eax));
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C830C); /* fmul dword ptr [0x3c830c] */
    PUSH32(esp, 0x00306786u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00306786: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(esi + 0x3E) = LO16(eax);
    MEM16(esi + 0x40) = LO16(ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_003067A5; /* jle: less or equal (signed <=) */

loc_00306792: ;
    ecx = ebx;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    edi = esi + 0x42;
    eax = 0xFF80FF80u;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(2); for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*_st) = LO16(eax); edi += ecx * _st; }
    ecx = 0; /* rep stosw */

loc_003067A5: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM16(esi + 0x46) = LO16(ebp);
    MEM8(esi + 0x6C) = LO8(ebx);
    MEM32(esi + 0x54) = ebp;
    MEM32(esi + 0x58) = ebp;
    MEM32(esi + 0x5C) = ebp;
    MEM16(esi + 0x60) = LO16(ebp);
    MEM32(esi + 0x64) = ebp;
    MEM16(esi + 0x68) = LO16(ebp);
    MEM16(esi + 0x6A) = LO16(ebp);
    MEM8(esi + 0x6D) = LO8(ebx);
    MEM8(esi + 0x72) = 0;
    MEM32(esi + 0x88) = ebp;
    PUSH32(esp, 0x003067DAu); RECOMP_ABI_CALL(0x00306220u, sub_00306220); /* call 0x00306220 */

loc_003067DA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    MEM8(esi) = LO8(ebx);
    PUSH32(esp, 0x003067E4u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003067E4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003067EB: ;
    PUSH32(esp, 0x42B65C);
    PUSH32(esp, 0x003067F5u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_003067F5: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00306800
 * Original: 0x00306800 - 0x00306884 (132 bytes, 41 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306800: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00306874; /* je: equal / zero */

loc_0030680A: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00306874; /* je: equal / zero */

loc_00306812: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00306818u); RECOMP_ABI_CALL(0x00305A90u, sub_00305A90); /* call 0x00305A90 */

loc_00306818: ;
    edx = MEM32(esi + 0xAC);
    esp = esp + 4;
    ecx = edi;

loc_00306823: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00306823; /* jne: not equal / not zero */

loc_0030682D: ;
    eax = MEM32(esi + 0xAC);
    MEM32(esi + 0xB0) = eax;
    SET_LO8(eax, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esi + 0xB4) = 0;
    MEM32(esi + 0xB8) = 0;
    MEM32(esi + 0xBC) = 0xFFFFF;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi + 0xA8) = LO8(eax);
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x0030686Eu); RECOMP_ABI_CALL(0x00306220u, sub_00306220); /* call 0x00306220 */

loc_0030686E: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00306874: ;
    PUSH32(esp, 0x42B6B0);
    PUSH32(esp, 0x0030687Eu); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_0030687E: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306890
 * Original: 0x00306890 - 0x003068BD (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306890: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x94);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003068A6u); RECOMP_ABI_CALL(0x0030DC60u, sub_0030DC60); /* call 0x0030DC60 */

loc_003068A6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003068BB; /* jge: greater or equal (signed >=) */

loc_003068AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x42B6DC);
    PUSH32(esp, 0x003068B8u); RECOMP_ABI_CALL(0x00307450u, sub_00307450); /* call 0x00307450 */

loc_003068B8: ;
    esp = esp + 8;

loc_003068BB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003068C0
 * Original: 0x003068C0 - 0x00306915 (85 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003068C0(void)
{

loc_003068C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003068D2u); RECOMP_ABI_CALL(0x00305A10u, sub_00305A10); /* call 0x00305A10 */

loc_003068D2: ;
    PUSH32(esp, 0x003068D7u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003068D7: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003068E1u); RECOMP_ABI_CALL(0x003058E0u, sub_003058E0); /* call 0x003058E0 */

loc_003068E1: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x003068EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003068EA: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x3E);
    edx = edx << 0xB;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM8(esi + 2) = 4;
    PUSH32(esp, 0x003068FCu); RECOMP_ABI_CALL(0x0030DBC0u, sub_0030DBC0); /* call 0x0030DBC0 */

loc_003068FC: ;
    PUSH32(esp, 0x00306901u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00306901: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00306907u); RECOMP_ABI_CALL(0x0030DC80u, sub_0030DC80); /* call 0x0030DC80 */

loc_00306907: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030690Fu); RECOMP_ABI_CALL(0x00306220u, sub_00306220); /* call 0x00306220 */

loc_0030690F: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306920
 * Original: 0x00306920 - 0x0030696B (75 bytes, 31 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306920: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030695B; /* je: equal / zero */

loc_0030692A: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030695B; /* je: equal / zero */

loc_00306932: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030693Fu); RECOMP_ABI_CALL(0x0030DB00u, sub_0030DB00); /* call 0x0030DB00 */

loc_0030693F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00306946u); RECOMP_ABI_CALL(0x00306890u, sub_00306890); /* call 0x00306890 */

loc_00306946: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030694Eu); RECOMP_ABI_CALL(0x0030DC20u, sub_0030DC20); /* call 0x0030DC20 */

loc_0030694E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00306954u); RECOMP_ABI_CALL(0x003068C0u, sub_003068C0); /* call 0x003068C0 */

loc_00306954: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0030695B: ;
    PUSH32(esp, 0x42B6F8);
    PUSH32(esp, 0x00306965u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00306965: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306970
 * Original: 0x00306970 - 0x003069EF (127 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306970: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx + 1) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx + 2) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx + 3) = LO8(edx);
    edx = 0; /* xor self */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_HI8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 2));
    eax = eax + 4;
    SET_LO8(edx, MEM8(eax + -3));
    eax = eax + 4;
    eax = eax + 2;
    edx = edx << 8;
    edx = edx | esi;
    esi = ZX8(MEM8(eax + -7));
    edx = edx << 8;
    edx = edx | esi;
    MEM32(ecx + 4) = edx;
    esi = ZX8(MEM8(eax + -4));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + -6));
    SET_LO8(edx, MEM8(eax + -5));
    edx = edx << 8;
    edx = edx | esi;
    esi = ZX8(MEM8(eax + -3));
    edx = edx << 8;
    edx = edx | esi;
    MEM32(ecx + 8) = edx;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + -2));
    POP32(esp, esi);
    SET_LO8(edx, MEM8(eax + -1));
    MEM16(ecx + 0xC) = LO16(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 0x3C) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 1));
    MEM8(ecx + 0x3D) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003069F0
 * Original: 0x003069F0 - 0x00306A08 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003069F0(void)
{

loc_003069F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax + 2));
    eax = eax + 2;
    SET_LO8(ecx, MEM8(eax + 1));
    MEM16(edx + 0xE) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306A10
 * Original: 0x00306A10 - 0x00306AB3 (163 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306A10(void)
{

loc_00306A10: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax));
    ecx = MEM32(esp + 8);
    eax = eax + 2;
    eax = eax + 2;
    PUSH32(esp, esi);
    eax = eax + 4;
    eax = eax + 4;
    SET_LO8(edx, MEM8(eax + -11));
    eax = eax + 4;
    MEM16(ecx) = LO16(edx);
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + -14));
    SET_LO8(edx, MEM8(eax + -13));
    MEM16(ecx + 2) = LO16(edx);
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + -12));
    esi = ZX8(MEM8(eax + -10));
    SET_LO8(edx, MEM8(eax + -11));
    edx = edx << 8;
    edx = edx | esi;
    esi = ZX8(MEM8(eax + -9));
    edx = edx << 8;
    edx = edx | esi;
    MEM32(ecx + 4) = edx;
    esi = ZX8(MEM8(eax + -6));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + -8));
    SET_LO8(edx, MEM8(eax + -7));
    edx = edx << 8;
    edx = edx | esi;
    esi = ZX8(MEM8(eax + -5));
    edx = edx << 8;
    edx = edx | esi;
    MEM32(ecx + 8) = edx;
    esi = ZX8(MEM8(eax + -2));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax + -4));
    SET_LO8(edx, MEM8(eax + -3));
    edx = edx << 8;
    edx = edx | esi;
    esi = ZX8(MEM8(eax + -1));
    edx = edx << 8;
    edx = edx | esi;
    MEM32(ecx + 0xC) = edx;
    esi = ZX8(MEM8(eax + 2));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax));
    SET_LO8(edx, MEM8(eax + 1));
    eax = ZX8(MEM8(eax + 3));
    edx = edx << 8;
    edx = edx | esi;
    edx = edx << 8;
    edx = edx | eax;
    MEM32(ecx + 0x10) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306AC0
 * Original: 0x00306AC0 - 0x00306B2C (108 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306AC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax));
    eax = eax + 2;
    SET_LO8(edx, MEM8(eax + -1));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    MEM16(ecx) = LO16(edx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00306AE5; /* jle: less or equal (signed <=) */

loc_00306ADA: ;
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(eax));
    SET_LO8(edx, MEM8(eax + 1));
    MEM16(ecx + 2) = LO16(edx);

loc_00306AE5: ;
    SET_LO8(edx, MEM8(eax + 2));
    eax = eax + 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM8(ecx + 4) = LO8(edx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00306AF8; /* jle: less or equal (signed <=) */

loc_00306AF3: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 5) = LO8(edx);

loc_00306AF8: ;
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM8(ecx + 6) = LO8(edx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00306B09; /* jle: less or equal (signed <=) */

loc_00306B04: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 7) = LO8(edx);

loc_00306B09: ;
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM8(ecx + 8) = LO8(edx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00306B1A; /* jle: less or equal (signed <=) */

loc_00306B15: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 9) = LO8(edx);

loc_00306B1A: ;
    SET_LO8(edx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    MEM8(ecx + 0xA) = LO8(edx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00306B2B; /* jle: less or equal (signed <=) */

loc_00306B25: ;
    SET_LO8(eax, MEM8(eax + 1));
    MEM8(ecx + 0xB) = LO8(eax);

loc_00306B2B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00306B30
 * Original: 0x00306B30 - 0x00306C59 (297 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306B30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306B30: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00306B3E; /* je: equal / zero */

loc_00306B38: ;
    MEM32(eax) = 0;

loc_00306B3E: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00306B4B; /* jge: greater or equal (signed >=) */

loc_00306B47: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00306B4B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(esi));
    esi = esi + 2;
    SET_LO8(ecx, MEM8(esi + -1));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x8000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306B68; /* je: equal / zero */

loc_00306B61: ;
    eax = 0xFFFFFFFCu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00306B68: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    SET_HI8(ebx, MEM8(esi));
    esi = esi + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ebx, MEM8(esi + -1));
    if (TEST_Z(_fa, _fb)) goto loc_00306B79; /* je: equal / zero */

loc_00306B77: ;
    MEM32(eax) = ebx;

loc_00306B79: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00306C53; /* je: equal / zero */

loc_00306B86: ;
    eax = ebx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00306B96; /* jge: greater or equal (signed >=) */

loc_00306B8D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00306B96: ;
    ebx = ebx - 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00306B8D; /* jl: less (signed <) */

loc_00306B9E: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00306BA5u); RECOMP_ABI_CALL(0x00306970u, sub_00306970); /* call 0x00306970 */

loc_00306BA5: ;
    SET_LO8(eax, MEM8(edi + 0x3C));
    esp = esp + 8;
    esi = esi + 0x10;
    ebx = ebx - 0x10;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00306BBB; /* jne: not equal / not zero */

loc_00306BB5: ;
    esi = esi + 0xC;
    ebx = ebx - 0xC;

loc_00306BBB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00306C53; /* jl: less (signed <) */

loc_00306BC4: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00306BCBu); RECOMP_ABI_CALL(0x003069F0u, sub_003069F0); /* call 0x003069F0 */

loc_00306BCB: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0xE);
    ecx = eax + eax * 4;
    ecx = ecx << 2;
    esp = esp + 8;
    esi = esi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00306C53; /* jl: less (signed <) */

loc_00306BDF: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00306C0C; /* jle: less or equal (signed <=) */

loc_00306BE6: ;
    edx = edi + 0x10;
    MEM32(esp + 0x1C) = edx;
    /* nop */

loc_00306BF0: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00306BFBu); RECOMP_ABI_CALL(0x00306A10u, sub_00306A10); /* call 0x00306A10 */

loc_00306BFB: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 0x14;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0xE);
    esp = esp + 8;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00306BF0; /* jl: less (signed <) */

loc_00306C0C: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xE);
    SET_LO8(eax, MEM8(edi + 3));
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFFFFFFECu);
    ebx = ebx + edx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00306C52; /* jle: less or equal (signed <=) */

loc_00306C1E: ;
    eax = edi + 0x24;
    MEM32(esp + 0x1C) = eax;

loc_00306C25: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00306C52; /* jl: less (signed <) */

loc_00306C2A: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00306C35u); RECOMP_ABI_CALL(0x00306AC0u, sub_00306AC0); /* call 0x00306AC0 */

loc_00306C35: ;
    ecx = MEM32(esp + 0x24);
    edx = (uint32_t)(int32_t)SMEM8(edi + 3);
    esp = esp + 8;
    esi = esi + 0xC;
    ebx = ebx - 0xC;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00306C25; /* jl: less (signed <) */

loc_00306C52: ;
    POP32(esp, ebp);

loc_00306C53: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306C60
 * Original: 0x00306C60 - 0x00306D64 (260 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306C60: ;
    edx = MEM32(esp + 4);
    esp = esp - 0x60;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00306D52; /* je: equal / zero */

loc_00306C70: ;
    ebx = MEM32(esp + 0x70);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00306D52; /* je: equal / zero */

loc_00306C7C: ;
    eax = 0; /* xor self */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    ecx = 0x10;
    edi = esp + 0x28;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x74);
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306CBFu); RECOMP_ABI_CALL(0x00306B30u, sub_00306B30); /* call 0x00306B30 */

loc_00306CBF: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFCu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00306CDA; /* jne: not equal / not zero */

loc_00306CC7: ;
    PUSH32(esp, 0x42B798);
    PUSH32(esp, 0x00306CD1u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00306CD1: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

loc_00306CDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00306CF1; /* jge: greater or equal (signed >=) */

loc_00306CDE: ;
    PUSH32(esp, 0x42B760);
    PUSH32(esp, 0x00306CE8u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00306CE8: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

loc_00306CF1: ;
    SET_LO8(ecx, MEM8(esp + 0x64));
    eax = MEM32(esp + 0x2C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    ecx = (uint32_t)(int32_t)SMEM8(esp + 0x2B);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0x10) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x36);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x30);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 8) = edx;
    edx = (uint32_t)(int32_t)SMEM8(esp + 0x2A);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x20) = ecx;
    edi = ebx;
    ecx = 8;
    esi = esp + 0xC;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

loc_00306D52: ;
    PUSH32(esp, 0x42B728);
    PUSH32(esp, 0x00306D5Cu); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00306D5C: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

}

/**
 * sub_00306D70
 * Original: 0x00306D70 - 0x00306DD1 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306D70: ;
    ecx = MEM32(0x5E83E0);
    ecx = ecx & 0x8000000Fu;
    PUSH32(esp, ebx);
    if (((int32_t)ecx >= 0)) goto loc_00306D84; /* jns: not sign (positive) */

loc_00306D7F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00306D84: ;
    ebx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = ecx;
    eax = eax << 4;
    eax = eax + 0x5E82E0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00306DA2; /* jne: not equal / not zero */

loc_00306D9A: ;
    MEM16(edx * 2 + 0x5E8400) = MEM16(edx * 2 + 0x5E8400) + 1;
    _fa = (uint32_t)(MEM16(edx * 2 + 0x5E8400)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_00306DA2: ;
    MEM8(eax) = LO8(edx);
    SET_LO16(edx, MEM16(edx * 2 + 0x5E8400));
    MEM16(eax + 2) = LO16(edx);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 1) = LO8(ebx);
    MEM32(eax + 0xC) = edx;
    MEM32(0x5E83E0) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306DE0
 * Original: 0x00306DE0 - 0x00306E0E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306DE0: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = 0x5E8840;
    /* nop */

loc_00306DF0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306E02; /* je: equal / zero */

loc_00306DF5: ;
    ecx = ecx + 0x44;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E8C80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5E8C80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00306DF0; /* jl: less (signed <) */

loc_00306E01: ;
    esp += 4; return; /* ret */

loc_00306E02: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    edx = edx + 0x5E8840;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00306E10
 * Original: 0x00306E10 - 0x00306E6B (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306E10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00306E17u); RECOMP_ABI_CALL(0x00306DE0u, sub_00306DE0); /* call 0x00306DE0 */

loc_00306E17: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306E41; /* je: equal / zero */

loc_00306E1F: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00306E2Au); RECOMP_ABI_CALL(0x0030CFE0u, sub_0030CFE0); /* call 0x0030CFE0 */

loc_00306E2A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00306E46; /* jne: not equal / not zero */

loc_00306E34: ;
    PUSH32(esp, 0x42B7D4);
    PUSH32(esp, 0x00306E3Eu); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00306E3E: ;
    esp = esp + 4;

loc_00306E41: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00306E46: ;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 2) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM8(esi + 3) = LO8(ebx);
    MEM8(esi + 1) = 1;
    MEM32(esi + 0x2C) = 0x200;
    MEM8(esi) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306E70
 * Original: 0x00306E70 - 0x00306EFC (140 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306E70: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00306E89; /* jne: not equal / not zero */

loc_00306E78: ;
    PUSH32(esp, 0x42B80C);
    PUSH32(esp, 0x00306E82u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00306E82: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00306E89: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x00306EB1u); RECOMP_ABI_CALL(0x0030D060u, sub_0030D060); /* call 0x0030D060 */

loc_00306EB1: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00306EBAu); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_00306EBA: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00306ED3; /* jne: not equal / not zero */

loc_00306EC2: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306ECBu); RECOMP_ABI_CALL(0x0030D700u, sub_0030D700); /* call 0x0030D700 */

loc_00306ECB: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00306ED3: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00306EDCu); RECOMP_ABI_CALL(0x0030D660u, sub_0030D660); /* call 0x0030D660 */

loc_00306EDC: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x00306EE8u); RECOMP_ABI_CALL(0x0030D670u, sub_0030D670); /* call 0x0030D670 */

loc_00306EE8: ;
    esp = esp + 8;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x3C) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306F00
 * Original: 0x00306F00 - 0x00306F42 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306F00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306F00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00306F40; /* je: equal / zero */

loc_00306F0C: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00306F40; /* jne: not equal / not zero */

loc_00306F13: ;
    _fa = (uint32_t)(MEM32(0x5E83E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5E83E4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00306F2C; /* jne: not equal / not zero */

loc_00306F1C: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00306F29u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00306F29: ;
    esp = esp + 8;

loc_00306F2C: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 8) = 0;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_00306F40: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306F50
 * Original: 0x00306F50 - 0x00307010 (192 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00306F50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00306F5Eu); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_00306F5E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00306F72; /* je: equal / zero */

loc_00306F66: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00306F6Fu); RECOMP_ABI_CALL(0x0030D190u, sub_0030D190); /* call 0x0030D190 */

loc_00306F6F: ;
    esp = esp + 4;

loc_00306F72: ;
    PUSH32(esp, 0x00306F77u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00306F77: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x30);
    eax = MEM32(esi + 0xC);
    edx = edx + ecx;
    eax = eax - ecx;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x18) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00306F91; /* jge: greater or equal (signed >=) */

loc_00306F8F: ;
    eax = ecx;

loc_00306F91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_00306FAE; /* jne: not equal / not zero */

loc_00306F9F: ;
    MEM8(esi + 1) = 3;
    esi = 0; /* xor self */
    PUSH32(esp, 0x00306FAAu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00306FAA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00306FAE: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00306FB9u); RECOMP_ABI_CALL(0x0030D1E0u, sub_0030D1E0); /* call 0x0030D1E0 */

loc_00306FB9: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00306FC7u); RECOMP_ABI_CALL(0x0030D690u, sub_0030D690); /* call 0x0030D690 */

loc_00306FC7: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00306FD4u); RECOMP_ABI_CALL(0x0030D640u, sub_0030D640); /* call 0x0030D640 */

loc_00306FD4: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM8(esi + 1) = 2;
    MEM8(esi + 3) = 0;
    PUSH32(esp, 0x00306FE7u); RECOMP_ABI_CALL(0x0030D680u, sub_0030D680); /* call 0x0030D680 */

loc_00306FE7: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00306FF4u); RECOMP_ABI_CALL(0x0030D090u, sub_0030D090); /* call 0x0030D090 */

loc_00306FF4: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307001u); RECOMP_ABI_CALL(0x0030D130u, sub_0030D130); /* call 0x0030D130 */

loc_00307001: ;
    esi = MEM32(esi + 0x1C);
    esp = esp + 0x30;
    PUSH32(esp, 0x0030700Cu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030700C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307010
 * Original: 0x00307010 - 0x0030713C (300 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00307010(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307010: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x0030702Bu); RECOMP_ABI_CALL(0x00306D70u, sub_00306D70); /* call 0x00306D70 */

loc_0030702B: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307048; /* jne: not equal / not zero */

loc_00307032: ;
    PUSH32(esp, 0x42B8C0);
    PUSH32(esp, 0x0030703Cu); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_0030703C: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00307048: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00307062; /* jge: greater or equal (signed >=) */

loc_0030704C: ;
    PUSH32(esp, 0x42B894);
    PUSH32(esp, 0x00307056u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00307056: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00307062: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030707C; /* jne: not equal / not zero */

loc_00307066: ;
    PUSH32(esp, 0x42B86C);
    PUSH32(esp, 0x00307070u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00307070: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030707C: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307088; /* jne: not equal / not zero */

loc_00307082: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00307088: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003070A3; /* je: equal / zero */

loc_0030708F: ;
    PUSH32(esp, 0x42B840);
    PUSH32(esp, 0x00307099u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00307099: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003070A3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    edi = edi << 0xB;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003070B0u); RECOMP_ABI_CALL(0x0030F470u, sub_0030F470); /* call 0x0030F470 */

loc_003070B0: ;
    ebx = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003070C3; /* jne: not equal / not zero */

loc_003070B9: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003070C3: ;
    PUSH32(esp, 0x003070C8u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003070C8: ;
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 8) = ebx;
    _fa = (uint32_t)(MEM32(0x5E83E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5E83E4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003070E4; /* jne: not equal / not zero */

loc_003070DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003070E1u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003070E1: ;
    esp = esp + 8;

loc_003070E4: ;
    PUSH32(esp, 0x003070E9u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003070E9: ;
    eax = MEM32(esi + 8);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003070F8u); RECOMP_ABI_CALL(0x00306F50u, sub_00306F50); /* call 0x00306F50 */

loc_003070F8: ;
    edi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00307122; /* jg: greater (signed >) */

loc_00307101: ;
    PUSH32(esp, 0x00307106u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00307106: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030711D; /* je: equal / zero */

loc_0030710D: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x00307113u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00307113: ;
    esp = esp + 4;
    MEM32(esi + 8) = 0;

loc_0030711D: ;
    PUSH32(esp, 0x00307122u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00307122: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x00307132u); RECOMP_ABI_CALL(0x00306D70u, sub_00306D70); /* call 0x00306D70 */

loc_00307132: ;
    esp = esp + 0x14;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00307140
 * Original: 0x00307140 - 0x00307164 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307140: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030715B; /* je: equal / zero */

loc_00307148: ;
    PUSH32(esp, 0x42B8E8);
    PUSH32(esp, 0x00307152u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00307152: ;
    esp = esp + 4;
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_0030715B: ;
    MEM32(esp + 0xC) = eax;
    g_seh_ebp = ebp; sub_00307010(); return; /* tail jmp 0x00307010 */

}

/**
 * sub_00307170
 * Original: 0x00307170 - 0x0030720A (154 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307170: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00307183u); RECOMP_ABI_CALL(0x00306D70u, sub_00306D70); /* call 0x00306D70 */

loc_00307183: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030719E; /* jne: not equal / not zero */

loc_0030718A: ;
    PUSH32(esp, 0x42B948);
    PUSH32(esp, 0x00307194u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_00307194: ;
    esp = esp + 4;
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030719E: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307205; /* je: equal / zero */

loc_003071A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003071B2; /* jne: not equal / not zero */

loc_003071A9: ;
    eax = MEM32(esi + 0x14);
    MEM8(esi + 1) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003071B2: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003071CB; /* jne: not equal / not zero */

loc_003071B9: ;
    PUSH32(esp, 0x42B91C);
    PUSH32(esp, 0x003071C3u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_003071C3: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003071CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003071D1u); RECOMP_ABI_CALL(0x0030D190u, sub_0030D190); /* call 0x0030D190 */

loc_003071D1: ;
    PUSH32(esp, 0x003071D6u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003071D6: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003071DFu); RECOMP_ABI_CALL(0x0030D0B0u, sub_0030D0B0); /* call 0x0030D0B0 */

loc_003071DF: ;
    eax = eax - MEM32(esi + 0x14);
    PUSH32(esp, esi);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x003071EBu); RECOMP_ABI_CALL(0x00306F00u, sub_00306F00); /* call 0x00306F00 */

loc_003071EB: ;
    MEM8(esi + 1) = 1;
    PUSH32(esp, 0x003071F4u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003071F4: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00307202u); RECOMP_ABI_CALL(0x00306D70u, sub_00306D70); /* call 0x00306D70 */

loc_00307202: ;
    esp = esp + 0x20;

loc_00307205: ;
    eax = MEM32(esi + 0x14);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307210
 * Original: 0x00307210 - 0x00307291 (129 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307210: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307258; /* jne: not equal / not zero */

loc_0030721B: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307225u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_00307225: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    MEM8(esi + 1) = LO8(eax);
    PUSH32(esp, 0x00307234u); RECOMP_ABI_CALL(0x0030D0B0u, sub_0030D0B0); /* call 0x0030D0B0 */

loc_00307234: ;
    SET_LO8(ecx, MEM8(esi + 1));
    eax = eax - edi;
    esp = esp + 8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00307249; /* je: equal / zero */

loc_00307244: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307257; /* jne: not equal / not zero */

loc_00307249: ;
    eax = eax + edi;
    PUSH32(esp, esi);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x00307254u); RECOMP_ABI_CALL(0x00306F00u, sub_00306F00); /* call 0x00306F00 */

loc_00307254: ;
    esp = esp + 4;

loc_00307257: ;
    POP32(esp, edi);

loc_00307258: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030728F; /* jne: not equal / not zero */

loc_0030725E: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00307267u); RECOMP_ABI_CALL(0x0033EB20u, sub_0033EB20); /* call 0x0033EB20 */

loc_00307267: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030728F; /* jne: not equal / not zero */

loc_0030726F: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307278u); RECOMP_ABI_CALL(0x0030D0B0u, sub_0030D0B0); /* call 0x0030D0B0 */

loc_00307278: ;
    eax = eax - MEM32(esi + 0x14);
    PUSH32(esp, esi);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x00307284u); RECOMP_ABI_CALL(0x00306F00u, sub_00306F00); /* call 0x00306F00 */

loc_00307284: ;
    esp = esp + 8;
    MEM8(esi + 1) = 1;
    MEM8(esi + 3) = 0;

loc_0030728F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003072A0
 * Original: 0x003072A0 - 0x003072CF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003072A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003072A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003072A6u); XML1_CHECK_CDECL0(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003072A6: ;
    esi = 0x5E8840;
    goto loc_003072B0;

    /* nop */

loc_003072B0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003072BE; /* jne: not equal / not zero */

loc_003072B5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003072BBu); XML1_CHECK_CDECL0(0x00307210u, sub_00307210); /* call 0x00307210 */

loc_003072BB: ;
    esp = esp + 4;

loc_003072BE: ;
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E8C80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5E8C80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003072B0; /* jl: less (signed <) */

loc_003072C9: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_003072D0
 * Original: 0x003072D0 - 0x003072F0 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003072D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003072D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003072EB; /* jne: not equal / not zero */

loc_003072D8: ;
    PUSH32(esp, 0x42B96C);
    PUSH32(esp, 0x003072E2u); RECOMP_ABI_CALL(0x00307410u, sub_00307410); /* call 0x00307410 */

loc_003072E2: ;
    esp = esp + 4;
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_003072EB: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003072F0
 * Original: 0x003072F0 - 0x00307359 (105 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003072F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003072F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00307303u); RECOMP_ABI_CALL(0x00306D70u, sub_00306D70); /* call 0x00306D70 */

loc_00307303: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00307357; /* je: equal / zero */

loc_0030730A: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307319; /* jne: not equal / not zero */

loc_00307310: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00307316u); RECOMP_ABI_CALL(0x00307170u, sub_00307170); /* call 0x00307170 */

loc_00307316: ;
    esp = esp + 4;

loc_00307319: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030733A; /* je: equal / zero */

loc_00307321: ;
    PUSH32(esp, edi);
    MEM8(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00307331u); RECOMP_ABI_CALL(0x0030D700u, sub_0030D700); /* call 0x0030D700 */

loc_00307331: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00307337u); RECOMP_ABI_CALL(0x0030D730u, sub_0030D730); /* call 0x0030D730 */

loc_00307337: ;
    esp = esp + 8;

loc_0030733A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 1);
    ecx = 0x11;
    edi = esi;
    PUSH32(esp, 3);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x00307353u); RECOMP_ABI_CALL(0x00306D70u, sub_00306D70); /* call 0x00306D70 */

loc_00307353: ;
    esp = esp + 0x14;
    POP32(esp, edi);

loc_00307357: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307360
 * Original: 0x00307360 - 0x00307381 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307360: ;
    PUSH32(esp, esi);
    esi = 0x5E8840;

loc_00307366: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307374; /* jne: not equal / not zero */

loc_0030736B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00307371u); RECOMP_ABI_CALL(0x003072F0u, sub_003072F0); /* call 0x003072F0 */

loc_00307371: ;
    esp = esp + 4;

loc_00307374: ;
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5E8C80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5E8C80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00307366; /* jl: less (signed <) */

loc_0030737F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307390
 * Original: 0x00307390 - 0x003073E6 (86 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307390: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003073A8u); RECOMP_ABI_CALL(0x00306D70u, sub_00306D70); /* call 0x00306D70 */

loc_003073A8: ;
    esp = esp + 0x14;
    PUSH32(esp, 0x003073B0u); RECOMP_ABI_CALL(0x00306E10u, sub_00306E10); /* call 0x00306E10 */

loc_003073B0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003073D0; /* je: equal / zero */

loc_003073B6: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003073BEu); RECOMP_ABI_CALL(0x00306E70u, sub_00306E70); /* call 0x00306E70 */

loc_003073BE: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_003073D0; /* jge: greater or equal (signed >=) */

loc_003073C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003073CBu); RECOMP_ABI_CALL(0x003072F0u, sub_003072F0); /* call 0x003072F0 */

loc_003073CB: ;
    esp = esp + 4;
    esi = 0; /* xor self */

loc_003073D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x003073DDu); RECOMP_ABI_CALL(0x00306D70u, sub_00306D70); /* call 0x00306D70 */

loc_003073DD: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003073F0
 * Original: 0x003073F0 - 0x0030740B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003073F0(void)
{

loc_003073F0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x40;
    edi = 0x5F58E0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x5BED88) = eax;
    MEM32(0x5BED8C) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307410
 * Original: 0x00307410 - 0x0030744E (62 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307410(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307410: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F58E0);
    PUSH32(esp, 0x00307424u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00307424: ;
    eax = MEM32(0x5BED88);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00307441; /* je: equal / zero */

loc_00307430: ;
    ecx = MEM32(0x5BED8C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F58E0);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030743Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030743E: ;
    esp = esp + 8;

loc_00307441: ;
    MEM32(esp + 4) = 0x5F58E0;
    g_seh_ebp = ebp; sub_0030BAD0(); return; /* tail jmp 0x0030BAD0 */

}

/**
 * sub_00307450
 * Original: 0x00307450 - 0x003074A1 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307450: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F58E0);
    PUSH32(esp, 0x00307464u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00307464: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F58E0);
    PUSH32(esp, 0x00307478u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_00307478: ;
    eax = MEM32(0x5BED88);
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00307495; /* je: equal / zero */

loc_00307484: ;
    edx = MEM32(0x5BED8C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5F58E0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00307492u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00307492: ;
    esp = esp + 8;

loc_00307495: ;
    PUSH32(esp, 0x5F58E0);
    PUSH32(esp, 0x0030749Fu); RECOMP_ABI_CALL(0x0030BAD0u, sub_0030BAD0); /* call 0x0030BAD0 */

loc_0030749F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003074B0
 * Original: 0x003074B0 - 0x00307517 (103 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003074B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003074B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    /* nop */

loc_003074C0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(ecx + esi) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_003074D7; /* je: equal / zero */

loc_003074CF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003074C0; /* jl: less (signed <) */

loc_003074D5: ;
    goto loc_003074DB;

loc_003074D7: ;
    MEM8(ecx + esi) = 0;

loc_003074DB: ;
    eax = 0x5BED68;
    edx = eax + 1;

loc_003074E3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003074E3; /* jne: not equal / not zero */

loc_003074EA: ;
    eax = eax - edx;
    ecx = eax;
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003074F9; /* jl: less (signed <) */

loc_003074F7: ;
    ecx = eax;

loc_003074F9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00307510; /* jle: less or equal (signed <=) */

loc_003074FF: ;
    edi = ecx + 0x5BED67;

loc_00307505: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax + esi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00307505; /* jl: less (signed <) */

loc_00307510: ;
    POP32(esp, edi);
    MEM8(eax + esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307520
 * Original: 0x00307520 - 0x00307594 (116 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307520: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307536u); RECOMP_ABI_CALL(0x003074B0u, sub_003074B0); /* call 0x003074B0 */

loc_00307536: ;
    eax = edi;
    esp = esp + 0xC;
    edx = eax + 1;
    edi = edi;

loc_00307540: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307540; /* jne: not equal / not zero */

loc_00307547: ;
    eax = eax - edx;
    esi = esi - eax;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CB044);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00307558u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_00307558: ;
    eax = edi;
    esp = esp + 0xC;
    edx = eax + 1;

loc_00307560: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307560; /* jne: not equal / not zero */

loc_00307567: ;
    ecx = edi;
    eax = eax - edx;
    esi = ecx + 1;
    edi = edi;

loc_00307570: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307570; /* jne: not equal / not zero */

loc_00307577: ;
    edx = 4;
    edx = edx - eax;
    eax = MEM32(esp + 0x10);
    ecx = ecx - esi;
    PUSH32(esp, edx);
    ecx = ecx + edi;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030758Eu); RECOMP_ABI_CALL(0x003074B0u, sub_003074B0); /* call 0x003074B0 */

loc_0030758E: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003075A0
 * Original: 0x003075A0 - 0x003075A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003075A0(void)
{

loc_003075A0: ;
    eax = 0x476668;
    esp += 4; return; /* ret */

}

/**
 * sub_003075B0
 * Original: 0x003075B0 - 0x003075D2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003075B0(void)
{

loc_003075B0: ;
    eax = MEM32(0x42B994);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x41;
    edi = 0x5F57C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0xE10;
    edi = 0x5F1F80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003075E0
 * Original: 0x003075E0 - 0x0030768B (171 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003075E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003075E0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003075FE; /* jne: not equal / not zero */

loc_003075E8: ;
    edx = MEM32(esp + 4);
    eax = 0x5F57C0;
    edx = edx - eax;

loc_003075F3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003075F3; /* jne: not equal / not zero */

loc_003075FD: ;
    esp += 4; return; /* ret */

loc_003075FE: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_0030761F; /* jne: not equal / not zero */

loc_0030760A: ;
    ecx = 0x5F57C0;
    esi = edi;
    esi = esi - ecx;

loc_00307613: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307613; /* jne: not equal / not zero */

loc_0030761D: ;
    goto loc_0030765F;

loc_0030761F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030763B; /* jne: not equal / not zero */

loc_00307624: ;
    SET_LO8(ecx, MEM8(0x5F57C0));
    MEM8(edi) = LO8(ecx);
    SET_LO8(edx, MEM8(0x5F57C1));
    MEM8(edi + 1) = LO8(edx);
    MEM8(edi + 2) = 0;
    goto loc_0030765F;

loc_0030763B: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x3A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030765C; /* je: equal / zero */

loc_00307641: ;
    ecx = 0x5F57C0;
    esi = edi;
    esi = esi - ecx;
    /* nop */

loc_00307650: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307650; /* jne: not equal / not zero */

loc_0030765A: ;
    goto loc_0030765F;

loc_0030765C: ;
    MEM8(edi) = 0;

loc_0030765F: ;
    edx = eax;

loc_00307661: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307661; /* jne: not equal / not zero */

loc_00307668: ;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00307670;

    /* nop */

loc_00307670: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307670; /* jne: not equal / not zero */

loc_00307678: ;
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307690
 * Original: 0x00307690 - 0x0030778A (250 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00307690(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00307690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003076A2u); RECOMP_ABI_CALL(0x0030F9E0u, sub_0030F9E0); /* call 0x0030F9E0 */

loc_003076A2: ;
    edi = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003076AEu); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_003076AE: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003076B3u); RECOMP_ABI_CALL(0x0030F9E0u, sub_0030F9E0); /* call 0x0030F9E0 */

loc_003076B3: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003076BFu); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_003076BF: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003076C9u); RECOMP_ABI_CALL(0x0034D3D9u, sub_0034D3D9); /* call 0x0034D3D9 */

loc_003076C9: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003076DFu); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_003076DF: ;
    ecx = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x24);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x18);
    esi = eax;
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    ecx = ebx;
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_00307779; /* jg: greater (signed >) */

loc_00307703: ;
    if (CMP_L(_fas, _fbs)) goto loc_00307710; /* jl: less (signed <) */

loc_00307705: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00307779; /* ja: above (unsigned >) */

loc_0030770B: ;
    goto loc_00307710;

    /* nop */

loc_00307710: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00307779; /* jl: less (signed <) */

loc_00307714: ;
    if (CMP_G(_fas, _fbs)) goto loc_0030771C; /* jg: greater (signed >) */

loc_00307716: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00307779; /* jbe: below or equal (unsigned <=) */

loc_0030771C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307721u); RECOMP_ABI_CALL(0x0030F9E0u, sub_0030F9E0); /* call 0x0030F9E0 */

loc_00307721: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030772Du); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_0030772D: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00307737u); RECOMP_ABI_CALL(0x0034D3D9u, sub_0034D3D9); /* call 0x0034D3D9 */

loc_00307737: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030774Du); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0030774D: ;
    ecx = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x24);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x18);
    esi = eax;
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    ecx = ebx;
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00307710; /* jl: less (signed <) */

loc_00307771: ;
    if (CMP_G(_fas, _fbs)) goto loc_00307779; /* jg: greater (signed >) */

loc_00307773: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00307710; /* jbe: below or equal (unsigned <=) */

loc_00307779: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030777Fu); RECOMP_ABI_CALL(0x0030FA20u, sub_0030FA20); /* call 0x0030FA20 */

loc_0030777F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00307790
 * Original: 0x00307790 - 0x003077B0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307790: ;
    eax = MEM32(0x5BEDAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003077AF; /* je: equal / zero */

loc_00307799: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BEDB0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003077ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003077AC: ;
    esp = esp + 0xC;

loc_003077AF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003077B0
 * Original: 0x003077B0 - 0x00307884 (212 bytes, 78 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003077B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003077B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5BEDB4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307874; /* jne: not equal / not zero */

loc_003077C1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003077D9u); RECOMP_ABI_CALL(0x001A1D76u, sub_001A1D76); /* call 0x001A1D76 */

loc_003077D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030784F; /* jne: not equal / not zero */

loc_003077DD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003077E3u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_003077E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E3 (32-bit) */
    SET_LO8(ebx, 3);
    if (CMP_A(_fa, _fb)) goto loc_00307813; /* ja: above (unsigned >) */

loc_003077EC: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00307803; /* je: equal / zero */

loc_003077EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307821; /* jne: not equal / not zero */

loc_003077F3: ;
    PUSH32(esp, 0x42BA20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003077FEu); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_003077FE: ;
    esp = esp + 8;
    goto loc_0030783F;

loc_00307803: ;
    PUSH32(esp, 0x42B9F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030780Eu); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_0030780E: ;
    esp = esp + 8;
    goto loc_0030783F;

loc_00307813: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00307821; /* jb: below (unsigned <) */

loc_0030781A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00307842; /* jbe: below or equal (unsigned <=) */

loc_00307821: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42B9C8);
    PUSH32(esp, 0x5F1E40);
    PUSH32(esp, 0x00307831u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00307831: ;
    PUSH32(esp, 0x5F1E40);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030783Cu); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_0030783C: ;
    esp = esp + 0x14;

loc_0030783F: ;
    MEM8(esi + 1) = LO8(ebx);

loc_00307842: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0030784B; /* jne: not equal / not zero */

loc_00307848: ;
    MEM32(esi + 0x58) = edi;

loc_0030784B: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030784F: ;
    _fa = (uint32_t)(MEM32(0x5BEDBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5BEDBC), 1 (32-bit) */
    MEM32(esi + 0x58) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00307869; /* jne: not equal / not zero */

loc_0030785B: ;
    MEM8(esi + 1) = 3;
    POP32(esp, esi);
    MEM32(0x5BEDBC) = edi;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00307869: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00307874: ;
    ecx = MEM32(0x5BEDB8);
    edx = MEM32(esp + 0xC);
    MEM32(edx + 0x58) = ecx;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307890
 * Original: 0x00307890 - 0x003078B6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307890: ;
    eax = 0x5F1F81;

loc_00307895: ;
    SET_LO8(ecx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003078A1; /* je: equal / zero */

loc_0030789C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003078B0; /* je: equal / zero */

loc_003078A1: ;
    eax = eax + 0x168;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F57C1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F57C1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00307895; /* jl: less (signed <) */

loc_003078AD: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003078B0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003078C0
 * Original: 0x003078C0 - 0x003078D4 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003078C0(void)
{

loc_003078C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x5BEDAC) = eax;
    MEM32(0x5BEDB0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003078E0
 * Original: 0x003078E0 - 0x00307909 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003078E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003078E0: ;
    eax = MEM32(0x5BEDC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003078FE; /* je: equal / zero */

loc_003078E9: ;
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003078F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003078F0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esp = esp + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00307908; /* jg: greater (signed >) */

loc_003078F8: ;
    if (TEST_S(_fas, _fbs)) goto loc_003078FE; /* jl: less (signed <) */

loc_003078FA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_AE(_fa & _fb, 0)) goto loc_00307908; /* jae: above or equal (unsigned >=) */

loc_003078FE: ;
    eax = 0xFFFFF800u;
    edx = 0x7FFFFFFF;

loc_00307908: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00307910
 * Original: 0x00307910 - 0x00307954 (68 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307910: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x104;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307935; /* jne: not equal / not zero */

loc_0030791E: ;
    PUSH32(esp, 0x42BA68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307929u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307929: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp = esp + 0x104;
    esp += 4; return; /* ret */

loc_00307935: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307940u); RECOMP_ABI_CALL(0x003075E0u, sub_003075E0); /* call 0x003075E0 */

loc_00307940: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030794Au); RECOMP_ABI_CALL(0x003078E0u, sub_003078E0); /* call 0x003078E0 */

loc_0030794A: ;
    esp = esp + 0xC;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_00307960
 * Original: 0x00307960 - 0x0030796B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307960(void)
{

loc_00307960: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00307970
 * Original: 0x00307970 - 0x003079A4 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307970: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = 0x5F1F80;
    /* nop */

loc_00307980: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307995; /* je: equal / zero */

loc_00307985: ;
    ecx = ecx + 0x168;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F57C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5F57C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00307980; /* jl: less (signed <) */

loc_00307994: ;
    esp += 4; return; /* ret */

loc_00307995: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x168);
    edx = edx + 0x5F1F80;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003079B0
 * Original: 0x003079B0 - 0x00307A27 (119 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003079B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003079B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x44);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003079C5; /* je: equal / zero */

loc_003079BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003079C5u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_003079C5: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x7FF)) >> 32) & 1);
    eax = eax + 0x7FF;
    PUSH32(esp, 0x800);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ebx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 8) = 0x800;
    PUSH32(esp, 0x003079E6u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_003079E6: ;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM8(esi + 1) = LO8(ebx);
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    eax = esi + 0x34;
    MEM32(eax) = edx;
    PUSH32(esp, ebx);
    MEM32(eax + 4) = edx;
    PUSH32(esp, ebx);
    MEM32(eax + 8) = edx;
    PUSH32(esp, 1);
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, ebx);
    MEM32(eax + 0x10) = edx;
    PUSH32(esp, 0x00307A1Eu); RECOMP_ABI_CALL(0x0019F2A9u, sub_0019F2A9); /* call 0x0019F2A9 */

loc_00307A1E: ;
    MEM32(esi + 0x44) = eax;
    MEM8(esi) = 1;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307A30
 * Original: 0x00307A30 - 0x00307A4D (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307A30: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00307A42; /* je: equal / zero */

loc_00307A3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307A42u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00307A42: ;
    ecx = 0x5A;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307A50
 * Original: 0x00307A50 - 0x00307AC6 (118 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307A50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307A6B; /* jne: not equal / not zero */

loc_00307A59: ;
    PUSH32(esp, 0x42BA94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00307A64u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307A64: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00307A6B: ;
    PUSH32(esp, 0x00307A70u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00307A70: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307A7E; /* jne: not equal / not zero */

loc_00307A78: ;
    eax = MEM32(esp + 0xC);
    goto loc_00307A9D;

loc_00307A7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307A8F; /* jne: not equal / not zero */

loc_00307A83: ;
    ecx = MEM32(esi + 0x18);
    ecx = ecx + MEM32(esp + 0xC);
    MEM32(esi + 0x1C) = ecx;
    goto loc_00307AA0;

loc_00307A8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307AA0; /* jne: not equal / not zero */

loc_00307A94: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1C);
    eax = eax + edx;

loc_00307A9D: ;
    MEM32(esi + 0x1C) = eax;

loc_00307AA0: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00307AAC; /* jl: less (signed <) */

loc_00307AAA: ;
    eax = ecx;

loc_00307AAC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    MEM32(esi + 0x1C) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00307AC1u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00307AC1: ;
    eax = MEM32(esi + 0x1C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307AD0
 * Original: 0x00307AD0 - 0x00307AED (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307AD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307AE9; /* jne: not equal / not zero */

loc_00307AD8: ;
    PUSH32(esp, 0x42BA94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307AE3u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307AE3: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00307AE9: ;
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00307AF0
 * Original: 0x00307AF0 - 0x00307CEC (508 bytes, 195 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307AF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307AF0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307B11; /* jne: not equal / not zero */

loc_00307AFC: ;
    PUSH32(esp, 0x42BA94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00307B07u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307B07: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00307B11: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00307B2E; /* jge: greater or equal (signed >=) */

loc_00307B19: ;
    PUSH32(esp, 0x42BB30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00307B24u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307B24: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00307B2E: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00307B3B; /* jne: not equal / not zero */

loc_00307B30: ;
    MEM8(esi + 1) = 1;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00307B3B: ;
    PUSH32(esp, 0x00307B40u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00307B40: ;
    PUSH32(esp, 0x00307B45u); RECOMP_ABI_CALL(0x00307890u, sub_00307890); /* call 0x00307890 */

loc_00307B45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307B56; /* jne: not equal / not zero */

loc_00307B4A: ;
    PUSH32(esp, 0x00307B4Fu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00307B4F: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00307B56: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF800u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFF800u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307BBB; /* jne: not equal / not zero */

loc_00307B67: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x7FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307BA3; /* jne: not equal / not zero */

loc_00307B6F: ;
    eax = esi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307B78u); RECOMP_ABI_CALL(0x003078E0u, sub_003078E0); /* call 0x003078E0 */

loc_00307B78: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 8);
    edi = MEM32(esi + 0x10);
    esp = esp + 4;
    MEM32(esi + 0x14) = edx;
    ebp = MEM32(esi + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00307B94u); RECOMP_ABI_CALL(0x00343BF0u, sub_00343BF0); /* call 0x00343BF0 */

loc_00307B94: ;
    ecx = ecx | ebx;
    MEM32(esp + 0x14) = edx;
    MEM32(esi + 0x18) = eax;
    if ((ecx == 0)) goto loc_00307BA3; /* je: equal / zero */

loc_00307B9F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = eax;

loc_00307BA3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF800u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFF800u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307BBB; /* jne: not equal / not zero */

loc_00307BAB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x7FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307BBB; /* jne: not equal / not zero */

loc_00307BB3: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = eax;
    goto loc_00307BBD;

loc_00307BBB: ;
    eax = 0; /* xor self */

loc_00307BBD: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(esi + 0x1C);
    ecx = ecx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00307BDC; /* jge: greater or equal (signed >=) */

loc_00307BDA: ;
    ecx = edx;

loc_00307BDC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    MEM32(esi + 0x28) = ecx;
    edi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00307BEE; /* jl: less (signed <) */

loc_00307BE9: ;
    edi = 0x200;

loc_00307BEE: ;
    ecx = MEM32(esi + 8);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    MEM32(esi + 0x28) = edi;
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = eax;
    ebx = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00307C1C; /* jne: not equal / not zero */

loc_00307C03: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307C0D; /* je: equal / zero */

loc_00307C09: ;
    MEM8(esi + 1) = 1;

loc_00307C0D: ;
    PUSH32(esp, 0x00307C12u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00307C12: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00307C1C: ;
    MEM32(esi + 0x48) = ebp;
    MEM32(esi + 0x4C) = ebx;
    MEM32(esi + 0x50) = edi;
    MEM8(esi + 1) = 2;
    MEM32(esi + 0x54) = 1;
    MEM32(esi + 0x58) = 0;
    PUSH32(esp, 0x00307C3Cu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00307C3C: ;
    eax = MEM32(0x5BEDB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307CC1; /* jne: not equal / not zero */

loc_00307C45: ;
    edx = edi;
    edx = edx & 0x800007FFu;
    if (((int32_t)edx >= 0)) goto loc_00307C57; /* jns: not sign (positive) */

loc_00307C4F: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFF800u;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00307C57: ;
    if (_flags /* jne: not equal / not zero */) goto loc_00307CA8;

loc_00307C59: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00307CA8; /* jl: less (signed <) */

loc_00307C5D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x800);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00307C6Bu); RECOMP_ABI_CALL(0x00343B30u, sub_00343B30); /* call 0x00343B30 */

loc_00307C6B: ;
    eax = eax | edx;
    if ((eax == 0)) goto loc_00307C88; /* je: equal / zero */

loc_00307C6F: ;
    PUSH32(esp, 0x42BB10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00307C7Bu); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307C7B: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00307C88: ;
    _fa = (uint32_t)(MEM8(esp + 0x24)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x24), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00307CC1; /* je: equal / zero */

loc_00307C8F: ;
    PUSH32(esp, 0x42BAEC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00307C9Bu); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307C9B: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00307CA8: ;
    PUSH32(esp, 0x42BAD0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00307CB4u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307CB4: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00307CC1: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307CE1; /* jne: not equal / not zero */

loc_00307CC9: ;
    PUSH32(esp, 0x42BAAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00307CD4u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307CD4: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00307CE1: ;
    eax = MEM32(esi + 0x28);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00307CF0
 * Original: 0x00307CF0 - 0x00307D3F (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307CF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307CF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_00307CF8: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00307D3C; /* je: equal / zero */

loc_00307CFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00307D05u); RECOMP_ABI_CALL(0x003077B0u, sub_003077B0); /* call 0x003077B0 */

loc_00307D05: ;
    esp = esp + 4;
    PUSH32(esp, 0x00307D0Du); RECOMP_ABI_CALL(0x00307690u, sub_00307690); /* call 0x00307690 */

loc_00307D0D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x61A8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00307CF8; /* jl: less (signed <) */

loc_00307D16: ;
    PUSH32(esp, 0x42BB50);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00307D22u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307D22: ;
    esp = esp + 8;
    PUSH32(esp, 0x00307D2Au); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00307D2A: ;
    POP32(esp, edi);
    MEM8(esi + 1) = 3;
    MEM32(esi + 0x58) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

loc_00307D3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307D40
 * Original: 0x00307D40 - 0x00307D5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307D40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307D59; /* jne: not equal / not zero */

loc_00307D48: ;
    PUSH32(esp, 0x42BA94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307D53u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307D53: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00307D59: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00307D60
 * Original: 0x00307D60 - 0x00307D7D (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307D60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307D79; /* jne: not equal / not zero */

loc_00307D68: ;
    PUSH32(esp, 0x42BB80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307D73u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307D73: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00307D79: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00307D80
 * Original: 0x00307D80 - 0x00307E32 (178 bytes, 70 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307D80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307D80: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00307DA5; /* jne: not equal / not zero */

loc_00307D8C: ;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    MEM32(esp + 8) = 0x42BBB4;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00307790(); return; /* tail jmp 0x00307790 */

loc_00307DA5: ;
    ecx = MEM32(esi + 8);
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8000001Fu;
    if (((int32_t)eax >= 0)) goto loc_00307DB6; /* jns: not sign (positive) */

loc_00307DB1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFE0u;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00307DB6: ;
    if (_flags /* je: equal / zero */) goto loc_00307DD1;

loc_00307DB8: ;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    MEM32(esp + 8) = 0x42BB98;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_00307790(); return; /* tail jmp 0x00307790 */

loc_00307DD1: ;
    eax = MEM32(esi + 0x1C);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax;
    eax = ecx;
    MEM32(esp + 0x10) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    edi = eax;
    eax = ecx + -1;
    ebx = edx;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esi + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307E04u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_00307E04: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x00307E14u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_00307E14: ;
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307E24u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_00307E24: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = edx;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00307E40
 * Original: 0x00307E40 - 0x00307E5D (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307E40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307E59; /* jne: not equal / not zero */

loc_00307E48: ;
    PUSH32(esp, 0x42BA94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307E53u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307E53: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00307E59: ;
    eax = MEM32(eax + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_00307E60
 * Original: 0x00307E60 - 0x00307EE3 (131 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307E60: ;
    esp = esp - 0x14;
    eax = MEM32(0x42BBCC);
    ecx = MEM32(0x42BBD0);
    edx = MEM32(0x42BBD4);
    MEM32(esp) = eax;
    eax = MEM32(0x42BBD8);
    PUSH32(esp, esi);
    MEM32(esp + 8) = ecx;
    SET_LO8(ecx, MEM8(0x42BBDC));
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = edx;
    MEM8(esp + 0x18) = LO8(ecx);
    esi = 0; /* xor self */
    /* nop */

loc_00307EA0: ;
    SET_LO8(edx, MEM8(esi + edi));
    eax = eax << 4;
    ecx = 0; /* xor self */

loc_00307EA8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + ecx + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esp + ecx + 8) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307ED5; /* je: equal / zero */

loc_00307EAE: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + ecx + 9)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esp + ecx + 9) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307ECA; /* je: equal / zero */

loc_00307EB4: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + ecx + 0xA)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esp + ecx + 0xA) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307ECD; /* je: equal / zero */

loc_00307EBA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + ecx + 0xB)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esp + ecx + 0xB) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00307ED2; /* je: equal / zero */

loc_00307EC0: ;
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00307EA8; /* jb: below (unsigned <) */

loc_00307EC8: ;
    goto loc_00307ED5;

loc_00307ECA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00307ED5;

loc_00307ECD: ;
    ecx = ecx + 2;
    goto loc_00307ED5;

loc_00307ED2: ;
    ecx = ecx + 3;

loc_00307ED5: ;
    eax = eax + ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00307EA0; /* jb: below (unsigned <) */

loc_00307EDD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00307EF0
 * Original: 0x00307EF0 - 0x00307F45 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307EF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 3;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307EFEu); RECOMP_ABI_CALL(0x00307E60u, sub_00307E60); /* call 0x00307E60 */

loc_00307EFE: ;
    ecx = MEM32(0x5BEDB4);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307F0F; /* jne: not equal / not zero */

loc_00307F0B: ;
    PUSH32(esp, 1);
    goto loc_00307F11;

loc_00307F0F: ;
    PUSH32(esp, 0);

loc_00307F11: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307F17u); RECOMP_ABI_CALL(0x0019EDB6u, sub_0019EDB6); /* call 0x0019EDB6 */

loc_00307F17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307F43; /* jne: not equal / not zero */

loc_00307F1C: ;
    PUSH32(esp, 0x00307F21u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00307F21: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x42BBE0);
    PUSH32(esp, 0x5F1E40);
    PUSH32(esp, 0x00307F32u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00307F32: ;
    PUSH32(esp, 0x5F1E40);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00307F3Eu); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00307F3E: ;
    esp = esp + 0x18;
    eax = 0; /* xor self */

loc_00307F43: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307F50
 * Original: 0x00307F50 - 0x0030805A (266 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00307F50: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x104;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00307F73; /* je: equal / zero */

loc_00307F5E: ;
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00307F6Eu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00307F6E: ;
    esp = esp + 0xC;
    goto loc_00307F7C;

loc_00307F73: ;
    MEM8(esp) = 0x2E;
    MEM8(esp + 1) = 0;

loc_00307F7C: ;
    eax = esp;
    edx = eax + 1;

loc_00307F82: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307F82; /* jne: not equal / not zero */

loc_00307F89: ;
    eax = eax - edx;
    edx = eax;
    if ((eax != 0)) goto loc_00307F97; /* jne: not equal / not zero */

loc_00307F8F: ;
    MEM8(esp) = 0x2E;
    MEM8(esp + 1) = LO8(ecx);

loc_00307F97: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x41;
    edi = 0x5F57C0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM8(esp + 5)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 5), 0x3A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307FC5; /* jne: not equal / not zero */

loc_00307FAD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00307FC5; /* jle: less or equal (signed <=) */

loc_00307FB2: ;
    eax = 0; /* xor self */

loc_00307FB4: ;
    SET_LO8(ecx, MEM8(esp + eax + 4));
    MEM8(eax + 0x5F57C0) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307FB4; /* jne: not equal / not zero */

loc_00307FC3: ;
    goto loc_0030801A;

loc_00307FC5: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 4), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00307FD3; /* jne: not equal / not zero */

loc_00307FCC: ;
    PUSH32(esp, 0x42BC08);
    goto loc_00307FD8;

loc_00307FD3: ;
    PUSH32(esp, 0x3ED080);

loc_00307FD8: ;
    PUSH32(esp, 0x5F57C0);
    PUSH32(esp, 0x00307FE2u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00307FE2: ;
    eax = esp + 0xC;
    esp = esp + 8;
    edx = eax;
    goto loc_00307FF0;

    /* nop */

loc_00307FF0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00307FF0; /* jne: not equal / not zero */

loc_00307FF7: ;
    edi = 0x5F57C0;
    eax = eax - edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_00308000: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308000; /* jne: not equal / not zero */

loc_00308008: ;
    PUSH32(esp, esi);
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

loc_0030801A: ;
    eax = 0x5F57C0;
    edx = eax + 1;

loc_00308022: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308022; /* jne: not equal / not zero */

loc_00308029: ;
    eax = eax - edx;
    _fa = (uint32_t)(MEM8(eax + 0x5F57BF)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x5F57BF), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308052; /* je: equal / zero */

loc_00308034: ;
    edi = 0x5F57C0;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_00308040: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308040; /* jne: not equal / not zero */

loc_00308048: ;
    SET_LO16(ecx, MEM16(0x3DB140));
    MEM16(edi) = LO16(ecx);

loc_00308052: ;
    POP32(esp, edi);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_00308060
 * Original: 0x00308060 - 0x00308065 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308060: ;
    g_seh_ebp = ebp; sub_00307790(); return; /* tail jmp 0x00307790 */

}

/**
 * sub_00308070
 * Original: 0x00308070 - 0x00308081 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308070(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308070: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x20);
    edx = MEM32(ecx + 0x24);
    SET_LO8(ecx, 0x20);
    g_seh_ebp = ebp; sub_00343440(); return; /* tail jmp 0x00343440 */

}

/**
 * sub_00308090
 * Original: 0x00308090 - 0x00308098 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308090(void)
{

loc_00308090: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_003080A0
 * Original: 0x003080A0 - 0x003080A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003080A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003080A0: ;
    g_seh_ebp = ebp; sub_00307910(); return; /* tail jmp 0x00307910 */

}

/**
 * sub_003080B0
 * Original: 0x003080B0 - 0x003080D0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003080B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003080B0: ;
    eax = MEM32(0x5BEDD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_003080CF; /* jle: less or equal (signed <=) */

loc_003080B9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BED90);
    { uint32_t _icall_target = MEM32(0x3C6C5C); PUSH32(esp, 0x003080C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003080C4: ;
    eax = MEM32(0x5BEDD8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x5BEDD8) = eax;

loc_003080CF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003080D0
 * Original: 0x003080D0 - 0x00308102 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003080D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003080D0: ;
    eax = MEM32(0x5BEDD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00308101; /* jle: less or equal (signed <=) */

loc_003080D9: ;
    eax = MEM32(0x5BEDD8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x5BEDD8) = eax;
    if ((_fas >= 0)) goto loc_003080F6; /* jns: not sign (positive) */

loc_003080E6: ;
    PUSH32(esp, 0x42BC0C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003080F2u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_003080F2: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003080F6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5BED90);
    { uint32_t _icall_target = MEM32(0x3C6C58); PUSH32(esp, 0x00308101u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00308101: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308110
 * Original: 0x00308110 - 0x00308135 (37 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308110: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5BEDD0);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0030812D; /* je: equal / zero */

loc_00308125: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ebx; PUSH32(esp, 0x00308127u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00308127: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0030812D: ;
    PUSH32(esp, 0x00308132u); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_00308132: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308140
 * Original: 0x00308140 - 0x003082B2 (370 bytes, 117 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308140: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030814Bu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030814B: ;
    edi = MEM32(esp + 0x1C);
    eax = 1;
    MEM32(edi + 0x54) = 0;
    MEM32(edi + 0x58) = eax;
    MEM32(0x5BEDB8) = eax;
    PUSH32(esp, 0x00308168u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00308168: ;
    eax = MEM32(0x5BEDB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ebx, 3);
    if (TEST_NZ(_fa, _fb)) goto loc_003081A2; /* jne: not equal / not zero */

loc_00308173: ;
    eax = MEM32(edi + 0x48);
    ecx = MEM32(edi + 0x4C);
    edx = MEM32(edi + 4);
    MEM32(esp + 0x10) = eax;
    MEM32(edi + 0x3C) = eax;
    eax = edi + 0x34;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x30);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = ecx;
    MEM32(edi + 0x40) = ecx;
    ecx = MEM32(edi + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030819Eu); RECOMP_ABI_CALL(0x0019DDC9u, sub_0019DDC9); /* call 0x0019DDC9 */

loc_0030819E: ;
    esi = eax;
    goto loc_0030820E;

loc_003081A2: ;
    ecx = MEM32(edi + 0x48);
    edx = MEM32(edi + 0x4C);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x003081B5u); RECOMP_ABI_CALL(0x003080B0u, sub_003080B0); /* call 0x003080B0 */

loc_003081B5: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(edi + 0x30);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003081CAu); RECOMP_ABI_CALL(0x0019E010u, sub_0019E010); /* call 0x0019E010 */

loc_003081CA: ;
    PUSH32(esp, 0x003081CFu); RECOMP_ABI_CALL(0x003080D0u, sub_003080D0); /* call 0x003080D0 */

loc_003081CF: ;
    eax = MEM32(edi + 0x30);
    edx = MEM32(edi + 0x50);
    esi = MEM32(edi + 4);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    ecx = esp + 0x10;
    PUSH32(esp, 0x003081E4u); RECOMP_ABI_CALL(0x00308110u, sub_00308110); /* call 0x00308110 */

loc_003081E4: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308207; /* je: equal / zero */

loc_003081ED: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308207; /* jne: not equal / not zero */

loc_003081F5: ;
    PUSH32(esp, 0x42BD28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00308201u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00308201: ;
    esp = esp + 8;
    MEM8(edi + 1) = LO8(ebx);

loc_00308207: ;
    ecx = MEM32(esp + 0xC);
    MEM32(edi + 0x50) = ecx;

loc_0030820E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(0x5BEDB8) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_003082A9; /* jne: not equal / not zero */

loc_00308220: ;
    PUSH32(esp, 0x00308225u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00308225: ;
    PUSH32(esp, 0x0030822Au); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_0030822A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00308257; /* ja: above (unsigned >) */

loc_0030822F: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00308250; /* je: equal / zero */

loc_00308231: ;
    ecx = eax;
    ecx = ecx - 6;
    if ((ecx == 0)) goto loc_00308249; /* je: equal / zero */

loc_00308238: ;
    ecx = ecx - 2;
    if ((ecx == 0)) goto loc_00308286; /* je: equal / zero */

loc_0030823D: ;
    ecx = ecx - 0x16;
    if ((ecx != 0)) goto loc_00308265; /* jne: not equal / not zero */

loc_00308242: ;
    PUSH32(esp, 0x42BCFC);
    goto loc_0030828B;

loc_00308249: ;
    PUSH32(esp, 0x42BCD4);
    goto loc_0030828B;

loc_00308250: ;
    PUSH32(esp, 0x42BC90);
    goto loc_0030828B;

loc_00308257: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308298; /* je: equal / zero */

loc_0030825E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6F8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308286; /* je: equal / zero */

loc_00308265: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42BC60);
    PUSH32(esp, 0x5F1E40);
    PUSH32(esp, 0x00308275u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00308275: ;
    PUSH32(esp, 0x5F1E40);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00308281u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00308281: ;
    esp = esp + 0x14;
    goto loc_00308295;

loc_00308286: ;
    PUSH32(esp, 0x42BC3C);

loc_0030828B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00308292u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00308292: ;
    esp = esp + 8;

loc_00308295: ;
    MEM8(edi + 1) = LO8(ebx);

loc_00308298: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003082A4; /* jne: not equal / not zero */

loc_0030829D: ;
    MEM32(edi + 0x58) = 0;

loc_003082A4: ;
    PUSH32(esp, 0x003082A9u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003082A9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003082C0
 * Original: 0x003082C0 - 0x00308348 (136 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003082C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003082C0: ;
    eax = MEM32(esp + 8);
    eax = eax + 0xFFFFFF38u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00308344; /* ja: above (unsigned >) */

loc_003082CE: ;
    eax = ZX8(MEM8(eax + 0x30836C));
    { uint32_t _jt = MEM32(eax * 4 + 0x308348); /* switch: 9 entries, 9 targets */
    if (_jt == 0x003082DCu) goto loc_003082DC;
    if (_jt == 0x003082EAu) goto loc_003082EA;
    if (_jt == 0x003082F8u) goto loc_003082F8;
    if (_jt == 0x00308306u) goto loc_00308306;
    if (_jt == 0x00308314u) goto loc_00308314;
    if (_jt == 0x00308322u) goto loc_00308322;
    if (_jt == 0x00308330u) goto loc_00308330;
    if (_jt == 0x0030833Eu) goto loc_0030833E;
    if (_jt == 0x00308344u) goto loc_00308344;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003082DC: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003082E6u); RECOMP_ABI_CALL(0x00307960u, sub_00307960); /* call 0x00307960 */

loc_003082E6: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_003082EA: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003082F4u); RECOMP_ABI_CALL(0x00308070u, sub_00308070); /* call 0x00308070 */

loc_003082F4: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_003082F8: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00308302u); RECOMP_ABI_CALL(0x00308090u, sub_00308090); /* call 0x00308090 */

loc_00308302: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00308306: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00308310u); RECOMP_ABI_CALL(0x002123A0u, sub_002123A0); /* call 0x002123A0 */

loc_00308310: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00308314: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030831Eu); RECOMP_ABI_CALL(0x003080A0u, sub_003080A0); /* call 0x003080A0 */

loc_0030831E: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00308322: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030832Cu); RECOMP_ABI_CALL(0x002123A0u, sub_002123A0); /* call 0x002123A0 */

loc_0030832C: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00308330: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030833Au); RECOMP_ABI_CALL(0x003080A0u, sub_003080A0); /* call 0x003080A0 */

loc_0030833A: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0030833E: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00308344: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_003083E0
 * Original: 0x003083E0 - 0x0030841A (58 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003083E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003083E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003083F9; /* jne: not equal / not zero */

loc_003083E9: ;
    PUSH32(esp, 0x42BA94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003083F4u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_003083F4: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003083F9: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308418; /* je: equal / zero */

loc_00308400: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308411; /* jne: not equal / not zero */

loc_00308404: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030840Au); RECOMP_ABI_CALL(0x00307CF0u, sub_00307CF0); /* call 0x00307CF0 */

loc_0030840A: ;
    esp = esp + 4;
    MEM8(esi + 1) = 0;

loc_00308411: ;
    MEM32(esi + 0x54) = 0;

loc_00308418: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308420
 * Original: 0x00308420 - 0x003084E4 (196 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308420: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00308427u); RECOMP_ABI_CALL(0x0030F9E0u, sub_0030F9E0); /* call 0x0030F9E0 */

loc_00308427: ;
    esi = MEM32(esp + 0xC);
    ebx = eax;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x73 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003084CE; /* je: equal / zero */

loc_00308437: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x53) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x53 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003084CE; /* je: equal / zero */

loc_0030843F: ;
    eax = MEM32(0x5BEDB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00308465; /* jne: not equal / not zero */

loc_00308449: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x70000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00308461u); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_00308461: ;
    edi = eax;
    goto loc_00308489;

loc_00308465: ;
    PUSH32(esp, 0x0030846Au); RECOMP_ABI_CALL(0x003080B0u, sub_003080B0); /* call 0x003080B0 */

loc_0030846A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10000000);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00308482u); RECOMP_ABI_CALL(0x0019E34Bu, sub_0019E34B); /* call 0x0019E34B */

loc_00308482: ;
    edi = eax;
    PUSH32(esp, 0x00308489u); RECOMP_ABI_CALL(0x003080D0u, sub_003080D0); /* call 0x003080D0 */

loc_00308489: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003084BF; /* jne: not equal / not zero */

loc_0030848E: ;
    PUSH32(esp, 0x00308493u); RECOMP_ABI_CALL(0x001A1D09u, sub_001A1D09); /* call 0x001A1D09 */

loc_00308493: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x42BD6C);
    PUSH32(esp, 0x5F1E40);
    PUSH32(esp, 0x003084A4u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_003084A4: ;
    PUSH32(esp, 0x5F1E40);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003084B0u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_003084B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003084B6u); RECOMP_ABI_CALL(0x0030FA20u, sub_0030FA20); /* call 0x0030FA20 */

loc_003084B6: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003084BF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003084C5u); RECOMP_ABI_CALL(0x0030FA20u, sub_0030FA20); /* call 0x0030FA20 */

loc_003084C5: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003084CE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003084D4u); RECOMP_ABI_CALL(0x00307EF0u, sub_00307EF0); /* call 0x00307EF0 */

loc_003084D4: ;
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0x003084DCu); RECOMP_ABI_CALL(0x0030FA20u, sub_0030FA20); /* call 0x0030FA20 */

loc_003084DC: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003084F0
 * Original: 0x003084F0 - 0x00308517 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003084F0(void)
{

loc_003084F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003084F6u); RECOMP_ABI_CALL(0x0030F9E0u, sub_0030F9E0); /* call 0x0030F9E0 */

loc_003084F6: ;
    esi = eax;
    PUSH32(esp, 0x003084FDu); RECOMP_ABI_CALL(0x003080B0u, sub_003080B0); /* call 0x003080B0 */

loc_003084FD: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00308507u); RECOMP_ABI_CALL(0x0019DD85u, sub_0019DD85); /* call 0x0019DD85 */

loc_00308507: ;
    PUSH32(esp, 0x0030850Cu); RECOMP_ABI_CALL(0x003080D0u, sub_003080D0); /* call 0x003080D0 */

loc_0030850C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00308512u); RECOMP_ABI_CALL(0x0030FA20u, sub_0030FA20); /* call 0x0030FA20 */

loc_00308512: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308520
 * Original: 0x00308520 - 0x00308556 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308520(void)
{
    int _cf = 0; /* carry flag */

loc_00308520: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00308527u); RECOMP_ABI_CALL(0x003080B0u, sub_003080B0); /* call 0x003080B0 */

loc_00308527: ;
    ecx = MEM32(esp + 0xC);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00308536u); RECOMP_ABI_CALL(0x0019E310u, sub_0019E310); /* call 0x0019E310 */

loc_00308536: ;
    esi = eax;
    PUSH32(esp, 0x0030853Du); RECOMP_ABI_CALL(0x003080D0u, sub_003080D0); /* call 0x003080D0 */

loc_0030853D: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030854Du); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0030854D: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308560
 * Original: 0x00308560 - 0x00308608 (168 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308560: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = esi + 0x5C;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x00308573u); RECOMP_ABI_CALL(0x0031CE40u, sub_0031CE40); /* call 0x0031CE40 */

loc_00308573: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308605; /* je: equal / zero */

loc_0030857E: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003085FF; /* jne: not equal / not zero */

loc_00308584: ;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308593; /* jne: not equal / not zero */

loc_0030858A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00308590u); RECOMP_ABI_CALL(0x00308140u, sub_00308140); /* call 0x00308140 */

loc_00308590: ;
    esp = esp + 4;

loc_00308593: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003085FF; /* jne: not equal / not zero */

loc_00308599: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030859Fu); RECOMP_ABI_CALL(0x003077B0u, sub_003077B0); /* call 0x003077B0 */

loc_0030859F: ;
    eax = MEM32(esi + 0x58);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003085FF; /* jne: not equal / not zero */

loc_003085A9: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003085FF; /* je: equal / zero */

loc_003085AF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003085B5u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003085B5: ;
    ebp = MEM32(esi + 0x50);
    ecx = MEM32(esi + 8);
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003085DF; /* je: equal / zero */

loc_003085C4: ;
    edi = MEM32(esi + 4);
    ecx = ecx - edx;
    edx = ecx;
    edi = edi + ebp;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x10);

loc_003085DF: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(esi + 8);
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esi + 0x1C);
    eax = eax + ecx;
    MEM32(esi + 0x24) = edx;
    MEM32(esi + 0x1C) = eax;
    MEM8(esi + 1) = 1;
    PUSH32(esp, 0x003085FEu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003085FE: ;
    POP32(esp, ebp);

loc_003085FF: ;
    MEM32(edi) = 0;

loc_00308605: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308610
 * Original: 0x00308610 - 0x0030864C (60 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308610: ;
    PUSH32(esp, esi);
    esi = 0x5F1F80;

loc_00308616: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308624; /* jne: not equal / not zero */

loc_0030861B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00308621u); RECOMP_ABI_CALL(0x00308560u, sub_00308560); /* call 0x00308560 */

loc_00308621: ;
    esp = esp + 4;

loc_00308624: ;
    esi = esi + 0x168;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F57C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5F57C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308616; /* jl: less (signed <) */

loc_00308632: ;
    PUSH32(esp, 0x00308637u); RECOMP_ABI_CALL(0x00307890u, sub_00307890); /* call 0x00307890 */

loc_00308637: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0030864B; /* je: equal / zero */

loc_0030863D: ;
    eax = MEM32(0x5BEDC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030864B; /* je: equal / zero */

loc_00308646: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030864Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030864A: ;
    POP32(esp, ecx);

loc_0030864B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308650
 * Original: 0x00308650 - 0x003087DC (396 bytes, 141 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308650: ;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x11C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030867A; /* jne: not equal / not zero */

loc_00308662: ;
    PUSH32(esp, 0x42BDE4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0030866Du); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_0030866D: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

loc_0030867A: ;
    eax = MEM32(esp + 0x124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030869E; /* je: equal / zero */

loc_00308685: ;
    PUSH32(esp, 0x42BDC0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00308691u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_00308691: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

loc_0030869E: ;
    PUSH32(esp, esi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x003086ACu); RECOMP_ABI_CALL(0x00307970u, sub_00307970); /* call 0x00307970 */

loc_003086AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003086CB; /* jne: not equal / not zero */

loc_003086B2: ;
    PUSH32(esp, 0x42BD90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003086BDu); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_003086BD: ;
    esp = esp + 8;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

loc_003086CB: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x5A;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003086E2u); RECOMP_ABI_CALL(0x003075E0u, sub_003075E0); /* call 0x003075E0 */

loc_003086E2: ;
    eax = esp + 0x24;
    edi = esi + 0x60;
    edx = edi;
    ecx = eax;
    esp = esp + 8;
    edx = edx - ecx;

loc_003086F2: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003086F2; /* jne: not equal / not zero */

loc_003086FC: ;
    eax = MEM32(0x5BEDCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308724; /* je: equal / zero */

loc_00308705: ;
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00308716u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00308716: ;
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if (TEST_NZ(_fa, _fb)) goto loc_00308732; /* jne: not equal / not zero */

loc_00308724: ;
    ecx = 0; /* xor self */
    eax = 0xFFFFF800u;
    edx = 0x7FFFFFFF;
    goto loc_00308739;

loc_00308732: ;
    MEM32(esi + 0x2C) = 1;

loc_00308739: ;
    ebx = 2;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030874F; /* jne: not equal / not zero */

loc_00308744: ;
    ecx = 0; /* xor self */
    MEM32(esi + 0x164) = ebx;
    MEM32(esi + 0x2C) = ecx;

loc_0030874F: ;
    PUSH32(esp, esi);
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edx;
    PUSH32(esp, 0x0030875Eu); RECOMP_ABI_CALL(0x003079B0u, sub_003079B0); /* call 0x003079B0 */

loc_0030875E: ;
    eax = MEM32(esi + 0x30);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003087D0; /* jne: not equal / not zero */

loc_00308768: ;
    _fa = (uint32_t)(MEM32(esi + 0x164)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x164), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0030877F; /* jne: not equal / not zero */

loc_00308771: ;
    SET_LO8(ebx, MEM8(edi));
    MEM8(edi) = 0x7A;
    PUSH32(esp, 0x0030877Bu); RECOMP_ABI_CALL(0x00308420u, sub_00308420); /* call 0x00308420 */

loc_0030877B: ;
    MEM8(edi) = LO8(ebx);
    goto loc_00308784;

loc_0030877F: ;
    PUSH32(esp, 0x00308784u); RECOMP_ABI_CALL(0x00308420u, sub_00308420); /* call 0x00308420 */

loc_00308784: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x30) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0030879F; /* jne: not equal / not zero */

loc_0030878E: ;
    POP32(esp, edi);
    MEM8(esi + 1) = 3;
    MEM32(esi + 0x5C) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

loc_0030879F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003087A5u); RECOMP_ABI_CALL(0x00308520u, sub_00308520); /* call 0x00308520 */

loc_003087A5: ;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    esp = esp + 4;
    MEM32(esi + 0x14) = edx;
    edi = MEM32(esi + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003087C1u); RECOMP_ABI_CALL(0x00343BF0u, sub_00343BF0); /* call 0x00343BF0 */

loc_003087C1: ;
    ecx = ecx | ebx;
    MEM32(esp + 0x18) = edx;
    MEM32(esi + 0x18) = eax;
    if ((ecx == 0)) goto loc_003087D0; /* je: equal / zero */

loc_003087CC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = eax;

loc_003087D0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x114;
    esp += 4; return; /* ret */

}

/**
 * sub_003087E0
 * Original: 0x003087E0 - 0x0030881A (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003087E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003087E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308803; /* jne: not equal / not zero */

loc_003087EC: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308803; /* je: equal / zero */

loc_003087F3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003087F9u); RECOMP_ABI_CALL(0x003084F0u, sub_003084F0); /* call 0x003084F0 */

loc_003087F9: ;
    esp = esp + 4;
    MEM32(esi + 0x30) = 0;

loc_00308803: ;
    PUSH32(esp, 0x00308808u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00308808: ;
    PUSH32(esp, esi);
    MEM8(esi) = 0;
    PUSH32(esp, 0x00308811u); RECOMP_ABI_CALL(0x00307A30u, sub_00307A30); /* call 0x00307A30 */

loc_00308811: ;
    esp = esp + 4;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_00308820
 * Original: 0x00308820 - 0x003088A5 (133 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308820: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_00308823: ;
    PUSH32(esp, 0x00308828u); RECOMP_ABI_CALL(0x00308610u, sub_00308610); /* call 0x00308610 */

loc_00308828: ;
    ecx = 0; /* xor self */
    eax = 0x5F20E8;
    /* nop */

loc_00308830: ;
    SET_LO8(edx, MEM8(eax + -360));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030887E; /* jne: not equal / not zero */

loc_0030883A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030886E; /* jne: not equal / not zero */

loc_0030883F: ;
    SET_LO8(edx, MEM8(eax + 0x168));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308871; /* jne: not equal / not zero */

loc_00308849: ;
    SET_LO8(edx, MEM8(eax + 0x2D0));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308876; /* jne: not equal / not zero */

loc_00308853: ;
    SET_LO8(edx, MEM8(eax + 0x438));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030887B; /* jne: not equal / not zero */

loc_0030885D: ;
    eax = eax + 0x708;
    ecx = ecx + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F5928) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F5928 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308830; /* jl: less (signed <) */

loc_0030886C: ;
    goto loc_0030887E;

loc_0030886E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0030887E;

loc_00308871: ;
    ecx = ecx + 2;
    goto loc_0030887E;

loc_00308876: ;
    ecx = ecx + 3;
    goto loc_0030887E;

loc_0030887B: ;
    ecx = ecx + 4;

loc_0030887E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030888C; /* je: equal / zero */

loc_00308883: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x61A8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308823; /* jl: less (signed <) */

loc_0030888C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x61A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x61A8 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003088A4; /* jne: not equal / not zero */

loc_00308895: ;
    PUSH32(esp, 0x42BE08);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003088A1u); RECOMP_ABI_CALL(0x00307790u, sub_00307790); /* call 0x00307790 */

loc_003088A1: ;
    esp = esp + 8;

loc_003088A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003088B0
 * Original: 0x003088B0 - 0x003088E7 (55 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003088B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003088B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003088E5; /* je: equal / zero */

loc_003088B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003088BFu); RECOMP_ABI_CALL(0x003083E0u, sub_003083E0); /* call 0x003083E0 */

loc_003088BF: ;
    eax = MEM32(esi + 0x2C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003088D4; /* jne: not equal / not zero */

loc_003088C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003088CFu); RECOMP_ABI_CALL(0x003087E0u, sub_003087E0); /* call 0x003087E0 */

loc_003088CF: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003088D4: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003088E5; /* jne: not equal / not zero */

loc_003088D9: ;
    PUSH32(esp, esi);
    MEM8(esi) = 0;
    PUSH32(esp, 0x003088E2u); RECOMP_ABI_CALL(0x00307A30u, sub_00307A30); /* call 0x00307A30 */

loc_003088E2: ;
    esp = esp + 4;

loc_003088E5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003088F0
 * Original: 0x003088F0 - 0x00308906 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003088F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003088F0: ;
    eax = MEM32(0x5BF260);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308905; /* je: equal / zero */

loc_003088F9: ;
    ecx = MEM32(0x5BF264);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_00308905: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308910
 * Original: 0x00308910 - 0x00308925 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308910(void)
{

loc_00308910: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5BF264);
    PUSH32(esp, 0x00308921u); RECOMP_ABI_CALL(0x003088F0u, sub_003088F0); /* call 0x003088F0 */

loc_00308921: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00308930
 * Original: 0x00308930 - 0x00308998 (104 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308930: ;
    MEM32(0x5BF268) = MEM32(0x5BF268) - 1;
    _fa = (uint32_t)(MEM32(0x5BF268)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00308997; /* jne: not equal / not zero */

loc_00308938: ;
    PUSH32(esp, esi);
    esi = 0x5BEDF0;
    edi = edi;

loc_00308940: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308950; /* je: equal / zero */

loc_00308946: ;
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0030894Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030894D: ;
    esp = esp + 4;

loc_00308950: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5BEF30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5BEF30 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308940; /* jl: less (signed <) */

loc_00308968: ;
    eax = 0x5BF064;
    POP32(esp, esi);
    edi = edi;

loc_00308970: ;
    MEM8(eax) = 0;
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5BF264) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5BF264 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308970; /* jl: less (signed <) */

loc_0030897D: ;
    edx = 0; /* xor self */
    MEM32(0x5BEDE0) = edx;
    MEM32(0x5BEDE4) = edx;
    MEM8(0x5BEDE8) = LO8(edx);
    MEM8(0x5BEDE0) = LO8(edx);

loc_00308997: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003089A0
 * Original: 0x003089A0 - 0x003089EF (79 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003089A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003089A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    eax = ebp;
    PUSH32(esp, edi);
    edx = eax + 1;
    /* nop */

loc_003089B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003089B0; /* jne: not equal / not zero */

loc_003089B7: ;
    eax = eax - edx;
    ebx = eax;
    esi = 0; /* xor self */
    edi = 0x5BF064;

loc_003089C2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003089CAu); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_003089CA: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003089E1; /* je: equal / zero */

loc_003089D1: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003089C2; /* jb: below (unsigned <) */

loc_003089DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003089E1: ;
    esi = esi << 4;
    eax = MEM32(esi + 0x5BF060);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003089F0
 * Original: 0x003089F0 - 0x00308A1F (47 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003089F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003089F0: ;
    eax = edx;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_003089F6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003089F6; /* jne: not equal / not zero */

loc_003089FD: ;
    eax = eax - esi;
    esi = eax + 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00308A1D; /* jbe: below or equal (unsigned <=) */

loc_00308A08: ;
    SET_LO8(eax, MEM8(ecx + edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308A18; /* jl: less (signed <) */

loc_00308A0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00308A18; /* jg: greater (signed >) */

loc_00308A13: ;
    SET_LO8(eax, LO8(eax) - 0x20);
    MEM8(ecx + edx) = LO8(eax);

loc_00308A18: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00308A08; /* jb: below (unsigned <) */

loc_00308A1D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308A20
 * Original: 0x00308A20 - 0x00308A4B (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308A20: ;
    PUSH32(esp, esi);
    esi = 0x5BF064;

loc_00308A26: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00308A2Eu); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_00308A2E: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308A44; /* je: equal / zero */

loc_00308A35: ;
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5BF264) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5BF264 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308A26; /* jl: less (signed <) */

loc_00308A40: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00308A44: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308A50
 * Original: 0x00308A50 - 0x00308A56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308A50(void)
{

loc_00308A50: ;
    eax = 0x5BEDE0;
    esp += 4; return; /* ret */

}

/**
 * sub_00308A60
 * Original: 0x00308A60 - 0x00308AC3 (99 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308A60: ;
    eax = 0; /* xor self */

loc_00308A62: ;
    ecx = MEM32(eax * 8 + 0x5BEDF4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308AB3; /* je: equal / zero */

loc_00308A6D: ;
    ecx = MEM32(eax * 8 + 0x5BEDFC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308AA3; /* je: equal / zero */

loc_00308A78: ;
    ecx = MEM32(eax * 8 + 0x5BEE04);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308AA6; /* je: equal / zero */

loc_00308A83: ;
    ecx = MEM32(eax * 8 + 0x5BEE0C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308AAB; /* je: equal / zero */

loc_00308A8E: ;
    ecx = MEM32(eax * 8 + 0x5BEE14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308AB0; /* je: equal / zero */

loc_00308A99: ;
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308A62; /* jl: less (signed <) */

loc_00308AA1: ;
    goto loc_00308AB3;

loc_00308AA3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00308AB3;

loc_00308AA6: ;
    eax = eax + 2;
    goto loc_00308AB3;

loc_00308AAB: ;
    eax = eax + 3;
    goto loc_00308AB3;

loc_00308AB0: ;
    eax = eax + 4;

loc_00308AB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308ABB; /* jne: not equal / not zero */

loc_00308AB8: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00308ABB: ;
    eax = eax * 8 + 0x5BEDF0;
    esp += 4; return; /* ret */

}

/**
 * sub_00308AD0
 * Original: 0x00308AD0 - 0x00308ADE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308AD0(void)
{

loc_00308AD0: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00308AE0
 * Original: 0x00308AE0 - 0x00308BBA (218 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308AE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308AE0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308B7A; /* je: equal / zero */

loc_00308AED: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = edx;
    eax = 0; /* xor self */
    ebx = ebx - edi;
    PUSH32(esp, esi);
    /* nop */

loc_00308B00: ;
    SET_LO8(ecx, MEM8(eax + edi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3A (8-bit) */
    esi = eax + edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00308B46; /* je: equal / zero */

loc_00308B0B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308B46; /* je: equal / zero */

loc_00308B0F: ;
    MEM8(ebx + esi) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + edi + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308B40; /* je: equal / zero */

loc_00308B1B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308B40; /* je: equal / zero */

loc_00308B1F: ;
    MEM8(eax + edx + 1) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + edi + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x3A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308B43; /* je: equal / zero */

loc_00308B2C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308B43; /* je: equal / zero */

loc_00308B30: ;
    MEM8(eax + edx + 2) = LO8(ecx);
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x129) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x129 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308B00; /* jl: less (signed <) */

loc_00308B3E: ;
    goto loc_00308B46;

loc_00308B40: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00308B46;

loc_00308B43: ;
    eax = eax + 2;

loc_00308B46: ;
    _fa = (uint32_t)(MEM8(eax + edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edi), 0 (8-bit) */
    MEM8(eax + edx) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00308B7C; /* jne: not equal / not zero */

loc_00308B50: ;
    eax = edx;
    esi = eax + 1;

loc_00308B55: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308B55; /* jne: not equal / not zero */

loc_00308B5C: ;
    edi = MEM32(esp + 0x14);
    eax = eax - esi;
    ecx = eax + 1;
    eax = ecx;
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
    MEM8(edx) = 0;
    POP32(esp, ebx);

loc_00308B7A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00308B7C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308B86; /* jne: not equal / not zero */

loc_00308B82: ;
    eax = 0; /* xor self */
    MEM8(edx) = LO8(eax);

loc_00308B86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x129) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x129 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    ecx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00308BAB; /* jge: greater or equal (signed >=) */

loc_00308B94: ;
    esi = ebp;
    esi = esi - eax;

loc_00308B98: ;
    SET_LO8(ebx, MEM8(ecx + edi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308BAB; /* je: equal / zero */

loc_00308B9F: ;
    MEM8(esi + ecx) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x129) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x129 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308B98; /* jl: less (signed <) */

loc_00308BAB: ;
    ecx = ecx - eax;
    MEM8(ecx + ebp) = 0;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_003089F0(); return; /* tail jmp 0x003089F0 */

}

/**
 * sub_00308BC0
 * Original: 0x00308BC0 - 0x00308C02 (66 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308BC0: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = 0x5BEDE0;
    edx = eax + 1;
    goto loc_00308BD0;

    /* nop */

loc_00308BD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308BD0; /* jne: not equal / not zero */

loc_00308BD7: ;
    SET_LO8(ecx, MEM8(0x5BEDE0));
    eax = eax - edx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308BE8; /* jne: not equal / not zero */

loc_00308BE3: ;
    MEM8(edi) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00308BE8: ;
    PUSH32(esp, esi);
    ecx = eax + 1;
    eax = ecx;
    ecx = ecx >> 2;
    esi = 0x5BEDE0;
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
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308C10
 * Original: 0x00308C10 - 0x00308C4F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308C10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308C10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308C27; /* jne: not equal / not zero */

loc_00308C19: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42BE84;
    g_seh_ebp = ebp; sub_00308910(); return; /* tail jmp 0x00308910 */

loc_00308C27: ;
    eax = MEM32(esi);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308C41; /* je: equal / zero */

loc_00308C30: ;
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00308C36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00308C36: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00308AD0(); return; /* tail jmp 0x00308AD0 */

loc_00308C41: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42BE6C;
    g_seh_ebp = ebp; sub_00308910(); return; /* tail jmp 0x00308910 */

}

/**
 * sub_00308C50
 * Original: 0x00308C50 - 0x00308C92 (66 bytes, 27 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308C50: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308C68; /* jne: not equal / not zero */

loc_00308C58: ;
    PUSH32(esp, 0x42BEB8);
    PUSH32(esp, 0x00308C62u); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_00308C62: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00308C68: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00308C7F; /* je: equal / zero */

loc_00308C72: ;
    ecx = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00308C78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00308C78: ;
    esp = esp + 4;
    esi = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00308C7F: ;
    PUSH32(esp, 0x42BEA0);
    esi = 0; /* xor self */
    PUSH32(esp, 0x00308C8Bu); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_00308C8B: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308CA0
 * Original: 0x00308CA0 - 0x00308CEC (76 bytes, 31 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308CA0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308CB8; /* jne: not equal / not zero */

loc_00308CA8: ;
    PUSH32(esp, 0x42BEEC);
    PUSH32(esp, 0x00308CB2u); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_00308CB2: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00308CB8: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00308CD9; /* je: equal / zero */

loc_00308CC2: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00308CD2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00308CD2: ;
    esp = esp + 0xC;
    esi = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00308CD9: ;
    PUSH32(esp, 0x42BED4);
    esi = 0; /* xor self */
    PUSH32(esp, 0x00308CE5u); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_00308CE5: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308CF0
 * Original: 0x00308CF0 - 0x00308D3C (76 bytes, 31 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308CF0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308D08; /* jne: not equal / not zero */

loc_00308CF8: ;
    PUSH32(esp, 0x42BF20);
    PUSH32(esp, 0x00308D02u); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_00308D02: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00308D08: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00308D29; /* je: equal / zero */

loc_00308D12: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00308D22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00308D22: ;
    esp = esp + 0xC;
    esi = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00308D29: ;
    PUSH32(esp, 0x42BF08);
    esi = 0; /* xor self */
    PUSH32(esp, 0x00308D35u); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_00308D35: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308D40
 * Original: 0x00308D40 - 0x00308D61 (33 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308D40: ;
    PUSH32(esp, esi);
    esi = 0x5BF060;

loc_00308D46: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308D54; /* je: equal / zero */

loc_00308D4C: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308D54; /* je: equal / zero */

loc_00308D52: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00308D54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00308D54: ;
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5BF260) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5BF260 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308D46; /* jl: less (signed <) */

loc_00308D5F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308D70
 * Original: 0x00308D70 - 0x00308DB6 (70 bytes, 28 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308D70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = 3;
    if (TEST_NZ(_fa, _fb)) goto loc_00308D8F; /* jne: not equal / not zero */

loc_00308D7E: ;
    PUSH32(esp, 0x42BF58);
    PUSH32(esp, 0x00308D88u); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_00308D88: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00308D8F: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308DA5; /* je: equal / zero */

loc_00308D98: ;
    edx = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00308D9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00308D9E: ;
    esp = esp + 4;
    esi = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00308DA5: ;
    PUSH32(esp, 0x42BF3C);
    PUSH32(esp, 0x00308DAFu); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_00308DAF: ;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308DC0
 * Original: 0x00308DC0 - 0x00308DE6 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308DC0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308DD7; /* jne: not equal / not zero */

loc_00308DCA: ;
    MEM32(0x5BF260) = ecx;
    MEM32(0x5BF264) = ecx;
    esp += 4; return; /* ret */

loc_00308DD7: ;
    MEM32(0x5BF260) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x5BF264) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00308DF0
 * Original: 0x00308DF0 - 0x00308E15 (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00308DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308DF0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00308DF6u); RECOMP_ABI_CALL(0x003089A0u, sub_003089A0); /* call 0x003089A0 */

loc_00308DF6: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308E12; /* je: equal / zero */

loc_00308DFD: ;
    eax = MEM32(eax + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308E12; /* je: equal / zero */

loc_00308E04: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00308E0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00308E0E: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00308E12: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00308E20
 * Original: 0x00308E20 - 0x00308E63 (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308E20: ;
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308E2E; /* jne: not equal / not zero */

loc_00308E27: ;
    PUSH32(esp, 0x00308E2Cu); RECOMP_ABI_CALL(0x00308A50u, sub_00308A50); /* call 0x00308A50 */

loc_00308E2C: ;
    edi = eax;

loc_00308E2E: ;
    eax = edi;
    PUSH32(esp, 0x00308E35u); RECOMP_ABI_CALL(0x00308DF0u, sub_00308DF0); /* call 0x00308DF0 */

loc_00308E35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308E61; /* jne: not equal / not zero */

loc_00308E3A: ;
    edx = 0x5BEF30;
    eax = esi;
    edx = edx - esi;

loc_00308E43: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308E43; /* jne: not equal / not zero */

loc_00308E4D: ;
    PUSH32(esp, 0x5BEF30);
    PUSH32(esp, edi);
    PUSH32(esp, 0x42BF74);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00308E5Eu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00308E5E: ;
    esp = esp + 0x10;

loc_00308E61: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308E70
 * Original: 0x00308E70 - 0x00308F0A (154 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308E70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    edx = esi;
    PUSH32(esp, 0x00308E7Bu); RECOMP_ABI_CALL(0x003089F0u, sub_003089F0); /* call 0x003089F0 */

loc_00308E7B: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esp + 0xC); PUSH32(esp, 0x00308E7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00308E7F: ;
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x00308E87u); RECOMP_ABI_CALL(0x003089A0u, sub_003089A0); /* call 0x003089A0 */

loc_00308E87: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308F05; /* jne: not equal / not zero */

loc_00308E8E: ;
    ecx = 0; /* xor self */
    eax = 0x5BF074;

loc_00308E95: ;
    SET_LO8(edx, MEM8(eax + -16));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308EC9; /* je: equal / zero */

loc_00308E9C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308EBE; /* je: equal / zero */

loc_00308EA1: ;
    SET_LO8(edx, MEM8(eax + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308EC1; /* je: equal / zero */

loc_00308EA8: ;
    SET_LO8(edx, MEM8(eax + 0x20));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00308EC6; /* je: equal / zero */

loc_00308EAF: ;
    eax = eax + 0x40;
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5BF274) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5BF274 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00308E95; /* jl: less (signed <) */

loc_00308EBC: ;
    goto loc_00308EC9;

loc_00308EBE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00308EC9;

loc_00308EC1: ;
    ecx = ecx + 2;
    goto loc_00308EC9;

loc_00308EC6: ;
    ecx = ecx + 3;

loc_00308EC9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308ED3; /* jne: not equal / not zero */

loc_00308ECE: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00308ED3: ;
    ecx = ecx << 4;
    edx = ecx;
    eax = esi;
    PUSH32(esp, edi);
    MEM32(edx + 0x5BF060) = ebx;
    edi = eax + 1;

loc_00308EE4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308EE4; /* jne: not equal / not zero */

loc_00308EEB: ;
    eax = eax - edi;
    ecx = eax + 1;
    eax = ecx;
    ecx = ecx >> 2;
    edi = edx + 0x5BF064;
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

loc_00308F05: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308F10
 * Original: 0x00308F10 - 0x00308F84 (116 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308F10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308F10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308F27; /* jne: not equal / not zero */

loc_00308F19: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42BFA4;
    g_seh_ebp = ebp; sub_00308910(); return; /* tail jmp 0x00308910 */

loc_00308F27: ;
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_00308F30: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308F30; /* jne: not equal / not zero */

loc_00308F37: ;
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = eax;
    if ((eax != 0)) goto loc_00308F47; /* jne: not equal / not zero */

loc_00308F3E: ;
    POP32(esp, edi);
    MEM8(0x5BEDE0) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00308F47: ;
    PUSH32(esp, ebx);
    edx = esi;
    PUSH32(esp, 0x00308F4Fu); RECOMP_ABI_CALL(0x003089F0u, sub_003089F0); /* call 0x003089F0 */

loc_00308F4F: ;
    ebx = esi;
    PUSH32(esp, 0x00308F56u); RECOMP_ABI_CALL(0x00308A20u, sub_00308A20); /* call 0x00308A20 */

loc_00308F56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00308F75; /* jne: not equal / not zero */

loc_00308F5C: ;
    ecx = edi + 1;
    eax = ecx;
    ecx = ecx >> 2;
    edi = 0x5BEDE0;
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
    esp += 4; return; /* ret */

loc_00308F75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 4) = 0x42BF7C;
    g_seh_ebp = ebp; sub_00308910(); return; /* tail jmp 0x00308910 */

}

/**
 * sub_00308F90
 * Original: 0x00308F90 - 0x00308FE0 (80 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308F90: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00308FA4; /* jne: not equal / not zero */

loc_00308F98: ;
    eax = edi;
    PUSH32(esp, 0x00308F9Fu); RECOMP_ABI_CALL(0x00308BC0u, sub_00308BC0); /* call 0x00308BC0 */

loc_00308F9F: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00308FCC; /* je: equal / zero */

loc_00308FA4: ;
    eax = edi;
    PUSH32(esp, 0x00308FABu); RECOMP_ABI_CALL(0x00308E20u, sub_00308E20); /* call 0x00308E20 */

loc_00308FAB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00308FB1u); RECOMP_ABI_CALL(0x003089A0u, sub_003089A0); /* call 0x003089A0 */

loc_00308FB1: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308FDE; /* jne: not equal / not zero */

loc_00308FB8: ;
    eax = edi;
    PUSH32(esp, 0x00308FBFu); RECOMP_ABI_CALL(0x00308BC0u, sub_00308BC0); /* call 0x00308BC0 */

loc_00308FBF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00308FC5u); RECOMP_ABI_CALL(0x003089A0u, sub_003089A0); /* call 0x003089A0 */

loc_00308FC5: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308FD0; /* jne: not equal / not zero */

loc_00308FCC: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00308FD0: ;
    ecx = ebx;
    esi = esi - ebx;

loc_00308FD4: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00308FD4; /* jne: not equal / not zero */

loc_00308FDE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308FE0
 * Original: 0x00308FE0 - 0x003090E8 (264 bytes, 87 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00308FE0: ;
    esp = esp - 0x258;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x260);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00309010; /* je: equal / zero */

loc_00308FF2: ;
    PUSH32(esp, ebx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x138;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00309005u); RECOMP_ABI_CALL(0x00308AE0u, sub_00308AE0); /* call 0x00308AE0 */

loc_00309005: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309027; /* jne: not equal / not zero */

loc_00309010: ;
    PUSH32(esp, 0x42C040);
    PUSH32(esp, 0x0030901Au); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_0030901A: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x258;
    esp += 4; return; /* ret */

loc_00309027: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030902Du); RECOMP_ABI_CALL(0x00308A60u, sub_00308A60); /* call 0x00308A60 */

loc_0030902D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030904B; /* jne: not equal / not zero */

loc_00309033: ;
    PUSH32(esp, 0x42C01C);
    PUSH32(esp, 0x0030903Du); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_0030903D: ;
    esp = esp + 4;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x258;
    esp += 4; return; /* ret */

loc_0030904B: ;
    PUSH32(esp, edi);
    eax = esp + 0xC;
    edi = esp + 0x138;
    PUSH32(esp, 0x0030905Cu); RECOMP_ABI_CALL(0x00308F90u, sub_00308F90); /* call 0x00308F90 */

loc_0030905C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = eax;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00309082; /* jne: not equal / not zero */

loc_00309063: ;
    eax = esi;
    PUSH32(esp, 0x0030906Au); RECOMP_ABI_CALL(0x00308AD0u, sub_00308AD0); /* call 0x00308AD0 */

loc_0030906A: ;
    PUSH32(esp, 0x42BFFC);
    PUSH32(esp, 0x00309074u); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_00309074: ;
    esp = esp + 4;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x258;
    esp += 4; return; /* ret */

loc_00309082: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003090C9; /* je: equal / zero */

loc_00309089: ;
    edx = MEM32(esp + 0x26C);
    ecx = MEM32(esp + 0x268);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003090A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003090A0: ;
    esp = esp + 0xC;
    MEM32(esi + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_003090DF; /* jne: not equal / not zero */

loc_003090AC: ;
    PUSH32(esp, 0x003090B1u); RECOMP_ABI_CALL(0x00308AD0u, sub_00308AD0); /* call 0x00308AD0 */

loc_003090B1: ;
    PUSH32(esp, 0x42BFE4);
    PUSH32(esp, 0x003090BBu); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_003090BB: ;
    esp = esp + 4;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x258;
    esp += 4; return; /* ret */

loc_003090C9: ;
    eax = esi;
    PUSH32(esp, 0x003090D0u); RECOMP_ABI_CALL(0x00308AD0u, sub_00308AD0); /* call 0x00308AD0 */

loc_003090D0: ;
    PUSH32(esp, 0x42BFCC);
    PUSH32(esp, 0x003090DAu); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_003090DA: ;
    esp = esp + 4;
    eax = 0; /* xor self */

loc_003090DF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x258;
    esp += 4; return; /* ret */

}

/**
 * sub_003090F0
 * Original: 0x003090F0 - 0x00309150 (96 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003090F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003090F0: ;
    eax = MEM32(0x42BE38);
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030910B; /* jne: not equal / not zero */

loc_003090FD: ;
    PUSH32(esp, 0x42C0A8);
    PUSH32(esp, 0x00309107u); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_00309107: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0030910B: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309121; /* jne: not equal / not zero */

loc_00309113: ;
    PUSH32(esp, 0x42C084);
    PUSH32(esp, 0x0030911Du); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_0030911D: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00309121: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00309127u); RECOMP_ABI_CALL(0x00308E70u, sub_00308E70); /* call 0x00308E70 */

loc_00309127: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030913C; /* jne: not equal / not zero */

loc_0030912E: ;
    PUSH32(esp, 0x42C060);
    PUSH32(esp, 0x00309138u); RECOMP_ABI_CALL(0x00308910u, sub_00308910); /* call 0x00308910 */

loc_00309138: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0030913C: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030914F; /* je: equal / zero */

loc_00309143: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3088F0);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030914Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030914C: ;
    esp = esp + 8;

loc_0030914F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00309150
 * Original: 0x00309150 - 0x0030915B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309150(void)
{

loc_00309150: ;
    eax = MEM32(0x42C0CC);
    eax = 0x4766D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00309160
 * Original: 0x00309160 - 0x00309180 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309160: ;
    eax = MEM32(0x5BF26C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030917F; /* je: equal / zero */

loc_00309169: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BF270);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0030917Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030917C: ;
    esp = esp + 0xC;

loc_0030917F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00309180
 * Original: 0x00309180 - 0x00309185 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309180: ;
    g_seh_ebp = ebp; sub_00342692(); return; /* tail jmp 0x00342692 */

}

/**
 * sub_00309190
 * Original: 0x00309190 - 0x00309236 (166 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309190: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, edi);
    edx = eax + 1;
    goto loc_003091A0;

    /* nop */

loc_003091A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003091A0; /* jne: not equal / not zero */

loc_003091A7: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003091CD; /* je: equal / zero */

loc_003091AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x42C13C);
    PUSH32(esp, 0x5F1440);
    PUSH32(esp, 0x003091BEu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_003091BE: ;
    PUSH32(esp, 0x5F1440);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003091CAu); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_003091CA: ;
    esp = esp + 0x14;

loc_003091CD: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 8), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003091F2; /* je: equal / zero */

loc_003091D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x42C100);
    PUSH32(esp, 0x5F1440);
    PUSH32(esp, 0x003091E3u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_003091E3: ;
    PUSH32(esp, 0x5F1440);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003091EFu); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_003091EF: ;
    esp = esp + 0x14;

loc_003091F2: ;
    PUSH32(esp, 0x10);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x00309203u); RECOMP_ABI_CALL(0x00309180u, sub_00309180); /* call 0x00309180 */

loc_00309203: ;
    esi = eax;
    eax = MEM32(esp + 0x18);
    SET_LO8(ecx, MEM8(eax));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00309217; /* je: equal / zero */

loc_00309212: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;

loc_00309217: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00309231; /* je: equal / zero */

loc_0030921F: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030922Cu); RECOMP_ABI_CALL(0x00309180u, sub_00309180); /* call 0x00309180 */

loc_0030922C: ;
    esp = esp + 0xC;
    MEM32(edi) = eax;

loc_00309231: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309240
 * Original: 0x00309240 - 0x00309254 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309240(void)
{

loc_00309240: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x5BF26C) = eax;
    MEM32(0x5BF270) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00309260
 * Original: 0x00309260 - 0x00309277 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309260(void)
{

loc_00309260: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030926Fu); RECOMP_ABI_CALL(0x00309190u, sub_00309190); /* call 0x00309190 */

loc_0030926F: ;
    eax = MEM32(esp + 8);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00309280
 * Original: 0x00309280 - 0x003092AE (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309280: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = 0x5F1580;
    /* nop */

loc_00309290: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003092A2; /* je: equal / zero */

loc_00309295: ;
    ecx = ecx + 0x38;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F1E40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5F1E40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309290; /* jl: less (signed <) */

loc_003092A1: ;
    esp += 4; return; /* ret */

loc_003092A2: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    edx = edx + 0x5F1580;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_003092B0
 * Original: 0x003092B0 - 0x003092C0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003092B0(void)
{

loc_003092B0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    ecx = 0xE;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003092C0
 * Original: 0x003092C0 - 0x003092FB (59 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003092C0(void)
{

loc_003092C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    MEM32(esi + 4) = 0x800;
    PUSH32(esp, 0x003092D5u); RECOMP_ABI_CALL(0x00309260u, sub_00309260); /* call 0x00309260 */

loc_003092D5: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 8) = eax;
    eax = ecx + eax + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esp = esp + 4;
    MEM8(esi) = 1;
    MEM32(esi + 0xC) = eax;
    eax = 0; /* xor self */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x14) = eax;
    MEM8(esi + 1) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309300
 * Original: 0x00309300 - 0x00309378 (120 bytes, 50 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309300: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030931B; /* jne: not equal / not zero */

loc_00309309: ;
    PUSH32(esp, 0x42C1D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309314u); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_00309314: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030931B: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00309336; /* je: equal / zero */

loc_00309323: ;
    PUSH32(esp, 0x42C1AC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0030932Fu); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_0030932F: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309336: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030933Cu); RECOMP_ABI_CALL(0x00309280u, sub_00309280); /* call 0x00309280 */

loc_0030933C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309355; /* jne: not equal / not zero */

loc_00309342: ;
    PUSH32(esp, 0x42C17C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030934Du); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_0030934D: ;
    esp = esp + 8;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309355: ;
    edx = edi + 0x1C;
    eax = esi;
    edx = edx - esi;
    /* nop */

loc_00309360: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309360; /* jne: not equal / not zero */

loc_0030936A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00309370u); RECOMP_ABI_CALL(0x003092C0u, sub_003092C0); /* call 0x003092C0 */

loc_00309370: ;
    esp = esp + 4;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309380
 * Original: 0x00309380 - 0x003093F6 (118 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309380: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030939B; /* jne: not equal / not zero */

loc_00309389: ;
    PUSH32(esp, 0x42C1F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309394u); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_00309394: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030939B: ;
    PUSH32(esp, 0x003093A0u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_003093A0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003093AE; /* jne: not equal / not zero */

loc_003093A8: ;
    eax = MEM32(esp + 0xC);
    goto loc_003093CD;

loc_003093AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003093BF; /* jne: not equal / not zero */

loc_003093B3: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx + MEM32(esp + 0xC);
    MEM32(esi + 0x10) = ecx;
    goto loc_003093D0;

loc_003093BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003093D0; /* jne: not equal / not zero */

loc_003093C4: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x10);
    eax = eax + edx;

loc_003093CD: ;
    MEM32(esi + 0x10) = eax;

loc_003093D0: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003093DC; /* jl: less (signed <) */

loc_003093DA: ;
    eax = ecx;

loc_003093DC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas & _fbs, 0)) ? 1 : 0); /* setle */
    MEM32(esi + 0x10) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x003093F1u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003093F1: ;
    eax = MEM32(esi + 0x10);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309400
 * Original: 0x00309400 - 0x0030941D (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309400: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309419; /* jne: not equal / not zero */

loc_00309408: ;
    PUSH32(esp, 0x42C210);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00309413u); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_00309413: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00309419: ;
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00309420
 * Original: 0x00309420 - 0x0030955A (314 bytes, 128 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00309420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309420: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030943B; /* jne: not equal / not zero */

loc_00309429: ;
    PUSH32(esp, 0x42C270);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00309434u); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_00309434: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030943B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00309457; /* jge: greater or equal (signed >=) */

loc_00309444: ;
    PUSH32(esp, 0x42C250);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0030944Fu); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_0030944F: ;
    esp = esp + 8;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00309457: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309472; /* jne: not equal / not zero */

loc_0030945F: ;
    PUSH32(esp, 0x42C22C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0030946Au); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_0030946A: ;
    esp = esp + 8;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00309472: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030947F; /* jne: not equal / not zero */

loc_00309476: ;
    POP32(esp, edi);
    MEM8(ebp + 1) = 1;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030947F: ;
    SET_LO8(eax, MEM8(ebp + 1));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030948F; /* jne: not equal / not zero */

loc_00309489: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030948F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309495u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_00309495: ;
    esi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    edx = edx - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(ebp + 0x14) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_003094AA; /* jge: greater or equal (signed >=) */

loc_003094A8: ;
    edx = edi;

loc_003094AA: ;
    eax = MEM32(ebp + 4);
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + 0x18) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_003094CC; /* jne: not equal / not zero */

loc_003094BC: ;
    MEM8(ebp + 1) = 1;
    PUSH32(esp, 0x003094C5u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003094C5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_003094CC: ;
    MEM32(ebp + 0x34) = eax;
    eax = esp + 0x14;
    MEM32(ebp + 0x30) = ecx;
    PUSH32(esp, eax);
    ecx = ebp + 0x1C;
    PUSH32(esp, ecx);
    MEM8(ebp + 1) = LO8(ebx);
    PUSH32(esp, 0x003094E3u); RECOMP_ABI_CALL(0x00309190u, sub_00309190); /* call 0x00309190 */

loc_003094E3: ;
    edx = MEM32(ebp + 0x30);
    ebx = MEM32(ebp + 0x34);
    edi = eax;
    eax = MEM32(esp + 0x1C);
    eax = eax - edx;
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003094FA; /* jle: less or equal (signed <=) */

loc_003094F8: ;
    ebx = eax;

loc_003094FA: ;
    PUSH32(esp, 0x003094FFu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_003094FF: ;
    ecx = MEM32(ebp + 0x34);
    esi = MEM32(ebp + 0x30);
    edx = ecx;
    ecx = ecx >> 2;
    esi = esi + edi;
    edi = MEM32(esp + 0x1C);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(esp + 0x1C);
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 0x34);
    ecx = ecx - ebx;
    edi = ebx + edx;
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
    PUSH32(esp, 0x0030953Au); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030953A: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(ebp + 0x14) = ecx;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    MEM8(ebp + 1) = 1;
    PUSH32(esp, 0x00309552u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00309552: ;
    eax = MEM32(ebp + 0x18);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00309560
 * Original: 0x00309560 - 0x00309588 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309560: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309579; /* jne: not equal / not zero */

loc_00309569: ;
    PUSH32(esp, 0x42BA94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00309574u); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_00309574: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309579: ;
    PUSH32(esp, 0x0030957Eu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030957E: ;
    MEM8(esi + 1) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0033EA20(); return; /* tail jmp 0x0033EA20 */

}

/**
 * sub_00309590
 * Original: 0x00309590 - 0x003095AE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309590: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003095A9; /* jne: not equal / not zero */

loc_00309598: ;
    PUSH32(esp, 0x42BA94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003095A3u); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_003095A3: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003095A9: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003095B0
 * Original: 0x003095B0 - 0x003095CD (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003095B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003095B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003095C9; /* jne: not equal / not zero */

loc_003095B8: ;
    PUSH32(esp, 0x42BB80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003095C3u); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_003095C3: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_003095C9: ;
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003095D0
 * Original: 0x003095D0 - 0x0030961A (74 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003095D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003095D0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003095E9; /* jne: not equal / not zero */

loc_003095D8: ;
    MEM32(esp + 8) = 0x42BBB4;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_00309160(); return; /* tail jmp 0x00309160 */

loc_003095E9: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = eax + esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ecx + 4));
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 0xC) = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edx = MEM32(ecx + 0x18);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    POP32(esp, edi);
    MEM32(ecx + 0x14) = edx;
    POP32(esp, esi);
    MEM32(ecx + 0x10) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00309620
 * Original: 0x00309620 - 0x0030963D (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309639; /* jne: not equal / not zero */

loc_00309628: ;
    PUSH32(esp, 0x42BA94);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00309633u); RECOMP_ABI_CALL(0x00309160u, sub_00309160); /* call 0x00309160 */

loc_00309633: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00309639: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00309640
 * Original: 0x00309640 - 0x00309666 (38 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309640: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00309664; /* je: equal / zero */

loc_00309649: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030964Fu); RECOMP_ABI_CALL(0x00309560u, sub_00309560); /* call 0x00309560 */

loc_0030964F: ;
    SET_LO8(eax, MEM8(esi));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309664; /* jne: not equal / not zero */

loc_00309658: ;
    PUSH32(esp, esi);
    MEM8(esi) = 0;
    PUSH32(esp, 0x00309661u); RECOMP_ABI_CALL(0x003092B0u, sub_003092B0); /* call 0x003092B0 */

loc_00309661: ;
    esp = esp + 4;

loc_00309664: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309670
 * Original: 0x00309670 - 0x00309688 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309670(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309670: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00309687; /* je: equal / zero */

loc_00309678: ;
    edx = MEM32(eax + 0xC);
    eax = MEM32(edx + 0x50);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030B620(); return; /* tail jmp 0x0030B620 */

loc_00309687: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00309690
 * Original: 0x00309690 - 0x00309696 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309690(void)
{

loc_00309690: ;
    eax = 0x42C290;
    esp += 4; return; /* ret */

}

/**
 * sub_003096A0
 * Original: 0x003096A0 - 0x003096A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003096A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003096A0: ;
    g_seh_ebp = ebp; sub_0030FA40(); return; /* tail jmp 0x0030FA40 */

}

/**
 * sub_003096B0
 * Original: 0x003096B0 - 0x003096B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003096B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003096B0: ;
    g_seh_ebp = ebp; sub_0030FBE0(); return; /* tail jmp 0x0030FBE0 */

}

/**
 * sub_003096C0
 * Original: 0x003096C0 - 0x00309730 (112 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003096C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003096C0: ;
    eax = MEM32(0x42C310);
    eax = MEM32(0x5BF278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309729; /* jne: not equal / not zero */

loc_003096CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003096D4u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003096D4: ;
    eax = 0; /* xor self */
    ecx = 0x340;
    edi = 0x5F0720;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x208;
    edi = 0x5EF6E0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0x80808080u;
    ecx = 0x200;
    edi = 0x5EFF00;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x5BF27C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00309713; /* jne: not equal / not zero */

loc_00309709: ;
    PUSH32(esp, 0x0030970Eu); RECOMP_ABI_CALL(0x0030B610u, sub_0030B610); /* call 0x0030B610 */

loc_0030970E: ;
    MEM32(0x5BF27C) = eax;

loc_00309713: ;
    ecx = MEM32(0x5BF280);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0030971Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030971D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00309726u); RECOMP_ABI_CALL(0x0030FC40u, sub_0030FC40); /* call 0x0030FC40 */

loc_00309726: ;
    esp = esp + 0xC;

loc_00309729: ;
    MEM32(0x5BF278) = MEM32(0x5BF278) + 1;
    _fa = (uint32_t)(MEM32(0x5BF278)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00309730
 * Original: 0x00309730 - 0x0030973A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309730(void)
{

loc_00309730: ;
    eax = MEM32(esp + 4);
    MEM32(0x5BF28C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00309740
 * Original: 0x00309740 - 0x0030977E (62 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309740: ;
    eax = MEM32(0x5BF278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030977D; /* jne: not equal / not zero */

loc_00309749: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030976E; /* jne: not equal / not zero */

loc_00309751: ;
    PUSH32(esp, 0x30FF10);
    MEM32(0x5BF27C) = 0x476A18;
    MEM32(0x5BF280) = eax;
    PUSH32(esp, 0x0030976Au); RECOMP_ABI_CALL(0x00309730u, sub_00309730); /* call 0x00309730 */

loc_0030976A: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0030976E: ;
    ecx = MEM32(esp + 4);
    MEM32(0x5BF27C) = ecx;
    MEM32(0x5BF280) = eax;

loc_0030977D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00309780
 * Original: 0x00309780 - 0x003097EC (108 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309780(void)
{

loc_00309780: ;
    ecx = 0; /* xor self */
    edx = 0x2000;
    MEM8(eax + 1) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 6) = LO8(ecx);
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x5C) = edx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x8C) = ecx;
    MEM32(eax + 0x90) = ecx;
    MEM32(eax + 0x94) = 0xFFFFFFD3u;
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0x9C) = ecx;
    MEM32(eax + 0xA0) = ecx;
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0xA8) = ecx;
    MEM32(eax + 0xB0) = ecx;
    MEM8(eax + 7) = LO8(ecx);
    MEM32(eax + 0xAC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003097F0
 * Original: 0x003097F0 - 0x00309824 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003097F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003097F0: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = 0x5F0720;
    /* nop */

loc_00309800: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309815; /* je: equal / zero */

loc_00309805: ;
    ecx = ecx + 0xD0;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F1420) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5F1420 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309800; /* jl: less (signed <) */

loc_00309814: ;
    esp += 4; return; /* ret */

loc_00309815: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD0);
    edx = edx + 0x5F0720;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00309830
 * Original: 0x00309830 - 0x00309843 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309830(void)
{

loc_00309830: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x50);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x58); PUSH32(esp, 0x0030983Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030983F: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00309850
 * Original: 0x00309850 - 0x00309879 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309850: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00309857; /* jg: greater (signed >) */

loc_00309854: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00309857: ;
    eax = MEM32(edi + 0x50);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x54); PUSH32(esp, 0x0030986Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030986C: ;
    esp = esp + 0x14;
    MEM32(edi + 0x74) = 1;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00309880
 * Original: 0x00309880 - 0x003098F4 (116 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309880(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309880: ;
    eax = MEM32(edi + 0x74);
    esp = esp - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309890; /* jne: not equal / not zero */

loc_0030988A: ;
    eax = 0; /* xor self */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00309890: ;
    SET_LO8(eax, MEM8(edi + 3));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 8) = ebp;
    if (CMP_BE(_fa & _fb, 0)) goto loc_003098E5; /* jbe: below or equal (unsigned <=) */

loc_003098A8: ;
    eax = MEM32(edi + 0x50);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x5C); PUSH32(esp, 0x003098B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_003098B2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003098C2; /* je: equal / zero */

loc_003098BA: ;
    MEM32(esp + esi * 4 + 8) = 0;

loc_003098C2: ;
    edx = ZX8(MEM8(edi + 3));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003098A8; /* jl: less (signed <) */

loc_003098CB: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003098DB; /* je: equal / zero */

loc_003098D3: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003098E5; /* jne: not equal / not zero */

loc_003098DB: ;
    ebp = 0; /* xor self */
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_003098E5: ;
    POP32(esp, esi);
    eax = ebp;
    MEM32(edi + 0x74) = 0;
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00309900
 * Original: 0x00309900 - 0x0030996B (107 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309900: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030990Bu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030990B: ;
    SET_LO8(eax, MEM8(esi + 3));
    esp = esp + 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0030993F; /* jbe: below or equal (unsigned <=) */

loc_00309917: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x30;
    goto loc_00309920;

    /* nop */

loc_00309920: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309932; /* jne: not equal / not zero */

loc_00309925: ;
    PUSH32(esp, 0x42C368);
    PUSH32(esp, 0x0030992Fu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030992F: ;
    esp = esp + 4;

loc_00309932: ;
    ecx = ZX8(MEM8(esi + 3));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309920; /* jl: less (signed <) */

loc_0030993E: ;
    POP32(esp, ebx);

loc_0030993F: ;
    ecx = MEM32(esi + 0x54);
    eax = MEM32(esi + 0x44);
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x40)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x40))); }
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) + ecx;
    MEM32(esi + 0x54) = 0;
    MEM32(esi + 0x44) = edx;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) + ecx;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00309965u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_00309965: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309970
 * Original: 0x00309970 - 0x0030998C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309970(void)
{

loc_00309970: ;
    eax = MEM32(ecx + 0x68);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x70);
    eax = eax + esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 0x40)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 0x40))); }
    MEM32(ecx + 0x6C) = MEM32(ecx + 0x6C) + esi;
    MEM32(ecx + 0x70) = 0;
    POP32(esp, esi);
    MEM32(ecx + 0x68) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00309990
 * Original: 0x00309990 - 0x003099C3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309990: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    edi = eax;
    MEM32(0x5BF290) = esi;
    /* nop */

loc_003099A0: ;
    PUSH32(esp, 0x003099A5u); RECOMP_ABI_CALL(0x00309880u, sub_00309880); /* call 0x00309880 */

loc_003099A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003099C0; /* je: equal / zero */

loc_003099AA: ;
    edx = MEM32(0x5BF290);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC8 (32-bit) */
    MEM32(0x5BF290) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003099A0; /* jl: less (signed <) */

loc_003099C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003099D0
 * Original: 0x003099D0 - 0x00309BB3 (483 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003099D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003099D0: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = 0x20;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi + 8))); }
    ecx = MEM32(edi + 0x4C);
    esi = 0; /* xor self */
    ebx = 0; /* xor self */
    MEM32(esp + 0x24) = esi;
    ebp = eax;
    eax = MEM32(edi + 0x40);
    eax = eax - ecx;
    ebp = ebp << 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    MEM32(esp + 0x1C) = ebp;
    ecx = eax;
    SET_LO8(eax, MEM8(edi + 3));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00309A7B; /* jbe: below or equal (unsigned <=) */

loc_00309A0E: ;
    eax = esp + 0x28;
    MEM32(esp + 0x10) = eax;
    ebp = edi + 0x30;
    /* nop */

loc_00309A20: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309A33; /* jne: not equal / not zero */

loc_00309A26: ;
    PUSH32(esp, 0x42C38C);
    PUSH32(esp, 0x00309A30u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309A30: ;
    esp = esp + 4;

loc_00309A33: ;
    eax = MEM32(edi + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x14));
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebp);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x18); PUSH32(esp, 0x00309A55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309A55: ;
    edx = MEM32(esp + 0x20);
    eax = ZX8(MEM8(edi + 3));
    esp = esp + 0x10;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 8;
    ebp = ebp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00309A20; /* jl: less (signed <) */

loc_00309A6F: ;
    ebp = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x14);

loc_00309A7B: ;
    SET_LO8(ebx, MEM8(edi + 3));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    eax = MEM32(esp + 0x2C);
    if (CMP_EQ(_fa, _fb)) goto loc_00309A91; /* je: equal / zero */

loc_00309A87: ;
    edx = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309A91; /* jl: less (signed <) */

loc_00309A8F: ;
    eax = edx;

loc_00309A91: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(edi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(edi + 8))); }
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309A9E; /* jl: less (signed <) */

loc_00309A9C: ;
    eax = ecx;

loc_00309A9E: ;
    ecx = MEM32(edi + 0x40);
    ecx = ecx - MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309AAA; /* jl: less (signed <) */

loc_00309AA8: ;
    eax = ecx;

loc_00309AAA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00309B00; /* jg: greater (signed >) */

loc_00309ABC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00309AF6; /* jbe: below or equal (unsigned <=) */

loc_00309AC0: ;
    ebx = esp + 0x28;
    esi = edi + 0x30;

loc_00309AC7: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309AD9; /* jne: not equal / not zero */

loc_00309ACC: ;
    PUSH32(esp, 0x42C38C);
    PUSH32(esp, 0x00309AD6u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309AD6: ;
    esp = esp + 4;

loc_00309AD9: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00309AE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309AE4: ;
    edx = ZX8(MEM8(edi + 3));
    esp = esp + 0xC;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    ebx = ebx + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309AC7; /* jl: less (signed <) */

loc_00309AF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_00309B00: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00309BA6; /* jbe: below or equal (unsigned <=) */

loc_00309B0C: ;
    ebx = esp + 0x28;
    ebp = edi + 0x30;
    goto loc_00309B20;

loc_00309B15: ;
    ecx = MEM32(esp + 0x24);
    /* nop */

loc_00309B20: ;
    eax = MEM32(edi + 0x44);
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(0x5F1420) = 0;
    PUSH32(esp, 0x00309B3Cu); RECOMP_ABI_CALL(0x00309850u, sub_00309850); /* call 0x00309850 */

loc_00309B3C: ;
    esi = eax;
    MEM32(0x5F1424) = 0;
    eax = MEM32(edi + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00309B68u); RECOMP_ABI_CALL(0x0030EDA0u, sub_0030EDA0); /* call 0x0030EDA0 */

loc_00309B68: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax);
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x00309B78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309B78: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax);
    edx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x00309B88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309B88: ;
    eax = MEM32(esp + 0x40);
    ecx = ZX8(MEM8(edi + 3));
    esp = esp + 0x30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    ebx = ebx + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00309B15; /* jl: less (signed <) */

loc_00309BA6: ;
    MEM32(edi + 0x54) = esi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_00309BC0
 * Original: 0x00309BC0 - 0x00309C71 (177 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309BC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309BC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 8);
    eax = 0x20;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    esi = MEM32(edi + 0x40);
    ebp = MEM32(edi + 0x6C);
    edx = MEM32(edi + 0x4C);
    MEM32(esp + 0x10) = 0;
    ecx = eax;
    eax = esi;
    eax = eax - ebp;
    eax = eax - edx;
    ecx = ecx << 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebp = MEM32(edi + 0x68);
    edx = esi;
    edx = edx - ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    esi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00309C03; /* jl: less (signed <) */

loc_00309C01: ;
    esi = edx;

loc_00309C03: ;
    eax = 0x800;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = eax << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309C14; /* jl: less (signed <) */

loc_00309C12: ;
    esi = eax;

loc_00309C14: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00309C2A; /* jg: greater (signed >) */

loc_00309C22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00309C2A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    eax = 0x5EFF00;
    if (CMP_EQ(_fa, _fb)) goto loc_00309C39; /* je: equal / zero */

loc_00309C34: ;
    eax = 0x5EF6E0;

loc_00309C39: ;
    ebp = eax + 0x20;
    SET_LO8(eax, MEM8(edi + 3));
    ebp = ebp & 0xFFFFFFE0u;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00309C64; /* jbe: below or equal (unsigned <=) */

loc_00309C48: ;
    eax = MEM32(edi + 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edx = ebp;
    PUSH32(esp, 0x00309C54u); RECOMP_ABI_CALL(0x00309850u, sub_00309850); /* call 0x00309850 */

loc_00309C54: ;
    MEM32(esp + 0x18) = eax;
    eax = ZX8(MEM8(edi + 3));
    esp = esp + 8;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00309C48; /* jl: less (signed <) */

loc_00309C64: ;
    eax = MEM32(esp + 0x10);
    MEM32(edi + 0x70) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309C80
 * Original: 0x00309C80 - 0x00309D68 (232 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309C80: ;
    eax = MEM32(esi + 0xB4);
    ecx = MEM32(esi + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309CDC; /* je: equal / zero */

loc_00309C90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309CB8; /* jne: not equal / not zero */

loc_00309C95: ;
    _fa = (uint32_t)(MEM32(0x5BF288)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5BF288), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309CCE; /* je: equal / zero */

loc_00309C9E: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x10); PUSH32(esp, 0x00309CA7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309CA7: ;
    eax = MEM32(esi + 0xB4);
    esp = esp + 4;
    MEM32(esi + 0xB8) = eax;
    goto loc_00309D15;

loc_00309CB8: ;
    eax = MEM32(esi + 0x50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00309CC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309CC1: ;
    MEM32(esi + 0xBC) = 0;
    esp = esp + 4;

loc_00309CCE: ;
    eax = MEM32(esi + 0xB4);
    MEM32(esi + 0xB8) = eax;
    goto loc_00309D15;

loc_00309CDC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309D15; /* jne: not equal / not zero */

loc_00309CE1: ;
    _fa = (uint32_t)(MEM32(esi + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xBC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00309D15; /* jne: not equal / not zero */

loc_00309CE9: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x00309CF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309CF2: ;
    eax = MEM32(0x5BF288);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309D0B; /* je: equal / zero */

loc_00309CFF: ;
    eax = MEM32(esi + 0x50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00309D08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309D08: ;
    esp = esp + 4;

loc_00309D0B: ;
    MEM32(esi + 0xBC) = 0;

loc_00309D15: ;
    ecx = MEM32(esi + 0xC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xC4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309D3C; /* je: equal / zero */

loc_00309D23: ;
    eax = MEM32(esi + 0x50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00309D2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309D2D: ;
    eax = MEM32(esi + 0xC0);
    esp = esp + 8;
    MEM32(esi + 0xC4) = eax;

loc_00309D3C: ;
    ecx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xCC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0xCC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00309D67; /* je: equal / zero */

loc_00309D4A: ;
    eax = MEM32(esi + 0x50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00309D58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309D58: ;
    eax = MEM32(esi + 0xC8);
    esp = esp + 0x10;
    MEM32(esi + 0xCC) = eax;

loc_00309D67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00309D70
 * Original: 0x00309D70 - 0x00309D91 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309D70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309D89; /* jne: not equal / not zero */

loc_00309D78: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x00309D82u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309D82: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00309D89: ;
    eax = ZX8(MEM8(eax + 1));
    eax = eax & 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00309DA0
 * Original: 0x00309DA0 - 0x00309DC3 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309DA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309DB9; /* jne: not equal / not zero */

loc_00309DA8: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x00309DB2u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309DB2: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00309DB9: ;
    eax = ZX8(MEM8(eax + 1));
    eax = eax >> 1;
    eax = eax & 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00309DD0
 * Original: 0x00309DD0 - 0x00309DED (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309DD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309DE9; /* jne: not equal / not zero */

loc_00309DD8: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x00309DE2u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309DE2: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00309DE9: ;
    eax = MEM32(eax + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_00309DF0
 * Original: 0x00309DF0 - 0x00309E36 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309DF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309DF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309E06; /* jne: not equal / not zero */

loc_00309DF8: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x00309E02u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309E02: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00309E06: ;
    edx = ZX8(MEM8(eax + 2));
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00309E20; /* jle: less or equal (signed <=) */

loc_00309E12: ;
    PUSH32(esp, 0x42C3B0);
    PUSH32(esp, 0x00309E1Cu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309E1C: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00309E20: ;
    MEM8(eax + 3) = LO8(ecx);
    eax = MEM32(eax + 0x50);
    edx = MEM32(eax);
    ecx = SX8(LO8(ecx));
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_00309E40
 * Original: 0x00309E40 - 0x00309E89 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309E40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309E58; /* jne: not equal / not zero */

loc_00309E49: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x00309E53u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309E53: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00309E58: ;
    eax = MEM32(esi + 0x40);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 8));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    PUSH32(esp, edi);
    eax = eax << 3;
    MEM32(esi + 0x40) = eax;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x2C); PUSH32(esp, 0x00309E80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309E80: ;
    esp = esp + 8;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309E90
 * Original: 0x00309E90 - 0x00309EB4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309E90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309EA6; /* jne: not equal / not zero */

loc_00309E98: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x00309EA2u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309EA2: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00309EA6: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0xC8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00309EC0
 * Original: 0x00309EC0 - 0x00309F00 (64 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309EC0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309ED6; /* jne: not equal / not zero */

loc_00309EC8: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x00309ED2u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309ED2: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00309ED6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00309EEA; /* jl: less (signed <) */

loc_00309EDE: ;
    eax = 0; /* xor self */
    MEM32(ecx + 0xC0) = eax;
    MEM32(ecx + 0x78) = eax;
    esp += 4; return; /* ret */

loc_00309EEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFC19u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFC19u (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00309EF6; /* jg: greater (signed >) */

loc_00309EF1: ;
    eax = 0xFFFFFC19u;

loc_00309EF6: ;
    MEM32(ecx + 0xC0) = eax;
    MEM32(ecx + 0x78) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00309F00
 * Original: 0x00309F00 - 0x00309F5A (90 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309F00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309F18; /* jne: not equal / not zero */

loc_00309F09: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x00309F13u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309F13: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00309F18: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00309F57; /* jl: less (signed <) */

loc_00309F21: ;
    eax = ZX8(MEM8(ebx + 3));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00309F57; /* jge: greater or equal (signed >=) */

loc_00309F29: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFF1u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00309F3A; /* jge: greater or equal (signed >=) */

loc_00309F33: ;
    esi = 0xFFFFFFF1u;
    goto loc_00309F44;

loc_00309F3A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00309F44; /* jle: less or equal (signed <=) */

loc_00309F3F: ;
    esi = 0xF;

loc_00309F44: ;
    eax = MEM32(ebx + 0x50);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x3C); PUSH32(esp, 0x00309F4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00309F4F: ;
    esp = esp + 0xC;
    MEM32(ebx + edi * 4 + 0x7C) = esi;
    POP32(esp, esi);

loc_00309F57: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309F60
 * Original: 0x00309F60 - 0x00309F7D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309F60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309F79; /* jne: not equal / not zero */

loc_00309F68: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x00309F72u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309F72: ;
    esp = esp + 4;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00309F79: ;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00309F80
 * Original: 0x00309F80 - 0x00309FC3 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00309F80: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309FAA; /* jne: not equal / not zero */

loc_00309F88: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x00309F92u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309F92: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0xFFFFFFFFu;
    esp = esp + 4;
    MEM32(ecx) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00309FAA: ;
    edx = MEM32(eax + 0x98);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x9C);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00309FD0
 * Original: 0x00309FD0 - 0x00309FD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309FD0: ;
    g_seh_ebp = ebp; sub_0030FC40(); return; /* tail jmp 0x0030FC40 */

}

/**
 * sub_00309FE0
 * Original: 0x00309FE0 - 0x0030A0F6 (278 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309FE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309FE0: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00309FFE; /* jne: not equal / not zero */

loc_00309FEC: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x00309FF6u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_00309FF6: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_00309FFE: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x4C); PUSH32(esp, 0x0030A011u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A011: ;
    edi = MEM32(esp + 0x44);
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax);
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x50); PUSH32(esp, 0x0030A026u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A026: ;
    eax = MEM32(edi);
    esp = esp + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030A0F0; /* jle: less or equal (signed <=) */

loc_0030A033: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x30); PUSH32(esp, 0x0030A03Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A03E: ;
    edi = eax;
    eax = MEM32(esi + 0x50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0030A049u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A049: ;
    ebx = eax;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x38); PUSH32(esp, 0x0030A054u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A054: ;
    ebp = eax;
    eax = MEM32(esi + 0x50);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0030A061u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A061: ;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x40); PUSH32(esp, 0x0030A070u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A070: ;
    ecx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esi + 0x50);
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0030A089u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A089: ;
    eax = MEM32(esi + 0x50);
    edx = MEM32(eax);
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0030A09Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A09E: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A0A5u); RECOMP_ABI_CALL(0x00309E40u, sub_00309E40); /* call 0x00309E40 */

loc_0030A0A5: ;
    esp = esp + 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A0AFu); RECOMP_ABI_CALL(0x00309E90u, sub_00309E90); /* call 0x00309E90 */

loc_0030A0AF: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x3C);
    esp = esp + 8;
    MEM32(esi + 0x78) = ebp;
    MEM32(esi + 0x7C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x80) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x90) = ecx;
    ecx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(esi + 0x94) = edx;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = ecx;
    POP32(esp, ebx);

loc_0030A0F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0030A100
 * Original: 0x0030A100 - 0x0030A170 (112 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A100(void)
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

loc_0030A100: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A11A; /* jne: not equal / not zero */

loc_0030A109: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x0030A113u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A113: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030A11A: ;
    eax = MEM32(esi + 0x98);
    fp_push(MEMD(0x3E20C0)); /* fld double */
    ecx = MEM32(esi + 0x9C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    eax = eax + ecx;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMD(0x42C440); /* fmul qword ptr [0x42c440] */
    PUSH32(esp, 0x0030A144u); RECOMP_ABI_CALL(0x00341990u, sub_00341990); /* call 0x00341990 */

loc_0030A144: ;
    fp_top() = fp_top() * (double)SMEM32(esi + 0xC); /* fimul dword ptr [esi + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x42C438)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x42c438] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A16A; /* jne: not equal / not zero */

loc_0030A154: ;
    PUSH32(esp, 0x42C3E8);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0030A160u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A160: ;
    esp = esp + 4;
    eax = 0x7FFFFFFF;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030A16A: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001A41F0(); return; /* tail jmp 0x001A41F0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0030A170
 * Original: 0x0030A170 - 0x0030A276 (262 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A170: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030A265; /* jl: less (signed <) */

loc_0030A17E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0030A265; /* jg: greater (signed >) */

loc_0030A187: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A1A2; /* jne: not equal / not zero */

loc_0030A190: ;
    PUSH32(esp, 0x42C4CC);
    PUSH32(esp, 0x0030A19Au); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A19A: ;
    esp = esp + 4;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0030A1A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030A1B3; /* jle: less or equal (signed <=) */

loc_0030A1A8: ;
    _fa = (uint32_t)(MEM32(edi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A190; /* je: equal / zero */

loc_0030A1AE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030A1A8; /* jl: less (signed <) */

loc_0030A1B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A1B9u); RECOMP_ABI_CALL(0x003097F0u, sub_003097F0); /* call 0x003097F0 */

loc_0030A1B9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A1D2; /* jne: not equal / not zero */

loc_0030A1BF: ;
    PUSH32(esp, 0x42C49C);
    PUSH32(esp, 0x0030A1C9u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A1C9: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0030A1D2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM8(esi + 3) = LO8(ebx);
    MEM8(esi + 2) = LO8(ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030A1EE; /* jle: less or equal (signed <=) */

loc_0030A1DE: ;
    ecx = esi + 0x30;

loc_0030A1E1: ;
    edx = MEM32(edi + eax * 4);
    MEM32(ecx) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030A1E1; /* jl: less (signed <) */

loc_0030A1EE: ;
    eax = MEM32(0x5BF27C);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0030A1F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A1F7: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x50) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0030A214; /* jne: not equal / not zero */

loc_0030A201: ;
    PUSH32(esp, 0x42C478);
    PUSH32(esp, 0x0030A20Bu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A20B: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0030A214: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030A21Eu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030A21E: ;
    eax = esi;
    PUSH32(esp, 0x0030A225u); RECOMP_ABI_CALL(0x00309780u, sub_00309780); /* call 0x00309780 */

loc_0030A225: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A22Du); RECOMP_ABI_CALL(0x00309E40u, sub_00309E40); /* call 0x00309E40 */

loc_0030A22D: ;
    PUSH32(esp, 0xAC44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A238u); RECOMP_ABI_CALL(0x00309E90u, sub_00309E90); /* call 0x00309E90 */

loc_0030A238: ;
    edx = ZX8(MEM8(esi + 3));
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A243u); RECOMP_ABI_CALL(0x00309DF0u, sub_00309DF0); /* call 0x00309DF0 */

loc_0030A243: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x0030A24Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A24C: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    MEM32(esi + 0x40) = eax;
    MEM8(esi) = 1;
    PUSH32(esp, 0x0030A25Cu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030A25C: ;
    esp = esp + 0x24;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0030A265: ;
    PUSH32(esp, 0x42C448);
    PUSH32(esp, 0x0030A26Fu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A26F: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A280
 * Original: 0x0030A280 - 0x0030A31D (157 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030A280: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x48);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x0030A292u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A292: ;
    ebp = eax;
    eax = 0x20;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 8)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 8))); }
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edi = eax;
    edi = edi << 3;
    PUSH32(esp, 0x0030A2ACu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030A2AC: ;
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    esp = esp + 0xC;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edi = eax;
    edi = edi - ebx;
    MEM32(esi + 0x48) = eax;
    if (((int32_t)edi >= 0)) goto loc_0030A2C3; /* jns: not sign (positive) */

loc_0030A2C0: ;
    edi = edi + MEM32(esi + 0x40);

loc_0030A2C3: ;
    ecx = MEM32(esi + 0x40);
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((4) & 31u));
    ecx = ecx - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0030A2DA; /* jle: less or equal (signed <=) */

loc_0030A2D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030A2DA; /* je: equal / zero */

loc_0030A2D5: ;
    MEM32(esi + 0x48) = ebx;
    edi = 0; /* xor self */

loc_0030A2DA: ;
    ebp = MEM32(esi + 0x4C);
    ebp = ebp - edi;
    if (((int32_t)ebp >= 0)) goto loc_0030A300; /* jns: not sign (positive) */

loc_0030A2E1: ;
    edi = MEM32(esi + 0x44);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    edi = edi - ebx;
    PUSH32(esp, 0x0030A2EEu); RECOMP_ABI_CALL(0x00309D70u, sub_00309D70); /* call 0x00309D70 */

loc_0030A2EE: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A300; /* jne: not equal / not zero */

loc_0030A2F6: ;
    eax = MEM32(esi + 0x48);
    MEM32(esi + 0x44) = eax;
    MEM8(esi + 4) = 1;

loc_0030A300: ;
    ebx = MEM32(esi + 0x60);
    ecx = esp + 0xC;
    ebx = ebx + edi;
    PUSH32(esp, ecx);
    MEM32(esi + 0x4C) = ebp;
    MEM32(esi + 0x60) = ebx;
    PUSH32(esp, 0x0030A315u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030A315: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A320
 * Original: 0x0030A320 - 0x0030A3F6 (214 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A320: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A33C; /* jne: not equal / not zero */

loc_0030A32C: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x0030A336u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A336: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0030A33C: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), 1 (8-bit) */
    MEM32(esi + 0xB0) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_0030A372; /* jne: not equal / not zero */

loc_0030A34C: ;
    eax = esi;
    PUSH32(esp, 0x0030A353u); RECOMP_ABI_CALL(0x00309990u, sub_00309990); /* call 0x00309990 */

loc_0030A353: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A359u); RECOMP_ABI_CALL(0x00309D70u, sub_00309D70); /* call 0x00309D70 */

loc_0030A359: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A368; /* jne: not equal / not zero */

loc_0030A361: ;
    PUSH32(esp, 0x0030A366u); RECOMP_ABI_CALL(0x00309900u, sub_00309900); /* call 0x00309900 */

loc_0030A366: ;
    goto loc_0030A36F;

loc_0030A368: ;
    ecx = esi;
    PUSH32(esp, 0x0030A36Fu); RECOMP_ABI_CALL(0x00309970u, sub_00309970); /* call 0x00309970 */

loc_0030A36F: ;
    MEM8(esi + 5) = LO8(ebx);

loc_0030A372: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030A37Cu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030A37C: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xB0) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0030A3AA; /* jne: not equal / not zero */

loc_0030A38D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A393u); RECOMP_ABI_CALL(0x00309D70u, sub_00309D70); /* call 0x00309D70 */

loc_0030A393: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030A3E6; /* je: equal / zero */

loc_0030A39A: ;
    ecx = MEM32(esi + 0x44);
    SET_LO8(eax, MEM8(esi + 1));
    MEM32(esi + 0x68) = ecx;
    MEM32(esi + 0x70) = ebx;
    SET_LO8(eax, LO8(eax) & 6);
    goto loc_0030A3E0;

loc_0030A3AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A3E6; /* jne: not equal / not zero */

loc_0030A3AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A3B5u); RECOMP_ABI_CALL(0x00309D70u, sub_00309D70); /* call 0x00309D70 */

loc_0030A3B5: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A3E6; /* je: equal / zero */

loc_0030A3BD: ;
    SET_LO8(eax, MEM8(esi + 1));
    MEM32(esi + 0x44) = ebx;
    MEM32(esi + 0x48) = ebx;
    MEM32(esi + 0x4C) = ebx;
    MEM8(esi + 6) = LO8(ebx);
    MEM32(esi + 0x74) = ebx;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM8(esi + 4) = LO8(ebx);
    MEM32(esi + 0x68) = ebx;
    SET_LO8(eax, LO8(eax) | 1);

loc_0030A3E0: ;
    MEM32(esi + 0x6C) = ebx;
    MEM8(esi + 1) = LO8(eax);

loc_0030A3E6: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030A3F0u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030A3F0: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A400
 * Original: 0x0030A400 - 0x0030A487 (135 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A400: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A418; /* jne: not equal / not zero */

loc_0030A409: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x0030A413u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A413: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030A418: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030A422u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030A422: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0xB4) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0030A461; /* jne: not equal / not zero */

loc_0030A433: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A439u); RECOMP_ABI_CALL(0x00309DA0u, sub_00309DA0); /* call 0x00309DA0 */

loc_0030A439: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030A478; /* je: equal / zero */

loc_0030A440: ;
    SET_LO8(eax, MEM8(esi + 1));
    ecx = esp + 8;
    SET_LO8(eax, LO8(eax) & 5);
    PUSH32(esp, ecx);
    MEM32(esi + 0xBC) = 1;
    MEM8(esi + 1) = LO8(eax);
    PUSH32(esp, 0x0030A45Cu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030A45C: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030A461: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A478; /* jne: not equal / not zero */

loc_0030A466: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A46Cu); RECOMP_ABI_CALL(0x00309DA0u, sub_00309DA0); /* call 0x00309DA0 */

loc_0030A46C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A478; /* je: equal / zero */

loc_0030A474: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 2;

loc_0030A478: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030A482u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030A482: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A490
 * Original: 0x0030A490 - 0x0030A60B (379 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A490: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xB0);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030A607; /* je: equal / zero */

loc_0030A4A8: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030A4B2u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030A4B2: ;
    eax = MEM32(0x5BF284);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A4CF; /* jne: not equal / not zero */

loc_0030A4BE: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030A4C8u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030A4C8: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030A4CF: ;
    edx = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(0x5BF284) = ebx;
    PUSH32(esp, 0x0030A4E0u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030A4E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A4E6u); RECOMP_ABI_CALL(0x00309D70u, sub_00309D70); /* call 0x00309D70 */

loc_0030A4E6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A518; /* jne: not equal / not zero */

loc_0030A4ED: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A518; /* jne: not equal / not zero */

loc_0030A4F2: ;
    edi = esi;
    PUSH32(esp, 0x0030A4F9u); RECOMP_ABI_CALL(0x00309880u, sub_00309880); /* call 0x00309880 */

loc_0030A4F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A512; /* jne: not equal / not zero */

loc_0030A4FD: ;
    PUSH32(esp, 0x0030A502u); RECOMP_ABI_CALL(0x00309900u, sub_00309900); /* call 0x00309900 */

loc_0030A502: ;
    MEM8(esi + 5) = 0;
    MEM32(0x5BF294) = 0;
    goto loc_0030A518;

loc_0030A512: ;
    MEM32(0x5BF294) = MEM32(0x5BF294) + 1;
    _fa = (uint32_t)(MEM32(0x5BF294)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0030A518: ;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 6), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A545; /* jne: not equal / not zero */

loc_0030A51D: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A545; /* jne: not equal / not zero */

loc_0030A524: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x0030A52Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A52E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030A545; /* jge: greater or equal (signed >=) */

loc_0030A536: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A53Eu); RECOMP_ABI_CALL(0x0030A320u, sub_0030A320); /* call 0x0030A320 */

loc_0030A53E: ;
    esp = esp + 8;
    MEM8(esi + 6) = 0;

loc_0030A545: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A54Bu); RECOMP_ABI_CALL(0x00309DA0u, sub_00309DA0); /* call 0x00309DA0 */

loc_0030A54B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A557; /* jne: not equal / not zero */

loc_0030A552: ;
    PUSH32(esp, 0x0030A557u); RECOMP_ABI_CALL(0x0030A280u, sub_0030A280); /* call 0x0030A280 */

loc_0030A557: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A55Du); RECOMP_ABI_CALL(0x00309D70u, sub_00309D70); /* call 0x00309D70 */

loc_0030A55D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A574; /* jne: not equal / not zero */

loc_0030A564: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A5B9; /* jne: not equal / not zero */

loc_0030A56B: ;
    eax = esi;
    PUSH32(esp, 0x0030A572u); RECOMP_ABI_CALL(0x003099D0u, sub_003099D0); /* call 0x003099D0 */

loc_0030A572: ;
    goto loc_0030A5B2;

loc_0030A574: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A57Au); RECOMP_ABI_CALL(0x00309DA0u, sub_00309DA0); /* call 0x00309DA0 */

loc_0030A57A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A5B9; /* jne: not equal / not zero */

loc_0030A581: ;
    edx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x40) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0030A5B9; /* jge: greater or equal (signed >=) */

loc_0030A589: ;
    _fa = (uint32_t)(MEM8(esi + 5)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 5), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A5A4; /* jne: not equal / not zero */

loc_0030A58E: ;
    edi = esi;
    PUSH32(esp, 0x0030A595u); RECOMP_ABI_CALL(0x00309880u, sub_00309880); /* call 0x00309880 */

loc_0030A595: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A5A4; /* jne: not equal / not zero */

loc_0030A599: ;
    ecx = esi;
    PUSH32(esp, 0x0030A5A0u); RECOMP_ABI_CALL(0x00309970u, sub_00309970); /* call 0x00309970 */

loc_0030A5A0: ;
    MEM8(esi + 5) = 0;

loc_0030A5A4: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A5B9; /* jne: not equal / not zero */

loc_0030A5AB: ;
    eax = esi;
    PUSH32(esp, 0x0030A5B2u); RECOMP_ABI_CALL(0x00309BC0u, sub_00309BC0); /* call 0x00309BC0 */

loc_0030A5B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030A5B9; /* jle: less or equal (signed <=) */

loc_0030A5B6: ;
    MEM8(esi + 5) = LO8(ebx);

loc_0030A5B9: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 5 (8-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0030A5E0; /* jne: not equal / not zero */

loc_0030A5C0: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x58) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030A5E0; /* jl: less (signed <) */

loc_0030A5C8: ;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A5E0; /* jne: not equal / not zero */

loc_0030A5CF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A5D6u); RECOMP_ABI_CALL(0x0030A400u, sub_0030A400); /* call 0x0030A400 */

loc_0030A5D6: ;
    esp = esp + 8;
    MEM32(esi + 0x58) = 0x7FFFFFFF;

loc_0030A5E0: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A5F8; /* jne: not equal / not zero */

loc_0030A5E6: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A5F8; /* jne: not equal / not zero */

loc_0030A5ED: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A5F5u); RECOMP_ABI_CALL(0x0030A400u, sub_0030A400); /* call 0x0030A400 */

loc_0030A5F5: ;
    esp = esp + 8;

loc_0030A5F8: ;
    PUSH32(esp, 0x0030A5FDu); RECOMP_ABI_CALL(0x00309C80u, sub_00309C80); /* call 0x00309C80 */

loc_0030A5FD: ;
    MEM32(0x5BF284) = 0;

loc_0030A607: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A610
 * Original: 0x0030A610 - 0x0030A638 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A610: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x5F0720;
    edi = 0x10;
    /* nop */

loc_0030A620: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A62C; /* jne: not equal / not zero */

loc_0030A625: ;
    eax = esi;
    PUSH32(esp, 0x0030A62Cu); RECOMP_ABI_CALL(0x0030A490u, sub_0030A490); /* call 0x0030A490 */

loc_0030A62C: ;
    esi = esi + 0xD0;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030A620; /* jne: not equal / not zero */

loc_0030A635: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A640
 * Original: 0x0030A640 - 0x0030A707 (199 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A640: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A65A; /* jne: not equal / not zero */

loc_0030A64A: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x0030A654u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A654: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030A65A: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030A664u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030A664: ;
    SET_LO8(eax, MEM8(esi + 5));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A68E; /* jne: not equal / not zero */

loc_0030A66E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A674u); RECOMP_ABI_CALL(0x00309D70u, sub_00309D70); /* call 0x00309D70 */

loc_0030A674: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A683; /* jne: not equal / not zero */

loc_0030A67C: ;
    PUSH32(esp, 0x0030A681u); RECOMP_ABI_CALL(0x00309900u, sub_00309900); /* call 0x00309900 */

loc_0030A681: ;
    goto loc_0030A68A;

loc_0030A683: ;
    ecx = esi;
    PUSH32(esp, 0x0030A68Au); RECOMP_ABI_CALL(0x00309970u, sub_00309970); /* call 0x00309970 */

loc_0030A68A: ;
    MEM8(esi + 5) = 0;

loc_0030A68E: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030A6F7; /* je: equal / zero */

loc_0030A695: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0030A6F7; /* jle: less or equal (signed <=) */

loc_0030A69C: ;
    eax = MEM32(esi + 0x50);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0030A6ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A6AD: ;
    ebx = MEM32(esp + 0x18);
    edi = eax;
    eax = MEM32(esi + 0xAC);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A6D1; /* jne: not equal / not zero */

loc_0030A6C1: ;
    eax = MEM32(esi + 0x68);
    ecx = MEM32(esi + 0x40);
    eax = eax - ebx;
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x68) = edx;

loc_0030A6D1: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(esi + 0x40);
    eax = eax - ebx;
    eax = eax + ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0x48);
    eax = edi;
    eax = eax - ebx;
    ecx = ecx + eax;
    eax = MEM32(esi + 0x4C);
    eax = eax - edi;
    POP32(esp, edi);
    MEM32(esi + 0x48) = ecx;
    MEM32(esi + 0x4C) = eax;
    POP32(esp, ebx);
    MEM32(esi + 0x44) = edx;

loc_0030A6F7: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030A701u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030A701: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A710
 * Original: 0x0030A710 - 0x0030A744 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A710: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A726; /* jne: not equal / not zero */

loc_0030A718: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x0030A722u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A722: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0030A726: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(eax + 0x64);
    ecx = ecx - edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    MEM32(edx) = ecx;
    PUSH32(esp, 0x0030A73Au); RECOMP_ABI_CALL(0x00309F60u, sub_00309F60); /* call 0x00309F60 */

loc_0030A73A: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx) = eax;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0030A750
 * Original: 0x0030A750 - 0x0030A78F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A750: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A768; /* jne: not equal / not zero */

loc_0030A759: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x0030A763u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A763: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030A768: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = ecx;
    PUSH32(esp, 0x0030A784u); RECOMP_ABI_CALL(0x0030A100u, sub_0030A100); /* call 0x0030A100 */

loc_0030A784: ;
    esp = esp + 0xC;
    MEM32(esi + 0xC8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A790
 * Original: 0x0030A790 - 0x0030A88E (254 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030A790: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A7A8; /* jne: not equal / not zero */

loc_0030A799: ;
    PUSH32(esp, 0x42C340);
    PUSH32(esp, 0x0030A7A3u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A7A3: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0030A7A8: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030A7B2u); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030A7B2: ;
    SET_LO8(eax, MEM8(edi + 1));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030A7E8; /* je: equal / zero */

loc_0030A7BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030A7C2u); RECOMP_ABI_CALL(0x00309830u, sub_00309830); /* call 0x00309830 */

loc_0030A7C2: ;
    eax = MEM32(edi + 0xB8);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030A7E8; /* je: equal / zero */

loc_0030A7CF: ;
    /* nop */

loc_0030A7D0: ;
    PUSH32(esp, 0x0030A7D5u); RECOMP_ABI_CALL(0x0030A610u, sub_0030A610); /* call 0x0030A610 */

loc_0030A7D5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0030A7DBu); RECOMP_ABI_CALL(0x00309830u, sub_00309830); /* call 0x00309830 */

loc_0030A7DB: ;
    eax = MEM32(edi + 0xB8);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A7D0; /* jne: not equal / not zero */

loc_0030A7E8: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030A7F2u); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030A7F2: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030A7FCu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030A7FC: ;
    eax = MEM32(0x5BF284);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0030A837; /* je: equal / zero */

loc_0030A808: ;
    goto loc_0030A810;

    /* nop */

loc_0030A810: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030A81Au); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030A81A: ;
    eax = edi;
    PUSH32(esp, 0x0030A821u); RECOMP_ABI_CALL(0x00309990u, sub_00309990); /* call 0x00309990 */

loc_0030A821: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030A82Bu); RECOMP_ABI_CALL(0x0033EA10u, sub_0033EA10); /* call 0x0033EA10 */

loc_0030A82B: ;
    eax = MEM32(0x5BF284);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030A810; /* jne: not equal / not zero */

loc_0030A837: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(0x5BF284) = 1;
    PUSH32(esp, 0x0030A84Bu); RECOMP_ABI_CALL(0x0033EA20u, sub_0033EA20); /* call 0x0033EA20 */

loc_0030A84B: ;
    SET_LO8(ecx, MEM8(edi + 2));
    esp = esp + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM8(edi) = 0;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0030A872; /* jbe: below or equal (unsigned <=) */

loc_0030A85A: ;
    ecx = edi + 0x30;
    /* nop */

loc_0030A860: ;
    MEM32(ecx) = 0;
    edx = ZX8(MEM8(edi + 2));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030A860; /* jl: less (signed <) */

loc_0030A872: ;
    eax = MEM32(edi + 0x50);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x0030A87Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A87B: ;
    eax = 0; /* xor self */
    ecx = 0x34;
    esp = esp + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x5BF284) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A890
 * Original: 0x0030A890 - 0x0030A918 (136 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030A890: ;
    MEM32(0x5BF278) = MEM32(0x5BF278) - 1;
    _fa = (uint32_t)(MEM32(0x5BF278)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0030A917; /* jne: not equal / not zero */

loc_0030A898: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x5F0720;
    /* nop */

loc_0030A8A0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A8AE; /* jne: not equal / not zero */

loc_0030A8A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A8ABu); RECOMP_ABI_CALL(0x00309830u, sub_00309830); /* call 0x00309830 */

loc_0030A8AB: ;
    esp = esp + 4;

loc_0030A8AE: ;
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F1420) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5F1420 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030A8A0; /* jl: less (signed <) */

loc_0030A8BC: ;
    esi = 0x5F0720;

loc_0030A8C1: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030A8CF; /* jne: not equal / not zero */

loc_0030A8C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0030A8CCu); RECOMP_ABI_CALL(0x0030A790u, sub_0030A790); /* call 0x0030A790 */

loc_0030A8CC: ;
    esp = esp + 4;

loc_0030A8CF: ;
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F1420) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5F1420 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030A8C1; /* jl: less (signed <) */

loc_0030A8DD: ;
    eax = 0; /* xor self */
    ecx = 0x340;
    edi = 0x5F0720;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x208;
    edi = 0x5EF6E0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = 0x80808080u;
    ecx = 0x200;
    edi = 0x5EFF00;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(0x5BF27C);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0030A910u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0030A910: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

loc_0030A917: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030A920
 * Original: 0x0030A920 - 0x0030A96A (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A920(void)
{

loc_0030A920: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM16(edx + 0x10) = LO16(ecx);
    ecx = MEM32(esp + 4);
    MEM16(eax + 2) = LO16(ecx);
    ecx = ecx + ecx;
    MEM16(eax + 0xC) = LO16(ecx);
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xAC44);
    MEM16(eax) = 1;
    MEM32(eax + 4) = 0xAC44;
    MEM16(eax + 0xE) = 0x10;
    MEM16(eax + 0x10) = 0;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030A970
 * Original: 0x0030A970 - 0x0030AA3E (206 bytes, 75 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030A970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0030A970: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A98Bu); RECOMP_ICALL_SAFE(0x00370719u, _icall_esp); /* manual call 0x00370719 */
    }

loc_0030A98B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0030A99C; /* je: equal / zero */

loc_0030A98F: ;
    PUSH32(esp, 0x42CAA8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A999u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030A999: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_0030A99C: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A9A6u); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_0030A9A6: ;
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A9B1u); RECOMP_ICALL_SAFE(0x00370799u, _icall_esp); /* manual call 0x00370799 */
    }

loc_0030A9B1: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0030AA37; /* jne: not equal / not zero */

loc_0030A9B8: ;
    goto loc_0030A9C0;

    /* nop */

loc_0030A9C0: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A9CAu); RECOMP_ABI_CALL(0x0034D3D9u, sub_0034D3D9); /* call 0x0034D3D9 */

loc_0030A9CA: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5DC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A9E0u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0030A9E0: ;
    MEM32(esp + 0x14) = edx;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030A9F2u); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_0030A9F2: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x24);
    ecx = edi;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    eax = edx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0030AA37; /* jg: greater (signed >) */

loc_0030AA10: ;
    if (CMP_L(_fas, _fbs)) goto loc_0030AA18; /* jl: less (signed <) */

loc_0030AA12: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0030AA37; /* ja: above (unsigned >) */

loc_0030AA18: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0030AA37; /* jl: less (signed <) */

loc_0030AA1C: ;
    if (CMP_G(_fas, _fbs)) goto loc_0030AA22; /* jg: greater (signed >) */

loc_0030AA1E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0030AA37; /* jbe: below or equal (unsigned <=) */

loc_0030AA22: ;
    ecx = MEM32(ebp + 8);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030AA30u); RECOMP_ICALL_SAFE(0x00370799u, _icall_esp); /* manual call 0x00370799 */
    }

loc_0030AA30: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0030A9C0; /* je: equal / zero */

loc_0030AA37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AA40
 * Original: 0x0030AA40 - 0x0030AB0E (206 bytes, 77 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0030AA40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0030AA40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030AA55u); RECOMP_ICALL_SAFE(0x0037073Du, _icall_esp); /* manual call 0x0037073D */
    }

loc_0030AA55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0030AA6D; /* je: equal / zero */

loc_0030AA59: ;
    PUSH32(esp, 0x42CAE0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030AA63u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030AA63: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030AA6D: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030AA77u); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_0030AA77: ;
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030AA82u); RECOMP_ICALL_SAFE(0x00370799u, _icall_esp); /* manual call 0x00370799 */
    }

loc_0030AA82: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0030AB07; /* je: equal / zero */

loc_0030AA89: ;
    /* nop */

loc_0030AA90: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030AA9Au); RECOMP_ABI_CALL(0x0034D3D9u, sub_0034D3D9); /* call 0x0034D3D9 */

loc_0030AA9A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5DC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030AAB0u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0030AAB0: ;
    MEM32(esp + 0x14) = edx;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030AAC2u); RECOMP_ABI_CALL(0x0034D3C8u, sub_0034D3C8); /* call 0x0034D3C8 */

loc_0030AAC2: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x24);
    ecx = edi;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    eax = edx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0030AB07; /* jg: greater (signed >) */

loc_0030AAE0: ;
    if (CMP_L(_fas, _fbs)) goto loc_0030AAE8; /* jl: less (signed <) */

loc_0030AAE2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0030AB07; /* ja: above (unsigned >) */

loc_0030AAE8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0030AB07; /* jl: less (signed <) */

loc_0030AAEC: ;
    if (CMP_G(_fas, _fbs)) goto loc_0030AAF2; /* jg: greater (signed >) */

loc_0030AAEE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0030AB07; /* jbe: below or equal (unsigned <=) */

loc_0030AAF2: ;
    ecx = MEM32(ebp + 8);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030AB00u); RECOMP_ICALL_SAFE(0x00370799u, _icall_esp); /* manual call 0x00370799 */
    }

loc_0030AB00: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0030AA90; /* jne: not equal / not zero */

loc_0030AB07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AB10
 * Original: 0x0030AB10 - 0x0030AB30 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AB10: ;
    eax = MEM32(esp + 4);
    MEM32(0x5BF818) = eax;
    eax = 0x5BF2A0;
    ecx = 0; /* xor self */

loc_0030AB20: ;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5BF820) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5BF820 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030AB20; /* jl: less (signed <) */

loc_0030AB2F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030AB30
 * Original: 0x0030AB30 - 0x0030AB60 (48 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AB30: ;
    ecx = 0; /* xor self */
    MEM32(0x5BF818) = ecx;
    eax = 0x5BF2A0;
    /* nop */

loc_0030AB40: ;
    MEM32(eax + -4) = ecx;
    MEM32(eax) = ecx;
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5BF820) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5BF820 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030AB40; /* jl: less (signed <) */

loc_0030AB4F: ;
    MEM32(0x5BF81C) = ecx;
    MEM32(0x4767B8) = 0x8000;
    esp += 4; return; /* ret */

}

/**
 * sub_0030AB60
 * Original: 0x0030AB60 - 0x0030AB8E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030AB60: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = 0x5BF29C;
    /* nop */

loc_0030AB70: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030AB82; /* je: equal / zero */

loc_0030AB75: ;
    ecx = ecx + 0x58;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5BF81C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x5BF81C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030AB70; /* jl: less (signed <) */

loc_0030AB81: ;
    esp += 4; return; /* ret */

loc_0030AB82: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58);
    edx = edx + 0x5BF298;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030AB90
 * Original: 0x0030AB90 - 0x0030ABA5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AB90(void)
{

loc_0030AB90: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x16;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 4) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030ABB0
 * Original: 0x0030ABB0 - 0x0030AC7F (207 bytes, 61 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030ABB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030ABB0: ;
    esp = esp - 0x30;
    PUSH32(esp, edi);
    edi = MEM32(0x5BF818);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 4) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0030ABDA; /* jne: not equal / not zero */

loc_0030ABC6: ;
    PUSH32(esp, 0x42CB50);
    PUSH32(esp, 0x0030ABD0u); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030ABD0: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

loc_0030ABDA: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    ecx = esp + 0xC;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x0030AC04u); RECOMP_ABI_CALL(0x0030A920u, sub_0030A920); /* call 0x0030A920 */

loc_0030AC04: ;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(0x5BF81C);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    edx = esp + 0xC;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x20) = 0x18;
    MEM32(esp + 0x24) = 0x400A0;
    if (CMP_NE(_fa, _fb)) goto loc_0030AC3E; /* jne: not equal / not zero */

loc_0030AC31: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0030AC3E; /* jne: not equal / not zero */

loc_0030AC36: ;
    MEM32(esp + 0x24) = 0x400B0;

loc_0030AC3E: ;
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x0030AC50u); RECOMP_ICALL_SAFE(0x0037192Eu, _icall_esp); /* manual call 0x0037192E */
    }

loc_0030AC50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0030AC6A; /* je: equal / zero */

loc_0030AC55: ;
    PUSH32(esp, 0x42CB18);
    PUSH32(esp, 0x0030AC5Fu); RECOMP_ABI_CALL(0x0030FC90u, sub_0030FC90); /* call 0x0030FC90 */

loc_0030AC5F: ;
    esp = esp + 4;
    MEM32(esp + 4) = 0;

loc_0030AC6A: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030AC76u); RECOMP_ICALL_SAFE(0x003706E1u, _icall_esp); /* manual call 0x003706E1 */
    }

loc_0030AC76: ;
    eax = MEM32(esp + 4);
    POP32(esp, edi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}
