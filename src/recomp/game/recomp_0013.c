#include "engine/saves/raven_saved_stats_guest.h"
/**
 * X-Men Legends - Recompiled code chunk 13
 * Functions: 250 (0x000A0280 - 0x000A8A90)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000A0280
 * Original: 0x000A0280 - 0x000A0313 (147 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0280: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A0291u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A0291: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A0298u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0298: ;
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x000A02A3u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A02A3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A02AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A02AA: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x000A02B2u); RECOMP_ABI_CALL(0x0009FF10u, sub_0009FF10); /* call 0x0009FF10 */

loc_000A02B2: ;
    esp = esp + 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A030C; /* jle: less or equal (signed <=) */

loc_000A02BF: ;
    PUSH32(esp, ebp);

loc_000A02C0: ;
    esi = MEM32(edi * 4 + 0x4C25F8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0302; /* je: equal / zero */

loc_000A02CB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A02D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A02D1: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0302; /* je: equal / zero */

loc_000A02EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ecx = esi;
    PUSH32(esp, ebx);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000A02FD; /* jge: greater or equal (signed >=) */

loc_000A02F6: ;
    PUSH32(esp, 0x000A02FBu); RECOMP_ABI_CALL(0x0002FDF0u, sub_0002FDF0); /* call 0x0002FDF0 */

loc_000A02FB: ;
    goto loc_000A0302;

loc_000A02FD: ;
    PUSH32(esp, 0x000A0302u); RECOMP_ABI_CALL(0x00033170u, sub_00033170); /* call 0x00033170 */

loc_000A0302: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A02C0; /* jl: less (signed <) */

loc_000A030B: ;
    POP32(esp, ebp);

loc_000A030C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0320
 * Original: 0x000A0320 - 0x000A03B7 (151 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0320(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0320: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A0331u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A0331: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A0338u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0338: ;
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x000A0343u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A0343: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A034Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A034A: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000A0354u); RECOMP_ABI_CALL(0x0009FF10u, sub_0009FF10); /* call 0x0009FF10 */

loc_000A0354: ;
    ebx = eax;
    esp = esp + 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A03B0; /* jle: less or equal (signed <=) */

loc_000A035F: ;
    PUSH32(esp, ebp);

loc_000A0360: ;
    esi = MEM32(edi * 4 + 0x4C25F8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A03AA; /* je: equal / zero */

loc_000A036B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A0371u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0371: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A03AA; /* je: equal / zero */

loc_000A038F: ;
    PUSH32(esp, 0x000A0394u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000A0394: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5B4);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18C); PUSH32(esp, 0x000A03AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A03AA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A0360; /* jl: less (signed <) */

loc_000A03AF: ;
    POP32(esp, ebp);

loc_000A03B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A03C0
 * Original: 0x000A03C0 - 0x000A0485 (197 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A03C0(void)
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

loc_000A03C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A03D1u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A03D1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A03D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A03D8: ;
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x000A03E3u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A03E3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A03EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A03EA: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x000A03F2u); RECOMP_ABI_CALL(0x0009FF10u, sub_0009FF10); /* call 0x0009FF10 */

loc_000A03F2: ;
    PUSH32(esp, 0x3D258C);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x000A03FFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A03FF: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0473; /* jne: not equal / not zero */

loc_000A0406: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A045D; /* jle: less or equal (signed <=) */

loc_000A0410: ;
    PUSH32(esp, ebp);

loc_000A0411: ;
    esi = MEM32(edi * 4 + 0x4C25F8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0457; /* je: equal / zero */

loc_000A041C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A0422u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0422: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0457; /* je: equal / zero */

loc_000A0440: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0457; /* jne: not equal / not zero */

loc_000A0453: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000A0457: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A0411; /* jl: less (signed <) */

loc_000A045C: ;
    POP32(esp, ebp);

loc_000A045D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A0467u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000A0467: ;
    ecx = eax;
    PUSH32(esp, 0x000A046Eu); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000A046E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A0473: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A0479u); RECOMP_ABI_CALL(0x000CC120u, xml1_guest_script_manager_get); /* call 0x000CC120 */

loc_000A0479: ;
    ecx = eax;
    PUSH32(esp, 0x000A0480u); RECOMP_ABI_CALL(0x000CA9B0u, xml1_guest_script_integer_result); /* call 0x000CA9B0 */

loc_000A0480: ;
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
 * sub_000A0490
 * Original: 0x000A0490 - 0x000A05A6 (278 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0490(void)
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

loc_000A0490: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A04A3u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A04A3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A04AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A04AA: ;
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x000A04B5u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A04B5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A04BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A04BC: ;
    PUSH32(esp, 2);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x000A04C7u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A04C7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A04CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A04CE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A059D; /* jle: less or equal (signed <=) */

loc_000A04D8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A04DFu); RECOMP_ABI_CALL(0x0009FF10u, sub_0009FF10); /* call 0x0009FF10 */

loc_000A04DF: ;
    edi = eax;
    PUSH32(esp, 0x3D258C);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x000A04F0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A04F0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A059C; /* jle: less or equal (signed <=) */

loc_000A0509: ;
    /* nop */

loc_000A0510: ;
    esi = MEM32(eax * 4 + 0x4C25F8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A058F; /* je: equal / zero */

loc_000A051B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A0521u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0521: ;
    edx = MEM32(0x485878);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x21)) >> 32) & 1);
    edx = edx + 0x21;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    edi = 1;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A0587; /* je: equal / zero */

loc_000A053F: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0587; /* jne: not equal / not zero */

loc_000A0552: ;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0x000A055Du); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_000A055D: ;
    edi = SX16(LO16(eax));
    PUSH32(esp, 0x000A0565u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000A0565: ;
    edx = MEM32(eax);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebp)) >> 32) & 1);
    edi = edi + ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x000A0572u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0572: ;
    ecx = MEM32(esi + 0x2D8);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0x18)));
    eax = eax - MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A0583u); RECOMP_ABI_CALL(0x00033170u, sub_00033170); /* call 0x00033170 */

loc_000A0583: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A059C; /* je: equal / zero */

loc_000A0587: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_000A058F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000A0510; /* jl: less (signed <) */

loc_000A059C: ;
    POP32(esp, ebx);

loc_000A059D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A05B0
 * Original: 0x000A05B0 - 0x000A068B (219 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A05B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A05B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A05C1u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A05C1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A05C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A05C8: ;
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x000A05D3u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A05D3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A05DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A05DA: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A05E5u); RECOMP_ABI_CALL(0x0009AE60u, sub_0009AE60); /* call 0x0009AE60 */

loc_000A05E5: ;
    esp = esp + 8;
    ecx = eax;
    PUSH32(esp, 0x000A05EFu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000A05EF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A061F; /* je: equal / zero */

loc_000A05F5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A05FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A05FB: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(eax + edx * 4 + 0x14);
    MEM32(esp + 0xC) = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0627; /* jne: not equal / not zero */

loc_000A061F: ;
    MEM32(esp + 0xC) = 0;

loc_000A0627: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A062Du); RECOMP_ABI_CALL(0x0009FF10u, sub_0009FF10); /* call 0x0009FF10 */

loc_000A062D: ;
    ebx = eax;
    esp = esp + 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A0684; /* jle: less or equal (signed <=) */

loc_000A0638: ;
    PUSH32(esp, ebp);
    /* nop */

loc_000A0640: ;
    esi = MEM32(edi * 4 + 0x4C25F8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A067E; /* je: equal / zero */

loc_000A064B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A0651u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0651: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A067E; /* je: equal / zero */

loc_000A066F: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x000A067Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A067E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A0640; /* jl: less (signed <) */

loc_000A0683: ;
    POP32(esp, ebp);

loc_000A0684: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0690
 * Original: 0x000A0690 - 0x000A076F (223 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0690(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0690: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A06A1u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A06A1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A06A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A06A8: ;
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x000A06B3u); RECOMP_ABI_CALL(0x000C9CA0u, sub_000C9CA0); /* call 0x000C9CA0 */

loc_000A06B3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A06BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A06BA: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A06C5u); RECOMP_ABI_CALL(0x0009AE60u, sub_0009AE60); /* call 0x0009AE60 */

loc_000A06C5: ;
    esp = esp + 8;
    ecx = eax;
    PUSH32(esp, 0x000A06CFu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000A06CF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A06FF; /* je: equal / zero */

loc_000A06D5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A06DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A06DB: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(eax + edx * 4 + 0x14);
    MEM32(esp + 0xC) = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0707; /* jne: not equal / not zero */

loc_000A06FF: ;
    MEM32(esp + 0xC) = 0;

loc_000A0707: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A070Du); RECOMP_ABI_CALL(0x0009FF10u, sub_0009FF10); /* call 0x0009FF10 */

loc_000A070D: ;
    ebx = eax;
    esp = esp + 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A0768; /* jle: less or equal (signed <=) */

loc_000A0718: ;
    PUSH32(esp, ebp);
    /* nop */

loc_000A0720: ;
    esi = MEM32(edi * 4 + 0x4C25F8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0762; /* je: equal / zero */

loc_000A072B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A0731u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0731: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0762; /* je: equal / zero */

loc_000A074F: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x000A0762u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0762: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A0720; /* jl: less (signed <) */

loc_000A0767: ;
    POP32(esp, ebp);

loc_000A0768: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0770
 * Original: 0x000A0770 - 0x000A077B (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0770(void)
{

loc_000A0770: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A0780
 * Original: 0x000A0780 - 0x000A07A4 (36 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0780: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A07A0; /* je: equal / zero */

loc_000A0788: ;
    PUSH32(esp, 0x000A078Du); RECOMP_ABI_CALL(0x000BEF20u, sub_000BEF20); /* call 0x000BEF20 */

loc_000A078D: ;
    edx = MEM32(esi);
    edx = MEM32(edx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A079Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A079E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A07A0: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A07B0
 * Original: 0x000A07B0 - 0x000A07DA (42 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A07B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A07B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A07D5; /* je: equal / zero */

loc_000A07B9: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A07C3u); RECOMP_ABI_CALL(0x00066AC0u, sub_00066AC0); /* call 0x00066AC0 */

loc_000A07C3: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(eax);
    esp = esp + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A07D5: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A07E0
 * Original: 0x000A07E0 - 0x000A07EC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A07E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A07E0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A07EB; /* jne: not equal / not zero */

loc_000A07E6: ;
    eax = 0x5BC9D0;

loc_000A07EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A07F0
 * Original: 0x000A07F0 - 0x000A0800 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A07F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A07F0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A07FA; /* je: equal / zero */

loc_000A07F6: ;
    eax = eax + 0x10;
    esp += 4; return; /* ret */

loc_000A07FA: ;
    eax = 0x5BC9D0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0800
 * Original: 0x000A0800 - 0x000A0810 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0800: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A080A; /* je: equal / zero */

loc_000A0806: ;
    eax = eax + 0x20;
    esp += 4; return; /* ret */

loc_000A080A: ;
    eax = 0x5BC9D0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0810
 * Original: 0x000A0810 - 0x000A0820 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0810: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A081A; /* je: equal / zero */

loc_000A0816: ;
    eax = eax + 0x30;
    esp += 4; return; /* ret */

loc_000A081A: ;
    eax = 0x5BC9D0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0820
 * Original: 0x000A0820 - 0x000A0831 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0820(void)
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

loc_000A0820: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A082A; /* je: equal / zero */

loc_000A0826: ;
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    esp += 4; return; /* ret */

loc_000A082A: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0840
 * Original: 0x000A0840 - 0x000A08CD (141 bytes, 51 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000A0840(void)
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

loc_000A0840: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    eax = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000A086C; /* jne: not equal / not zero */

loc_000A0854: ;
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000A085Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A085C: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0xC); /* fsub dword ptr [esi + 0xc] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    fp_push(MEMF(eax)); /* fld float */
    goto loc_000A08AD;

loc_000A086C: ;
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000A0874u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0874: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0883; /* jne: not equal / not zero */

loc_000A087B: ;
    MEM32(esp + 4) = 0;

loc_000A0883: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A088F; /* jne: not equal / not zero */

loc_000A0887: ;
    MEM32(esp + 8) = 0;

loc_000A088F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A089B; /* jne: not equal / not zero */

loc_000A0893: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    goto loc_000A089F;

loc_000A089B: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_000A089F: ;
    fp_top() = fp_top() - MEMF(esi + 0xC); /* fsub dword ptr [esi + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 8); /* fsub dword ptr [esi + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_000A08AD: ;
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    POP32(esp, esi);
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
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A08D0
 * Original: 0x000A08D0 - 0x000A08E4 (20 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A08D0(void)
{

loc_000A08D0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x3D29C4;
    edx = MEM32(ecx);
    MEM32(eax + 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A08F0
 * Original: 0x000A08F0 - 0x000A0976 (134 bytes, 47 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000A08F0(void)
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

loc_000A08F0: ;
    eax = MEM32(ecx + 0x10);
    esp = esp - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0910; /* jne: not equal / not zero */

loc_000A08FB: ;
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0xC); /* fsub dword ptr [ecx + 0xc] */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 0x20)); /* fld float */
    goto loc_000A0957;

loc_000A0910: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(esp + 0x10);
    fp_push(MEMF(edx + 0x28)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x20);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 0x24);
    MEM32(esp + 8) = esi;
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_000A0932; /* jne: not equal / not zero */

loc_000A092B: ;
    MEM32(esp) = 0;

loc_000A0932: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A093E; /* jne: not equal / not zero */

loc_000A0936: ;
    MEM32(esp + 4) = 0;

loc_000A093E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A094A; /* jne: not equal / not zero */

loc_000A0942: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_000A094A: ;
    fp_top() = fp_top() - MEMF(ecx + 0xC); /* fsub dword ptr [ecx + 0xc] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    fp_push(MEMF(esp)); /* fld float */

loc_000A0957: ;
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
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
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0980
 * Original: 0x000A0980 - 0x000A09C3 (67 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0980(void)
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

loc_000A0980: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A09B9; /* je: equal / zero */

loc_000A0989: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A0990u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0990: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000A09B9; /* je: equal / zero */

loc_000A09AF: ;
    fp_push(MEMF(esi + 0x410)); /* fld float */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A09B9: ;
    fp_push(MEMF(0x3D29C8)); /* fld float */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A09D0
 * Original: 0x000A09D0 - 0x000A0A83 (179 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A09D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A09D0: ;
    SET_LO8(eax, MEM8(0x4C2AA4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 1;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000A09F0; /* jne: not equal / not zero */

loc_000A09E3: ;
    MEM32(0x4C2AA4) = MEM32(0x4C2AA4) | ebx;
    MEM8(0x4C2AA0) = 0;

loc_000A09F0: ;
    PUSH32(esp, 0x10);
    ecx = 0x4C2AA0;
    PUSH32(esp, 0x000A09FCu); RECOMP_ABI_CALL(0x00083730u, sub_00083730); /* call 0x00083730 */

loc_000A09FC: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0A7A; /* je: equal / zero */

loc_000A0A01: ;
    PUSH32(esp, 0x000A0A06u); RECOMP_ABI_CALL(0x000BEF20u, sub_000BEF20); /* call 0x000BEF20 */

loc_000A0A06: ;
    edx = MEM32(edi);
    edx = MEM32(edx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A0A17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0A17: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0A66; /* je: equal / zero */

loc_000A0A1D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A0A23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0A23: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0A66; /* je: equal / zero */

loc_000A0A3C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18C); PUSH32(esp, 0x000A0A46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0A46: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x10 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0A66; /* je: equal / zero */

loc_000A0A4B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x000A0A55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0A55: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(0x4C2AA0) = LO8(ecx);
    eax = 0x4C2AA0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A0A66: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0A7A; /* je: equal / zero */

loc_000A0A6C: ;
    edx = MEM32(edi + 0x2C);
    PUSH32(esp, edx);
    ecx = 0x4C2AA0;
    PUSH32(esp, 0x000A0A7Au); RECOMP_ABI_CALL(0x00083730u, sub_00083730); /* call 0x00083730 */

loc_000A0A7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0x4C2AA0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0A90
 * Original: 0x000A0A90 - 0x000A0A9A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0A90(void)
{

loc_000A0A90: ;
    eax = ecx;
    MEM32(eax + 0x68) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0AA0
 * Original: 0x000A0AA0 - 0x000A0AC3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0AA0: ;
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax;
    esi = 0x200;
    ecx = 0; /* xor self */
    /* nop */

loc_000A0AB0: ;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    edx = edx + 8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A0AB0; /* jne: not equal / not zero */

loc_000A0ABB: ;
    MEM32(eax + 0x1004) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0AD0
 * Original: 0x000A0AD0 - 0x000A0AE7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0AD0(void)
{

loc_000A0AD0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0xCC) = ecx;
    MEM32(eax + 0xD0) = ecx;
    MEM32(eax + 0xD4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000A0AF0
 * Original: 0x000A0AF0 - 0x000A0BBB (203 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0AF0(void)
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

loc_000A0AF0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0BA7; /* je: equal / zero */

loc_000A0AFF: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x000A0B08u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000A0B08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0BA7; /* je: equal / zero */

loc_000A0B10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000A0B24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0B24: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0B47; /* je: equal / zero */

loc_000A0B2C: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x000A0B35u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000A0B35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0B47; /* je: equal / zero */

loc_000A0B39: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000A0B47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0B47: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000A0B52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0B52: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx); /* fadd dword ptr [ecx] */
    edi = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esp + 0x10;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    fp_push(MEMF(eax + 4)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() + MEMF(ecx + 4); /* fadd dword ptr [ecx + 4] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx + 8); /* fadd dword ptr [ecx + 8] */
    ecx = MEM32(esi);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x000A0B88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0B88: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000A0B94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0B94: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 0x2C);
    POP32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(eax) = ecx;
    POP32(esp, esi);
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_000A0BA7: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0BC0
 * Original: 0x000A0BC0 - 0x000A0C52 (146 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0BC0(void)
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

loc_000A0BC0: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(eax + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    fp_push(MEMF(eax + 0x28)); /* fld float */
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    fp_top() = fp_top() - MEMF(ecx + 0xC); /* fsub dword ptr [ecx + 0xc] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
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
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0C20; /* jne: not equal / not zero */

loc_000A0C19: ;
    MEM32(esp) = 0;

loc_000A0C20: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0C2C; /* jne: not equal / not zero */

loc_000A0C24: ;
    MEM32(esp + 4) = 0;

loc_000A0C2C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0C38; /* jne: not equal / not zero */

loc_000A0C30: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_000A0C38: ;
    fp_top() = fp_top() * MEMF(ecx + 0x18); /* fmul dword ptr [ecx + 0x18] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x14); /* fmul dword ptr [ecx + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x10); /* fmul dword ptr [ecx + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0C60
 * Original: 0x000A0C60 - 0x000A0C6C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0C60(void)
{

loc_000A0C60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A0C68u); RECOMP_ABI_CALL(0x000A0A90u, sub_000A0A90); /* call 0x000A0A90 */

loc_000A0C68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0C70
 * Original: 0x000A0C70 - 0x000A0C7C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0C70(void)
{

loc_000A0C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A0C78u); RECOMP_ABI_CALL(0x0014B200u, sub_0014B200); /* call 0x0014B200 */

loc_000A0C78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0C80
 * Original: 0x000A0C80 - 0x000A0C8C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0C80(void)
{

loc_000A0C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A0C88u); RECOMP_ABI_CALL(0x000A0AA0u, sub_000A0AA0); /* call 0x000A0AA0 */

loc_000A0C88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0C90
 * Original: 0x000A0C90 - 0x000A0E0E (382 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0C90(void)
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

loc_000A0C90: ;
    esp = esp - 0x18;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 0x1004);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000A0D16; /* jle: less or equal (signed <=) */

loc_000A0CB3: ;
    eax = ebx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edi = eax;
    esi = ebx;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    /* nop */

loc_000A0CC0: ;
    fp_push(MEMF(ecx + edi * 8 + 4)); /* fld float */
    edx = ecx + edi * 8;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + esi * 8 + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + esi*8 + 4] */
    esi = ecx + esi * 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A0D07; /* jp: parity */

loc_000A0CD5: ;
    ebx = edx;
    eax = MEM32(ebx);
    ebx = MEM32(ebx + 4);
    MEM32(esp + 0x18) = ebx;
    ebx = esi;
    ebp = MEM32(ebx);
    MEM32(edx) = ebp;
    ebx = MEM32(ebx + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 4) = eax;
    eax = edi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = edi;
    edi = eax;
    goto loc_000A0CC0;

loc_000A0D07: ;
    eax = MEM32(ecx + 0x1004);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_000A0CB3; /* jl: less (signed <) */

loc_000A0D16: ;
    ebp = MEM32(ecx + 0x1004);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A0DFE; /* jle: less or equal (signed <=) */

loc_000A0D29: ;
    edx = ecx + ebp * 8;
    MEM32(esp + 0x14) = edx;

loc_000A0D30: ;
    esi = MEM32(esp + 0x14);
    ebx = MEM32(esi);
    edx = ecx;
    eax = MEM32(edx);
    edx = MEM32(edx + 4);
    edi = ecx;
    MEM32(edi) = ebx;
    esi = MEM32(esi + 4);
    MEM32(edi + 4) = esi;
    esi = MEM32(esp + 0x14);
    MEM32(esi) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    MEM32(esi + 4) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000A0D77; /* jle: less or equal (signed <=) */

loc_000A0D57: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A0D69; /* jle: less or equal (signed <=) */

loc_000A0D5C: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A0D70; /* jp: parity */

loc_000A0D69: ;
    edx = 1;
    goto loc_000A0D80;

loc_000A0D70: ;
    edx = 2;
    goto loc_000A0D80;

loc_000A0D77: ;
    edx = 0; /* xor self */
    /* nop */

loc_000A0D80: ;
    fp_push(MEMF(ecx + edi * 8 + 4)); /* fld float */
    esi = ecx + edi * 8;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + edx * 8 + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + edx*8 + 4] */
    edi = ecx + edx * 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A0DE6; /* jp: parity */

loc_000A0D95: ;
    ebx = edi;
    eax = MEM32(ebx);
    ebx = MEM32(ebx + 4);
    MEM32(esp + 0x20) = ebx;
    ebx = esi;
    ebp = MEM32(ebx);
    MEM32(edi) = ebp;
    ebx = MEM32(ebx + 4);
    ebp = MEM32(esp + 0x10);
    MEM32(edi + 4) = ebx;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 4) = eax;
    esi = edx + edx + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    edi = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000A0D80; /* jge: greater or equal (signed >=) */

loc_000A0DC3: ;
    ebx = edx + edx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A0DDE; /* jge: greater or equal (signed >=) */

loc_000A0DCB: ;
    edx = edx << 4;
    fp_push(MEMF(edx + ecx + 0x14)); /* fld float */
    edx = edx + ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A0DE2; /* jp: parity */

loc_000A0DDE: ;
    edx = esi;
    goto loc_000A0D80;

loc_000A0DE2: ;
    edx = ebx;
    goto loc_000A0D80;

loc_000A0DE6: ;
    edx = MEM32(esp + 0x14);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx - 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = edx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_000A0D30; /* jg: greater (signed >) */

loc_000A0DFE: ;
    ecx = MEM32(esp + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    g_seh_ebp = ebp; sub_00340F54(); return; /* tail jmp 0x00340F54 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0E10
 * Original: 0x000A0E10 - 0x000A0E1C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0E10(void)
{

loc_000A0E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A0E18u); RECOMP_ABI_CALL(0x000A0AD0u, sub_000A0AD0); /* call 0x000A0AD0 */

loc_000A0E18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A0E20
 * Original: 0x000A0E20 - 0x000A0E47 (39 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A0E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0E20: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    edx = edx & 0x1FF;
    SET_LO8(eax, MEM8(edx + ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0E42; /* je: equal / zero */

loc_000A0E34: ;
    eax = ZX8(LO8(eax));
    eax = eax << 6;
    eax = eax + 0x4C6410;
    esp += 8; return; /* ret 4 */

loc_000A0E42: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A0E50
 * Original: 0x000A0E50 - 0x000A0E86 (54 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0E50(void)
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

loc_000A0E50: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(ecx + 4);
    ecx = ecx + 0x58;
    eax = eax & 0x1FF;
    SET_LO8(eax, MEM8(eax + ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0E7D; /* je: equal / zero */

loc_000A0E6A: ;
    eax = ZX8(LO8(eax));
    eax = eax << 6;
    eax = eax + 0x4C6410;
    if ((eax == 0)) goto loc_000A0E7D; /* je: equal / zero */

loc_000A0E77: ;
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    esp += 8; return; /* ret 4 */

loc_000A0E7D: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0E90
 * Original: 0x000A0E90 - 0x000A0FB1 (289 bytes, 98 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0E90(void)
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

loc_000A0E90: ;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax + 8;
    MEM32(esi + 0x100C) = eax;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0x000A0EADu); RECOMP_ABI_CALL(0x000BEF20u, sub_000BEF20); /* call 0x000BEF20 */

loc_000A0EAD: ;
    edx = eax;
    MEM32(esi + 0x1008) = 0;
    eax = MEM32(edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = edx;
    MEM8(esp + 0x1C) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_000A0EEE; /* jne: not equal / not zero */

loc_000A0ECA: ;
    /* nop */

loc_000A0ED0: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A0FA9; /* jge: greater or equal (signed >=) */

loc_000A0EE2: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0ED0; /* je: equal / zero */

loc_000A0EEE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0EFB; /* jne: not equal / not zero */

loc_000A0EF5: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_000A0EFB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0F05; /* jne: not equal / not zero */

loc_000A0EFF: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_000A0F05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0F0F; /* jne: not equal / not zero */

loc_000A0F09: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_000A0F0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A0F1A; /* jne: not equal / not zero */

loc_000A0F13: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A0F13; /* je: equal / zero */

loc_000A0F1A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A0FA9; /* jge: greater or equal (signed >=) */

loc_000A0F26: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    edi = ecx;
    esi = esi + 4;
    goto loc_000A0F37;

loc_000A0F33: ;
    edx = MEM32(esp + 0x10);

loc_000A0F37: ;
    eax = MEM32(edx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = edx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A0F3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0F3F: ;
    edx = MEM32(ebx);
    ebp = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A0F48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A0F48: ;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    eax = MEM32(esi + 0x1004);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    edx = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = esi + eax * 8;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    MEM32(ecx) = ebp;
    MEM32(ecx + 4) = edx;
    eax = MEM32(esi + 0x1004);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1004) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000A0F81; /* jnp: not parity */

loc_000A0F7C: ;
    MEM8(esp + 0x24) = 1;

loc_000A0F81: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A0F8Eu); RECOMP_ABI_CALL(0x00057C60u, sub_00057C60); /* call 0x00057C60 */

loc_000A0F8E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A0F33; /* jl: less (signed <) */

loc_000A0F98: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000A0FA9; /* je: equal / zero */

loc_000A0FA2: ;
    ecx = esi;
    PUSH32(esp, 0x000A0FA9u); RECOMP_ABI_CALL(0x000A0C90u, sub_000A0C90); /* call 0x000A0C90 */

loc_000A0FA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0FC0
 * Original: 0x000A0FC0 - 0x000A1032 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0FC0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0xD5C;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0xD50);
    edi = MEM32(eax + 0xD58);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x32 (32-bit) */
    MEM32(eax + 0xD50) = ecx;
    MEM32(eax + 0xD58) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000A1018; /* jl: less (signed <) */

loc_000A1007: ;
    MEM32(eax + 0xD50) = 0;
    ecx = 0x31;
    goto loc_000A1019;

loc_000A1018: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000A1019: ;
    MEM32(eax + ecx * 4 + 0xC84) = esi;
    ecx = MEM32(eax + 0xD64);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0xD64) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1040
 * Original: 0x000A1040 - 0x000A109D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1040: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xD50) = esi;
    MEM32(ecx + 0xD54) = esi;
    MEM32(ecx + 0xD58) = esi;
    edx = 0; /* xor self */
    goto loc_000A1060;

    /* nop */

loc_000A1060: ;
    eax = MEM32(ecx + 0xD50);
    edi = MEM32(ecx + 0xD58);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    MEM32(ecx + 0xD50) = eax;
    MEM32(ecx + 0xD58) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000A108C; /* jl: less (signed <) */

loc_000A107F: ;
    MEM32(ecx + 0xD50) = esi;
    eax = 0x31;
    goto loc_000A108D;

loc_000A108C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000A108D: ;
    MEM32(ecx + eax * 4 + 0xC84) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A1060; /* jl: less (signed <) */

loc_000A109A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A10A0
 * Original: 0x000A10A0 - 0x000A10D4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A10A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A10A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x208;
    MEM32(esi) = 0x3D29D0;
    PUSH32(esp, 0x000A10B4u); RECOMP_ABI_CALL(0x000A0C60u, sub_000A0C60); /* call 0x000A0C60 */

loc_000A10B4: ;
    ecx = esi + 0x274;
    PUSH32(esp, 0x000A10BFu); RECOMP_ABI_CALL(0x000A0C70u, sub_000A0C70); /* call 0x000A0C70 */

loc_000A10BF: ;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    eax = 0; /* xor self */

loc_000A10C4: ;
    MEM8(eax + esi + 4) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A10C4; /* jl: less (signed <) */

loc_000A10D0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A10E0
 * Original: 0x000A10E0 - 0x000A10FC (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A10E0(void)
{

loc_000A10E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 4;
    MEM32(esi) = 0x3D29D8;
    PUSH32(esp, 0x000A10F1u); RECOMP_ABI_CALL(0x000A0C80u, sub_000A0C80); /* call 0x000A0C80 */

loc_000A10F1: ;
    MEM8(esi + 0x1010) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1100
 * Original: 0x000A1100 - 0x000A1107 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1100(void)
{

loc_000A1100: ;
    eax = MEM32(ecx + 0x1008);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1110
 * Original: 0x000A1110 - 0x000A111B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1110(void)
{

loc_000A1110: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 8 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1120
 * Original: 0x000A1120 - 0x000A117D (93 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1120: ;
    edx = MEM32(ecx + 0x100C);
    eax = MEM32(edx + 0x300);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1170; /* je: equal / zero */

loc_000A1130: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1170; /* je: equal / zero */

loc_000A1134: ;
    eax = MEM32(esp + 8);
    eax = MEM32(ecx + eax * 8 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1170; /* je: equal / zero */

loc_000A1140: ;
    eax = MEM32(eax + 0x1C);
    eax = eax & 0x1FF;
    SET_LO8(eax, MEM8(eax + edx + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1165; /* je: equal / zero */

loc_000A1150: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 4);
    ecx = ecx << 6;
    ecx = ecx + 0x4C6410;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_000A1165: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_000A1170: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A1180
 * Original: 0x000A1180 - 0x000A11AC (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1180(void)
{

loc_000A1180: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC84;
    PUSH32(esp, 0x000A118Eu); RECOMP_ABI_CALL(0x000A0E10u, sub_000A0E10); /* call 0x000A0E10 */

loc_000A118E: ;
    eax = 0; /* xor self */
    ecx = esi + 0xD5C;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    ecx = esi;
    MEM32(esi + 0xD64) = eax;
    PUSH32(esp, 0x000A11A8u); RECOMP_ABI_CALL(0x000A1040u, sub_000A1040); /* call 0x000A1040 */

loc_000A11A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A11B0
 * Original: 0x000A11B0 - 0x000A123A (138 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A11B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A11B0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(0x4C7174)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4C7174), 0x32 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A1233; /* je: equal / zero */

loc_000A11BD: ;
    ecx = 0x4C6410;
    PUSH32(esp, 0x000A11C7u); RECOMP_ABI_CALL(0x000A1260u, sub_000A1260); /* call 0x000A1260 */

loc_000A11C7: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM8(esp + 7) = LO8(eax);
    edx = edx & 0x1FF;
    MEM8(edx + esi + 4) = LO8(eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx));
    ecx = MEM32(esi + 0x270);
    eax = eax & 0x1FF;
    SET_LO16(edx, LO16(eax));
    MEM32(esp + 0xC) = eax;
    MEM16(esi + ecx * 2 + 0x208) = LO16(edx);
    MEM32(esi + 0x270) = MEM32(esi + 0x270) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x270)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esp + 7;
    PUSH32(esp, eax);
    ecx = esi + 0x274;
    PUSH32(esp, 0x000A1210u); RECOMP_ABI_CALL(0x000A1240u, sub_000A1240); /* call 0x000A1240 */

loc_000A1210: ;
    eax = ZX8(MEM8(esp + 7));
    ecx = MEM32(0x498D90);
    eax = eax << 6;
    eax = eax + 0x4C6410;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x3C) = 0;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A1233: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1240
 * Original: 0x000A1240 - 0x000A1253 (19 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1240: ;
    edx = MEM32(ecx + 0x34);
    eax = MEM32(esp + 4);
    SET_LO8(eax, MEM8(eax));
    edx = edx + ecx;
    MEM8(edx) = LO8(eax);
    MEM32(ecx + 0x34) = MEM32(ecx + 0x34) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1260
 * Original: 0x000A1260 - 0x000A12AA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1260: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xD54);
    eax = esi + 0xC84;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0xD5C);
    edx = esi + edx * 4 + 0xD5C;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x000A129Eu); RECOMP_ABI_CALL(0x000A12B0u, sub_000A12B0); /* call 0x000A12B0 */

loc_000A129E: ;
    MEM32(esi + 0xD64) = MEM32(esi + 0xD64) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xD64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A12B0
 * Original: 0x000A12B0 - 0x000A12DA (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A12B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A12B0: ;
    eax = MEM32(ecx + 0xD0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xD0) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x32 (32-bit) */
    eax = MEM32(ecx + 0xD4);
    if (CMP_L(_fas, _fbs)) goto loc_000A12D2; /* jl: less (signed <) */

loc_000A12C8: ;
    MEM32(ecx + 0xD0) = 0;

loc_000A12D2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xD4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000A12E0
 * Original: 0x000A12E0 - 0x000A1362 (130 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A12E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A12E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1360; /* je: equal / zero */

loc_000A12ED: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A131E; /* jle: less or equal (signed <=) */

loc_000A12F4: ;
    goto loc_000A1300;

    /* nop */
    /* nop */

loc_000A1300: ;
    eax = ZX8(MEM8(esi + edi + 0x274));
    PUSH32(esp, eax);
    ecx = 0x4C6410;
    PUSH32(esp, 0x000A1313u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_000A1313: ;
    eax = MEM32(esi + 0x2A8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A1300; /* jl: less (signed <) */

loc_000A131E: ;
    MEM32(esi + 0x2A8) = 0;
    ecx = MEM32(esi + 0x270);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A1355; /* jle: less or equal (signed <=) */

loc_000A1334: ;
    ecx = esi + 0x208;
    SET_LO8(edx, 0xFF);
    /* nop */

loc_000A1340: ;
    edi = ZX16(MEM16(ecx));
    MEM8(edi + esi + 4) = LO8(edx);
    edi = MEM32(esi + 0x270);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A1340; /* jl: less (signed <) */

loc_000A1355: ;
    MEM32(esi + 0x270) = 0;
    POP32(esp, edi);

loc_000A1360: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1370
 * Original: 0x000A1370 - 0x000A13EA (122 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1370(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1370: ;
    edx = MEM32(0x48D8FC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edx = edx + 0x21;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000A1388u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1388: ;
    ebp = ebx + 8;
    esi = eax;
    ecx = 0x10;
    edi = ebp;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A13D2; /* je: equal / zero */

loc_000A13A2: ;
    ecx = esi;
    PUSH32(esp, 0x000A13A9u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000A13A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A13D2; /* je: equal / zero */

loc_000A13AD: ;
    ecx = MEM32(esi);
    ecx = ecx & 0x1FF;
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(ebp + eax * 4);
    eax = ebp + eax * 4;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_000A13D2: ;
    ecx = ebx + 0x58;
    MEM32(ebx + 0x54) = edi;
    PUSH32(esp, 0x000A13DDu); RECOMP_ABI_CALL(0x000A12E0u, sub_000A12E0); /* call 0x000A12E0 */

loc_000A13DD: ;
    MEM32(ebx + 0x48) = edi;
    MEM32(ebx + 0x4C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A13F0
 * Original: 0x000A13F0 - 0x000A1403 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A13F0(void)
{

loc_000A13F0: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 3);
    PUSH32(esp, 0x304);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A1402u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000A1402: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A1410
 * Original: 0x000A1410 - 0x000A141C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1410(void)
{

loc_000A1410: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A1418u); RECOMP_ABI_CALL(0x000A1180u, sub_000A1180); /* call 0x000A1180 */

loc_000A1418: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1420
 * Original: 0x000A1420 - 0x000A1467 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1420(void)
{

loc_000A1420: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x3D29EC;
    PUSH32(esp, 0x000A1430u); RECOMP_ABI_CALL(0x000BEF20u, sub_000BEF20); /* call 0x000BEF20 */

loc_000A1430: ;
    MEM32(esi + 4) = eax;
    eax = 0; /* xor self */
    ecx = 0x10;
    edi = esi + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(esi + 0x50) = LO8(eax);
    ecx = esi + 0x58;
    MEM32(esi + 0x54) = eax;
    PUSH32(esp, 0x000A144Du); RECOMP_ABI_CALL(0x000A10A0u, sub_000A10A0); /* call 0x000A10A0 */

loc_000A144D: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x000A1461u); RECOMP_ABI_CALL(0x000A1370u, sub_000A1370); /* call 0x000A1370 */

loc_000A1461: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1470
 * Original: 0x000A1470 - 0x000A14AD (61 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1470(void)
{

loc_000A1470: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    edi = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A1497u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000A1497: ;
    edx = MEM32(esp + 0x2C);
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x60); PUSH32(esp, 0x000A14A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A14A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000A14B0
 * Original: 0x000A14B0 - 0x000A14DB (43 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A14B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A14B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A14B8u); RECOMP_ABI_CALL(0x00057A20u, sub_00057A20); /* call 0x00057A20 */

loc_000A14B8: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    esi = esi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A14D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A14D7: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A14E0
 * Original: 0x000A14E0 - 0x000A1530 (80 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A14E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A14E0: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000A1508; /* je: equal / zero */

loc_000A14EB: ;
    PUSH32(esp, 0x000A14F0u); RECOMP_ABI_CALL(0x00057A20u, sub_00057A20); /* call 0x00057A20 */

loc_000A14F0: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    esi = esi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A1504u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1504: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000A1508: ;
    PUSH32(esp, 0x000A150Du); RECOMP_ABI_CALL(0x00057A20u, sub_00057A20); /* call 0x00057A20 */

loc_000A150D: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    edx = MEM32(eax);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    esi = esi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A152Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A152C: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A1530
 * Original: 0x000A1530 - 0x000A155F (47 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1530(void)
{

loc_000A1530: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A1538u); RECOMP_ABI_CALL(0x00057A20u, sub_00057A20); /* call 0x00057A20 */

loc_000A1538: ;
    edx = MEM32(eax);
    ecx = esi + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    esi = esi + 8;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A155Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A155B: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A1560
 * Original: 0x000A1560 - 0x000A158D (45 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1560(void)
{

loc_000A1560: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    edi = MEM32(esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000A157Eu); RECOMP_ABI_CALL(0x00067F20u, sub_00067F20); /* call 0x00067F20 */

loc_000A157E: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 4); PUSH32(esp, 0x000A1587u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1587: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1590
 * Original: 0x000A1590 - 0x000A15FE (110 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A1590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1590: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A15BA; /* jne: not equal / not zero */

loc_000A1599: ;
    /* nop */

loc_000A15A0: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A15FB; /* jge: greater or equal (signed >=) */

loc_000A15AD: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(ecx + edx * 4 + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A15A0; /* je: equal / zero */

loc_000A15BA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A15C8; /* jne: not equal / not zero */

loc_000A15C2: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_000A15C8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A15D2; /* jne: not equal / not zero */

loc_000A15CC: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_000A15D2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A15DD; /* jne: not equal / not zero */

loc_000A15D7: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_000A15DD: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A15EA; /* jne: not equal / not zero */

loc_000A15E2: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A15E2; /* je: equal / zero */

loc_000A15EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A15FB; /* jge: greater or equal (signed >=) */

loc_000A15F1: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A15FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A15FA: ;
    esp += 4; return; /* ret */

loc_000A15FB: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000A15C5
 * Original: 0x000A15C5 - 0x000A15FE (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A15C5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A15C5: ;
    edx = edx >> 0x10;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A15D2; /* jne: not equal / not zero */

loc_000A15CC: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_000A15D2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A15DD; /* jne: not equal / not zero */

loc_000A15D7: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_000A15DD: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A15EA; /* jne: not equal / not zero */

loc_000A15E2: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A15E2; /* je: equal / zero */

loc_000A15EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A15FB; /* jge: greater or equal (signed >=) */

loc_000A15F1: ;
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A15FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A15FA: ;
    esp += 4; return; /* ret */

loc_000A15FB: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000A1600
 * Original: 0x000A1600 - 0x000A1636 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A1600: ;
    eax = MEM32(ecx + 0x300);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A161D; /* je: equal / zero */

loc_000A160A: ;
    eax = MEM32(ecx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1633; /* jne: not equal / not zero */

loc_000A1611: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x000A1616u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1616: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000A161D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;

loc_000A1622: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A1633; /* jne: not equal / not zero */

loc_000A1627: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000A1622; /* jl: less (signed <) */

loc_000A1630: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A1633: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000A1640
 * Original: 0x000A1640 - 0x000A1673 (51 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1640: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A166E; /* je: equal / zero */

loc_000A164D: ;
    ecx = esi;
    PUSH32(esp, 0x000A1654u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000A1654: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A166E; /* je: equal / zero */

loc_000A1658: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    eax = eax & 0x1FF;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000A166Eu); RECOMP_ABI_CALL(0x000A1680u, sub_000A1680); /* call 0x000A1680 */

loc_000A166E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A1680
 * Original: 0x000A1680 - 0x000A172F (175 bytes, 61 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1680: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_000A16C8; /* jne: not equal / not zero */

loc_000A168B: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A172B; /* je: equal / zero */

loc_000A1697: ;
    ecx = MEM32(esp + 0xC);
    edx = ecx;
    ecx = ecx & 0x1F;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(eax + edx * 4 + 8);
    edx = eax + edx * 4 + 8;
    ecx = ecx | esi;
    MEM32(edx) = ecx;
    MEM32(eax + 0x48) = 0;
    MEM32(eax + 0x4C) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000A16C8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A16F8; /* jne: not equal / not zero */

loc_000A16CD: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A172B; /* je: equal / zero */

loc_000A16D5: ;
    ecx = MEM32(esp + 0xC);
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 8;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, esi);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

loc_000A16F8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A172B; /* jne: not equal / not zero */

loc_000A16FD: ;
    edx = MEM32(esp + 0xC);
    ecx = edx;
    ecx = ecx & 0x1F;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x14));
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + ecx * 4 + 8), esi (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax + 8;
    PUSH32(esp, 0x000A172Au); RECOMP_ABI_CALL(0x000A1730u, sub_000A1730); /* call 0x000A1730 */

loc_000A172A: ;
    POP32(esp, ebx);

loc_000A172B: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A1730
 * Original: 0x000A1730 - 0x000A1770 (64 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1730: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    ecx = MEM32(esp + 4);
    edx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000A1755; /* je: equal / zero */

loc_000A1740: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    esp += 12; return; /* ret 8 */

loc_000A1755: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A1770
 * Original: 0x000A1770 - 0x000A17C0 (80 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1770(void)
{

loc_000A1770: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A1779u); RECOMP_ABI_CALL(0x00057A20u, sub_00057A20); /* call 0x00057A20 */

loc_000A1779: ;
    ecx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = MEM32(eax);
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A17ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A17AC: ;
    edx = MEM32(esp + 4);
    MEM32(esi + 0x54) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A17C0
 * Original: 0x000A17C0 - 0x000A1858 (152 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A17C0(void)
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

loc_000A17C0: ;
    eax = MEM32(esp + 8);
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A17D5u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000A17D5: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    esp = esp + 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A17E8; /* jne: not equal / not zero */

loc_000A17E0: ;
    MEM32(esp + 4) = 0;

loc_000A17E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A17F4; /* jne: not equal / not zero */

loc_000A17EC: ;
    MEM32(esp + 8) = 0;

loc_000A17F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1800; /* jne: not equal / not zero */

loc_000A17F8: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    goto loc_000A1804;

loc_000A1800: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_000A1804: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 0x14);
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    ecx = MEM32(esp + 0x24);
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(esi);
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    ecx = esi;
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000A1851u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1851: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A1860
 * Original: 0x000A1860 - 0x000A18E6 (134 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1860: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A18DE; /* je: equal / zero */

loc_000A1871: ;
    ecx = ebp;
    PUSH32(esp, 0x000A1878u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000A1878: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A18DE; /* je: equal / zero */

loc_000A187C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000A1885u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000A1885: ;
    edi = eax;
    PUSH32(esp, 0x000A188Cu); RECOMP_ABI_CALL(0x00057A20u, sub_00057A20); /* call 0x00057A20 */

loc_000A188C: ;
    ebx = eax;
    eax = MEM32(ebx);
    ecx = ebp;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x000A189Bu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000A189B: ;
    edx = MEM32(esi + 0x4C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esi + 0x58;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x48);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000A18BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A18BC: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x58);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A18D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A18D5: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(esi + 0x54) = ecx;
    POP32(esp, ebx);

loc_000A18DE: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A18F0
 * Original: 0x000A18F0 - 0x000A1915 (37 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A18F0(void)
{

loc_000A18F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    PUSH32(esp, 0x000A18FBu); RECOMP_ABI_CALL(0x000A1920u, sub_000A1920); /* call 0x000A1920 */

loc_000A18FB: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, 2);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x000A1911u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1911: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1920
 * Original: 0x000A1920 - 0x000A1935 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1920: ;
    eax = 0; /* xor self */

loc_000A1922: ;
    edx = MEM32(ecx + eax * 4);
    edx = ~edx;
    MEM32(ecx + eax * 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A1922; /* jl: less (signed <) */

loc_000A1930: ;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_000A1940
 * Original: 0x000A1940 - 0x000A1969 (41 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1940: ;
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, esi);

loc_000A1945: ;
    esi = MEM32(ecx + eax * 4 + 8);
    esi = ~esi;
    MEM32(ecx + eax * 4 + 8) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A1945; /* jl: less (signed <) */

loc_000A1955: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x48D8F8);
    PUSH32(esp, 2);
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x4C) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x000A1967u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1967: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1970
 * Original: 0x000A1970 - 0x000A1B2E (446 bytes, 153 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1970(void)
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

loc_000A1970: ;
    esp = esp - 0x28;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    ecx = eax;
    PUSH32(esp, esi);
    ecx = ecx & 1;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x40) = ecx;
    if ((ecx != 0)) goto loc_000A19B2; /* jne: not equal / not zero */

loc_000A19AE: ;
    MEM32(esp + 0x20) = edx;

loc_000A19B2: ;
    ecx = eax;
    ecx = ecx & 2;
    MEM32(esp + 0x18) = ecx;
    if ((ecx != 0)) goto loc_000A19C5; /* jne: not equal / not zero */

loc_000A19BD: ;
    MEM32(esp + 0x24) = 0;

loc_000A19C5: ;
    eax = eax & 4;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_000A19D6; /* jne: not equal / not zero */

loc_000A19CE: ;
    MEM32(esp + 0x28) = 0;

loc_000A19D6: ;
    eax = MEM32(ebx + 8);
    ebp = ebx + 8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1A01; /* jne: not equal / not zero */

loc_000A19E2: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A1B22; /* jge: greater or equal (signed >=) */

loc_000A19F4: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(ebp + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A19E2; /* je: equal / zero */

loc_000A1A01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1A0E; /* jne: not equal / not zero */

loc_000A1A08: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_000A1A0E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1A18; /* jne: not equal / not zero */

loc_000A1A12: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_000A1A18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1A22; /* jne: not equal / not zero */

loc_000A1A1C: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_000A1A22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1A2D; /* jne: not equal / not zero */

loc_000A1A26: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1A26; /* je: equal / zero */

loc_000A1A2D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A1B22; /* jge: greater or equal (signed >=) */

loc_000A1A39: ;
    edi = ecx;
    goto loc_000A1A40;

    /* nop */

loc_000A1A40: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A1A4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1A4D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1AFB; /* je: equal / zero */

loc_000A1A57: ;
    eax = MEM32(esi + 0x1C);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = ebx + 0x58;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x000A1A6Bu); RECOMP_ABI_CALL(0x000A0E20u, sub_000A0E20); /* call 0x000A0E20 */

loc_000A1A6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1A72; /* jne: not equal / not zero */

loc_000A1A6F: ;
    eax = esi + 0x20;

loc_000A1A72: ;
    edx = MEM32(eax);
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000A1A92; /* jne: not equal / not zero */

loc_000A1A8A: ;
    MEM32(esp + 0x2C) = 0;

loc_000A1A92: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1AA2; /* jne: not equal / not zero */

loc_000A1A9A: ;
    MEM32(esp + 0x30) = 0;

loc_000A1AA2: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1AB2; /* jne: not equal / not zero */

loc_000A1AAA: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_000A1AB2: ;
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
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
    if (TEST_Z(_fa, _fb)) goto loc_000A1AEF; /* je: equal / zero */

loc_000A1AE4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A1AF9; /* jp: parity */

loc_000A1AEF: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = esi;
    goto loc_000A1AFB;

loc_000A1AF9: ;
    fp_pop(); /* fstp st(0) */

loc_000A1AFB: ;
    PUSH32(esp, 1);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000A1B06u); RECOMP_ABI_CALL(0x00057C60u, sub_00057C60); /* call 0x00057C60 */

loc_000A1B06: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A1A40; /* jl: less (signed <) */

loc_000A1B14: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

loc_000A1B22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edx;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A1B30
 * Original: 0x000A1B30 - 0x000A1CE0 (432 bytes, 149 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1B30(void)
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

loc_000A1B30: ;
    esp = esp - 0x30;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, ebp);
    edx = 0; /* xor self */
    ecx = eax;
    PUSH32(esp, esi);
    ecx = ecx & 1;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x44) = ecx;
    if ((ecx != 0)) goto loc_000A1B72; /* jne: not equal / not zero */

loc_000A1B6E: ;
    MEM32(esp + 0x1C) = edx;

loc_000A1B72: ;
    ecx = eax;
    ecx = ecx & 2;
    MEM32(esp + 0x48) = ecx;
    if ((ecx != 0)) goto loc_000A1B85; /* jne: not equal / not zero */

loc_000A1B7D: ;
    MEM32(esp + 0x20) = 0;

loc_000A1B85: ;
    eax = eax & 4;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_000A1B96; /* jne: not equal / not zero */

loc_000A1B8E: ;
    MEM32(esp + 0x24) = 0;

loc_000A1B96: ;
    eax = MEM32(ebx + 8);
    ebp = ebx + 8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1BC1; /* jne: not equal / not zero */

loc_000A1BA2: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A1CD4; /* jge: greater or equal (signed >=) */

loc_000A1BB4: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(ebp + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1BA2; /* je: equal / zero */

loc_000A1BC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1BCE; /* jne: not equal / not zero */

loc_000A1BC8: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_000A1BCE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1BD8; /* jne: not equal / not zero */

loc_000A1BD2: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_000A1BD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1BE2; /* jne: not equal / not zero */

loc_000A1BDC: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_000A1BE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1BED; /* jne: not equal / not zero */

loc_000A1BE6: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1BE6; /* je: equal / zero */

loc_000A1BED: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A1CD4; /* jge: greater or equal (signed >=) */

loc_000A1BF9: ;
    edi = ecx;
    goto loc_000A1C00;

    /* nop */

loc_000A1C00: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edi;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A1C0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1C0D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1CAD; /* je: equal / zero */

loc_000A1C17: ;
    PUSH32(esp, esi);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000A1C24u); RECOMP_ABI_CALL(0x000A1CE0u, sub_000A1CE0); /* call 0x000A1CE0 */

loc_000A1C24: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_000A1C44; /* jne: not equal / not zero */

loc_000A1C3C: ;
    MEM32(esp + 0x28) = 0;

loc_000A1C44: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1C54; /* jne: not equal / not zero */

loc_000A1C4C: ;
    MEM32(esp + 0x2C) = 0;

loc_000A1C54: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1C64; /* jne: not equal / not zero */

loc_000A1C5C: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_000A1C64: ;
    fp_top() = fp_top() - MEMF(esp + 0x24); /* fsub dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
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
    if (TEST_Z(_fa, _fb)) goto loc_000A1CA1; /* je: equal / zero */

loc_000A1C96: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A1CAB; /* jp: parity */

loc_000A1CA1: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x10) = esi;
    goto loc_000A1CAD;

loc_000A1CAB: ;
    fp_pop(); /* fstp st(0) */

loc_000A1CAD: ;
    PUSH32(esp, 1);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000A1CB8u); RECOMP_ABI_CALL(0x00057C60u, sub_00057C60); /* call 0x00057C60 */

loc_000A1CB8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A1C00; /* jl: less (signed <) */

loc_000A1CC6: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 12; return; /* ret 8 */

loc_000A1CD4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = edx;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A1CE0
 * Original: 0x000A1CE0 - 0x000A1D2F (79 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1CE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x1C);
    eax = eax & 0x1FF;
    SET_LO8(eax, MEM8(eax + ecx + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1D1B; /* je: equal / zero */

loc_000A1CF5: ;
    edx = ZX8(LO8(eax));
    edx = edx << 6;
    edx = edx + 0x4C6410;
    if ((edx == 0)) goto loc_000A1D1B; /* je: equal / zero */

loc_000A1D03: ;
    ecx = MEM32(edx);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A1D1B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000A1D28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1D28: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A1D30
 * Original: 0x000A1D30 - 0x000A1DB3 (131 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x300);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000A1DA4; /* je: equal / zero */

loc_000A1D3E: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = esi + 0x54;
    if (TEST_Z(_fa, _fb)) goto loc_000A1D86; /* je: equal / zero */

loc_000A1D48: ;
    ecx = edi;
    PUSH32(esp, 0x000A1D4Fu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000A1D4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1D86; /* je: equal / zero */

loc_000A1D53: ;
    eax = MEM32(edi);
    eax = eax & 0x1FF;
    SET_LO8(eax, MEM8(eax + esi + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1D79; /* je: equal / zero */

loc_000A1D62: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 0xC);
    ecx = ecx << 6;
    ecx = ecx + 0x4C6410;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A1D79: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A1D86: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000A1D8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1D8D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1DA4; /* je: equal / zero */

loc_000A1D91: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000A1D9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A1D9D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A1DA4: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1DC0
 * Original: 0x000A1DC0 - 0x000A1E05 (69 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1DC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000A1DCEu); RECOMP_ABI_CALL(0x00066AC0u, sub_00066AC0); /* call 0x00066AC0 */

loc_000A1DCE: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x1FF;
    SET_LO8(eax, MEM8(ecx + esi + 0x5C));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A1DF8; /* je: equal / zero */

loc_000A1DE2: ;
    eax = ZX8(LO8(eax));
    eax = eax << 6;
    eax = eax + 0x4C6410;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(edx));
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A1DF8: ;
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(edx));
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1E10
 * Original: 0x000A1E10 - 0x000A1E54 (68 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1E10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000A1E1Eu); RECOMP_ABI_CALL(0x00066AC0u, sub_00066AC0); /* call 0x00066AC0 */

loc_000A1E1E: ;
    ecx = MEM32(eax);
    ecx = ecx & 0x1FF;
    SET_LO8(eax, MEM8(ecx + esi + 0x5C));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A1E48; /* je: equal / zero */

loc_000A1E32: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(esp + 8);
    ecx = ecx << 6;
    ecx = ecx + 0x4C6410;
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A1E48: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A1E60
 * Original: 0x000A1E60 - 0x000A1E94 (52 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1E60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x000A1E79u); RECOMP_ABI_CALL(0x000A1EA0u, sub_000A1EA0); /* call 0x000A1EA0 */

loc_000A1E79: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1E8E; /* jne: not equal / not zero */

loc_000A1E7E: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx + 0x48);
    MEM32(esi + 0x48) = MEM32(esi + 0x48) | edx;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x4C);
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) | ecx;

loc_000A1E8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A1EA0
 * Original: 0x000A1EA0 - 0x000A1FCC (300 bytes, 115 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1EA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1EA0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_000A1EFA; /* jne: not equal / not zero */

loc_000A1EB0: ;
    edx = MEM32(esp + 0x54);
    esi = edi + 8;
    ecx = edx + 0xC;
    eax = esi + 4;
    edx = edx - esi;
    esi = 4;

loc_000A1EC4: ;
    ebp = MEM32(ecx + -12);
    MEM32(eax + -4) = MEM32(eax + -4) | ebp;
    ebp = MEM32(edx + eax);
    MEM32(eax) = MEM32(eax) | ebp;
    ebp = MEM32(ecx + -4);
    MEM32(eax + 4) = MEM32(eax + 4) | ebp;
    ebp = MEM32(ecx);
    MEM32(eax + 8) = MEM32(eax + 8) | ebp;
    eax = eax + 0x10;
    ecx = ecx + 0x10;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A1EC4; /* jne: not equal / not zero */

loc_000A1EE3: ;
    MEM32(edi + 0x48) = 0;
    MEM32(edi + 0x4C) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000A1EFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000A1F75; /* jne: not equal / not zero */

loc_000A1F00: ;
    eax = MEM32(esp + 0x58);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000A1F0Eu); RECOMP_ABI_CALL(0x000A1FD0u, sub_000A1FD0); /* call 0x000A1FD0 */

loc_000A1F0E: ;
    eax = 0; /* xor self */

loc_000A1F10: ;
    ecx = MEM32(esp + eax * 4 + 0x10);
    ecx = ~ecx;
    MEM32(esp + eax * 4 + 0x10) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A1F10; /* jl: less (signed <) */

loc_000A1F20: ;
    edx = edi + 8;
    esi = esp + 0x10;
    edi = esp + 0x14;
    ecx = 0; /* xor self */
    esi = esi - edx;
    eax = edx + 8;
    edi = edi - edx;

loc_000A1F34: ;
    edx = MEM32(esp + ecx * 4 + 0x10);
    ebx = MEM32(eax + -8);
    ebp = MEM32(eax + -4);
    ebx = ebx & edx;
    edx = MEM32(esp + ecx * 4 + 0x14);
    ebp = ebp & edx;
    edx = MEM32(esi + eax);
    MEM32(eax + -8) = ebx;
    ebx = MEM32(eax);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(eax + 4);
    ebx = ebx & edx;
    edx = MEM32(edi + eax);
    ebp = ebp & edx;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebp;
    ecx = ecx + 4;
    eax = eax + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A1F34; /* jl: less (signed <) */

loc_000A1F6B: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000A1F75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1FC2; /* jne: not equal / not zero */

loc_000A1F7A: ;
    edx = MEM32(esp + 0x58);
    esi = edi + 8;
    ecx = edx + 0xC;
    eax = esi + 4;
    edx = edx - esi;
    esi = 4;
    edi = edi;

loc_000A1F90: ;
    edi = MEM32(ecx + -12);
    ebp = MEM32(eax + -4);
    ebx = MEM32(eax);
    ebp = ebp & edi;
    MEM32(eax + -4) = ebp;
    edi = MEM32(edx + eax);
    ebp = MEM32(eax + 4);
    ebx = ebx & edi;
    MEM32(eax) = ebx;
    edi = MEM32(ecx + -4);
    ebx = MEM32(eax + 8);
    ebp = ebp & edi;
    MEM32(eax + 4) = ebp;
    edi = MEM32(ecx);
    ebx = ebx & edi;
    MEM32(eax + 8) = ebx;
    eax = eax + 0x10;
    ecx = ecx + 0x10;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A1F90; /* jne: not equal / not zero */

loc_000A1FC2: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A1FD0
 * Original: 0x000A1FD0 - 0x000A1FF3 (35 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1FD0(void)
{

loc_000A1FD0: ;
    edx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x10;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x10;
    edi = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2000
 * Original: 0x000A2000 - 0x000A2025 (37 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2000(void)
{

loc_000A2000: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A2008u); RECOMP_ABI_CALL(0x0006BF00u, sub_0006BF00); /* call 0x0006BF00 */

loc_000A2008: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A2014u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2014: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A2021u); RECOMP_ABI_CALL(0x000A1EA0u, sub_000A1EA0); /* call 0x000A1EA0 */

loc_000A2021: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A2030
 * Original: 0x000A2030 - 0x000A2089 (89 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2030: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, 0x000A204Au); RECOMP_ABI_CALL(0x00027B00u, sub_00027B00); /* call 0x00027B00 */

loc_000A204A: ;
    ecx = MEM32(esi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x34); PUSH32(esp, 0x000A2051u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2051: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A2070; /* jne: not equal / not zero */

loc_000A2055: ;
    _fa = (uint32_t)(MEM32(esp + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x4C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A2081; /* jne: not equal / not zero */

loc_000A205C: ;
    edi = esi + 8;
    ecx = 0x10;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000A2070: ;
    eax = MEM32(esp + 0x4C);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A2081u); RECOMP_ABI_CALL(0x000A1EA0u, sub_000A1EA0); /* call 0x000A1EA0 */

loc_000A2081: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A2090
 * Original: 0x000A2090 - 0x000A21DD (333 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2090(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2090: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000A2167; /* jne: not equal / not zero */

loc_000A20A5: ;
    eax = edx + -6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A215B; /* ja: above (unsigned >) */

loc_000A20B1: ;
    eax = ZX8(MEM8(eax + 0xA2208));
    { uint32_t _jt = MEM32(eax * 4 + 0xA21E0); /* switch: 10 entries, 10 targets */
    if (_jt == 0x000A20BFu) goto loc_000A20BF;
    if (_jt == 0x000A20D1u) goto loc_000A20D1;
    if (_jt == 0x000A20E3u) goto loc_000A20E3;
    if (_jt == 0x000A20F5u) goto loc_000A20F5;
    if (_jt == 0x000A2107u) goto loc_000A2107;
    if (_jt == 0x000A2119u) goto loc_000A2119;
    if (_jt == 0x000A212Bu) goto loc_000A212B;
    if (_jt == 0x000A213Du) goto loc_000A213D;
    if (_jt == 0x000A214Cu) goto loc_000A214C;
    if (_jt == 0x000A215Bu) goto loc_000A215B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A20BF: ;
    ecx = MEM32(esi + 0x4C);
    eax = 1;
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

loc_000A20D1: ;
    ecx = MEM32(esi + 0x4C);
    eax = 2;
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

loc_000A20E3: ;
    ecx = MEM32(esi + 0x4C);
    eax = 4;
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

loc_000A20F5: ;
    ecx = MEM32(esi + 0x4C);
    eax = 8;
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

loc_000A2107: ;
    ecx = MEM32(esi + 0x4C);
    eax = 0x10;
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

loc_000A2119: ;
    ecx = MEM32(esi + 0x4C);
    eax = 0x20;
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

loc_000A212B: ;
    ecx = MEM32(esi + 0x4C);
    eax = 0x40;
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

loc_000A213D: ;
    ecx = MEM32(esi + 0x4C);
    eax = 0x80;
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

loc_000A214C: ;
    ecx = MEM32(esi + 0x4C);
    eax = 0x100;
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

loc_000A215B: ;
    ecx = MEM32(esi + 0x4C);
    eax = 0; /* xor self */
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

loc_000A2167: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A21C6; /* jne: not equal / not zero */

loc_000A216C: ;
    eax = edx + -6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A21C1; /* ja: above (unsigned >) */

loc_000A2174: ;
    ecx = ZX8(MEM8(eax + 0xA2244));
    { uint32_t _jt = MEM32(ecx * 4 + 0xA221C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x000A2182u) goto loc_000A2182;
    if (_jt == 0x000A2189u) goto loc_000A2189;
    if (_jt == 0x000A2190u) goto loc_000A2190;
    if (_jt == 0x000A2197u) goto loc_000A2197;
    if (_jt == 0x000A219Eu) goto loc_000A219E;
    if (_jt == 0x000A21A5u) goto loc_000A21A5;
    if (_jt == 0x000A21ACu) goto loc_000A21AC;
    if (_jt == 0x000A21B3u) goto loc_000A21B3;
    if (_jt == 0x000A21BAu) goto loc_000A21BA;
    if (_jt == 0x000A21C1u) goto loc_000A21C1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A2182: ;
    eax = 1;
    goto loc_000A21C3;

loc_000A2189: ;
    eax = 2;
    goto loc_000A21C3;

loc_000A2190: ;
    eax = 4;
    goto loc_000A21C3;

loc_000A2197: ;
    eax = 8;
    goto loc_000A21C3;

loc_000A219E: ;
    eax = 0x10;
    goto loc_000A21C3;

loc_000A21A5: ;
    eax = 0x20;
    goto loc_000A21C3;

loc_000A21AC: ;
    eax = 0x40;
    goto loc_000A21C3;

loc_000A21B3: ;
    eax = 0x80;
    goto loc_000A21C3;

loc_000A21BA: ;
    eax = 0x100;
    goto loc_000A21C3;

loc_000A21C1: ;
    eax = 0; /* xor self */

loc_000A21C3: ;
    MEM32(esi + 0x48) = MEM32(esi + 0x48) | eax;

loc_000A21C6: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000A21CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A21CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000A21D8u); RECOMP_ABI_CALL(0x000A1EA0u, sub_000A1EA0); /* call 0x000A1EA0 */

loc_000A21D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A214C
 * Original: 0x000A214C - 0x000A21DD (145 bytes, 48 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A214C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A214C: ;
    ecx = MEM32(esi + 0x4C);
    eax = 0x100;
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

    ecx = MEM32(esi + 0x4C);
    eax = 0; /* xor self */
    ecx = ecx | eax;
    MEM32(esi + 0x4C) = ecx;
    goto loc_000A21C6;

    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A21C6; /* jne: not equal / not zero */

loc_000A216C: ;
    eax = edx + -6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A21C1; /* ja: above (unsigned >) */

loc_000A2174: ;
    ecx = ZX8(MEM8(eax + 0xA2244));
    { uint32_t _jt = MEM32(ecx * 4 + 0xA221C); /* switch: 10 entries, 10 targets */
    if (_jt == 0x000A2182u) goto loc_000A2182;
    if (_jt == 0x000A2189u) goto loc_000A2189;
    if (_jt == 0x000A2190u) goto loc_000A2190;
    if (_jt == 0x000A2197u) goto loc_000A2197;
    if (_jt == 0x000A219Eu) goto loc_000A219E;
    if (_jt == 0x000A21A5u) goto loc_000A21A5;
    if (_jt == 0x000A21ACu) goto loc_000A21AC;
    if (_jt == 0x000A21B3u) goto loc_000A21B3;
    if (_jt == 0x000A21BAu) goto loc_000A21BA;
    if (_jt == 0x000A21C1u) goto loc_000A21C1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A2182: ;
    eax = 1;
    goto loc_000A21C3;

loc_000A2189: ;
    eax = 2;
    goto loc_000A21C3;

loc_000A2190: ;
    eax = 4;
    goto loc_000A21C3;

loc_000A2197: ;
    eax = 8;
    goto loc_000A21C3;

loc_000A219E: ;
    eax = 0x10;
    goto loc_000A21C3;

loc_000A21A5: ;
    eax = 0x20;
    goto loc_000A21C3;

loc_000A21AC: ;
    eax = 0x40;
    goto loc_000A21C3;

loc_000A21B3: ;
    eax = 0x80;
    goto loc_000A21C3;

loc_000A21BA: ;
    eax = 0x100;
    goto loc_000A21C3;

loc_000A21C1: ;
    eax = 0; /* xor self */

loc_000A21C3: ;
    MEM32(esi + 0x48) = MEM32(esi + 0x48) | eax;

loc_000A21C6: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000A21CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A21CF: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000A21D8u); RECOMP_ABI_CALL(0x000A1EA0u, sub_000A1EA0); /* call 0x000A1EA0 */

loc_000A21D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A2260
 * Original: 0x000A2260 - 0x000A22C0 (96 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2260: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = ecx;
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(ecx);
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 0x58);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000A2284u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2284: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A22A3; /* jne: not equal / not zero */

loc_000A2288: ;
    _fa = (uint32_t)(MEM32(esp + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x4C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A22B4; /* jne: not equal / not zero */

loc_000A228F: ;
    ecx = 0x10;
    eax = 0; /* xor self */
    edi = esi + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 16; return; /* ret 12 */

loc_000A22A3: ;
    ecx = MEM32(esp + 0x4C);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A22B4u); RECOMP_ABI_CALL(0x000A1EA0u, sub_000A1EA0); /* call 0x000A1EA0 */

loc_000A22B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A22C0
 * Original: 0x000A22C0 - 0x000A22F0 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A22C0(void)
{

loc_000A22C0: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x48D8E0);
    esi = ecx;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    eax = edi + eax + 0x21;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A22DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A22DE: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A22EBu); RECOMP_ABI_CALL(0x000A1EA0u, sub_000A1EA0); /* call 0x000A1EA0 */

loc_000A22EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A22F0
 * Original: 0x000A22F0 - 0x000A2330 (64 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A22F0(void)
{

loc_000A22F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000A22FEu); RECOMP_ABI_CALL(0x00067F20u, sub_00067F20); /* call 0x00067F20 */

loc_000A22FE: ;
    eax = MEM32(eax + 4);
    edi = MEM32(0x48D8E0);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    esp = esp + 4;
    eax = edi + eax + 0x21;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A2317u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2317: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A2324u); RECOMP_ABI_CALL(0x000A1EA0u, sub_000A1EA0); /* call 0x000A1EA0 */

loc_000A2324: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A2330
 * Original: 0x000A2330 - 0x000A2357 (39 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2330(void)
{

loc_000A2330: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    eax = eax + 0x21;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A2346u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2346: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A2353u); RECOMP_ABI_CALL(0x000A1EA0u, sub_000A1EA0); /* call 0x000A1EA0 */

loc_000A2353: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A2360
 * Original: 0x000A2360 - 0x000A2390 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2360(void)
{

loc_000A2360: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000A236Du); RECOMP_ABI_CALL(0x00067F20u, sub_00067F20); /* call 0x00067F20 */

loc_000A236D: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    esp = esp + 4;
    eax = eax + 0x21;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A237Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A237F: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A238Cu); RECOMP_ABI_CALL(0x000A1EA0u, sub_000A1EA0); /* call 0x000A1EA0 */

loc_000A238C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A2390
 * Original: 0x000A2390 - 0x000A25C4 (564 bytes, 186 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2390(void)
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

loc_000A2390: ;
    esp = esp - 0x30;
    eax = MEM32(esp + 0x38);
    fp_push(MEMF(eax + 8)); /* fld float */
    edx = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x10) = ecx;
    ecx = eax;
    ecx = ecx & 1;
    MEM32(esp) = edx;
    MEM32(esp + 0x44) = ecx;
    if ((ecx != 0)) goto loc_000A23C3; /* jne: not equal / not zero */

loc_000A23BB: ;
    MEM32(esp + 0xC) = 0;

loc_000A23C3: ;
    ecx = eax;
    ecx = ecx & 2;
    MEM32(esp + 4) = ecx;
    if ((ecx != 0)) goto loc_000A23D6; /* jne: not equal / not zero */

loc_000A23CE: ;
    MEM32(esp + 0x10) = 0;

loc_000A23D6: ;
    eax = eax & 4;
    MEM32(esp + 8) = eax;
    if ((eax != 0)) goto loc_000A23E7; /* jne: not equal / not zero */

loc_000A23DF: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_000A23E7: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = MEM32(edx + 8);
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ebx = edx + 8;
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A244F; /* jne: not equal / not zero */

loc_000A2432: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A25BD; /* jge: greater or equal (signed >=) */

loc_000A2443: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = MEM32(ebx + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2432; /* je: equal / zero */

loc_000A244F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A245D; /* jne: not equal / not zero */

loc_000A2457: ;
    eax = eax + 0x10;
    ecx = ecx >> 0x10;

loc_000A245D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A2467; /* jne: not equal / not zero */

loc_000A2461: ;
    eax = eax + 8;
    ecx = ecx >> 8;

loc_000A2467: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A2472; /* jne: not equal / not zero */

loc_000A246C: ;
    eax = eax + 4;
    ecx = ecx >> 4;

loc_000A2472: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A247F; /* jne: not equal / not zero */

loc_000A2477: ;
    ecx = ecx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2477; /* je: equal / zero */

loc_000A247F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A25BD; /* jge: greater or equal (signed >=) */

loc_000A248A: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    goto loc_000A24A0;

loc_000A2495: ;
    edx = MEM32(esp + 0x10);
    /* nop */

loc_000A24A0: ;
    ecx = MEM32(edx + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A24A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A24A9: ;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edi = eax;
    eax = MEM32(edi + 0x1C);
    ecx = ecx + 0x58;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x000A24C3u); RECOMP_ABI_CALL(0x000A0E20u, sub_000A0E20); /* call 0x000A0E20 */

loc_000A24C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A24CA; /* jne: not equal / not zero */

loc_000A24C7: ;
    eax = edi + 0x20;

loc_000A24CA: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp); /* fsub dword ptr [ebp] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ebp + 4); /* fsub dword ptr [ebp + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    fp_top() = fp_top() - MEMF(ebp + 8); /* fsub dword ptr [ebp + 8] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    if (TEST_NZ(_fa, _fb)) goto loc_000A24FD; /* jne: not equal / not zero */

loc_000A24F5: ;
    MEM32(esp + 0x28) = 0;

loc_000A24FD: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A250D; /* jne: not equal / not zero */

loc_000A2505: ;
    MEM32(esp + 0x2C) = 0;

loc_000A250D: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A251D; /* jne: not equal / not zero */

loc_000A2515: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_000A251D: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2583; /* je: equal / zero */

loc_000A2576: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A25A1; /* jp: parity */

loc_000A2581: ;
    goto loc_000A2585;

loc_000A2583: ;
    fp_pop(); /* fstp st(0) */

loc_000A2585: ;
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = ebx + edx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_000A25A1: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000A25ACu); RECOMP_ABI_CALL(0x00057C60u, sub_00057C60); /* call 0x00057C60 */

loc_000A25AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2495; /* jl: less (signed <) */

loc_000A25BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000A25BD: ;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A25D0
 * Original: 0x000A25D0 - 0x000A26CE (254 bytes, 98 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A25D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A25D0: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_000A2618; /* jne: not equal / not zero */

loc_000A25DE: ;
    esi = MEM32(esp + 0x54);
    eax = esi + 8;
    edx = ecx + 0xC;
    esi = esi - ecx;
    ecx = 4;
    /* nop */

loc_000A25F0: ;
    edi = MEM32(edx + -4);
    MEM32(eax + -8) = MEM32(eax + -8) | edi;
    edi = MEM32(edx);
    MEM32(eax + -4) = MEM32(eax + -4) | edi;
    edi = MEM32(edx + 4);
    MEM32(eax) = MEM32(eax) | edi;
    edi = MEM32(edx + 8);
    MEM32(esi + edx) = MEM32(esi + edx) | edi;
    eax = eax + 0x10;
    edx = edx + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A25F0; /* jne: not equal / not zero */

loc_000A260F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000A2618: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A2690; /* jne: not equal / not zero */

loc_000A261D: ;
    ecx = ecx + 8;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A262Au); RECOMP_ABI_CALL(0x000A1FD0u, sub_000A1FD0); /* call 0x000A1FD0 */

loc_000A262A: ;
    eax = 0; /* xor self */
    /* nop */

loc_000A2630: ;
    ecx = MEM32(esp + eax * 4 + 0xC);
    ecx = ~ecx;
    MEM32(esp + eax * 4 + 0xC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2630; /* jl: less (signed <) */

loc_000A2640: ;
    edi = MEM32(esp + 0x54);
    edx = esp + 0xC;
    esi = esp + 0x10;
    ecx = 0; /* xor self */
    edx = edx - edi;
    eax = edi + 8;
    esi = esi - edi;

loc_000A2655: ;
    edi = MEM32(esp + ecx * 4 + 0xC);
    ebx = MEM32(eax + -8);
    ebx = ebx & edi;
    edi = MEM32(esp + ecx * 4 + 0x10);
    MEM32(eax + -8) = ebx;
    ebx = MEM32(eax + -4);
    ebx = ebx & edi;
    edi = MEM32(edx + eax);
    MEM32(eax + -4) = ebx;
    ebx = MEM32(eax);
    ebx = ebx & edi;
    edi = MEM32(esi + eax);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = MEM32(eax + 4) & edi;
    ecx = ecx + 4;
    eax = eax + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2655; /* jl: less (signed <) */

loc_000A2687: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000A2690: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A26C5; /* jne: not equal / not zero */

loc_000A2695: ;
    esi = MEM32(esp + 0x54);
    eax = esi + 8;
    edx = ecx + 0xC;
    esi = esi - ecx;
    ecx = 4;

loc_000A26A6: ;
    edi = MEM32(edx + -4);
    MEM32(eax + -8) = MEM32(eax + -8) & edi;
    edi = MEM32(edx);
    MEM32(eax + -4) = MEM32(eax + -4) & edi;
    edi = MEM32(edx + 4);
    MEM32(eax) = MEM32(eax) & edi;
    edi = MEM32(edx + 8);
    MEM32(esi + edx) = MEM32(esi + edx) & edi;
    eax = eax + 0x10;
    edx = edx + 0x10;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A26A6; /* jne: not equal / not zero */

loc_000A26C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A26D0
 * Original: 0x000A26D0 - 0x000A272C (92 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A26D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A26D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000A26FE; /* je: equal / zero */

loc_000A26DC: ;
    edx = MEM32(0x48D8FC);
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    edx = edx + 0x21;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000A26EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A26EF: ;
    ecx = 0x10;
    esi = eax;
    edi = ebp + 8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, esi);
    goto loc_000A270A;

loc_000A26FE: ;
    ecx = 0x10;
    eax = 0; /* xor self */
    edi = ebp + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000A270A: ;
    ecx = ebp + 0x58;
    PUSH32(esp, 0x000A2712u); RECOMP_ABI_CALL(0x000A12E0u, sub_000A12E0); /* call 0x000A12E0 */

loc_000A2712: ;
    POP32(esp, edi);
    MEM32(ebp + 0x54) = 0;
    MEM32(ebp + 0x48) = 0;
    MEM32(ebp + 0x4C) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2730
 * Original: 0x000A2730 - 0x000A2772 (66 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2730: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = esi + 8;
    edi = ebx + 8;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebx + 0x58;
    MEM32(ebx + 0x54) = 0;
    PUSH32(esp, 0x000A2759u); RECOMP_ABI_CALL(0x000A12E0u, sub_000A12E0); /* call 0x000A12E0 */

loc_000A2759: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 0x48);
    MEM32(ebx + 0x48) = ecx;
    edx = MEM32(ebp);
    eax = MEM32(edx + 0x4C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x4C) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2780
 * Original: 0x000A2780 - 0x000A27FB (123 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2780: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    eax = eax + 0x21;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A2799u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2799: ;
    ebp = ebx + 8;
    esi = eax;
    ecx = 0x10;
    edi = ebp;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A27E3; /* je: equal / zero */

loc_000A27B3: ;
    ecx = esi;
    PUSH32(esp, 0x000A27BAu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000A27BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A27E3; /* je: equal / zero */

loc_000A27BE: ;
    ecx = MEM32(esi);
    ecx = ecx & 0x1FF;
    eax = ecx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(ebp + eax * 4);
    eax = ebp + eax * 4;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_000A27E3: ;
    ecx = ebx + 0x58;
    MEM32(ebx + 0x54) = edi;
    PUSH32(esp, 0x000A27EEu); RECOMP_ABI_CALL(0x000A12E0u, sub_000A12E0); /* call 0x000A12E0 */

loc_000A27EE: ;
    MEM32(ebx + 0x48) = edi;
    MEM32(ebx + 0x4C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A2800
 * Original: 0x000A2800 - 0x000A2867 (103 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2800(void)
{

loc_000A2800: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FB48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 3);
    eax = esi + 0x910;
    PUSH32(esp, 0x1014);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x000A283Du); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000A283D: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 3);
    PUSH32(esp, 0x304);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A2857u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000A2857: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2870
 * Original: 0x000A2870 - 0x000A287C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2870(void)
{

loc_000A2870: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A2878u); RECOMP_ABI_CALL(0x000A1410u, sub_000A1410); /* call 0x000A1410 */

loc_000A2878: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2880
 * Original: 0x000A2880 - 0x000A28EB (107 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2880(void)
{

loc_000A2880: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FB48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xA1420);
    PUSH32(esp, 3);
    esi = ecx;
    PUSH32(esp, 0x304);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x000A28B4u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_000A28B4: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 0xA10E0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x1014);
    eax = esi + 0x910;
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x000A28D9u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_000A28D9: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000A28F0
 * Original: 0x000A28F0 - 0x000A294C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A28F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A28F0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x4C63F8));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FB6E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_000A2939; /* jne: not equal / not zero */

loc_000A2914: ;
    MEM32(0x4C63F8) = MEM32(0x4C63F8) | eax;
    ecx = 0x4C2AA8;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x000A292Cu); RECOMP_ABI_CALL(0x000A2880u, sub_000A2880); /* call 0x000A2880 */

loc_000A292C: ;
    PUSH32(esp, 0x35A020);
    PUSH32(esp, 0x000A2936u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_000A2936: ;
    esp = esp + 4;

loc_000A2939: ;
    ecx = MEM32(esp);
    eax = 0x4C2AA8;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2950
 * Original: 0x000A2950 - 0x000A29A3 (83 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2950: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A2958u); RECOMP_ABI_CALL(0x000A28F0u, sub_000A28F0); /* call 0x000A28F0 */

loc_000A2958: ;
    ecx = 0; /* xor self */
    edx = eax + 0x50;
    /* nop */

loc_000A2960: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2985; /* je: equal / zero */

loc_000A2965: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x304;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2960; /* jl: less (signed <) */

loc_000A2971: ;
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(esi) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A297Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A297F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A2985: ;
    edx = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x304);
    ecx = ecx + eax;
    MEM8(ecx + 0x50) = 1;
    MEM32(esi) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A299Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A299D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A29B0
 * Original: 0x000A29B0 - 0x000A2A03 (83 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A29B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A29B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A29B8u); RECOMP_ABI_CALL(0x000A28F0u, sub_000A28F0); /* call 0x000A28F0 */

loc_000A29B8: ;
    ecx = 0; /* xor self */
    edx = eax + 0x50;
    /* nop */

loc_000A29C0: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A29E5; /* je: equal / zero */

loc_000A29C5: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x304;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A29C0; /* jl: less (signed <) */

loc_000A29D1: ;
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(esi) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A29DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A29DF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A29E5: ;
    edx = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x304);
    ecx = ecx + eax;
    MEM8(ecx + 0x50) = 1;
    MEM32(esi) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A29FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A29FD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2A10
 * Original: 0x000A2A10 - 0x000A2A63 (83 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2A10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A2A18u); RECOMP_ABI_CALL(0x000A28F0u, sub_000A28F0); /* call 0x000A28F0 */

loc_000A2A18: ;
    ecx = 0; /* xor self */
    edx = eax + 0x50;
    /* nop */

loc_000A2A20: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2A45; /* je: equal / zero */

loc_000A2A25: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x304;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2A20; /* jl: less (signed <) */

loc_000A2A31: ;
    edx = MEM32(esp + 8);
    ecx = 0; /* xor self */
    MEM32(esi) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A2A3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2A3F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A2A45: ;
    edx = MEM32(esp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x304);
    ecx = ecx + eax;
    MEM8(ecx + 0x50) = 1;
    MEM32(esi) = ecx;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A2A5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2A5D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2A70
 * Original: 0x000A2A70 - 0x000A2AB8 (72 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2A70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A2A78u); RECOMP_ABI_CALL(0x000A28F0u, sub_000A28F0); /* call 0x000A28F0 */

loc_000A2A78: ;
    ecx = 0; /* xor self */
    edx = eax + 0x50;
    /* nop */

loc_000A2A80: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2AAA; /* je: equal / zero */

loc_000A2A85: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x304;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2A80; /* jl: less (signed <) */

loc_000A2A91: ;
    ecx = 0; /* xor self */

loc_000A2A93: ;
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    MEM32(esi) = ecx;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A2AA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2AA4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A2AAA: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x304);
    ecx = ecx + eax;
    MEM8(ecx + 0x50) = 1;
    goto loc_000A2A93;

}

/**
 * sub_000A2AC0
 * Original: 0x000A2AC0 - 0x000A2ADB (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2AC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2AC0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, 0x000A2AC8u); RECOMP_ABI_CALL(0x000A28F0u, sub_000A28F0); /* call 0x000A28F0 */

loc_000A2AC8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2AD9; /* je: equal / zero */

loc_000A2ACC: ;
    MEM8(esi + 0x50) = 0;
    ecx = esi + 0x58;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A12E0(); return; /* tail jmp 0x000A12E0 */

loc_000A2AD9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2AE0
 * Original: 0x000A2AE0 - 0x000A2B0C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2AE0: ;
    PUSH32(esp, 0x000A2AE5u); RECOMP_ABI_CALL(0x000A28F0u, sub_000A28F0); /* call 0x000A28F0 */

loc_000A2AE5: ;
    ecx = eax;
    SET_LO8(edx, MEM8(ecx + 0x50));
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A2AF5; /* jne: not equal / not zero */

loc_000A2AF0: ;
    eax = 1;

loc_000A2AF5: ;
    SET_LO8(edx, MEM8(ecx + 0x354));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A2B00; /* jne: not equal / not zero */

loc_000A2AFF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000A2B00: ;
    SET_LO8(edx, MEM8(ecx + 0x658));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A2B0B; /* jne: not equal / not zero */

loc_000A2B0A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000A2B0B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2B10
 * Original: 0x000A2B10 - 0x000A2B63 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2B10: ;
    PUSH32(esp, 0x000A2B15u); RECOMP_ABI_CALL(0x000A28F0u, sub_000A28F0); /* call 0x000A28F0 */

loc_000A2B15: ;
    ecx = 0; /* xor self */
    edx = eax + 0x1920;
    /* nop */

loc_000A2B20: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2B34; /* je: equal / zero */

loc_000A2B25: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x1014;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2B20; /* jl: less (signed <) */

loc_000A2B31: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_000A2B34: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1014);
    eax = eax + ecx;
    PUSH32(esp, esi);
    esi = eax + 0x910;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(eax + 0x1920) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_000A2B5F; /* je: equal / zero */

loc_000A2B4E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A2B5Fu); RECOMP_ABI_CALL(0x000A0E90u, sub_000A0E90); /* call 0x000A0E90 */

loc_000A2B5F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2B70
 * Original: 0x000A2B70 - 0x000A2B85 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2B70: ;
    PUSH32(esp, 0x000A2B75u); RECOMP_ABI_CALL(0x000A28F0u, sub_000A28F0); /* call 0x000A28F0 */

loc_000A2B75: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2B84; /* je: equal / zero */

loc_000A2B7D: ;
    MEM8(eax + 0x1010) = 0;

loc_000A2B84: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2B90
 * Original: 0x000A2B90 - 0x000A2C28 (152 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2B90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FB88);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x000A2BB5u); RECOMP_ABI_CALL(0x000A29B0u, sub_000A29B0); /* call 0x000A29B0 */

loc_000A2BB5: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esp + 0x3C) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    MEM32(eax) = edx;
    eax = esp;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x40) = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000A2BF0u); RECOMP_ABI_CALL(0x000A0AF0u, sub_000A0AF0); /* call 0x000A0AF0 */

loc_000A2BF0: ;
    esp = esp + 0x18;
    SET_LO8(ebx, LO8(eax));
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A2C02u); RECOMP_ABI_CALL(0x000A28F0u, sub_000A28F0); /* call 0x000A28F0 */

loc_000A2C02: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2C16; /* je: equal / zero */

loc_000A2C0A: ;
    ecx = eax + 0x58;
    MEM8(eax + 0x50) = 0;
    PUSH32(esp, 0x000A2C16u); RECOMP_ABI_CALL(0x000A12E0u, sub_000A12E0); /* call 0x000A12E0 */

loc_000A2C16: ;
    ecx = MEM32(esp + 8);
    SET_LO8(eax, LO8(ebx));
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2C30
 * Original: 0x000A2C30 - 0x000A2CF3 (195 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2C30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FBA8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000A2C60u); RECOMP_ABI_CALL(0x000A2A10u, sub_000A2A10); /* call 0x000A2A10 */

loc_000A2C60: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = MEM32(esp + 8);
    MEM32(esp + 0x18) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_000A2C8B; /* jne: not equal / not zero */

loc_000A2C74: ;
    ebx = MEM32(esi);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A2C80u); RECOMP_ABI_CALL(0x00066AC0u, sub_00066AC0); /* call 0x00066AC0 */

loc_000A2C80: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x30); PUSH32(esp, 0x000A2C8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2C8B: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    eax = esp;
    MEM32(esp + 0x44) = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = ecx;
    eax = esp;
    MEM32(esp + 0x48) = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x000A2CBEu); RECOMP_ABI_CALL(0x000A0AF0u, sub_000A0AF0); /* call 0x000A0AF0 */

loc_000A2CBE: ;
    esp = esp + 0x18;
    SET_LO8(ebx, LO8(eax));
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A2CD0u); RECOMP_ABI_CALL(0x000A28F0u, sub_000A28F0); /* call 0x000A28F0 */

loc_000A2CD0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2CE0; /* je: equal / zero */

loc_000A2CD4: ;
    ecx = esi + 0x58;
    MEM8(esi + 0x50) = 0;
    PUSH32(esp, 0x000A2CE0u); RECOMP_ABI_CALL(0x000A12E0u, sub_000A12E0); /* call 0x000A12E0 */

loc_000A2CE0: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D00
 * Original: 0x000A2D00 - 0x000A2DC7 (199 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2D00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FBA8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x000A2D30u); RECOMP_ABI_CALL(0x000A2A10u, sub_000A2A10); /* call 0x000A2A10 */

loc_000A2D30: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + 0xC);
    MEM32(esp + 0x1C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000A2D5F; /* je: equal / zero */

loc_000A2D44: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000A2D4Du); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000A2D4D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2D5F; /* je: equal / zero */

loc_000A2D51: ;
    edx = MEM32(esi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000A2D5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2D5F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A2D6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2D6A: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x000A2D82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2D82: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A2D8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2D8E: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ecx) = eax;
    SET_LO8(ebx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A2DA8u); RECOMP_ABI_CALL(0x000A28F0u, sub_000A28F0); /* call 0x000A28F0 */

loc_000A2DA8: ;
    ecx = esi + 0x58;
    MEM8(esi + 0x50) = 0;
    PUSH32(esp, 0x000A2DB4u); RECOMP_ABI_CALL(0x000A12E0u, sub_000A12E0); /* call 0x000A12E0 */

loc_000A2DB4: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2DD0
 * Original: 0x000A2DD0 - 0x000A2DD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2DD0(void)
{

loc_000A2DD0: ;
    eax = 0x240;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2DE0
 * Original: 0x000A2DE0 - 0x000A2E3C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2DE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A2DEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2DEF: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A2DFAu); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_000A2DFA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2E35; /* je: equal / zero */

loc_000A2E01: ;
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
    PUSH32(esp, 0x000A2E25u); RECOMP_ABI_CALL(0x000A2E40u, sub_000A2E40); /* call 0x000A2E40 */

loc_000A2E25: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x000A2E2Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_000A2E2E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000A2E35: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A2E40
 * Original: 0x000A2E40 - 0x000A2E7E (62 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E40(void)
{

loc_000A2E40: ;
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
    PUSH32(esp, 0x000A2E6Bu); RECOMP_ABI_CALL(0x00079B60u, sub_00079B60); /* call 0x00079B60 */

loc_000A2E6B: ;
    MEM8(esi + 0xC8) = MEM8(esi + 0xC8) | 0x40;
    MEM32(esi) = 0x3D2AA4;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000A2E78
 * Original: 0x000A2E78 - 0x000A2E7E (6 bytes, 3 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E78(void)
{

loc_000A2E78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000A2E80
 * Original: 0x000A2E80 - 0x000A2E86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E80(void)
{

loc_000A2E80: ;
    eax = 0x4C7178;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E90
 * Original: 0x000A2E90 - 0x000A2E96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E90(void)
{

loc_000A2E90: ;
    eax = 0x3D2A80;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2EA0
 * Original: 0x000A2EA0 - 0x000A2EB6 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EA0(void)
{

loc_000A2EA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x000A2EB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A2EB3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2EC0
 * Original: 0x000A2EC0 - 0x000A2EDE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A2EC8u); RECOMP_ABI_CALL(0x000A2EE0u, sub_000A2EE0); /* call 0x000A2EE0 */

loc_000A2EC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2ED8; /* je: equal / zero */

loc_000A2ECF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2ED5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000A2ED5: ;
    esp = esp + 4;

loc_000A2ED8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2EE0
 * Original: 0x000A2EE0 - 0x000A2EEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2EE0: ;
    MEM32(ecx) = 0x3D2AA4;
    g_seh_ebp = ebp; sub_00075970(); return; /* tail jmp 0x00075970 */

}

/**
 * sub_000A2EF0
 * Original: 0x000A2EF0 - 0x000A2F24 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2EF0(void)
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

loc_000A2EF0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_000A2EFF; /* jg: greater (signed >) */

loc_000A2EF8: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    esp += 4; return; /* ret */

loc_000A2EFF: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A2F1F; /* jp: parity */

loc_000A2F14: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    esp += 4; return; /* ret */

loc_000A2F1F: ;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_st1() = fp_top() / fp_st1(); fp_pop(); /* fdivrp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A2F30
 * Original: 0x000A2F30 - 0x000A2F4F (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A2F30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2F30: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A2F4C; /* ja: above (unsigned >) */

loc_000A2F38: ;
    eax = ZX8(MEM8(eax + 0xA2F58));
    { uint32_t _jt = MEM32(eax * 4 + 0xA2F50); /* switch: 2 entries, 2 targets */
    if (_jt == 0x000A2F46u) goto loc_000A2F46;
    if (_jt == 0x000A2F4Cu) goto loc_000A2F4C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A2F46: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A2F4C: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2F60
 * Original: 0x000A2F60 - 0x000A2FF9 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2F60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000A2F77; /* jl: less (signed <) */

loc_000A2F6E: ;
    eax = 0x100;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A2F77: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000A2F8A; /* jne: not equal / not zero */

loc_000A2F88: ;
    edx = ~edx;

loc_000A2F8A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A2FB4; /* jne: not equal / not zero */

loc_000A2F95: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A2FEF; /* jge: greater or equal (signed >=) */

loc_000A2FA2: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000A2FB0; /* jne: not equal / not zero */

loc_000A2FAE: ;
    edx = ~edx;

loc_000A2FB0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2F95; /* je: equal / zero */

loc_000A2FB4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A2FC2; /* jne: not equal / not zero */

loc_000A2FBC: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_000A2FC2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A2FCC; /* jne: not equal / not zero */

loc_000A2FC6: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_000A2FCC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A2FD7; /* jne: not equal / not zero */

loc_000A2FD1: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_000A2FD7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A2FE8; /* jne: not equal / not zero */

loc_000A2FDC: ;
    /* nop */

loc_000A2FE0: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2FE0; /* je: equal / zero */

loc_000A2FE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2FF4; /* jl: less (signed <) */

loc_000A2FEF: ;
    eax = 0x100;

loc_000A2FF4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3000
 * Original: 0x000A3000 - 0x000A30D7 (215 bytes, 83 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3000(void)
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

loc_000A3000: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A30CD; /* jg: greater (signed >) */

loc_000A3010: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x2D8);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A302Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A302A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A307A; /* jne: not equal / not zero */

loc_000A3037: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x12));
    if (TEST_Z(_fa, _fb)) goto loc_000A3080; /* je: equal / zero */

loc_000A3044: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3084; /* jne: not equal / not zero */

loc_000A3048: ;
    eax = MEM32(esi + 4);
    eax = eax - 3;
    if ((eax == 0)) goto loc_000A30B3; /* je: equal / zero */

loc_000A3050: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A3084; /* jne: not equal / not zero */

loc_000A3053: ;
    PUSH32(esp, 0x000A3058u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000A3058: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000A305Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A305F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A3090; /* je: equal / zero */

loc_000A3063: ;
    eax = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A306Eu); RECOMP_ABI_CALL(0x000BF9C0u, sub_000BF9C0); /* call 0x000BF9C0 */

loc_000A306E: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3077u); RECOMP_ABI_CALL(0x000A2EF0u, sub_000A2EF0); /* call 0x000A2EF0 */

loc_000A3077: ;
    esp = esp + 8;

loc_000A307A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000A3080: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A3048; /* je: equal / zero */

loc_000A3084: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000A3090: ;
    PUSH32(esp, 0x000A3095u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A3095: ;
    ecx = ZX8(MEM8(esi + 0x10));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x134); PUSH32(esp, 0x000A30A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A30A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A30AAu); RECOMP_ABI_CALL(0x000A2EF0u, sub_000A2EF0); /* call 0x000A2EF0 */

loc_000A30AA: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000A30B3: ;
    eax = ZX8(MEM8(esi + 0x10));
    ecx = MEM32(edi + 0x47C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A30C4u); RECOMP_ABI_CALL(0x000A2EF0u, sub_000A2EF0); /* call 0x000A2EF0 */

loc_000A30C4: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000A30CD: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A3030
 * Original: 0x000A3030 - 0x000A30D7 (167 bytes, 66 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3030(void)
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

loc_000A3030: ;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A307A; /* jne: not equal / not zero */

loc_000A3037: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x12));
    if (TEST_Z(_fa, _fb)) goto loc_000A3080; /* je: equal / zero */

loc_000A3044: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3084; /* jne: not equal / not zero */

loc_000A3048: ;
    eax = MEM32(esi + 4);
    eax = eax - 3;
    if ((eax == 0)) goto loc_000A30B3; /* je: equal / zero */

loc_000A3050: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A3084; /* jne: not equal / not zero */

loc_000A3053: ;
    PUSH32(esp, 0x000A3058u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000A3058: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000A305Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A305F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A3090; /* je: equal / zero */

loc_000A3063: ;
    eax = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A306Eu); RECOMP_ABI_CALL(0x000BF9C0u, sub_000BF9C0); /* call 0x000BF9C0 */

loc_000A306E: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3077u); RECOMP_ABI_CALL(0x000A2EF0u, sub_000A2EF0); /* call 0x000A2EF0 */

loc_000A3077: ;
    esp = esp + 8;

loc_000A307A: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000A3080: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A3048; /* je: equal / zero */

loc_000A3084: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000A3090: ;
    PUSH32(esp, 0x000A3095u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A3095: ;
    ecx = ZX8(MEM8(esi + 0x10));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x134); PUSH32(esp, 0x000A30A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A30A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A30AAu); RECOMP_ABI_CALL(0x000A2EF0u, sub_000A2EF0); /* call 0x000A2EF0 */

loc_000A30AA: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000A30B3: ;
    eax = ZX8(MEM8(esi + 0x10));
    ecx = MEM32(edi + 0x47C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A30C4u); RECOMP_ABI_CALL(0x000A2EF0u, sub_000A2EF0); /* call 0x000A2EF0 */

loc_000A30C4: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A30E0
 * Original: 0x000A30E0 - 0x000A3120 (64 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A30E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A30E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x1C54);
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(MEM32(esi + edx * 4 + 0x1854)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4 + 0x1854), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A311A; /* jne: not equal / not zero */

loc_000A30F8: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(esi + edx * 4 + 0x1830);
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

loc_000A311A: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A3120
 * Original: 0x000A3120 - 0x000A31CF (175 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x1400);
    PUSH32(esp, edi);
    edi = ebx + 0x1400;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A315A; /* jne: not equal / not zero */

loc_000A3137: ;
    goto loc_000A3140;

    /* nop */

loc_000A3140: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A31B2; /* jge: greater or equal (signed >=) */

loc_000A314E: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A3140; /* je: equal / zero */

loc_000A315A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3167; /* jne: not equal / not zero */

loc_000A3161: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_000A3167: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3171; /* jne: not equal / not zero */

loc_000A316B: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_000A3171: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A317B; /* jne: not equal / not zero */

loc_000A3175: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_000A317B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3187; /* jne: not equal / not zero */

loc_000A317F: ;
    /* nop */

loc_000A3180: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A3180; /* je: equal / zero */

loc_000A3187: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A31B2; /* jge: greater or equal (signed >=) */

loc_000A318F: ;
    /* nop */

loc_000A3190: ;
    ecx = esi + esi * 4;
    edx = MEM32(ebx + ecx * 4);
    ecx = ebx + ecx * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A319Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A319D: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A31A8u); RECOMP_ABI_CALL(0x000A2F60u, sub_000A2F60); /* call 0x000A2F60 */

loc_000A31A8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A3190; /* jl: less (signed <) */

loc_000A31B2: ;
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
 * sub_000A31D0
 * Original: 0x000A31D0 - 0x000A31FC (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A31D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A31D0: ;
    eax = MEM32(ecx + 0x408);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x408) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    eax = MEM32(ecx + 0x40C);
    if (CMP_L(_fas, _fbs)) goto loc_000A31F4; /* jl: less (signed <) */

loc_000A31EA: ;
    MEM32(ecx + 0x408) = 0;

loc_000A31F4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x40C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3200
 * Original: 0x000A3200 - 0x000A3217 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3200(void)
{

loc_000A3200: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x404) = ecx;
    MEM32(eax + 0x408) = ecx;
    MEM32(eax + 0x40C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3220
 * Original: 0x000A3220 - 0x000A33FE (478 bytes, 154 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3220(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3220: ;
    esp = esp - 0x120;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x128);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x130);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    MEM32(esp + 0x128) = eax;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A33D2; /* jge: greater or equal (signed >=) */

loc_000A3264: ;
    PUSH32(esp, 0x000A3269u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A3269: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4B0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A3275u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3275: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000A327Eu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A327E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4B2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A328Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A328A: ;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000A3293u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A3293: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4B4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A329Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A329F: ;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000A32A8u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A32A8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4B6);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A32B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A32B4: ;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A33D2; /* ja: above (unsigned >) */

loc_000A32C4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA3400); /* switch: 7 entries, 6 targets */
    if (_jt == 0x000A32CBu) goto loc_000A32CB;
    if (_jt == 0x000A330Bu) goto loc_000A330B;
    if (_jt == 0x000A332Du) goto loc_000A332D;
    if (_jt == 0x000A3355u) goto loc_000A3355;
    if (_jt == 0x000A3383u) goto loc_000A3383;
    if (_jt == 0x000A33D2u) goto loc_000A33D2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A32CB: ;
    PUSH32(esp, 0x000A32D0u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000A32D0: ;
    edx = MEM32(eax);
    ecx = esi + 0x11;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A32DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A32DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A33D2; /* je: equal / zero */

loc_000A32E3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + 0x34) = 0;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000A3301u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3301: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    goto loc_000A33C3;

loc_000A330B: ;
    eax = ZX8(MEM8(esi + 0x11));
    ecx = MEM32(esp + eax * 4 + 0x1C);
    edx = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3C944C);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A3325u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A3325: ;
    esp = esp + 0x14;
    goto loc_000A33D2;

loc_000A332D: ;
    PUSH32(esp, 0x000A3332u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A3332: ;
    ecx = ZX8(MEM8(esi + 0x10));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x92);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A3343u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3343: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C50);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A3350u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A3350: ;
    esp = esp + 0x14;
    goto loc_000A33D2;

loc_000A3355: ;
    PUSH32(esp, 0x000A335Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A335A: ;
    ecx = esi + 0xC;
    edi = eax;
    PUSH32(esp, 0x000A3364u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_000A3364: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, 0x4C3);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A3371u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3371: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C48);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A337Eu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A337E: ;
    esp = esp + 0x14;
    goto loc_000A33D2;

loc_000A3383: ;
    PUSH32(esp, 0x000A3388u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000A3388: ;
    edi = eax;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x000A3393u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000A3393: ;
    edi = MEM32(edi);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(eax);
    ecx = esi + 0xC;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000A33A7u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_000A33A7: ;
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x3C); PUSH32(esp, 0x000A33AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A33AF: ;
    ecx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x000A33BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A33BB: ;
    ecx = eax;
    PUSH32(esp, 0x000A33C2u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_000A33C2: ;
    PUSH32(esp, eax);

loc_000A33C3: ;
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A33CFu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A33CF: ;
    esp = esp + 0x10;

loc_000A33D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    edx = eax + 1;
    POP32(esp, ebx);
    goto loc_000A33E0;

    /* nop */

loc_000A33E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A33E0; /* jne: not equal / not zero */

loc_000A33E7: ;
    ecx = MEM32(esp + 0x11C);
    eax = eax - edx;
    PUSH32(esp, 0x000A33F5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A33F5: ;
    esp = esp + 0x120;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3233
 * Original: 0x000A3233 - 0x000A33FE (459 bytes, 150 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3233(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3233: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x130);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    MEM32(esp + 0x128) = eax;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A33D2; /* jge: greater or equal (signed >=) */

loc_000A3264: ;
    PUSH32(esp, 0x000A3269u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A3269: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4B0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A3275u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3275: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000A327Eu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A327E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4B2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A328Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A328A: ;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000A3293u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A3293: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4B4);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A329Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A329F: ;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000A32A8u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A32A8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4B6);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A32B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A32B4: ;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A33D2; /* ja: above (unsigned >) */

loc_000A32C4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA3400); /* switch: 7 entries, 6 targets */
    if (_jt == 0x000A32CBu) goto loc_000A32CB;
    if (_jt == 0x000A330Bu) goto loc_000A330B;
    if (_jt == 0x000A332Du) goto loc_000A332D;
    if (_jt == 0x000A3355u) goto loc_000A3355;
    if (_jt == 0x000A3383u) goto loc_000A3383;
    if (_jt == 0x000A33D2u) goto loc_000A33D2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A32CB: ;
    PUSH32(esp, 0x000A32D0u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000A32D0: ;
    edx = MEM32(eax);
    ecx = esi + 0x11;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A32DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A32DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A33D2; /* je: equal / zero */

loc_000A32E3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x10));
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + 0x34) = 0;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000A3301u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3301: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    goto loc_000A33C3;

loc_000A330B: ;
    eax = ZX8(MEM8(esi + 0x11));
    ecx = MEM32(esp + eax * 4 + 0x1C);
    edx = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3C944C);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A3325u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A3325: ;
    esp = esp + 0x14;
    goto loc_000A33D2;

loc_000A332D: ;
    PUSH32(esp, 0x000A3332u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A3332: ;
    ecx = ZX8(MEM8(esi + 0x10));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x92);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A3343u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3343: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C50);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A3350u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A3350: ;
    esp = esp + 0x14;
    goto loc_000A33D2;

loc_000A3355: ;
    PUSH32(esp, 0x000A335Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A335A: ;
    ecx = esi + 0xC;
    edi = eax;
    PUSH32(esp, 0x000A3364u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_000A3364: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, 0x4C3);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A3371u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3371: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C48);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A337Eu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A337E: ;
    esp = esp + 0x14;
    goto loc_000A33D2;

loc_000A3383: ;
    PUSH32(esp, 0x000A3388u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000A3388: ;
    edi = eax;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x000A3393u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000A3393: ;
    edi = MEM32(edi);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(eax);
    ecx = esi + 0xC;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000A33A7u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_000A33A7: ;
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x3C); PUSH32(esp, 0x000A33AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A33AF: ;
    ecx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x000A33BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A33BB: ;
    ecx = eax;
    PUSH32(esp, 0x000A33C2u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_000A33C2: ;
    PUSH32(esp, eax);

loc_000A33C3: ;
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A33CFu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A33CF: ;
    esp = esp + 0x10;

loc_000A33D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    edx = eax + 1;
    POP32(esp, ebx);
    goto loc_000A33E0;

    /* nop */

loc_000A33E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A33E0; /* jne: not equal / not zero */

loc_000A33E7: ;
    ecx = MEM32(esp + 0x11C);
    eax = eax - edx;
    PUSH32(esp, 0x000A33F5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A33F5: ;
    esp = esp + 0x120;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A33FE
 * Original: 0x000A33FE - 0x000A3420 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A33FE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A33FE: ;
    edi = edi;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3420
 * Original: 0x000A3420 - 0x000A3482 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3420: ;
    edx = ecx;
    eax = MEM32(edx + 0x1828);
    eax = MEM32(edx + eax * 4 + 0x1420);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1830;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x1828);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    MEM32(edx + 0x1828) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000A346C; /* jl: less (signed <) */

loc_000A3462: ;
    MEM32(edx + 0x1828) = 0;

loc_000A346C: ;
    MEM32(edx + 0x182C) = MEM32(edx + 0x182C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x182C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1850);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1850) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3490
 * Original: 0x000A3490 - 0x000A349C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3490(void)
{

loc_000A3490: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A3498u); RECOMP_ABI_CALL(0x000A3200u, sub_000A3200); /* call 0x000A3200 */

loc_000A3498: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A34A0
 * Original: 0x000A34A0 - 0x000A356A (202 bytes, 66 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A34A0(void)
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

loc_000A34A0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    esi = ecx + 4;
    goto loc_000A34D0;

loc_000A34CC: ;
    ecx = MEM32(esp + 0x18);

loc_000A34D0: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A3542; /* jge: greater or equal (signed >=) */

loc_000A34D9: ;
    ecx = MEM32(0x4C8E04);
    eax = MEM32(esi);
    eax = eax & ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    eax = eax + eax * 4;
    edx = MEM32(eax * 4 + 0x4C71B0);
    ecx = eax * 4 + 0x4C71B0;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A34FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A34FA: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A3525; /* je: equal / zero */

loc_000A3505: ;
    ecx = MEM32(0x4C8E04);
    eax = MEM32(esi);
    eax = eax & ecx;
    eax = eax + eax * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax * 4 + 0x4C71B0;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A3521u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3521: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A3525: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esp + 0x14);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    MEM32(esp + 0x14) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A34CC; /* je: equal / zero */

loc_000A3542: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3562; /* jne: not equal / not zero */

loc_000A3557: ;
    eax = 1;
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

loc_000A3562: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A3533
 * Original: 0x000A3533 - 0x000A356A (55 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3533(void)
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

loc_000A3533: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    MEM32(esp + 0x14) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_000A34CC(); return; } /* je: equal / zero */

loc_000A3542: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3562; /* jne: not equal / not zero */

loc_000A3557: ;
    eax = 1;
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

loc_000A3562: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A3570
 * Original: 0x000A3570 - 0x000A364D (221 bytes, 70 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3570(void)
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

loc_000A3570: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    esi = ecx + 4;
    goto loc_000A35A0;

loc_000A359C: ;
    ecx = MEM32(esp + 0x18);

loc_000A35A0: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A3625; /* jge: greater or equal (signed >=) */

loc_000A35A9: ;
    ecx = MEM32(0x4C8E04);
    eax = MEM32(esi);
    eax = eax & ecx;
    eax = eax + eax * 4;
    edx = MEM32(eax * 4 + 0x4C71B0);
    ecx = eax * 4 + 0x4C71B0;
    eax = MEM32(esp + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A35CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A35CF: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A3604; /* je: equal / zero */

loc_000A35DA: ;
    ecx = MEM32(0x4C8E04);
    eax = MEM32(esi);
    eax = eax & ecx;
    eax = eax + eax * 4;
    edx = MEM32(eax * 4 + 0x4C71B0);
    ecx = eax * 4 + 0x4C71B0;
    eax = MEM32(esp + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A3600u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3600: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A3604: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esp + 0x14);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    MEM32(esp + 0x14) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A359C; /* je: equal / zero */

loc_000A3625: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3645; /* jne: not equal / not zero */

loc_000A363A: ;
    eax = 1;
    esp = esp + 0xC;
    esp += 20; return; /* ret 16 */

loc_000A3645: ;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A3650
 * Original: 0x000A3650 - 0x000A36B1 (97 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A36AB; /* jle: less or equal (signed <=) */

loc_000A3660: ;
    PUSH32(esp, esi);
    esi = ebp + 4;

loc_000A3664: ;
    eax = MEM32(esi);
    eax = eax & MEM32(0x4C8E04);
    eax = eax + eax * 4;
    ecx = eax * 4 + 0x4C71B0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000A367Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A367B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A369F; /* jg: greater (signed >) */

loc_000A367F: ;
    ecx = MEM32(0x4C8E04);
    eax = MEM32(esi);
    eax = eax & ecx;
    eax = eax + eax * 4;
    edx = MEM32(eax * 4 + 0x4C71B0);
    ecx = eax * 4 + 0x4C71B0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A369Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A369D: ;
    edi = eax;

loc_000A369F: ;
    eax = MEM32(ebp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A3664; /* jl: less (signed <) */

loc_000A36AA: ;
    POP32(esp, esi);

loc_000A36AB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A36C0
 * Original: 0x000A36C0 - 0x000A3874 (436 bytes, 161 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A36C0(void)
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

loc_000A36C0: ;
    esp = esp - 0x10C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    edx = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x11C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x11C);
    ecx = ebp;
    ebx = ecx;
    ecx = ecx >> 2;
    MEM32(esp + 0x114) = eax;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(edx + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000A3847; /* jle: less or equal (signed <=) */

loc_000A370F: ;
    edi = edx + 4;

loc_000A3712: ;
    ecx = MEM32(0x4C8E04);
    eax = MEM32(edi);
    eax = eax & ecx;
    eax = eax + eax * 4;
    ecx = eax * 4 + 0x4C71B0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM8(esp + 0x20) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A3739u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3739: ;
    edx = MEM32(esp + 0x128);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3788; /* je: equal / zero */

loc_000A3744: ;
    ecx = MEM32(0x4C8E04);
    eax = MEM32(edi);
    eax = eax & ecx;
    eax = eax + eax * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax * 4 + 0x4C71B0;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A3761u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3761: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A3788; /* jp: parity */

loc_000A376E: ;
    eax = esi;
    edx = eax + 1;

loc_000A3773: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3773; /* jne: not equal / not zero */

loc_000A377A: ;
    eax = eax - edx;
    ecx = ebp;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D2C68);
    goto loc_000A37A3;

loc_000A3788: ;
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_000A3790: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3790; /* jne: not equal / not zero */

loc_000A3797: ;
    eax = eax - edx;
    edx = ebp;
    edx = edx - eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D2C64);

loc_000A37A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A37A9u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_000A37A9: ;
    eax = esi;
    esp = esp + 0xC;
    edx = eax + 1;

loc_000A37B1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A37B1; /* jne: not equal / not zero */

loc_000A37B8: ;
    eax = eax - edx;
    ecx = ebp;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A37CAu); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_000A37CA: ;
    eax = esp + 0x24;
    esp = esp + 0xC;
    edx = eax + 1;

loc_000A37D4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A37D4; /* jne: not equal / not zero */

loc_000A37DB: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A382C; /* jle: less or equal (signed <=) */

loc_000A37E1: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(esp + 0x10);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    eax = esi;
    edx = eax + 1;
    if (CMP_GE(_fas, _fbs)) goto loc_000A3810; /* jge: greater or equal (signed >=) */

loc_000A37F6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A37F6; /* jne: not equal / not zero */

loc_000A37FD: ;
    eax = eax - edx;
    edx = ebp;
    edx = edx - eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D2C5C);
    goto loc_000A3823;

    goto loc_000A3810;

    /* nop */

loc_000A3810: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3810; /* jne: not equal / not zero */

loc_000A3817: ;
    eax = eax - edx;
    ecx = ebp;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D2C58);

loc_000A3823: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3829u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_000A3829: ;
    esp = esp + 0xC;

loc_000A382C: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000A3712; /* jl: less (signed <) */

loc_000A3847: ;
    ecx = esi + 1;
    /* nop */

loc_000A3850: ;
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3850; /* jne: not equal / not zero */

loc_000A3857: ;
    esi = esi - ecx;
    ecx = MEM32(esp + 0x118);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A386Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A386B: ;
    esp = esp + 0x10C;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A3732
 * Original: 0x000A3732 - 0x000A3874 (322 bytes, 126 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3732(void)
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

loc_000A3732: ;
    MEM8(esp + 0x20) = LO8(ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A3739u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3739: ;
    edx = MEM32(esp + 0x128);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3788; /* je: equal / zero */

loc_000A3744: ;
    ecx = MEM32(0x4C8E04);
    eax = MEM32(edi);
    eax = eax & ecx;
    eax = eax + eax * 4;
    PUSH32(esp, 1);
    ecx = eax * 4 + 0x4C71B0;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A3761u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3761: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A3788; /* jp: parity */

loc_000A376E: ;
    eax = esi;
    edx = eax + 1;

loc_000A3773: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3773; /* jne: not equal / not zero */

loc_000A377A: ;
    eax = eax - edx;
    ecx = ebp;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D2C68);
    goto loc_000A37A3;

loc_000A3788: ;
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_000A3790: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3790; /* jne: not equal / not zero */

loc_000A3797: ;
    eax = eax - edx;
    edx = ebp;
    edx = edx - eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D2C64);

loc_000A37A3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A37A9u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_000A37A9: ;
    eax = esi;
    esp = esp + 0xC;
    edx = eax + 1;

loc_000A37B1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A37B1; /* jne: not equal / not zero */

loc_000A37B8: ;
    eax = eax - edx;
    ecx = ebp;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A37CAu); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_000A37CA: ;
    eax = esp + 0x24;
    esp = esp + 0xC;
    edx = eax + 1;

loc_000A37D4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A37D4; /* jne: not equal / not zero */

loc_000A37DB: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A382C; /* jle: less or equal (signed <=) */

loc_000A37E1: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(esp + 0x10);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    eax = esi;
    edx = eax + 1;
    if (CMP_GE(_fas, _fbs)) goto loc_000A3810; /* jge: greater or equal (signed >=) */

loc_000A37F6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A37F6; /* jne: not equal / not zero */

loc_000A37FD: ;
    eax = eax - edx;
    edx = ebp;
    edx = edx - eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D2C5C);
    goto loc_000A3823;

    goto loc_000A3810;

    /* nop */

loc_000A3810: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3810; /* jne: not equal / not zero */

loc_000A3817: ;
    eax = eax - edx;
    ecx = ebp;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D2C58);

loc_000A3823: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3829u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_000A3829: ;
    esp = esp + 0xC;

loc_000A382C: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A3712(); return; } /* jl: less (signed <) */

loc_000A3847: ;
    ecx = esi + 1;
    /* nop */

loc_000A3850: ;
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3850; /* jne: not equal / not zero */

loc_000A3857: ;
    esi = esi - ecx;
    ecx = MEM32(esp + 0x118);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A386Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A386B: ;
    esp = esp + 0x10C;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A3880
 * Original: 0x000A3880 - 0x000A389F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3880: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D2C70;
    if (TEST_Z(_fa, _fb)) goto loc_000A3899; /* je: equal / zero */

loc_000A3890: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3896u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000A3896: ;
    esp = esp + 4;

loc_000A3899: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A38A0
 * Original: 0x000A38A0 - 0x000A3D52 (1202 bytes, 351 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A38A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A38A0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FBF0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x40));
    esp = esp - 0x40;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000A38DB; /* jne: not equal / not zero */

loc_000A38C6: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x40);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

loc_000A38DB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    ecx = 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, 0);
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM8(esp + 0x60) = 0;
    MEM32(esp + 0x20) = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    SET_LO8(eax, LO8(ebx));
    esi = edx;
    MEM8(esp + 0x13) = LO8(eax);
    if ((edx == 0)) goto loc_000A3CB8; /* je: equal / zero */

loc_000A3914: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2CD0);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000A3924u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A3924: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x5C) = edi;
    PUSH32(esp, 0x000A3934u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A3934: ;
    ecx = esp + 0x30;
    edi = eax;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A3947u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A3947: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A3A25; /* je: equal / zero */

loc_000A394F: ;
    PUSH32(esp, 0x3D2CC8);
    ecx = edi;
    PUSH32(esp, 0x000A395Bu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A395B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3961u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A3961: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3975; /* jne: not equal / not zero */

loc_000A3968: ;
    MEM32(esp + 0x14) = 1;
    goto loc_000A3A25;

loc_000A3975: ;
    PUSH32(esp, 0x3CB6D8);
    ecx = edi;
    PUSH32(esp, 0x000A3981u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3981: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3987u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A3987: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A399B; /* jne: not equal / not zero */

loc_000A398E: ;
    MEM32(esp + 0x14) = 2;
    goto loc_000A3A25;

loc_000A399B: ;
    PUSH32(esp, 0x3D2CC0);
    ecx = edi;
    PUSH32(esp, 0x000A39A7u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A39A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A39ADu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A39AD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A39BE; /* jne: not equal / not zero */

loc_000A39B4: ;
    MEM32(esp + 0x14) = 3;
    goto loc_000A3A25;

loc_000A39BE: ;
    PUSH32(esp, 0x3D2CB8);
    ecx = edi;
    PUSH32(esp, 0x000A39CAu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A39CA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A39D0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A39D0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A39E1; /* jne: not equal / not zero */

loc_000A39D7: ;
    MEM32(esp + 0x14) = 4;
    goto loc_000A3A25;

loc_000A39E1: ;
    PUSH32(esp, 0x3D2CB0);
    ecx = edi;
    PUSH32(esp, 0x000A39EDu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A39ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A39F3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A39F3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3A04; /* jne: not equal / not zero */

loc_000A39FA: ;
    MEM32(esp + 0x14) = 5;
    goto loc_000A3A25;

loc_000A3A04: ;
    PUSH32(esp, 0x3C91A4);
    ecx = edi;
    PUSH32(esp, 0x000A3A10u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3A10: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3A16u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A3A16: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3A25; /* jne: not equal / not zero */

loc_000A3A1D: ;
    MEM32(esp + 0x14) = 6;

loc_000A3A25: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE144);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000A3A35u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A3A35: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x5C) = 1;
    PUSH32(esp, 0x000A3A49u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A3A49: ;
    edi = eax;
    ecx = esp + 0x30;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A3A60u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A3A60: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A3B57; /* je: equal / zero */

loc_000A3A68: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A3AFA; /* jne: not equal / not zero */

loc_000A3A75: ;
    PUSH32(esp, 0x3D03B4);
    ecx = edi;
    PUSH32(esp, 0x000A3A81u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3A81: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3A87u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A3A87: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3A97; /* jne: not equal / not zero */

loc_000A3A8E: ;
    MEM8(esp + 0x60) = LO8(eax);
    goto loc_000A3B57;

loc_000A3A97: ;
    PUSH32(esp, 0x3D03AC);
    ecx = edi;
    PUSH32(esp, 0x000A3AA3u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3AA3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3AA9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A3AA9: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3ABA; /* jne: not equal / not zero */

loc_000A3AB0: ;
    MEM8(esp + 0x60) = 1;
    goto loc_000A3B57;

loc_000A3ABA: ;
    PUSH32(esp, 0x3D03A4);
    ecx = edi;
    PUSH32(esp, 0x000A3AC6u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3AC6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3ACCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A3ACC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3ADA; /* jne: not equal / not zero */

loc_000A3AD3: ;
    MEM8(esp + 0x60) = 2;
    goto loc_000A3B57;

loc_000A3ADA: ;
    PUSH32(esp, 0x3D039C);
    ecx = edi;
    PUSH32(esp, 0x000A3AE6u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3AE6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3AECu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A3AEC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3B57; /* jne: not equal / not zero */

loc_000A3AF3: ;
    MEM8(esp + 0x60) = 3;
    goto loc_000A3B57;

loc_000A3AFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3B46; /* jne: not equal / not zero */

loc_000A3AFE: ;
    PUSH32(esp, 0x000A3B03u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000A3B03: ;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000A3B14u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3B14: ;
    ecx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000A3B20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3B20: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A3B57; /* je: equal / zero */

loc_000A3B24: ;
    PUSH32(esp, 0x000A3B29u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000A3B29: ;
    ecx = MEM32(esp + 0x2C);
    edi = MEM32(eax);
    MEM32(esp + 0x60) = eax;
    PUSH32(esp, 0x000A3B38u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3B38: ;
    ecx = MEM32(esp + 0x60);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x1C); PUSH32(esp, 0x000A3B40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3B40: ;
    MEM8(esp + 0x60) = LO8(eax);
    goto loc_000A3B57;

loc_000A3B46: ;
    ecx = edi;
    PUSH32(esp, 0x000A3B4Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3B4D: ;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000A3B57u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_000A3B57: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D8);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000A3B67u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A3B67: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x5C) = 2;
    PUSH32(esp, 0x000A3B7Bu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A3B7B: ;
    ecx = esp + 0x30;
    edi = eax;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A3B8Eu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A3B8E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A3BA6; /* je: equal / zero */

loc_000A3B92: ;
    ecx = edi;
    PUSH32(esp, 0x000A3B99u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3B99: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3B9Fu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000A3B9F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM32(esp + 0x20) = eax;

loc_000A3BA6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2CA8);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000A3BB6u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A3BB6: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x5C) = 3;
    PUSH32(esp, 0x000A3BCAu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A3BCA: ;
    ecx = esp + 0x30;
    edi = eax;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A3BDDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A3BDD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A3C02; /* je: equal / zero */

loc_000A3BE1: ;
    PUSH32(esp, 0x3D2CA4);
    ecx = edi;
    PUSH32(esp, 0x000A3BEDu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3BED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3BF3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A3BF3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A3C02; /* jne: not equal / not zero */

loc_000A3BFA: ;
    MEM32(esp + 0x18) = 1;

loc_000A3C02: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2C94);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000A3C12u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A3C12: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x5C) = 4;
    PUSH32(esp, 0x000A3C26u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A3C26: ;
    ecx = esp + 0x30;
    edi = eax;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A3C39u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A3C39: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A3C5C; /* je: equal / zero */

loc_000A3C3D: ;
    PUSH32(esp, 0x3CB744);
    ecx = edi;
    PUSH32(esp, 0x000A3C49u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3C49: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3C4Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A3C4F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x13) = LO8(eax);

loc_000A3C5C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2C88);
    ecx = esp + 0x48;
    PUSH32(esp, 0x000A3C6Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A3C6C: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x5C) = 5;
    PUSH32(esp, 0x000A3C80u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A3C80: ;
    ecx = esp + 0x40;
    esi = eax;
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A3C93u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A3C93: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A3CB4; /* je: equal / zero */

loc_000A3C97: ;
    PUSH32(esp, 0x3CB744);
    ecx = esi;
    PUSH32(esp, 0x000A3CA3u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A3CA3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3CA9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A3CA9: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_000A3CB4: ;
    SET_LO8(eax, MEM8(esp + 0x13));

loc_000A3CB8: ;
    SET_LO8(ecx, MEM8(esp + 0x64));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A3D04; /* je: equal / zero */

loc_000A3CC0: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A3CED; /* jne: not equal / not zero */

loc_000A3CC9: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A3CED; /* jne: not equal / not zero */

loc_000A3CD2: ;
    SET_LO8(edx, MEM8(esp + 0x60));
    _fa = (uint32_t)(MEM8(ebp + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x11), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A3CED; /* jne: not equal / not zero */

loc_000A3CDB: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A3CED; /* jne: not equal / not zero */

loc_000A3CE4: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    MEM8(ebp + 0x10) = LO8(ecx);
    goto loc_000A3D3B;

loc_000A3CED: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x40);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

loc_000A3D04: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(ebp + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ebp + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x60));
    MEM32(ebp + 0xC) = edx;
    SET_LO8(edx, MEM8(esp + 0x20));
    MEM8(ebp + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x12));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) & 1);
    if (1) _cf = (int)(((LO8(ebx)) >> (8 - (1))) & 1);
    SET_LO8(ebx, LO8(ebx) << 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) | LO8(ecx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    MEM8(ebp + 0x10) = LO8(edx);
    MEM8(ebp + 0x12) = LO8(ebx);

loc_000A3D3B: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x4C)) >> 32) & 1);
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3D60
 * Original: 0x000A3D60 - 0x000A3DEE (142 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3D60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = edi + edi * 4;
    edx = MEM32(esi + eax * 4);
    ecx = esi + eax * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A3D75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A3D75: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x1400);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x1400) = ecx;
    MEM32(eax + esi + 0x1830) = MEM32(eax + esi + 0x1830) & edx;
    eax = MEM32(esi + 0x1824);
    edx = MEM32(esi + 0x182C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    MEM32(esi + 0x1824) = eax;
    MEM32(esi + 0x182C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000A3DD4; /* jl: less (signed <) */

loc_000A3DC3: ;
    MEM32(esi + 0x1824) = 0;
    eax = 0xFF;
    goto loc_000A3DD5;

loc_000A3DD4: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000A3DD5: ;
    MEM32(esi + eax * 4 + 0x1420) = edi;
    eax = MEM32(esi + 0x1850);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x1850) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A3DF0
 * Original: 0x000A3DF0 - 0x000A3E52 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3DF0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1824) = esi;
    MEM32(ecx + 0x1828) = esi;
    MEM32(ecx + 0x182C) = esi;
    edx = 0; /* xor self */
    goto loc_000A3E10;

    /* nop */

loc_000A3E10: ;
    eax = MEM32(ecx + 0x1824);
    edi = MEM32(ecx + 0x182C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    MEM32(ecx + 0x1824) = eax;
    MEM32(ecx + 0x182C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000A3E3E; /* jl: less (signed <) */

loc_000A3E31: ;
    MEM32(ecx + 0x1824) = esi;
    eax = 0xFF;
    goto loc_000A3E3F;

loc_000A3E3E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000A3E3F: ;
    MEM32(ecx + eax * 4 + 0x1420) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A3E10; /* jl: less (signed <) */

loc_000A3E4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3E60
 * Original: 0x000A3E60 - 0x000A3EB0 (80 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3E60: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FC11);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    eax = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3EA1; /* je: equal / zero */

loc_000A3E82: ;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x3D2C70;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x12));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEM8(eax + 0x10) = 1;
    MEM8(eax + 0x12) = LO8(ecx);

loc_000A3EA1: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3EB0
 * Original: 0x000A3EB0 - 0x000A4007 (343 bytes, 128 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3EB0(void)
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

loc_000A3EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000A3FFD; /* jl: less (signed <) */

loc_000A3EC0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A3FF2; /* je: equal / zero */

loc_000A3ECD: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    if (CMP_A(_fa, _fb)) goto loc_000A3FE6; /* ja: above (unsigned >) */

loc_000A3EDA: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA4008); /* switch: 7 entries, 6 targets */
    if (_jt == 0x000A3EE1u) goto loc_000A3EE1;
    if (_jt == 0x000A3F28u) goto loc_000A3F28;
    if (_jt == 0x000A3F72u) goto loc_000A3F72;
    if (_jt == 0x000A3F90u) goto loc_000A3F90;
    if (_jt == 0x000A3FB5u) goto loc_000A3FB5;
    if (_jt == 0x000A3FE6u) goto loc_000A3FE6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A3EE1: ;
    PUSH32(esp, ebp);
    ebx = esi + 0x11;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000A3EEDu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000A3EED: ;
    ecx = eax;
    PUSH32(esp, 0x000A3EF4u); RECOMP_ABI_CALL(0x00040DB0u, xml1_guest_talent_rank_get); /* call 0x00040DB0 */

loc_000A3EF4: ;
    ebp = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A3F13; /* je: equal / zero */

loc_000A3EFF: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000A3F07u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000A3F07: ;
    ecx = eax;
    PUSH32(esp, 0x000A3F0Eu); RECOMP_ABI_CALL(0x00048270u, xml1_guest_talent_pending_rank_get); /* call 0x00048270 */

loc_000A3F0E: ;
    ecx = ZX8(LO8(eax));
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(ecx)) >> 32) & 1);
    ebp = ebp + ecx;

loc_000A3F13: ;
    edx = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A3F1Eu); RECOMP_ABI_CALL(0x000A2EF0u, sub_000A2EF0); /* call 0x000A2EF0 */

loc_000A3F1E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000A3F28: ;
    eax = ZX8(MEM8(esi + 0x11));
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A3F34u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000A3F34: ;
    ecx = eax;
    PUSH32(esp, 0x000A3F3Bu); RECOMP_ABI_CALL(0x00047430u, sub_00047430); /* call 0x00047430 */

loc_000A3F3B: ;
    ebx = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A3F5E; /* je: equal / zero */

loc_000A3F46: ;
    ecx = ZX8(MEM8(esi + 0x11));
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000A3F52u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000A3F52: ;
    ecx = eax;
    PUSH32(esp, 0x000A3F59u); RECOMP_ABI_CALL(0x00047350u, sub_00047350); /* call 0x00047350 */

loc_000A3F59: ;
    edx = ZX8(LO8(eax));
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edx)) >> 32) & 1);
    ebx = ebx + edx;

loc_000A3F5E: ;
    eax = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A3F69u); RECOMP_ABI_CALL(0x000A2EF0u, sub_000A2EF0); /* call 0x000A2EF0 */

loc_000A3F69: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000A3F72: ;
    ecx = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000A3F7Eu); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_000A3F7E: ;
    edx = SX16(LO16(eax));
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A3F87u); RECOMP_ABI_CALL(0x000A2EF0u, sub_000A2EF0); /* call 0x000A2EF0 */

loc_000A3F87: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000A3F90: ;
    eax = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, eax);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xC)) >> 32) & 1);
    esi = esi + 0xC;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A3FA0u); RECOMP_ABI_CALL(0x000B12F0u, sub_000B12F0); /* call 0x000B12F0 */

loc_000A3FA0: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3FACu); RECOMP_ABI_CALL(0x000A2EF0u, sub_000A2EF0); /* call 0x000A2EF0 */

loc_000A3FAC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000A3FB5: ;
    ecx = ZX8(MEM8(esi + 0x10));
    PUSH32(esp, ecx);
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A3FC2u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_000A3FC2: ;
    PUSH32(esp, eax);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x20C)) >> 32) & 1);
    edi = edi + 0x20C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A3FCFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A3FCF: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3FDDu); RECOMP_ABI_CALL(0x000A2EF0u, sub_000A2EF0); /* call 0x000A2EF0 */

loc_000A3FDD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000A3FE6: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000A3FF2: ;
    fp_push(MEMF(0x3C7B8C)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_000A3FFD: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A4030
 * Original: 0x000A4030 - 0x000A4094 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4030(void)
{

loc_000A4030: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x1400;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(esi + 0x1824) = eax;
    MEM32(esi + 0x1828) = eax;
    MEM32(esi + 0x182C) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0x1830;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = edx;
    ecx = esi;
    MEM32(esi + 0x1850) = eax;
    PUSH32(esp, 0x000A4090u); RECOMP_ABI_CALL(0x000A3DF0u, sub_000A3DF0); /* call 0x000A3DF0 */

loc_000A4090: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A40A0
 * Original: 0x000A40A0 - 0x000A40A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A40A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A40A0: ;
    g_seh_ebp = ebp; sub_000A3120(); return; /* tail jmp 0x000A3120 */

}

/**
 * sub_000A40B0
 * Original: 0x000A40B0 - 0x000A4114 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A40B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A40B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000A40B9u); RECOMP_ABI_CALL(0x000A4030u, sub_000A4030); /* call 0x000A4030 */

loc_000A40B9: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x1C54) = eax;
    MEM32(esi + 0x1C58) = eax;
    edx = 0xFF;
    edi = 0; /* xor self */

loc_000A40D0: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A40D0; /* jne: not equal / not zero */

loc_000A40DC: ;
    MEM32(esi + 0x1C54) = ecx;
    MEM32(esi + 0x1C58) = edi;
    edx = esi + 0x1854;
    edi = edi;

loc_000A40F0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x1C58);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A40F0; /* jl: less (signed <) */

loc_000A410F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4120
 * Original: 0x000A4120 - 0x000A41D3 (179 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A41CB; /* jle: less or equal (signed <=) */

loc_000A4131: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = edi + 4;

loc_000A4136: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A41AE; /* je: equal / zero */

loc_000A413D: ;
    eax = MEM32(0x4C8E04);
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x4C8A04)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x4C8A04), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A41AE; /* jne: not equal / not zero */

loc_000A414D: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax * 4 + 0x4C89E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax * 4 + 0x4C89E0), edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A41AE; /* je: equal / zero */

loc_000A416A: ;
    esi = esi & MEM32(0x4C8E04);
    PUSH32(esp, esi);
    ecx = 0x4C71B0;
    PUSH32(esp, 0x000A417Bu); RECOMP_ABI_CALL(0x000A3D60u, sub_000A3D60); /* call 0x000A3D60 */

loc_000A417B: ;
    ecx = MEM32(0x4C8E08);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(esi * 4 + 0x4C8A04) = MEM32(esi * 4 + 0x4C8A04) + eax;
    if (((int32_t)MEM32(esi * 4 + 0x4C8A04) >= 0)) goto loc_000A41AE; /* jns: not sign (positive) */

loc_000A4191: ;
    MEM32(esi * 4 + 0x4C8A04) = esi;
    ecx = MEM32(0x4C8E08);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(esi * 4 + 0x4C8A04) = edx;

loc_000A41AE: ;
    eax = MEM32(edi + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A4136; /* jl: less (signed <) */

loc_000A41BD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edi + 0x18) = 0;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A41CB: ;
    MEM32(edi + 0x18) = ebx;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A41E0
 * Original: 0x000A41E0 - 0x000A41EC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A41E0(void)
{

loc_000A41E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A41E8u); RECOMP_ABI_CALL(0x000A40B0u, sub_000A40B0); /* call 0x000A40B0 */

loc_000A41E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A41F0
 * Original: 0x000A41F0 - 0x000A44A9 (697 bytes, 205 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A41F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A41F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FC51);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x4C;
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000A4233; /* jne: not equal / not zero */

loc_000A421E: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x4C);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x58;
    esp += 8; return; /* ret 4 */

loc_000A4233: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    edi = ecx;
    MEM32(esp + 0x18) = edi;
    if ((ecx == 0)) goto loc_000A4433; /* je: equal / zero */

loc_000A424F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2CDC);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000A425Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A425F: ;
    PUSH32(esp, ebx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x6C) = ebx;
    PUSH32(esp, 0x000A4270u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000A4270: ;
    ecx = esp + 0x1C;
    edi = eax;
    MEM32(esp + 0x64) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A4283u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4283: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4433; /* je: equal / zero */

loc_000A428B: ;
    goto loc_000A4290;

    /* nop */

loc_000A4290: ;
    eax = MEM32(0x4C8A00);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4492; /* je: equal / zero */

loc_000A42A2: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4492; /* je: equal / zero */

loc_000A42AC: ;
    ebp = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    ebp = eax;
    MEM32(esp + 0x6C) = ebp;
    if ((eax == 0)) goto loc_000A43F1; /* je: equal / zero */

loc_000A42C6: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2CD4);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000A42D6u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A42D6: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x68) = 1;
    PUSH32(esp, 0x000A42EAu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A42EA: ;
    ecx = esp + 0x2C;
    ebp = eax;
    MEM32(esp + 0x64) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A42FDu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A42FD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4308; /* je: equal / zero */

loc_000A4301: ;
    ecx = esi;
    PUSH32(esp, 0x000A4308u); RECOMP_ABI_CALL(0x000A4120u, sub_000A4120); /* call 0x000A4120 */

loc_000A4308: ;
    ebp = 0; /* xor self */
    esi = esi + 4;
    /* nop */

loc_000A4310: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A444A; /* jge: greater or equal (signed >=) */

loc_000A431D: ;
    eax = MEM32(0x4C8E04);
    eax = eax & MEM32(esi);
    eax = eax + eax * 4;
    ecx = eax * 4 + 0x4C71B0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A4336u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A4336: ;
    SET_LO8(ebx, LO8(eax));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4310; /* je: equal / zero */

loc_000A4340: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000A4342: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    MEM32(esp + 0x64) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_000A4365; /* je: equal / zero */

loc_000A4351: ;
    eax = MEM32(esp + 0x10);
    eax = eax & 0xFFFFFFFEu;
    ecx = esp + 0x3C;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000A4365u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4365: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A43ED; /* je: equal / zero */

loc_000A436D: ;
    ecx = 0x4C71B0;
    PUSH32(esp, 0x000A4377u); RECOMP_ABI_CALL(0x000A3420u, sub_000A3420); /* call 0x000A3420 */

loc_000A4377: ;
    esi = eax;
    edx = esi + esi * 4;
    eax = edx * 4 + 0x4C71B0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4389u); RECOMP_ABI_CALL(0x000A3E60u, sub_000A3E60); /* call 0x000A3E60 */

loc_000A4389: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ecx * 4 + 0x4C85B0;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    esi = MEM32(esi * 4 + 0x4C8A04);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A43ED; /* je: equal / zero */

loc_000A43B5: ;
    PUSH32(esp, esi);
    ecx = 0x4C71B0;
    PUSH32(esp, 0x000A43C0u); RECOMP_ABI_CALL(0x000A30E0u, sub_000A30E0); /* call 0x000A30E0 */

loc_000A43C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A43ED; /* je: equal / zero */

loc_000A43C4: ;
    eax = MEM32(0x4C8E04);
    eax = eax & esi;
    eax = eax + eax * 4;
    ecx = eax * 4 + 0x4C71B0;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A43DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A43DD: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x18);
    eax = eax + 4;
    MEM32(eax + ecx * 4) = esi;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000A43ED: ;
    esi = MEM32(esp + 0x14);

loc_000A43F1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2CDC);
    ecx = esp + 0x54;
    PUSH32(esp, 0x000A4401u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A4401: ;
    PUSH32(esp, edi);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x6C) = 3;
    PUSH32(esp, 0x000A4418u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000A4418: ;
    ecx = esp + 0x4C;
    edi = eax;
    MEM32(esp + 0x64) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A442Bu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A442B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A4290; /* jne: not equal / not zero */

loc_000A4433: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x4C);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x58;
    esp += 8; return; /* ret 4 */

loc_000A444A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A4340; /* jne: not equal / not zero */

loc_000A4452: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2CD0);
    ecx = esp + 0x44;
    PUSH32(esp, 0x000A4462u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A4462: ;
    esi = MEM32(esp + 0x10);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x70);
    esi = esi | 1;
    MEM32(esp + 0x68) = 2;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x000A4483u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A4483: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4340; /* je: equal / zero */

loc_000A448B: ;
    SET_LO8(ebx, 1);
    goto loc_000A4342;

loc_000A4492: ;
    ecx = MEM32(esp + 0x5C);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x58;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A44B0
 * Original: 0x000A44B0 - 0x000A44E8 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A44B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A44B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = 0; /* xor self */
    goto loc_000A44C0;

    /* nop */

loc_000A44C0: ;
    eax = MEM32(esi * 4 + 0x44ECFC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A44CEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A44CE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A44E3; /* je: equal / zero */

loc_000A44D5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A44C0; /* jl: less (signed <) */

loc_000A44DB: ;
    POP32(esp, edi);
    eax = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A44E3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A44F0
 * Original: 0x000A44F0 - 0x000A4524 (52 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A44F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A44F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x460);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4520; /* je: equal / zero */

loc_000A44FD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A4503u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A4503: ;
    ecx = MEM32(esi + 0x460);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A450Fu); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_000A450F: ;
    esp = esp + 4;
    MEM32(esi + 0x460) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A4520: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4530
 * Original: 0x000A4530 - 0x000A457C (76 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4530: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x28;
    ebx = 4;
    goto loc_000A4540;

    /* nop */

loc_000A4540: ;
    edi = 0; /* xor self */

loc_000A4542: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + -36);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + -36) = ecx;
    ecx = MEM32(esi + eax);
    ecx = ecx & edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    MEM32(esi + eax) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000A4542; /* jl: less (signed <) */

loc_000A4570: ;
    esi = esi + 8;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A4540; /* jne: not equal / not zero */

loc_000A4576: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4580
 * Original: 0x000A4580 - 0x000A4592 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4580(void)
{

loc_000A4580: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x40;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A45A0
 * Original: 0x000A45A0 - 0x000A45B3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A45A0(void)
{

loc_000A45A0: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 4);
    PUSH32(esp, 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A45B2u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000A45B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A45C0
 * Original: 0x000A45C0 - 0x000A462C (108 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A45C0(void)
{

loc_000A45C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D2D04;
    eax = 0; /* xor self */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    ecx = 0; /* xor self */
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = ecx;
    PUSH32(esp, 0x13D370);
    MEM32(esi + 0x34) = ecx;
    PUSH32(esp, 0xA4580);
    MEM32(esi + 0x38) = ecx;
    PUSH32(esp, 4);
    MEM32(esi + 0x3C) = ecx;
    PUSH32(esp, 0x104);
    edx = esi + 0x4C;
    MEM32(esi + 0x40) = ecx;
    PUSH32(esp, edx);
    MEM32(esi + 0x44) = ecx;
    PUSH32(esp, 0x000A4617u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_000A4617: ;
    ecx = esi;
    MEM32(esi + 0x460) = 0;
    PUSH32(esp, 0x000A4628u); RECOMP_ABI_CALL(0x000A4530u, sub_000A4530); /* call 0x000A4530 */

loc_000A4628: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4630
 * Original: 0x000A4630 - 0x000A4657 (39 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4630(void)
{

loc_000A4630: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0x24);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A4645u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_000A4645: ;
    PUSH32(esp, 0x24);
    esi = esi + 0x28;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A4652u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_000A4652: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4660
 * Original: 0x000A4660 - 0x000A4687 (39 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4660(void)
{

loc_000A4660: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, 0x24);
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A4675u); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_000A4675: ;
    PUSH32(esp, 0x24);
    esi = esi + 0x28;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000A4682u); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_000A4682: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4690
 * Original: 0x000A4690 - 0x000A46BB (43 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4690: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_000A46B4; /* jl: less (signed <) */

loc_000A469C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A46B4; /* jge: greater or equal (signed >=) */

loc_000A46A1: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_000A46A4: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000A46ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A46AD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A46A4; /* jl: less (signed <) */

loc_000A46B3: ;
    POP32(esp, esi);

loc_000A46B4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A46C0
 * Original: 0x000A46C0 - 0x000A47BB (251 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A46C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A46C0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FC81);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x460);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A47A7; /* jne: not equal / not zero */

loc_000A46E9: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x000A46F2u); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_000A46F2: ;
    esp = esp + 8;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x34) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000A4712; /* je: equal / zero */

loc_000A4709: ;
    ecx = eax;
    PUSH32(esp, 0x000A4710u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000A4710: ;
    goto loc_000A4714;

loc_000A4712: ;
    eax = 0; /* xor self */

loc_000A4714: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    PUSH32(esp, 2);
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    MEM32(esi + 0x460) = eax;
    PUSH32(esp, 0x3D2D48);
    if (TEST_S(_fas, _fbs)) goto loc_000A475C; /* jl: less (signed <) */

loc_000A4732: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000A473Bu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A473B: ;
    ecx = MEM32(esi + 0x460);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x44) = 1;
    PUSH32(esp, 0x000A4756u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000A4756: ;
    ecx = esp + 0x10;
    goto loc_000A4785;

loc_000A475C: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x000A4765u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A4765: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x460);
    MEM32(esp + 0x44) = 2;
    PUSH32(esp, 0x000A4781u); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000A4781: ;
    ecx = esp + 0x20;

loc_000A4785: ;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A4792u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4792: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x28);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 8; return; /* ret 4 */

loc_000A47A7: ;
    ecx = MEM32(esp + 0x2C);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A47C0
 * Original: 0x000A47C0 - 0x000A4812 (82 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A47C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A47C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000A480B; /* jl: less (signed <) */

loc_000A47CA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A480B; /* jge: greater or equal (signed >=) */

loc_000A47CF: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000A480B; /* jl: less (signed <) */

loc_000A47D7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A480B; /* jge: greater or equal (signed >=) */

loc_000A47DC: ;
    eax = ecx + edi * 8 + 4;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = eax + ecx * 4;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    PUSH32(esp, 0x000A47FBu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A47FB: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000A4804u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A4804: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A480B: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4820
 * Original: 0x000A4820 - 0x000A4864 (68 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A4820: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_000A485F; /* jl: less (signed <) */

loc_000A482A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000A485F; /* jge: greater or equal (signed >=) */

loc_000A482F: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_000A485F; /* jl: less (signed <) */

loc_000A4837: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000A485F; /* jge: greater or equal (signed >=) */

loc_000A483C: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((5) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    eax = esi + eax * 2;
    eax = MEM32(edx + eax * 4 + 4);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    esi = 1;
    if (LO8(ecx)) _cf = (int)(((esi) >> (32 - (LO8(ecx)))) & 1);
    esi = esi << LO8(ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A485F: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4870
 * Original: 0x000A4870 - 0x000A48BD (77 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebx = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_000A48B8; /* jl: less (signed <) */

loc_000A487E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A48B8; /* jge: greater or equal (signed >=) */

loc_000A4883: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000A48B8; /* jl: less (signed <) */

loc_000A488B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A48B8; /* jge: greater or equal (signed >=) */

loc_000A4890: ;
    edx = ecx;
    PUSH32(esp, esi);
    ecx = ecx & 0x1F;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = edx + edi * 2 + 0xA;
    _fa = (uint32_t)(MEM32(ebx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + ecx * 4), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A48AB; /* jne: not equal / not zero */

loc_000A48A9: ;
    SET_LO8(eax, 1);

loc_000A48AB: ;
    ecx = ebx + edi * 8 + 0x28;
    edi = MEM32(ecx + edx * 4);
    edi = edi | esi;
    POP32(esp, esi);
    MEM32(ecx + edx * 4) = edi;

loc_000A48B8: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A48C0
 * Original: 0x000A48C0 - 0x000A496B (171 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A48C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A48C0: ;
    eax = MEM32(XBOX_FS_BASE);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FC98);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A48E8u); RECOMP_ABI_CALL(0x000A4970u, sub_000A4970); /* call 0x000A4970 */

loc_000A48E8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4957; /* je: equal / zero */

loc_000A48EE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE1D4);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000A48FEu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A48FE: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x000A4912u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A4912: ;
    ecx = esp + 4;
    esi = eax;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A4925u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4925: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4957; /* je: equal / zero */

loc_000A4929: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A4935u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A4935: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A4940u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000A4940: ;
    esp = esp + 0xC;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

loc_000A4957: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A4970
 * Original: 0x000A4970 - 0x000A4ACB (347 bytes, 109 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4970: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x34FCC8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x460);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000A4A9D; /* je: equal / zero */

loc_000A499C: ;
    eax = MEM32(0x44ED0C);
    PUSH32(esp, 2);
    ebx = ebx | 0xFFFFFFFFu;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    ebp = ebx;
    PUSH32(esp, 0x000A49B2u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A49B2: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x460);
    MEM32(esp + 0x3C) = 0;
    PUSH32(esp, 0x000A49CAu); RECOMP_ABI_CALL(0x00125FE0u, sub_00125FE0); /* call 0x00125FE0 */

loc_000A49CA: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x000A49D9u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A49D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4A9D; /* je: equal / zero */

loc_000A49E1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE144);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000A49F1u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A49F1: ;
    edx = esp + 0x10;
    edi = 1;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x3C) = edi;
    PUSH32(esp, 0x000A4A06u); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_000A4A06: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x38) = ebx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000A4A22u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4A22: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4A9D; /* je: equal / zero */

loc_000A4A26: ;
    goto loc_000A4A30;

    /* nop */
    /* nop */

loc_000A4A30: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CC9F4);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000A4A40u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A4A40: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x3C) = 2;
    PUSH32(esp, 0x000A4A54u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A4A54: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM32(esp + 0x38) = ebx;
    PUSH32(esp, 0x000A4A63u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4A63: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4A90; /* je: equal / zero */

loc_000A4A67: ;
    ecx = edi;
    PUSH32(esp, 0x000A4A6Eu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A4A6E: ;
    ecx = MEM32(esp + 0x40);
    edx = MEM32(ecx * 4 + 0x44ECFC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4A80u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A4A80: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A4A90; /* jne: not equal / not zero */

loc_000A4A87: ;
    eax = MEM32(esp + 0x44);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4AB4; /* je: equal / zero */

loc_000A4A90: ;
    ecx = esi;
    PUSH32(esp, 0x000A4A97u); RECOMP_ABI_CALL(0x00126040u, sub_00126040); /* call 0x00126040 */

loc_000A4A97: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A4A30; /* jne: not equal / not zero */

loc_000A4A9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

loc_000A4AB4: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4AD0
 * Original: 0x000A4AD0 - 0x000A4B7B (171 bytes, 51 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4AD0: ;
    eax = MEM32(XBOX_FS_BASE);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FC98);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A4AF8u); RECOMP_ABI_CALL(0x000A4970u, sub_000A4970); /* call 0x000A4970 */

loc_000A4AF8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4B67; /* je: equal / zero */

loc_000A4AFE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000A4B0Eu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A4B0E: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x000A4B22u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A4B22: ;
    ecx = esp + 4;
    esi = eax;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A4B35u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4B35: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4B67; /* je: equal / zero */

loc_000A4B39: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A4B45u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A4B45: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A4B50u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000A4B50: ;
    esp = esp + 0xC;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

loc_000A4B67: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A4B80
 * Original: 0x000A4B80 - 0x000A4C96 (278 bytes, 65 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4B80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FCEB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x88;
    eax = MEM32(0x47A050);
    edx = MEM32(esp + 0x98);
    MEM32(esp + 0x84) = eax;
    eax = MEM32(esp + 0x9C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A4BBDu); RECOMP_ABI_CALL(0x000A4970u, sub_000A4970); /* call 0x000A4970 */

loc_000A4BBD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4C70; /* je: equal / zero */

loc_000A4BC7: ;
    eax = MEM32(esp + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000A4C70; /* jl: less (signed <) */

loc_000A4BD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A4C70; /* jge: greater or equal (signed >=) */

loc_000A4BDF: ;
    MEM32(esp + 4) = 0x3D03B4;
    MEM32(esp + 8) = 0x3D03AC;
    MEM32(esp + 0xC) = 0x3D03A4;
    MEM32(esp + 0x10) = 0x3D039C;
    eax = MEM32(esp + eax * 4 + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2D60);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    MEM8(esp + 0x34) = 0;
    PUSH32(esp, 0x000A4C1Au); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A4C1A: ;
    esp = esp + 0x10;
    PUSH32(esp, 2);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000A4C2Du); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A4C2D: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x98) = 0;
    PUSH32(esp, 0x000A4C44u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A4C44: ;
    ecx = esp + 0x14;
    esi = eax;
    MEM32(esp + 0x94) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A4C5Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4C5A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4C70; /* je: equal / zero */

loc_000A4C5E: ;
    ecx = esi;
    PUSH32(esp, 0x000A4C65u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A4C65: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4C6Bu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000A4C6B: ;
    esp = esp + 4;
    goto loc_000A4C72;

loc_000A4C70: ;
    eax = 0; /* xor self */

loc_000A4C72: ;
    ecx = MEM32(esp + 0x8C);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x88);
    POP32(esp, esi);
    PUSH32(esp, 0x000A4C8Du); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A4C8D: ;
    esp = esp + 0x94;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A4CA0
 * Original: 0x000A4CA0 - 0x000A4D3F (159 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4CA0: ;
    eax = MEM32(XBOX_FS_BASE);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FC98);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A4CC8u); RECOMP_ABI_CALL(0x000A4970u, sub_000A4970); /* call 0x000A4970 */

loc_000A4CC8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4D2B; /* je: equal / zero */

loc_000A4CCE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2D6C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000A4CDEu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A4CDE: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x000A4CF2u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A4CF2: ;
    ecx = esp + 4;
    esi = eax;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A4D05u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4D05: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4D2B; /* je: equal / zero */

loc_000A4D09: ;
    ecx = esi;
    PUSH32(esp, 0x000A4D10u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A4D10: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4D16u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000A4D16: ;
    esp = esp + 4;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

loc_000A4D2B: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4D40
 * Original: 0x000A4D40 - 0x000A4D87 (71 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4D40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000A4D82; /* jl: less (signed <) */

loc_000A4D48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A4D82; /* jge: greater or equal (signed >=) */

loc_000A4D4D: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000A4D82; /* jl: less (signed <) */

loc_000A4D55: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A4D82; /* jge: greater or equal (signed >=) */

loc_000A4D5A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x41);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = eax + edx;
    PUSH32(esp, esi);
    ecx = ecx + eax * 4 + 0x4C;
    PUSH32(esp, 0x000A4D6Eu); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_000A4D6E: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4D79u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000A4D79: ;
    esp = esp + 0xC;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_000A4D82: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A4D90
 * Original: 0x000A4D90 - 0x000A4F73 (483 bytes, 148 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4D90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4D90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FD20);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    ebx = ebx | 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esp + 0xC) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000A4DBAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A4DBA: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A4DC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A4DC2: ;
    eax = MEM32(ebp + 0x460);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4F5A; /* je: equal / zero */

loc_000A4DD0: ;
    eax = MEM32(0x44ED0C);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x000A4DF2u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A4DF2: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x460);
    MEM32(esp + 0x4C) = 0;
    PUSH32(esp, 0x000A4E0Au); RECOMP_ABI_CALL(0x00125FE0u, sub_00125FE0); /* call 0x00125FE0 */

loc_000A4E0A: ;
    ecx = esp + 0x20;
    esi = eax;
    MEM32(esp + 0x48) = ebx;
    PUSH32(esp, 0x000A4E19u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4E19: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4F59; /* je: equal / zero */

loc_000A4E21: ;
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CE144);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000A4E32u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A4E32: ;
    edx = esp + 0x24;
    edi = 1;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x50) = edi;
    PUSH32(esp, 0x000A4E47u); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_000A4E47: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 0x4C) = ebx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    edi = ecx;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000A4E63u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4E63: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4F58; /* je: equal / zero */

loc_000A4E6B: ;
    goto loc_000A4E70;

    /* nop */

loc_000A4E70: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CC9F4);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000A4E80u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A4E80: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x50) = 2;
    PUSH32(esp, 0x000A4E94u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A4E94: ;
    ecx = esp + 0x24;
    esi = eax;
    MEM32(esp + 0x4C) = ebx;
    PUSH32(esp, 0x000A4EA3u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4EA3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2D78);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000A4EB3u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000A4EB3: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x50) = 3;
    PUSH32(esp, 0x000A4EC7u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000A4EC7: ;
    ecx = esp + 0x34;
    ebp = eax;
    MEM32(esp + 0x4C) = ebx;
    PUSH32(esp, 0x000A4ED6u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000A4ED6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4F43; /* je: equal / zero */

loc_000A4EDA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4F43; /* je: equal / zero */

loc_000A4EDE: ;
    ecx = esi;
    PUSH32(esp, 0x000A4EE5u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A4EE5: ;
    ebx = eax;
    esi = 0; /* xor self */
    /* nop */

loc_000A4EF0: ;
    ecx = MEM32(esi * 4 + 0x44ECFC);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A4EFEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A4EFE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A4F0D; /* je: equal / zero */

loc_000A4F05: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A4EF0; /* jl: less (signed <) */

loc_000A4F0B: ;
    goto loc_000A4F40;

loc_000A4F0D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000A4F40; /* jl: less (signed <) */

loc_000A4F11: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A4F40; /* jge: greater or equal (signed >=) */

loc_000A4F16: ;
    ecx = MEM32(esp + esi * 4 + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40 (32-bit) */
    MEM32(esp + esi * 4 + 0x14) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_000A4F40; /* jge: greater or equal (signed >=) */

loc_000A4F26: ;
    ecx = ebp;
    PUSH32(esp, 0x000A4F2Du); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000A4F2D: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x41);
    edx = MEM32(esp + 0x10);
    esi = esi + ebx;
    PUSH32(esp, eax);
    ecx = edx + esi * 4 + 0x4C;
    PUSH32(esp, 0x000A4F40u); RECOMP_ABI_CALL(0x00013EB0u, sub_00013EB0); /* call 0x00013EB0 */

loc_000A4F40: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_000A4F43: ;
    ecx = edi;
    PUSH32(esp, 0x000A4F4Au); RECOMP_ABI_CALL(0x00126040u, sub_00126040); /* call 0x00126040 */

loc_000A4F4A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A4E70; /* jne: not equal / not zero */

loc_000A4F54: ;
    ebp = MEM32(esp + 0x10);

loc_000A4F58: ;
    POP32(esp, edi);

loc_000A4F59: ;
    POP32(esp, esi);

loc_000A4F5A: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A4F62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A4F62: ;
    ecx = MEM32(esp + 0x3C);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4F80
 * Original: 0x000A4F80 - 0x000A4FB1 (49 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4F80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_000A4FAA; /* jl: less (signed <) */

loc_000A4F8C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A4FAA; /* jge: greater or equal (signed >=) */

loc_000A4F91: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A4F9Cu); RECOMP_ABI_CALL(0x000A4FC0u, sub_000A4FC0); /* call 0x000A4FC0 */

loc_000A4F9C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A4FA5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A4FA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A4FAA: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4FC0
 * Original: 0x000A4FC0 - 0x000A5114 (340 bytes, 91 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4FC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4FC0: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10C) = eax;
    eax = MEM32(esp + 0x118);
    PUSH32(esp, 0x80);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A4FF1u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000A4FF1: ;
    edx = esp + 0x98;
    PUSH32(esp, 0x3D2D80);
    PUSH32(esp, edx);
    MEM8(esp + 0x11F) = 0;
    PUSH32(esp, 0x000A500Bu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000A500B: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A5015; /* je: equal / zero */

loc_000A5012: ;
    MEM8(eax) = 0;

loc_000A5015: ;
    eax = MEM32(esp + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000A50DF; /* jl: less (signed <) */

loc_000A5024: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A50DF; /* jge: greater or equal (signed >=) */

loc_000A502D: ;
    ebp = 0; /* xor self */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x104);
    edi = eax + esi + 0x4C;
    /* nop */

loc_000A5040: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A50DF; /* je: equal / zero */

loc_000A504A: ;
    PUSH32(esp, 0x000A504Fu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000A504F: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A50DF; /* je: equal / zero */

loc_000A5065: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A5072; /* jne: not equal / not zero */

loc_000A506B: ;
    eax = 0x3C806C;
    goto loc_000A5088;

loc_000A5072: ;
    PUSH32(esp, 0x000A5077u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000A5077: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x8008;

loc_000A5088: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5098u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000A5098: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x3D2D80);
    PUSH32(esp, ecx);
    MEM8(esp + 0x9F) = 0;
    PUSH32(esp, 0x000A50AFu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000A50AF: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A50B9; /* je: equal / zero */

loc_000A50B6: ;
    MEM8(eax) = 0;

loc_000A50B9: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A50CBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000A50CB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A50FA; /* je: equal / zero */

loc_000A50D2: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A5040; /* jl: less (signed <) */

loc_000A50DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x000A50F1u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A50F1: ;
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

loc_000A50FA: ;
    ecx = MEM32(esp + 0x10C);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    PUSH32(esp, 0x000A510Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A510B: ;
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A5120
 * Original: 0x000A5120 - 0x000A51A1 (129 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5120: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FD3B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3D2D04;
    ecx = MEM32(esi + 0x460);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000A5174; /* je: equal / zero */

loc_000A5155: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A515Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A515B: ;
    ecx = MEM32(esi + 0x460);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5167u); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_000A5167: ;
    esp = esp + 4;
    MEM32(esi + 0x460) = 0;

loc_000A5174: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 4);
    PUSH32(esp, 0x104);
    esi = esi + 0x4C;
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A5191u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000A5191: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000A51B0
 * Original: 0x000A51B0 - 0x000A51CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A51B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A51B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A51B8u); RECOMP_ABI_CALL(0x000A5120u, sub_000A5120); /* call 0x000A5120 */

loc_000A51B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A51C8; /* je: equal / zero */

loc_000A51BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A51C5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000A51C5: ;
    esp = esp + 4;

loc_000A51C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A51D0
 * Original: 0x000A51D0 - 0x000A522C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A51D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A51D0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x4C9284));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FD5E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_000A5219; /* jne: not equal / not zero */

loc_000A51F4: ;
    MEM32(0x4C9284) = MEM32(0x4C9284) | eax;
    ecx = 0x4C8E20;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x000A520Cu); RECOMP_ABI_CALL(0x000A45C0u, sub_000A45C0); /* call 0x000A45C0 */

loc_000A520C: ;
    PUSH32(esp, 0x35A040);
    PUSH32(esp, 0x000A5216u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_000A5216: ;
    esp = esp + 4;

loc_000A5219: ;
    ecx = MEM32(esp);
    eax = 0x4C8E20;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5230
 * Original: 0x000A5230 - 0x000A5265 (53 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5230(void)
{

loc_000A5230: ;
    xml1_saved_stats_cancel(ecx);
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(ecx + 0x774));
    MEM32(ecx + 0xD4) = eax;
    MEM8(ecx + 0xDE) = MEM8(ecx + 0xDE) & 0xFE;
    SET_LO8(eax, 1);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM32(ecx + 0xD8) = 0;
    MEM8(ecx + 0xDD) = 0xFF;
    MEM8(ecx + 0x774) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5270
 * Original: 0x000A5270 - 0x000A5277 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5270(void)
{

loc_000A5270: ;
    eax = MEM32(ecx + 0xD4);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5280
 * Original: 0x000A5280 - 0x000A52B4 (52 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5280: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xDD) = LO8(eax);
    eax = MEM32(ecx + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A52A2; /* jne: not equal / not zero */

loc_000A5295: ;
    MEM32(ecx + 0xD8) = 0x11;
    esp += 8; return; /* ret 4 */

loc_000A52A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A52B1; /* jne: not equal / not zero */

loc_000A52A7: ;
    MEM32(ecx + 0xD8) = 0x1F;

loc_000A52B1: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A52C0
 * Original: 0x000A52C0 - 0x000A52CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A52C0(void)
{

loc_000A52C0: ;
    SET_LO8(eax, MEM8(ecx + 0xDE));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A52D0
 * Original: 0x000A52D0 - 0x000A52E2 (18 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A52D0(void)
{

loc_000A52D0: ;
    MEM8(ecx + 0xDE) = MEM8(ecx + 0xDE) | 8;
    MEM32(ecx + 0xD8) = 9;
    esp += 4; return; /* ret */

}

/**
 * sub_000A52F0
 * Original: 0x000A52F0 - 0x000A5307 (23 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A52F0(void)
{

loc_000A52F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xDD) = LO8(eax);
    MEM32(ecx + 0xD8) = 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5310
 * Original: 0x000A5310 - 0x000A5344 (52 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5310: ;
    _fa = (uint32_t)(MEM8(ecx + 0xDD)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xDD), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5330; /* jne: not equal / not zero */

loc_000A5319: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xDD) = LO8(eax);
    MEM32(ecx + 0xD8) = 0x13;
    esp += 8; return; /* ret 4 */

loc_000A5330: ;
    MEM8(ecx + 0xDE) = MEM8(ecx + 0xDE) | 1;
    MEM32(ecx + 0xD8) = 0x1F;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5350
 * Original: 0x000A5350 - 0x000A5375 (37 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5350: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xDD) = LO8(eax);
    eax = MEM32(ecx + 0xD8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x15 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = edx + edx + 0x14;
    MEM32(ecx + 0xD8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5380
 * Original: 0x000A5380 - 0x000A53D0 (80 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5380: ;
    xml1_saved_stats_cancel(ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xD4) = 0;
    PUSH32(esp, 0x000A5392u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5392: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000A5399u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5399: ;
    SET_LO8(eax, MEM8(esi + 0xDE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A53BC; /* je: equal / zero */

loc_000A53A3: ;
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(esi + 0xDE) = LO8(eax);
    PUSH32(esp, 0x000A53B0u); RECOMP_ABI_CALL(0x0011CD90u, xml1_guest_command_manager_get); /* call 0x0011CD90 */

loc_000A53B0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3D2DF8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A53BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A53BC: ;
    SET_LO8(eax, MEM8(esi + 0xDE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A53CE; /* je: equal / zero */

loc_000A53C6: ;
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM8(esi + 0xDE) = LO8(eax);

loc_000A53CE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A53D0
 * Original: 0x000A53D0 - 0x000A53F0 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A53D0(void)
{

loc_000A53D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0xDE));
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0xDE) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A53F0
 * Original: 0x000A53F0 - 0x000A53FB (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A53F0(void)
{

loc_000A53F0: ;
    SET_LO8(eax, MEM8(ecx + 0xDE));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5400
 * Original: 0x000A5400 - 0x000A541C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5400(void)
{

loc_000A5400: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0xDE));
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0xDE) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5420
 * Original: 0x000A5420 - 0x000A5476 (86 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5420: ;
    if (xml1_saved_stats_complete(ecx)) { esp += 4; return; }
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5428u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A5428: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000A5431u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5431: ;
    PUSH32(esp, 0x000A5436u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A5436: ;
    ecx = MEM32(esi + 0xE0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x198); PUSH32(esp, 0x000A5447u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5447: ;
    PUSH32(esp, 0x000A544Cu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A544C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A5455u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5455: ;
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5461u); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_000A5461: ;
    edx = MEM32(esi);
    esp = esp + 4;
    MEM32(esi + 0xE0) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x38)); return; /* indirect tail jmp */

}

/**
 * sub_000A5480
 * Original: 0x000A5480 - 0x000A5498 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5480: ;
    edx = MEM32(ecx + 0xD8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1A (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax + 0x1B;
    MEM32(ecx + 0xD8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000A54A0
 * Original: 0x000A54A0 - 0x000A54A5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A54A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A54A0: ;
    g_seh_ebp = ebp; sub_000A54B0(); return; /* tail jmp 0x000A54B0 */

}

/**
 * sub_000A54B0
 * Original: 0x000A54B0 - 0x000A5554 (164 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A54B0(void)
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

loc_000A54B0: ;
    eax = MEM32(ecx + 0xD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A54E4; /* ja: above (unsigned >) */

loc_000A54BC: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA54EC); /* switch: 6 entries, 3 targets */
    if (_jt == 0x000A54C3u) goto loc_000A54C3;
    if (_jt == 0x000A54CEu) goto loc_000A54CE;
    if (_jt == 0x000A54D9u) goto loc_000A54D9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A54C3: ;
    MEM32(ecx + 0xD8) = 8;
    esp += 4; return; /* ret */

loc_000A54CE: ;
    MEM32(ecx + 0xD8) = 0x1F;
    esp += 4; return; /* ret */

loc_000A54D9: ;
    MEM32(ecx + 0xD8) = 0xE;
    esp += 4; return; /* ret */

loc_000A54E4: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x38)); return; /* indirect tail jmp */

    /* nop */
    esp += 4; return; /* ret */

    MEM32(ecx + 0xD8) = 8;
    esp += 8; return; /* ret 4 */

loc_000A5528: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5551; /* jne: not equal / not zero */

loc_000A552D: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A5542; /* jne: not equal / not zero */

loc_000A5535: ;
    MEM32(ecx + 0xD8) = 0x11;
    esp += 8; return; /* ret 4 */

loc_000A5542: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5551; /* jne: not equal / not zero */

loc_000A5547: ;
    MEM32(ecx + 0xD8) = 0xE;

loc_000A5551: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A5510
 * Original: 0x000A5510 - 0x000A5554 (68 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5510: ;
    eax = MEM32(ecx + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5528; /* jne: not equal / not zero */

loc_000A551B: ;
    MEM32(ecx + 0xD8) = 8;
    esp += 8; return; /* ret 4 */

loc_000A5528: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5551; /* jne: not equal / not zero */

loc_000A552D: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A5542; /* jne: not equal / not zero */

loc_000A5535: ;
    MEM32(ecx + 0xD8) = 0x11;
    esp += 8; return; /* ret 4 */

loc_000A5542: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5551; /* jne: not equal / not zero */

loc_000A5547: ;
    MEM32(ecx + 0xD8) = 0xE;

loc_000A5551: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5560
 * Original: 0x000A5560 - 0x000A557F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5560: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D2D9C;
    if (TEST_Z(_fa, _fb)) goto loc_000A5579; /* je: equal / zero */

loc_000A5570: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A5576u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000A5576: ;
    esp = esp + 4;

loc_000A5579: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5580
 * Original: 0x000A5580 - 0x000A5598 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5580: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5588u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A5588: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A5596; /* je: equal / zero */

loc_000A558C: ;
    MEM32(esi + 0xD8) = 0xE;

loc_000A5596: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A55A0
 * Original: 0x000A55A0 - 0x000A56EC (332 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A55A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A55A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000A55A9u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A55A9: ;
    edx = MEM32(eax);
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x775);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A55B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A55B7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A55CC; /* jl: less (signed <) */

loc_000A55BB: ;
    SET_LO8(eax, MEM8(esi + 0xDC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A55CA; /* jle: less or equal (signed <=) */

loc_000A55C5: ;
    edi = SX8(LO8(eax));
    goto loc_000A55CC;

loc_000A55CA: ;
    edi = 0; /* xor self */

loc_000A55CC: ;
    PUSH32(esp, 0x000A55D1u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A55D1: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A55D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A55D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A55EA; /* jne: not equal / not zero */

loc_000A55DD: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000A55E5u); RECOMP_ABI_CALL(0x000A59A0u, sub_000A59A0); /* call 0x000A59A0 */

loc_000A55E5: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A55EA: ;
    PUSH32(esp, 0x000A55EFu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A55EF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A55F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A55F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, MEM8(esi + 0xDC));
    if (TEST_Z(_fa, _fb)) goto loc_000A569C; /* je: equal / zero */

loc_000A5604: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000A5674; /* jl: less (signed <) */

loc_000A5608: ;
    PUSH32(esp, 0x000A560Du); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A560D: ;
    edx = MEM32(eax);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A5620u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5620: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A5635; /* jne: not equal / not zero */

loc_000A5624: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A5633u); RECOMP_ABI_CALL(0x000A59A0u, sub_000A59A0); /* call 0x000A59A0 */

loc_000A5633: ;
    goto loc_000A5682;

loc_000A5635: ;
    eax = MEM32(esi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A5650; /* jne: not equal / not zero */

loc_000A563F: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A564Eu); RECOMP_ABI_CALL(0x000A5900u, sub_000A5900); /* call 0x000A5900 */

loc_000A564E: ;
    goto loc_000A5682;

loc_000A5650: ;
    PUSH32(esp, 0x000A5655u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5655: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x24);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A5668u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5668: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A5672u); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A5672: ;
    goto loc_000A5682;

loc_000A5674: ;
    eax = MEM32(esi + 0xD4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A5682u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5682: ;
    MEM8(esi + 0x774) = MEM8(esi + 0x774) | 1;
    POP32(esp, edi);
    MEM8(esi + 0xDC) = 0xFF;
    MEM8(esi + 0x775) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A569C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000A56E7; /* jl: less (signed <) */

loc_000A56A0: ;
    PUSH32(esp, 0x000A56A5u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A56A5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A56ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A56AC: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x775);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A56E7; /* jl: less (signed <) */

loc_000A56B7: ;
    PUSH32(esp, 0x000A56BCu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A56BC: ;
    edx = MEM32(eax);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A56CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A56CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A56E7; /* jne: not equal / not zero */

loc_000A56D3: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A56E2u); RECOMP_ABI_CALL(0x000A59A0u, sub_000A59A0); /* call 0x000A59A0 */

loc_000A56E2: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A56E7: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A56F0
 * Original: 0x000A56F0 - 0x000A58F6 (518 bytes, 162 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A56F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A56F0: ;
    esp = esp - 0x68;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x78);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x70) = eax;
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A58DD; /* je: equal / zero */

loc_000A570F: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A58DD; /* je: equal / zero */

loc_000A5717: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A571Du); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A571D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A5726u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5726: ;
    eax = MEM32(esp + 0x80);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esp + 0x10) = LO8(ebx);
    if ((_fa == 0)) goto loc_000A5889; /* je: equal / zero */

loc_000A5738: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A57DB; /* je: equal / zero */

loc_000A573F: ;
    PUSH32(esp, 0x000A5744u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5744: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A574Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A574C: ;
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2E04);
    ecx = esp + 0x18;
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5764u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A5764: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x000A576Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A576C: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A5778u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5778: ;
    PUSH32(esp, 0x000A577Du); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A577D: ;
    edi = eax;
    PUSH32(esp, 0x000A5784u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5784: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x410);
    ecx = edi;
    MEM32(esp + 0x80) = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A579Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A579C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x80);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000A57AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A57AA: ;
    PUSH32(esp, 0x000A57AFu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A57AF: ;
    edi = eax;
    PUSH32(esp, 0x000A57B6u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A57B6: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40F);
    ecx = edi;
    MEM32(esp + 0x80) = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A57CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A57CE: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x80);
    goto loc_000A5872;

loc_000A57DB: ;
    PUSH32(esp, 0x000A57E0u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A57E0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A57E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A57E8: ;
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2E04);
    ecx = esp + 0x18;
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5800u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A5800: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x000A5808u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5808: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A5814u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5814: ;
    PUSH32(esp, 0x000A5819u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A5819: ;
    edi = eax;
    PUSH32(esp, 0x000A5820u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5820: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x410);
    ecx = edi;
    MEM32(esp + 0x80) = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A5838u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5838: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x80);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000A5846u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5846: ;
    PUSH32(esp, 0x000A584Bu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A584B: ;
    edi = eax;
    PUSH32(esp, 0x000A5852u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5852: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = edi;
    MEM32(esp + 0x80) = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A586Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A586A: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x80);

loc_000A5872: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000A5879u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5879: ;
    PUSH32(esp, 0x000A587Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A587E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A5887u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5887: ;
    goto loc_000A589B;

loc_000A5889: ;
    PUSH32(esp, 0x000A588Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A588E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A589Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A589B: ;
    xml1_saved_stats_cancel(esi);
    SET_LO8(ecx, MEM8(esi + 0x774));
    SET_LO8(eax, MEM8(esi + 0xDE));
    SET_LO8(ecx, LO8(ecx) | 1);
    SET_LO8(eax, LO8(eax) & 0xED);
    MEM32(esi + 0xD4) = ebx;
    MEM8(esi + 0x774) = LO8(ecx);
    MEM8(esi + 0xDE) = LO8(eax);
    PUSH32(esp, 0x000A58C3u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A58C3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A58CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A58CA: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 0x000A58D7u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A58D7: ;
    esp = esp + 0x68;
    esp += 12; return; /* ret 8 */

loc_000A58DD: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000A58E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A58E4: ;
    ecx = MEM32(esp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A58F0u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A58F0: ;
    esp = esp + 0x68;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A5900
 * Original: 0x000A5900 - 0x000A5992 (146 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x000A590Eu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A590E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x000A5918u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5918: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebp = MEM32(esp + 0x18);
    if (TEST_NZ(_fa, _fb)) goto loc_000A5927; /* jne: not equal / not zero */

loc_000A5920: ;
    ebx = 1;
    goto loc_000A5935;

loc_000A5927: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    SET_LO8(ebx, (TEST_S(_fas, _fbs)) ? 1 : 0); /* setl */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & 0xFFFFFFE5u;
    ebx = ebx + 0x1F;

loc_000A5935: ;
    PUSH32(esp, 0x000A593Au); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A593A: ;
    esi = eax;
    PUSH32(esp, 0x000A5941u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5941: ;
    edx = MEM32(esi);
    edi = eax;
    eax = MEM32(edi);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A5950u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5950: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000A595Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A595A: ;
    esi = eax;
    PUSH32(esp, 0x000A5961u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5961: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FC00);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A596Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A596D: ;
    esi = esi + eax;
    PUSH32(esp, 0x000A5974u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5974: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A597Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A597E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A598Au); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A598A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A59A0
 * Original: 0x000A59A0 - 0x000A5A36 (150 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A59A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A59A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000A59A9u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A59A9: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000A59B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A59B5: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_000A5A22; /* je: equal / zero */

loc_000A59BA: ;
    eax = eax - 5;
    if ((eax == 0)) goto loc_000A5A02; /* je: equal / zero */

loc_000A59BF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A59E2; /* je: equal / zero */

loc_000A59C2: ;
    PUSH32(esp, 0x000A59C7u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A59C7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A59D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A59D3: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A59DDu); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A59DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A59E2: ;
    PUSH32(esp, 0x000A59E7u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A59E7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x29);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A59F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A59F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A59FDu); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A59FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A5A02: ;
    PUSH32(esp, 0x000A5A07u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5A07: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A5A13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5A13: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A5A1Du); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A5A1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A5A22: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A5A31u); RECOMP_ABI_CALL(0x000A5900u, sub_000A5900); /* call 0x000A5900 */

loc_000A5A31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5A40
 * Original: 0x000A5A40 - 0x000A5A4F (15 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5A40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5A40: ;
    MEM32(ecx + 0xD8) = 0xA;
    g_seh_ebp = ebp; sub_000A5A50(); return; /* tail jmp 0x000A5A50 */

}

/**
 * sub_000A5A50
 * Original: 0x000A5A50 - 0x000A5BA8 (344 bytes, 120 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5A50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5A50: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x44) = eax;
    ebx = ecx;
    PUSH32(esp, 0x000A5A64u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A5A64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A5B9A; /* je: equal / zero */

loc_000A5A6C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000A5A79u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5A79: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A5A82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5A82: ;
    PUSH32(esp, 0x000A5A87u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5A87: ;
    esi = eax;
    PUSH32(esp, 0x000A5A8Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5A8E: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1D);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A5AA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5AA3: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A5AABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5AAB: ;
    PUSH32(esp, 0x3D2E30);
    eax = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5ABCu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A5ABC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A5AC4u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5AC4: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A5AD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5AD0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D2E18);
    edx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A5AE3u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A5AE3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x000A5AEBu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5AEB: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A5AF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5AF7: ;
    PUSH32(esp, 0x000A5AFCu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A5AFC: ;
    esi = eax;
    PUSH32(esp, 0x000A5B03u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5B03: ;
    edx = MEM32(esi);
    edi = eax;
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x410);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A5B13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5B13: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A5B1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5B1B: ;
    PUSH32(esp, 0x000A5B20u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A5B20: ;
    esi = eax;
    PUSH32(esp, 0x000A5B27u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5B27: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A5B37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5B37: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A5B3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5B3F: ;
    PUSH32(esp, 0x000A5B44u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5B44: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A5B4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5B4D: ;
    PUSH32(esp, 0x000A5B52u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5B52: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A5B5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5B5B: ;
    PUSH32(esp, 0x000A5B60u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A5B60: ;
    esi = eax;
    PUSH32(esp, 0x000A5B67u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5B67: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A5B75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5B75: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A5B81u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5B81: ;
    PUSH32(esp, 0x000A5B86u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A5B86: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A5B8Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5B8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebp);

loc_000A5B9A: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A5BA4u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A5BA4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5BB0
 * Original: 0x000A5BB0 - 0x000A5BC8 (24 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5BB0(void)
{

loc_000A5BB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5BB8u); RECOMP_ABI_CALL(0x000A5BD0u, sub_000A5BD0); /* call 0x000A5BD0 */

loc_000A5BB8: ;
    ecx = MEM32(esi + 0xD4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A5BC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5BC6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5BD0
 * Original: 0x000A5BD0 - 0x000A5C68 (152 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5BD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5BD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000A5BDCu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A5BDC: ;
    edi = eax;
    PUSH32(esp, 0x000A5BE3u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A5BE3: ;
    ebx = eax;
    PUSH32(esp, 0x000A5BEAu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5BEA: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = MEM32(ebp);
    ecx = edi;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A5BFAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5BFA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A5C02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5C02: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x000A5C14u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5C14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A5C52; /* jne: not equal / not zero */

loc_000A5C18: ;
    eax = MEM32(esi + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5C4A; /* je: equal / zero */

loc_000A5C23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5C4A; /* je: equal / zero */

loc_000A5C28: ;
    PUSH32(esp, 0x000A5C2Du); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5C2D: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x23);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A5C40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5C40: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A5C4Au); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A5C4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A5C52: ;
    SET_LO8(eax, MEM8(esi + 0xDE));
    SET_LO8(eax, LO8(eax) | 4);
    POP32(esp, edi);
    MEM8(esi + 0xDE) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5C70
 * Original: 0x000A5C70 - 0x000A5C7F (15 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5C70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5C70: ;
    MEM32(ecx + 0xD8) = 3;
    g_seh_ebp = ebp; sub_000A5C80(); return; /* tail jmp 0x000A5C80 */

}

/**
 * sub_000A5C80
 * Original: 0x000A5C80 - 0x000A5CAE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5C88u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A5C88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A5CAC; /* je: equal / zero */

loc_000A5C8C: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000A5C94u); RECOMP_ABI_CALL(0x000A5CB0u, sub_000A5CB0); /* call 0x000A5CB0 */

loc_000A5C94: ;
    edi = eax;
    PUSH32(esp, 0x000A5C9Bu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5C9B: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000A5CABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5CAB: ;
    POP32(esp, edi);

loc_000A5CAC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5CB0
 * Original: 0x000A5CB0 - 0x000A5D05 (85 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5CB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    PUSH32(esp, 0x000A5CBBu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5CBB: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000A5CCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5CCA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A5CEF; /* jne: not equal / not zero */

loc_000A5CCE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A5CD4u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A5CD4: ;
    esi = eax;
    PUSH32(esp, 0x000A5CDBu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5CDB: ;
    edx = MEM32(esi);
    edi = eax;
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A5CE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5CE6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x34); PUSH32(esp, 0x000A5CECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5CEC: ;
    esi = eax;
    POP32(esp, ebx);

loc_000A5CEF: ;
    PUSH32(esp, 0x000A5CF4u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5CF4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FC00);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A5D00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5D00: ;
    POP32(esp, edi);
    eax = eax + esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5D10
 * Original: 0x000A5D10 - 0x000A5D37 (39 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5D10(void)
{

loc_000A5D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5D18u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A5D18: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x27);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A5D2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5D2B: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A5D35u); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A5D35: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5D40
 * Original: 0x000A5D40 - 0x000A5E47 (263 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5D40(void)
{

loc_000A5D40: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax) = 0x3D2D9C;
    MEM8(eax + 4) = LO8(ecx);
    MEM8(eax + 0x84) = LO8(ecx);
    MEM8(eax + 0xA4) = LO8(ecx);
    SET_LO8(edx, LO8(edx) | 0xFF);
    MEM8(eax + 0xDC) = LO8(edx);
    MEM8(eax + 0xDD) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0xDE));
    MEM32(eax + 0xD4) = ecx;
    MEM32(eax + 0xD8) = ecx;
    MEM32(eax + 0xE0) = ecx;
    SET_LO8(edx, LO8(edx) & 0xE0);
    MEM8(eax + 0xDE) = LO8(edx);
    MEM8(eax + 0xE4) = LO8(ecx);
    MEM8(eax + 0x164) = LO8(ecx);
    edx = eax + 0xE4;
    MEM8(edx + 0xA8) = LO8(ecx);
    MEM8(edx + 0x128) = LO8(ecx);
    edx = edx + 0xA8;
    MEM8(edx + 0xA8) = LO8(ecx);
    MEM8(edx + 0x128) = LO8(ecx);
    edx = edx + 0xA8;
    MEM8(edx + 0xA8) = LO8(ecx);
    MEM8(edx + 0x128) = LO8(ecx);
    edx = edx + 0xA8;
    MEM8(edx + 0xA8) = LO8(ecx);
    MEM8(edx + 0x128) = LO8(ecx);
    edx = edx + 0xA8;
    MEM8(edx + 0xA8) = LO8(ecx);
    MEM8(edx + 0x128) = LO8(ecx);
    edx = edx + 0xA8;
    MEM8(edx + 0xA8) = LO8(ecx);
    MEM8(edx + 0x128) = LO8(ecx);
    edx = edx + 0xA8;
    MEM8(edx + 0xA8) = LO8(ecx);
    MEM8(edx + 0x128) = LO8(ecx);
    edx = edx + 0xA8;
    MEM8(edx + 0xA8) = LO8(ecx);
    edx = edx + 0xA8;
    MEM8(edx + 0x80) = LO8(ecx);
    edx = edx + 0xA8;
    MEM8(edx) = LO8(ecx);
    MEM8(edx + 0x80) = LO8(ecx);
    MEM8(eax + 0x774) = MEM8(eax + 0x774) | 1;
    MEM8(eax + 0x775) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5E50
 * Original: 0x000A5E50 - 0x000A6050 (512 bytes, 201 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5E50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5E58u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000A5E58: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000A5E5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5E5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A5E6D; /* jne: not equal / not zero */

loc_000A5E63: ;
    MEM32(esi + 0xD8) = 0;

loc_000A5E6D: ;
    eax = MEM32(esi + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A5FC8; /* je: equal / zero */

loc_000A5E7B: ;
    PUSH32(esp, 0x000A5E80u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000A5E80: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000A5E87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5E87: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A5FC8; /* je: equal / zero */

loc_000A5E8F: ;
    eax = MEM32(esi + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000A5FC8; /* ja: above (unsigned >) */

loc_000A5E9E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA5FCC); /* switch: 32 entries, 30 targets */
    if (_jt == 0x000A5EA5u) goto loc_000A5EA5;
    if (_jt == 0x000A5EADu) goto loc_000A5EAD;
    if (_jt == 0x000A5EB5u) goto loc_000A5EB5;
    if (_jt == 0x000A5EBDu) goto loc_000A5EBD;
    if (_jt == 0x000A5EC5u) goto loc_000A5EC5;
    if (_jt == 0x000A5EE9u) goto loc_000A5EE9;
    if (_jt == 0x000A5EF1u) goto loc_000A5EF1;
    if (_jt == 0x000A5EF9u) goto loc_000A5EF9;
    if (_jt == 0x000A5F01u) goto loc_000A5F01;
    if (_jt == 0x000A5F09u) goto loc_000A5F09;
    if (_jt == 0x000A5F11u) goto loc_000A5F11;
    if (_jt == 0x000A5F19u) goto loc_000A5F19;
    if (_jt == 0x000A5F21u) goto loc_000A5F21;
    if (_jt == 0x000A5F29u) goto loc_000A5F29;
    if (_jt == 0x000A5F31u) goto loc_000A5F31;
    if (_jt == 0x000A5F39u) goto loc_000A5F39;
    if (_jt == 0x000A5F41u) goto loc_000A5F41;
    if (_jt == 0x000A5F49u) goto loc_000A5F49;
    if (_jt == 0x000A5F51u) goto loc_000A5F51;
    if (_jt == 0x000A5F59u) goto loc_000A5F59;
    if (_jt == 0x000A5F61u) goto loc_000A5F61;
    if (_jt == 0x000A5F78u) goto loc_000A5F78;
    if (_jt == 0x000A5F80u) goto loc_000A5F80;
    if (_jt == 0x000A5F88u) goto loc_000A5F88;
    if (_jt == 0x000A5F90u) goto loc_000A5F90;
    if (_jt == 0x000A5F98u) goto loc_000A5F98;
    if (_jt == 0x000A5FAFu) goto loc_000A5FAF;
    if (_jt == 0x000A5FB7u) goto loc_000A5FB7;
    if (_jt == 0x000A5FBFu) goto loc_000A5FBF;
    if (_jt == 0x000A5FC8u) goto loc_000A5FC8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A5EA5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7C20(); return; /* tail jmp 0x000A7C20 */

loc_000A5EAD: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A5C80(); return; /* tail jmp 0x000A5C80 */

loc_000A5EB5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7240(); return; /* tail jmp 0x000A7240 */

loc_000A5EBD: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A73D0(); return; /* tail jmp 0x000A73D0 */

loc_000A5EC5: ;
    ecx = esi;
    PUSH32(esp, 0x000A5ECCu); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A5ECC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A5FC8; /* je: equal / zero */

loc_000A5ED4: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A5EDDu); RECOMP_ABI_CALL(0x000A6050u, sub_000A6050); /* call 0x000A6050 */

loc_000A5EDD: ;
    MEM32(esi + 0xD8) = 7;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A5EE9: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7DE0(); return; /* tail jmp 0x000A7DE0 */

loc_000A5EF1: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7D30(); return; /* tail jmp 0x000A7D30 */

loc_000A5EF9: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A61A0(); return; /* tail jmp 0x000A61A0 */

loc_000A5F01: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7F90(); return; /* tail jmp 0x000A7F90 */

loc_000A5F09: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A5A50(); return; /* tail jmp 0x000A5A50 */

loc_000A5F11: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A60C0(); return; /* tail jmp 0x000A60C0 */

loc_000A5F19: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A61C0(); return; /* tail jmp 0x000A61C0 */

loc_000A5F21: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A6340(); return; /* tail jmp 0x000A6340 */

loc_000A5F29: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A6470(); return; /* tail jmp 0x000A6470 */

loc_000A5F31: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A69D0(); return; /* tail jmp 0x000A69D0 */

loc_000A5F39: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A6B80(); return; /* tail jmp 0x000A6B80 */

loc_000A5F41: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A6C80(); return; /* tail jmp 0x000A6C80 */

loc_000A5F49: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A6CE0(); return; /* tail jmp 0x000A6CE0 */

loc_000A5F51: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A70E0(); return; /* tail jmp 0x000A70E0 */

loc_000A5F59: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7540(); return; /* tail jmp 0x000A7540 */

loc_000A5F61: ;
    ecx = esi;
    PUSH32(esp, 0x000A5F68u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A5F68: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A5FC8; /* je: equal / zero */

loc_000A5F6C: ;
    MEM32(esi + 0xD8) = 0x17;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A5F78: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A76A0(); return; /* tail jmp 0x000A76A0 */

loc_000A5F80: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7730(); return; /* tail jmp 0x000A7730 */

loc_000A5F88: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7810(); return; /* tail jmp 0x000A7810 */

loc_000A5F90: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7940(); return; /* tail jmp 0x000A7940 */

loc_000A5F98: ;
    ecx = esi;
    PUSH32(esp, 0x000A5F9Fu); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A5F9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A5FC8; /* je: equal / zero */

loc_000A5FA3: ;
    MEM32(esi + 0xD8) = 0x1D;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A5FAF: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7A70(); return; /* tail jmp 0x000A7A70 */

loc_000A5FB7: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A7B50(); return; /* tail jmp 0x000A7B50 */

loc_000A5FBF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x000A5FC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A5FC8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    { uint64_t _t = (uint64_t)(MEM8(edi + 0xA)) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(edi + 0xA) = (uint32_t)_t; }  /* sbb */
    MEM8(edi + 0xA) = LO8(ebx);
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    /* nop */
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    eax = SX16(eax); /* cwde */
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    /* TODO: scasd eax, dword ptr es:[edi] */
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    SET_HI8(ebx, 0x5F);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    edi = 0xCC000A5Fu;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000A6050
 * Original: 0x000A6050 - 0x000A60B8 (104 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A6050: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A6058u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6058: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A6061u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6061: ;
    PUSH32(esp, 0x000A6066u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6066: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A6072u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6072: ;
    PUSH32(esp, 0x000A6077u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6077: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A6080u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6080: ;
    PUSH32(esp, 0x000A6085u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A6085: ;
    esi = eax;
    PUSH32(esp, 0x000A608Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A608C: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A609Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A609A: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x28); PUSH32(esp, 0x000A60A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A60A6: ;
    PUSH32(esp, 0x000A60ABu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A60AB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A60B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A60B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A60C0
 * Original: 0x000A60C0 - 0x000A6199 (217 bytes, 75 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A60C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A60C0: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x44) = eax;
    ebx = ecx;
    PUSH32(esp, 0x000A60D4u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A60D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A618B; /* je: equal / zero */

loc_000A60DC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A60E4u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A60E4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A60EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A60ED: ;
    PUSH32(esp, 0x000A60F2u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A60F2: ;
    esi = eax;
    PUSH32(esp, 0x000A60F9u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A60F9: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1E);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A610Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A610E: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A6116u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6116: ;
    PUSH32(esp, 0x3D2E40);
    eax = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    MEM8(esp + 0x1C) = 0;
    PUSH32(esp, 0x000A612Cu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A612C: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x000A6134u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6134: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A6140u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6140: ;
    PUSH32(esp, 0x000A6145u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A6145: ;
    esi = eax;
    PUSH32(esp, 0x000A614Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A614C: ;
    edx = MEM32(esi);
    edi = eax;
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A615Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A615C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A6164u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6164: ;
    PUSH32(esp, 0x000A6169u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6169: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A6172u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6172: ;
    PUSH32(esp, 0x000A6177u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6177: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A617Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A617E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebp);

loc_000A618B: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A6195u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A6195: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A61A0
 * Original: 0x000A61A0 - 0x000A61BE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A61A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A61A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A61A8u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A61A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A61BC; /* je: equal / zero */

loc_000A61AC: ;
    eax = MEM32(esi + 0xD4);
    MEM32(esi + 0xD8) = 9;

loc_000A61BC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A61C0
 * Original: 0x000A61C0 - 0x000A6336 (374 bytes, 132 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A61C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A61C0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x44) = eax;
    ebx = ecx;
    PUSH32(esp, 0x000A61D4u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A61D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A6328; /* je: equal / zero */

loc_000A61DC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000A61E9u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A61E9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A61F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A61F2: ;
    PUSH32(esp, 0x000A61F7u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A61F7: ;
    esi = eax;
    PUSH32(esp, 0x000A61FEu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A61FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x30);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A620Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A620D: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A6215u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6215: ;
    PUSH32(esp, 0x3D2E5C);
    eax = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6226u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A6226: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A622Eu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A622E: ;
    esi = eax;
    PUSH32(esp, 0x000A6235u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6235: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edi = eax;
    ebp = MEM32(edi);
    PUSH32(esp, 0x7EA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A6250u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6250: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000A6256u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6256: ;
    PUSH32(esp, 0x3D2E30);
    eax = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6267u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A6267: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A626Fu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A626F: ;
    esi = eax;
    PUSH32(esp, 0x000A6276u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6276: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edi = eax;
    ebp = MEM32(edi);
    PUSH32(esp, 0x7EB);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A6291u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6291: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000A6297u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6297: ;
    PUSH32(esp, 0x000A629Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A629C: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A62A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A62A8: ;
    PUSH32(esp, 0x3D2E30);
    edx = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A62B9u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A62B9: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A62C1u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A62C1: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A62CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A62CD: ;
    PUSH32(esp, 0x000A62D2u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A62D2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A62DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A62DB: ;
    PUSH32(esp, 0x000A62E0u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A62E0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A62E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A62E9: ;
    PUSH32(esp, 0x000A62EEu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A62EE: ;
    esi = eax;
    PUSH32(esp, 0x000A62F5u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A62F5: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A6303u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6303: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A630Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A630F: ;
    PUSH32(esp, 0x000A6314u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6314: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A631Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A631B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebp);

loc_000A6328: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A6332u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A6332: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6340
 * Original: 0x000A6340 - 0x000A646B (299 bytes, 102 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6340(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6340: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x44) = eax;
    esi = ecx;
    PUSH32(esp, 0x000A6354u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A6354: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A645D; /* je: equal / zero */

loc_000A635C: ;
    SET_LO8(eax, MEM8(esi + 0xDE));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xEF);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esi + 0xDE) = LO8(eax);
    PUSH32(esp, 0x000A6374u); RECOMP_ABI_CALL(0x000A5CB0u, sub_000A5CB0); /* call 0x000A5CB0 */

loc_000A6374: ;
    edi = eax;
    PUSH32(esp, 0x000A637Bu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A637B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A6382u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6382: ;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000A638Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A638E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A6397u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6397: ;
    PUSH32(esp, 0x000A639Cu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A639C: ;
    ebx = eax;
    PUSH32(esp, 0x000A63A3u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A63A3: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ebp = eax;
    eax = MEM32(ebx);
    PUSH32(esp, 0x33);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A63B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A63B7: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A63C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A63C0: ;
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2E04);
    ecx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A63D8u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A63D8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x000A63E0u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A63E0: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A63ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A63EC: ;
    PUSH32(esp, 0x000A63F1u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A63F1: ;
    edi = eax;
    PUSH32(esp, 0x000A63F8u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A63F8: ;
    edx = MEM32(edi);
    ebx = eax;
    ebp = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A6408u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6408: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A6410u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6410: ;
    PUSH32(esp, 0x000A6415u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6415: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A641Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A641E: ;
    PUSH32(esp, 0x000A6423u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A6423: ;
    edi = eax;
    PUSH32(esp, 0x000A642Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A642A: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A6438u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6438: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A6444u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6444: ;
    PUSH32(esp, 0x000A6449u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6449: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A6450u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6450: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0xD8) = 1;
    POP32(esp, ebx);

loc_000A645D: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, esi);
    PUSH32(esp, 0x000A6467u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A6467: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6425
 * Original: 0x000A6425 - 0x000A646B (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6425(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6425: ;
    PUSH32(esp, 0x000A642Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A642A: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A6438u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6438: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A6444u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6444: ;
    PUSH32(esp, 0x000A6449u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6449: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A6450u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6450: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0xD8) = 1;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x44);
    POP32(esp, esi);
    PUSH32(esp, 0x000A6467u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A6467: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6470
 * Original: 0x000A6470 - 0x000A64A1 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6470: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A6478u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A6478: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A649F; /* je: equal / zero */

loc_000A647C: ;
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), 4 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esi;
    MEM8(esi + 0xDD) = 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6495u); RECOMP_ABI_CALL(0x000A64B0u, sub_000A64B0); /* call 0x000A64B0 */

loc_000A6495: ;
    MEM32(esi + 0xD8) = 1;

loc_000A649F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A64B0
 * Original: 0x000A64B0 - 0x000A69C6 (1302 bytes, 413 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A64B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A64B0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x358));
    esp = esp - 0x358;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x364) = eax;
    ebp = ecx;
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM8(esp + 0xC0) = LO8(ebx);
    MEM8(esp + 0x164) = LO8(ebx);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x000A64E9u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A64E9: ;
    esi = eax;
    PUSH32(esp, 0x000A64F0u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A64F0: ;
    edx = MEM32(esi);
    ecx = esp + 0x14;
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2FC00);
    ecx = esi;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A6509u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6509: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0xDC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000A651Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A651B: ;
    _fa = (uint32_t)(MEM8(esp + 0x36C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x36C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A6588; /* je: equal / zero */

loc_000A6524: ;
    _fa = (uint32_t)(MEM32(ebp + 0xCC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xCC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A6588; /* jne: not equal / not zero */

loc_000A652C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A6588; /* jne: not equal / not zero */

loc_000A6530: ;
    PUSH32(esp, 0x000A6535u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A6535: ;
    esi = eax;
    PUSH32(esp, 0x000A653Cu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A653C: ;
    edx = MEM32(esi);
    edi = eax;
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A6547u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6547: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x34); PUSH32(esp, 0x000A654Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A654D: ;
    esi = eax;
    PUSH32(esp, 0x000A6554u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6554: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FC00);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A6560u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6560: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    PUSH32(esp, 0x000A6567u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6567: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A6579u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6579: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000A6583u); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A6583: ;
    goto loc_000A69AD;

loc_000A6588: ;
    PUSH32(esp, 0x000A658Du); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A658D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A6596u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6596: ;
    _fa = (uint32_t)(MEM8(esp + 0x36C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x36C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A6647; /* je: equal / zero */

loc_000A65A3: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000A65E1; /* jle: less or equal (signed <=) */

loc_000A65A9: ;
    PUSH32(esp, 0x000A65AEu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A65AE: ;
    edx = MEM32(eax);
    ecx = ebp + 0xA4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A65C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A65C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2EFC);
    eax = esp + 0x170;
    PUSH32(esp, 0x200);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A65D9u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A65D9: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    goto loc_000A6675;

loc_000A65E1: ;
    PUSH32(esp, 0x000A65E6u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A65E6: ;
    esi = eax;
    PUSH32(esp, 0x000A65EDu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A65ED: ;
    edx = MEM32(esi);
    edi = eax;
    eax = MEM32(edi);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A65FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A65FC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000A6606u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6606: ;
    esi = eax;
    PUSH32(esp, 0x000A660Du); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A660D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FC00);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A6619u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6619: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    PUSH32(esp, 0x000A6620u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6620: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2D);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A6632u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6632: ;
    PUSH32(esp, eax);
    edx = esp + 0x168;
    PUSH32(esp, 0x200);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A6645u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A6645: ;
    goto loc_000A6672;

loc_000A6647: ;
    PUSH32(esp, 0x000A664Cu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A664C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7E5);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A6658u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6658: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, eax);
    eax = esp + 0x16C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A666Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000A666B: ;
    MEM8(esp + 0x36F) = LO8(ebx);

loc_000A6672: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;

loc_000A6675: ;
    PUSH32(esp, 0x000A667Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A667A: ;
    edx = MEM32(eax);
    ecx = esp + 0x164;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A6689u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6689: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    goto loc_000A6690;

    /* nop */

loc_000A6690: ;
    _fa = (uint32_t)(MEM8(esp + 0x36C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x36C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x5C) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000A66C9; /* je: equal / zero */

loc_000A669D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D2EE4);
    edx = esp + 0x24;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A66AFu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A66AF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D2ECC);
    eax = esp + 0xD8;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A66C4u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A66C4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    goto loc_000A6720;

loc_000A66C9: ;
    PUSH32(esp, 0x000A66CEu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_000A66CE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000A66D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A66D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A66E1; /* je: equal / zero */

loc_000A66D9: ;
    _fa = (uint32_t)(MEM8(0x48584E)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x48584E), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A66FC; /* je: equal / zero */

loc_000A66E1: ;
    PUSH32(esp, 0x000A66E6u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_000A66E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A670B; /* je: equal / zero */

loc_000A66EA: ;
    PUSH32(esp, 0x000A66EFu); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_000A66EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A670B; /* jne: not equal / not zero */

loc_000A66F3: ;
    PUSH32(esp, 0x000A66F8u); RECOMP_ABI_CALL(0x000BF740u, sub_000BF740); /* call 0x000BF740 */

loc_000A66F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A670B; /* jne: not equal / not zero */

loc_000A66FC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D2EB0);
    PUSH32(esp, 0x40);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    goto loc_000A6718;

loc_000A670B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D2E98);
    PUSH32(esp, 0x40);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);

loc_000A6718: ;
    PUSH32(esp, 0x000A671Du); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A671D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;

loc_000A6720: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xA8);
    SET_LO8(eax, MEM8(edx + ebp + 0x188));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    esi = edx + ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000A680E; /* jne: not equal / not zero */

loc_000A673A: ;
    _fa = (uint32_t)(MEM8(esi + 0x189)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x189), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A67B3; /* jne: not equal / not zero */

loc_000A6742: ;
    PUSH32(esp, 0x000A6747u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A6747: ;
    edx = MEM32(eax);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xE4)) >> 32) & 1);
    esi = esi + 0xE4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xBAE);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A675Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A675E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2E8C);
    eax = esp + 0x6C;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6770u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A6770: ;
    SET_LO8(eax, MEM8(esp + 0x384));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A6790; /* je: equal / zero */

loc_000A677E: ;
    PUSH32(esp, 0x000A6783u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6783: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    goto loc_000A6799;

loc_000A6790: ;
    PUSH32(esp, 0x000A6795u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6795: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);

loc_000A6799: ;
    edx = MEM32(eax);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000A67AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A67AA: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A6926;

loc_000A67B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A680E; /* jne: not equal / not zero */

loc_000A67B7: ;
    _fa = (uint32_t)(MEM8(esi + 0x189)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x189), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A680E; /* je: equal / zero */

loc_000A67BF: ;
    SET_LO8(ecx, MEM8(esp + 0x36C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A6815; /* je: equal / zero */

loc_000A67CA: ;
    PUSH32(esp, 0x000A67CFu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A67CF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7ED);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A67DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A67DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    eax = esp + 0x64;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A67EDu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A67ED: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x000A67F5u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A67F5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x6C;
    goto loc_000A691E;

loc_000A680E: ;
    SET_LO8(ecx, MEM8(esp + 0x36C));

loc_000A6815: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A686E; /* jne: not equal / not zero */

loc_000A6819: ;
    _fa = (uint32_t)(MEM8(esi + 0x189)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x189), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A686E; /* je: equal / zero */

loc_000A6821: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A686E; /* jne: not equal / not zero */

loc_000A6825: ;
    PUSH32(esp, 0x000A682Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A682A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7EE);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A6836u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6836: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    eax = esp + 0x64;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6848u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A6848: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x000A6850u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6850: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D2E74);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000A6865u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6865: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A6926;

loc_000A686E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x100) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000A68D5; /* je: equal / zero */

loc_000A6879: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000A6926; /* jle: less or equal (signed <=) */

loc_000A6885: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000A688Fu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A688F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7E7);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A689Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A689B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    eax = esp + 0x108;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A68B0u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A68B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D2E98);
    ecx = esp + 0x34;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A68C2u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A68C2: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    PUSH32(esp, 0x000A68CAu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A68CA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    goto loc_000A6917;

loc_000A68D5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A6926; /* jne: not equal / not zero */

loc_000A68DA: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A6926; /* jne: not equal / not zero */

loc_000A68E0: ;
    PUSH32(esp, 0x000A68E5u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A68E5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7E8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A68F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A68F1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2C44);
    eax = esp + 0x108;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6906u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A6906: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x000A690Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A690E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C806C);

loc_000A6917: ;
    ecx = esp + 0x110;

loc_000A691E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000A6926u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6926: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000A6690; /* jl: less (signed <) */

loc_000A6930: ;
    _fa = (uint32_t)(MEM8(esp + 0x36C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x36C), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A695D; /* je: equal / zero */

loc_000A6939: ;
    PUSH32(esp, 0x000A693Eu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A693E: ;
    esi = eax;
    PUSH32(esp, 0x000A6945u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6945: ;
    edx = MEM32(esi);
    edi = eax;
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7EC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A6955u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6955: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A695Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A695D: ;
    PUSH32(esp, 0x000A6962u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6962: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3D2E30);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A696Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A696E: ;
    PUSH32(esp, 0x000A6973u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6973: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A697Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A697B: ;
    PUSH32(esp, 0x000A6980u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A6980: ;
    esi = eax;
    PUSH32(esp, 0x000A6987u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6987: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A6995u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6995: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x28); PUSH32(esp, 0x000A69A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A69A1: ;
    PUSH32(esp, 0x000A69A6u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A69A6: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A69ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A69AD: ;
    ecx = MEM32(esp + 0x364);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A69BDu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A69BD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x358)) >> 32) & 1);
    esp = esp + 0x358;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A69D0
 * Original: 0x000A69D0 - 0x000A6B7D (429 bytes, 150 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A69D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A69D0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    MEM32(esp + 0x48) = eax;
    _fa = (uint32_t)(MEM32(ebx + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xD4), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000A69FE; /* jne: not equal / not zero */

loc_000A69F0: ;
    PUSH32(esp, 0x000A69F5u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A69F5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A69FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A69FE: ;
    PUSH32(esp, 0x000A6A03u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6A03: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A6A0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6A0C: ;
    _fa = (uint32_t)(MEM32(ebx + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xD4), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A6A70; /* jne: not equal / not zero */

loc_000A6A15: ;
    PUSH32(esp, 0x000A6A1Au); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6A1A: ;
    esi = eax;
    PUSH32(esp, 0x000A6A21u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6A21: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A6A30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6A30: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A6A38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6A38: ;
    PUSH32(esp, 0x3D2E30);
    eax = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6A49u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A6A49: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A6A51u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6A51: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A6A5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6A5D: ;
    PUSH32(esp, 0x000A6A62u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6A62: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A6A6Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6A6B: ;
    goto loc_000A6AFE;

loc_000A6A70: ;
    PUSH32(esp, 0x3D2F04);
    eax = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6A81u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A6A81: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A6A89u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6A89: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A6A95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6A95: ;
    PUSH32(esp, 0x000A6A9Au); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6A9A: ;
    esi = eax;
    PUSH32(esp, 0x000A6AA1u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6AA1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A6AB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6AB0: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A6AB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6AB8: ;
    PUSH32(esp, 0x000A6ABDu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6ABD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A6AC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6AC6: ;
    PUSH32(esp, 0x000A6ACBu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6ACB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000A6AD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6AD4: ;
    PUSH32(esp, 0x000A6AD9u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A6AD9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x174); PUSH32(esp, 0x000A6AE3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6AE3: ;
    esi = eax;
    PUSH32(esp, 0x000A6AEAu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000A6AEA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000A6AF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6AF1: ;
    PUSH32(esp, 0x000A6AF6u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000A6AF6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A6AFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6AFE: ;
    PUSH32(esp, 0x000A6B03u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A6B03: ;
    esi = eax;
    PUSH32(esp, 0x000A6B0Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6B0A: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A6B1Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6B1A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A6B22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6B22: ;
    PUSH32(esp, 0x000A6B27u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6B27: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A6B30u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6B30: ;
    PUSH32(esp, 0x000A6B35u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A6B35: ;
    esi = eax;
    PUSH32(esp, 0x000A6B3Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6B3C: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A6B4Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6B4A: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A6B56u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6B56: ;
    PUSH32(esp, 0x000A6B5Bu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6B5B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A6B62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6B62: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebx);
    PUSH32(esp, 0x000A6B79u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A6B79: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6B80
 * Original: 0x000A6B80 - 0x000A6C7A (250 bytes, 90 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6B80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6B80: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x50) = eax;
    ebx = ecx;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000A6B9Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6B9C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A6BA5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6BA5: ;
    PUSH32(esp, 0x000A6BAAu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6BAA: ;
    esi = eax;
    PUSH32(esp, 0x000A6BB1u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6BB1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x22);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A6BC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6BC0: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A6BC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6BC8: ;
    PUSH32(esp, 0x3D2E30);
    eax = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6BD9u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A6BD9: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A6BE1u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6BE1: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A6BEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6BED: ;
    PUSH32(esp, 0x000A6BF2u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A6BF2: ;
    esi = eax;
    PUSH32(esp, 0x000A6BF9u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6BF9: ;
    edx = MEM32(esi);
    edi = eax;
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A6C09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6C09: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A6C11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6C11: ;
    PUSH32(esp, 0x000A6C16u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6C16: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A6C1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6C1F: ;
    PUSH32(esp, 0x000A6C24u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6C24: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A6C2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6C2D: ;
    PUSH32(esp, 0x000A6C32u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A6C32: ;
    esi = eax;
    PUSH32(esp, 0x000A6C39u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6C39: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A6C47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6C47: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A6C53u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6C53: ;
    PUSH32(esp, 0x000A6C58u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A6C58: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A6C5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6C5F: ;
    MEM32(ebx + 0xD8) = 1;
    ecx = MEM32(esp + 0x50);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A6C76u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A6C76: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6C6F
 * Original: 0x000A6C6F - 0x000A6C7A (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6C6F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6C6F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A6C76u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A6C76: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6C80
 * Original: 0x000A6C80 - 0x000A6CDD (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A6C88u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A6C88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A6CDB; /* je: equal / zero */

loc_000A6C8C: ;
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6CD1; /* jne: not equal / not zero */

loc_000A6C95: ;
    _fa = (uint32_t)(MEM8(esi + 0xDE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xDE), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A6CB1; /* je: equal / zero */

loc_000A6C9E: ;
    PUSH32(esp, 0x000A6CA3u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6CA3: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    goto loc_000A6CC2;

loc_000A6CB1: ;
    PUSH32(esp, 0x000A6CB6u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6CB6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);

loc_000A6CC2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A6CC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6CC9: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6CD1u); RECOMP_ABI_CALL(0x000A6050u, sub_000A6050); /* call 0x000A6050 */

loc_000A6CD1: ;
    MEM32(esi + 0xD8) = 0x12;

loc_000A6CDB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6CE0
 * Original: 0x000A6CE0 - 0x000A70D1 (1009 bytes, 311 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6CE0(void)
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

loc_000A6CE0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A6CEBu); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A6CEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A70CC; /* je: equal / zero */

loc_000A6CF3: ;
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_000A6F97; /* jne: not equal / not zero */

loc_000A6D0B: ;
    _fa = (uint32_t)(MEM8(esi + 0xDE)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xDE), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A6D74; /* je: equal / zero */

loc_000A6D13: ;
    PUSH32(esp, 0x000A6D18u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6D18: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A6D2Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6D2F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A6F54; /* je: equal / zero */

loc_000A6D37: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xA8);
    MEM8(edx + esi + 0x188) = LO8(ebx);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA8);
    MEM8(eax + esi + 0x189) = 0;
    PUSH32(esp, 0x000A6D65u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6D65: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A6D6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6D6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A6F54; /* je: equal / zero */

loc_000A6D74: ;
    PUSH32(esp, 0x000A6D79u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6D79: ;
    edx = MEM32(eax);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A6D8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6D8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A6DA7; /* jne: not equal / not zero */

loc_000A6D90: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A6D9Fu); RECOMP_ABI_CALL(0x000A59A0u, sub_000A59A0); /* call 0x000A59A0 */

loc_000A6D9F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_000A6DA7: ;
    _fa = (uint32_t)(MEM8(esi + 0xDE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xDE), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A6E06; /* jne: not equal / not zero */

loc_000A6DB0: ;
    PUSH32(esp, 0x000A6DB5u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6DB5: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FC00);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x000A6DC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6DC9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A6E06; /* jne: not equal / not zero */

loc_000A6DCD: ;
    PUSH32(esp, 0x000A6DD2u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6DD2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FC00);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A6DDEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6DDE: ;
    edi = eax;
    PUSH32(esp, 0x000A6DE5u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6DE5: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A6DF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6DF7: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A6E01u); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A6E01: ;
    goto loc_000A6F54;

loc_000A6E06: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x2FC78);
    PUSH32(esp, 0x000A6E12u); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_000A6E12: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A6E2F; /* je: equal / zero */

loc_000A6E19: ;
    MEM8(eax + 0x2FC04) = 0;
    MEM8(eax + 0x2FC44) = 0;
    MEM32(eax + 0x2FC00) = eax;
    goto loc_000A6E31;

loc_000A6E2F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_000A6E31: ;
    MEM32(esi + 0xE0) = eax;
    PUSH32(esp, 0x000A6E3Cu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A6E3C: ;
    ecx = MEM32(esi + 0xE0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x194); PUSH32(esp, 0x000A6E4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6E4D: ;
    PUSH32(esp, 0x000A6E52u); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_000A6E52: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000A6E59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6E59: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A6E62u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6E62: ;
    ecx = MEM32(esi + 0xE0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x2FC04)) >> 32) & 1);
    ecx = ecx + 0x2FC04;
    PUSH32(esp, 0x2FC00);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x000A6E8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6E8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A6F16; /* je: equal / zero */

loc_000A6E94: ;
    PUSH32(esp, 0x000A6E99u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6E99: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    edx = MEM32(eax);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xA8);
    PUSH32(esp, 1);
    edi = edi + esi + 0xE4;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000A6EC2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6EC2: ;
    SET_LO8(ebx, LO8(eax));
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A6F16; /* jne: not equal / not zero */

loc_000A6ECC: ;
    PUSH32(esp, 0x000A6ED1u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A6ED1: ;
    edi = eax;
    PUSH32(esp, 0x000A6ED8u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A6ED8: ;
    ebx = eax;
    PUSH32(esp, 0x000A6EDFu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6EDF: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = MEM32(ebp);
    ecx = edi;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A6EEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6EEF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A6EF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6EF7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x000A6F09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6F09: ;
    SET_LO8(ebx, LO8(eax));
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ebp = 4;

loc_000A6F16: ;
    PUSH32(esp, 0x000A6F1Bu); RECOMP_ABI_CALL(0x0011C0C0u, sub_0011C0C0); /* call 0x0011C0C0 */

loc_000A6F1B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000A6F22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6F22: ;
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C837C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c837c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000A6F16; /* jnp: not parity */

loc_000A6F33: ;
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6F3Fu); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_000A6F3F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 0xE0) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000A708E; /* je: equal / zero */

loc_000A6F54: ;
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A7064; /* jne: not equal / not zero */

loc_000A6F60: ;
    _fa = (uint32_t)(MEM8(esi + 0xDE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xDE), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A703A; /* jne: not equal / not zero */

loc_000A6F6D: ;
    PUSH32(esp, 0x000A6F72u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6F72: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A6F85u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6F85: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A6F8Fu); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A6F8F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_000A6F97: ;
    PUSH32(esp, 0x000A6F9Cu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6F9C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000A6FB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A6FB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A6F54; /* je: equal / zero */

loc_000A6FB7: ;
    PUSH32(esp, 0x2D);
    PUSH32(esp, 0x2FC78);
    PUSH32(esp, 0x000A6FC3u); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_000A6FC3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A6FE0; /* je: equal / zero */

loc_000A6FCA: ;
    MEM8(eax + 0x2FC04) = 0;
    MEM8(eax + 0x2FC44) = 0;
    MEM32(eax + 0x2FC00) = eax;
    goto loc_000A6FE2;

loc_000A6FE0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_000A6FE2: ;
    MEM32(esi + 0xE0) = eax;
    MEM32(esp + 0x14) = 0x2FC00;
    PUSH32(esp, 0x000A6FF5u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A6FF5: ;
    ecx = MEM32(esi + 0xE0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000A7018u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7018: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000A708E; /* jne: not equal / not zero */

loc_000A701C: ;
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A7028u); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_000A7028: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM32(esi + 0xE0) = 0;
    goto loc_000A6F54;

loc_000A703A: ;
    PUSH32(esp, 0x000A703Fu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A703F: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x15);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A7052u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7052: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A705Cu); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A705C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_000A7064: ;
    PUSH32(esp, 0x000A7069u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7069: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 9);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A707Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A707C: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A7086u); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A7086: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_000A708E: ;
    _fa = (uint32_t)(MEM32(esi + 0xD8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD8), 0x13 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A70C9; /* je: equal / zero */

loc_000A7097: ;
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A70BF; /* jne: not equal / not zero */

loc_000A709F: ;
    SET_LO8(edx, MEM8(esi + 0xDE));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xF)) >> 32) & 1);
    edx = edx + 0xF;
    MEM32(esi + 0xD8) = edx;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_000A70BF: ;
    MEM32(esi + 0xD8) = 0xF;

loc_000A70C9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000A70CC: ;
    POP32(esp, esi);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A70E0
 * Original: 0x000A70E0 - 0x000A7238 (344 bytes, 120 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A70E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A70E0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x44) = eax;
    esi = ecx;
    PUSH32(esp, 0x000A70F4u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A70F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A722A; /* je: equal / zero */

loc_000A70FC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000A7109u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7109: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7112u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7112: ;
    PUSH32(esp, 0x000A7117u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7117: ;
    edi = eax;
    PUSH32(esp, 0x000A711Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A711E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(edi);
    PUSH32(esp, 0x1B);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A7133u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7133: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A713Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A713B: ;
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2E04);
    ecx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A7153u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A7153: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x000A715Bu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A715B: ;
    edi = eax;
    PUSH32(esp, 0x000A7162u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7162: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7EB);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A717Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A717D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000A7183u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7183: ;
    PUSH32(esp, 0x000A7188u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7188: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A7194u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7194: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D2EE4);
    eax = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A71ADu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A71AD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x000A71B5u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A71B5: ;
    edi = eax;
    PUSH32(esp, 0x000A71BCu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A71BC: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ebx = eax;
    ebp = MEM32(ebx);
    PUSH32(esp, 0x7EA);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A71D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A71D7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000A71DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A71DD: ;
    PUSH32(esp, 0x000A71E2u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A71E2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A71EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A71EB: ;
    PUSH32(esp, 0x000A71F0u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A71F0: ;
    edi = eax;
    PUSH32(esp, 0x000A71F7u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A71F7: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A7205u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7205: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A7211u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7211: ;
    PUSH32(esp, 0x000A7216u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7216: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A721Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A721D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0xD8) = 1;
    POP32(esp, ebx);

loc_000A722A: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, esi);
    PUSH32(esp, 0x000A7234u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A7234: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7240
 * Original: 0x000A7240 - 0x000A73CF (399 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7240: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x68));
    esp = esp - 0x68;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x68) = eax;
    ebx = ecx;
    PUSH32(esp, 0x000A7254u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A7254: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A73C1; /* je: equal / zero */

loc_000A725C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000A7266u); RECOMP_ABI_CALL(0x000A5CB0u, sub_000A5CB0); /* call 0x000A5CB0 */

loc_000A7266: ;
    esi = eax;
    PUSH32(esp, 0x000A726Du); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A726D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A7274u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7274: ;
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000A7280u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7280: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7289u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7289: ;
    _fa = (uint32_t)(MEM8(ebx + 0xDE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xDE), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A72AB; /* je: equal / zero */

loc_000A7292: ;
    PUSH32(esp, 0x000A7297u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7297: ;
    edi = eax;
    PUSH32(esp, 0x000A729Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A729E: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xDC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    goto loc_000A72C2;

loc_000A72AB: ;
    PUSH32(esp, 0x000A72B0u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A72B0: ;
    edi = eax;
    PUSH32(esp, 0x000A72B7u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A72B7: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xDC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x32);

loc_000A72C2: ;
    ebp = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A72CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A72CB: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A72D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A72D4: ;
    PUSH32(esp, 0x3D2F1C);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A72E5u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A72E5: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A72EDu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A72ED: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A72F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A72F9: ;
    PUSH32(esp, 0x3D2E30);
    edx = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A730Au); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A730A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A7312u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7312: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A731Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A731E: ;
    PUSH32(esp, 0x000A7323u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A7323: ;
    esi = eax;
    PUSH32(esp, 0x000A732Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A732A: ;
    edx = MEM32(esi);
    edi = eax;
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCF3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A733Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A733A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A7342u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7342: ;
    PUSH32(esp, 0x000A7347u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A7347: ;
    esi = eax;
    PUSH32(esp, 0x000A734Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A734E: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A735Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A735E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A7366u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7366: ;
    PUSH32(esp, 0x000A736Bu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A736B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A7374u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7374: ;
    PUSH32(esp, 0x000A7379u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7379: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A7382u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7382: ;
    PUSH32(esp, 0x000A7387u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A7387: ;
    esi = eax;
    PUSH32(esp, 0x000A738Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A738E: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A739Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A739C: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A73A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A73A8: ;
    PUSH32(esp, 0x000A73ADu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A73AD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A73B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A73B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebp);

loc_000A73C1: ;
    ecx = MEM32(esp + 0x68);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A73CBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A73CB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x68)) >> 32) & 1);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_000A726F
 * Original: 0x000A726F - 0x000A73CF (352 bytes, 121 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A726F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A726F: ;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A7274u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7274: ;
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000A7280u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7280: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7289u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7289: ;
    _fa = (uint32_t)(MEM8(ebx + 0xDE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0xDE), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A72AB; /* je: equal / zero */

loc_000A7292: ;
    PUSH32(esp, 0x000A7297u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7297: ;
    edi = eax;
    PUSH32(esp, 0x000A729Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A729E: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xDC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    goto loc_000A72C2;

loc_000A72AB: ;
    PUSH32(esp, 0x000A72B0u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A72B0: ;
    edi = eax;
    PUSH32(esp, 0x000A72B7u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A72B7: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xDC);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x32);

loc_000A72C2: ;
    ebp = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A72CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A72CB: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A72D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A72D4: ;
    PUSH32(esp, 0x3D2F1C);
    eax = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A72E5u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A72E5: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A72EDu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A72ED: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A72F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A72F9: ;
    PUSH32(esp, 0x3D2E30);
    edx = esp + 0x14;
    PUSH32(esp, 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A730Au); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A730A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A7312u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7312: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A731Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A731E: ;
    PUSH32(esp, 0x000A7323u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A7323: ;
    esi = eax;
    PUSH32(esp, 0x000A732Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A732A: ;
    edx = MEM32(esi);
    edi = eax;
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCF3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A733Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A733A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A7342u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7342: ;
    PUSH32(esp, 0x000A7347u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A7347: ;
    esi = eax;
    PUSH32(esp, 0x000A734Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A734E: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A735Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A735E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A7366u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7366: ;
    PUSH32(esp, 0x000A736Bu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A736B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A7374u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7374: ;
    PUSH32(esp, 0x000A7379u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7379: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A7382u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7382: ;
    PUSH32(esp, 0x000A7387u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A7387: ;
    esi = eax;
    PUSH32(esp, 0x000A738Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A738E: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A739Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A739C: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A73A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A73A8: ;
    PUSH32(esp, 0x000A73ADu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A73AD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A73B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A73B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x68);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A73CBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A73CB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x68)) >> 32) & 1);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7325
 * Original: 0x000A7325 - 0x000A73CF (170 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7325(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7325: ;
    PUSH32(esp, 0x000A732Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A732A: ;
    edx = MEM32(esi);
    edi = eax;
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xCF3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A733Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A733A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A7342u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7342: ;
    PUSH32(esp, 0x000A7347u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A7347: ;
    esi = eax;
    PUSH32(esp, 0x000A734Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A734E: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A735Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A735E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A7366u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7366: ;
    PUSH32(esp, 0x000A736Bu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A736B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A7374u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7374: ;
    PUSH32(esp, 0x000A7379u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7379: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A7382u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7382: ;
    PUSH32(esp, 0x000A7387u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A7387: ;
    esi = eax;
    PUSH32(esp, 0x000A738Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A738E: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A739Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A739C: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A73A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A73A8: ;
    PUSH32(esp, 0x000A73ADu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A73AD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A73B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A73B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x68);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A73CBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A73CB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x68)) >> 32) & 1);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7374
 * Original: 0x000A7374 - 0x000A73CF (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7374(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7374: ;
    PUSH32(esp, 0x000A7379u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7379: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A7382u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7382: ;
    PUSH32(esp, 0x000A7387u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A7387: ;
    esi = eax;
    PUSH32(esp, 0x000A738Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A738E: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A739Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A739C: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A73A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A73A8: ;
    PUSH32(esp, 0x000A73ADu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A73AD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A73B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A73B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x68);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A73CBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A73CB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x68)) >> 32) & 1);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_000A73D0
 * Original: 0x000A73D0 - 0x000A7535 (357 bytes, 125 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A73D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A73D0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x44) = eax;
    ebx = ecx;
    PUSH32(esp, 0x000A73E4u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A73E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A7527; /* je: equal / zero */

loc_000A73EC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000A73F9u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A73F9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7402u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7402: ;
    PUSH32(esp, 0x000A7407u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7407: ;
    esi = eax;
    PUSH32(esp, 0x000A740Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A740E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A741Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A741D: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A7425u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7425: ;
    PUSH32(esp, 0x000A742Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A742A: ;
    esi = eax;
    PUSH32(esp, 0x000A7431u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7431: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    PUSH32(esp, 0x3D2E30);
    PUSH32(esp, 0x7EB);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A744Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A744C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000A7452u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7452: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xDD);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D2E98);
    edx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A746Bu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A746B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x000A7473u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A7473: ;
    esi = eax;
    PUSH32(esp, 0x000A747Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A747A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edi = eax;
    ebp = MEM32(edi);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7EA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A7495u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7495: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000A749Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A749B: ;
    PUSH32(esp, 0x000A74A0u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A74A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A74A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A74A7: ;
    PUSH32(esp, 0x3D2E30);
    eax = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A74B8u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A74B8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A74C0u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A74C0: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A74CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A74CC: ;
    PUSH32(esp, 0x000A74D1u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A74D1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A74DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A74DA: ;
    PUSH32(esp, 0x000A74DFu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A74DF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A74E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A74E8: ;
    PUSH32(esp, 0x000A74EDu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A74ED: ;
    esi = eax;
    PUSH32(esp, 0x000A74F4u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A74F4: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A7502u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7502: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A750Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A750E: ;
    PUSH32(esp, 0x000A7513u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7513: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A751Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A751A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebp);

loc_000A7527: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A7531u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A7531: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7475
 * Original: 0x000A7475 - 0x000A7535 (192 bytes, 68 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7475(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7475: ;
    PUSH32(esp, 0x000A747Au); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A747A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    edi = eax;
    ebp = MEM32(edi);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7EA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A7495u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7495: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000A749Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A749B: ;
    PUSH32(esp, 0x000A74A0u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A74A0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A74A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A74A7: ;
    PUSH32(esp, 0x3D2E30);
    eax = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A74B8u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A74B8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    PUSH32(esp, 0x000A74C0u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A74C0: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A74CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A74CC: ;
    PUSH32(esp, 0x000A74D1u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A74D1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A74DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A74DA: ;
    PUSH32(esp, 0x000A74DFu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A74DF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A74E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A74E8: ;
    PUSH32(esp, 0x000A74EDu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A74ED: ;
    esi = eax;
    PUSH32(esp, 0x000A74F4u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A74F4: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A7502u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7502: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A750Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A750E: ;
    PUSH32(esp, 0x000A7513u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7513: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A751Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A751A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x44);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A7531u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A7531: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7540
 * Original: 0x000A7540 - 0x000A7698 (344 bytes, 120 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7540(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7540: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x44) = eax;
    esi = ecx;
    PUSH32(esp, 0x000A7554u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A7554: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A768A; /* je: equal / zero */

loc_000A755C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000A7569u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7569: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7572u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7572: ;
    PUSH32(esp, 0x000A7577u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7577: ;
    edi = eax;
    PUSH32(esp, 0x000A757Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A757E: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ebx = eax;
    eax = MEM32(edi);
    PUSH32(esp, 0x19);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A7593u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7593: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A759Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A759B: ;
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2E04);
    ecx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A75B3u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A75B3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x000A75BBu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A75BB: ;
    edi = eax;
    PUSH32(esp, 0x000A75C2u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A75C2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7EB);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A75DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A75DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000A75E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A75E3: ;
    PUSH32(esp, 0x000A75E8u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A75E8: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A75F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A75F4: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D2ECC);
    eax = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A760Du); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A760D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    PUSH32(esp, 0x000A7615u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A7615: ;
    edi = eax;
    PUSH32(esp, 0x000A761Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A761C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ebx = eax;
    ebp = MEM32(ebx);
    PUSH32(esp, 0x7EA);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A7637u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7637: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000A763Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A763D: ;
    PUSH32(esp, 0x000A7642u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7642: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A764Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A764B: ;
    PUSH32(esp, 0x000A7650u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A7650: ;
    edi = eax;
    PUSH32(esp, 0x000A7657u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7657: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A7665u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7665: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A7671u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7671: ;
    PUSH32(esp, 0x000A7676u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7676: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A767Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A767D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0xD8) = 0x15;
    POP32(esp, ebx);

loc_000A768A: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, esi);
    PUSH32(esp, 0x000A7694u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A7694: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A76A0
 * Original: 0x000A76A0 - 0x000A772C (140 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A76A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A76A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A76A8u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A76A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A76EE; /* je: equal / zero */

loc_000A76AC: ;
    PUSH32(esp, 0x000A76B1u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A76B1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A76C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A76C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A76F0; /* jne: not equal / not zero */

loc_000A76CC: ;
    PUSH32(esp, 0x000A76D1u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A76D1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x13);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A76E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A76E4: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A76EEu); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A76EE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A76F0: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xA8);
    MEM8(edx + esi + 0x188) = 1;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xDD);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA8);
    MEM8(eax + esi + 0x189) = 0;
    MEM32(esi + 0xD8) = 0x18;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A55A0(); return; /* tail jmp 0x000A55A0 */

}

/**
 * sub_000A7730
 * Original: 0x000A7730 - 0x000A7804 (212 bytes, 76 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7730: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, edi);
    ebx = ecx;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000A774Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A774C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7755u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7755: ;
    PUSH32(esp, 0x000A775Au); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A775A: ;
    esi = eax;
    PUSH32(esp, 0x000A7761u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7761: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x21);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A7770u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7770: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A7778u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7778: ;
    PUSH32(esp, 0x3D2F30);
    eax = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A7789u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A7789: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x000A7791u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7791: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A779Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A779D: ;
    PUSH32(esp, 0x000A77A2u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A77A2: ;
    esi = eax;
    PUSH32(esp, 0x000A77A9u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A77A9: ;
    edx = MEM32(esi);
    edi = eax;
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A77B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A77B9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A77C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A77C1: ;
    PUSH32(esp, 0x000A77C6u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A77C6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A77CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A77CF: ;
    PUSH32(esp, 0x000A77D4u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A77D4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A77DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A77DB: ;
    PUSH32(esp, 0x000A77E0u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A77E0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A77E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A77E9: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebx);
    PUSH32(esp, 0x000A7800u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A7800: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7810
 * Original: 0x000A7810 - 0x000A7934 (292 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7810: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0x000A7818u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A7818: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A7932; /* je: equal / zero */

loc_000A7820: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A7828u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7828: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7831u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7831: ;
    PUSH32(esp, 0x000A7836u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7836: ;
    esi = eax;
    PUSH32(esp, 0x000A783Du); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A783D: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x2B);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A7852u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7852: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A785Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A785A: ;
    PUSH32(esp, 0x000A785Fu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A785F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3D2E30);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A786Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A786B: ;
    PUSH32(esp, 0x000A7870u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7870: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3D2F48);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000A787Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A787C: ;
    PUSH32(esp, 0x000A7881u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A7881: ;
    esi = eax;
    PUSH32(esp, 0x000A7888u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7888: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A7898u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7898: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A78A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78A0: ;
    PUSH32(esp, 0x000A78A5u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A78A5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A78B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78B3: ;
    PUSH32(esp, 0x000A78B8u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A78B8: ;
    esi = eax;
    PUSH32(esp, 0x000A78BFu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A78BF: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A78CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A78D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78D7: ;
    PUSH32(esp, 0x000A78DCu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A78DC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A78E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78E5: ;
    PUSH32(esp, 0x000A78EAu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A78EA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A78F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78F3: ;
    PUSH32(esp, 0x000A78F8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A78F8: ;
    esi = eax;
    PUSH32(esp, 0x000A78FFu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A78FF: ;
    edi = eax;
    ebp = MEM32(edi);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A790Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A790D: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A7919u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7919: ;
    PUSH32(esp, 0x000A791Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A791E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A7925u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7925: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 0x1A;
    POP32(esp, ebp);

loc_000A7932: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7838
 * Original: 0x000A7838 - 0x000A7934 (252 bytes, 89 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7838(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7838: ;
    PUSH32(esp, 0x000A783Du); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A783D: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x2B);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A7852u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7852: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A785Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A785A: ;
    PUSH32(esp, 0x000A785Fu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A785F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3D2E30);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A786Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A786B: ;
    PUSH32(esp, 0x000A7870u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7870: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3D2F48);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000A787Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A787C: ;
    PUSH32(esp, 0x000A7881u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A7881: ;
    esi = eax;
    PUSH32(esp, 0x000A7888u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7888: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A7898u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7898: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A78A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78A0: ;
    PUSH32(esp, 0x000A78A5u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A78A5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A78B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78B3: ;
    PUSH32(esp, 0x000A78B8u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A78B8: ;
    esi = eax;
    PUSH32(esp, 0x000A78BFu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A78BF: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A78CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78CF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A78D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78D7: ;
    PUSH32(esp, 0x000A78DCu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A78DC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A78E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78E5: ;
    PUSH32(esp, 0x000A78EAu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A78EA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A78F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A78F3: ;
    PUSH32(esp, 0x000A78F8u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A78F8: ;
    esi = eax;
    PUSH32(esp, 0x000A78FFu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A78FF: ;
    edi = eax;
    ebp = MEM32(edi);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A790Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A790D: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A7919u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7919: ;
    PUSH32(esp, 0x000A791Eu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A791E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A7925u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7925: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 0x1A;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7940
 * Original: 0x000A7940 - 0x000A7A62 (290 bytes, 106 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7940(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7940: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, 0x000A7948u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A7948: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A7A60; /* je: equal / zero */

loc_000A7950: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A7958u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7958: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7961u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7961: ;
    PUSH32(esp, 0x000A7966u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7966: ;
    esi = eax;
    PUSH32(esp, 0x000A796Du); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A796D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x2C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A797Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A797C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A7984u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7984: ;
    PUSH32(esp, 0x000A7989u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A7989: ;
    esi = eax;
    PUSH32(esp, 0x000A7990u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7990: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    PUSH32(esp, 0x3D2F60);
    PUSH32(esp, 0x7EB);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A79ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A79AB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000A79B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A79B1: ;
    PUSH32(esp, 0x000A79B6u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A79B6: ;
    esi = eax;
    PUSH32(esp, 0x000A79BDu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A79BD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D2F48);
    edi = eax;
    ebp = MEM32(edi);
    PUSH32(esp, 0x7EA);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A79D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A79D8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x18); PUSH32(esp, 0x000A79DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A79DE: ;
    PUSH32(esp, 0x000A79E3u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A79E3: ;
    esi = eax;
    PUSH32(esp, 0x000A79EAu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A79EA: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7D7);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000A79FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A79FA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A7A02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7A02: ;
    PUSH32(esp, 0x000A7A07u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7A07: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3D2F60);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A7A13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7A13: ;
    PUSH32(esp, 0x000A7A18u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7A18: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A7A21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7A21: ;
    PUSH32(esp, 0x000A7A26u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000A7A26: ;
    esi = eax;
    PUSH32(esp, 0x000A7A2Du); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7A2D: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x124); PUSH32(esp, 0x000A7A3Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7A3B: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x28); PUSH32(esp, 0x000A7A47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7A47: ;
    PUSH32(esp, 0x000A7A4Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7A4C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A7A53u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7A53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xD8) = 1;
    POP32(esp, ebp);

loc_000A7A60: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7A70
 * Original: 0x000A7A70 - 0x000A7B4F (223 bytes, 86 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7A70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7A70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, 0x000A7A79u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A7A79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A7B4C; /* je: equal / zero */

loc_000A7A81: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0x000A7A89u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7A89: ;
    edx = MEM32(eax);
    ecx = esp + 0xB;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000A7A9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7A9D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A7AB4; /* jne: not equal / not zero */

loc_000A7AA1: ;
    edx = (uint32_t)(int32_t)SMEM8(ebp + 0xDC);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x000A7AB0u); RECOMP_ABI_CALL(0x000A59A0u, sub_000A59A0); /* call 0x000A59A0 */

loc_000A7AB0: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A7AB4: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A7AD6; /* je: equal / zero */

loc_000A7ABC: ;
    PUSH32(esp, 0x000A7AC1u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7AC1: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000A7AD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7AD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A7AD6; /* jne: not equal / not zero */

loc_000A7AD4: ;
    SET_LO8(ebx, 1);

loc_000A7AD6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ebp + 0x189;

loc_000A7AE0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7B09; /* je: equal / zero */

loc_000A7AE5: ;
    PUSH32(esp, 0x000A7AEAu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7AEA: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000A7AFAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7AFA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A7B07; /* je: equal / zero */

loc_000A7AFE: ;
    MEM8(esi + -1) = 1;
    MEM8(esi) = 0;
    goto loc_000A7B09;

loc_000A7B07: ;
    SET_LO8(ebx, 1);

loc_000A7B09: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0xA8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A7AE0; /* jl: less (signed <) */

loc_000A7B15: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000A7B41; /* je: equal / zero */

loc_000A7B1B: ;
    PUSH32(esp, 0x000A7B20u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7B20: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x13);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A7B33u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7B33: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000A7B3Du); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A7B3D: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A7B41: ;
    MEM32(ebp + 0xD8) = 0x1E;
    POP32(esp, ebx);

loc_000A7B4C: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7B50
 * Original: 0x000A7B50 - 0x000A7C1D (205 bytes, 73 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7B50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7B50: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, edi);
    esi = ecx;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000A7B6Cu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7B6C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7B75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7B75: ;
    PUSH32(esp, 0x000A7B7Au); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7B7A: ;
    edi = eax;
    PUSH32(esp, 0x000A7B81u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7B81: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = eax;
    eax = MEM32(edi);
    PUSH32(esp, 0x21);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x000A7B90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7B90: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A7B98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7B98: ;
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D2E04);
    ecx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A7BB0u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000A7BB0: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x000A7BB8u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7BB8: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000A7BC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7BC4: ;
    PUSH32(esp, 0x000A7BC9u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_000A7BC9: ;
    edi = eax;
    PUSH32(esp, 0x000A7BD0u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7BD0: ;
    edx = MEM32(edi);
    ebx = eax;
    ebp = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x802);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A7BE0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7BE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x3C); PUSH32(esp, 0x000A7BE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7BE8: ;
    PUSH32(esp, 0x000A7BEDu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7BED: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A7BF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7BF6: ;
    PUSH32(esp, 0x000A7BFBu); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_000A7BFB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A7C02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7C02: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, edi);
    MEM32(esi + 0xD8) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A7C19u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A7C19: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000A7C20
 * Original: 0x000A7C20 - 0x000A7D2E (270 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7C20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7C20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0xDC) = 0;
    PUSH32(esp, 0x000A7C30u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7C30: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000A7C37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7C37: ;
    MEM8(esi + 0x775) = LO8(eax);
    PUSH32(esp, 0x000A7C42u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7C42: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7C49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7C49: ;
    PUSH32(esp, 0x000A7C4Eu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7C4E: ;
    edx = MEM32(eax);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A7C61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7C61: ;
    SET_LO8(eax, MEM8(esi + 0xDE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000A7D0F; /* je: equal / zero */

loc_000A7C6F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xFD);
    PUSH32(esp, edi);
    MEM8(esi + 0xDE) = LO8(eax);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000A7C87u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A7C87: ;
    edi = eax;
    PUSH32(esp, 0x000A7C8Eu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7C8E: ;
    edx = esp + 0x10;
    ebp = eax;
    eax = MEM32(edi);
    ebx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x2FC00);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A7CA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7CA4: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(ebx + 0x30); PUSH32(esp, 0x000A7CB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7CB2: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000A7CB9u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7CB9: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000A7CC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7CC8: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000A7CF1; /* jne: not equal / not zero */

loc_000A7CCF: ;
    SET_LO8(eax, MEM8(esi + 0xDE));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 2);
    ecx = esi;
    MEM8(esi + 0xDE) = LO8(eax);
    MEM32(esi + 0xD8) = 2;
    PUSH32(esp, 0x000A7CEEu); RECOMP_ABI_CALL(0x000A7240u, sub_000A7240); /* call 0x000A7240 */

loc_000A7CEE: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A7CF1: ;
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A7D0F; /* jne: not equal / not zero */

loc_000A7CFA: ;
    SET_LO8(eax, MEM8(esi + 0xDE));
    edx = MEM32(esi);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 2);
    ecx = esi;
    MEM8(esi + 0xDE) = LO8(eax);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000A7D0Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7D0F: ;
    PUSH32(esp, 0x000A7D14u); RECOMP_ABI_CALL(0x00011320u, sub_00011320); /* call 0x00011320 */

loc_000A7D14: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A7D1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7D1B: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(7)) >> 32) & 1);
    eax = eax + 7;
    MEM32(esi + 0xD8) = eax;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7D30
 * Original: 0x000A7D30 - 0x000A7DDB (171 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7D30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x774)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x774), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A7DCE; /* je: equal / zero */

loc_000A7D41: ;
    PUSH32(esp, 0x000A7D46u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7D46: ;
    edx = MEM32(eax);
    ecx = esp + 7;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000A7D5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7D5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A7DBC; /* je: equal / zero */

loc_000A7D5E: ;
    PUSH32(esp, 0x000A7D63u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7D63: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    ecx = esi + 0xE4;
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000A7D7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7D7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A7DBC; /* je: equal / zero */

loc_000A7D81: ;
    SET_LO8(edx, MEM8(esi + 0x774));
    eax = MEM32(esi + 0xD4);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM8(esi + 0x774) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_000A7DA0; /* je: equal / zero */

loc_000A7D9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7DCE; /* jne: not equal / not zero */

loc_000A7DA0: ;
    SET_LO8(eax, MEM8(esp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A7DCE; /* je: equal / zero */

loc_000A7DA8: ;
    ecx = esi;
    MEM32(esi + 0xD8) = 0xD;
    PUSH32(esp, 0x000A7DB9u); RECOMP_ABI_CALL(0x000A60C0u, sub_000A60C0); /* call 0x000A60C0 */

loc_000A7DB9: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A7DBC: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A7DCBu); RECOMP_ABI_CALL(0x000A59A0u, sub_000A59A0); /* call 0x000A59A0 */

loc_000A7DCB: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A7DCE: ;
    MEM32(esi + 0xD8) = 7;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7DE0
 * Original: 0x000A7DE0 - 0x000A7F8B (427 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7DE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7DE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000A7DF4u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A7DF4: ;
    edi = eax;
    PUSH32(esp, 0x000A7DFBu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7DFB: ;
    edx = MEM32(edi);
    ebx = eax;
    ebp = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2FC00);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7E10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7E10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x30); PUSH32(esp, 0x000A7E1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7E1E: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x000A7E25u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7E25: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000A7E34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7E34: ;
    ecx = MEM32(esi + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7F7E; /* je: equal / zero */

loc_000A7E43: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7EDD; /* jne: not equal / not zero */

loc_000A7E4C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A7F7E; /* jne: not equal / not zero */

loc_000A7E54: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A7ED0; /* jne: not equal / not zero */

loc_000A7E58: ;
    _fa = (uint32_t)(MEM8(esi + 0xDE)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xDE), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A7ED0; /* je: equal / zero */

loc_000A7E61: ;
    PUSH32(esp, 0x000A7E66u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000A7E66: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x000A7E70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7E70: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A7EB9; /* je: equal / zero */

loc_000A7E74: ;
    PUSH32(esp, 0x000A7E79u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A7E79: ;
    edi = eax;
    PUSH32(esp, 0x000A7E80u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7E80: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A7E8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7E8B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x34); PUSH32(esp, 0x000A7E91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7E91: ;
    PUSH32(esp, 0x000A7E96u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7E96: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FC00);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A7EA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7EA2: ;
    ecx = esi;
    MEM32(esi + 0xD8) = 2;
    PUSH32(esp, 0x000A7EB3u); RECOMP_ABI_CALL(0x000A7240u, sub_000A7240); /* call 0x000A7240 */

loc_000A7EB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A7EB9: ;
    ecx = esi;
    MEM32(esi + 0xD8) = 0xC;
    PUSH32(esp, 0x000A7ECAu); RECOMP_ABI_CALL(0x000A6340u, sub_000A6340); /* call 0x000A6340 */

loc_000A7ECA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A7ED0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x000A7ED7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7ED7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A7EDD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A7F7E; /* jne: not equal / not zero */

loc_000A7EE5: ;
    PUSH32(esp, 0x000A7EEAu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A7EEA: ;
    edi = eax;
    PUSH32(esp, 0x000A7EF1u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7EF1: ;
    edx = MEM32(edi);
    ebx = eax;
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A7EFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7EFC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x34); PUSH32(esp, 0x000A7F02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7F02: ;
    edi = eax;
    PUSH32(esp, 0x000A7F09u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7F09: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2FC00);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000A7F15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7F15: ;
    edi = edi + eax;
    PUSH32(esp, 0x000A7F1Cu); RECOMP_ABI_CALL(0x00011320u, sub_00011320); /* call 0x00011320 */

loc_000A7F1C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A7F23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7F23: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A7ED0; /* je: equal / zero */

loc_000A7F27: ;
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7F57; /* jne: not equal / not zero */

loc_000A7F30: ;
    PUSH32(esp, 0x000A7F35u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7F35: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x33);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A7F47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7F47: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A7F51u); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A7F51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A7F57: ;
    PUSH32(esp, 0x000A7F5Cu); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7F5C: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A7F6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7F6E: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A7F78u); RECOMP_ABI_CALL(0x000A56F0u, sub_000A56F0); /* call 0x000A56F0 */

loc_000A7F78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A7F7E: ;
    ecx = esi;
    PUSH32(esp, 0x000A7F85u); RECOMP_ABI_CALL(0x000A54B0u, sub_000A54B0); /* call 0x000A54B0 */

loc_000A7F85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7F90
 * Original: 0x000A7F90 - 0x000A803B (171 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7F90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7F90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A7F98u); RECOMP_ABI_CALL(0x000A55A0u, sub_000A55A0); /* call 0x000A55A0 */

loc_000A7F98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A8039; /* je: equal / zero */

loc_000A7FA0: ;
    eax = MEM32(esi + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A7FD8; /* jne: not equal / not zero */

loc_000A7FAB: ;
    PUSH32(esp, 0x000A7FB0u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7FB0: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000A7FBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7FBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_000A7FCB; /* jne: not equal / not zero */

loc_000A7FC5: ;
    edx = MEM32(esi);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x38)); return; /* indirect tail jmp */

loc_000A7FCB: ;
    PUSH32(esp, 0x000A7FD0u); RECOMP_ABI_CALL(0x000A80C0u, sub_000A80C0); /* call 0x000A80C0 */

loc_000A7FD0: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x38)); return; /* indirect tail jmp */

loc_000A7FD8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7FE2; /* je: equal / zero */

loc_000A7FDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8002; /* jne: not equal / not zero */

loc_000A7FE2: ;
    PUSH32(esp, 0x000A7FE7u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A7FE7: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000A7FF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A7FF6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A8002; /* jne: not equal / not zero */

loc_000A7FFA: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x38)); return; /* indirect tail jmp */

loc_000A8002: ;
    eax = MEM32(esi + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000A801C; /* jne: not equal / not zero */

loc_000A800F: ;
    PUSH32(esp, 0x000A8014u); RECOMP_ABI_CALL(0x000A8040u, sub_000A8040); /* call 0x000A8040 */

loc_000A8014: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x38)); return; /* indirect tail jmp */

loc_000A801C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8028; /* jne: not equal / not zero */

loc_000A8021: ;
    PUSH32(esp, 0x000A8026u); RECOMP_ABI_CALL(0x000A8150u, sub_000A8150); /* call 0x000A8150 */

loc_000A8026: ;
    goto loc_000A802D;

loc_000A8028: ;
    PUSH32(esp, 0x000A802Du); RECOMP_ABI_CALL(0x000A5BD0u, sub_000A5BD0); /* call 0x000A5BD0 */

loc_000A802D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A8039; /* je: equal / zero */

loc_000A8031: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x38)); return; /* indirect tail jmp */

loc_000A8039: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8040
 * Original: 0x000A8040 - 0x000A80B7 (119 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8040: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x000A804Cu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A804C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A8053u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8053: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000A805Cu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A805C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000A8065u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8065: ;
    PUSH32(esp, 0x000A806Au); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A806A: ;
    esi = eax;
    PUSH32(esp, 0x000A8071u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A8071: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000A807Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A807C: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x54); PUSH32(esp, 0x000A808Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A808F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000A80A7; /* jne: not equal / not zero */

loc_000A8097: ;
    PUSH32(esp, 0x000A809Cu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A809C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A80A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A80A5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A80A7: ;
    PUSH32(esp, 0x000A80ACu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A80AC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A80B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A80B5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A80C0
 * Original: 0x000A80C0 - 0x000A8145 (133 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A80C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A80C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x000A80CCu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A80CC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A80D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A80D3: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000A80DCu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A80DC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000A80E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A80E5: ;
    PUSH32(esp, 0x000A80EAu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A80EA: ;
    esi = eax;
    PUSH32(esp, 0x000A80F1u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A80F1: ;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000A80FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A80FC: ;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x54); PUSH32(esp, 0x000A810Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A810F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000A8127; /* jne: not equal / not zero */

loc_000A8117: ;
    PUSH32(esp, 0x000A811Cu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A811C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A8125u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8125: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A8127: ;
    PUSH32(esp, 0x000A812Cu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A812C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A8135u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8135: ;
    PUSH32(esp, 0x000A813Au); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A813A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A8143u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8143: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A8150
 * Original: 0x000A8150 - 0x000A81EE (158 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8150(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A8150: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000A815Cu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A815C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A8163u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8163: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000A816Cu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A816C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000A8175u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8175: ;
    PUSH32(esp, 0x000A817Au); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A817A: ;
    edi = eax;
    PUSH32(esp, 0x000A8181u); RECOMP_ABI_CALL(0x0011EC20u, sub_0011EC20); /* call 0x0011EC20 */

loc_000A8181: ;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x000A818Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A818C: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0xDC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x54); PUSH32(esp, 0x000A819Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A819F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A81CA; /* jne: not equal / not zero */

loc_000A81A3: ;
    ecx = esi;
    MEM32(esi + 0xD8) = 0xD;
    PUSH32(esp, 0x000A81B4u); RECOMP_ABI_CALL(0x000A60C0u, sub_000A60C0); /* call 0x000A60C0 */

loc_000A81B4: ;
    PUSH32(esp, 0x000A81B9u); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A81B9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A81C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A81C2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A81CA: ;
    PUSH32(esp, 0x000A81CFu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_000A81CF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000A81D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A81D8: ;
    SET_LO8(eax, MEM8(esi + 0xDE));
    SET_LO8(eax, LO8(eax) | 4);
    POP32(esp, edi);
    MEM8(esi + 0xDE) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A81F0
 * Original: 0x000A81F0 - 0x000A822A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A81F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A81F0: ;
    SET_LO8(ecx, MEM8(0x4C9A00));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A8224; /* jne: not equal / not zero */

loc_000A81FF: ;
    edx = MEM32(0x4C9A00);
    edx = edx | eax;
    ecx = 0x4C9288;
    MEM32(0x4C9A00) = edx;
    PUSH32(esp, 0x000A8217u); RECOMP_ABI_CALL(0x000A5D40u, sub_000A5D40); /* call 0x000A5D40 */

loc_000A8217: ;
    PUSH32(esp, 0x35A050);
    PUSH32(esp, 0x000A8221u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_000A8221: ;
    esp = esp + 4;

loc_000A8224: ;
    eax = 0x4C9288;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8230
 * Original: 0x000A8230 - 0x000A8276 (70 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8230(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A8230: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A8238u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A8238: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000A8242u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8242: ;
    MEMF(esi + 0x334) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi + 0x344;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A825Bu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000A825B: ;
    PUSH32(esp, 0x000A8260u); RECOMP_ABI_CALL(0x0008F170u, sub_0008F170); /* call 0x0008F170 */

loc_000A8260: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    esi = esi + 0x2FC;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000A8270u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8270: ;
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
 * sub_000A8280
 * Original: 0x000A8280 - 0x000A82B1 (49 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8280(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A8280: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A8288u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A8288: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000A8292u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8292: ;
    MEMF(esi + 0x338) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi + 0x34C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A82ABu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000A82AB: ;
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
 * sub_000A82C0
 * Original: 0x000A82C0 - 0x000A838A (202 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A82C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A82C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FD78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3D2F94;
    eax = MEM32(esi + 0x2F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD050) (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000A832B; /* je: equal / zero */

loc_000A82F9: ;
    PUSH32(esp, 0x000A82FEu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A82FE: ;
    ecx = MEM32(esi + 0x2F8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000A830Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A830C: ;
    edx = MEM32(0x3DD054);
    MEM32(esi + 0x2F8) = edx;
    PUSH32(esp, 0x000A831Du); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A831D: ;
    ecx = MEM32(esi + 0x2F0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A832Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A832B: ;
    edx = MEM32(0x3DD050);
    _fa = (uint32_t)(MEM32(esi + 0x2EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2EC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A836B; /* je: equal / zero */

loc_000A8339: ;
    PUSH32(esp, 0x000A833Eu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A833E: ;
    ecx = MEM32(esi + 0x2F4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000A834Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A834C: ;
    edx = MEM32(0x3DD054);
    MEM32(esi + 0x2F4) = edx;
    PUSH32(esp, 0x000A835Du); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A835D: ;
    ecx = MEM32(esi + 0x2EC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000A836Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A836B: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A837Au); RECOMP_ABI_CALL(0x0002E3D0u, sub_0002E3D0); /* call 0x0002E3D0 */

loc_000A837A: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000A8390
 * Original: 0x000A8390 - 0x000A8396 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8390(void)
{

loc_000A8390: ;
    eax = 0x4C9A1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000A83A0
 * Original: 0x000A83A0 - 0x000A83A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A83A0(void)
{

loc_000A83A0: ;
    eax = 0x3D2F88;
    esp += 4; return; /* ret */

}

/**
 * sub_000A83B0
 * Original: 0x000A83B0 - 0x000A83B7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A83B0(void)
{

loc_000A83B0: ;
    eax = ecx + 0x2FC;
    esp += 4; return; /* ret */

}

/**
 * sub_000A83C0
 * Original: 0x000A83C0 - 0x000A83DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A83C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A83C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A83C8u); RECOMP_ABI_CALL(0x000A82C0u, sub_000A82C0); /* call 0x000A82C0 */

loc_000A83C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A83D8; /* je: equal / zero */

loc_000A83CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A83D5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000A83D5: ;
    esp = esp + 4;

loc_000A83D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A83E0
 * Original: 0x000A83E0 - 0x000A85F4 (532 bytes, 170 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A83E0(void)
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

loc_000A83E0: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x110);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x110) = eax;
    edi = ecx;
    PUSH32(esp, 0x000A8404u); RECOMP_ABI_CALL(0x00093320u, sub_00093320); /* call 0x00093320 */

loc_000A8404: ;
    eax = MEM32(esi);
    ecx = edi + 0x2E8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D320C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000A8417u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8417: ;
    edx = MEM32(esi);
    eax = edi + 0x2D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D3200);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A842Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A842A: ;
    edx = MEM32(esi);
    eax = edi + 0x2DC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D31F8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A843Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A843D: ;
    edx = MEM32(esi);
    eax = edi + 0x2D4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D31EC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A8450u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8450: ;
    edx = MEM32(esi);
    eax = edi + 0x2D0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D31EC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A8463u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8463: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D31E0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A8471u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8471: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A848E; /* je: equal / zero */

loc_000A8477: ;
    PUSH32(esp, 0x000A847Cu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A847C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A8488u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8488: ;
    MEM32(edi + 0x2EC) = eax;

loc_000A848E: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D31D4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A849Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A849C: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A84B9; /* je: equal / zero */

loc_000A84A2: ;
    PUSH32(esp, 0x000A84A7u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A84A7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000A84B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A84B3: ;
    MEM32(edi + 0x2F0) = eax;

loc_000A84B9: ;
    eax = MEM32(esi);
    ebx = edi + 0x2E4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D31C8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000A84CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A84CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A84DA; /* je: equal / zero */

loc_000A84D0: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A84DA: ;
    edx = MEM32(esi);
    ebx = edi + 0x2C4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D31BC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A84EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A84ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A84FB; /* je: equal / zero */

loc_000A84F1: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A84FB: ;
    eax = MEM32(esi);
    ebx = edi + 0x2C8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D31B0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000A850Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A850E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A851C; /* je: equal / zero */

loc_000A8512: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A851C: ;
    edx = MEM32(esi);
    ebx = edi + 0x2CC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D31A4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000A852Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A852F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A853D; /* je: equal / zero */

loc_000A8533: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A853D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D3198);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000A854Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A854B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A8599; /* je: equal / zero */

loc_000A8551: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x000A8566u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000A8566: ;
    edx = esp + 0x18;
    PUSH32(esp, 0x3D3194);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A8575u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_000A8575: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A8599; /* je: equal / zero */

loc_000A857C: ;
    /* nop */

loc_000A8580: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A8586u); RECOMP_ABI_CALL(0x000668E0u, sub_000668E0); /* call 0x000668E0 */

loc_000A8586: ;
    PUSH32(esp, 0x3D3194);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A8592u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_000A8592: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A8580; /* jne: not equal / not zero */

loc_000A8599: ;
    eax = MEM32(edi + 0x2C);
    MEM32(edi + 0x30C) = eax;
    ecx = MEM32(edi + 0x30);
    MEM32(edi + 0x310) = ecx;
    edx = MEM32(edi + 0x34);
    MEM32(edi + 0x314) = edx;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C4); PUSH32(esp, 0x000A85BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A85BE: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C23D70A);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1C0); PUSH32(esp, 0x000A85CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A85CD: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E99999A);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1BC); PUSH32(esp, 0x000A85DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A85DC: ;
    ecx = MEM32(esp + 0x10C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A85EBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000A85EB: ;
    esp = esp + 0x104;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A8600
 * Original: 0x000A8600 - 0x000A87BF (447 bytes, 98 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A8600: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FD78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x44) = esp;
    PUSH32(esp, 0x000A8647u); RECOMP_ABI_CALL(0x00093880u, sub_00093880); /* call 0x00093880 */

loc_000A8647: ;
    MEM32(esi) = 0x3D2F94;
    MEM32(esi + 0x2CC) = 0x3EB2B8C2;
    MEM32(esi + 0x2D0) = 0x40400000;
    MEM32(esi + 0x2D4) = 0x41200000;
    MEM32(esi + 0x2DC) = 0x3F400000;
    MEM32(esi + 0x2E0) = 0x1B;
    MEM32(esi + 0x2E4) = 0x3F060A92;
    MEM32(esi + 0x2E8) = 0x44160000;
    edi = 0; /* xor self */
    MEM32(esi + 0x2D8) = edi;
    eax = 0x3F490FDB;
    MEM32(esi + 0x2C4) = eax;
    MEM32(esi + 0x2C8) = eax;
    edx = MEM32(0x3DD050);
    MEM32(esi + 0x2EC) = edx;
    eax = MEM32(0x3DD050);
    MEM32(esi + 0x2F0) = eax;
    ecx = MEM32(0x3DD054);
    MEM32(esi + 0x2F4) = ecx;
    edx = MEM32(0x3DD054);
    MEM32(esi + 0x2F8) = edx;
    eax = MEM32(0x5BC9D0);
    MEM32(esi + 0x30C) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(esi + 0x310) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(esi + 0x314) = edx;
    eax = MEM32(0x5BC9D0);
    MEM32(esi + 0x318) = eax;
    ecx = MEM32(0x5BC9D4);
    MEM32(esi + 0x31C) = ecx;
    edx = MEM32(0x5BC9D8);
    MEM32(esi + 0x320) = edx;
    SET_LO8(ecx, MEM8(esi + 0x33C));
    MEM32(esi + 0x324) = edi;
    MEM32(esi + 0x328) = edi;
    MEM32(esi + 0x334) = edi;
    MEM32(esi + 0x338) = edi;
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    MEM8(esi + 0x33C) = LO8(ecx);
    MEM32(esi + 0x340) = edi;
    MEM32(esi + 0x344) = 0x3D3178;
    MEM32(esi + 0x348) = edi;
    MEM32(esi + 0x34C) = 0x3D3188;
    MEM32(esi + 0x350) = edi;
    eax = MEM32(esi + 4);
    eax = eax | 4;
    ecx = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000A8782u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000A8782: ;
    edx = MEM32(esi + 4);
    edx = edx | 0x10;
    ecx = esi;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x000A8792u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000A8792: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 8;
    ecx = esi;
    PUSH32(esp, 0x000A879Du); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_000A879D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A87A9; /* je: equal / zero */

loc_000A87A1: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000A87A9u); RECOMP_ABI_CALL(0x000A83E0u, sub_000A83E0); /* call 0x000A83E0 */

loc_000A87A9: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000A87C0
 * Original: 0x000A87C0 - 0x000A8A83 (707 bytes, 190 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000A87C0(void)
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

loc_000A87C0: ;
    esp = esp - 0x8C;
    PUSH32(esp, esi);
    eax = esp + 0x50;
    PUSH32(esp, 0x46D0A0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000A87D8u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_000A87D8: ;
    fp_push(MEMF(esi + 0x2E4)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x2C4); /* fadd dword ptr [esi + 0x2c4] */
    ecx = MEM32(0x5BC9D0);
    edx = MEM32(0x5BC9D4);
    eax = MEM32(0x5BC9D8);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    fp_push(MEMF(esi + 0x2E8)); /* fld float */
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x54;
    fp_push(MEMF(esi + 0x2E8)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = eax;
    fp_push(MEMF(esi + 0x2E8)); /* fld float */
    MEM32(esp + 0x24) = 0;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = 0;
    fp_push(MEMF(esi + 0x314)); /* fld float */
    MEM32(esp + 0x30) = 0;
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x44) = 0;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A8870u); RECOMP_ABI_CALL(0x0023E770u, sub_0023E770); /* call 0x0023E770 */

loc_000A8870: ;
    PUSH32(esp, 1);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x000A8883u); RECOMP_ABI_CALL(0x0023EF60u, sub_0023EF60); /* call 0x0023EF60 */

loc_000A8883: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x314); /* fadd dword ptr [esi + 0x314] */
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A889Eu); RECOMP_ABI_CALL(0x0023E770u, sub_0023E770); /* call 0x0023E770 */

loc_000A889E: ;
    PUSH32(esp, 1);
    eax = esp + 0x3C;
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x000A88B1u); RECOMP_ABI_CALL(0x0023EF60u, sub_0023EF60); /* call 0x0023EF60 */

loc_000A88B1: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = MEM32(0x5BC9D0);
    fp_top() = fp_top() + MEMF(esi + 0x20); /* fadd dword ptr [esi + 0x20] */
    eax = MEM32(0x5BC9D4);
    ecx = MEM32(0x5BC9D8);
    MEM32(esp + 4) = edx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0xC) = ecx;
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x20); /* fadd dword ptr [esi + 0x20] */
    ecx = esp + 0x18;
    edx = 4;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x24); /* fadd dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x20); /* fadd dword ptr [esi + 0x20] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x20); /* fadd dword ptr [esi + 0x20] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x24); /* fadd dword ptr [esi + 0x24] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x28); /* fadd dword ptr [esi + 0x28] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x38); /* fadd dword ptr [esp + 0x38] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x3C); /* fadd dword ptr [esp + 0x3c] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x40); /* fadd dword ptr [esp + 0x40] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A89F1: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x48); /* fsub dword ptr [esp + 0x48] */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x44); /* fsub dword ptr [esp + 0x44] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] * fp_top(); fp_pop(); /* fmulp st(2) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] + fp_top(); fp_pop(); /* faddp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A8A51; /* je: equal / zero */

loc_000A8A2E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x48); /* fsub dword ptr [esp + 0x48] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] * fp_top(); fp_pop(); /* fmulp st(2) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = g_fp_stack[(g_fp_top + 2) & 7] + fp_top(); fp_pop(); /* faddp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */

loc_000A8A51: ;
    ecx = ecx + 0xC;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A89F1; /* jne: not equal / not zero */

loc_000A8A57: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    MEM32(esi + 0x2FC) = edx;
    MEM32(esi + 0x300) = eax;
    MEM32(esi + 0x304) = ecx;
    MEMF(esi + 0x308) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A8A90
 * Original: 0x000A8A90 - 0x000A8FF1 (1377 bytes, 373 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8A90(void)
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

loc_000A8A90: ;
    esp = esp - 0x8C;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A8A9Eu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A8A9E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000A8AA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8AA8: ;
    fp_top() = fp_top() - MEMF(esi + 0x338); /* fsub dword ptr [esi + 0x338] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x328)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A8AEA; /* jne: not equal / not zero */

loc_000A8AC5: ;
    fp_push(MEMF(esi + 0x328)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    MEMF(esi + 0x328) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A8AEA; /* jp: parity */

loc_000A8AE2: ;
    MEM32(esp + 0x28) = 0;

loc_000A8AEA: ;
    fp_push(MEMF(esi + 0x2CC)); /* fld float */
    PUSH32(esp, ebx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A8B2E; /* jne: not equal / not zero */

loc_000A8AFE: ;
    fp_push(MEMF(esi + 0x328)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A8B2E; /* jp: parity */

loc_000A8B11: ;
    eax = MEM32(esi + 0x324);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A8B2E; /* jle: less or equal (signed <=) */

loc_000A8B1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8B2A; /* je: equal / zero */

loc_000A8B20: ;
    eax = MEM32(esi + 4);
    eax = eax >> 0xF;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A8B2E; /* je: equal / zero */

loc_000A8B2A: ;
    SET_LO8(ebx, 1);
    goto loc_000A8B30;

loc_000A8B2E: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000A8B30: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C4); PUSH32(esp, 0x000A8B3Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8B3A: ;
    eax = MEM32(esi + 0x2F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8B5F; /* je: equal / zero */

loc_000A8B48: ;
    PUSH32(esp, 0x000A8B4Du); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A8B4D: ;
    edx = MEM32(eax);
    ecx = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2F8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A8B5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8B5F: ;
    edx = MEM32(0x3DD054);
    _fa = (uint32_t)(MEM32(esi + 0x2F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2F4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8B84; /* je: equal / zero */

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
