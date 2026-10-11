#include "engine/actors/raven_leader_event_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_campaign_state_guest.h"
/**
 * X-Men Legends - Recompiled code chunk 7
 * Functions: 250 (0x000672D0 - 0x0006F190)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000672D0
 * Original: 0x000672D0 - 0x000673D5 (261 bytes, 94 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000672D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000672D0: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x34);
    MEM32(esp + 4) = eax;
    PUSH32(esp, edi);
    eax = esp + 8;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x000672FBu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000672FB: ;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esi + 0x28);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00067343; /* je: equal / zero */

loc_0006732F: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;

loc_00067343: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006735F; /* je: equal / zero */

loc_0006734B: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;

loc_0006735F: ;
    eax = MEM32(esp + 0x34);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006739C; /* je: equal / zero */

loc_0006736A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00067370u); RECOMP_ABI_CALL(0x001389E0u, sub_001389E0); /* call 0x001389E0 */

loc_00067370: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006739A; /* je: equal / zero */

loc_00067379: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006739A; /* je: equal / zero */

loc_0006737E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067384u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00067384: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006738Fu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0006738F: ;
    ecx = eax;
    PUSH32(esp, 0x00067396u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00067396: ;
    edi = eax;
    goto loc_0006739C;

loc_0006739A: ;
    edi = 0; /* xor self */

loc_0006739C: ;
    ecx = MEM32(0x48D8E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000673A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000673A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edi;
    ecx = MEM32(esp + 0x48);
    esi = MEM32(esi + 0x1C);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000673CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000673CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000673E0
 * Original: 0x000673E0 - 0x000673EC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000673E0(void)
{

loc_000673E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000673E8u); RECOMP_ABI_CALL(0x000670F0u, sub_000670F0); /* call 0x000670F0 */

loc_000673E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000673F0
 * Original: 0x000673F0 - 0x00067825 (1077 bytes, 389 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000673F0(void)
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

loc_000673F0: ;
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x6C);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00067404u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067404: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006742C; /* je: equal / zero */

loc_0006740A: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006742C; /* je: equal / zero */

loc_0006740F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00067415u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00067415: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00067420u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00067420: ;
    ecx = eax;
    PUSH32(esp, 0x00067427u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00067427: ;
    MEM32(edi + 0x14) = eax;
    goto loc_00067433;

loc_0006742C: ;
    MEM32(edi + 0x14) = 0;

loc_00067433: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0006743Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006743A: ;
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM32(edi + 0x68) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x3C84D8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00067458u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067458: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006747A; /* je: equal / zero */

loc_0006745C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x2C); /* fadd dword ptr [edi + 0x2c] */
    MEMF(edi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x30); /* fadd dword ptr [edi + 0x30] */
    MEMF(edi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x34); /* fadd dword ptr [edi + 0x34] */
    MEMF(edi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_0006747A: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CC884);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00067495u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067495: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000674E8; /* je: equal / zero */

loc_00067499: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000674A2u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000674A2: ;
    ecx = MEM32(edi + 0x34);
    edx = MEM32(edi + 0x30);
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000674B7u); RECOMP_ABI_CALL(0x002427F0u, sub_002427F0); /* call 0x002427F0 */

loc_000674B7: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000674CAu); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_000674CA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x20); /* fadd dword ptr [edi + 0x20] */
    MEMF(edi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x24); /* fadd dword ptr [edi + 0x24] */
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 0x28); /* fadd dword ptr [edi + 0x28] */
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */

loc_000674E8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C9708);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000674F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000674F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067506; /* je: equal / zero */

loc_000674FA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00067500u); RECOMP_ABI_CALL(0x000668E0u, sub_000668E0); /* call 0x000668E0 */

loc_00067500: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    goto loc_00067508;

loc_00067506: ;
    PUSH32(esp, 0x1A);

loc_00067508: ;
    ecx = edi;
    PUSH32(esp, 0x0006750Fu); RECOMP_ABI_CALL(0x0002E320u, sub_0002E320); /* call 0x0002E320 */

loc_0006750F: ;
    edx = MEM32(esi);
    ebx = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CC878);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00067521u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067521: ;
    SET_LO8(ecx, MEM8(edi + 0x6C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 6);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x40);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(edi + 0x6C) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, 0x3CC86C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00067545u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067545: ;
    SET_LO8(ecx, MEM8(edi + 0x6C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(edi + 0x6C) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, 0x3CC85C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00067568u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067568: ;
    SET_LO8(ecx, MEM8(edi + 0x6C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(edi + 0x6C) = LO8(ecx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CC850);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0006758Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006758A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067697; /* je: equal / zero */

loc_00067592: ;
    ecx = MEM32(edi + 4);
    ebp = edi + 4;
    ecx = ecx & 0xFFFFFFBFu;
    MEM32(ebp) = ecx;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000675B7; /* je: equal / zero */

loc_000675A3: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(edi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000675B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000675B7: ;
    MEM32(ebp) = MEM32(ebp) & 0xFFFFFF7Fu;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000675D7; /* je: equal / zero */

loc_000675C3: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(edi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000675D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000675D7: ;
    MEM32(ebp) = MEM32(ebp) & 0xFFFFFEFFu;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000675F7; /* je: equal / zero */

loc_000675E3: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(edi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000675F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000675F7: ;
    MEM32(ebp) = MEM32(ebp) & 0xFFFFFDFFu;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067617; /* je: equal / zero */

loc_00067603: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(edi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067617u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067617: ;
    MEM32(ebp) = MEM32(ebp) & 0xFFFFFBFFu;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067637; /* je: equal / zero */

loc_00067623: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(edi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067637u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067637: ;
    MEM32(ebp) = MEM32(ebp) & 0xFFFFF7FFu;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067657; /* je: equal / zero */

loc_00067643: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(edi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067657u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067657: ;
    MEM32(ebp) = MEM32(ebp) & 0xFFFFEFFFu;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067677; /* je: equal / zero */

loc_00067663: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(edi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067677u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067677: ;
    MEM32(ebp) = MEM32(ebp) & 0xFFFFDFFFu;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067697; /* je: equal / zero */

loc_00067683: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(edi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067697u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067697: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = ecx;
    ebp = edi + 4;
    MEM32(esp + 0x28) = ecx;
    edx = ebp;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x1C;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edx + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, 0x3CC848);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000676DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000676DC: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3CC83C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000676EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000676EE: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x3CC834);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00067701u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067701: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x3CC828);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00067714u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067714: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x3CC820);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00067727u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067727: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x3CC814);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0006773Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006773A: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, 0x3CC80C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0006774Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006774D: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3CC7FC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00067760u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067760: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0x3CC7F0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00067773u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067773: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3CC7E0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00067786u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067786: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x3CC7D0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00067799u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067799: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3CC7C0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000677ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000677AC: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x3CC7B0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000677BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000677BF: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x3CC7A0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000677D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000677D2: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x3CC790);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000677E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000677E5: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    ecx = ebp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    _fa = (uint32_t)(MEM8(edi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006781B; /* je: equal / zero */

loc_00067807: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(edi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0006781Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006781B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00067830
 * Original: 0x00067830 - 0x0006786A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067830: ;
    SET_LO8(ecx, MEM8(0x48DAC8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00067864; /* jne: not equal / not zero */

loc_0006783F: ;
    edx = MEM32(0x48DAC8);
    edx = edx | eax;
    PUSH32(esp, 0x359E80);
    MEM32(0x48DAC8) = edx;
    MEM32(0x48DAC4) = 0;
    PUSH32(esp, 0x00067861u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00067861: ;
    esp = esp + 4;

loc_00067864: ;
    eax = 0x48D930;
    esp += 4; return; /* ret */

}

/**
 * sub_00067870
 * Original: 0x00067870 - 0x00067A09 (409 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00067870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, 0x0006787Au); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_0006787A: ;
    ecx = MEM32(eax + 0x194);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00067921; /* jle: less or equal (signed <=) */

loc_00067888: ;
    PUSH32(esp, ebp);
    /* nop */

loc_00067890: ;
    PUSH32(esp, 0x00067895u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_00067895: ;
    eax = MEM32(eax + edi * 4);
    ebp = MEM32(eax + 0x10);
    esi = 0; /* xor self */
    PUSH32(esp, 0x000678A2u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_000678A2: ;
    ecx = MEM32(eax + 0x194);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0006790E; /* jle: less or equal (signed <=) */

loc_000678AC: ;
    /* nop */

loc_000678B0: ;
    PUSH32(esp, 0x000678B5u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_000678B5: ;
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067900; /* jne: not equal / not zero */

loc_000678BD: ;
    PUSH32(esp, 0x000678C2u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_000678C2: ;
    ebx = eax;
    PUSH32(esp, 0x000678C9u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_000678C9: ;
    edx = MEM32(ebx + esi * 4);
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000678E8; /* jne: not equal / not zero */

loc_000678D7: ;
    PUSH32(esp, 0x000678DCu); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_000678DC: ;
    edx = MEM32(eax + edi * 4);
    MEM32(edx + 8) = 0xFFFFFFFFu;
    goto loc_00067900;

loc_000678E8: ;
    PUSH32(esp, 0x000678EDu); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_000678ED: ;
    ebx = eax;
    PUSH32(esp, 0x000678F4u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_000678F4: ;
    ecx = MEM32(ebx + esi * 4);
    edx = MEM32(eax + edi * 4);
    eax = MEM32(ecx + 4);
    MEM32(edx + 8) = eax;

loc_00067900: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00067906u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_00067906: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x194) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000678B0; /* jl: less (signed <) */

loc_0006790E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00067914u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_00067914: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x194) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00067890; /* jl: less (signed <) */

loc_00067920: ;
    POP32(esp, ebp);

loc_00067921: ;
    PUSH32(esp, 0x00067926u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_00067926: ;
    ecx = MEM32(eax + 0x194);
    MEM32(0x48D8E0) = ecx;
    edi = 0; /* xor self */
    PUSH32(esp, 0x00067939u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_00067939: ;
    ecx = MEM32(eax + 0x194);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00067A05; /* jle: less or equal (signed <=) */

loc_00067947: ;
    PUSH32(esp, 0x0006794Cu); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_0006794C: ;
    esi = eax;
    PUSH32(esp, 0x00067953u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_00067953: ;
    edx = MEM32(esi + edi * 4);
    ecx = MEM32(edx + 4);
    edx = MEM32(0x48D8E0);
    eax = MEM32(eax + edi * 4);
    ecx = ecx + edx + 0x21;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + 0x24;
    ebx = MEM32(eax + edx * 4);
    eax = eax + edx * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ebx = ebx | edx;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x00067987u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_00067987: ;
    esi = eax;
    PUSH32(esp, 0x0006798Eu); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_0006798E: ;
    ecx = MEM32(esi + edi * 4);
    ecx = MEM32(ecx + 4);
    eax = MEM32(eax + edi * 4);
    ecx = ecx + 0x21;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + 0x14;
    eax = eax + edx * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    PUSH32(esp, 0x000679B6u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_000679B6: ;
    eax = MEM32(eax + edi * 4);
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000679F3; /* je: equal / zero */

loc_000679C1: ;
    PUSH32(esp, 0x000679C6u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_000679C6: ;
    eax = MEM32(eax + edi * 4);
    ecx = esi + 0x21;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + 0x14;
    eax = eax + edx * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    PUSH32(esp, 0x000679E8u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_000679E8: ;
    eax = MEM32(eax + esi * 4);
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000679C1; /* jne: not equal / not zero */

loc_000679F3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000679F9u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_000679F9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x194) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00067947; /* jl: less (signed <) */

loc_00067A05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00067A10
 * Original: 0x00067A10 - 0x00067A33 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A10(void)
{

loc_00067A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3CC88C;
    PUSH32(esp, 0x00067A2Fu); RECOMP_ABI_CALL(0x000673E0u, sub_000673E0); /* call 0x000673E0 */

loc_00067A2F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00067A40
 * Original: 0x00067A40 - 0x00067A48 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00067A40: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_00067A50(); return; /* tail jmp 0x00067A50 */

}

/**
 * sub_00067A50
 * Original: 0x00067A50 - 0x00067AC2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067A50: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x7E4;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x7D8);
    edi = MEM32(eax + 0x7E0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    MEM32(eax + 0x7D8) = ecx;
    MEM32(eax + 0x7E0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00067AA8; /* jl: less (signed <) */

loc_00067A97: ;
    MEM32(eax + 0x7D8) = 0;
    ecx = 0x63;
    goto loc_00067AA9;

loc_00067AA8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00067AA9: ;
    MEM32(eax + ecx * 4 + 0x644) = esi;
    ecx = MEM32(eax + 0x7F4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x7F4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00067AD0
 * Original: 0x00067AD0 - 0x00067CED (541 bytes, 201 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067AD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00067AD0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CC6D4;
    eax = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0x24);
    ebx = 0; /* xor self */
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = edx;
    SET_LO8(edx, MEM8(esi + 0x6C));
    MEM16(esi + 0x6E) = LO16(ebx);
    SET_LO8(edx, LO8(edx) & 0xCE);
    MEM8(esi + 0x6C) = LO8(edx);
    ecx = MEM32(eax);
    MEM32(esi + 0x2C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x30) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x34) = eax;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00067B2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067B2B: ;
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00067B56; /* je: equal / zero */

loc_00067B33: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00067B56; /* je: equal / zero */

loc_00067B39: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00067B3Fu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00067B3F: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00067B4Au); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00067B4A: ;
    ecx = eax;
    PUSH32(esp, 0x00067B51u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00067B51: ;
    MEM32(esi + 0x18) = eax;
    goto loc_00067B59;

loc_00067B56: ;
    MEM32(esi + 0x18) = ebx;

loc_00067B59: ;
    MEM32(edi) = MEM32(edi) | 0x40;
    SET_LO8(eax, MEM8(esi + 0x6C));
    SET_LO8(ebx, 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067B79; /* je: equal / zero */

loc_00067B65: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067B79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067B79: ;
    MEM32(edi) = MEM32(edi) | 0x80;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067B98; /* je: equal / zero */

loc_00067B84: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067B98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067B98: ;
    MEM32(edi) = MEM32(edi) & 0xFFFFFEFFu;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067BB7; /* je: equal / zero */

loc_00067BA3: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067BB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067BB7: ;
    MEM32(edi) = MEM32(edi) | 0x200;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067BD6; /* je: equal / zero */

loc_00067BC2: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067BD6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067BD6: ;
    MEM32(edi) = MEM32(edi) | 0x400;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067BF5; /* je: equal / zero */

loc_00067BE1: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067BF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067BF5: ;
    MEM32(edi) = MEM32(edi) | 0x800;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067C14; /* je: equal / zero */

loc_00067C00: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067C14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067C14: ;
    MEM32(edi) = MEM32(edi) | 0x1000;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067C33; /* je: equal / zero */

loc_00067C1F: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067C33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067C33: ;
    MEM32(edi) = MEM32(edi) | 0x2000;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067C52; /* je: equal / zero */

loc_00067C3E: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067C52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067C52: ;
    MEM32(edi) = MEM32(edi) | 0x1000000;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067C71; /* je: equal / zero */

loc_00067C5D: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067C71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067C71: ;
    MEM32(edi) = MEM32(edi) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067C90; /* je: equal / zero */

loc_00067C7C: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067C90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067C90: ;
    MEM32(edi) = MEM32(edi) | 4;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067CAC; /* je: equal / zero */

loc_00067C98: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067CACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067CAC: ;
    MEM32(edi) = MEM32(edi) | 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067CC8; /* je: equal / zero */

loc_00067CB4: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00067CC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067CC8: ;
    SET_LO8(ecx, MEM8(esi + 0x6C));
    eax = MEM32(esp + 0x1C);
    SET_LO8(ecx, LO8(ecx) & 0xF3);
    SET_LO8(ecx, LO8(ecx) | 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi + 0x6C) = LO8(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00067CE4; /* je: equal / zero */

loc_00067CDC: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00067CE4u); RECOMP_ABI_CALL(0x000673F0u, sub_000673F0); /* call 0x000673F0 */

loc_00067CE4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00067CF0
 * Original: 0x00067CF0 - 0x00067D78 (136 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067CF0(void)
{

loc_00067CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x00067CFEu); RECOMP_ABI_CALL(0x00067040u, sub_00067040); /* call 0x00067040 */

loc_00067CFE: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    MEM32(ecx + esi + 0x10) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x14) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00067D33u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_00067D33: ;
    eax = MEM32(edi);
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + 0x804) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00067D80
 * Original: 0x00067D80 - 0x00067DE2 (98 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067D80: ;
    SET_LO8(ecx, MEM8(0x48E468));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00067DDC; /* jne: not equal / not zero */

loc_00067D8F: ;
    edx = MEM32(0x48E468);
    edx = edx | eax;
    ecx = 0x48DADC;
    MEM32(0x48E468) = edx;
    MEM32(0x48DAD4) = 0x3FFFFFFF;
    MEM32(0x48DAD8) = 0xFFFFFFFFu;
    MEM32(0x48DAD0) = 0x3CC88C;
    PUSH32(esp, 0x00067DC5u); RECOMP_ABI_CALL(0x000670F0u, sub_000670F0); /* call 0x000670F0 */

loc_00067DC5: ;
    PUSH32(esp, 0x359E90);
    MEM32(0x48DAD0) = 0x3CC8A4;
    PUSH32(esp, 0x00067DD9u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00067DD9: ;
    esp = esp + 4;

loc_00067DDC: ;
    eax = 0x48DAD0;
    esp += 4; return; /* ret */

}

/**
 * sub_00067DF0
 * Original: 0x00067DF0 - 0x00067F11 (289 bytes, 98 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067DF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00067DF0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    MEM32(ebx) = 0x3CC8BC;
    MEM32(ebx + 0xC) = 0;
    MEM32(ebx + 0x10) = 0;
    PUSH32(esp, ebp);
    ecx = 0; /* xor self */
    ebp = ebx + 0xC;
    eax = ebx + 0x14;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    edx = 0; /* xor self */
    eax = ebx + 0x24;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    PUSH32(esp, esi);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = 0x3C93D0;
    esi = eax;
    ecx = 6;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00067E53; /* je: equal / zero */

loc_00067E43: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x380) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0x380 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00067E53; /* jbe: below or equal (unsigned <=) */

loc_00067E4D: ;
    MEM8(0) = LO8(edx);

loc_00067E53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067E7A; /* je: equal / zero */

loc_00067E57: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00067E7A; /* je: equal / zero */

loc_00067E5C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00067E62u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00067E62: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00067E71u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00067E71: ;
    ecx = eax;
    PUSH32(esp, 0x00067E78u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00067E78: ;
    goto loc_00067E7C;

loc_00067E7A: ;
    eax = 0; /* xor self */

loc_00067E7C: ;
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00067EA6; /* je: equal / zero */

loc_00067E87: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00067EA6; /* je: equal / zero */

loc_00067E8C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00067E92u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00067E92: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00067E9Du); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00067E9D: ;
    ecx = eax;
    PUSH32(esp, 0x00067EA4u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00067EA4: ;
    goto loc_00067EA8;

loc_00067EA6: ;
    eax = 0; /* xor self */

loc_00067EA8: ;
    MEM32(ebx + 0x10) = eax;
    PUSH32(esp, 0x00067EB0u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_00067EB0: ;
    ecx = MEM32(eax + 0x194);
    MEM32(ebx + 4) = ecx;
    PUSH32(esp, 0x00067EBEu); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_00067EBE: ;
    edx = MEM32(eax + 0x194);
    MEM32(eax + edx * 4) = ebx;
    MEM32(eax + 0x194) = MEM32(eax + 0x194) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x194)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx + 4);
    ecx = ecx + 0x21;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = ebx + 0x14;
    esi = MEM32(eax + edx * 4);
    eax = eax + edx * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    esi = esi | edx;
    MEM32(eax) = esi;
    eax = MEM32(ebx + 4);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00067F01u); RECOMP_ABI_CALL(0x00067D80u, sub_00067D80); /* call 0x00067D80 */

loc_00067F01: ;
    ecx = eax;
    PUSH32(esp, 0x00067F08u); RECOMP_ABI_CALL(0x00067CF0u, sub_00067CF0); /* call 0x00067CF0 */

loc_00067F08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00067F20
 * Original: 0x00067F20 - 0x00067F8D (109 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067F20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067F27u); RECOMP_ABI_CALL(0x00067D80u, sub_00067D80); /* call 0x00067D80 */

loc_00067F27: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00067F54; /* je: equal / zero */

loc_00067F31: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00067F54; /* je: equal / zero */

loc_00067F36: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067F3Cu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00067F3C: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00067F47u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00067F47: ;
    ecx = eax;
    PUSH32(esp, 0x00067F4Eu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00067F4E: ;
    MEM32(esp + 0xC) = eax;
    goto loc_00067F5C;

loc_00067F54: ;
    MEM32(esp + 0xC) = 0;

loc_00067F5C: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00067F6Cu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00067F6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00067F7B; /* jne: not equal / not zero */

loc_00067F73: ;
    POP32(esp, edi);
    eax = 0x48D8F8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00067F7B: ;
    esi = MEM32(esi + eax * 4 + 0x804);
    PUSH32(esp, 0x00067F87u); RECOMP_ABI_CALL(0x00067830u, sub_00067830); /* call 0x00067830 */

loc_00067F87: ;
    eax = MEM32(eax + esi * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00067F90
 * Original: 0x00067F90 - 0x00067FB8 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067F90(void)
{

loc_00067F90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00067F9Au); RECOMP_ABI_CALL(0x00067F20u, sub_00067F20); /* call 0x00067F20 */

loc_00067F9A: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00067FB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067FB7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00067FC0
 * Original: 0x00067FC0 - 0x00067FEE (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00067FC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CC8CC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00067FD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067FD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00067FEA; /* je: equal / zero */

loc_00067FD7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00067FDDu); RECOMP_ABI_CALL(0x00067F20u, sub_00067F20); /* call 0x00067F20 */

loc_00067FDD: ;
    edx = MEM32(eax);
    esp = esp + 4;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00067FE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00067FE8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00067FEA: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00067FF0
 * Original: 0x00067FF0 - 0x00067FF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00067FF0(void)
{

loc_00067FF0: ;
    eax = 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_00068000
 * Original: 0x00068000 - 0x0006805F (95 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068000: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0006800Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006800F: ;
    ecx = MEM32(0x48D8E4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00068020u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00068020: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068058; /* je: equal / zero */

loc_00068024: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x00068048u); RECOMP_ABI_CALL(0x00067AD0u, sub_00067AD0); /* call 0x00067AD0 */

loc_00068048: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00068051u); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_00068051: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_00068058: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00068060
 * Original: 0x00068060 - 0x00068123 (195 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068060: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0x0006806Bu); RECOMP_ABI_CALL(0x00069540u, sub_00069540); /* call 0x00069540 */

loc_0006806B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00068077u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00068077: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006811C; /* je: equal / zero */

loc_00068081: ;
    edx = MEM32(ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3CC8CC);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0006808Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006808E: ;
    ebp = eax;
    eax = MEM32(esp + 0x18);
    edx = eax + 1;

loc_00068097: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00068097; /* jne: not equal / not zero */

loc_0006809E: ;
    eax = eax - edx;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_000680AA; /* jne: not equal / not zero */

loc_000680A6: ;
    MEM32(esp + 0x18) = ebp;

loc_000680AA: ;
    PUSH32(esp, edi);
    edi = 0x3C93D0;
    esi = ebp;
    ecx = 6;
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    if ((_flags == 0)) goto loc_000680E4; /* jne: not equal / not zero */

loc_000680BE: ;
    PUSH32(esp, 0x000680C3u); RECOMP_ABI_CALL(0x0013C160u, sub_0013C160); /* call 0x0013C160 */

loc_000680C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000680C9u); RECOMP_ABI_CALL(0x00138260u, sub_00138260); /* call 0x00138260 */

loc_000680C9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000680E4; /* jg: greater (signed >) */

loc_000680D1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000680DAu); RECOMP_ABI_CALL(0x00038EF0u, sub_00038EF0); /* call 0x00038EF0 */

loc_000680DA: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000680E4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000680EAu); RECOMP_ABI_CALL(0x00067F20u, sub_00067F20); /* call 0x00067F20 */

loc_000680EA: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(eax);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00068103u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00068103: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006811C; /* je: equal / zero */

loc_00068109: ;
    SET_LO16(edx, MEM16(esp + 0x24));
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0x6E) = LO16(edx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0006811Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006811C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00068130
 * Original: 0x00068130 - 0x0006815B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068130: ;
    ecx = MEM32(0x48E46C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006815A; /* je: equal / zero */

loc_0006813A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0006813Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006813F: ;
    ecx = MEM32(0x48E46C);
    PUSH32(esp, 0xE);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006814Du); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0006814D: ;
    esp = esp + 8;
    MEM32(0x48E46C) = 0;

loc_0006815A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068160
 * Original: 0x00068160 - 0x0006817F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068160: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CC900;
    if (TEST_Z(_fa, _fb)) goto loc_00068179; /* je: equal / zero */

loc_00068170: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00068176u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00068176: ;
    esp = esp + 4;

loc_00068179: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068180
 * Original: 0x00068180 - 0x000681DD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068180: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xB888) = esi;
    MEM32(ecx + 0xB88C) = esi;
    MEM32(ecx + 0xB890) = esi;
    edx = 0; /* xor self */
    goto loc_000681A0;

    /* nop */

loc_000681A0: ;
    eax = MEM32(ecx + 0xB888);
    edi = MEM32(ecx + 0xB890);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(ecx + 0xB888) = eax;
    MEM32(ecx + 0xB890) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000681CC; /* jl: less (signed <) */

loc_000681BF: ;
    MEM32(ecx + 0xB888) = esi;
    eax = 0x1F;
    goto loc_000681CD;

loc_000681CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000681CD: ;
    MEM32(ecx + eax * 4 + 0xB804) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000681A0; /* jl: less (signed <) */

loc_000681DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000681E0
 * Original: 0x000681E0 - 0x00068242 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000681E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000681E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x69F08) = esi;
    MEM32(ecx + 0x69F0C) = esi;
    MEM32(ecx + 0x69F10) = esi;
    edx = 0; /* xor self */
    goto loc_00068200;

    /* nop */

loc_00068200: ;
    eax = MEM32(ecx + 0x69F08);
    edi = MEM32(ecx + 0x69F10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E0 (32-bit) */
    MEM32(ecx + 0x69F08) = eax;
    MEM32(ecx + 0x69F10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0006822E; /* jl: less (signed <) */

loc_00068221: ;
    MEM32(ecx + 0x69F08) = esi;
    eax = 0x1DF;
    goto loc_0006822F;

loc_0006822E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006822F: ;
    MEM32(ecx + eax * 4 + 0x69784) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1E0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00068200; /* jl: less (signed <) */

loc_0006823F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00068250
 * Original: 0x00068250 - 0x000682BD (109 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068250(void)
{

loc_00068250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esi) = 0x3CC918;
    ebx = 0; /* xor self */
    MEM32(ecx + 0xB888) = ebx;
    MEM32(ecx + 0xB88C) = ebx;
    MEM32(ecx + 0xB890) = ebx;
    MEM32(ecx + 0xB894) = ebx;
    PUSH32(esp, edi);
    MEM32(ecx + 0xB898) = ebx;
    PUSH32(esp, 0x00068283u); RECOMP_ABI_CALL(0x00068180u, sub_00068180); /* call 0x00068180 */

loc_00068283: ;
    edx = esi + 0xB8A0;
    MEM32(edx + 0x69F08) = ebx;
    MEM32(edx + 0x69F0C) = ebx;
    MEM32(edx + 0x69F10) = ebx;
    eax = 0; /* xor self */
    edi = edx + 0x69F14;
    ecx = 0xF;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    MEM32(edx + 0x69F50) = ebx;
    PUSH32(esp, 0x000682B7u); RECOMP_ABI_CALL(0x000681E0u, sub_000681E0); /* call 0x000681E0 */

loc_000682B7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000682C0
 * Original: 0x000682C0 - 0x0006834A (138 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000682C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000682C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5BC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x5BC (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000682F3; /* jne: not equal / not zero */

loc_000682D0: ;
    _fa = (uint32_t)(MEM32(esi + 0xB89C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB89C), 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068343; /* je: equal / zero */

loc_000682D9: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000682E1u); RECOMP_ABI_CALL(0x00068350u, sub_00068350); /* call 0x00068350 */

loc_000682E1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C0);
    edx = eax + esi + 4;
    MEM32(edx) = 0;
    goto loc_00068325;

loc_000682F3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x380) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x380 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00068343; /* jg: greater (signed >) */

loc_000682FB: ;
    _fa = (uint32_t)(MEM32(esi + 0x757F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x757F0), 0x1E0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068343; /* je: equal / zero */

loc_00068307: ;
    ecx = esi + 0xB8A0;
    PUSH32(esp, 0x00068312u); RECOMP_ABI_CALL(0x000683A0u, sub_000683A0); /* call 0x000683A0 */

loc_00068312: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x384);
    edx = eax + esi + 0xB8A0;
    MEM32(edx) = 1;

loc_00068325: ;
    ecx = edi;
    esi = ecx;
    edx = edx + 4;
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
    eax = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00068343: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068350
 * Original: 0x00068350 - 0x0006839A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068350: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB88C);
    eax = esi + 0xB804;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0xB894);
    edx = esi + edx * 4 + 0xB894;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x0006838Eu); RECOMP_ABI_CALL(0x000250A0u, sub_000250A0); /* call 0x000250A0 */

loc_0006838E: ;
    MEM32(esi + 0xB898) = MEM32(esi + 0xB898) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xB898)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000683A0
 * Original: 0x000683A0 - 0x000683EA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000683A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000683A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x69F0C);
    eax = esi + 0x69784;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x69F14);
    edx = esi + edx * 4 + 0x69F14;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x000683DEu); RECOMP_ABI_CALL(0x000683F0u, sub_000683F0); /* call 0x000683F0 */

loc_000683DE: ;
    MEM32(esi + 0x69F50) = MEM32(esi + 0x69F50) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x69F50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000683F0
 * Original: 0x000683F0 - 0x0006841C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000683F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000683F0: ;
    eax = MEM32(ecx + 0x788);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x788) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E0 (32-bit) */
    eax = MEM32(ecx + 0x78C);
    if (CMP_L(_fas, _fbs)) goto loc_00068414; /* jl: less (signed <) */

loc_0006840A: ;
    MEM32(ecx + 0x788) = 0;

loc_00068414: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x78C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00068420
 * Original: 0x00068420 - 0x000684F2 (210 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068420: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00068450; /* jne: not equal / not zero */

loc_0006842C: ;
    ecx = ecx + 4;
    eax = eax - ecx;
    esi = eax;
    eax = 0xB21642C9u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    goto loc_00068480;

loc_00068450: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006847C; /* jne: not equal / not zero */

loc_00068455: ;
    ecx = ecx + 0xB8A0;
    eax = eax - ecx;
    esi = eax;
    eax = 0x91A2B3C5u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00068500(); return; /* tail jmp 0x00068500 */

loc_0006847C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00068480: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0xB894;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0xB888);
    edi = MEM32(eax + 0xB890);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(eax + 0xB888) = ecx;
    MEM32(eax + 0xB890) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000684D8; /* jl: less (signed <) */

loc_000684C7: ;
    MEM32(eax + 0xB888) = 0;
    ecx = 0x1F;
    goto loc_000684D9;

loc_000684D8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000684D9: ;
    MEM32(eax + ecx * 4 + 0xB804) = esi;
    ecx = MEM32(eax + 0xB898);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0xB898) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068500
 * Original: 0x00068500 - 0x00068575 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068500: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x69F14;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x69F08);
    edi = MEM32(eax + 0x69F10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1E0 (32-bit) */
    MEM32(eax + 0x69F08) = ecx;
    MEM32(eax + 0x69F10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0006855B; /* jl: less (signed <) */

loc_0006854A: ;
    MEM32(eax + 0x69F08) = 0;
    ecx = 0x1DF;
    goto loc_0006855C;

loc_0006855B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006855C: ;
    MEM32(eax + ecx * 4 + 0x69784) = esi;
    ecx = MEM32(eax + 0x69F50);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x69F50) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068580
 * Original: 0x00068580 - 0x0006859E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068580: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00068588u); RECOMP_ABI_CALL(0x000685A0u, sub_000685A0); /* call 0x000685A0 */

loc_00068588: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068598; /* je: equal / zero */

loc_0006858F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00068595u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00068595: ;
    esp = esp + 4;

loc_00068598: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000685A0
 * Original: 0x000685A0 - 0x000685A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000685A0(void)
{

loc_000685A0: ;
    MEM32(ecx) = 0x3CC900;
    esp += 4; return; /* ret */

}

/**
 * sub_000685B0
 * Original: 0x000685B0 - 0x000685FB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000685B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000685B0: ;
    eax = MEM32(0x48E46C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000685FA; /* jne: not equal / not zero */

loc_000685B9: ;
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x757F4);
    PUSH32(esp, 0x000685C7u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_000685C7: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000685E7; /* je: equal / zero */

loc_000685CE: ;
    ecx = eax;
    PUSH32(esp, 0x000685D5u); RECOMP_ABI_CALL(0x00068250u, sub_00068250); /* call 0x00068250 */

loc_000685D5: ;
    edx = MEM32(eax);
    ecx = eax;
    MEM32(0x48E46C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000685E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000685E1: ;
    eax = MEM32(0x48E46C);
    esp += 4; return; /* ret */

loc_000685E7: ;
    eax = 0; /* xor self */
    edx = MEM32(eax);
    ecx = eax;
    MEM32(0x48E46C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000685F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000685F5: ;
    eax = MEM32(0x48E46C);

loc_000685FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068600
 * Original: 0x00068600 - 0x0006861F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068600: ;
    eax = MEM32(0x48E47C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006861E; /* je: equal / zero */

loc_00068609: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00068611u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_00068611: ;
    esp = esp + 8;
    MEM32(0x48E47C) = 0;

loc_0006861E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00068620
 * Original: 0x00068620 - 0x000686B9 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068620: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00068637; /* jl: less (signed <) */

loc_0006862E: ;
    eax = 0xF0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00068637: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0006864A; /* jne: not equal / not zero */

loc_00068648: ;
    edx = ~edx;

loc_0006864A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00068674; /* jne: not equal / not zero */

loc_00068655: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000686AF; /* jge: greater or equal (signed >=) */

loc_00068662: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00068670; /* jne: not equal / not zero */

loc_0006866E: ;
    edx = ~edx;

loc_00068670: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068655; /* je: equal / zero */

loc_00068674: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00068682; /* jne: not equal / not zero */

loc_0006867C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00068682: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006868C; /* jne: not equal / not zero */

loc_00068686: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0006868C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00068697; /* jne: not equal / not zero */

loc_00068691: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_00068697: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000686A8; /* jne: not equal / not zero */

loc_0006869C: ;
    /* nop */

loc_000686A0: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000686A0; /* je: equal / zero */

loc_000686A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000686B4; /* jl: less (signed <) */

loc_000686AF: ;
    eax = 0xF0;

loc_000686B4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000686C0
 * Original: 0x000686C0 - 0x000686C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000686C0(void)
{

loc_000686C0: ;
    MEM32(ecx) = 0x3CC938;
    esp += 4; return; /* ret */

}

/**
 * sub_000686D0
 * Original: 0x000686D0 - 0x000686EF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000686D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000686D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CC938;
    if (TEST_Z(_fa, _fb)) goto loc_000686E9; /* je: equal / zero */

loc_000686E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000686E6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000686E6: ;
    esp = esp + 4;

loc_000686E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000686F0
 * Original: 0x000686F0 - 0x000687A3 (179 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000686F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000686F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x26AC0);
    PUSH32(esp, edi);
    edi = ebx + 0x26AC0;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006872A; /* jne: not equal / not zero */

loc_00068707: ;
    goto loc_00068710;

    /* nop */

loc_00068710: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00068786; /* jge: greater or equal (signed >=) */

loc_0006871E: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068710; /* je: equal / zero */

loc_0006872A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00068737; /* jne: not equal / not zero */

loc_00068731: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_00068737: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00068741; /* jne: not equal / not zero */

loc_0006873B: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_00068741: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006874B; /* jne: not equal / not zero */

loc_00068745: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_0006874B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00068757; /* jne: not equal / not zero */

loc_0006874F: ;
    /* nop */

loc_00068750: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068750; /* je: equal / zero */

loc_00068757: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00068786; /* jge: greater or equal (signed >=) */

loc_0006875F: ;
    /* nop */

loc_00068760: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x294);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00068771u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00068771: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0006877Cu); RECOMP_ABI_CALL(0x00068620u, sub_00068620); /* call 0x00068620 */

loc_0006877C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00068760; /* jl: less (signed <) */

loc_00068786: ;
    eax = 0; /* xor self */
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x1C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000687B0
 * Original: 0x000687B0 - 0x000687C7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000687B0(void)
{

loc_000687B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x3C4) = ecx;
    MEM32(eax + 0x3C8) = ecx;
    MEM32(eax + 0x3CC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000687D0
 * Original: 0x000687D0 - 0x000687DC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000687D0(void)
{

loc_000687D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000687D8u); RECOMP_ABI_CALL(0x000687B0u, sub_000687B0); /* call 0x000687B0 */

loc_000687D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000687E0
 * Original: 0x000687E0 - 0x00068842 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000687E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000687E0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x12C8) = esi;
    MEM32(ecx + 0x12CC) = esi;
    MEM32(ecx + 0x12D0) = esi;
    edx = 0; /* xor self */
    goto loc_00068800;

    /* nop */

loc_00068800: ;
    eax = MEM32(ecx + 0x12C8);
    edi = MEM32(ecx + 0x12D0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF0 (32-bit) */
    MEM32(ecx + 0x12C8) = eax;
    MEM32(ecx + 0x12D0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0006882E; /* jl: less (signed <) */

loc_00068821: ;
    MEM32(ecx + 0x12C8) = esi;
    eax = 0xEF;
    goto loc_0006882F;

loc_0006882E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006882F: ;
    MEM32(ecx + eax * 4 + 0xF04) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xF0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00068800; /* jl: less (signed <) */

loc_0006883F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00068850
 * Original: 0x00068850 - 0x000688A7 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068850: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = 0xF0;
    goto loc_00068860;

    /* nop */

loc_00068860: ;
    MEM32(eax) = 0;
    eax = eax + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00068860; /* jne: not equal / not zero */

loc_0006886C: ;
    ecx = esi + 0xF04;
    PUSH32(esp, 0x00068877u); RECOMP_ABI_CALL(0x000687D0u, sub_000687D0); /* call 0x000687D0 */

loc_00068877: ;
    eax = 0; /* xor self */
    ecx = esi + 0x12D4;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    ecx = esi;
    MEM32(esi + 0x12F4) = eax;
    PUSH32(esp, 0x000688A3u); RECOMP_ABI_CALL(0x000687E0u, sub_000687E0); /* call 0x000687E0 */

loc_000688A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000688B0
 * Original: 0x000688B0 - 0x000688B8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000688B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000688B0: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000688C0(); return; /* tail jmp 0x000688C0 */

}

/**
 * sub_000688C0
 * Original: 0x000688C0 - 0x00068935 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000688C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000688C0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x12D4;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x12C8);
    edi = MEM32(eax + 0x12D0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF0 (32-bit) */
    MEM32(eax + 0x12C8) = ecx;
    MEM32(eax + 0x12D0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0006891B; /* jl: less (signed <) */

loc_0006890A: ;
    MEM32(eax + 0x12C8) = 0;
    ecx = 0xEF;
    goto loc_0006891C;

loc_0006891B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006891C: ;
    MEM32(eax + ecx * 4 + 0xF04) = esi;
    ecx = MEM32(eax + 0x12F4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x12F4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00068940
 * Original: 0x00068940 - 0x00068990 (80 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068940(void)
{

loc_00068940: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CC998;
    ecx = esi + 0x10;
    MEM32(esi + 8) = 0x3FFFFFFF;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    MEM32(esi + 4) = 0x3CC968;
    PUSH32(esp, 0x00068966u); RECOMP_ABI_CALL(0x00068850u, sub_00068850); /* call 0x00068850 */

loc_00068966: ;
    eax = 0; /* xor self */
    ecx = esi + 0x27DC8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(esi + 4) = 0x3CC980;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00068990
 * Original: 0x00068990 - 0x000689A0 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068990(void)
{

loc_00068990: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006899Au); RECOMP_ABI_CALL(0x00067FC0u, sub_00067FC0); /* call 0x00067FC0 */

loc_0006899A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000689A0
 * Original: 0x000689A0 - 0x00068FB6 (1558 bytes, 389 insns)
 * Category: game_vtable
 * CC: thiscall, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000689A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000689A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34ED98);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1C0;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x1D8);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C4) = eax;
    PUSH32(esp, 0x000689DAu); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_000689DA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 4) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00068F92; /* je: equal / zero */

loc_000689E8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1F4);
    PUSH32(esp, edi);
    goto loc_00068A00;

loc_000689F4: ;
    esi = MEM32(esp + 0x10);
    goto loc_00068A00;

    /* nop */

loc_00068A00: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CC9FC);
    ecx = esp + 0x54;
    PUSH32(esp, 0x00068A10u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068A10: ;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    MEM32(esp + 0x1DC) = 0;
    PUSH32(esp, 0x00068A28u); RECOMP_ABI_CALL(0x001258F0u, sub_001258F0); /* call 0x001258F0 */

loc_00068A28: ;
    ecx = esp + 0x4C;
    SET_LO8(ebx, LO8(eax));
    MEM32(esp + 0x1D8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00068A3Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068A3E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068F2C; /* je: equal / zero */

loc_00068A46: ;
    edi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    ebx = 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    edi = ecx;
    if ((ecx == 0)) goto loc_00068F2C; /* je: equal / zero */

loc_00068A60: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CC9F4);
    ecx = esp + 0xA4;
    PUSH32(esp, 0x00068A73u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068A73: ;
    edx = esp + 0x9C;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x1DC) = ebx;
    PUSH32(esp, 0x00068A89u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00068A89: ;
    edi = eax;
    ecx = esp + 0x9C;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x1D8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00068AA6u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068AA6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068F2C; /* je: equal / zero */

loc_00068AAE: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00068AB7u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_00068AB7: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x2C) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00068F2C; /* je: equal / zero */

loc_00068AC5: ;
    goto loc_00068AD0;

loc_00068AC7: ;
    edi = MEM32(esp + 0x2C);
    goto loc_00068AD0;

    /* nop */

loc_00068AD0: ;
    eax = MEM32(esp + 0x1E8);
    _fa = (uint32_t)(MEM32(eax + 0x2614)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2614), 0x32C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00068F2C; /* je: equal / zero */

loc_00068AE7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CC9EC);
    ecx = esp + 0x84;
    PUSH32(esp, 0x00068AFAu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068AFA: ;
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = edi + 0x14;
    MEM32(esp + 0x1DC) = 2;
    PUSH32(esp, 0x00068B12u); RECOMP_ABI_CALL(0x001258F0u, sub_001258F0); /* call 0x001258F0 */

loc_00068B12: ;
    ecx = esp + 0x7C;
    SET_LO8(ebx, LO8(eax));
    MEM32(esp + 0x1D8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00068B28u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068B28: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068F18; /* je: equal / zero */

loc_00068B30: ;
    esi = MEM32(edi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & edi;
    esi = edx;
    if ((edx == 0)) goto loc_00068F14; /* je: equal / zero */

loc_00068B46: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x00068B4Fu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068B4F: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    eax = esp + 0xD4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00068B62u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00068B62: ;
    ecx = esp + 0xD8;
    PUSH32(esp, ecx);
    MEM8(esp + 0x1DB) = 0;
    PUSH32(esp, 0x00068B77u); RECOMP_ABI_CALL(0x001230C0u, sub_001230C0); /* call 0x001230C0 */

loc_00068B77: ;
    esp = esp + 0x10;
    edx = esp + 0xCC;
    PUSH32(esp, edx);
    ecx = esp + 0x40;
    PUSH32(esp, 0x00068B8Bu); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00068B8B: ;
    ecx = MEM32(ebp + 0xCB4);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00068B9Eu); RECOMP_ABI_CALL(0x00068FC0u, sub_00068FC0); /* call 0x00068FC0 */

loc_00068B9E: ;
    MEM32(ebp + 0xCB4) = MEM32(ebp + 0xCB4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xCB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00068BB2u); RECOMP_ABI_CALL(0x00011FF0u, sub_00011FF0); /* call 0x00011FF0 */

loc_00068BB2: ;
    PUSH32(esp, 0x5BC9D0);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00068BC0u); RECOMP_ABI_CALL(0x00011FF0u, sub_00011FF0); /* call 0x00011FF0 */

loc_00068BC0: ;
    ecx = MEM32(0x5BC9D8);
    edx = MEM32(0x5BC9D0);
    eax = MEM32(0x5BC9D4);
    PUSH32(esp, 2);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x3CC9E4);
    ecx = esp + 0xC4;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00068BF0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068BF0: ;
    edx = esp + 0xBC;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x1DC) = 3;
    PUSH32(esp, 0x00068C0Au); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00068C0A: ;
    ebx = ebx | 0xFFFFFFFFu;
    ecx = esp + 0xBC;
    edi = eax;
    MEM32(esp + 0x1D8) = ebx;
    PUSH32(esp, 0x00068C22u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068C22: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068C59; /* je: equal / zero */

loc_00068C26: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3CC9D0);
    ecx = edi;
    PUSH32(esp, 0x00068C50u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068C50: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00068C56u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00068C56: ;
    esp = esp + 0x20;

loc_00068C59: ;
    ecx = MEM32(esp + 0x1F0);
    eax = MEM32(ecx + 0x2614);
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    eax = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    MEM32(ecx + 0x2614) = MEM32(ecx + 0x2614) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x2614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x1F4);
    eax = MEM32(ecx + 0x2614);
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    edx = MEM32(esp + 0x20);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 0x2614);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    MEM32(ecx + 0x2614) = eax;
    PUSH32(esp, 0x3CC884);
    ecx = esp + 0x64;
    PUSH32(esp, 0x00068CCAu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068CCA: ;
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1DC) = 4;
    PUSH32(esp, 0x00068CE1u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00068CE1: ;
    ecx = esp + 0x5C;
    edi = eax;
    MEM32(esp + 0x1D8) = ebx;
    PUSH32(esp, 0x00068CF3u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068CF3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068D1B; /* je: equal / zero */

loc_00068CF7: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C875C);
    ecx = edi;
    PUSH32(esp, 0x00068D12u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068D12: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00068D18u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00068D18: ;
    esp = esp + 0x14;

loc_00068D1B: ;
    ecx = MEM32(esp + 0x1E8);
    eax = MEM32(ecx + 0x2614);
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    edx = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = edx;
    MEM32(ecx + 0x2614) = MEM32(ecx + 0x2614) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x2614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x5BC9D4);
    eax = MEM32(0x5BC9D0);
    edx = MEM32(0x5BC9D8);
    PUSH32(esp, 2);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x3C84D8);
    ecx = esp + 0x74;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x00068D75u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068D75: ;
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1DC) = 5;
    PUSH32(esp, 0x00068D8Cu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00068D8C: ;
    ecx = esp + 0x6C;
    edi = eax;
    MEM32(esp + 0x1D8) = ebx;
    PUSH32(esp, 0x00068D9Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068D9E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068DC6; /* je: equal / zero */

loc_00068DA2: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C875C);
    ecx = edi;
    PUSH32(esp, 0x00068DBDu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068DBD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00068DC3u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00068DC3: ;
    esp = esp + 0x14;

loc_00068DC6: ;
    ecx = MEM32(esp + 0x1EC);
    eax = MEM32(ecx + 0x2614);
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    edx = MEM32(esp + 0x20);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 0x2614);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    MEM32(ecx + 0x2614) = eax;
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x94;
    PUSH32(esp, 0x00068E0Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068E0D: ;
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1DC) = 6;
    PUSH32(esp, 0x00068E27u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00068E27: ;
    ecx = esp + 0x8C;
    edi = eax;
    MEM32(esp + 0x1D8) = ebx;
    PUSH32(esp, 0x00068E3Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068E3C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068E57; /* je: equal / zero */

loc_00068E40: ;
    ecx = edi;
    PUSH32(esp, 0x00068E47u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068E47: ;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00068E51u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00068E51: ;
    edx = MEM32(esp + 0x40);
    goto loc_00068E6E;

loc_00068E57: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x00068E60u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068E60: ;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x00068E6Au); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00068E6A: ;
    edx = MEM32(esp + 0x48);

loc_00068E6E: ;
    eax = MEM32(esp + 0x1FC);
    ecx = MEM32(eax + 0xCB4);
    MEM32(eax + ecx * 4) = edx;
    ecx = MEM32(eax + 0xCB4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    MEM32(eax + 0xCB4) = ecx;
    PUSH32(esp, 0x3CC9C8);
    ecx = esp + 0xB4;
    PUSH32(esp, 0x00068E9Eu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068E9E: ;
    eax = esp + 0xAC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1DC) = 7;
    PUSH32(esp, 0x00068EB8u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00068EB8: ;
    ecx = esp + 0xAC;
    esi = eax;
    MEM32(esp + 0x1D8) = ebx;
    PUSH32(esp, 0x00068ECDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068ECD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068EE8; /* je: equal / zero */

loc_00068ED1: ;
    ecx = esi;
    PUSH32(esp, 0x00068ED8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068ED8: ;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x00068EE2u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00068EE2: ;
    edx = MEM32(esp + 0x34);
    goto loc_00068EFA;

loc_00068EE8: ;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x48;
    PUSH32(esp, 0x00068EF6u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00068EF6: ;
    edx = MEM32(esp + 0x44);

loc_00068EFA: ;
    eax = MEM32(esp + 0x200);
    ecx = MEM32(eax + 0xCB4);
    edi = MEM32(esp + 0x2C);
    MEM32(eax + ecx * 4) = edx;
    MEM32(eax + 0xCB4) = MEM32(eax + 0xCB4) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xCB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00068F14: ;
    esi = MEM32(esp + 0x10);

loc_00068F18: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00068F20u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_00068F20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00068AC7; /* jne: not equal / not zero */

loc_00068F2C: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068F76; /* je: equal / zero */

loc_00068F33: ;
    edx = MEM32(esp + 0x200);
    ecx = MEM32(esp + 0x38);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x200);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1FC);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x200);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x200);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x200);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1FC);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00068F76u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00068F76: ;
    ecx = MEM32(esp + 0x1E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00068F83u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_00068F83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000689F4; /* jne: not equal / not zero */

loc_00068F8F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00068F92: ;
    ecx = MEM32(esp + 0x1C4);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x1C0);
    POP32(esp, esi);
    PUSH32(esp, 0x00068FADu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00068FAD: ;
    esp = esp + 0x1CC;
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00068C60
 * Original: 0x00068C60 - 0x00068FB6 (854 bytes, 217 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068C60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068C60: ;
    eax = MEM32(ecx + 0x2614);
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    eax = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 4) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    MEM32(ecx + 0x2614) = MEM32(ecx + 0x2614) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x2614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 0x1F4);
    eax = MEM32(ecx + 0x2614);
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    edx = MEM32(esp + 0x20);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 0x2614);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    MEM32(ecx + 0x2614) = eax;
    PUSH32(esp, 0x3CC884);
    ecx = esp + 0x64;
    PUSH32(esp, 0x00068CCAu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068CCA: ;
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1DC) = 4;
    PUSH32(esp, 0x00068CE1u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00068CE1: ;
    ecx = esp + 0x5C;
    edi = eax;
    MEM32(esp + 0x1D8) = ebx;
    PUSH32(esp, 0x00068CF3u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068CF3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068D1B; /* je: equal / zero */

loc_00068CF7: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C875C);
    ecx = edi;
    PUSH32(esp, 0x00068D12u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068D12: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00068D18u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00068D18: ;
    esp = esp + 0x14;

loc_00068D1B: ;
    ecx = MEM32(esp + 0x1E8);
    eax = MEM32(ecx + 0x2614);
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    edx = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = edx;
    MEM32(ecx + 0x2614) = MEM32(ecx + 0x2614) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x2614)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x5BC9D4);
    eax = MEM32(0x5BC9D0);
    edx = MEM32(0x5BC9D8);
    PUSH32(esp, 2);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x3C84D8);
    ecx = esp + 0x74;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x00068D75u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068D75: ;
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1DC) = 5;
    PUSH32(esp, 0x00068D8Cu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00068D8C: ;
    ecx = esp + 0x6C;
    edi = eax;
    MEM32(esp + 0x1D8) = ebx;
    PUSH32(esp, 0x00068D9Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068D9E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068DC6; /* je: equal / zero */

loc_00068DA2: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C875C);
    ecx = edi;
    PUSH32(esp, 0x00068DBDu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068DBD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00068DC3u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00068DC3: ;
    esp = esp + 0x14;

loc_00068DC6: ;
    ecx = MEM32(esp + 0x1EC);
    eax = MEM32(ecx + 0x2614);
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    edx = MEM32(esp + 0x20);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 0x2614);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    MEM32(ecx + 0x2614) = eax;
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x94;
    PUSH32(esp, 0x00068E0Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068E0D: ;
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1DC) = 6;
    PUSH32(esp, 0x00068E27u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00068E27: ;
    ecx = esp + 0x8C;
    edi = eax;
    MEM32(esp + 0x1D8) = ebx;
    PUSH32(esp, 0x00068E3Cu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068E3C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068E57; /* je: equal / zero */

loc_00068E40: ;
    ecx = edi;
    PUSH32(esp, 0x00068E47u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068E47: ;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, 0x00068E51u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00068E51: ;
    edx = MEM32(esp + 0x40);
    goto loc_00068E6E;

loc_00068E57: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0x00068E60u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068E60: ;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x00068E6Au); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00068E6A: ;
    edx = MEM32(esp + 0x48);

loc_00068E6E: ;
    eax = MEM32(esp + 0x1FC);
    ecx = MEM32(eax + 0xCB4);
    MEM32(eax + ecx * 4) = edx;
    ecx = MEM32(eax + 0xCB4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 2);
    MEM32(eax + 0xCB4) = ecx;
    PUSH32(esp, 0x3CC9C8);
    ecx = esp + 0xB4;
    PUSH32(esp, 0x00068E9Eu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00068E9E: ;
    eax = esp + 0xAC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1DC) = 7;
    PUSH32(esp, 0x00068EB8u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00068EB8: ;
    ecx = esp + 0xAC;
    esi = eax;
    MEM32(esp + 0x1D8) = ebx;
    PUSH32(esp, 0x00068ECDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00068ECD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068EE8; /* je: equal / zero */

loc_00068ED1: ;
    ecx = esi;
    PUSH32(esp, 0x00068ED8u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00068ED8: ;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, 0x00068EE2u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00068EE2: ;
    edx = MEM32(esp + 0x34);
    goto loc_00068EFA;

loc_00068EE8: ;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x48;
    PUSH32(esp, 0x00068EF6u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00068EF6: ;
    edx = MEM32(esp + 0x44);

loc_00068EFA: ;
    eax = MEM32(esp + 0x200);
    ecx = MEM32(eax + 0xCB4);
    edi = MEM32(esp + 0x2C);
    MEM32(eax + ecx * 4) = edx;
    MEM32(eax + 0xCB4) = MEM32(eax + 0xCB4) + 1;
    _fa = (uint32_t)(MEM32(eax + 0xCB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00068F20u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_00068F20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00068AC7(); return; } /* jne: not equal / not zero */

loc_00068F2C: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00068F76; /* je: equal / zero */

loc_00068F33: ;
    edx = MEM32(esp + 0x200);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x200);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1FC);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x200);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x200);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x200);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1FC);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00068F76u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00068F76: ;
    ecx = MEM32(esp + 0x1E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00068F83u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_00068F83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_000689F4(); return; } /* jne: not equal / not zero */

loc_00068F8F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x1C4);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x1C0);
    POP32(esp, esi);
    PUSH32(esp, 0x00068FADu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00068FAD: ;
    esp = esp + 0x1CC;
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00068FC0
 * Original: 0x00068FC0 - 0x00068FDA (26 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068FC0(void)
{

loc_00068FC0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    eax = ecx + edx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00068FD4u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_00068FD4: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00068FE0
 * Original: 0x00068FE0 - 0x00068FE5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068FE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00068FE0: ;
    g_seh_ebp = ebp; sub_00068FF0(); return; /* tail jmp 0x00068FF0 */

}

/**
 * sub_00068FF0
 * Original: 0x00068FF0 - 0x00069036 (70 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00068FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00068FF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00069002u); RECOMP_ABI_CALL(0x00069040u, sub_00069040); /* call 0x00069040 */

loc_00069002: ;
    edx = MEM32(esi + 8);
    esi = esi + 4;
    esp = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00069014u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00069014: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006901F; /* jne: not equal / not zero */

loc_0006901B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069030; /* je: equal / zero */

loc_0006901F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x294);
    eax = eax + esi + 0x1304;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00069030: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069040
 * Original: 0x00069040 - 0x000690A8 (104 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069040(void)
{

loc_00069040: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x104) = eax;
    eax = MEM32(esp + 0x110);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006906Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006906A: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM8(esp + 0x113) = 0;
    PUSH32(esp, 0x0006907Cu); RECOMP_ABI_CALL(0x001230C0u, sub_001230C0); /* call 0x001230C0 */

loc_0006907C: ;
    esi = MEM32(esp + 0x11C);
    esp = esp + 0x10;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00069092u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00069092: ;
    ecx = MEM32(esp + 0x104);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x000690A1u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000690A1: ;
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_000690B0
 * Original: 0x000690B0 - 0x0006910B (91 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000690B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000690B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, edi);
    edi = ebx + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000690C3u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000690C3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000690D1; /* jne: not equal / not zero */

loc_000690CD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069107; /* je: equal / zero */

loc_000690D1: ;
    PUSH32(esp, 0x000690D6u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000690D6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000690E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000690E6: ;
    eax = MEM32(ebx);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x294);
    edx = ecx + edi + 0x1304;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000690FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000690FD: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00069105u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_00069105: ;
    goto loc_000690C3;

loc_00069107: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00069110
 * Original: 0x00069110 - 0x00069221 (273 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069110(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069110: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EDE0);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00069137u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_00069137: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006920E; /* je: equal / zero */

loc_00069141: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_00069143: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CCA04);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00069153u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00069153: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x00069168u); RECOMP_ABI_CALL(0x001258F0u, sub_001258F0); /* call 0x001258F0 */

loc_00069168: ;
    ecx = esp + 0x10;
    SET_LO8(ebx, LO8(eax));
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0006917Bu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0006917B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000691E3; /* je: equal / zero */

loc_0006917F: ;
    edi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    ebx = 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    edi = ecx;
    if ((ecx == 0)) goto loc_000691E3; /* je: equal / zero */

loc_00069195: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000691A5u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000691A5: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x3C) = ebx;
    PUSH32(esp, 0x000691B5u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000691B5: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000691C8u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000691C8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000691E3; /* je: equal / zero */

loc_000691CC: ;
    ecx = edi;
    PUSH32(esp, 0x000691D3u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000691D3: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000691DBu); RECOMP_ABI_CALL(0x00068FF0u, sub_00068FF0); /* call 0x00068FF0 */

loc_000691DB: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000691E3u); RECOMP_ABI_CALL(0x00069230u, sub_00069230); /* call 0x00069230 */

loc_000691E3: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000691F8; /* je: equal / zero */

loc_000691EA: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000691F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000691F8: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00069202u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_00069202: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00069143; /* jne: not equal / not zero */

loc_0006920C: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0006920E: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00069230
 * Original: 0x00069230 - 0x0006925B (43 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069230: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069257; /* je: equal / zero */

loc_0006923B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00069240u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069240: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0006924Au); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_0006924A: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi + 4;
    PUSH32(esp, 0x00069257u); RECOMP_ABI_CALL(0x00069260u, sub_00069260); /* call 0x00069260 */

loc_00069257: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069260
 * Original: 0x00069260 - 0x00069297 (55 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069260: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00069274u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00069274: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069292; /* je: equal / zero */

loc_0006927E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00069286u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_00069286: ;
    PUSH32(esp, edi);
    ecx = esi + 0x1304;
    PUSH32(esp, 0x00069292u); RECOMP_ABI_CALL(0x000692A0u, sub_000692A0); /* call 0x000692A0 */

loc_00069292: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000692A0
 * Original: 0x000692A0 - 0x000692E4 (68 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000692A0(void)
{

loc_000692A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x294);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000692BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000692BA: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    eax = edi;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x26AC0);
    eax = esi + eax * 4 + 0x26AC0;
    edx = ~edx;
    ecx = ecx & edx;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000692F0
 * Original: 0x000692F0 - 0x00069309 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000692F0(void)
{

loc_000692F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000692FDu); RECOMP_ABI_CALL(0x00068FF0u, sub_00068FF0); /* call 0x00068FF0 */

loc_000692FD: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00069305u); RECOMP_ABI_CALL(0x00069230u, sub_00069230); /* call 0x00069230 */

loc_00069305: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069310
 * Original: 0x00069310 - 0x00069471 (353 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069310(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069310: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x3CCA0C);
    ecx = esp + 8;
    PUSH32(esp, 0x00069324u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00069324: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0006934F; /* jne: not equal / not zero */

loc_0006932E: ;
    ecx = esi + 0x10;
    MEM32(esi + 8) = 0x3FFFFFFF;
    PUSH32(esp, 0x0006933Du); RECOMP_ABI_CALL(0x00069480u, sub_00069480); /* call 0x00069480 */

loc_0006933D: ;
    ecx = esi + 0x1308;
    PUSH32(esp, 0x00069348u); RECOMP_ABI_CALL(0x000686F0u, sub_000686F0); /* call 0x000686F0 */

loc_00069348: ;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0006934F: ;
    _fa = (uint32_t)(MEM32(esi + 0x1304)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1304), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0006946A; /* jl: less (signed <) */

loc_0006935C: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = esi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0006936Du); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_0006936D: ;
    goto loc_00069373;

loc_0006936F: ;
    eax = MEM32(esp + 0x14);

loc_00069373: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00069382; /* jne: not equal / not zero */

loc_0006937A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00069467; /* je: equal / zero */

loc_00069382: ;
    PUSH32(esp, eax);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x0006938Cu); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_0006938C: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x294);
    ebp = esi + edi;
    ecx = ebp + 0x130C;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000693A4u); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_000693A4: ;
    ecx = esp + 0x20;
    ebx = eax;
    PUSH32(esp, 0x000693AFu); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_000693AF: ;
    esi = eax;
    ecx = ebx;

loc_000693B3: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000693DB; /* jne: not equal / not zero */

loc_000693BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000693D7; /* je: equal / zero */

loc_000693C1: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000693DB; /* jne: not equal / not zero */

loc_000693CD: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000693B3; /* jne: not equal / not zero */

loc_000693D7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_000693E0;

loc_000693DB: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_000693E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0006936F; /* jne: not equal / not zero */

loc_000693E4: ;
    ecx = ebp + 0x1304;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0006936F; /* je: equal / zero */

loc_000693EE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000693F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000693F3: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000693FDu); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_000693FD: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0006940Du); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0006940D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0006936F; /* je: equal / zero */

loc_0006941B: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00069423u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_00069423: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x294);
    edx = MEM32(eax + edi + 0x1304);
    ecx = eax + edi + 0x1304;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006943Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006943D: ;
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    edx = 1;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    eax = esi;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((5) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(edi + eax * 4 + 0x27DC4);
    eax = edi + eax * 4 + 0x27DC4;
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    goto loc_0006936F;

loc_00069467: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006946A: ;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069480
 * Original: 0x00069480 - 0x000694AE (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069480(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069480: ;
    MEM32(ecx + 0x12F4) = 0;
    eax = 0; /* xor self */
    edx = ecx + 0x12D4;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    g_seh_ebp = ebp; sub_000687E0(); return; /* tail jmp 0x000687E0 */

}

/**
 * sub_000694B0
 * Original: 0x000694B0 - 0x000694CE (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000694B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000694B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi + 8) = 0x3FFFFFFF;
    PUSH32(esp, 0x000694C2u); RECOMP_ABI_CALL(0x00069480u, sub_00069480); /* call 0x00069480 */

loc_000694C2: ;
    ecx = esi + 0x1308;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000686F0(); return; /* tail jmp 0x000686F0 */

}

/**
 * sub_000694D0
 * Original: 0x000694D0 - 0x000694EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000694D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000694D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000694D8u); RECOMP_ABI_CALL(0x000694F0u, sub_000694F0); /* call 0x000694F0 */

loc_000694D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000694E8; /* je: equal / zero */

loc_000694DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000694E5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000694E5: ;
    esp = esp + 4;

loc_000694E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000694F0
 * Original: 0x000694F0 - 0x0006953C (76 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000694F0(void)
{

loc_000694F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EDB8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3CC998;
    ecx = esi + 0x1308;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00069526u); RECOMP_ABI_CALL(0x000686F0u, sub_000686F0); /* call 0x000686F0 */

loc_00069526: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3CC938;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00069540
 * Original: 0x00069540 - 0x00069581 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069540: ;
    eax = MEM32(0x48E47C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00069580; /* jne: not equal / not zero */

loc_00069549: ;
    PUSH32(esp, 0x44);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x27DE8);
    PUSH32(esp, 0x00069557u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00069557: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069567; /* je: equal / zero */

loc_0006955E: ;
    ecx = eax;
    PUSH32(esp, 0x00069565u); RECOMP_ABI_CALL(0x00068940u, sub_00068940); /* call 0x00068940 */

loc_00069565: ;
    goto loc_00069569;

loc_00069567: ;
    eax = 0; /* xor self */

loc_00069569: ;
    PUSH32(esp, 0x68600);
    MEM32(0x48E47C) = eax;
    PUSH32(esp, 0x00069578u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_00069578: ;
    eax = MEM32(0x48E47C);
    esp = esp + 4;

loc_00069580: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00069590
 * Original: 0x00069590 - 0x00069792 (514 bytes, 162 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069590: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EDE0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, 0);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x000695C1u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_000695C1: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006977D; /* je: equal / zero */

loc_000695CB: ;
    goto loc_000695D0;

    /* nop */

loc_000695D0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CCA04);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000695E0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000695E0: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = ebx + 0x14;
    MEM32(esp + 0x48) = 0;
    PUSH32(esp, 0x000695F5u); RECOMP_ABI_CALL(0x001258F0u, sub_001258F0); /* call 0x001258F0 */

loc_000695F5: ;
    ecx = esp + 0x1C;
    MEM8(esp + 0x13) = LO8(eax);
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0006960Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_0006960A: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069738; /* je: equal / zero */

loc_00069616: ;
    edi = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    esi = 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & ebx;
    edi = ecx;
    if ((ecx == 0)) goto loc_00069738; /* je: equal / zero */

loc_00069630: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x34;
    PUSH32(esp, 0x00069640u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00069640: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x48) = esi;
    PUSH32(esp, 0x00069650u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_00069650: ;
    ecx = esp + 0x2C;
    edi = eax;
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00069663u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00069663: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069738; /* je: equal / zero */

loc_0006966B: ;
    eax = MEM32(esp + 0x54);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00069679u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00069679: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00069681u); RECOMP_ABI_CALL(0x00069B70u, sub_00069B70); /* call 0x00069B70 */

loc_00069681: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069738; /* je: equal / zero */

loc_0006968B: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x4C);
    MEM32(esi + 8) = ecx;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0006969Eu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0006969E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3CCA04);
    ecx = ebp;
    PUSH32(esp, 0x000696ACu); RECOMP_ABI_CALL(0x000697A0u, sub_000697A0); /* call 0x000697A0 */

loc_000696AC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00069727; /* jne: not equal / not zero */

loc_000696B0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000696B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000696B7: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000696C1u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_000696C1: ;
    ecx = MEM32(ebp + 8);
    edi = ebp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000696D4u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_000696D4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069738; /* je: equal / zero */

loc_000696DE: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000696E6u); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_000696E6: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x294);
    edx = MEM32(eax + edi + 0x1304);
    ecx = eax + edi + 0x1304;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00069700u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069700: ;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(edi + eax * 4 + 0x27DC4);
    eax = edi + eax * 4 + 0x27DC4;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    goto loc_00069738;

loc_00069727: ;
    SET_LO8(eax, MEM8(esp + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069738; /* je: equal / zero */

loc_0006972F: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00069738u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069738: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069769; /* je: equal / zero */

loc_0006973F: ;
    ecx = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    eax = esp;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x58);
    edx = MEM32(ebp);
    MEM32(esp + 0x24) = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00069769u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069769: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00069773u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_00069773: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000695D0; /* jne: not equal / not zero */

loc_0006977D: ;
    ecx = MEM32(esp + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000697A0
 * Original: 0x000697A0 - 0x00069A19 (633 bytes, 212 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000697A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000697A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EE11);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x2C));
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = 0;
    MEM8(esp + 0x17) = 0;
    PUSH32(esp, 0x000697D8u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_000697D8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000699AD; /* je: equal / zero */

loc_000697E2: ;
    ebp = MEM32(esp + 0x54);
    goto loc_000697F0;

    /* nop */
    /* nop */

loc_000697F0: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000699AD; /* jne: not equal / not zero */

loc_000697FC: ;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0006980Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_0006980C: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi + 0x14;
    MEM32(esp + 0x48) = 0;
    PUSH32(esp, 0x00069821u); RECOMP_ABI_CALL(0x001258F0u, sub_001258F0); /* call 0x001258F0 */

loc_00069821: ;
    ecx = esp + 0x1C;
    SET_LO8(ebx, LO8(eax));
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00069834u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_00069834: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00069979; /* je: equal / zero */

loc_0006983C: ;
    edx = MEM32(edi + 8);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    esi = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & edi;
    MEM32(esp + 0x54) = ebx;
    if ((ebx == 0)) goto loc_000698BC; /* je: equal / zero */

loc_00069854: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x34;
    PUSH32(esp, 0x00069864u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_00069864: ;
    ecx = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | esi;
    edx = esp + 0x2C;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x48) = esi;
    PUSH32(esp, 0x0006987Eu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_0006987E: ;
    ecx = eax;
    esi = ebp;
    PUSH32(esp, 0x00069887u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00069887: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000698AF; /* jne: not equal / not zero */

loc_00069891: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000698AB; /* je: equal / zero */

loc_00069895: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000698AF; /* jne: not equal / not zero */

loc_000698A1: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00069887; /* jne: not equal / not zero */

loc_000698AB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_000698B4;

loc_000698AF: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_000698B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000698BC; /* jne: not equal / not zero */

loc_000698B8: ;
    SET_LO8(ebx, 1);
    goto loc_000698BE;

loc_000698BC: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */

loc_000698BE: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_000698E1; /* je: equal / zero */

loc_000698CD: ;
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    ecx = esp + 0x2C;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000698E1u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000698E1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000699C6; /* jne: not equal / not zero */

loc_000698E9: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebx = MEM32(esp + 0x50);
    if (TEST_Z(_fa, _fb)) goto loc_0006997D; /* je: equal / zero */

loc_000698F8: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069909u); RECOMP_ABI_CALL(0x000697A0u, sub_000697A0); /* call 0x000697A0 */

loc_00069909: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esp + 0x13) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0006997D; /* je: equal / zero */

loc_00069911: ;
    eax = MEM32(esp + 0x54);
    esi = MEM32(eax + 0x54);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2C)) >> 32) & 1);
    eax = eax + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00069962; /* je: equal / zero */

loc_0006991F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00069962; /* je: equal / zero */

loc_00069923: ;
    ebp = MEM32(ebx);
    edi = esi + 4;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00069931u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00069931: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x00069937u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069937: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00069955; /* jne: not equal / not zero */

loc_0006993B: ;
    ecx = edi;
    PUSH32(esp, 0x00069942u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_00069942: ;
    ecx = esi + 0x14;
    edi = eax;
    PUSH32(esp, 0x0006994Cu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_0006994C: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00069955u); RECOMP_ABI_CALL(0x00069A20u, sub_00069A20); /* call 0x00069A20 */

loc_00069955: ;
    ecx = esi;
    PUSH32(esp, 0x0006995Cu); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_0006995C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00069923; /* jne: not equal / not zero */

loc_00069962: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x2C);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    esp += 20; return; /* ret 16 */

loc_00069979: ;
    ebx = MEM32(esp + 0x50);

loc_0006997D: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00069999; /* je: equal / zero */

loc_00069984: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x00069995u); RECOMP_ABI_CALL(0x000697A0u, sub_000697A0); /* call 0x000697A0 */

loc_00069995: ;
    MEM8(esp + 0x13) = LO8(eax);

loc_00069999: ;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000699A3u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_000699A3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000697F0; /* jne: not equal / not zero */

loc_000699AD: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x2C);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    esp += 20; return; /* ret 16 */

loc_000699C6: ;
    eax = MEM32(esp + 0x54);
    esi = MEM32(eax + 0x54);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x2C)) >> 32) & 1);
    eax = eax + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00069A02; /* je: equal / zero */

loc_000699D4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00069A02; /* je: equal / zero */

loc_000699D8: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000699E0u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000699E0: ;
    ecx = esi + 0x14;
    edi = eax;
    PUSH32(esp, 0x000699EAu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000699EA: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000699F5u); RECOMP_ABI_CALL(0x00069A20u, sub_00069A20); /* call 0x00069A20 */

loc_000699F5: ;
    ecx = esi;
    PUSH32(esp, 0x000699FCu); RECOMP_ABI_CALL(0x00125BD0u, sub_00125BD0); /* call 0x00125BD0 */

loc_000699FC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000699D8; /* jne: not equal / not zero */

loc_00069A02: ;
    ecx = MEM32(esp + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00069A20
 * Original: 0x00069A20 - 0x00069AA2 (130 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x228)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x228), 0x19 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069A9E; /* je: equal / zero */

loc_00069A2C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069A9D; /* je: equal / zero */

loc_00069A35: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069A9D; /* je: equal / zero */

loc_00069A3A: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00069A49u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00069A49: ;
    eax = MEM32(esi + 0x14);
    esi = esi + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00069A5Cu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00069A5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069A9C; /* jne: not equal / not zero */

loc_00069A63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069A9C; /* jne: not equal / not zero */

loc_00069A67: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00069A71u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00069A71: ;
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00069A7Bu); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_00069A7B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00069A87u); RECOMP_ABI_CALL(0x00069AB0u, sub_00069AB0); /* call 0x00069AB0 */

loc_00069A87: ;
    ecx = esi;
    PUSH32(esp, 0x00069A8Eu); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00069A8E: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x10);
    MEM32(esi + eax * 4 + 0x21C) = ecx;

loc_00069A9C: ;
    POP32(esp, edi);

loc_00069A9D: ;
    POP32(esp, ebx);

loc_00069A9E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00069AB0
 * Original: 0x00069AB0 - 0x00069AFA (74 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069AB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069AB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0xC;
    ecx = ebx;
    PUSH32(esp, 0x00069AC0u); RECOMP_ABI_CALL(0x00069B00u, sub_00069B00); /* call 0x00069B00 */

loc_00069AC0: ;
    ebp = eax;
    eax = MEM32(esp + 0x14);
    esi = ebp;
    PUSH32(esp, 4);
    esi = esi << 4;
    PUSH32(esp, eax);
    ecx = esi + ebx + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00069AD8u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_00069AD8: ;
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
 * sub_00069B00
 * Original: 0x00069B00 - 0x00069B4A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069B00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069B00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x200);
    eax = esi + 0x194;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x208);
    edx = esi + edx * 4 + 0x208;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x00069B3Eu); RECOMP_ABI_CALL(0x00069B50u, sub_00069B50); /* call 0x00069B50 */

loc_00069B3E: ;
    MEM32(esi + 0x20C) = MEM32(esi + 0x20C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x20C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00069B50
 * Original: 0x00069B50 - 0x00069B6B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069B50: ;
    eax = MEM32(ecx + 0x6C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x6C) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    eax = MEM32(ecx + 0x70);
    if (CMP_L(_fas, _fbs)) goto loc_00069B66; /* jl: less (signed <) */

loc_00069B5F: ;
    MEM32(ecx + 0x6C) = 0;

loc_00069B66: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x70) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00069B70
 * Original: 0x00069B70 - 0x00069C17 (167 bytes, 54 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x1304)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1304), 0xF0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00069C11; /* je: equal / zero */

loc_00069B83: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00069B92u); RECOMP_ABI_CALL(0x00069040u, sub_00069040); /* call 0x00069040 */

loc_00069B92: ;
    edx = MEM32(esi + 8);
    esi = esi + 4;
    esp = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00069BA8u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00069BA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069C11; /* jne: not equal / not zero */

loc_00069BAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00069C11; /* jne: not equal / not zero */

loc_00069BB3: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00069BC0u); RECOMP_ABI_CALL(0x00069C20u, sub_00069C20); /* call 0x00069C20 */

loc_00069BC0: ;
    edx = MEM32(esp + 0x10);
    edi = eax;
    MEM32(edi + 0xC) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(edi + 4) = eax;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069C0A; /* je: equal / zero */

loc_00069BD8: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00069BE7; /* jne: not equal / not zero */

loc_00069BE0: ;
    eax = 0x3C806C;
    goto loc_00069BFD;

loc_00069BE7: ;
    PUSH32(esp, 0x00069BECu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00069BEC: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00069BFD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8690);
    ecx = edi;
    PUSH32(esp, 0x00069C0Au); RECOMP_ABI_CALL(0x00069A20u, sub_00069A20); /* call 0x00069A20 */

loc_00069C0A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00069C11: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00069C20
 * Original: 0x00069C20 - 0x00069C56 (54 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069C20(void)
{

loc_00069C20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00069C2Eu); RECOMP_ABI_CALL(0x00069C60u, sub_00069C60); /* call 0x00069C60 */

loc_00069C2E: ;
    ecx = esi;
    PUSH32(esp, 0x00069C35u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00069C35: ;
    edi = MEM32(esi + 8);
    PUSH32(esp, edi);
    ecx = esi + 0x1304;
    PUSH32(esp, 0x00069C44u); RECOMP_ABI_CALL(0x00069D30u, sub_00069D30); /* call 0x00069D30 */

loc_00069C44: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x294);
    eax = edi + esi + 0x1304;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069C60
 * Original: 0x00069C60 - 0x00069CAA (74 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069C60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00069C60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0xC;
    ecx = ebx;
    PUSH32(esp, 0x00069C70u); RECOMP_ABI_CALL(0x00069CB0u, sub_00069CB0); /* call 0x00069CB0 */

loc_00069C70: ;
    ebp = eax;
    eax = MEM32(esp + 0x14);
    esi = ebp;
    PUSH32(esp, 4);
    esi = esi << 4;
    PUSH32(esp, eax);
    ecx = esi + ebx + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00069C88u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_00069C88: ;
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
 * sub_00069CB0
 * Original: 0x00069CB0 - 0x00069CFA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069CB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x12CC);
    eax = esi + 0xF04;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x12D4);
    edx = esi + edx * 4 + 0x12D4;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x00069CEEu); RECOMP_ABI_CALL(0x00069D00u, sub_00069D00); /* call 0x00069D00 */

loc_00069CEE: ;
    MEM32(esi + 0x12F4) = MEM32(esi + 0x12F4) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x12F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00069D00
 * Original: 0x00069D00 - 0x00069D2C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069D00: ;
    eax = MEM32(ecx + 0x3C8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x3C8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF0 (32-bit) */
    eax = MEM32(ecx + 0x3CC);
    if (CMP_L(_fas, _fbs)) goto loc_00069D24; /* jl: less (signed <) */

loc_00069D1A: ;
    MEM32(ecx + 0x3C8) = 0;

loc_00069D24: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x3CC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00069D30
 * Original: 0x00069D30 - 0x00069D6E (62 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069D30(void)
{

loc_00069D30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x294);
    esi = ecx;
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069D48u); RECOMP_ABI_CALL(0x00069D70u, sub_00069D70); /* call 0x00069D70 */

loc_00069D48: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x26AC0;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069D70
 * Original: 0x00069D70 - 0x00069DB1 (65 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069D70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EE31);
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
    if (TEST_Z(_fa, _fb)) goto loc_00069DA2; /* je: equal / zero */

loc_00069D9D: ;
    PUSH32(esp, 0x00069DA2u); RECOMP_ABI_CALL(0x00069DC0u, sub_00069DC0); /* call 0x00069DC0 */

loc_00069DA2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00069DC0
 * Original: 0x00069DC0 - 0x00069E27 (103 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069DC0(void)
{

loc_00069DC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EE53);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3CCA2C;
    edi = esi + 0x10;
    MEM32(esi + 4) = eax;
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00069DFAu); RECOMP_ABI_CALL(0x0006A300u, sub_0006A300); /* call 0x0006A300 */

loc_00069DFA: ;
    MEM32(edi) = 0x3CCA14;
    ecx = edi + 0xC;
    MEM8(esp + 0x14) = 1;
    MEM32(edi + 4) = 0x3FFFFFFF;
    PUSH32(esp, 0x00069E14u); RECOMP_ABI_CALL(0x0006A1B0u, sub_0006A1B0); /* call 0x0006A1B0 */

loc_00069E14: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00069E30
 * Original: 0x00069E30 - 0x00069E59 (41 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069E30: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00069E3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069E3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069E54; /* je: equal / zero */

loc_00069E40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069E46u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00069E46: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp = esp + 4;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00069E54: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00069E60
 * Original: 0x00069E60 - 0x00069E89 (41 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069E60(void)
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

loc_00069E60: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00069E6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069E6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069E84; /* je: equal / zero */

loc_00069E70: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069E76u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_00069E76: ;
    eax = MEM32(esp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00069E84: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00069E90
 * Original: 0x00069E90 - 0x00069EC4 (52 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00069E90: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00069E9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069E9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00069EBF; /* je: equal / zero */

loc_00069EA0: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069EABu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00069EAB: ;
    ecx = MEM32(esp + 0x10);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00069EBF: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00069ED0
 * Original: 0x00069ED0 - 0x00069EFD (45 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00069ED0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00069EDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069EDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00069EF6; /* je: equal / zero */

loc_00069EE0: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069EEBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00069EEB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

loc_00069EF6: ;
    eax = MEM32(esp + 8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00069F00
 * Original: 0x00069F00 - 0x00069F37 (55 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069F00: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00069F0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069F0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069F32; /* je: equal / zero */

loc_00069F10: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C875C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069F2Au); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00069F2A: ;
    esp = esp + 0x14;
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

loc_00069F32: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00069F40
 * Original: 0x00069F40 - 0x00069F47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069F40(void)
{

loc_00069F40: ;
    MEM32(ecx) = 0x3CCA64;
    esp += 4; return; /* ret */

}

/**
 * sub_00069F50
 * Original: 0x00069F50 - 0x00069F6F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069F50: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CCA64;
    if (TEST_Z(_fa, _fb)) goto loc_00069F69; /* je: equal / zero */

loc_00069F60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00069F66u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00069F66: ;
    esp = esp + 4;

loc_00069F69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00069F70
 * Original: 0x00069F70 - 0x00069FBE (78 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069F70: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00069F7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069F7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00069FB9; /* je: equal / zero */

loc_00069F80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069F86u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_00069F86: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8001u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00069FA1; /* jge: greater or equal (signed >=) */

loc_00069F90: ;
    ecx = MEM32(esp + 8);
    eax = 0xFFFF8001u;
    MEM16(ecx) = LO16(eax);
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00069FA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00069FAD; /* jle: less or equal (signed <=) */

loc_00069FA8: ;
    eax = 0x7FFF;

loc_00069FAD: ;
    ecx = MEM32(esp + 8);
    MEM16(ecx) = LO16(eax);
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00069FB9: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00069FC0
 * Original: 0x00069FC0 - 0x0006A025 (101 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00069FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00069FC0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00069FCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00069FCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006A020; /* je: equal / zero */

loc_00069FD0: ;
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00069FDBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00069FDB: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0006A003; /* jne: not equal / not zero */

loc_00069FEC: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = edx + eax * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

loc_0006A003: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = edx + eax * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

loc_0006A020: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006A030
 * Original: 0x0006A030 - 0x0006A057 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A030: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A03F; /* jne: not equal / not zero */

loc_0006A038: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006A03F: ;
    PUSH32(esp, 0x0006A044u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_0006A044: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006A060
 * Original: 0x0006A060 - 0x0006A129 (201 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A060: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    ebx = ebp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x0006A07Bu); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_0006A07B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A08D; /* jne: not equal / not zero */

loc_0006A085: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A11F; /* je: equal / zero */

loc_0006A08D: ;
    esi = MEM32(ebx + edi * 4 + 0x21C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A0A2; /* jne: not equal / not zero */

loc_0006A098: ;
    MEM32(esp + 0x10) = 0x3C806C;
    goto loc_0006A0BC;

loc_0006A0A2: ;
    PUSH32(esp, 0x0006A0A7u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_0006A0A7: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    edx = ecx + eax + 0x4008;
    MEM32(esp + 0x10) = edx;

loc_0006A0BC: ;
    eax = edi;
    eax = eax << 4;
    esi = MEM32(eax + ebx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = eax + ebx + 0x18;
    if (TEST_NZ(_fa, _fb)) goto loc_0006A0D4; /* jne: not equal / not zero */

loc_0006A0CD: ;
    esi = 0x3C806C;
    goto loc_0006A0EA;

loc_0006A0D4: ;
    PUSH32(esp, 0x0006A0D9u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_0006A0D9: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    esi = ecx + eax + 0x4008;

loc_0006A0EA: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx);
    edx = MEM32(ebp);
    ecx = ebp;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0006A0FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006A0FC: ;
    ecx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0006A10Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006A10E: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0006A116u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_0006A116: ;
    ebp = MEM32(esp + 0x18);
    goto loc_0006A07B;

loc_0006A11F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006A130
 * Original: 0x0006A130 - 0x0006A1AB (123 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A130: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0006A141u); RECOMP_ABI_CALL(0x00027EB0u, sub_00027EB0); /* call 0x00027EB0 */

loc_0006A141: ;
    ecx = MEM32(esi + 0x14);
    esi = esi + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0006A154u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0006A154: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A15F; /* jne: not equal / not zero */

loc_0006A15B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006A1A3; /* je: equal / zero */

loc_0006A15F: ;
    esi = esi + eax * 4 + 0x21C;
    ecx = esi;
    PUSH32(esp, 0x0006A16Du); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_0006A16D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006A173u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0006A173: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0006A1A3; /* jle: less or equal (signed <=) */

loc_0006A17A: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A189; /* jne: not equal / not zero */

loc_0006A180: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0006A189: ;
    PUSH32(esp, 0x0006A18Eu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_0006A18E: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0006A1A3: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006A1B0
 * Original: 0x0006A1B0 - 0x0006A1D6 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A1B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x208;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esi + 0x20C) = 0;
    PUSH32(esp, 0x0006A1CBu); RECOMP_ABI_CALL(0x00011F30u, sub_00011F30); /* call 0x00011F30 */

loc_0006A1CB: ;
    esp = esp + 8;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0006A1E0(); return; /* tail jmp 0x0006A1E0 */

}

/**
 * sub_0006A1E0
 * Original: 0x0006A1E0 - 0x0006A214 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A1E0: ;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx + 0x194;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esp + 4) = eax;

loc_0006A1F7: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006A203u); RECOMP_ABI_CALL(0x0006A220u, sub_0006A220); /* call 0x0006A220 */

loc_0006A203: ;
    eax = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    MEM32(esp + 4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0006A1F7; /* jl: less (signed <) */

loc_0006A211: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006A220
 * Original: 0x0006A220 - 0x0006A235 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A220(void)
{

loc_0006A220: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006A228u); RECOMP_ABI_CALL(0x0006A240u, sub_0006A240); /* call 0x0006A240 */

loc_0006A228: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(esi + eax * 4) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006A240
 * Original: 0x0006A240 - 0x0006A262 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A240: ;
    eax = MEM32(ecx + 0x68);
    edx = MEM32(ecx + 0x70);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x70) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0006A260; /* jl: less (signed <) */

loc_0006A253: ;
    MEM32(ecx + 0x68) = 0;
    eax = 0x18;
    esp += 4; return; /* ret */

loc_0006A260: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0006A270
 * Original: 0x0006A270 - 0x0006A278 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A270: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0006A280(); return; /* tail jmp 0x0006A280 */

}

/**
 * sub_0006A280
 * Original: 0x0006A280 - 0x0006A2F2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A280: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x208;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x1FC);
    edi = MEM32(eax + 0x204);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x19 (32-bit) */
    MEM32(eax + 0x1FC) = ecx;
    MEM32(eax + 0x204) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0006A2D8; /* jl: less (signed <) */

loc_0006A2C7: ;
    MEM32(eax + 0x1FC) = 0;
    ecx = 0x18;
    goto loc_0006A2D9;

loc_0006A2D8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006A2D9: ;
    MEM32(eax + ecx * 4 + 0x194) = esi;
    ecx = MEM32(eax + 0x20C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x20C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006A300
 * Original: 0x0006A300 - 0x0006A36E (110 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A300(void)
{

loc_0006A300: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EE68);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esp + 4) = esi;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3CCAB4;
    PUSH32(esp, 0x0006A339u); RECOMP_ABI_CALL(0x0006A370u, sub_0006A370); /* call 0x0006A370 */

loc_0006A339: ;
    PUSH32(esp, 0x27080);
    PUSH32(esp, 0x19);
    PUSH32(esp, 4);
    eax = esi + 0x21C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    MEM32(esi) = 0x3CCA9C;
    PUSH32(esp, 0x0006A35Cu); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_0006A35C: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0006A370
 * Original: 0x0006A370 - 0x0006A3EB (123 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A370(void)
{

loc_0006A370: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EE96);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF7410);
    PUSH32(esp, 0x19);
    esi = ecx;
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x0006A39Du); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_0006A39D: ;
    edi = 0; /* xor self */
    MEM32(esp + 0x14) = edi;
    MEM32(esi + 0x1FC) = edi;
    MEM32(esi + 0x200) = edi;
    MEM32(esi + 0x204) = edi;
    eax = esi + 0x208;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x0006A3C8u); RECOMP_ABI_CALL(0x00011F30u, sub_00011F30); /* call 0x00011F30 */

loc_0006A3C8: ;
    esp = esp + 8;
    ecx = esi;
    MEM32(esi + 0x20C) = edi;
    PUSH32(esp, 0x0006A3D8u); RECOMP_ABI_CALL(0x0006A1E0u, sub_0006A1E0); /* call 0x0006A1E0 */

loc_0006A3D8: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0006A3F0
 * Original: 0x0006A3F0 - 0x0006A40E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A3F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006A3F8u); RECOMP_ABI_CALL(0x00069F40u, sub_00069F40); /* call 0x00069F40 */

loc_0006A3F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006A408; /* je: equal / zero */

loc_0006A3FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006A405u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0006A405: ;
    esp = esp + 4;

loc_0006A408: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006A410
 * Original: 0x0006A410 - 0x0006A452 (66 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A410: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006A422u); RECOMP_ABI_CALL(0x00069B70u, sub_00069B70); /* call 0x00069B70 */

loc_0006A422: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006A44E; /* je: equal / zero */

loc_0006A428: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CC8CC);
    ecx = esi;
    PUSH32(esp, 0x0006A439u); RECOMP_ABI_CALL(0x00069A20u, sub_00069A20); /* call 0x00069A20 */

loc_0006A439: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006A44E; /* je: equal / zero */

loc_0006A441: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB770);
    ecx = esi;
    PUSH32(esp, 0x0006A44Eu); RECOMP_ABI_CALL(0x00069A20u, sub_00069A20); /* call 0x00069A20 */

loc_0006A44E: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0006A460
 * Original: 0x0006A460 - 0x0006A85F (1023 bytes, 297 insns)
 * Category: game_physics
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A460: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ebx = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0006A477u); RECOMP_ABI_CALL(0x00069B70u, sub_00069B70); /* call 0x00069B70 */

loc_0006A477: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006A85A; /* je: equal / zero */

loc_0006A481: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3C91A4);
    ecx = esi;
    PUSH32(esp, 0x0006A493u); RECOMP_ABI_CALL(0x00069A20u, sub_00069A20); /* call 0x00069A20 */

loc_0006A493: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CC8CC);
    ecx = esi;
    PUSH32(esp, 0x0006A4A4u); RECOMP_ABI_CALL(0x00069A20u, sub_00069A20); /* call 0x00069A20 */

loc_0006A4A4: ;
    edi = MEM32(esp + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006A4BE; /* je: equal / zero */

loc_0006A4AC: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3CCBA0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0006A4BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006A4BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006A4CF; /* jne: not equal / not zero */

loc_0006A4BE: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C9708);
    ecx = esi;
    PUSH32(esp, 0x0006A4CFu); RECOMP_ABI_CALL(0x00069A20u, sub_00069A20); /* call 0x00069A20 */

loc_0006A4CF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006A849; /* je: equal / zero */

loc_0006A4D7: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C96EC);
    ecx = esi;
    PUSH32(esp, 0x0006A4E9u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A4E9: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCB8C);
    ecx = esi;
    PUSH32(esp, 0x0006A4FBu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A4FB: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C9708);
    ecx = esi;
    PUSH32(esp, 0x0006A50Du); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A50D: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCB84);
    ecx = esi;
    PUSH32(esp, 0x0006A51Fu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A51F: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCB78);
    ecx = esi;
    PUSH32(esp, 0x0006A531u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A531: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCB68);
    ecx = esi;
    PUSH32(esp, 0x0006A543u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A543: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8BD4);
    ecx = esi;
    PUSH32(esp, 0x0006A555u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A555: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8BC8);
    ecx = esi;
    PUSH32(esp, 0x0006A567u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A567: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8BB0);
    ecx = esi;
    PUSH32(esp, 0x0006A579u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A579: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8B9C);
    ecx = esi;
    PUSH32(esp, 0x0006A58Bu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A58B: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8B88);
    ecx = esi;
    PUSH32(esp, 0x0006A59Du); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A59D: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8B70);
    ecx = esi;
    PUSH32(esp, 0x0006A5AFu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A5AF: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8B48);
    ecx = esi;
    PUSH32(esp, 0x0006A5C1u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A5C1: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8B38);
    ecx = esi;
    PUSH32(esp, 0x0006A5D3u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A5D3: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8B2C);
    ecx = esi;
    PUSH32(esp, 0x0006A5E5u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A5E5: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8B20);
    ecx = esi;
    PUSH32(esp, 0x0006A5F7u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A5F7: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8B14);
    ecx = esi;
    PUSH32(esp, 0x0006A609u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A609: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCB54);
    ecx = esi;
    PUSH32(esp, 0x0006A61Bu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A61B: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8B48);
    ecx = esi;
    PUSH32(esp, 0x0006A62Du); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A62D: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8AC0);
    ecx = esi;
    PUSH32(esp, 0x0006A63Fu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A63F: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8AA8);
    ecx = esi;
    PUSH32(esp, 0x0006A651u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A651: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8AB4);
    ecx = esi;
    PUSH32(esp, 0x0006A663u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A663: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8A9C);
    ecx = esi;
    PUSH32(esp, 0x0006A675u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A675: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8B04);
    ecx = esi;
    PUSH32(esp, 0x0006A687u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A687: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8AF8);
    ecx = esi;
    PUSH32(esp, 0x0006A699u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A699: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8AE8);
    ecx = esi;
    PUSH32(esp, 0x0006A6ABu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A6AB: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8A8C);
    ecx = esi;
    PUSH32(esp, 0x0006A6BDu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A6BD: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8A80);
    ecx = esi;
    PUSH32(esp, 0x0006A6CFu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A6CF: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C89EC);
    ecx = esi;
    PUSH32(esp, 0x0006A6E1u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A6E1: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCB48);
    ecx = esi;
    PUSH32(esp, 0x0006A6F3u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A6F3: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCB3C);
    ecx = esi;
    PUSH32(esp, 0x0006A705u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A705: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCB2C);
    ecx = esi;
    PUSH32(esp, 0x0006A717u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A717: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCB20);
    ecx = esi;
    PUSH32(esp, 0x0006A729u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A729: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCB10);
    ecx = esi;
    PUSH32(esp, 0x0006A73Bu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A73B: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCB04);
    ecx = esi;
    PUSH32(esp, 0x0006A74Du); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A74D: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C96B4);
    ecx = esi;
    PUSH32(esp, 0x0006A75Fu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A75F: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C96FC);
    ecx = esi;
    PUSH32(esp, 0x0006A771u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A771: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCAF8);
    ecx = esi;
    PUSH32(esp, 0x0006A783u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A783: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C96CC);
    ecx = esi;
    PUSH32(esp, 0x0006A795u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A795: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C96F4);
    ecx = esi;
    PUSH32(esp, 0x0006A7A7u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A7A7: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCAE8);
    ecx = esi;
    PUSH32(esp, 0x0006A7B9u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A7B9: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CC828);
    ecx = esi;
    PUSH32(esp, 0x0006A7CBu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A7CB: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CC6BC);
    ecx = esi;
    PUSH32(esp, 0x0006A7DDu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A7DD: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCAD8);
    ecx = esi;
    PUSH32(esp, 0x0006A7EFu); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A7EF: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8A00);
    ecx = esi;
    PUSH32(esp, 0x0006A801u); RECOMP_ABI_CALL(0x0006A900u, sub_0006A900); /* call 0x0006A900 */

loc_0006A801: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C89F8);
    ecx = esi;
    PUSH32(esp, 0x0006A813u); RECOMP_ABI_CALL(0x0006A900u, sub_0006A900); /* call 0x0006A900 */

loc_0006A813: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CA9CC);
    ecx = esi;
    PUSH32(esp, 0x0006A825u); RECOMP_ABI_CALL(0x0006A900u, sub_0006A900); /* call 0x0006A900 */

loc_0006A825: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCAD0);
    ecx = esi;
    PUSH32(esp, 0x0006A837u); RECOMP_ABI_CALL(0x0006A900u, sub_0006A900); /* call 0x0006A900 */

loc_0006A837: ;
    PUSH32(esp, 0x3CCB94);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3CCAC8);
    ecx = esi;
    PUSH32(esp, 0x0006A849u); RECOMP_ABI_CALL(0x0006A900u, sub_0006A900); /* call 0x0006A900 */

loc_0006A849: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0006A85A; /* je: equal / zero */

loc_0006A852: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0006A85Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006A85A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0006A860
 * Original: 0x0006A860 - 0x0006A8F5 (149 bytes, 44 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006A860: ;
    esp = esp - 0x84;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x80) = eax;
    eax = MEM32(esp + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x8C);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(esp + 8) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0006A8A3; /* je: equal / zero */

loc_0006A88D: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, 0x3C97F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006A89Eu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0006A89E: ;
    esp = esp + 0x10;
    goto loc_0006A8BE;

loc_0006A8A3: ;
    PUSH32(esp, 0x80);
    ecx = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006A8B3u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006A8B3: ;
    esp = esp + 0xC;
    MEM8(esp + 0x87) = 0;

loc_0006A8BE: ;
    ecx = MEM32(esp + 0x94);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0006A8D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006A8D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006A8DE; /* je: equal / zero */

loc_0006A8D5: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0006A8DEu); RECOMP_ABI_CALL(0x00069A20u, sub_00069A20); /* call 0x00069A20 */

loc_0006A8DE: ;
    ecx = MEM32(esp + 0x88);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x0006A8ECu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0006A8EC: ;
    esp = esp + 0x84;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006A900
 * Original: 0x0006A900 - 0x0006AC0B (779 bytes, 241 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006A900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006A900: ;
    esp = esp - 0x88;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x98);
    PUSH32(esp, edi);
    PUSH32(esp, 0x80);
    MEM32(esp + 0x98) = eax;
    eax = esp + 0x18;
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ecx;
    MEM8(esp + 0x20) = LO8(ebx);
    PUSH32(esp, 0x0006A937u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006A937: ;
    eax = esp + 0x20;
    esp = esp + 0xC;
    MEM8(esp + 0x93) = LO8(ebx);
    edx = eax + 1;

loc_0006A948: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A948; /* jne: not equal / not zero */

loc_0006A94F: ;
    eax = eax - edx;
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006A983; /* jge: greater or equal (signed >=) */

loc_0006A95B: ;
    edi = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006A960: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A960; /* jne: not equal / not zero */

loc_0006A968: ;
    ecx = MEM32(0x3CC6C8);
    SET_LO16(edx, MEM16(0x3CC6CC));
    SET_LO8(eax, MEM8(0x3CC6CE));
    MEM32(edi) = ecx;
    MEM16(edi + 4) = LO16(edx);
    MEM8(edi + 6) = LO8(eax);

loc_0006A983: ;
    ebp = MEM32(esp + 0xA4);
    ecx = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006A9A1u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006A9A1: ;
    PUSH32(esp, 0x80);
    eax = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006A9B1u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006A9B1: ;
    eax = esp + 0x20;
    esp = esp + 0xC;
    MEM8(esp + 0x93) = LO8(ebx);
    edx = eax + 1;

loc_0006A9C2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A9C2; /* jne: not equal / not zero */

loc_0006A9C9: ;
    eax = eax - edx;
    eax = eax + 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006AA03; /* jge: greater or equal (signed >=) */

loc_0006A9D5: ;
    edi = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0006A9E0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006A9E0; /* jne: not equal / not zero */

loc_0006A9E8: ;
    ecx = MEM32(0x3CCBD0);
    edx = MEM32(0x3CCBD4);
    SET_LO16(eax, MEM16(0x3CCBD8));
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM16(edi + 8) = LO16(eax);

loc_0006AA03: ;
    ecx = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006AA1Au); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006AA1A: ;
    PUSH32(esp, 0x80);
    eax = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006AA2Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006AA2A: ;
    eax = esp + 0x20;
    esp = esp + 0xC;
    MEM8(esp + 0x93) = LO8(ebx);
    edx = eax + 1;
    goto loc_0006AA40;

    /* nop */

loc_0006AA40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AA40; /* jne: not equal / not zero */

loc_0006AA47: ;
    eax = eax - edx;
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006AA73; /* jge: greater or equal (signed >=) */

loc_0006AA53: ;
    edi = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006AA58: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AA58; /* jne: not equal / not zero */

loc_0006AA60: ;
    ecx = MEM32(0x3CCBC8);
    SET_LO16(edx, MEM16(0x3CCBCC));
    MEM32(edi) = ecx;
    MEM16(edi + 4) = LO16(edx);

loc_0006AA73: ;
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x0006AA8Au); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006AA8A: ;
    PUSH32(esp, 0x80);
    edx = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006AA9Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006AA9A: ;
    eax = esp + 0x20;
    esp = esp + 0xC;
    MEM8(esp + 0x93) = LO8(ebx);
    edx = eax + 1;
    goto loc_0006AAB0;

    /* nop */

loc_0006AAB0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AAB0; /* jne: not equal / not zero */

loc_0006AAB7: ;
    eax = eax - edx;
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006AAE9; /* jge: greater or equal (signed >=) */

loc_0006AAC3: ;
    edi = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006AAC8: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AAC8; /* jne: not equal / not zero */

loc_0006AAD0: ;
    eax = MEM32(0x3CCBBC);
    ecx = MEM32(0x3CCBC0);
    edx = MEM32(0x3CCBC4);
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;

loc_0006AAE9: ;
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x0006AB00u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006AB00: ;
    PUSH32(esp, 0x80);
    edx = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006AB10u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006AB10: ;
    eax = esp + 0x20;
    esp = esp + 0xC;
    MEM8(esp + 0x93) = LO8(ebx);
    edx = eax + 1;

loc_0006AB21: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AB21; /* jne: not equal / not zero */

loc_0006AB28: ;
    eax = eax - edx;
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006AB61; /* jge: greater or equal (signed >=) */

loc_0006AB34: ;
    edi = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0006AB40: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006AB40; /* jne: not equal / not zero */

loc_0006AB48: ;
    eax = MEM32(0x3CCBB0);
    ecx = MEM32(0x3CCBB4);
    edx = MEM32(0x3CCBB8);
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;

loc_0006AB61: ;
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x0006AB78u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006AB78: ;
    PUSH32(esp, 0x80);
    edx = esp + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006AB88u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006AB88: ;
    eax = esp + 0x20;
    esp = esp + 0xC;
    MEM8(esp + 0x93) = LO8(ebx);
    edx = eax + 1;
    /* nop */

loc_0006ABA0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006ABA0; /* jne: not equal / not zero */

loc_0006ABA7: ;
    eax = eax - edx;
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006ABDB; /* jge: greater or equal (signed >=) */

loc_0006ABB3: ;
    edi = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006ABB8: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006ABB8; /* jne: not equal / not zero */

loc_0006ABC0: ;
    eax = MEM32(0x3CB6F0);
    SET_LO16(ecx, MEM16(0x3CB6F4));
    SET_LO8(edx, MEM8(0x3CB6F6));
    MEM32(edi) = eax;
    MEM16(edi + 4) = LO16(ecx);
    MEM8(edi + 6) = LO8(edx);

loc_0006ABDB: ;
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x0006ABF2u); RECOMP_ABI_CALL(0x0006A860u, sub_0006A860); /* call 0x0006A860 */

loc_0006ABF2: ;
    ecx = MEM32(esp + 0x94);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x0006AC02u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0006AC02: ;
    esp = esp + 0x88;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006AC10
 * Original: 0x0006AC10 - 0x0006AC17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AC10(void)
{

loc_0006AC10: ;
    MEM32(ecx) = 0x3CCBE4;
    esp += 4; return; /* ret */

}

/**
 * sub_0006AC20
 * Original: 0x0006AC20 - 0x0006AC24 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AC20(void)
{

loc_0006AC20: ;
    eax = MEM32(ecx + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_0006AC30
 * Original: 0x0006AC30 - 0x0006AC34 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AC30(void)
{

loc_0006AC30: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_0006AC40
 * Original: 0x0006AC40 - 0x0006AC89 (73 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006AC40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x48;
    ecx = 0x400;
    edx = 0; /* xor self */
    edi = edi;

loc_0006AC50: ;
    MEM32(eax) = edx;
    eax = eax + 0x28;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006AC50; /* jne: not equal / not zero */

loc_0006AC58: ;
    eax = edi + 0xA04E;
    ecx = 0x200;

loc_0006AC63: ;
    MEM8(eax + -2) = 0xFF;
    MEM8(eax + -1) = LO8(edx);
    MEM8(eax) = 0xFF;
    MEM8(eax + 1) = LO8(edx);
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006AC63; /* jne: not equal / not zero */

loc_0006AC76: ;
    esi = 0; /* xor self */

loc_0006AC78: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0006AC80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006AC80: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006AC78; /* jl: less (signed <) */

loc_0006AC86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006AC90
 * Original: 0x0006AC90 - 0x0006ACF8 (104 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AC90(void)
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

loc_0006AC90: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0xC;
    edi = 0; /* xor self */
    esi = ecx + 4;
    ebx = ebx - eax;

loc_0006ACA5: ;
    ecx = ebx + edi * 4;
    fp_push(MEMF(esp + ecx + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    fp_top() = fp_top() / MEMF(esi + 0x18); /* fdiv dword ptr [esi + 0x18] */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    PUSH32(esp, 0x0006ACBCu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006ACBC: ;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    fp_top() = fp_top() * MEMF(esi + 0x14); /* fmul dword ptr [esi + 0x14] */
    fp_top() = fp_top() + MEMF(esi + -4); /* fadd dword ptr [esi - 4] */
    MEMF(esp + edi * 4 + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0006ACA5; /* jl: less (signed <) */

loc_0006ACD7: ;
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = MEM32(esp + 0x10);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006AD00
 * Original: 0x0006AD00 - 0x0006AD2E (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006AD00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006AD00: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    eax = MEM32(esp + 4);
    fp_top() = fp_top() * MEMF(ecx + 0x1C); /* fmul dword ptr [ecx + 0x1c] */
    fp_top() = fp_top() + MEMF(ecx + 0x28); /* fadd dword ptr [ecx + 0x28] */
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = fp_top() * MEMF(ecx + 0x20); /* fmul dword ptr [ecx + 0x20] */
    fp_top() = fp_top() + MEMF(ecx + 0x2C); /* fadd dword ptr [ecx + 0x2c] */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006AD30
 * Original: 0x0006AD30 - 0x0006AD48 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AD30(void)
{

loc_0006AD30: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006AD50
 * Original: 0x0006AD50 - 0x0006AD68 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AD50(void)
{

loc_0006AD50: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006AD70
 * Original: 0x0006AD70 - 0x0006AD91 (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AD70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0006AD70: ;
    eax = MEM32(esp + 4);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1FF;
    SET_LO8(edx, MEM8(ecx + eax * 4 + 0xA04D));
    eax = ecx + eax * 4 + 0xA04C;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006ADA0
 * Original: 0x0006ADA0 - 0x0006AEB9 (281 bytes, 95 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006ADA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006ADA0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    eax = eax & 0x1FF;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(edi + eax * 4 + 0xA04D));
    ebp = edi + eax * 4 + 0xA04C;
    SET_LO8(eax, MEM8(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006AEB1; /* ja: above (unsigned >) */

loc_0006ADC9: ;
    eax = ZX8(LO8(eax));
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx = ZX8(LO8(ecx));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    eax = MEM32(edi + 0x40);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    esi = edx;
    MEM32(esp + 0x18) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0006ADF1; /* jl: less (signed <) */

loc_0006ADED: ;
    MEM32(esp + 0x10) = eax;

loc_0006ADF1: ;
    eax = ZX8(MEM8(ebp + 2));
    ecx = ZX8(MEM8(ebp + 3));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ebx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM32(esp + 0x14) = ecx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & eax;
    eax = MEM32(edi + 0x44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006AE13; /* jl: less (signed <) */

loc_0006AE0F: ;
    MEM32(esp + 0x14) = eax;

loc_0006AE13: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006AE4A; /* jg: greater (signed >) */

loc_0006AE19: ;
    /* nop */

loc_0006AE20: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006AE41; /* jg: greater (signed >) */

loc_0006AE26: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006AE34u); RECOMP_ABI_CALL(0x0006AEC0u, sub_0006AEC0); /* call 0x0006AEC0 */

loc_0006AE34: ;
    eax = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006AE26; /* jle: less or equal (signed <=) */

loc_0006AE3D: ;
    esi = MEM32(esp + 0x18);

loc_0006AE41: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006AE20; /* jle: less or equal (signed <=) */

loc_0006AE4A: ;
    MEM8(ebp) = 0xFF;
    MEM8(ebp + 1) = 0;
    MEM8(ebp + 2) = 0xFF;
    MEM8(ebp + 3) = 0;
    ecx = MEM32(esp + 0x20);
    ecx = ecx & 0x1FF;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edi + edx * 4 + 0xA86C;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x18);
    ecx = ecx & 0x1FF;
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(edi + eax * 4 + 0xA8C8);
    eax = edi + eax * 4 + 0xA8C8;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_0006AEB1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006AEC0
 * Original: 0x0006AEC0 - 0x0006AF20 (96 bytes, 42 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AEC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006AEC0: ;
    eax = MEM32(ecx + 0x40);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    PUSH32(esp, ebp);
    eax = eax + MEM32(esp + 0xC);
    eax = eax + eax * 4;
    edx = ecx + eax * 8 + 0x48;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    eax = eax & 0x1FF;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0006AF1B; /* jbe: below or equal (unsigned <=) */

loc_0006AEE8: ;
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    PUSH32(esp, ebx);
    /* nop */

loc_0006AEF0: ;
    ebp = ZX8(MEM8(edx + ecx + 8));
    ebx = edi;
    ebx = ebx >> LO8(ecx);
    ebx = ebx & 1;
    ebx = ebx << 8;
    ebx = ebx | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006AF11; /* je: equal / zero */

loc_0006AF05: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0006AEF0; /* jb: below (unsigned <) */

loc_0006AF0A: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_0006AF11: ;
    PUSH32(esp, ecx);
    ecx = edx;
    PUSH32(esp, 0x0006AF19u); RECOMP_ABI_CALL(0x0006AF20u, sub_0006AF20); /* call 0x0006AF20 */

loc_0006AF19: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_0006AF1B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006AF20
 * Original: 0x0006AF20 - 0x0006AF6A (74 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006AF20: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(eax) = esi;
    if (CMP_AE(_fa, _fb)) goto loc_0006AF65; /* jae: above or equal (unsigned >=) */

loc_0006AF33: ;
    SET_LO8(ecx, MEM8(ecx + eax + 8));
    MEM8(edi + eax + 8) = LO8(ecx);
    esi = MEM32(eax + 4);
    ecx = MEM32(eax);
    edx = esi;
    edx = edx >> LO8(ecx);
    ecx = edi;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    edx = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0006AF5C; /* je: equal / zero */

loc_0006AF50: ;
    edx = edx << LO8(ecx);
    POP32(esp, edi);
    edx = edx | esi;
    MEM32(eax + 4) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006AF5C: ;
    edx = edx << LO8(ecx);
    edx = ~edx;
    edx = edx & esi;
    MEM32(eax + 4) = edx;

loc_0006AF65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006AF70
 * Original: 0x0006AF70 - 0x0006B356 (998 bytes, 368 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006AF70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006AF70: ;
    eax = MEM32(esp + 8);
    esp = esp - 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0006AF9B; /* jne: not equal / not zero */

loc_0006AF81: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0006AF91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006AF91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

loc_0006AF9B: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006AFBBu); RECOMP_ABI_CALL(0x0006B3A0u, sub_0006B3A0); /* call 0x0006B3A0 */

loc_0006AFBB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006AFD9; /* jne: not equal / not zero */

loc_0006AFBF: ;
    edx = MEM32(esp + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0006AFCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006AFCF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

loc_0006AFD9: ;
    ecx = MEM32(esp + 0x40);
    ecx = ecx & 0x1FF;
    SET_LO8(edx, MEM8(edi + ecx * 4 + 0xA04D));
    eax = edi + ecx * 4 + 0xA04C;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    MEM32(esp + 0x38) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_0006B049; /* jbe: below or equal (unsigned <=) */

loc_0006AFFB: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    esi = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x44) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_0006B2D4; /* jg: greater (signed >) */

loc_0006B01B: ;
    goto loc_0006B020;

    /* nop */

loc_0006B020: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B03B; /* jg: greater (signed >) */

loc_0006B024: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0006B032u); RECOMP_ABI_CALL(0x0006B4B0u, sub_0006B4B0); /* call 0x0006B4B0 */

loc_0006B032: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B024; /* jle: less or equal (signed <=) */

loc_0006B037: ;
    esi = MEM32(esp + 0x44);

loc_0006B03B: ;
    eax = MEM32(esp + 0x2C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B020; /* jle: less or equal (signed <=) */

loc_0006B044: ;
    goto loc_0006B2D4;

loc_0006B049: ;
    ebp = ZX8(MEM8(eax + 2));
    eax = ZX8(MEM8(eax + 3));
    esi = ZX8(LO8(ecx));
    ebx = ZX8(LO8(edx));
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x2C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0006B085; /* jne: not equal / not zero */

loc_0006B06F: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B085; /* jne: not equal / not zero */

loc_0006B075: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B085; /* jne: not equal / not zero */

loc_0006B07B: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B34C; /* je: equal / zero */

loc_0006B085: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B26B; /* jg: greater (signed >) */

loc_0006B08F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B26B; /* jl: less (signed <) */

loc_0006B097: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B26B; /* jg: greater (signed >) */

loc_0006B0A1: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B26B; /* jl: less (signed <) */

loc_0006B0AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006B0B3; /* jge: greater or equal (signed >=) */

loc_0006B0B1: ;
    ebp = ecx;

loc_0006B0B3: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B0BD; /* jle: less or equal (signed <=) */

loc_0006B0BB: ;
    eax = esi;

loc_0006B0BD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x44) = ebp;
    if (CMP_G(_fas, _fbs)) goto loc_0006B2D4; /* jg: greater (signed >) */

loc_0006B0CD: ;
    goto loc_0006B0E0;

loc_0006B0CF: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    goto loc_0006B0E0;

    /* nop */

loc_0006B0E0: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x30) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B21E; /* jl: less (signed <) */

loc_0006B0EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x2C) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B21E; /* jg: greater (signed >) */

loc_0006B0F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B1EE; /* jl: less (signed <) */

loc_0006B100: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B1EE; /* jg: greater (signed >) */

loc_0006B108: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B174; /* je: equal / zero */

loc_0006B110: ;
    ebx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0006B142; /* jge: greater or equal (signed >=) */

loc_0006B114: ;
    ebp = edx + -1;

loc_0006B117: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    esi = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_0006B13B; /* jg: greater (signed >) */

loc_0006B11D: ;
    /* nop */

loc_0006B120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006B12Eu); RECOMP_ABI_CALL(0x0006AEC0u, sub_0006AEC0); /* call 0x0006AEC0 */

loc_0006B12E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B120; /* jle: less or equal (signed <=) */

loc_0006B133: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x24);

loc_0006B13B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B117; /* jle: less or equal (signed <=) */

loc_0006B140: ;
    goto loc_0006B174;

loc_0006B142: ;
    esi = edx;
    MEM32(esp + 0x34) = esi;
    ebp = ecx + -1;
    goto loc_0006B150;

    /* nop */

loc_0006B150: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B16F; /* jg: greater (signed >) */

loc_0006B154: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0006B162u); RECOMP_ABI_CALL(0x0006B4B0u, sub_0006B4B0); /* call 0x0006B4B0 */

loc_0006B162: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B154; /* jle: less or equal (signed <=) */

loc_0006B167: ;
    esi = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x44);

loc_0006B16F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B150; /* jle: less or equal (signed <=) */

loc_0006B174: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B254; /* je: equal / zero */

loc_0006B184: ;
    ebx = MEM32(esp + 0x44);
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B1BC; /* jle: less or equal (signed <=) */

loc_0006B18E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x34) = esi;

loc_0006B193: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B1AE; /* jg: greater (signed >) */

loc_0006B197: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0006B1A5u); RECOMP_ABI_CALL(0x0006AEC0u, sub_0006AEC0); /* call 0x0006AEC0 */

loc_0006B1A5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B197; /* jle: less or equal (signed <=) */

loc_0006B1AA: ;
    esi = MEM32(esp + 0x34);

loc_0006B1AE: ;
    eax = MEM32(esp + 0x44);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B193; /* jle: less or equal (signed <=) */

loc_0006B1B7: ;
    goto loc_0006B254;

loc_0006B1BC: ;
    eax = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = esi;
    MEM32(esp + 0x34) = eax;

loc_0006B1C7: ;
    esi = MEM32(esp + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B1E3; /* jg: greater (signed >) */

loc_0006B1CF: ;
    /* nop */

loc_0006B1D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0006B1DEu); RECOMP_ABI_CALL(0x0006B4B0u, sub_0006B4B0); /* call 0x0006B4B0 */

loc_0006B1DE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B1D0; /* jle: less or equal (signed <=) */

loc_0006B1E3: ;
    eax = MEM32(esp + 0x44);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B1C7; /* jle: less or equal (signed <=) */

loc_0006B1EC: ;
    goto loc_0006B254;

loc_0006B1EE: ;
    ebp = MEM32(esp + 0x20);
    ebx = eax;

loc_0006B1F4: ;
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B217; /* jg: greater (signed >) */

loc_0006B1FC: ;
    /* nop */

loc_0006B200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0006B20Eu); RECOMP_ABI_CALL(0x0006AEC0u, sub_0006AEC0); /* call 0x0006AEC0 */

loc_0006B20E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B200; /* jle: less or equal (signed <=) */

loc_0006B213: ;
    eax = MEM32(esp + 0x44);

loc_0006B217: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B1F4; /* jle: less or equal (signed <=) */

loc_0006B21C: ;
    goto loc_0006B254;

loc_0006B21E: ;
    ebp = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x44);
    MEM32(esp + 0x34) = edx;
    /* nop */

loc_0006B230: ;
    esi = MEM32(esp + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B24B; /* jg: greater (signed >) */

loc_0006B238: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006B246u); RECOMP_ABI_CALL(0x0006B4B0u, sub_0006B4B0); /* call 0x0006B4B0 */

loc_0006B246: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B238; /* jle: less or equal (signed <=) */

loc_0006B24B: ;
    eax = MEM32(esp + 0x44);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B230; /* jle: less or equal (signed <=) */

loc_0006B254: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x44) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0006B0CF; /* jle: less or equal (signed <=) */

loc_0006B269: ;
    goto loc_0006B2D4;

loc_0006B26B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B294; /* jg: greater (signed >) */

loc_0006B26F: ;
    /* nop */

loc_0006B270: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B28F; /* jg: greater (signed >) */

loc_0006B274: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0006B282u); RECOMP_ABI_CALL(0x0006AEC0u, sub_0006AEC0); /* call 0x0006AEC0 */

loc_0006B282: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B274; /* jle: less or equal (signed <=) */

loc_0006B287: ;
    eax = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x24);

loc_0006B28F: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B270; /* jle: less or equal (signed <=) */

loc_0006B294: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    edx = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x10);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x44) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_0006B2D4; /* jg: greater (signed >) */

loc_0006B2B0: ;
    esi = MEM32(esp + 0x44);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B2CB; /* jg: greater (signed >) */

loc_0006B2B8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006B2C6u); RECOMP_ABI_CALL(0x0006B4B0u, sub_0006B4B0); /* call 0x0006B4B0 */

loc_0006B2C6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B2B8; /* jle: less or equal (signed <=) */

loc_0006B2CB: ;
    eax = MEM32(esp + 0x34);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B2B0; /* jle: less or equal (signed <=) */

loc_0006B2D4: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    esi = MEM32(esp + 0x38);
    MEM8(esi) = LO8(ecx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(esi + 1) = LO8(edx);
    SET_LO8(eax, MEM8(esp + 0x18));
    MEM8(esi + 2) = LO8(eax);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(esi + 3) = LO8(ecx);
    edi = edi + 0xA86C;
    ebx = 2;
    edi = edi;

loc_0006B300: ;
    edx = edi + -28;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0006B30Bu); RECOMP_ABI_CALL(0x0006B360u, sub_0006B360); /* call 0x0006B360 */

loc_0006B30B: ;
    ecx = MEM32(esp + 0x40);
    ecx = ecx & 0x1FF;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edx = 1;
    eax = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0006B332; /* je: equal / zero */

loc_0006B320: ;
    ecx = ecx & 0x1F;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edx = edx << LO8(ecx);
    ecx = MEM32(edi + eax * 4);
    eax = edi + eax * 4;
    ecx = ecx | edx;
    goto loc_0006B344;

loc_0006B332: ;
    ecx = ecx & 0x1F;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(edi + eax * 4);
    eax = edi + eax * 4;
    edx = ~edx;
    ecx = ecx & edx;

loc_0006B344: ;
    edi = edi + 0x5C;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ecx;
    if ((_fa != 0)) goto loc_0006B300; /* jne: not equal / not zero */

loc_0006B34C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006B360
 * Original: 0x0006B360 - 0x0006B393 (51 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B360: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(edx, MEM8(esi));
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006B38D; /* ja: above (unsigned >) */

loc_0006B36E: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006B38D; /* ja: above (unsigned >) */

loc_0006B372: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), LO8(edx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0006B38D; /* jb: below (unsigned <) */

loc_0006B377: ;
    SET_LO8(eax, MEM8(ecx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 3) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0006B38D; /* ja: above (unsigned >) */

loc_0006B37F: ;
    SET_LO8(ecx, MEM8(ecx + 3));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 2) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0006B38D; /* jb: below (unsigned <) */

loc_0006B387: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006B38D: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006B3A0
 * Original: 0x0006B3A0 - 0x0006B4AD (269 bytes, 99 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B3A0(void)
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

loc_0006B3A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    fp_push(MEMF(ebx)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x10] */
    PUSH32(esp, edi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B4A5; /* je: equal / zero */

loc_0006B3B9: ;
    fp_push(MEMF(ebx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B4A5; /* je: equal / zero */

loc_0006B3CA: ;
    edi = MEM32(esp + 0x14);
    fp_push(MEMF(edi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006B4A5; /* jnp: not parity */

loc_0006B3DE: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006B4A5; /* jnp: not parity */

loc_0006B3EF: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    PUSH32(esp, 0x0006B402u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006B402: ;
    edx = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    MEM32(edx) = eax;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C7084); /* fsub dword ptr [0x3c7084] */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    PUSH32(esp, 0x0006B425u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006B425: ;
    ecx = MEM32(esi + 0x40);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006B42F; /* jge: greater or equal (signed >=) */

loc_0006B42D: ;
    eax = ecx;

loc_0006B42F: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = eax;
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x0006B44Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006B44B: ;
    ebx = MEM32(esp + 0x24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    MEM32(ebx) = eax;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C7084); /* fsub dword ptr [0x3c7084] */
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x0006B46Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006B46F: ;
    esi = MEM32(esi + 0x44);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006B479; /* jge: greater or equal (signed >=) */

loc_0006B477: ;
    eax = esi;

loc_0006B479: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x1C);
    MEM32(ecx) = eax;
    ebp = MEM32(ebp);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B48E; /* jl: less (signed <) */

loc_0006B48C: ;
    eax = ebp;

loc_0006B48E: ;
    MEM32(edx) = eax;
    eax = MEM32(ecx);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    POP32(esp, ebp);
    if (CMP_GE(_fas, _fbs)) goto loc_0006B49B; /* jge: greater or equal (signed >=) */

loc_0006B499: ;
    eax = ecx;

loc_0006B49B: ;
    POP32(esp, edi);
    MEM32(ebx) = eax;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

loc_0006B4A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006B4B0
 * Original: 0x0006B4B0 - 0x0006B4DC (44 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B4B0: ;
    eax = MEM32(ecx + 0x40);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    eax = eax + MEM32(esp + 8);
    eax = eax + eax * 4;
    ecx = ecx + eax * 8 + 0x48;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0006B4D9; /* jae: above or equal (unsigned >=) */

loc_0006B4C8: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    eax = eax & 0x1FF;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006B4D9u); RECOMP_ABI_CALL(0x0006B4E0u, sub_0006B4E0); /* call 0x0006B4E0 */

loc_0006B4D9: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006B4E0
 * Original: 0x0006B4E0 - 0x0006B519 (57 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B4E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM8(edx + eax + 8) = LO8(ecx);
    edx = 1;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(HI8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), HI8(ecx) (8-bit) */
    ecx = MEM32(eax);
    if (TEST_Z(_fa, _fb)) goto loc_0006B509; /* je: equal / zero */

loc_0006B4FB: ;
    edx = edx << LO8(ecx);
    esi = esi | edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = esi;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006B509: ;
    edx = edx << LO8(ecx);
    edx = ~edx;
    esi = esi & edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = esi;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006B520
 * Original: 0x0006B520 - 0x0006B591 (113 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B520: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x23) = LO8(ebx);
    PUSH32(esp, 0x0006B552u); RECOMP_ABI_CALL(0x0006B3A0u, sub_0006B3A0); /* call 0x0006B3A0 */

loc_0006B552: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B587; /* je: equal / zero */

loc_0006B556: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    eax = esp + 0xB;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0006B57Bu); RECOMP_ABI_CALL(0x0006B5A0u, sub_0006B5A0); /* call 0x0006B5A0 */

loc_0006B57B: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

loc_0006B587: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006B5A0
 * Original: 0x0006B5A0 - 0x0006B66C (204 bytes, 73 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B5A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006B5A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    MEM32(esp) = ecx;
    MEM32(esp + 0x10) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0006B668; /* jg: greater (signed >) */

loc_0006B5B6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0006B5C2: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x1C) (32-bit) */
    MEM32(esp + 0x2C) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_0006B64F; /* jg: greater (signed >) */

loc_0006B5D4: ;
    eax = MEM32(ecx + 0x40);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x20));
    eax = eax + edi;
    eax = eax + eax * 4;
    esi = ecx + eax * 8 + 0x48;
    eax = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0006B642; /* jbe: below or equal (unsigned <=) */

loc_0006B5ED: ;
    /* nop */

loc_0006B5F0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B609; /* je: equal / zero */

loc_0006B5F4: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B609; /* jne: not equal / not zero */

loc_0006B5FA: ;
    ecx = 0x10;
    eax = 0; /* xor self */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(ebp) = 1;

loc_0006B609: ;
    eax = MEM32(esi + 4);
    ecx = edx;
    eax = eax >> LO8(ecx);
    ecx = ZX8(MEM8(esi + edx + 8));
    eax = eax & 1;
    eax = eax << 8;
    eax = eax | ecx;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edi = ebx + ecx * 4;
    ecx = eax;
    ecx = ecx & 0x1F;
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi) = MEM32(edi) | eax;
    eax = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0006B5F0; /* jb: below (unsigned <) */

loc_0006B63A: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x2C);

loc_0006B642: ;
    eax = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x2C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0006B5D4; /* jle: less or equal (signed <=) */

loc_0006B64F: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0006B5C2; /* jle: less or equal (signed <=) */

loc_0006B664: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006B668: ;
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0006B670
 * Original: 0x0006B670 - 0x0006B681 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B670(void)
{

loc_0006B670: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    eax = eax + ecx + 0xA86C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006B690
 * Original: 0x0006B690 - 0x0006B6CA (58 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B690(void)
{

loc_0006B690: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    edx = eax + ecx;
    SET_LO8(ecx, 0xFF);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, edi);
    MEM8(edx + 0xA850) = LO8(ecx);
    MEM8(edx + 0xA851) = LO8(eax);
    MEM8(edx + 0xA852) = LO8(ecx);
    MEM8(edx + 0xA853) = LO8(eax);
    ecx = 0x10;
    eax = 0; /* xor self */
    edi = edx + 0xA86C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006B6D0
 * Original: 0x0006B6D0 - 0x0006B721 (81 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B6D0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    SET_LO8(edx, MEM8(eax + ecx + 0xA851));
    eax = eax + ecx;
    SET_LO8(ecx, MEM8(eax + 0xA850));
    esp = esp - 0x18;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0006B70A; /* jbe: below or equal (unsigned <=) */

loc_0006B6ED: ;
    PUSH32(esp, 1);
    ecx = esp + 4;
    PUSH32(esp, 0x0006B6F8u); RECOMP_ABI_CALL(0x0006B730u, sub_0006B730); /* call 0x0006B730 */

loc_0006B6F8: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006B702u); RECOMP_ABI_CALL(0x000B8890u, sub_000B8890); /* call 0x000B8890 */

loc_0006B702: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

loc_0006B70A: ;
    ecx = MEM32(esp + 0x20);
    eax = eax + 0xA854;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006B719u); RECOMP_ABI_CALL(0x000B8890u, sub_000B8890); /* call 0x000B8890 */

loc_0006B719: ;
    SET_LO8(eax, 1);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006B730
 * Original: 0x0006B730 - 0x0006B772 (66 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006B730: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006B76F; /* je: equal / zero */

loc_0006B73A: ;
    ecx = MEM32(0x5BC9D0);
    MEM32(eax) = ecx;
    edx = MEM32(0x5BC9D4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x5BC9D8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x5BC9D0);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(0x5BC9D4);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(eax + 0x14) = edx;

loc_0006B76F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006B780
 * Original: 0x0006B780 - 0x0006BA6F (751 bytes, 269 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006B780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006B780: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x20;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    esi = eax + ebp;
    edi = esi + 0xA854;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0006B7A5u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_0006B7A5: ;
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x0006B7B1u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_0006B7B1: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0006B7D1u); RECOMP_ABI_CALL(0x0006B3A0u, sub_0006B3A0); /* call 0x0006B3A0 */

loc_0006B7D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006B7EC; /* jne: not equal / not zero */

loc_0006B7D5: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0006B7E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006B7E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_0006B7EC: ;
    SET_LO8(eax, MEM8(esi + 0xA850));
    SET_LO8(ecx, MEM8(esi + 0xA851));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0006B858; /* jbe: below or equal (unsigned <=) */

loc_0006B7FC: ;
    ebx = MEM32(esp + 0x2C);

loc_0006B800: ;
    edx = esi + 0xA86C;
    eax = 0; /* xor self */
    edi = edx;
    PUSH32(esp, eax);
    ecx = 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);

loc_0006B81B: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);

loc_0006B822: ;
    ecx = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006B82Au); RECOMP_ABI_CALL(0x0006B5A0u, sub_0006B5A0); /* call 0x0006B5A0 */

loc_0006B82A: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0x10));
    SET_LO8(eax, MEM8(esp + 0x38));
    MEM8(esi + 0xA850) = LO8(ecx);
    MEM8(esi + 0xA851) = LO8(edx);
    MEM8(esi + 0xA852) = LO8(ebx);
    MEM8(esi + 0xA853) = LO8(eax);

loc_0006B84E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_0006B858: ;
    ebx = MEM32(esp + 0x14);
    edi = ZX8(LO8(eax));
    eax = ZX8(MEM8(esi + 0xA852));
    edx = ZX8(LO8(ecx));
    ecx = ZX8(MEM8(esi + 0xA853));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    ebx = MEM32(esp + 0x2C);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0006B898; /* jne: not equal / not zero */

loc_0006B888: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B898; /* jne: not equal / not zero */

loc_0006B88E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006B898; /* jne: not equal / not zero */

loc_0006B892: ;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x38), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006B84E; /* je: equal / zero */

loc_0006B898: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B800; /* jg: greater (signed >) */

loc_0006B8A6: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B800; /* jl: less (signed <) */

loc_0006B8B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x38) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006B800; /* jg: greater (signed >) */

loc_0006B8BE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006B800; /* jl: less (signed <) */

loc_0006B8C6: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(esp + 0x34) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_0006B8D6; /* jg: greater (signed >) */

loc_0006B8D2: ;
    MEM32(esp + 0x34) = edi;

loc_0006B8D6: ;
    edx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006B8E4; /* jge: greater or equal (signed >=) */

loc_0006B8E2: ;
    edi = edx;

loc_0006B8E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0006B8F0; /* jg: greater (signed >) */

loc_0006B8EC: ;
    MEM32(esp + 0x2C) = ebx;

loc_0006B8F0: ;
    edx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0006B900; /* jl: less (signed <) */

loc_0006B8FC: ;
    MEM32(esp + 0x28) = edx;

loc_0006B900: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B918; /* jle: less or equal (signed <=) */

loc_0006B904: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    ecx = esi + 0xA86C;
    PUSH32(esp, ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    goto loc_0006B944;

loc_0006B918: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0006B953; /* jge: greater or equal (signed >=) */

loc_0006B91A: ;
    edx = MEM32(esp + 0x34);
    ecx = esi + 0xA86C;
    PUSH32(esp, ecx);
    ecx = ebx + -1;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0006B933u); RECOMP_ABI_CALL(0x0006BA70u, sub_0006BA70); /* call 0x0006BA70 */

loc_0006B933: ;
    PUSH32(esp, 0);
    eax = esi + 0xA86C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);

loc_0006B944: ;
    ecx = ebp;
    PUSH32(esp, 0x0006B94Bu); RECOMP_ABI_CALL(0x0006B5A0u, sub_0006B5A0); /* call 0x0006B5A0 */

loc_0006B94B: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);

loc_0006B953: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x38) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006B96B; /* jge: greater or equal (signed >=) */

loc_0006B959: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    edx = esi + 0xA86C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    goto loc_0006B997;

loc_0006B96B: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0006B9AC; /* jle: less or equal (signed <=) */

loc_0006B96D: ;
    edx = MEM32(esp + 0x38);
    eax = esi + 0xA86C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0006B988u); RECOMP_ABI_CALL(0x0006BA70u, sub_0006BA70); /* call 0x0006BA70 */

loc_0006B988: ;
    PUSH32(esp, 0);
    eax = esi + 0xA86C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, eax);

loc_0006B997: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0006B9A4u); RECOMP_ABI_CALL(0x0006B5A0u, sub_0006B5A0); /* call 0x0006B5A0 */

loc_0006B9A4: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);

loc_0006B9AC: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006B9CD; /* jge: greater or equal (signed >=) */

loc_0006B9B8: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    eax = esi + 0xA86C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    eax = edi;
    goto loc_0006BA02;

loc_0006B9CD: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006BA12; /* jge: greater or equal (signed >=) */

loc_0006B9D7: ;
    edi = esi + 0xA86C;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0006B9F0u); RECOMP_ABI_CALL(0x0006BA70u, sub_0006BA70); /* call 0x0006BA70 */

loc_0006B9F0: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);

loc_0006BA02: ;
    ecx = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006BA0Au); RECOMP_ABI_CALL(0x0006B5A0u, sub_0006B5A0); /* call 0x0006B5A0 */

loc_0006BA0A: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);

loc_0006BA12: ;
    edx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    edx = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0006BA33; /* jle: less or equal (signed <=) */

loc_0006BA20: ;
    eax = esi + 0xA86C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0006B81B;

loc_0006BA33: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006B82A; /* jle: less or equal (signed <=) */

loc_0006BA3D: ;
    edi = esi + 0xA86C;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0006BA58u); RECOMP_ABI_CALL(0x0006BA70u, sub_0006BA70); /* call 0x0006BA70 */

loc_0006BA58: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    goto loc_0006B822;

}

/**
 * sub_0006BA70
 * Original: 0x0006BA70 - 0x0006BB14 (164 bytes, 65 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BA70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006BA70: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 0x14) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_0006BB0F; /* jg: greater (signed >) */

loc_0006BA8A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_0006BA91: ;
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006BAFF; /* jg: greater (signed >) */

loc_0006BA9B: ;
    goto loc_0006BAA0;

    /* nop */

loc_0006BAA0: ;
    eax = MEM32(ecx + 0x40);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = eax + ebp;
    eax = eax + eax * 4;
    esi = ecx + eax * 8 + 0x48;
    eax = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0006BAF6; /* jbe: below or equal (unsigned <=) */

loc_0006BAB7: ;
    eax = MEM32(esi + 4);
    ecx = edx;
    eax = eax >> LO8(ecx);
    ecx = ZX8(MEM8(esi + edx + 8));
    eax = eax & 1;
    eax = eax << 8;
    eax = eax | ecx;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edi = ebx + ecx * 4;
    ecx = eax;
    ecx = ecx & 0x1F;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(edi);
    eax = ~eax;
    ecx = ecx & eax;
    MEM32(edi) = ecx;
    eax = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0006BAB7; /* jb: below (unsigned <) */

loc_0006BAEE: ;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x20);

loc_0006BAF6: ;
    eax = MEM32(esp + 0x1C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006BAA0; /* jle: less or equal (signed <=) */

loc_0006BAFF: ;
    eax = MEM32(esp + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0006BA91; /* jle: less or equal (signed <=) */

loc_0006BB0C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0006BB0F: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0006BB20
 * Original: 0x0006BB20 - 0x0006BEBA (922 bytes, 272 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0006BB20(void)
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

loc_0006BB20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BB3Bu); RECOMP_ABI_CALL(0x00011FF0u, sub_00011FF0); /* call 0x00011FF0 */

loc_0006BB3B: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = eax;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    esp = esp - 0xC;
    ecx = esp + 0x38;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BB82u); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_0006BB82: ;
    ecx = MEM32(esp + 0x2C);
    fp_push(MEMF(0x3C6E40)); /* fld float */
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = edx;
    MEM32(esi + 0x30) = eax;
    fp_top() = fp_top() / MEMF(esi + 0x1C); /* fdiv dword ptr [esi + 0x1c] */
    edi = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0xC);
    esp = esp - 8;
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 0x20); /* fdiv dword ptr [esi + 0x20] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 0x24); /* fdiv dword ptr [esi + 0x24] */
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(ebx);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(ebx + 8);
    MEM32(esi + 0x18) = eax;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 4); /* fmul dword ptr [esi + 4] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BBF4u); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0006BBF4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BBF9u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BBF9: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x1C); /* fmul dword ptr [esi + 0x1c] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BC15u); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0006BC15: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BC1Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BC1A: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x20); /* fmul dword ptr [esi + 0x20] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BC36u); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0006BC36: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BC3Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BC3B: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x24); /* fmul dword ptr [esi + 0x24] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BC5Au); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_0006BC5A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BC5Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BC5F: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x1C); /* fmul dword ptr [esi + 0x1c] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x2C); /* fadd dword ptr [esi + 0x2c] */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BC7Eu); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_0006BC7E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BC83u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BC83: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x20); /* fmul dword ptr [esi + 0x20] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x18); /* fadd dword ptr [esi + 0x18] */
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BCA2u); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_0006BCA2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BCA7u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BCA7: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x24); /* fmul dword ptr [esi + 0x24] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xC); /* fsub dword ptr [esi + 0xc] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(esi + 0x10)); /* fld float */
    ecx = esp + 0x20;
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BCDBu); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_0006BCDB: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() / MEMF(esi + 0x1C); /* fdiv dword ptr [esi + 0x1c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BCE7u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BCE7: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esi + 0x40) = eax;
    fp_top() = fp_top() / MEMF(esi + 0x20); /* fdiv dword ptr [esi + 0x20] */
    MEM32(esp + 0x10) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BCFAu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BCFA: ;
    MEM32(esi + 0x44) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006BE44; /* jle: less or equal (signed <=) */

loc_0006BD0D: ;
    ecx = MEM32(edi);
    MEM32(esi + 4) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 8) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(ebx);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(ebx + 4);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(ebx + 8);
    MEM32(esi + 0x18) = eax;
    fp_push(MEMF(esi + 4)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BD3Du); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_0006BD3D: ;
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BD45u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BD45: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x1C); /* fmul dword ptr [esi + 0x1c] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BD5Eu); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_0006BD5E: ;
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BD66u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BD66: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x20); /* fmul dword ptr [esi + 0x20] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BD7Fu); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_0006BD7F: ;
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BD87u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BD87: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x24); /* fmul dword ptr [esi + 0x24] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BDA0u); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0006BDA0: ;
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BDABu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BDAB: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x1C); /* fmul dword ptr [esi + 0x1c] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BDC4u); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0006BDC4: ;
    fp_top() = fp_top() + MEMF(esi + 0x2C); /* fadd dword ptr [esi + 0x2c] */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BDCFu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BDCF: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x20); /* fmul dword ptr [esi + 0x20] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BDE8u); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0006BDE8: ;
    fp_top() = fp_top() + MEMF(esi + 0x30); /* fadd dword ptr [esi + 0x30] */
    esp = esp + 8;
    fp_top() = fp_top() * MEMF(esi + 0x3C); /* fmul dword ptr [esi + 0x3c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BDF6u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BDF6: ;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x24); /* fmul dword ptr [esi + 0x24] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xC); /* fsub dword ptr [esi + 0xc] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() / MEMF(esi + 0x1C); /* fdiv dword ptr [esi + 0x1c] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BE32u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BE32: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(esi + 0x40) = eax;
    fp_top() = fp_top() / MEMF(esi + 0x20); /* fdiv dword ptr [esi + 0x20] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BE41u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BE41: ;
    MEM32(esi + 0x44) = eax;

loc_0006BE44: ;
    ecx = MEM32(esi + 0x44);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x40));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x400 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006BEAB; /* jle: less or equal (signed <=) */

loc_0006BE53: ;
    edx = MEM32(edi);
    MEM32(esi + 4) = edx;
    eax = MEM32(edi + 4);
    MEM32(esi + 8) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(ebx);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(ebx + 4);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(ebx + 8);
    MEM32(esi + 0x18) = ecx;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    esp = esp - 8;
    fp_top() = fp_top() / MEMF(esi + 0x1C); /* fdiv dword ptr [esi + 0x1c] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BE87u); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_0006BE87: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BE8Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BE8C: ;
    MEM32(esi + 0x40) = eax;
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    fp_top() = fp_top() / MEMF(esi + 0x20); /* fdiv dword ptr [esi + 0x20] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BEA0u); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_0006BEA0: ;
    esp = esp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0006BEA8u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006BEA8: ;
    MEM32(esi + 0x44) = eax;

loc_0006BEAB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006BEB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006BEB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_0006BEC0
 * Original: 0x0006BEC0 - 0x0006BEF6 (54 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BEC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006BEC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    edx = ebp + 2;
    esi = 2;
    SET_LO8(ebx, 0); /* xor self */

loc_0006BED0: ;
    MEM8(edx + -2) = 0xFF;
    MEM8(edx + -1) = LO8(ebx);
    MEM8(edx) = 0xFF;
    MEM8(edx + 1) = LO8(ebx);
    edi = edx + 0x1A;
    eax = 0; /* xor self */
    ecx = 0x10;
    edx = edx + 0x5C;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if ((_fa != 0)) goto loc_0006BED0; /* jne: not equal / not zero */

loc_0006BEEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006BF00
 * Original: 0x0006BF00 - 0x0006BF72 (114 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006BF00: ;
    SET_LO8(ecx, MEM8(0x498D8C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006BF6C; /* jne: not equal / not zero */

loc_0006BF0F: ;
    MEM32(0x498D8C) = MEM32(0x498D8C) | eax;
    MEM32(0x48E480) = 0x3CCBE4;
    eax = 0x48E4C8;
    ecx = 0x400;
    edx = 0; /* xor self */
    goto loc_0006BF30;

    /* nop */

loc_0006BF30: ;
    MEM32(eax) = edx;
    eax = eax + 0x28;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006BF30; /* jne: not equal / not zero */

loc_0006BF38: ;
    eax = 0x4984CE;
    ecx = 0x200;

loc_0006BF42: ;
    MEM8(eax + -2) = 0xFF;
    MEM8(eax + -1) = LO8(edx);
    MEM8(eax) = 0xFF;
    MEM8(eax + 1) = LO8(edx);
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006BF42; /* jne: not equal / not zero */

loc_0006BF55: ;
    ecx = 0x498CD0;
    PUSH32(esp, 0x0006BF5Fu); RECOMP_ABI_CALL(0x0006BEC0u, sub_0006BEC0); /* call 0x0006BEC0 */

loc_0006BF5F: ;
    PUSH32(esp, 0x359EA0);
    PUSH32(esp, 0x0006BF69u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0006BF69: ;
    esp = esp + 4;

loc_0006BF6C: ;
    eax = 0x48E480;
    esp += 4; return; /* ret */

}

/**
 * sub_0006BF80
 * Original: 0x0006BF80 - 0x0006BF98 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BF80(void)
{

loc_0006BF80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006BF88u); RECOMP_ABI_CALL(0x000BEF20u, sub_000BEF20); /* call 0x000BEF20 */

loc_0006BF88: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0006BF96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006BF96: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006BFA0
 * Original: 0x0006BFA0 - 0x0006BFB8 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BFA0(void)
{

loc_0006BFA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006BFA8u); RECOMP_ABI_CALL(0x000BEF20u, sub_000BEF20); /* call 0x000BEF20 */

loc_0006BFA8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0006BFB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006BFB6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006BFC0
 * Original: 0x0006BFC0 - 0x0006BFCC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BFC0(void)
{

loc_0006BFC0: ;
    ecx = ecx + 8;
    MEM32(0x498D94) = ecx;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0006BFD0
 * Original: 0x0006BFD0 - 0x0006C01C (76 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006BFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006BFD0: ;
    PUSH32(esp, edi);
    edi = MEM32(0x498D94);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C016; /* je: equal / zero */

loc_0006BFDB: ;
    eax = MEM32(esp + 0xC);
    edx = edi;
    edx = edx - ecx;
    ecx = edx + eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006C016; /* jg: greater (signed >) */

loc_0006BFEC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = eax;
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
    ecx = MEM32(0x498D94);
    ecx = ecx + eax;
    POP32(esp, esi);
    MEM32(0x498D94) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0006C016: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006C020
 * Original: 0x0006C020 - 0x0006C06C (76 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C020: ;
    PUSH32(esp, esi);
    esi = MEM32(0x498D94);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C066; /* je: equal / zero */

loc_0006C02B: ;
    eax = MEM32(esp + 0xC);
    edx = esi;
    edx = edx - ecx;
    ecx = edx + eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0006C066; /* jg: greater (signed >) */

loc_0006C03C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = eax;
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
    ecx = MEM32(0x498D94);
    ecx = ecx + eax;
    POP32(esp, edi);
    MEM32(0x498D94) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0006C066: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006C070
 * Original: 0x0006C070 - 0x0006C07D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C070(void)
{

loc_0006C070: ;
    MEM32(0x498D94) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C080
 * Original: 0x0006C080 - 0x0006C098 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C080(void)
{

loc_0006C080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006C088u); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_0006C088: ;
    edx = MEM32(eax);
    esi = esi + 0x37B0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0006C096u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C096: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C0A0
 * Original: 0x0006C0A0 - 0x0006C0B8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C0A0(void)
{

loc_0006C0A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006C0A8u); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_0006C0A8: ;
    edx = MEM32(eax);
    esi = esi + 0x39B0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0006C0B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C0B6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C0C0
 * Original: 0x0006C0C0 - 0x0006C103 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C0C0: ;
    edx = ecx;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C0D1; /* jne: not equal / not zero */

loc_0006C0C9: ;
    MEM32(edx) = 0;
    goto loc_0006C0D4;

loc_0006C0D1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = eax;

loc_0006C0D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx + 4;
    eax = 0; /* xor self */
    edi = esi;
    ecx = 0x800;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(esi) = 1;
    MEM8(edx + 0x2008) = LO8(eax);
    MEM8(edx + 0x2009) = LO8(eax);
    MEM32(edx + 0x2004) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C110
 * Original: 0x0006C110 - 0x0006C1A9 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C110: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0006C127; /* jl: less (signed <) */

loc_0006C11E: ;
    eax = 0x12C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0006C127: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0006C13A; /* jne: not equal / not zero */

loc_0006C138: ;
    edx = ~edx;

loc_0006C13A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006C164; /* jne: not equal / not zero */

loc_0006C145: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006C19F; /* jge: greater or equal (signed >=) */

loc_0006C152: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0006C160; /* jne: not equal / not zero */

loc_0006C15E: ;
    edx = ~edx;

loc_0006C160: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C145; /* je: equal / zero */

loc_0006C164: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006C172; /* jne: not equal / not zero */

loc_0006C16C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0006C172: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006C17C; /* jne: not equal / not zero */

loc_0006C176: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0006C17C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006C187; /* jne: not equal / not zero */

loc_0006C181: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0006C187: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006C198; /* jne: not equal / not zero */

loc_0006C18C: ;
    /* nop */

loc_0006C190: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C190; /* je: equal / zero */

loc_0006C198: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006C1A4; /* jl: less (signed <) */

loc_0006C19F: ;
    eax = 0x12C;

loc_0006C1A4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006C1B0
 * Original: 0x0006C1B0 - 0x0006C1D2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C1B0: ;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(ecx + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x28) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0006C1D0; /* jl: less (signed <) */

loc_0006C1C3: ;
    MEM32(ecx + 0x20) = 0;
    eax = 6;
    esp += 4; return; /* ret */

loc_0006C1D0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0006C1E0
 * Original: 0x0006C1E0 - 0x0006C266 (134 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C1E0(void)
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

loc_0006C1E0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CA91C); /* fmul dword ptr [0x3ca91c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C97B8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c97b8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006C213; /* jne: not equal / not zero */

loc_0006C1F7: ;
    goto loc_0006C200;

    /* nop */

loc_0006C200: ;
    fp_top() = fp_top() - MEMF(0x3C97B8); /* fsub dword ptr [0x3c97b8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C97B8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c97b8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C200; /* je: equal / zero */

loc_0006C213: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006C233; /* jp: parity */

loc_0006C220: ;
    fp_top() = fp_top() + MEMF(0x3C97B8); /* fadd dword ptr [0x3c97b8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006C220; /* jnp: not parity */

loc_0006C233: ;
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    esp = esp - 8;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006C24Au); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0006C24A: ;
    esp = esp + 8;
    PUSH32(esp, 0x0006C252u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006C252: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0006C259; /* jge: greater or equal (signed >=) */

loc_0006C256: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0006C259: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006C265; /* jle: less or equal (signed <=) */

loc_0006C260: ;
    eax = 0xB4;

loc_0006C265: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C270
 * Original: 0x0006C270 - 0x0006C33D (205 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C270(void)
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

loc_0006C270: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0006C336; /* je: equal / zero */

loc_0006C280: ;
    fp_push(MEMF(esi)); /* fld float */
    esp = esp - 8;
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006C293u); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0006C293: ;
    esp = esp + 8;
    PUSH32(esp, 0x0006C29Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006C29B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8001u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006C2A9; /* jge: greater or equal (signed >=) */

loc_0006C2A2: ;
    eax = 0xFFFF8001u;
    goto loc_0006C2B5;

loc_0006C2A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006C2B5; /* jle: less or equal (signed <=) */

loc_0006C2B0: ;
    eax = 0x7FFF;

loc_0006C2B5: ;
    MEM16(edi + 0xE) = LO16(eax);
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006C2CDu); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0006C2CD: ;
    esp = esp + 8;
    PUSH32(esp, 0x0006C2D5u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006C2D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8001u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006C2E3; /* jge: greater or equal (signed >=) */

loc_0006C2DC: ;
    eax = 0xFFFF8001u;
    goto loc_0006C2EF;

loc_0006C2E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006C2EF; /* jle: less or equal (signed <=) */

loc_0006C2EA: ;
    eax = 0x7FFF;

loc_0006C2EF: ;
    MEM16(edi + 0x10) = LO16(eax);
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006C307u); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0006C307: ;
    esp = esp + 8;
    PUSH32(esp, 0x0006C30Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006C30F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF8001u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF8001u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006C326; /* jge: greater or equal (signed >=) */

loc_0006C316: ;
    eax = 0xFFFF8001u;
    MEM16(edi + 0x12) = LO16(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006C326: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006C332; /* jle: less or equal (signed <=) */

loc_0006C32D: ;
    eax = 0x7FFF;

loc_0006C332: ;
    MEM16(edi + 0x12) = LO16(eax);

loc_0006C336: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C340
 * Original: 0x0006C340 - 0x0006C392 (82 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C340: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0006C353; /* jne: not equal / not zero */

loc_0006C34C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006C353: ;
    eax = MEM32(edi);
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0006C361u); RECOMP_ABI_CALL(0x0006C1E0u, sub_0006C1E0); /* call 0x0006C1E0 */

loc_0006C361: ;
    MEM8(esi + 9) = LO8(eax);
    edx = MEM32(edi + 4);
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0006C373u); RECOMP_ABI_CALL(0x0006C1E0u, sub_0006C1E0); /* call 0x0006C1E0 */

loc_0006C373: ;
    MEM8(esi + 0xA) = LO8(eax);
    ecx = MEM32(edi + 8);
    edx = ecx;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, 0x0006C385u); RECOMP_ABI_CALL(0x0006C1E0u, sub_0006C1E0); /* call 0x0006C1E0 */

loc_0006C385: ;
    esp = esp + 0xC;
    MEM8(esi + 8) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006C3A0
 * Original: 0x0006C3A0 - 0x0006C3CF (47 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C3A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ebx, 1);
    if (TEST_Z(_fa, _fb)) goto loc_0006C3B6; /* je: equal / zero */

loc_0006C3AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C3B4u); RECOMP_ABI_CALL(0x0006C270u, sub_0006C270); /* call 0x0006C270 */

loc_0006C3B4: ;
    SET_LO8(ebx, LO8(eax));

loc_0006C3B6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C3C8; /* je: equal / zero */

loc_0006C3BE: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006C3C6u); RECOMP_ABI_CALL(0x0006C340u, sub_0006C340); /* call 0x0006C340 */

loc_0006C3C6: ;
    SET_LO8(ebx, LO8(ebx) & LO8(eax));

loc_0006C3C8: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006C3D0
 * Original: 0x0006C3D0 - 0x0006C401 (49 bytes, 17 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006C3D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006C3D0: ;
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xE);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x10);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x12);
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp) = edx;
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp) = eax;
    eax = MEM32(esp + 8);
    fp_push((double)SMEM32(esp)); /* fild */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C410
 * Original: 0x0006C410 - 0x0006C459 (73 bytes, 23 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006C410(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006C410: ;
    PUSH32(esp, ecx);
    eax = ZX8(MEM8(ecx + 9));
    edx = ZX8(MEM8(ecx + 0xA));
    MEM32(esp) = eax;
    eax = ZX8(MEM8(ecx + 8));
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp) = edx;
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp) = eax;
    eax = MEM32(esp + 8);
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C460
 * Original: 0x0006C460 - 0x0006C4C0 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C460(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006C460: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006C46Bu); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_0006C46B: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xE);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    MEM32(esp + 4) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x12);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEM32(esp + 4) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x42100000);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = eax;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax);
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0006C4BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C4BB: ;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C4C0
 * Original: 0x0006C4C0 - 0x0006C4E6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C4C0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006C4CE; /* jne: not equal / not zero */

loc_0006C4C7: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006C4CE: ;
    PUSH32(esp, 0x0006C4D3u); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_0006C4D3: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x2008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C4F0
 * Original: 0x0006C4F0 - 0x0006C518 (40 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C4F0: ;
    eax = MEM32(ecx + 0x19428);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006C50E; /* jl: less (signed <) */

loc_0006C502: ;
    eax = eax - esi;
    eax = eax + edx + -1;
    MEM32(ecx + 0x19428) = eax;

loc_0006C50E: ;
    MEM32(ecx + 0x19428) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006C520
 * Original: 0x0006C520 - 0x0006C560 (64 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C520: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C55B; /* je: equal / zero */

loc_0006C528: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x6E);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0006C55B; /* js: sign (negative) */

loc_0006C52F: ;
    SET_LO16(eax, MEM16(ecx + eax * 2 + 0x2EEC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C55B; /* je: equal / zero */

loc_0006C53C: ;
    eax = ZX16(LO16(eax));
    eax = eax + eax * 4;
    eax = ecx + eax * 4;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x11), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C55B; /* je: equal / zero */

loc_0006C54B: ;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    eax = eax + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edx;
    { uint32_t _icall_target = MEM32(esi + 0x10); PUSH32(esp, 0x0006C557u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C557: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006C55B: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006C560
 * Original: 0x0006C560 - 0x0006C6F7 (407 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C560(void)
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

loc_0006C560: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx + 0x354C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    SET_LO8(eax, 1);
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = LO8(eax);
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0006C6EF; /* jle: less or equal (signed <=) */

loc_0006C585: ;
    eax = ebx + 0x32F0;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_0006C590: ;
    ecx = MEM32(esp + 0x14);
    eax = ZX16(MEM16(ecx));
    edx = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM16(ebx + edx * 4 + 0x12);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + edx * 4 + 0x14);
    esi = ebx + edx * 4 + 4;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x12);
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x40);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ZX8(MEM8(esi + 9));
    edx = ZX8(MEM8(esi + 0xA));
    eax = ZX8(MEM8(esi + 8));
    MEM32(esp + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = edx;
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = eax;
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x4C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006C63A; /* jne: not equal / not zero */

loc_0006C633: ;
    ebp = 0x3C806C;
    goto loc_0006C650;

loc_0006C63A: ;
    PUSH32(esp, 0x0006C63Fu); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_0006C63F: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    ebp = edx + eax + 0x2008;

loc_0006C650: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006C65D; /* jne: not equal / not zero */

loc_0006C656: ;
    eax = 0x3C806C;
    goto loc_0006C673;

loc_0006C65D: ;
    PUSH32(esp, 0x0006C662u); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_0006C662: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x2008;

loc_0006C673: ;
    PUSH32(esp, 0);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006C686u); RECOMP_ABI_CALL(0x00068060u, sub_00068060); /* call 0x00068060 */

loc_0006C686: ;
    edi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C6C9; /* je: equal / zero */

loc_0006C68F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0006C697u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C697: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 0x10 (8-bit) */
    MEM8(esp + 0x13) = LO8(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0006C6C9; /* jne: not equal / not zero */

loc_0006C6A7: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0006C6AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C6AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C6C9; /* je: equal / zero */

loc_0006C6B2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0006C6B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C6B9: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0006C6C6u); RECOMP_ABI_CALL(0x00066B40u, sub_00066B40); /* call 0x00066B40 */

loc_0006C6C6: ;
    esp = esp + 4;

loc_0006C6C9: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 0x354C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0006C590; /* jl: less (signed <) */

loc_0006C6EB: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_0006C6EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006C700
 * Original: 0x0006C700 - 0x0006C710 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C700(void)
{

loc_0006C700: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(ecx + eax * 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006C710
 * Original: 0x0006C710 - 0x0006C76C (92 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C710: ;
    edx = ecx;
    eax = MEM32(edx + 0x98);
    eax = MEM32(edx + eax * 4 + 0x74);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xA0;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x98);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    MEM32(edx + 0x98) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0006C756; /* jl: less (signed <) */

loc_0006C74C: ;
    MEM32(edx + 0x98) = 0;

loc_0006C756: ;
    MEM32(edx + 0x9C) = MEM32(edx + 0x9C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xA4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xA4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C770
 * Original: 0x0006C770 - 0x0006C7CA (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C770: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x94) = esi;
    MEM32(ecx + 0x98) = esi;
    MEM32(ecx + 0x9C) = esi;
    edx = 0; /* xor self */
    goto loc_0006C790;

    /* nop */

loc_0006C790: ;
    eax = MEM32(ecx + 0x94);
    edi = MEM32(ecx + 0x9C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x9C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0006C7BC; /* jl: less (signed <) */

loc_0006C7AF: ;
    MEM32(ecx + 0x94) = esi;
    eax = 6;
    goto loc_0006C7BD;

loc_0006C7BC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006C7BD: ;
    MEM32(ecx + eax * 4 + 0x74) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006C790; /* jl: less (signed <) */

loc_0006C7C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C7D0
 * Original: 0x0006C7D0 - 0x0006C828 (88 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006C7D0: ;
    xml1_leader_zone_reset(ecx);
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(edx) = esi;
    PUSH32(esp, edi);
    MEM32(edx + 0x2EE8) = esi;
    MEM32(esp + 8) = esi;
    eax = edx + 0x2EEC;
    ecx = 0x200;
    edi = edi;

loc_0006C7F0: ;
    SET_LO16(edi, MEM16(esp + 8));
    MEM16(eax) = LO16(edi);
    eax = eax + 2;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0006C7F0; /* jne: not equal / not zero */

loc_0006C7FE: ;
    MEM32(edx + 0x354C) = esi;
    MEM32(edx + 0x37AC) = esi;
    eax = 0; /* xor self */
    edi = edx + 0x37B0;
    ecx = 0x80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = edx + 0x39B0;
    MEM32(edx) = eax;
    POP32(esp, edi);
    MEM32(edx + 4) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006C830
 * Original: 0x0006C830 - 0x0006CB68 (824 bytes, 240 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006C830(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006C830: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EEB0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    MEM8(esp + 0x13) = 1;
    PUSH32(esp, 0x0006C858u); RECOMP_ABI_CALL(0x0006C7D0u, sub_0006C7D0); /* call 0x0006C7D0 */

loc_0006C858: ;
    esi = MEM32(esp + 0x38);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C884; /* je: equal / zero */

loc_0006C862: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006C884; /* je: equal / zero */

loc_0006C867: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006C86Du); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0006C86D: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006C878u); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_0006C878: ;
    ecx = eax;
    PUSH32(esp, 0x0006C87Fu); RECOMP_ABI_CALL(0x00012B20u, sub_00012B20); /* call 0x00012B20 */

loc_0006C87F: ;
    MEM32(ebp) = eax;
    goto loc_0006C887;

loc_0006C884: ;
    MEM32(ebp) = ebx;

loc_0006C887: ;
    PUSH32(esp, 0x0006C88Cu); RECOMP_ABI_CALL(0x00152650u, sub_00152650); /* call 0x00152650 */

loc_0006C88C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0006C893u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C893: ;
    esi = eax;
    ecx = 0x80;
    edi = ebp + 0x37B0;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, 0x0006C8A7u); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_0006C8A7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0006C8AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C8AE: ;
    edx = MEM32(eax);
    ecx = ebp + 0x39B0;
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x48D8F8);
    ecx = esp + 0x1C;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x0006C8D5u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_0006C8D5: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E7048);
    PUSH32(esp, 1);
    MEM32(esp + 0x38) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0006C8E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C8E9: ;
    ecx = MEM32(esp + 0x14);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = 0x3C898C;
    PUSH32(esp, 0x0006C900u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_0006C900: ;
    ebx = eax;
    esp = esp + 8;
    MEM32(esp + 0x24) = ebx;
    MEM32(ebp + 0x2EE8) = MEM32(ebp + 0x2EE8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x2EE8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebx);
    esi = 0; /* xor self */
    ecx = ebx;
    MEM8(esp + 0x30) = 1;
    MEM32(esp + 0x18) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006C920u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C920: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0006CA48; /* jle: less or equal (signed <=) */

loc_0006C928: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0006C930u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C930: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006CA31; /* je: equal / zero */

loc_0006C93A: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006CA31; /* je: equal / zero */

loc_0006C945: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006CA31; /* je: equal / zero */

loc_0006C94F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0006C956u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C956: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C969; /* je: equal / zero */

loc_0006C95A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0006C961u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C961: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006CA31; /* jne: not equal / not zero */

loc_0006C969: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006C96Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C96F: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006C9A6; /* je: equal / zero */

loc_0006C98D: ;
    ecx = esi;
    PUSH32(esp, 0x0006C994u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0006C994: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006C9A6; /* jne: not equal / not zero */

loc_0006C999: ;
    _fa = (uint32_t)(MEM32(esi + 0x330)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x330), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CA31; /* jne: not equal / not zero */

loc_0006C9A6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0006C9ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006C9AC: ;
    edx = MEM32(0x4C257C);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006CA31; /* jne: not equal / not zero */

loc_0006C9CA: ;
    eax = MEM32(ebp + 0x2EE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x258) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x258 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CA31; /* je: equal / zero */

loc_0006C9D7: ;
    edi = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x2EE8) = edi;
    SET_LO16(ecx, MEM16(esi + 0x6E));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ecx), LO16(ecx) (16-bit) */
    MEM32(esp + 0x38) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0006C9FA; /* jle: less or equal (signed <=) */

loc_0006C9ED: ;
    ecx = SX16(LO16(ecx));
    MEM16(ebp + ecx * 2 + 0x2EEA) = LO16(eax);
    goto loc_0006CA1B;

loc_0006C9FA: ;
    ecx = MEM32(ebp + 0x354C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x12C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CA1B; /* je: equal / zero */

loc_0006CA08: ;
    SET_LO16(edx, MEM16(esp + 0x38));
    MEM16(ebp + ecx * 2 + 0x32F0) = LO16(edx);
    MEM32(ebp + 0x354C) = MEM32(ebp + 0x354C) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x354C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006CA1B: ;
    edx = MEM32(esi);
    eax = ZX16(LO16(eax));
    eax = eax + eax * 4;
    ecx = ebp + eax * 4 + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0006CA2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006CA2D: ;
    MEM8(esp + 0x13) = MEM8(esp + 0x13) & LO8(eax);

loc_0006CA31: ;
    esi = MEM32(esp + 0x18);
    edx = MEM32(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    MEM32(esp + 0x18) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006CA40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006CA40: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006C928; /* jl: less (signed <) */

loc_0006CA48: ;
    PUSH32(esp, 0x0006CA4Du); RECOMP_ABI_CALL(0x000ADAD0u, sub_000ADAD0); /* call 0x000ADAD0 */

loc_0006CA4D: ;
    edi = eax;
    ecx = MEM32(edi + 0x179C);
    edi = edi + 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0006CB26; /* jle: less or equal (signed <=) */

loc_0006CA62: ;
    edx = edi + 8;
    goto loc_0006CA70;

    /* nop */
    edi = edi;

loc_0006CA70: ;
    ecx = MEM32(ebp + 0x2EE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x258) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x258 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CB14; /* je: equal / zero */

loc_0006CA82: ;
    _fa = (uint32_t)(MEM32(ebp + 0x37AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x37AC), 0x12C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CB14; /* je: equal / zero */

loc_0006CA92: ;
    ebx = ecx;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x2EE8) = ebx;
    esi = MEM32(ebp + 0x37AC);
    SET_LO16(ebx, LO16(ecx));
    MEM16(ebp + esi * 2 + 0x3550) = LO16(ebx);
    esi = MEM32(ebp + 0x37AC);
    MEM32(esp + 0x38) = ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x37AC) = esi;
    esi = MEM32(edx + -8);
    ecx = ZX16(LO16(ecx));
    ecx = ecx + ecx * 4;
    MEM32(ebp + ecx * 4 + 4) = esi;
    esi = MEM32(edx + -4);
    MEM32(ebp + ecx * 4 + 8) = esi;
    SET_LO8(ebx, MEM8(edx));
    ecx = ebp + ecx * 4 + 4;
    MEM8(ecx + 8) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx + 1));
    MEM8(ecx + 9) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx + 2));
    MEM8(ecx + 0xA) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx + 3));
    MEM8(ecx + 0xB) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx + 4));
    MEM8(ecx + 0xC) = LO8(ebx);
    SET_LO8(ebx, MEM8(edx + 5));
    MEM8(ecx + 0xD) = LO8(ebx);
    SET_LO16(esi, MEM16(edx + 6));
    ebx = MEM32(esp + 0x24);
    MEM16(ecx + 0xE) = LO16(esi);
    SET_LO16(esi, MEM16(edx + 8));
    MEM16(ecx + 0x10) = LO16(esi);
    SET_LO16(esi, MEM16(edx + 0xA));
    MEM16(ecx + 0x12) = LO16(esi);

loc_0006CB14: ;
    ecx = MEM32(edi + 0x1798);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006CA70; /* jl: less (signed <) */

loc_0006CB26: ;
    SET_LO8(edx, MEM8(esp + 0x3C));
    PUSH32(esp, ebx);
    MEM8(ebp + 0x39B8) = LO8(edx);
    MEM8(esp + 0x34) = 0;
    PUSH32(esp, 0x0006CB3Bu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0006CB3B: ;
    esp = esp + 4;
    ecx = esp + 0x14;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0006CB4Fu); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_0006CB4F: ;
    ecx = MEM32(esp + 0x28);
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006CB70
 * Original: 0x0006CB70 - 0x0006CBEA (122 bytes, 35 insns)
 * CC: cdecl, 16 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CB70: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x19428);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006CBE6; /* je: equal / zero */

loc_0006CB7D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x39BC);
    SET_LO8(ecx, MEM8(eax + edi + -4));
    eax = eax + edi;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006CBE6; /* je: equal / zero */

loc_0006CB8D: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + -14780);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006CB9F; /* jne: not equal / not zero */

loc_0006CB98: ;
    eax = 0x3C806C;
    goto loc_0006CBB5;

loc_0006CB9F: ;
    PUSH32(esp, 0x0006CBA4u); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_0006CBA4: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x2008;

loc_0006CBB5: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006CBC0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0006CBC0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0006CBE6; /* je: equal / zero */

loc_0006CBC8: ;
    eax = MEM32(edi + 0x19428);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x39BC);
    ecx = eax + edi + -14780;
    PUSH32(esp, 0x0006CBE0u); RECOMP_ABI_CALL(0x0006C7D0u, sub_0006C7D0); /* call 0x0006C7D0 */

loc_0006CBE0: ;
    MEM32(edi + 0x19428) = MEM32(edi + 0x19428) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x19428)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006CBE6: ;
    POP32(esp, edi);
    esp += 68; return; /* ret 64 */

}

/**
 * sub_0006CBF0
 * Original: 0x0006CBF0 - 0x0006CC03 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CBF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006CBF0: ;
    eax = 0; /* xor self */
    MEM32(ecx + 0xA4) = eax;
    MEM32(ecx + 0xA0) = eax;
    g_seh_ebp = ebp; sub_0006C770(); return; /* tail jmp 0x0006C770 */

}

/**
 * sub_0006CC10
 * Original: 0x0006CC10 - 0x0006CC31 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CC10(void)
{

loc_0006CC10: ;
    eax = 0; /* xor self */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM16(ecx + 0xE) = LO16(eax);
    MEM16(ecx + 0x10) = LO16(eax);
    MEM16(ecx + 0x12) = LO16(eax);
    MEM8(ecx + 8) = 0xFF;
    MEM8(ecx + 0xA) = LO8(eax);
    MEM8(ecx + 9) = LO8(eax);
    MEM8(ecx + 0xD) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0006CC40
 * Original: 0x0006CC40 - 0x0006CC7A (58 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CC40(void)
{

loc_0006CC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0006CC4Eu); RECOMP_ABI_CALL(0x0006C710u, sub_0006C710); /* call 0x0006C710 */

loc_0006CC4E: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    eax = 0x3FFFFFFF;
    POP32(esp, edi);
    MEM32(ecx + esi + 0x10) = eax;
    MEM32(ecx + esi + 0x14) = eax;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006CC80
 * Original: 0x0006CC80 - 0x0006CD08 (136 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CC80(void)
{

loc_0006CC80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0006CC8Eu); RECOMP_ABI_CALL(0x0006C710u, sub_0006C710); /* call 0x0006C710 */

loc_0006CC8E: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    MEM32(ecx + esi + 0x10) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x14) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0006CCC3u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_0006CCC3: ;
    eax = MEM32(edi);
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    POP32(esp, edi);
    MEM32(esi + ecx * 4 + 0xB4) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006CD10
 * Original: 0x0006CD10 - 0x0006CDAF (159 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CD10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006CD10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x19428);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006CD3F; /* jle: less or equal (signed <=) */

loc_0006CD23: ;
    PUSH32(esp, ebp);
    ebp = esi;

loc_0006CD26: ;
    ecx = ebp;
    PUSH32(esp, 0x0006CD2Du); RECOMP_ABI_CALL(0x0006C7D0u, sub_0006C7D0); /* call 0x0006C7D0 */

loc_0006CD2D: ;
    eax = MEM32(esi + 0x19428);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x39BC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006CD26; /* jl: less (signed <) */

loc_0006CD3E: ;
    POP32(esp, ebp);

loc_0006CD3F: ;
    ecx = esi + 0x19438;
    MEM32(esi + 0x19430) = 0x3FFFFFFF;
    MEM32(ecx + 0xA4) = ebx;
    MEM32(ecx + 0xA0) = ebx;
    PUSH32(esp, 0x0006CD60u); RECOMP_ABI_CALL(0x0006C770u, sub_0006C770); /* call 0x0006C770 */

loc_0006CD60: ;
    MEM32(esi + 0x19428) = ebx;
    MEM8(esi + 0x19684) = LO8(ebx);
    PUSH32(esp, 0x0006CD71u); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_0006CD71: ;
    edx = eax;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CD7E; /* jne: not equal / not zero */

loc_0006CD7A: ;
    MEM32(edx) = ebx;
    goto loc_0006CD81;

loc_0006CD7E: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = eax;

loc_0006CD81: ;
    esi = edx + 4;
    edi = esi;
    ecx = 0x800;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(esi) = 1;
    POP32(esp, esi);
    MEM8(edx + 0x2008) = LO8(ebx);
    MEM8(edx + 0x2009) = LO8(ebx);
    MEM32(edx + 0x2004) = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006CDB0
 * Original: 0x0006CDB0 - 0x0006CED6 (294 bytes, 98 insns)
 * CC: cdecl, 16 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CDB0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    edi = ecx;
    edx = eax + 1;
    /* nop */

loc_0006CDC0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006CDC0; /* jne: not equal / not zero */

loc_0006CDC7: ;
    eax = eax - edx;
    MEM32(esp + 0x10) = eax;
    if ((eax == 0)) goto loc_0006CECB; /* je: equal / zero */

loc_0006CDD3: ;
    PUSH32(esp, 0x0006CDD8u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0006CDD8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0006CDE2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006CDE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006CECB; /* jne: not equal / not zero */

loc_0006CDEA: ;
    esp = esp - 0x40;
    esi = esp;
    PUSH32(esp, 0x40);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006CDFCu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006CDFC: ;
    esp = esp + 0xC;
    ecx = edi;
    MEM8(esi + 0x3F) = 0;
    PUSH32(esp, 0x0006CE0Au); RECOMP_ABI_CALL(0x0006CB70u, sub_0006CB70); /* call 0x0006CB70 */

loc_0006CE0A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0006CE18u); RECOMP_ABI_CALL(0x000670B0u, sub_000670B0); /* call 0x000670B0 */

loc_0006CE18: ;
    edx = MEM32(edi + 0x19430);
    esi = edi + 0x1942C;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006CE31u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0006CE31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CE7D; /* jne: not equal / not zero */

loc_0006CE38: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CE7D; /* jne: not equal / not zero */

loc_0006CE3C: ;
    eax = MEM32(edi + 0x19428);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CECB; /* je: equal / zero */

loc_0006CE4B: ;
    MEM32(esp + 0xC) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0006CE58u); RECOMP_ABI_CALL(0x0006C4F0u, sub_0006C4F0); /* call 0x0006C4F0 */

loc_0006CE58: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0006CE66u); RECOMP_ABI_CALL(0x000670B0u, sub_000670B0); /* call 0x000670B0 */

loc_0006CE66: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006CE77u); RECOMP_ABI_CALL(0x0006CC80u, sub_0006CC80); /* call 0x0006CC80 */

loc_0006CE77: ;
    esi = MEM32(esp + 0xC);
    goto loc_0006CE84;

loc_0006CE7D: ;
    esi = MEM32(esi + eax * 4 + 0xB4);

loc_0006CE84: ;
    PUSH32(esp, 0x0006CE89u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0006CE89: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0006CE93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006CE93: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x39BC);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = ecx + edi;
    PUSH32(esp, 0x0006CEA8u); RECOMP_ABI_CALL(0x0006C830u, sub_0006C830); /* call 0x0006C830 */

loc_0006CEA8: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    SET_LO8(ebx, LO8(eax));
    eax = esp;
    MEM32(eax) = ecx;
    ecx = edi + 0x19500;
    PUSH32(esp, 0x0006CEC0u); RECOMP_ABI_CALL(0x00086260u, sub_00086260); /* call 0x00086260 */

loc_0006CEC0: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 68; return; /* ret 64 */

loc_0006CECB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 68; return; /* ret 64 */

}

/**
 * sub_0006CEE0
 * Original: 0x0006CEE0 - 0x0006CFA9 (201 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006CEE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x1770);
    esi = edi + 0x1770;
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CF19; /* jne: not equal / not zero */

loc_0006CEF9: ;
    /* nop */

loc_0006CF00: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006CF86; /* jge: greater or equal (signed >=) */

loc_0006CF0D: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = MEM32(esi + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006CF00; /* je: equal / zero */

loc_0006CF19: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006CF27; /* jne: not equal / not zero */

loc_0006CF21: ;
    eax = eax + 0x10;
    ecx = ecx >> 0x10;

loc_0006CF27: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006CF31; /* jne: not equal / not zero */

loc_0006CF2B: ;
    eax = eax + 8;
    ecx = ecx >> 8;

loc_0006CF31: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006CF3C; /* jne: not equal / not zero */

loc_0006CF36: ;
    eax = eax + 4;
    ecx = ecx >> 4;

loc_0006CF3C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006CF49; /* jne: not equal / not zero */

loc_0006CF41: ;
    ecx = ecx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006CF41; /* je: equal / zero */

loc_0006CF49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006CF86; /* jge: greater or equal (signed >=) */

loc_0006CF50: ;
    edx = eax + eax * 4;
    ecx = edi + edx * 4;
    MEM32(ecx) = ebx;
    MEM32(ecx + 4) = ebx;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ecx + 0xE) = LO16(ebx);
    MEM16(ecx + 0x10) = LO16(ebx);
    MEM16(ecx + 0x12) = LO16(ebx);
    MEM8(ecx + 8) = 0xFF;
    MEM8(ecx + 0xA) = LO8(ebx);
    MEM8(ecx + 9) = LO8(ebx);
    MEM8(ecx + 0xD) = LO8(ebx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006CF7Fu); RECOMP_ABI_CALL(0x0006C110u, sub_0006C110); /* call 0x0006C110 */

loc_0006CF7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006CF50; /* jl: less (signed <) */

loc_0006CF86: ;
    eax = 0; /* xor self */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006CFB0
 * Original: 0x0006CFB0 - 0x0006D052 (162 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006CFB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006CFB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x0006CFBBu); RECOMP_ABI_CALL(0x000ADAD0u, sub_000ADAD0); /* call 0x000ADAD0 */

loc_0006CFBB: ;
    esi = eax;
    esi = esi + 4;
    ecx = esi;
    PUSH32(esp, 0x0006CFC7u); RECOMP_ABI_CALL(0x0006CEE0u, sub_0006CEE0); /* call 0x0006CEE0 */

loc_0006CFC7: ;
    ebp = 0; /* xor self */
    MEM32(esi + 0x1798) = ebp;
    _fa = (uint32_t)(MEM32(ebx + 0x37AC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x37AC), ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0006D04D; /* jle: less or equal (signed <=) */

loc_0006CFD7: ;
    eax = ebx + 0x3550;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);

loc_0006CFE2: ;
    ecx = MEM32(esp + 0x10);
    eax = ZX16(MEM16(ecx));
    edi = MEM32(esi + 0x1798);
    edx = eax + eax * 4;
    eax = ebx + edx * 4 + 4;
    ecx = edi + edi * 4;
    PUSH32(esp, eax);
    edx = esi + ecx * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0006D003u); RECOMP_ABI_CALL(0x000AD730u, sub_000AD730); /* call 0x000AD730 */

loc_0006D003: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esi + eax * 4 + 0x1770);
    eax = esi + eax * 4 + 0x1770;
    esp = esp + 8;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    edi = MEM32(esi + 0x1798);
    ecx = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1798) = edi;
    eax = MEM32(ebx + 0x37AC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0006CFE2; /* jl: less (signed <) */

loc_0006D04C: ;
    POP32(esp, edi);

loc_0006D04D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006D060
 * Original: 0x0006D060 - 0x0006D07F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D060: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CCC48;
    if (TEST_Z(_fa, _fb)) goto loc_0006D079; /* je: equal / zero */

loc_0006D070: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006D076u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0006D076: ;
    esp = esp + 4;

loc_0006D079: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006D080
 * Original: 0x0006D080 - 0x0006D087 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D080(void)
{

loc_0006D080: ;
    MEM32(ecx) = 0x3CCC48;
    esp += 4; return; /* ret */

}

/**
 * sub_0006D090
 * Original: 0x0006D090 - 0x0006D0AE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D090: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006D098u); RECOMP_ABI_CALL(0x0006D080u, sub_0006D080); /* call 0x0006D080 */

loc_0006D098: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D0A8; /* je: equal / zero */

loc_0006D09F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006D0A5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0006D0A5: ;
    esp = esp + 4;

loc_0006D0A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006D0B0
 * Original: 0x0006D0B0 - 0x0006D18E (222 bytes, 72 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D0B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EED0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006D0CFu); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_0006D0CF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0006D0D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D0D8: ;
    PUSH32(esp, 0x0006D0DDu); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_0006D0DD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0006D0E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D0E6: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0006D0FCu); RECOMP_ABI_CALL(0x000A2A10u, sub_000A2A10); /* call 0x000A2A10 */

loc_0006D0FC: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, 2);
    MEM32(esp + 0x28) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0006D111u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D111: ;
    ecx = MEM32(esp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = 0x3C898C;
    PUSH32(esp, 0x0006D128u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_0006D128: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x14) = esi;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x20) = 1;
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006D13Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D13E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0006D15E; /* jle: less or equal (signed <=) */

loc_0006D142: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0006D14Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D14A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0006D153u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D153: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0006D15Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D15A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006D142; /* jl: less (signed <) */

loc_0006D15E: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x24) = 0;
    PUSH32(esp, 0x0006D169u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0006D169: ;
    esp = esp + 4;
    ecx = esp + 8;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0006D17Du); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_0006D17D: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0006D190
 * Original: 0x0006D190 - 0x0006D1CA (58 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D190: ;
    SET_LO8(ecx, MEM8(0x498DA8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006D1C4; /* jne: not equal / not zero */

loc_0006D19F: ;
    edx = MEM32(0x498DA8);
    edx = edx | eax;
    PUSH32(esp, 0x359EB0);
    MEM32(0x498DA8) = edx;
    MEM32(0x498DA4) = 0x3CCC60;
    PUSH32(esp, 0x0006D1C1u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0006D1C1: ;
    esp = esp + 4;

loc_0006D1C4: ;
    eax = 0x498DA4;
    esp += 4; return; /* ret */

}

/**
 * sub_0006D1D0
 * Original: 0x0006D1D0 - 0x0006D6A9 (1241 bytes, 350 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D1D0(void)
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

loc_0006D1D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EEFE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x98);
    PUSH32(esp, edi);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0006D202u); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_0006D202: ;
    esi = esi + 0x20;
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0006D20Fu); RECOMP_ABI_CALL(0x00011FD0u, sub_00011FD0); /* call 0x00011FD0 */

loc_0006D20F: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(0x3CCC74); /* fmul dword ptr [0x3ccc74] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = MEM32(esp + 0x10);
    fp_top() = fp_top() * MEMF(0x3CCC74); /* fmul dword ptr [0x3ccc74] */
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() * MEMF(0x3CCC74); /* fmul dword ptr [0x3ccc74] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D277u); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_0006D277: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    ecx = esp + 0x60;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D2B3u); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_0006D2B3: ;
    PUSH32(esp, 0x443B8000);
    PUSH32(esp, 0x443B8000);
    PUSH32(esp, 0x443B8000);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x0006D2CBu); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_0006D2CB: ;
    PUSH32(esp, 0x437A0000);
    PUSH32(esp, 0x437A0000);
    PUSH32(esp, 0x437A0000);
    ecx = esp + 0x50;
    PUSH32(esp, 0x0006D2E3u); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_0006D2E3: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    ecx = esp + 0x3C;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D31Fu); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_0006D31F: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    ecx = MEM32(esp + 0x38);
    fp_top() = fp_top() - MEMF(esp + 0x58); /* fsub dword ptr [esp + 0x58] */
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x74) = ecx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x60)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() - MEMF(esp + 0x58); /* fsub dword ptr [esp + 0x58] */
    MEM32(esp + 0x7C) = edx;
    MEM32(esp + 0x80) = eax;
    ecx = esp + 0x3C;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x60)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() - MEMF(esp + 0x58); /* fsub dword ptr [esp + 0x58] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D376u); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_0006D376: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006D38D; /* jne: not equal / not zero */

loc_0006D385: ;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x74) = ecx;

loc_0006D38D: ;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006D3A4; /* jne: not equal / not zero */

loc_0006D39C: ;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x78) = edx;

loc_0006D3A4: ;
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006D3BB; /* jne: not equal / not zero */

loc_0006D3B3: ;
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x7C) = eax;

loc_0006D3BB: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x48)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    ecx = esp + 0x3C;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x48)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D3F7u); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_0006D3F7: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x64); /* fadd dword ptr [esp + 0x64] */
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x80) = ecx;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    ecx = MEM32(esp + 0x18);
    fp_top() = fp_top() + MEMF(esp + 0x60); /* fadd dword ptr [esp + 0x60] */
    PUSH32(esp, ecx);
    MEM32(esp + 0x88) = edx;
    MEM32(esp + 0x8C) = eax;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 0x54)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() + MEMF(esp + 0x64); /* fadd dword ptr [esp + 0x64] */
    ecx = esp + 0x40;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D454u); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_0006D454: ;
    fp_push(MEMF(esp + 0x80)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006D471; /* jp: parity */

loc_0006D466: ;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x80) = ecx;

loc_0006D471: ;
    fp_push(MEMF(esp + 0x84)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006D48E; /* jp: parity */

loc_0006D483: ;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x84) = edx;

loc_0006D48E: ;
    fp_push(MEMF(esp + 0x88)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006D4AB; /* jp: parity */

loc_0006D4A0: ;
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x88) = eax;

loc_0006D4AB: ;
    PUSH32(esp, 0x0006D4B0u); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_0006D4B0: ;
    edx = MEM32(eax);
    ecx = esp + 0x74;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0006D4BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D4BF: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0006D4D1u); RECOMP_ABI_CALL(0x000A2A10u, sub_000A2A10); /* call 0x000A2A10 */

loc_0006D4D1: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, 1);
    MEM32(esp + 0x9C) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0006D4E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D4E5: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0006D4F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D4F2: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0006D4FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D4FE: ;
    edx = MEM32(esp + 0xC);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 0x3C898C;
    PUSH32(esp, 0x0006D515u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_0006D515: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x1C) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x94) = 1;
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0006D52Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D52E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0006D54E; /* jle: less or equal (signed <=) */

loc_0006D532: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0006D53Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D53A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0006D543u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D543: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0006D54Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D54A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006D532; /* jl: less (signed <) */

loc_0006D54E: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x98) = LO8(ebx);
    PUSH32(esp, 0x0006D55Bu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0006D55B: ;
    esp = esp + 4;
    PUSH32(esp, 0x43C80000);
    PUSH32(esp, 0x43C80000);
    PUSH32(esp, 0x43C80000);
    ecx = esp + 0x74;
    PUSH32(esp, 0x0006D576u); RECOMP_ABI_CALL(0x00012010u, sub_00012010); /* call 0x00012010 */

loc_0006D576: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x68); /* fsub dword ptr [esp + 0x68] */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x6C); /* fsub dword ptr [esp + 0x6c] */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x7C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x70); /* fsub dword ptr [esp + 0x70] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x68)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x80); /* fadd dword ptr [esp + 0x80] */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x84); /* fadd dword ptr [esp + 0x84] */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x88); /* fadd dword ptr [esp + 0x88] */
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0006D5D5u); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_0006D5D5: ;
    edx = MEM32(eax);
    ecx = esp + 0x74;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0006D5E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D5E3: ;
    ecx = MEM32(esp + 0xC);
    eax = esp + 0x14;
    MEM32(esp + 0x14) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0006D5F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D5F5: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0006D602u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D602: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0006D60Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D60F: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0006D61Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D61C: ;
    ecx = MEM32(esp + 0xC);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = 0x3C898C;
    PUSH32(esp, 0x0006D633u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_0006D633: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x14) = esi;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x94) = 2;
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006D64Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D64C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0006D66B; /* jle: less or equal (signed <=) */

loc_0006D650: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0006D658u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D658: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0006D660u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D660: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0006D667u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D667: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006D650; /* jl: less (signed <) */

loc_0006D66B: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x98) = LO8(ebx);
    PUSH32(esp, 0x0006D678u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0006D678: ;
    esp = esp + 4;
    ecx = esp + 0xC;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0006D68Fu); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_0006D68F: ;
    ecx = MEM32(esp + 0x8C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x8C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006D6B0
 * Original: 0x0006D6B0 - 0x0006D6FD (77 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D6B0(void)
{

loc_0006D6B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + 0x10C));
    MEM16(eax + 0x10C) = LO16(edx);
    SET_LO8(edx, MEM8(ecx + 0x10E));
    MEM8(eax + 0x10E) = LO8(edx);
    edx = MEM32(0x3DD054);
    PUSH32(esp, esi);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x108);
    esi = ecx + 8;
    edi = eax + 8;
    ecx = 0x40;
    MEM32(eax + 0x108) = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006D700
 * Original: 0x0006D700 - 0x0006D71F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D700: ;
    eax = MEM32(0x498DAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D71E; /* je: equal / zero */

loc_0006D709: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006D711u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0006D711: ;
    esp = esp + 8;
    MEM32(0x498DAC) = 0;

loc_0006D71E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006D720
 * Original: 0x0006D720 - 0x0006D85D (317 bytes, 110 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D720(void)
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

loc_0006D720: ;
    esp = esp - 8;
    edx = MEM32(0x3DD050);
    PUSH32(esp, esi);
    esi = ecx;
    eax = ZX16(MEM16(esi + 0x10C));
    ecx = ZX8(MEM8(esi + 0x10E));
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 4) = ecx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = fp_top() * MEMF(0x3CCC84); /* fmul dword ptr [0x3ccc84] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D854; /* je: equal / zero */

loc_0006D760: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D784; /* je: equal / zero */

loc_0006D76B: ;
    PUSH32(esp, 0x0006D770u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0006D770: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0006D77Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D77B: ;
    edx = MEM32(0x3DD054);
    MEM32(esi + 4) = edx;

loc_0006D784: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    SET_LO8(eax, MEM8(esi + 0x10F));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006D813; /* jp: parity */

loc_0006D79B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D7D5; /* je: equal / zero */

loc_0006D79F: ;
    PUSH32(esp, 0x0006D7A4u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0006D7A4: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43160000);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0006D7C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D7C2: ;
    MEM32(esi + 4) = eax;
    MEM8(esi + 0x10F) = MEM8(esi + 0x10F) | 2;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0006D7D5: ;
    PUSH32(esp, 0x0006D7DAu); RECOMP_ABI_CALL(0x0007A660u, sub_0007A660); /* call 0x0007A660 */

loc_0006D7DA: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006D7E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D7E3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D84B; /* je: equal / zero */

loc_0006D7E7: ;
    PUSH32(esp, 0x0006D7ECu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0006D7EC: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43160000);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0006D80Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D80A: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0006D813: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D82A; /* je: equal / zero */

loc_0006D817: ;
    PUSH32(esp, 0x0006D81Cu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0006D81C: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0006D828u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D828: ;
    goto loc_0006D7C2;

loc_0006D82A: ;
    PUSH32(esp, 0x0006D82Fu); RECOMP_ABI_CALL(0x0007A660u, sub_0007A660); /* call 0x0007A660 */

loc_0006D82F: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0006D838u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D838: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D84B; /* je: equal / zero */

loc_0006D83C: ;
    PUSH32(esp, 0x0006D841u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0006D841: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0006D84Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D84B: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0006D854: ;
    SET_LO8(eax, 0); /* xor self */
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
 * sub_0006D860
 * Original: 0x0006D860 - 0x0006D8B2 (82 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D860: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0006D8A6; /* je: equal / zero */

loc_0006D86C: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D8A6; /* je: equal / zero */

loc_0006D871: ;
    SET_LO8(eax, MEM8(esi + 0x10F));
    SET_LO8(edx, MEM8(esi + 0x10F));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(esi + 0x10F) = LO8(edx);
    PUSH32(esp, 0x0006D893u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0006D893: ;
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0006D89Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D89E: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0006D8A6: ;
    eax = MEM32(0x3DD050);
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006D8C0
 * Original: 0x0006D8C0 - 0x0006D90C (76 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D8C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0006D8FD; /* je: equal / zero */

loc_0006D8CC: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D8FD; /* je: equal / zero */

loc_0006D8D1: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x110) = edi;
    PUSH32(esp, 0x0006D8E1u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0006D8E1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0006D8E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D8E8: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0006D8F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D8F1: ;
    POP32(esp, edi);
    MEM32(esi + 0x108) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0006D8FD: ;
    MEM32(esi + 0x108) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006D910
 * Original: 0x0006D910 - 0x0006D9A9 (153 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D910: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x300 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0006D927; /* jl: less (signed <) */

loc_0006D91E: ;
    eax = 0x300;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0006D927: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0006D93A; /* jne: not equal / not zero */

loc_0006D938: ;
    edx = ~edx;

loc_0006D93A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006D964; /* jne: not equal / not zero */

loc_0006D945: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x300 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006D99F; /* jge: greater or equal (signed >=) */

loc_0006D952: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0006D960; /* jne: not equal / not zero */

loc_0006D95E: ;
    edx = ~edx;

loc_0006D960: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D945; /* je: equal / zero */

loc_0006D964: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006D972; /* jne: not equal / not zero */

loc_0006D96C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0006D972: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006D97C; /* jne: not equal / not zero */

loc_0006D976: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0006D97C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006D987; /* jne: not equal / not zero */

loc_0006D981: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0006D987: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006D998; /* jne: not equal / not zero */

loc_0006D98C: ;
    /* nop */

loc_0006D990: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D990; /* je: equal / zero */

loc_0006D998: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x300 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006D9A4; /* jl: less (signed <) */

loc_0006D99F: ;
    eax = 0x300;

loc_0006D9A4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006D9B0
 * Original: 0x0006D9B0 - 0x0006DA0C (92 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006D9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006D9B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006D9EA; /* je: equal / zero */

loc_0006D9BA: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006D9EA; /* je: equal / zero */

loc_0006D9BF: ;
    PUSH32(esp, 0x100);
    esi = ecx + 8;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006D9CEu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006D9CE: ;
    esp = esp + 0xC;
    MEM8(esi + 0xFF) = 0;
    PUSH32(esp, 0x0006D9DDu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0006D9DD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0006D9E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006D9E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0006D9EA: ;
    PUSH32(esp, 0x100);
    esi = ecx + 8;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006D9FDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006D9FD: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    MEM8(esi + 0xFF) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006DA10
 * Original: 0x0006DA10 - 0x0006DA59 (73 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DA10: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006DA58; /* je: equal / zero */

loc_0006DA1A: ;
    edx = MEM32(0x3DD050);
    MEM32(eax) = edx;
    edx = MEM32(0x3DD054);
    MEM32(eax + 4) = edx;
    MEM8(eax + 8) = LO8(ecx);
    MEM32(eax + 0x108) = ecx;
    SET_LO16(ecx, MEM16(0x44D7BC));
    MEM16(eax + 0x10C) = LO16(ecx);
    SET_LO8(ecx, MEM8(eax + 0x10F));
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    MEM8(eax + 0x10E) = 0xFF;
    MEM8(eax + 0x10F) = LO8(ecx);

loc_0006DA58: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DA60
 * Original: 0x0006DA60 - 0x0006DAC2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DA60: ;
    edx = ecx;
    eax = MEM32(edx + 0x34868);
    eax = MEM32(edx + eax * 4 + 0x33C60);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x34870;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x34868);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x300 (32-bit) */
    MEM32(edx + 0x34868) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0006DAAC; /* jl: less (signed <) */

loc_0006DAA2: ;
    MEM32(edx + 0x34868) = 0;

loc_0006DAAC: ;
    MEM32(edx + 0x3486C) = MEM32(edx + 0x3486C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x3486C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x348D0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x348D0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DAD0
 * Original: 0x0006DAD0 - 0x0006DB20 (80 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DAD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006DB1A; /* je: equal / zero */

loc_0006DADD: ;
    PUSH32(esp, 0x0006DAE2u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0006DAE2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0006DAE9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006DAE9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x108);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0006DB14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006DB14: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0006DB1A: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006DB20
 * Original: 0x0006DB20 - 0x0006DB64 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB20(void)
{

loc_0006DB20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0006DB29u); RECOMP_ABI_CALL(0x0006DA60u, sub_0006DA60); /* call 0x0006DA60 */

loc_0006DB29: ;
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x114);
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006DB39u); RECOMP_ABI_CALL(0x0006DA10u, sub_0006DA10); /* call 0x0006DA10 */

loc_0006DB39: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x33C00;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + edi * 4 + 0x348D4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DB70
 * Original: 0x0006DB70 - 0x0006DBF2 (130 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DB70: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = ecx << 2;
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax + 0x33C00);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0x33C00) = edi;
    MEM32(ecx + eax + 0x34870) = MEM32(ecx + eax + 0x34870) & edx;
    ecx = MEM32(eax + 0x34864);
    edx = MEM32(eax + 0x3486C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x300 (32-bit) */
    MEM32(eax + 0x34864) = ecx;
    MEM32(eax + 0x3486C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0006DBD8; /* jl: less (signed <) */

loc_0006DBC7: ;
    MEM32(eax + 0x34864) = 0;
    ecx = 0x2FF;
    goto loc_0006DBD9;

loc_0006DBD8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006DBD9: ;
    MEM32(eax + ecx * 4 + 0x33C60) = esi;
    ecx = MEM32(eax + 0x348D0);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x348D0) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006DC00
 * Original: 0x0006DC00 - 0x0006DC62 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DC00: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x34864) = esi;
    MEM32(ecx + 0x34868) = esi;
    MEM32(ecx + 0x3486C) = esi;
    edx = 0; /* xor self */
    goto loc_0006DC20;

    /* nop */

loc_0006DC20: ;
    eax = MEM32(ecx + 0x34864);
    edi = MEM32(ecx + 0x3486C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x300 (32-bit) */
    MEM32(ecx + 0x34864) = eax;
    MEM32(ecx + 0x3486C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0006DC4E; /* jl: less (signed <) */

loc_0006DC41: ;
    MEM32(ecx + 0x34864) = esi;
    eax = 0x2FF;
    goto loc_0006DC4F;

loc_0006DC4E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0006DC4F: ;
    MEM32(ecx + eax * 4 + 0x33C60) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x300 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006DC20; /* jl: less (signed <) */

loc_0006DC5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DC70
 * Original: 0x0006DC70 - 0x0006DCFA (138 bytes, 58 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DC70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    edi = esi + 8;
    if (TEST_Z(_fa, _fb)) goto loc_0006DC92; /* je: equal / zero */

loc_0006DC7F: ;
    PUSH32(esp, 0x0006DC84u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0006DC84: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0006DC8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006DC8E: ;
    SET_LO8(ebx, 1);
    goto loc_0006DC94;

loc_0006DC92: ;
    SET_LO8(ebx, 0); /* xor self */

loc_0006DC94: ;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1C), 1 (8-bit) */
    edi = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_0006DCA9; /* jne: not equal / not zero */

loc_0006DC9F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0006DCA7u); RECOMP_ABI_CALL(0x0006D720u, sub_0006D720); /* call 0x0006D720 */

loc_0006DCA7: ;
    SET_LO8(ebx, LO8(ebx) | LO8(eax));

loc_0006DCA9: ;
    eax = MEM32(esi + 0x108);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006DCF0; /* je: equal / zero */

loc_0006DCB3: ;
    PUSH32(esp, 0x0006DCB8u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0006DCB8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0006DCBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006DCBF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x20);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x108);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0006DCE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006DCE6: ;
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_0006DCF0: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0006DD00
 * Original: 0x0006DD00 - 0x0006DD4E (78 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DD00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0006DD00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x354D4);
    esi = esi & MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0006DD16u); RECOMP_ABI_CALL(0x0006DB70u, sub_0006DB70); /* call 0x0006DB70 */

loc_0006DD16: ;
    ecx = MEM32(edi + 0x354D8);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0x348D4) = MEM32(edi + esi * 4 + 0x348D4) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0x348D4) >= 0)) goto loc_0006DD49; /* jns: not sign (positive) */

loc_0006DD2C: ;
    MEM32(edi + esi * 4 + 0x348D4) = esi;
    ecx = MEM32(edi + 0x354D8);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0x348D4) = edx;

loc_0006DD49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006DD50
 * Original: 0x0006DD50 - 0x0006DDF5 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DD50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    ecx = 0x18;
    edi = esi + 0x33C00;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x34864) = ebx;
    MEM32(esi + 0x34868) = ebx;
    MEM32(esi + 0x3486C) = ebx;
    ecx = 0x18;
    edi = esi + 0x34870;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x348D0) = ebx;
    PUSH32(esp, 0x0006DD92u); RECOMP_ABI_CALL(0x0006DC00u, sub_0006DC00); /* call 0x0006DC00 */

loc_0006DD92: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x354D4) = ebx;
    MEM32(esi + 0x354D8) = ebx;
    ecx = 0x2FF;
    edx = 0; /* xor self */

loc_0006DDA7: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006DDA7; /* jne: not equal / not zero */

loc_0006DDB3: ;
    MEM32(esi + 0x354D4) = eax;
    MEM32(esi + 0x354D8) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x348D4;
    goto loc_0006DDD0;

    /* nop */

loc_0006DDD0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x354D8);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x300 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006DDD0; /* jl: less (signed <) */

loc_0006DDEF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DE00
 * Original: 0x0006DE00 - 0x0006DE46 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DE00: ;
    eax = MEM32(0x498DAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006DE45; /* jne: not equal / not zero */

loc_0006DE09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x354DC);
    PUSH32(esp, 0x0006DE18u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0006DE18: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006DE2A; /* je: equal / zero */

loc_0006DE21: ;
    ecx = esi;
    PUSH32(esp, 0x0006DE28u); RECOMP_ABI_CALL(0x0006DD50u, sub_0006DD50); /* call 0x0006DD50 */

loc_0006DE28: ;
    goto loc_0006DE2C;

loc_0006DE2A: ;
    esi = 0; /* xor self */

loc_0006DE2C: ;
    PUSH32(esp, 0x6D700);
    MEM32(0x498DAC) = esi;
    PUSH32(esp, 0x0006DE3Cu); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_0006DE3C: ;
    eax = MEM32(0x498DAC);
    esp = esp + 4;
    POP32(esp, esi);

loc_0006DE45: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DE50
 * Original: 0x0006DE50 - 0x0006DE77 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DE50: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006DE73; /* je: equal / zero */

loc_0006DE57: ;
    PUSH32(esp, 0x0006DE5Cu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006DE5C: ;
    ecx = MEM32(eax + 0x354D4);
    ecx = ecx & esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x114);
    eax = MEM32(ecx + eax + 0x108);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006DE73: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DE80
 * Original: 0x0006DE80 - 0x0006DED0 (80 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DE80: ;
    esp = esp - 0x100;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006DEC3; /* je: equal / zero */

loc_0006DE8D: ;
    PUSH32(esp, 0x0006DE92u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006DE92: ;
    ecx = MEM32(eax + 0x354D4);
    ecx = ecx & esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x114);
    edx = ecx + eax + 8;
    PUSH32(esp, 0x100);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006DEB4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006DEB4: ;
    esp = esp + 0xC;
    eax = esp + 4;
    POP32(esp, esi);
    esp = esp + 0x100;
    esp += 4; return; /* ret */

loc_0006DEC3: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_0006DED0
 * Original: 0x0006DED0 - 0x0006DF2E (94 bytes, 35 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DED0: ;
    esp = esp - 0xC;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006DF25; /* je: equal / zero */

loc_0006DEDA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006DEE0u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006DEE0: ;
    esi = MEM32(eax + 0x354D4);
    esi = esi & edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x114);
    esi = esi + eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006DEFFu); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0006DEFF: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    esp = esp + 8;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0006DF1Du); RECOMP_ABI_CALL(0x0006DC70u, sub_0006DC70); /* call 0x0006DC70 */

loc_0006DF1D: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 20; return; /* ret 16 */

loc_0006DF25: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0006DF30
 * Original: 0x0006DF30 - 0x0006DF8B (91 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DF30: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006DF89; /* je: equal / zero */

loc_0006DF37: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006DF3Du); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006DF3D: ;
    esi = MEM32(eax + 0x354D4);
    esi = esi & edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x114);
    esi = esi + eax;
    _fa = (uint32_t)(MEM8(esi + 0x10F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10F), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006DF88; /* je: equal / zero */

loc_0006DF56: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006DF88; /* je: equal / zero */

loc_0006DF61: ;
    PUSH32(esp, 0x0006DF66u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0006DF66: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0006DF71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006DF71: ;
    SET_LO8(eax, MEM8(esi + 0x10F));
    edx = MEM32(0x3DD054);
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM32(esi + 4) = edx;
    MEM8(esi + 0x10F) = LO8(eax);

loc_0006DF88: ;
    POP32(esp, esi);

loc_0006DF89: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DF90
 * Original: 0x0006DF90 - 0x0006DFCD (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006DF90: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006DFC9; /* je: equal / zero */

loc_0006DF97: ;
    PUSH32(esp, 0x0006DF9Cu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006DF9C: ;
    ecx = MEM32(eax + 0x354D4);
    ecx = ecx & esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x114);
    ecx = ecx + eax;
    SET_LO8(eax, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = ecx + 8;
    if (TEST_Z(_fa, _fb)) goto loc_0006DFC9; /* je: equal / zero */

loc_0006DFB6: ;
    PUSH32(esp, 0x0006DFBBu); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_0006DFBB: ;
    edx = MEM32(eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0006DFC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006DFC5: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006DFC9: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006DFD0
 * Original: 0x0006DFD0 - 0x0006DFF8 (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006DFD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006DFD0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006DFF2; /* je: equal / zero */

loc_0006DFD7: ;
    PUSH32(esp, 0x0006DFDCu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006DFDC: ;
    ecx = MEM32(eax + 0x354D4);
    ecx = ecx & esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x114);
    ecx = ecx + eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0006D720(); return; /* tail jmp 0x0006D720 */

loc_0006DFF2: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E000
 * Original: 0x0006E000 - 0x0006E031 (49 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E000(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006E000: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E02B; /* je: equal / zero */

loc_0006E007: ;
    PUSH32(esp, 0x0006E00Cu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E00C: ;
    ecx = MEM32(eax + 0x354D4);
    ecx = ecx & esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x114);
    ecx = ecx + eax;
    _fa = (uint32_t)(MEM8(ecx + 0x10F)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x10F), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E02B; /* je: equal / zero */

loc_0006E025: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0006D720(); return; /* tail jmp 0x0006D720 */

loc_0006E02B: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E040
 * Original: 0x0006E040 - 0x0006E06B (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E040: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E067; /* je: equal / zero */

loc_0006E047: ;
    PUSH32(esp, 0x0006E04Cu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E04C: ;
    ecx = MEM32(eax + 0x354D4);
    ecx = ecx & esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x114);
    eax = ZX8(MEM8(ecx + eax + 0x10F));
    eax = eax & 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006E067: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E070
 * Original: 0x0006E070 - 0x0006E098 (40 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E070(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006E070: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E092; /* je: equal / zero */

loc_0006E077: ;
    PUSH32(esp, 0x0006E07Cu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E07C: ;
    ecx = MEM32(eax + 0x354D4);
    ecx = ecx & esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x114);
    ecx = ecx + eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0006DAD0(); return; /* tail jmp 0x0006DAD0 */

loc_0006E092: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0006E0A0
 * Original: 0x0006E0A0 - 0x0006E0FD (93 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E0A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006E0DC; /* jne: not equal / not zero */

loc_0006E0AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E0D6; /* je: equal / zero */

loc_0006E0B3: ;
    PUSH32(esp, 0x0006E0B8u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E0B8: ;
    _fa = (uint32_t)(MEM32(eax + 0x348D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x348D0), 0x300 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E0C8; /* jne: not equal / not zero */

loc_0006E0C4: ;
    eax = 0; /* xor self */
    goto loc_0006E0D4;

loc_0006E0C8: ;
    PUSH32(esp, 0x0006E0CDu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E0CD: ;
    ecx = eax;
    PUSH32(esp, 0x0006E0D4u); RECOMP_ABI_CALL(0x0006DB20u, sub_0006DB20); /* call 0x0006DB20 */

loc_0006E0D4: ;
    MEM32(edi) = eax;

loc_0006E0D6: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E0F7; /* je: equal / zero */

loc_0006E0DC: ;
    PUSH32(esp, 0x0006E0E1u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E0E1: ;
    ecx = MEM32(eax + 0x354D4);
    ecx = ecx & esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x114);
    PUSH32(esp, ebx);
    ecx = ecx + eax;
    PUSH32(esp, 0x0006E0F7u); RECOMP_ABI_CALL(0x0006D9B0u, sub_0006D9B0); /* call 0x0006D9B0 */

loc_0006E0F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E100
 * Original: 0x0006E100 - 0x0006E162 (98 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E100: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006E13C; /* jne: not equal / not zero */

loc_0006E10F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E136; /* je: equal / zero */

loc_0006E113: ;
    PUSH32(esp, 0x0006E118u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E118: ;
    _fa = (uint32_t)(MEM32(eax + 0x348D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x348D0), 0x300 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E128; /* jne: not equal / not zero */

loc_0006E124: ;
    eax = 0; /* xor self */
    goto loc_0006E134;

loc_0006E128: ;
    PUSH32(esp, 0x0006E12Du); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E12D: ;
    ecx = eax;
    PUSH32(esp, 0x0006E134u); RECOMP_ABI_CALL(0x0006DB20u, sub_0006DB20); /* call 0x0006DB20 */

loc_0006E134: ;
    MEM32(edi) = eax;

loc_0006E136: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E15C; /* je: equal / zero */

loc_0006E13C: ;
    PUSH32(esp, 0x0006E141u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E141: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x354D4);
    ecx = ecx & esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x114);
    PUSH32(esp, ebx);
    ecx = ecx + eax;
    PUSH32(esp, 0x0006E15Cu); RECOMP_ABI_CALL(0x0006D860u, sub_0006D860); /* call 0x0006D860 */

loc_0006E15C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006E170
 * Original: 0x0006E170 - 0x0006E1CF (95 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E170: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0006E1A4; /* jne: not equal / not zero */

loc_0006E17D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E1A4; /* je: equal / zero */

loc_0006E181: ;
    PUSH32(esp, 0x0006E186u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E186: ;
    _fa = (uint32_t)(MEM32(eax + 0x348D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x348D0), 0x300 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E196; /* jne: not equal / not zero */

loc_0006E192: ;
    eax = 0; /* xor self */
    goto loc_0006E1A2;

loc_0006E196: ;
    PUSH32(esp, 0x0006E19Bu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E19B: ;
    ecx = eax;
    PUSH32(esp, 0x0006E1A2u); RECOMP_ABI_CALL(0x0006DB20u, sub_0006DB20); /* call 0x0006DB20 */

loc_0006E1A2: ;
    MEM32(esi) = eax;

loc_0006E1A4: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E1CA; /* je: equal / zero */

loc_0006E1AA: ;
    PUSH32(esp, 0x0006E1AFu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E1AF: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x354D4);
    ecx = ecx & esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x114);
    PUSH32(esp, edi);
    ecx = ecx + eax;
    PUSH32(esp, 0x0006E1CAu); RECOMP_ABI_CALL(0x0006D8C0u, sub_0006D8C0); /* call 0x0006D8C0 */

loc_0006E1CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006E1D0
 * Original: 0x0006E1D0 - 0x0006E21B (75 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E1D0: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E217; /* je: equal / zero */

loc_0006E1D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E1DDu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E1DD: ;
    esi = MEM32(eax + 0x354D4);
    esi = esi & edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x114);
    esi = esi + eax;
    _fa = (uint32_t)(MEM8(esi + 0x10F)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x10F), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E216; /* je: equal / zero */

loc_0006E1F6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E216; /* je: equal / zero */

loc_0006E201: ;
    PUSH32(esp, 0x0006E206u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0006E206: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x0006E216u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006E216: ;
    POP32(esp, esi);

loc_0006E217: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E220
 * Original: 0x0006E220 - 0x0006E23E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E220: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E23C; /* je: equal / zero */

loc_0006E229: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E22Fu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E22F: ;
    ecx = eax;
    PUSH32(esp, 0x0006E236u); RECOMP_ABI_CALL(0x0006DD00u, sub_0006DD00); /* call 0x0006DD00 */

loc_0006E236: ;
    MEM32(esi) = 0;

loc_0006E23C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E240
 * Original: 0x0006E240 - 0x0006E2C3 (131 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006E240: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006E27E; /* jne: not equal / not zero */

loc_0006E24F: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E278; /* je: equal / zero */

loc_0006E255: ;
    PUSH32(esp, 0x0006E25Au); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E25A: ;
    _fa = (uint32_t)(MEM32(eax + 0x348D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x348D0), 0x300 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E26A; /* jne: not equal / not zero */

loc_0006E266: ;
    eax = 0; /* xor self */
    goto loc_0006E276;

loc_0006E26A: ;
    PUSH32(esp, 0x0006E26Fu); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E26F: ;
    ecx = eax;
    PUSH32(esp, 0x0006E276u); RECOMP_ABI_CALL(0x0006DB20u, sub_0006DB20); /* call 0x0006DB20 */

loc_0006E276: ;
    MEM32(ebx) = eax;

loc_0006E278: ;
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E2BB; /* je: equal / zero */

loc_0006E27E: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E2BB; /* je: equal / zero */

loc_0006E284: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E28Au); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E28A: ;
    esi = MEM32(eax + 0x354D4);
    esi = esi & edi;
    edi = MEM32(ebp);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x114);
    esi = esi + eax;
    PUSH32(esp, 0x0006E2A2u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E2A2: ;
    ecx = MEM32(eax + 0x354D4);
    ecx = ecx & edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x114);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0006E2BAu); RECOMP_ABI_CALL(0x0006D6B0u, sub_0006D6B0); /* call 0x0006D6B0 */

loc_0006E2BA: ;
    POP32(esp, esi);

loc_0006E2BB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E2D0
 * Original: 0x0006E2D0 - 0x0006E5D8 (776 bytes, 233 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E2D0(void)
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

loc_0006E2D0: ;
    esp = esp - 0x110;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x118) = eax;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0006E2F0u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E2F0: ;
    ecx = MEM32(eax + 0x348D0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x300) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x300 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E304; /* jne: not equal / not zero */

loc_0006E300: ;
    edi = 0; /* xor self */
    goto loc_0006E312;

loc_0006E304: ;
    PUSH32(esp, 0x0006E309u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E309: ;
    ecx = eax;
    PUSH32(esp, 0x0006E310u); RECOMP_ABI_CALL(0x0006DB20u, sub_0006DB20); /* call 0x0006DB20 */

loc_0006E310: ;
    edi = eax;

loc_0006E312: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0006E332; /* jne: not equal / not zero */

loc_0006E318: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x10C);
    PUSH32(esp, 0x0006E329u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0006E329: ;
    esp = esp + 0x110;
    esp += 16; return; /* ret 12 */

loc_0006E332: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006E338u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E338: ;
    esi = MEM32(eax + 0x354D4);
    ebp = MEM32(esp + 0x124);
    esi = esi & edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x114);
    PUSH32(esp, 0x100);
    esi = esi + eax;
    eax = esp + 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM8(esp + 0x28) = LO8(ebx);
    PUSH32(esp, 0x0006E363u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006E363: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x3CC6C8);
    ecx = esp + 0x20;
    MEM8(esp + 0x11F) = LO8(ebx);
    PUSH32(esp, 0x0006E37Bu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0006E37B: ;
    edi = MEM32(esp + 0x128);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0006E38Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006E38F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E39B; /* je: equal / zero */

loc_0006E393: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006E39Bu); RECOMP_ABI_CALL(0x0006D9B0u, sub_0006D9B0); /* call 0x0006D9B0 */

loc_0006E39B: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006E3ABu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006E3AB: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x3CCBD0);
    ecx = esp + 0x20;
    MEM8(esp + 0x11F) = LO8(ebx);
    PUSH32(esp, 0x0006E3C3u); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0006E3C3: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0006E3D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006E3D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E3D8; /* je: equal / zero */

loc_0006E3D4: ;
    PUSH32(esp, 1);
    goto loc_0006E412;

loc_0006E3D8: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006E3E8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006E3E8: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x3CCBC8);
    ecx = esp + 0x20;
    MEM8(esp + 0x11F) = LO8(ebx);
    PUSH32(esp, 0x0006E400u); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0006E400: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0006E40Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006E40D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E41A; /* je: equal / zero */

loc_0006E411: ;
    PUSH32(esp, ebx);

loc_0006E412: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E41Au); RECOMP_ABI_CALL(0x0006D860u, sub_0006D860); /* call 0x0006D860 */

loc_0006E41A: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0006E42Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006E42A: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x3CCBBC);
    ecx = esp + 0x20;
    MEM8(esp + 0x11F) = LO8(ebx);
    PUSH32(esp, 0x0006E442u); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0006E442: ;
    edx = ZX16(MEM16(esi + 0x10C));
    eax = MEM32(edi);
    MEM32(esp + 0x10) = edx;
    ecx = esp + 0x10;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0006E466u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006E466: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006E485; /* jp: parity */

loc_0006E47B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    goto loc_0006E49E;

loc_0006E485: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CCC88)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3ccc88] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006E49E; /* jne: not equal / not zero */

loc_0006E496: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3CCC88)); /* fld float */

loc_0006E49E: ;
    PUSH32(esp, 0x0006E4A3u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006E4A3: ;
    MEM16(esi + 0x10C) = LO16(eax);
    PUSH32(esp, 0x100);
    eax = esp + 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0x3F800000;
    PUSH32(esp, 0x0006E4C2u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006E4C2: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x3CCBB0);
    ecx = esp + 0x20;
    MEM8(esp + 0x11F) = LO8(ebx);
    PUSH32(esp, 0x0006E4DAu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0006E4DA: ;
    edx = MEM32(edi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0006E4EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006E4EB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006E50A; /* jp: parity */

loc_0006E500: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    goto loc_0006E523;

loc_0006E50A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006E523; /* jne: not equal / not zero */

loc_0006E51B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6E40)); /* fld float */

loc_0006E523: ;
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    PUSH32(esp, 0x0006E52Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0006E52E: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    MEM8(esi + 0x10E) = LO8(eax);
    PUSH32(esp, 0x0006E544u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006E544: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x3CB6F0);
    ecx = esp + 0x20;
    MEM8(esp + 0x11F) = LO8(ebx);
    PUSH32(esp, 0x0006E55Cu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0006E55C: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0006E569u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006E569: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0006E57E; /* je: equal / zero */

loc_0006E56E: ;
    edx = MEM32(esp + 0x128);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0006E57Eu); RECOMP_ABI_CALL(0x0006D8C0u, sub_0006D8C0); /* call 0x0006D8C0 */

loc_0006E57E: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD050) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E5BE; /* jne: not equal / not zero */

loc_0006E588: ;
    _fa = (uint32_t)(MEM32(esi + 0x108)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x108), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E5BE; /* jne: not equal / not zero */

loc_0006E590: ;
    eax = esi + 8;
    edx = eax + 1;

loc_0006E596: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006E596; /* jne: not equal / not zero */

loc_0006E59D: ;
    eax = eax - edx;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_0006E5BE; /* jne: not equal / not zero */

loc_0006E5A5: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0006E5BE; /* je: equal / zero */

loc_0006E5AF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0006E5B5u); RECOMP_ABI_CALL(0x0006DE00u, sub_0006DE00); /* call 0x0006DE00 */

loc_0006E5B5: ;
    ecx = eax;
    PUSH32(esp, 0x0006E5BCu); RECOMP_ABI_CALL(0x0006DD00u, sub_0006DD00); /* call 0x0006DD00 */

loc_0006E5BC: ;
    MEM32(esi) = ebx;

loc_0006E5BE: ;
    ecx = MEM32(esp + 0x118);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    PUSH32(esp, 0x0006E5CFu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0006E5CF: ;
    esp = esp + 0x110;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006E5E0
 * Original: 0x0006E5E0 - 0x0006E5F9 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E5E0(void)
{

loc_0006E5E0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(0x44BB02));
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E600
 * Original: 0x0006E600 - 0x0006E636 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E600: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E635; /* je: equal / zero */

loc_0006E607: ;
    SET_LO8(eax, MEM8(0x44BB02));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x44BB02) = LO8(eax);
    PUSH32(esp, 0x0006E61Bu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0006E61B: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(0x44BB02));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CCCD0);
    PUSH32(esp, 0x3C6E5C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0006E635u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006E635: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E640
 * Original: 0x0006E640 - 0x0006E659 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E640(void)
{

loc_0006E640: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(0x44BB04));
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E660
 * Original: 0x0006E660 - 0x0006E696 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E660: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E695; /* je: equal / zero */

loc_0006E667: ;
    SET_LO8(eax, MEM8(0x44BB04));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x44BB04) = LO8(eax);
    PUSH32(esp, 0x0006E67Bu); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0006E67B: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(0x44BB04));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3CCCDC);
    PUSH32(esp, 0x3C6E5C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0006E695u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006E695: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E6A0
 * Original: 0x0006E6A0 - 0x0006E6B9 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E6A0(void)
{

loc_0006E6A0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(0x44BB07));
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E6C0
 * Original: 0x0006E6C0 - 0x0006E6D7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E6C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E6D6; /* je: equal / zero */

loc_0006E6C7: ;
    SET_LO8(eax, MEM8(0x44BB07));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x44BB07) = LO8(eax);

loc_0006E6D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E6E0
 * Original: 0x0006E6E0 - 0x0006E6F9 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E6E0(void)
{

loc_0006E6E0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(0x44BB08));
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E700
 * Original: 0x0006E700 - 0x0006E717 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E700: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E716; /* je: equal / zero */

loc_0006E707: ;
    SET_LO8(eax, MEM8(0x44BB08));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x44BB08) = LO8(eax);

loc_0006E716: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E720
 * Original: 0x0006E720 - 0x0006E739 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E720(void)
{

loc_0006E720: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(0x44BB09));
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E740
 * Original: 0x0006E740 - 0x0006E757 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E740: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E756; /* je: equal / zero */

loc_0006E747: ;
    SET_LO8(eax, MEM8(0x44BB09));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x44BB09) = LO8(eax);

loc_0006E756: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E760
 * Original: 0x0006E760 - 0x0006E779 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E760(void)
{

loc_0006E760: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(0x485848));
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E780
 * Original: 0x0006E780 - 0x0006E797 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E780: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E796; /* je: equal / zero */

loc_0006E787: ;
    SET_LO8(eax, MEM8(0x485848));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x485848) = LO8(eax);

loc_0006E796: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E7A0
 * Original: 0x0006E7A0 - 0x0006E7B9 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E7A0(void)
{

loc_0006E7A0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(0x485840));
    MEM8(eax + 0x10C) = MEM8(eax + 0x10C) | 2;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E7C0
 * Original: 0x0006E7C0 - 0x0006E7D7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E7C0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006E7D6; /* je: equal / zero */

loc_0006E7C7: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(0x485840) = LO8(eax);

loc_0006E7D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E7E0
 * Original: 0x0006E7E0 - 0x0006E825 (69 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E7E0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x2FC00);
    ecx = edi;
    ecx = ecx - eax;
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FC00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2FC00 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006E821; /* jge: greater or equal (signed >=) */

loc_0006E7FB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(eax + 0x2FC00);
    ecx = ecx + edx;
    POP32(esp, esi);
    MEM32(eax + 0x2FC00) = ecx;
    POP32(esp, ebx);

loc_0006E821: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006E830
 * Original: 0x0006E830 - 0x0006E875 (69 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E830: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2FC00);
    ecx = esi;
    ecx = ecx - eax;
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FC00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2FC00 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006E871; /* jge: greater or equal (signed >=) */

loc_0006E84B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(eax + 0x2FC00);
    ecx = ecx + edx;
    POP32(esp, edi);
    MEM32(eax + 0x2FC00) = ecx;
    POP32(esp, ebx);

loc_0006E871: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0006E880
 * Original: 0x0006E880 - 0x0006E91D (157 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E880: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x2FC44;
    ecx = 0xC;
    eax = 0x2A2A2A2A;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x14);
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x32);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E8AFu); RECOMP_ABI_CALL(0x00123020u, sub_00123020); /* call 0x00123020 */

loc_0006E8AF: ;
    eax = MEM32(ebx + 0x2FC00);
    edx = eax;
    edx = edx - ebx;
    esp = esp + 0x10;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FC00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2FC00 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006E8D3; /* jge: greater or equal (signed >=) */

loc_0006E8C5: ;
    SET_LO8(ecx, MEM8(0x3CCCF0));
    MEM8(eax) = LO8(ecx);
    MEM32(ebx + 0x2FC00) = MEM32(ebx + 0x2FC00) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x2FC00)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006E8D3: ;
    edi = MEM32(ebx + 0x2FC00);
    edx = edi;
    edx = edx - ebx;
    edx = edx + 0x32;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FC00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2FC00 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006E8F8; /* jge: greater or equal (signed >=) */

loc_0006E8E8: ;
    ecx = 0xC;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(ebx + 0x2FC00) = MEM32(ebx + 0x2FC00) + 0x32;

loc_0006E8F8: ;
    eax = MEM32(ebx + 0x2FC00);
    ecx = eax;
    ecx = ecx - ebx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FC00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2FC00 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006E919; /* jge: greater or equal (signed >=) */

loc_0006E90B: ;
    SET_LO8(edx, MEM8(0x3CCCF0));
    MEM8(eax) = LO8(edx);
    MEM32(ebx + 0x2FC00) = MEM32(ebx + 0x2FC00) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x2FC00)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0006E919: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006E920
 * Original: 0x0006E920 - 0x0006E98B (107 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006E920: ;
    eax = ecx;
    ecx = MEM32(eax + 0x2FC00);
    edx = ecx;
    edx = edx - eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FC00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2FC00 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006E93C; /* jge: greater or equal (signed >=) */

loc_0006E935: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x2FC00) = ecx;

loc_0006E93C: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2FC00);
    ecx = esi;
    ecx = ecx - eax;
    ecx = ecx + 0x32;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FC00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2FC00 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006E96A; /* jge: greater or equal (signed >=) */

loc_0006E952: ;
    PUSH32(esp, edi);
    ecx = 0xC;
    edi = eax + 0x2FC44;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM32(eax + 0x2FC00) = MEM32(eax + 0x2FC00) + 0x32;
    POP32(esp, edi);

loc_0006E96A: ;
    ecx = MEM32(eax + 0x2FC00);
    edx = ecx;
    edx = edx - eax;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FC00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x2FC00 (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0006E985; /* jge: greater or equal (signed >=) */

loc_0006E97E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0x2FC00) = ecx;

loc_0006E985: ;
    eax = eax + 0x2FC44;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E990
 * Original: 0x0006E990 - 0x0006E9A5 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E990(void)
{

loc_0006E990: ;
    MEM8(ecx + 0x56C) = 0;
    eax = 0; /* xor self */
    ecx = ecx + 0x570;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0006E9B0
 * Original: 0x0006E9B0 - 0x0006E9D5 (37 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E9B0(void)
{

loc_0006E9B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x100);
    esi = ecx + 0x3D0;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0006E9C7u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006E9C7: ;
    esp = esp + 0xC;
    MEM8(esi + 0xFF) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006E9E0
 * Original: 0x0006E9E0 - 0x0006EA10 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006E9E0(void)
{

loc_0006E9E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esi + 0x10C));
    PUSH32(esp, 0x100);
    SET_LO8(ecx, LO8(ecx) | 1);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, esi);
    MEM8(esi + 0x10C) = LO8(ecx);
    PUSH32(esp, 0x0006EA04u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006EA04: ;
    esp = esp + 0xC;
    MEM8(esi + 0xFF) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006EA10
 * Original: 0x0006EA10 - 0x0006EB00 (240 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006EA10: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x140);
    PUSH32(esp, edi);
    edi = ebx + 0x140;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006EA41; /* jne: not equal / not zero */

loc_0006EA26: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006EAF7; /* jge: greater or equal (signed >=) */

loc_0006EA35: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006EA26; /* je: equal / zero */

loc_0006EA41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006EA4E; /* jne: not equal / not zero */

loc_0006EA48: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_0006EA4E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006EA58; /* jne: not equal / not zero */

loc_0006EA52: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_0006EA58: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006EA62; /* jne: not equal / not zero */

loc_0006EA5C: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_0006EA62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006EA6D; /* jne: not equal / not zero */

loc_0006EA66: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006EA66; /* je: equal / zero */

loc_0006EA6D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006EAF7; /* jge: greater or equal (signed >=) */

loc_0006EA76: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_0006EA80: ;
    ecx = esi + esi * 4;
    ecx = ebx + ecx * 4;
    PUSH32(esp, 0x0006EA8Bu); RECOMP_ABI_CALL(0x0007A040u, sub_0007A040); /* call 0x0007A040 */

loc_0006EA8B: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006EAF6; /* jge: greater or equal (signed >=) */

loc_0006EA93: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006EABD; /* jne: not equal / not zero */

loc_0006EAA6: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006EAF6; /* jge: greater or equal (signed >=) */

loc_0006EAB1: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006EAA6; /* je: equal / zero */

loc_0006EABD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006EACB; /* jne: not equal / not zero */

loc_0006EAC5: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0006EACB: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006EAD5; /* jne: not equal / not zero */

loc_0006EACF: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0006EAD5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006EAE0; /* jne: not equal / not zero */

loc_0006EADA: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0006EAE0: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006EAED; /* jne: not equal / not zero */

loc_0006EAE5: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006EAE5; /* je: equal / zero */

loc_0006EAED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0006EAF6; /* jge: greater or equal (signed >=) */

loc_0006EAF2: ;
    esi = eax;
    goto loc_0006EA80;

loc_0006EAF6: ;
    POP32(esp, esi);

loc_0006EAF7: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006EB00
 * Original: 0x0006EB00 - 0x0006EB5A (90 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EB00(void)
{

loc_0006EB00: ;
    xml1_campaign_record_init(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x40);
    ebx = 0; /* xor self */
    edi = esi + 0x10;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, edi);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x0006EB22u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006EB22: ;
    MEM8(edi + 0x3F) = LO8(ebx);
    MEM16(esi + 0x50) = LO16(ebx);
    MEM16(esi + 0x52) = LO16(ebx);
    MEM8(esi + 0x54) = LO8(ebx);
    eax = 0; /* xor self */
    MEM8(esi + 0x74) = LO8(ebx);
    ecx = esi + 0x78;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, MEM8(esi + 0x84));
    esp = esp + 0xC;
    SET_LO8(eax, LO8(eax) & 0xE0);
    MEM8(esi + 0x84) = LO8(eax);
    POP32(esp, edi);
    MEM32(esi + 0x80) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0006EB60
 * Original: 0x0006EB60 - 0x0006EBF2 (146 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0006EB60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x140) = edi;
    MEM32(esi + 0x188) = edi;
    MEM32(esi + 0x18C) = edi;
    MEM32(esi + 0x190) = edi;
    MEM32(esi + 0x194) = edi;
    MEM32(esi + 0x198) = edi;
    PUSH32(esp, 0x0006EB8Fu); RECOMP_ABI_CALL(0x0005F5B0u, sub_0005F5B0); /* call 0x0005F5B0 */

loc_0006EB8F: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x1DC) = edi;
    MEM32(esi + 0x1E0) = edi;
    ecx = 0xF;
    edx = 0; /* xor self */

loc_0006EBA4: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0006EBA4; /* jne: not equal / not zero */

loc_0006EBB0: ;
    MEM32(esi + 0x1DC) = eax;
    MEM32(esi + 0x1E0) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x19C;
    goto loc_0006EBD0;

    /* nop */
    /* nop */

loc_0006EBD0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x1E0);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006EBD0; /* jl: less (signed <) */

loc_0006EBED: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0006EC00
 * Original: 0x0006EC00 - 0x0006EC05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EC00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006EC00: ;
    g_seh_ebp = ebp; sub_0006EA10(); return; /* tail jmp 0x0006EA10 */

}

/**
 * sub_0006EC10
 * Original: 0x0006EC10 - 0x0006EEB4 (676 bytes, 154 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EC10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0006EC10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34EF1E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3CCD14;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0x0006EC40u); RECOMP_ABI_CALL(0x000188C0u, sub_000188C0); /* call 0x000188C0 */

loc_0006EC40: ;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0006EC48u); RECOMP_ABI_CALL(0x000BEF20u, sub_000BEF20); /* call 0x000BEF20 */

loc_0006EC48: ;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0006EC50u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0006EC50: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    eax = esi + 0x18;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    MEM32(esi + 0x28) = ebx;
    MEM32(esi + 0x2C) = ebx;
    eax = eax + 4;
    eax = esi + 0x2C;
    MEM32(eax + 4) = ebx;
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    MEM8(esi + 0x3C) = LO8(ebx);
    eax = eax + 4;
    edi = esi + 0x3C;
    MEM8(edi + 0x40) = LO8(ebx);
    eax = edi + 0x40;
    MEM8(eax + 0x40) = LO8(ebx);
    eax = eax + 0x40;
    MEM8(eax + 0x40) = LO8(ebx);
    MEM32(esi + 0x140) = 0xFFFFFFFFu;
    eax = eax + 0x40;
    eax = MEM32(0x5BC9D0);
    MEM32(esi + 0x144) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(esi + 0x148) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(esi + 0x14C) = edx;
    MEM8(esi + 0x150) = MEM8(esi + 0x150) & 0xFE;
    MEM32(esi + 0x158) = ebx;
    MEM32(esi + 0x15C) = ebx;
    MEM32(esi + 0x160) = ebx;
    MEM32(esi + 0x164) = ebx;
    MEM32(esi + 0x168) = ebx;
    MEM32(esi + 0x16C) = ebx;
    MEM32(esi + 0x170) = ebx;
    MEM32(esi + 0x174) = ebx;
    MEM32(esi + 0x178) = ebx;
    MEM32(esi + 0x17C) = ebx;
    MEM32(esi + 0x180) = ebx;
    MEM32(esi + 0x184) = ebx;
    MEM32(esi + 0x188) = ebx;
    ecx = esi + 0x1B0;
    MEM32(esi + 0x18C) = 0x43660000;
    MEM32(esi + 0x190) = 0xBF800000u;
    PUSH32(esp, 0x0006ED36u); RECOMP_ABI_CALL(0x0006EB60u, sub_0006EB60); /* call 0x0006EB60 */

loc_0006ED36: ;
    eax = MEM32(0x3DD050);
    MEM32(esi + 0x394) = eax;
    ecx = MEM32(0x3DD050);
    eax = 0x3F800000;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esi + 0x398) = ecx;
    MEM32(esi + 0x39C) = ebx;
    MEM32(esi + 0x3A0) = ebx;
    MEM32(esi + 0x3A4) = ebx;
    MEM32(esi + 0x3A8) = ebx;
    MEM32(esi + 0x3AC) = ebx;
    MEM32(esi + 0x3B0) = ebx;
    MEM32(esi + 0x3B4) = ebx;
    MEM32(esi + 0x3B8) = eax;
    MEM32(esi + 0x3BC) = eax;
    MEM32(esi + 0x3C0) = ebx;
    MEM32(esi + 0x3C4) = ebx;
    MEM32(esi + 0x3C8) = ebx;
    MEM32(esi + 0x3CC) = ebx;
    ebp = esi + 0x3D0;
    MEM8(ebp) = LO8(ebx);
    ecx = esi + 0x4F8;
    MEM8(esi + 0x4F4) = LO8(ebx);
    PUSH32(esp, 0x0006EDBEu); RECOMP_ABI_CALL(0x0006EB00u, sub_0006EB00); /* call 0x0006EB00 */

loc_0006EDBE: ;
    ecx = esi + 0x580;
    PUSH32(esp, 0x0006EDC9u); RECOMP_ABI_CALL(0x0006EB00u, sub_0006EB00); /* call 0x0006EB00 */

loc_0006EDC9: ;
    ecx = esi + 0x608;
    PUSH32(esp, 0x0006EDD4u); RECOMP_ABI_CALL(0x0006EB00u, sub_0006EB00); /* call 0x0006EB00 */

loc_0006EDD4: ;
    MEM8(esi + 0x6C0) = MEM8(esi + 0x6C0) & 0x80;
    MEM8(esi + 0x690) = LO8(ebx);
    MEM32(esi + 0x698) = 0xBF800000u;
    MEM32(esi + 0x6BC) = ebx;
    MEM8(esi + 0x56C) = LO8(ebx);
    edx = 0; /* xor self */
    eax = esi + 0x570;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x0006EE09u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0006EE09: ;
    ecx = MEM32(esi + 0xC);
    MEM32(0x48D8E4) = ecx;
    MEM32(0x48D8E8) = esi;
    PUSH32(esp, 0x0006EE1Du); RECOMP_ABI_CALL(0x0011D510u, sub_0011D510); /* call 0x0011D510 */

loc_0006EE1D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x498DB4);
    PUSH32(esp, 0x3CCD00);
    PUSH32(esp, 0x3CCCFC);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0006EE34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006EE34: ;
    MEM32(esp + 0x10) = 4;
    /* nop */

loc_0006EE40: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3CCCF4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0006EE4Du); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006EE4D: ;
    eax = MEM32(esp + 0x1C);
    MEM8(edi + 0x3F) = LO8(ebx);
    esp = esp + 0xC;
    edi = edi + 0x40;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_0006EE40; /* jne: not equal / not zero */

loc_0006EE61: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0006EE71u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0006EE71: ;
    esp = esp + 0xC;
    MEM8(ebp + 0xFF) = LO8(ebx);
    eax = 0; /* xor self */
    ecx = esi + 0x4E4;

loc_0006EE82: ;
    MEM8(esi + eax + 0x4E0) = LO8(ebx);
    MEM32(ecx + -20) = 0xFFFFFFFFu;
    MEM32(ecx) = 0xFFFFFFFFu;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0006EE82; /* jl: less (signed <) */

loc_0006EE9F: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0006EEC0
 * Original: 0x0006EEC0 - 0x0006EEF1 (49 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006EEC0(void)
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

loc_0006EEC0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006EEDE; /* jp: parity */

loc_0006EED1: ;
    MEM32(ecx + 0x3B0) = 0xBF800000u;
    esp += 8; return; /* ret 4 */

loc_0006EEDE: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0x39C); /* fadd dword ptr [ecx + 0x39c] */
    MEMF(ecx + 0x3B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006EF00
 * Original: 0x0006EF00 - 0x0006EF0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EF00(void)
{

loc_0006EF00: ;
    MEM32(ecx + 0x3B0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0006EF10
 * Original: 0x0006EF10 - 0x0006EF53 (67 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EF10(void)
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

loc_0006EF10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0006EF18u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0006EF18: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0006EF21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006EF21: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006EF4B; /* jne: not equal / not zero */

loc_0006EF25: ;
    fp_push(MEMF(esi + 0x3B0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0006EF4F; /* jnp: not parity */

loc_0006EF38: ;
    fp_push(MEMF(esi + 0x3B0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x39C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x39c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0006EF4F; /* je: equal / zero */

loc_0006EF4B: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0006EF4F: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006EF60
 * Original: 0x0006EF60 - 0x0006EF9D (61 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006EF60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006EF60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi);
    ecx = eax;
    MEM32(esi + 0x3BC) = ecx;
    ecx = esi;
    MEM32(esi + 0x3B8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0006EF7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006EF7F: ;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    MEM32(esi + 0x3C4) = 0;
    MEMF(esi + 0x3C0) = (float)fp_top(); /* fst */
    MEMF(esi + 0x3C8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006EFA0
 * Original: 0x0006EFA0 - 0x0006EFE9 (73 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006EFA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006EFA0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi);
    ecx = eax;
    MEM32(esi + 0x3BC) = ecx;
    ecx = esi;
    MEM32(esi + 0x3B8) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0006EFBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0006EFBF: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CCCAC); /* fmul dword ptr [0x3cccac] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esi + 0x3C4) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    MEMF(esi + 0x3C8) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    MEMF(esi + 0x3C0) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006EFF0
 * Original: 0x0006EFF0 - 0x0006EFF7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006EFF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006EFF0: ;
    fp_push(MEMF(ecx + 0x3B8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F000
 * Original: 0x0006F000 - 0x0006F007 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F000(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006F000: ;
    fp_push(MEMF(0x3C8C98)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F010
 * Original: 0x0006F010 - 0x0006F01D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F010(void)
{

loc_0006F010: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006F020
 * Original: 0x0006F020 - 0x0006F03C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F020(void)
{

loc_0006F020: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x57C));
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x57C) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006F040
 * Original: 0x0006F040 - 0x0006F04C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F040(void)
{

loc_0006F040: ;
    SET_LO8(eax, MEM8(ecx + 0x57C));
    SET_LO8(eax, LO8(eax) >> 4);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0006F050
 * Original: 0x0006F050 - 0x0006F06C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F050(void)
{

loc_0006F050: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x57C));
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x57C) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006F070
 * Original: 0x0006F070 - 0x0006F07C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F070(void)
{

loc_0006F070: ;
    SET_LO8(eax, MEM8(ecx + 0x57C));
    SET_LO8(eax, LO8(eax) >> 3);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0006F080
 * Original: 0x0006F080 - 0x0006F087 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F080(void)
{

loc_0006F080: ;
    eax = MEM32(ecx + 0x3CC);
    esp += 4; return; /* ret */

}

/**
 * sub_0006F090
 * Original: 0x0006F090 - 0x0006F106 (118 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F090(void)
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

loc_0006F090: ;
    eax = MEM32(ecx + 0x4FC);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x4F8);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    fp_push(MEMF(ecx + 0x500)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0006F0EE; /* jne: not equal / not zero */

loc_0006F0BB: ;
    fp_push(MEMF(ecx + 0x500)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x4FC); /* fsub dword ptr [ecx + 0x4fc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9404)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9404] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0006F0EE; /* jp: parity */

loc_0006F0D4: ;
    eax = MEM32(ecx + 0x504);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    SET_LO8(eax, MEM8(ecx + 0x57C));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 16; return; /* ret 12 */

loc_0006F0EE: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    SET_LO8(eax, MEM8(ecx + 0x57C));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F110
 * Original: 0x0006F110 - 0x0006F143 (51 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0006F110(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0006F110: ;
    SET_LO8(eax, MEM8(ecx + 0x57C));
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 0x4FC); /* fadd dword ptr [ecx + 0x4fc] */
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(ecx + 0x57C) = LO8(eax);
    eax = MEM32(esp + 4);
    MEMF(ecx + 0x4FC) = (float)fp_top(); /* fst */
    MEM32(ecx + 0x504) = eax;
    MEMF(ecx + 0x500) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0006F150
 * Original: 0x0006F150 - 0x0006F15A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F150(void)
{

loc_0006F150: ;
    MEM8(ecx + 0x57C) = MEM8(ecx + 0x57C) & 0xFB;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0006F160
 * Original: 0x0006F160 - 0x0006F16A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F160(void)
{

loc_0006F160: ;
    MEM8(ecx + 0x57C) = MEM8(ecx + 0x57C) | 4;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0006F170
 * Original: 0x0006F170 - 0x0006F18C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F170(void)
{

loc_0006F170: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x6C0));
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x6C0) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0006F190
 * Original: 0x0006F190 - 0x0006F19C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0006F190(void)
{

loc_0006F190: ;
    SET_LO8(eax, MEM8(ecx + 0x6C0));
    SET_LO8(eax, LO8(eax) >> 5);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}
