#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_leader_event_guest.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/actors/raven_leader_actor.h"
/**
 * X-Men Legends - Recompiled code chunk 2
 * Functions: 250 (0x00027720 - 0x00030700)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00027720
 * Original: 0x00027720 - 0x00027740 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027720: ;
    eax = MEM32(ecx + 0x330);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    eax = eax * 4 + 0x48585C;
    if (CMP_NE(_fa, _fb)) goto loc_00027737; /* jne: not equal / not zero */

loc_00027732: ;
    eax = 0x498D90;

loc_00027737: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00027740
 * Original: 0x00027740 - 0x000277DB (155 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027740(void)
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

loc_00027740: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x28);
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0002779E; /* je: equal / zero */

loc_0002775F: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00027766u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00027766: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002779E; /* je: equal / zero */

loc_00027785: ;
    ecx = MEM32(esi + 4);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002779E; /* jne: not equal / not zero */

loc_00027790: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C8324); /* fadd dword ptr [0x3c8324] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002779E: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    esi = esi + 0x2C;
    PUSH32(esp, esi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000277B4u); RECOMP_ABI_CALL(0x00068060u, sub_00068060); /* call 0x00068060 */

loc_000277B4: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_000277CB; /* je: equal / zero */

loc_000277BC: ;
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_000277CB: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000277E0
 * Original: 0x000277E0 - 0x00027847 (103 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000277E0(void)
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

loc_000277E0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp = esp - 0x10;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002783F; /* jne: not equal / not zero */

loc_000277F8: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89BC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89bc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002783F; /* jp: parity */

loc_00027809: ;
    PUSH32(esp, 0x0002780Eu); RECOMP_ABI_CALL(0x000AA4A0u, sub_000AA4A0); /* call 0x000AA4A0 */

loc_0002780E: ;
    esi = eax;
    PUSH32(esp, 0x00027815u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_00027815: ;
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esp + 0x14;
    MEM32(esp + 0x2C) = esp;
    PUSH32(esp, 0x00027837u); RECOMP_ABI_CALL(0x00027480u, sub_00027480); /* call 0x00027480 */

loc_00027837: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002783Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002783F: ;
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
 * sub_00027850
 * Original: 0x00027850 - 0x00027908 (184 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027850(void)
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

loc_00027850: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x94);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x00027863u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_00027863: ;
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    fp_top() = MEMF(esp + 4) - fp_top(); /* fsubr dword ptr [esp + 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00027903; /* jne: not equal / not zero */

loc_0002787E: ;
    _fa = (uint32_t)(MEM8(esi + 0xC8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC8), 8 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_000278B2; /* je: equal / zero */

loc_0002788C: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000278B2; /* jne: not equal / not zero */

loc_00027894: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000278A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000278A4: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_000278B2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000278BE; /* jne: not equal / not zero */

loc_000278B6: ;
    MEM32(esi + 0x90) = edi;
    goto loc_000278C7;

loc_000278BE: ;
    edi = MEM32(edi + 0x1C);
    MEM32(esi + 0x90) = edi;

loc_000278C7: ;
    PUSH32(esp, 0x000278CCu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000278CC: ;
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edx = esi + 0x88;
    MEMF(esi + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000278E9u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000278E9: ;
    ecx = MEM32(0x48D8E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000278F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000278F4: ;
    ecx = MEM32(esi + 0x80);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00027902u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00027902: ;
    POP32(esp, edi);

loc_00027903: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00027910
 * Original: 0x00027910 - 0x00027946 (54 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027910: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00027919u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_00027919: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027931; /* je: equal / zero */

loc_0002791D: ;
    eax = MEM32(esi + 0x1C);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0002792Eu); RECOMP_ABI_CALL(0x000C7900u, sub_000C7900); /* call 0x000C7900 */

loc_0002792E: ;
    esp = esp + 4;

loc_00027931: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0002793Eu); RECOMP_ABI_CALL(0x00066B40u, sub_00066B40); /* call 0x00066B40 */

loc_0002793E: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00027950
 * Original: 0x00027950 - 0x00027A5F (271 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027950(void)
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

loc_00027950: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00027962u); RECOMP_ABI_CALL(0x00066D70u, sub_00066D70); /* call 0x00066D70 */

loc_00027962: ;
    edi = esi + 0x7C;
    ecx = edi;
    PUSH32(esp, 0x0002796Cu); RECOMP_ABI_CALL(0x0006E040u, sub_0006E040); /* call 0x0006E040 */

loc_0002796C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027A1B; /* je: equal / zero */

loc_00027974: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002798C; /* je: equal / zero */

loc_00027978: ;
    eax = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00027984u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00027984: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0002798Cu); RECOMP_ABI_CALL(0x0006DFD0u, sub_0006DFD0); /* call 0x0006DFD0 */

loc_0002798C: ;
    _fa = (uint32_t)(MEM8(esi + 0xC9)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC9), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027A56; /* je: equal / zero */

loc_00027999: ;
    ecx = MEM32(0x48D8E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000279A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000279A4: ;
    ecx = MEM32(esi + 0xB8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000279B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000279B2: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x70);
    edi = esi + 0x70;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000279C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000279C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00027A56; /* jne: not equal / not zero */

loc_000279C9: ;
    fp_push(MEMF(0x3C8240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000279E4; /* jp: parity */

loc_000279DA: ;
    MEM32(esp + 0x1C) = 0x3DCCCCCD;
    goto loc_000279EC;

loc_000279E4: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x1C) = eax;

loc_000279EC: ;
    PUSH32(esp, 0x000279F1u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_000279F1: ;
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000279FEu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000279FE: ;
    ecx = MEM32(esp + 0x1C);
    fp_top() = fp_top() + MEMF(esp + 0x1C); /* fadd dword ptr [esp + 0x1c] */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00027A12u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_00027A12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00027A1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027A26; /* je: equal / zero */

loc_00027A1F: ;
    ecx = edi;
    PUSH32(esp, 0x00027A26u); RECOMP_ABI_CALL(0x0006DF30u, sub_0006DF30); /* call 0x0006DF30 */

loc_00027A26: ;
    _fa = (uint32_t)(MEM8(esi + 0xC9)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC9), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027A56; /* je: equal / zero */

loc_00027A2F: ;
    ecx = MEM32(0x48D8E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00027A3Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00027A3A: ;
    ecx = MEM32(esi + 0x80);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00027A48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00027A48: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = eax;

loc_00027A56: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00027A60
 * Original: 0x00027A60 - 0x00027AFC (156 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027A60(void)
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

loc_00027A60: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00027A6Du); RECOMP_ABI_CALL(0x00027410u, sub_00027410); /* call 0x00027410 */

loc_00027A6D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027AF8; /* je: equal / zero */

loc_00027A75: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0xA4); /* fadd dword ptr [esi + 0xa4] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00027AB0; /* jp: parity */

loc_00027A96: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00027AA5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00027AA5: ;
    MEM8(esi + 0xC8) = MEM8(esi + 0xC8) & 0x7F;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00027AB0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00027AF8; /* jne: not equal / not zero */

loc_00027AC1: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00027AD7; /* jne: not equal / not zero */

loc_00027AC9: ;
    ecx = MEM32(0x498D90);
    MEM32(0x44B9FC) = ecx;
    goto loc_00027AE0;

loc_00027AD7: ;
    edx = MEM32(eax + 0x1C);
    MEM32(0x44B9FC) = edx;

loc_00027AE0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, xml1_script_silent_schedule(esi, 0x44B9F8));
    ecx = esi;
    PUSH32(esp, 0x00027AF1u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_00027AF1: ;
    MEM8(esi + 0xC8) = MEM8(esi + 0xC8) | 0x80;

loc_00027AF8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00027B00
 * Original: 0x00027B00 - 0x00027B26 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027B00: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00027B0E; /* jne: not equal / not zero */

loc_00027B07: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00027B0E: ;
    PUSH32(esp, 0x00027B13u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00027B13: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00027B30
 * Original: 0x00027B30 - 0x00027B4B (27 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00027B30(void)
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

loc_00027B30: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00027B48; /* jnp: not parity */

loc_00027B42: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00027B48: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00027B50
 * Original: 0x00027B50 - 0x00027B9F (79 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027B50(void)
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

loc_00027B50: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00027B9B; /* jp: parity */

loc_00027B63: ;
    MEM32(ecx + 0xC) = 0;
    PUSH32(esp, 0x00027B6Fu); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_00027B6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = MEM32(esp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_00027B8B; /* je: equal / zero */

loc_00027B77: ;
    ecx = MEM32(esi + 0x1C);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x00027B88u); RECOMP_ABI_CALL(0x000C7900u, sub_000C7900); /* call 0x000C7900 */

loc_00027B88: ;
    esp = esp + 4;

loc_00027B8B: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x00027B98u); RECOMP_ABI_CALL(0x00066B40u, sub_00066B40); /* call 0x00066B40 */

loc_00027B98: ;
    esp = esp + 4;

loc_00027B9B: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00027BA0
 * Original: 0x00027BA0 - 0x00027BDE (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027BA0: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x00027BAAu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00027BAA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027BDA; /* je: equal / zero */

loc_00027BB0: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00027BB7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00027BB7: ;
    edx = MEM32(0x48338C);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00027BDA; /* je: equal / zero */

loc_00027BD6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00027BDA: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00027BE0
 * Original: 0x00027BE0 - 0x00027BF2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027BE0(void)
{

loc_00027BE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x44BA08);
    PUSH32(esp, 0x00027BEFu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_00027BEF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00027C00
 * Original: 0x00027C00 - 0x00027C62 (98 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027C00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xC4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00027C16; /* jne: not equal / not zero */

loc_00027C0F: ;
    eax = 0x3C806C;
    goto loc_00027C2C;

loc_00027C16: ;
    PUSH32(esp, 0x00027C1Bu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00027C1B: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_00027C2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00027C32u); RECOMP_ABI_CALL(0x00066AE0u, sub_00066AE0); /* call 0x00066AE0 */

loc_00027C32: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027C5E; /* je: equal / zero */

loc_00027C3B: ;
    MEM8(edi + 0xC9) = MEM8(edi + 0xC9) | 2;
    edx = MEM32(esi + 0x1C);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x00027C55u); RECOMP_ABI_CALL(0x00027260u, sub_00027260); /* call 0x00027260 */

loc_00027C55: ;
    esi = MEM32(esi + 0x1C);
    MEM32(edi + 0xBC) = esi;

loc_00027C5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00027C70
 * Original: 0x00027C70 - 0x00027CF4 (132 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027C70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00027C9E; /* je: equal / zero */

loc_00027C87: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00027C90u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_00027C90: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027C9E; /* je: equal / zero */

loc_00027C94: ;
    eax = MEM32(edi + 0xBC);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027CE4; /* je: equal / zero */

loc_00027C9E: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00027CADu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00027CAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00027CEC; /* je: equal / zero */

loc_00027CB3: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00027CBAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00027CBA: ;
    edx = MEM32(0x48338C);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00027CEC; /* je: equal / zero */

loc_00027CD9: ;
    edi = MEM32(edi + 0x1C);
    _fa = (uint32_t)(MEM32(esi + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xBC), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027CEC; /* jne: not equal / not zero */

loc_00027CE4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00027CEC: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00027D00
 * Original: 0x00027D00 - 0x00027EAE (430 bytes, 141 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027D00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027D00: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x190));
    esp = esp - 0x190;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    MEM32(esp + 0x190) = eax;
    eax = MEM32(esp + 0x198);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ebp = ecx;
    MEM32(esp + 8) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00027E97; /* je: equal / zero */

loc_00027D2B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00027D31u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00027D31: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00027D55u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00027D55: ;
    eax = esp + 0xA4;
    PUSH32(esp, 0x3C89DC);
    PUSH32(esp, eax);
    MEM8(esp + 0x1AB) = 0;
    PUSH32(esp, 0x00027D6Fu); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_00027D6F: ;
    ebx = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00027E96; /* je: equal / zero */

loc_00027D7C: ;
    PUSH32(esp, edi);
    /* nop */

loc_00027D80: ;
    edi = 0x3C89D8;
    esi = ebx;
    ecx = 2;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00027D97; /* je: equal / zero */

loc_00027D92: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00027D97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00027E55; /* jne: not equal / not zero */

loc_00027D9F: ;
    eax = ebx;
    edx = eax + 1;

loc_00027DA4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00027DA4; /* jne: not equal / not zero */

loc_00027DAB: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    ecx = eax + ebx + 1;
    PUSH32(esp, 0x3C89DC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00027DBCu); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_00027DBC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    ebx = eax;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */

loc_00027DC3: ;
    edi = 0x3C89D4;
    esi = ebx;
    ecx = 2;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00027DDA; /* je: equal / zero */

loc_00027DD5: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00027DDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = ebx;
    edx = eax + 1;
    if (TEST_Z(_fa, _fb)) goto loc_00027E10; /* je: equal / zero */

loc_00027DE3: ;
    MEM32(esp + ebp * 4 + 0x1C) = ebx;

loc_00027DE7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00027DE7; /* jne: not equal / not zero */

loc_00027DEE: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = eax + ebx + 1;
    PUSH32(esp, 0x3C89DC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00027DFFu); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_00027DFF: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00027DC3; /* jl: less (signed <) */

loc_00027E0A: ;
    goto loc_00027E2D;

    /* nop */

loc_00027E10: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00027E10; /* jne: not equal / not zero */

loc_00027E17: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    eax = eax + ebx + 1;
    PUSH32(esp, 0x3C89DC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00027E28u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_00027E28: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    ebx = eax;

loc_00027E2D: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00027E36u); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_00027E36: ;
    eax = MEM32(esp + eax * 4 + 0x24);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x00027E4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00027E4F: ;
    ebp = MEM32(esp + 0x10);
    goto loc_00027E8D;

loc_00027E55: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x00027E66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00027E66: ;
    eax = ebx;
    edx = eax + 1;
    goto loc_00027E70;

    /* nop */

loc_00027E70: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00027E70; /* jne: not equal / not zero */

loc_00027E77: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    ecx = eax + ebx + 1;
    PUSH32(esp, 0x3C89DC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00027E88u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_00027E88: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    ebx = eax;

loc_00027E8D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00027D80; /* jne: not equal / not zero */

loc_00027E95: ;
    POP32(esp, edi);

loc_00027E96: ;
    POP32(esp, ebx);

loc_00027E97: ;
    ecx = MEM32(esp + 0x194);
    POP32(esp, esi);
    POP32(esp, ebp);
    PUSH32(esp, 0x00027EA5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00027EA5: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x190)) >> 32) & 1);
    esp = esp + 0x190;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00027EB0
 * Original: 0x00027EB0 - 0x00027EEB (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027EB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00027EE0; /* je: equal / zero */

loc_00027EBC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027EE0; /* je: equal / zero */

loc_00027EC1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00027EC7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00027EC7: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00027ED2u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00027ED2: ;
    ecx = eax;
    PUSH32(esp, 0x00027ED9u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00027ED9: ;
    MEM32(edi) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00027EE0: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00027EF0
 * Original: 0x00027EF0 - 0x00027F2F (63 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00027EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00027F22; /* je: equal / zero */

loc_00027EFC: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027F22; /* je: equal / zero */

loc_00027F01: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00027F07u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00027F07: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00027F12u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00027F12: ;
    ecx = eax;
    PUSH32(esp, 0x00027F19u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00027F19: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00027F22: ;
    POP32(esp, edi);
    MEM32(esi) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00027F30
 * Original: 0x00027F30 - 0x000280FC (460 bytes, 143 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00027F30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00027F30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E1C6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x110;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x114) = eax;
    eax = MEM32(esp + 0x128);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000280AA; /* je: equal / zero */

loc_00027F6F: ;
    PUSH32(esp, 0x00027F74u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00027F74: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00027F95u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00027F95: ;
    eax = esp + 0x24;
    PUSH32(esp, 0x3C89DC);
    PUSH32(esp, eax);
    MEM8(esp + 0x12B) = 0;
    PUSH32(esp, 0x00027FACu); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_00027FAC: ;
    esp = esp + 0x14;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    esi = eax;
    PUSH32(esp, 0x00027FBBu); RECOMP_ABI_CALL(0x000A2950u, sub_000A2950); /* call 0x000A2950 */

loc_00027FBB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(esp + 0x124) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00028022; /* je: equal / zero */

loc_00027FC6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00027FE9; /* je: equal / zero */

loc_00027FCB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00027FD1u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00027FD1: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00027FDCu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00027FDC: ;
    ecx = eax;
    PUSH32(esp, 0x00027FE3u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00027FE3: ;
    MEM32(esp + 0xC) = eax;
    goto loc_00027FED;

loc_00027FE9: ;
    MEM32(esp + 0xC) = edi;

loc_00027FED: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00027FFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00027FFC: ;
    eax = esi;
    edx = eax + 1;

loc_00028001: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00028001; /* jne: not equal / not zero */

loc_00028008: ;
    eax = eax - edx;
    ecx = eax + esi + 1;
    PUSH32(esp, 0x3C89DC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00028019u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_00028019: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00027FC6; /* jne: not equal / not zero */

loc_00028022: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0x3C898C;
    PUSH32(esp, 0x0002803Au); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_0002803A: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x18) = esi;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x128) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00028051u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028051: ;
    ebp = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00028059u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028059: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002807E; /* jle: less or equal (signed <=) */

loc_0002805D: ;
    /* nop */

loc_00028060: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00028068u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028068: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x00028073u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028073: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002807Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002807A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00028060; /* jl: less (signed <) */

loc_0002807E: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x12C) = 0;
    PUSH32(esp, 0x0002808Cu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0002808C: ;
    esp = esp + 4;
    ecx = esp + 0x14;
    MEM32(esp + 0x128) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000280A3u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000280A3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_000280D6; /* jne: not equal / not zero */

loc_000280A8: ;
    edi = 0; /* xor self */

loc_000280AA: ;
    SET_LO8(eax, MEM8(ebx + 0xC8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000280D6; /* je: equal / zero */

loc_000280B4: ;
    ecx = MEM32(esp + 0x130);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000280D6; /* je: equal / zero */

loc_000280BF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000280D6; /* je: equal / zero */

loc_000280C3: ;
    edx = MEM32(ebx);
    SET_LO8(eax, LO8(eax) | 0x80);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM8(ebx + 0xC8) = LO8(eax);
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x000280D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000280D6: ;
    ecx = MEM32(esp + 0x11C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x110);
    POP32(esp, ebx);
    PUSH32(esp, 0x000280F3u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000280F3: ;
    esp = esp + 0x11C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00028100
 * Original: 0x00028100 - 0x00028295 (405 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028100: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E1C6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x110;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x10C) = eax;
    eax = MEM32(ecx + 0x9C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00028273; /* je: equal / zero */

loc_00028138: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00028147; /* jne: not equal / not zero */

loc_00028140: ;
    eax = 0x3C806C;
    goto loc_0002815D;

loc_00028147: ;
    PUSH32(esp, 0x0002814Cu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_0002814C: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_0002815D: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002816Du); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0002816D: ;
    eax = esp + 0x24;
    PUSH32(esp, 0x3C89DC);
    PUSH32(esp, eax);
    MEM8(esp + 0x12B) = LO8(ebx);
    PUSH32(esp, 0x00028183u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_00028183: ;
    esp = esp + 0x14;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    esi = eax;
    PUSH32(esp, 0x00028192u); RECOMP_ABI_CALL(0x000A2950u, sub_000A2950); /* call 0x000A2950 */

loc_00028192: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x124) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000281F8; /* je: equal / zero */

loc_0002819D: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000281BF; /* je: equal / zero */

loc_000281A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000281A7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000281A7: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000281B2u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000281B2: ;
    ecx = eax;
    PUSH32(esp, 0x000281B9u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_000281B9: ;
    MEM32(esp + 0xC) = eax;
    goto loc_000281C3;

loc_000281BF: ;
    MEM32(esp + 0xC) = ebx;

loc_000281C3: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000281D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000281D2: ;
    eax = esi;
    edx = eax + 1;

loc_000281D7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000281D7; /* jne: not equal / not zero */

loc_000281DE: ;
    eax = eax - edx;
    ecx = eax + esi + 1;
    PUSH32(esp, 0x3C89DC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000281EFu); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_000281EF: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002819D; /* jne: not equal / not zero */

loc_000281F8: ;
    eax = MEM32(esp + 0x10);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0x3C898C;
    PUSH32(esp, 0x0002820Fu); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_0002820F: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x14) = esi;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x124) = 1;
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00028228u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028228: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002824D; /* jle: less or equal (signed <=) */

loc_0002822C: ;
    /* nop */

loc_00028230: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00028238u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028238: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x00028242u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028242: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00028249u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028249: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00028230; /* jl: less (signed <) */

loc_0002824D: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x128) = LO8(ebx);
    PUSH32(esp, 0x0002825Au); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0002825A: ;
    esp = esp + 4;
    ecx = esp + 0x10;
    MEM32(esp + 0x124) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00028271u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_00028271: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00028273: ;
    ecx = MEM32(esp + 0x114);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x110);
    POP32(esp, ebx);
    PUSH32(esp, 0x0002828Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0002828E: ;
    esp = esp + 0x11C;
    esp += 4; return; /* ret */

}

/**
 * sub_000282A0
 * Original: 0x000282A0 - 0x000282AF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000282A0(void)
{

loc_000282A0: ;
    PUSH32(esp, 0);
    eax = ecx + 0x9C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000282AEu); RECOMP_ABI_CALL(0x00027F30u, sub_00027F30); /* call 0x00027F30 */

loc_000282AE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000282B0
 * Original: 0x000282B0 - 0x0002841F (367 bytes, 120 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000282B0(void)
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

loc_000282B0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0xC9)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC9), 4 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00028415; /* je: equal / zero */

loc_000282C6: ;
    eax = MEM32(esi + 4);
    eax = eax >> 0xF;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000282F1; /* jne: not equal / not zero */

loc_000282D0: ;
    ecx = MEM32(0x48D8E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000282DBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000282DB: ;
    ecx = MEM32(esi + 0xB8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000282E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000282E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028415; /* je: equal / zero */

loc_000282F1: ;
    ecx = MEM32(0x48D8E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000282FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000282FC: ;
    ecx = MEM32(esi + 0xB8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0002830Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002830A: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x48D8E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00028319u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028319: ;
    ecx = MEM32(esi + 0xB8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00028327u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028327: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000283CE; /* jnp: not parity */

loc_00028342: ;
    PUSH32(esp, 0x00028347u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_00028347: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00028351u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028351: ;
    fp_top() = fp_top() - MEMF(esi + 0x84); /* fsub dword ptr [esi + 0x84] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000283CE; /* jne: not equal / not zero */

loc_00028362: ;
    ecx = MEM32(0x48D8E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0002836Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002836D: ;
    ebx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    edi = eax;
    ebp = MEM32(edi);
    ecx = esp;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x00028381u); RECOMP_ABI_CALL(0x00014500u, sub_00014500); /* call 0x00014500 */

loc_00028381: ;
    ecx = ZX8(MEM8(esi + 0xCF));
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002839Du); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0002839D: ;
    esp = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xB8);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x34); PUSH32(esp, 0x000283B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000283B1: ;
    MEM32(esi + 0x80) = eax;
    PUSH32(esp, 0x000283BCu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000283BC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000283C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000283C6: ;
    MEMF(esi + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000283ED;

loc_000283CE: ;
    ecx = ZX8(MEM8(esi + 0xCF));
    edx = MEM32(esi + 0xB8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x000283EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000283ED: ;
    eax = MEM32(esi + 0x70);
    edi = esi + 0x70;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000283F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000283F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00028415; /* jne: not equal / not zero */

loc_000283FC: ;
    PUSH32(esp, 0x00028401u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_00028401: ;
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x00028415u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_00028415: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00028420
 * Original: 0x00028420 - 0x00028765 (837 bytes, 277 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028420(void)
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

loc_00028420: ;
    const int _action_silent = xml1_script_take_silent(ecx);
    esp = esp - 0x18;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00028491; /* je: equal / zero */

loc_00028430: ;
    _fa = (uint32_t)(MEM8(esi + 0xC8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028451; /* je: equal / zero */

loc_00028439: ;
    ecx = ebp;
    PUSH32(esp, 0x00028440u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_00028440: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00028449u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_00028449: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000284EE; /* jne: not equal / not zero */

loc_00028451: ;
    _fa = (uint32_t)(MEM8(esi + 0xC9)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC9), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028470; /* je: equal / zero */

loc_0002845A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00028460u); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_00028460: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028470; /* je: equal / zero */

loc_00028467: ;
    _fa = (uint32_t)(MEM8(eax + 0x335)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x335), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000284EE; /* je: equal / zero */

loc_00028470: ;
    _fa = (uint32_t)(MEM8(esi + 0xC8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028491; /* je: equal / zero */

loc_00028479: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002847Fu); RECOMP_ABI_CALL(0x00027620u, sub_00027620); /* call 0x00027620 */

loc_0002847F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028491; /* je: equal / zero */

loc_00028486: ;
    ecx = eax;
    PUSH32(esp, 0x0002848Du); RECOMP_ABI_CALL(0x00027720u, sub_00027720); /* call 0x00027720 */

loc_0002848D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000284EE; /* je: equal / zero */

loc_00028491: ;
    eax = ZX8(MEM8(esi + 0xCA));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0002849F; /* jns: not sign (positive) */

loc_0002849B: ;
    eax = 0; /* xor self */
    goto loc_000284AB;

loc_0002849F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000284AB; /* jle: less or equal (signed <=) */

loc_000284A6: ;
    eax = 0xFF;

loc_000284AB: ;
    _fa = (uint32_t)(MEM8(esi + 0xCB)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xCB), LO8(eax) (8-bit) */
    MEM8(esi + 0xCA) = LO8(eax);
    if (CMP_A(_fa, _fb)) goto loc_000284EE; /* ja: above (unsigned >) */

loc_000284B9: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0xB4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000284F9; /* jnp: not parity */

loc_000284CE: ;
    fp_push(MEMF(esi + 0xB0)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0xB4); /* fadd dword ptr [esi + 0xb4] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000284E3u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000284E3: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000284F9; /* jp: parity */

loc_000284EE: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_000284F9: ;
    PUSH32(esp, 0x000284FEu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_000284FE: ;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ZX8(MEM8(esi + 0xCC));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0xCA) = 0;
    if ((_fas >= 0)) goto loc_00028519; /* jns: not sign (positive) */

loc_00028515: ;
    eax = 0; /* xor self */
    goto loc_00028525;

loc_00028519: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00028525; /* jle: less or equal (signed <=) */

loc_00028520: ;
    eax = 0xFF;

loc_00028525: ;
    MEM8(esi + 0xCC) = LO8(eax);
    PUSH32(esp, 0x00028530u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00028530: ;
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002853Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002853F: ;
    PUSH32(esp, 0x00028544u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00028544: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_0002854F; /* jne: not equal / not zero */

loc_0002854B: ;
    MEM32(ecx) = ebp;
    goto loc_00028554;

loc_0002854F: ;
    edx = MEM32(ebp + 0x1C);
    MEM32(ecx) = edx;

loc_00028554: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002855Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002855B: ;
    SET_LO8(ecx, MEM8(esi + 0xC9));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000285A8; /* je: equal / zero */

loc_00028566: ;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) >> 2);
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    MEM8(esi + 0xC9) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_000285A8; /* je: equal / zero */

loc_00028580: ;
    edi = MEM32(esi + 4);
    edi = edi | 0x4000;
    ecx = esi;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x00028593u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00028593: ;
    PUSH32(esp, 0x00028598u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_00028598: ;
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    eax = esi + 0x70;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000285A8u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000285A8: ;
    ecx = MEM32(esi + 4);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002864F; /* je: equal / zero */

loc_000285B7: ;
    edi = esi + 0x78;
    ecx = edi;
    PUSH32(esp, 0x000285C1u); RECOMP_ABI_CALL(0x0006E040u, sub_0006E040); /* call 0x0006E040 */

loc_000285C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000285E7; /* je: equal / zero */

loc_000285C5: ;
    edx = MEM32(esi + 4);
    edx = edx >> 0x15;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000285DE; /* je: equal / zero */

loc_000285D0: ;
    if(_action_silent)goto loc_000285FB;
    eax = MEM32(esi);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000285DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000285DC: ;
    goto loc_000285F3;

loc_000285DE: ;
    ecx = edi;
    PUSH32(esp, 0x000285E5u); RECOMP_ABI_CALL(0x0006DF30u, sub_0006DF30); /* call 0x0006DF30 */

loc_000285E5: ;
    goto loc_000285FB;

loc_000285E7: ;
    if(_action_silent)goto loc_000285FB;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000285F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000285F3: ;
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000285FBu); RECOMP_ABI_CALL(0x0006DFD0u, sub_0006DFD0); /* call 0x0006DFD0 */

loc_000285FB: ;
    ecx = esi + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00028609u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_00028609: ;
    SET_LO16(eax, ZX8(MEM8(esi + 0xCF)));
    edx = MEM32(esi);
    esp = esp + 8;
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00028626u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028626: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0002862Eu); RECOMP_ABI_CALL(0x0006E070u, sub_0006E070); /* call 0x0006E070 */

loc_0002862E: ;
    ecx = MEM32(esi + 4);
    ecx = ecx >> 0x15;
    SET_LO8(ecx, ~LO8(ecx));
    ecx = ecx & 0xFFFFFF01u;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x15);
    ecx = esi;
    PUSH32(esp, 0x00028646u); RECOMP_ABI_CALL(0x00026DD0u, sub_00026DD0); /* call 0x00026DD0 */

loc_00028646: ;
    ecx = edi;
    PUSH32(esp, 0x0002864Du); RECOMP_ABI_CALL(0x0006DF90u, sub_0006DF90); /* call 0x0006DF90 */

loc_0002864D: ;
    goto loc_00028673;

loc_0002864F: ;
    SET_LO16(edx, ZX8(MEM8(esi + 0xCF)));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esi + 0x2C;
    ecx = esi;
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0002866Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002866A: ;
    PUSH32(esp, eax);
    ecx = esi + 0x78;
    PUSH32(esp, 0x00028673u); RECOMP_ABI_CALL(0x0006DED0u, sub_0006DED0); /* call 0x0006DED0 */

loc_00028673: ;
    PUSH32(esp, ebp);
    ecx = esi + 0x9C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00028682u); RECOMP_ABI_CALL(0x00027F30u, sub_00027F30); /* call 0x00027F30 */

loc_00028682: ;
    edx = MEM32(esi);
    eax = esi + 0x98;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00028693u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028693: ;
    PUSH32(esp, 0x00028698u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_00028698: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0002869Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002869F: ;
    PUSH32(esp, 0x000286A4u); RECOMP_ABI_CALL(0x0009AD80u, sub_0009AD80); /* call 0x0009AD80 */

loc_000286A4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000286ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000286AB: ;
    SET_LO8(eax, MEM8(esi + 0xCD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000286D9; /* je: equal / zero */

loc_000286B5: ;
    _fa = (uint32_t)(MEM8(esi + 0xCC)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xCC), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000286D9; /* jb: below (unsigned <) */

loc_000286BD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x000286CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000286CD: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x000286D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000286D7: ;
    goto loc_000286F5;

loc_000286D9: ;
    SET_LO8(eax, MEM8(esi + 0xCE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000286F5; /* je: equal / zero */

loc_000286E3: ;
    _fa = (uint32_t)(MEM8(esi + 0xCC)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xCC), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000286F5; /* jb: below (unsigned <) */

loc_000286EB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x000286F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000286F5: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002875A; /* jnp: not parity */

loc_0002870A: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    ecx = MEM32(esi + 0xA8);
    fp_push(MEMF(esi + 0xAC)); /* fld float */
    PUSH32(esp, ecx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002874F; /* jnp: not parity */

loc_00028726: ;
    edx = MEM32(esi + 0xAC);
    edi = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00028734u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_00028734: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0xC0); PUSH32(esp, 0x00028744u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028744: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_0002874F: ;
    eax = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x0002875Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002875A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00028770
 * Original: 0x00028770 - 0x00028797 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028770(void)
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

loc_00028770: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00028794; /* jp: parity */

loc_00028782: ;
    MEM32(ecx + 4) = 0;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00028794u); RECOMP_ABI_CALL(0x000282B0u, sub_000282B0); /* call 0x000282B0 */

loc_00028794: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000287A0
 * Original: 0x000287A0 - 0x00028DBE (1566 bytes, 508 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000287A0(void)
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

loc_000287A0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x98);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000287BB; /* jne: not equal / not zero */

loc_000287B4: ;
    eax = 0x3C806C;
    goto loc_000287D1;

loc_000287BB: ;
    PUSH32(esp, 0x000287C0u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000287C0: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000287D1: ;
    esi = MEM32(esp + 0x28);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8BD4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000287E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000287E3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002880E; /* je: equal / zero */

loc_000287E9: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002880E; /* je: equal / zero */

loc_000287EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000287F4u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000287F4: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000287FFu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000287FF: ;
    ecx = eax;
    PUSH32(esp, 0x00028806u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_00028806: ;
    MEM32(ebp + 0x98) = eax;
    goto loc_00028814;

loc_0002880E: ;
    MEM32(ebp + 0x98) = ebx;

loc_00028814: ;
    edi = MEM32(ebp + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00028825; /* jne: not equal / not zero */

loc_0002881E: ;
    eax = 0x3C806C;
    goto loc_0002883B;

loc_00028825: ;
    PUSH32(esp, 0x0002882Au); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_0002882A: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_0002883B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8BC8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00028848u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028848: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00028873; /* je: equal / zero */

loc_0002884E: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00028873; /* je: equal / zero */

loc_00028853: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00028859u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00028859: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00028864u); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_00028864: ;
    ecx = eax;
    PUSH32(esp, 0x0002886Bu); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_0002886B: ;
    MEM32(ebp + 0x9C) = eax;
    goto loc_00028879;

loc_00028873: ;
    MEM32(ebp + 0x9C) = ebx;

loc_00028879: ;
    eax = MEM32(esi);
    ecx = ebp + 0xA0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C8BBC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0002888Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002888C: ;
    edx = MEM32(esi);
    eax = ebp + 0xA4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8BB0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0002889Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002889F: ;
    edx = MEM32(esi);
    eax = ebp + 0xB4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8B9C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000288B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000288B2: ;
    edx = MEM32(esi);
    eax = ebp + 0xA8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8B88);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000288C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000288C5: ;
    edx = MEM32(esi);
    eax = ebp + 0xAC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8B70);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000288D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000288D8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C8B58);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000288E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000288E5: ;
    SET_LO8(ecx, MEM8(ebp + 0xC9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(ebp + 0xC9) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, 0x3C8B48);
    ecx = esi;
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00028915u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028915: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00028921; /* jge: greater or equal (signed >=) */

loc_0002891D: ;
    eax = 0; /* xor self */
    goto loc_0002892D;

loc_00028921: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002892D; /* jle: less or equal (signed <=) */

loc_00028928: ;
    eax = 0xFF;

loc_0002892D: ;
    MEM8(ebp + 0xCD) = LO8(eax);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8B38);
    ecx = esi;
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00028948u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028948: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00028954; /* jge: greater or equal (signed >=) */

loc_00028950: ;
    eax = 0; /* xor self */
    goto loc_00028960;

loc_00028954: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00028960; /* jle: less or equal (signed <=) */

loc_0002895B: ;
    eax = 0xFF;

loc_00028960: ;
    MEM8(ebp + 0xCE) = LO8(eax);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8B2C);
    ecx = esi;
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002897Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002897B: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00028987; /* jge: greater or equal (signed >=) */

loc_00028983: ;
    eax = 0; /* xor self */
    goto loc_00028993;

loc_00028987: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00028993; /* jle: less or equal (signed <=) */

loc_0002898E: ;
    eax = 0xFF;

loc_00028993: ;
    ecx = 0; /* xor self */
    MEM8(ebp + 0xCB) = LO8(eax);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = ecx;
    eax = ebp + 4;
    edx = MEM32(eax);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x24) = eax;
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi);
    PUSH32(esp, 0x3C8B20);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000289DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000289DC: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x3C8B14);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000289EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000289EF: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x3C8B04);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00028A02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028A02: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3C8AF8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00028A15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028A15: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x3C8AE8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00028A28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028A28: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x3C8ADC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00028A3Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028A3B: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00028A47u); RECOMP_ABI_CALL(0x00066E40u, sub_00066E40); /* call 0x00066E40 */

loc_00028A47: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C8AD0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00028A54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028A54: ;
    SET_LO8(ecx, MEM8(ebp + 0xC9));
    SET_LO8(edx, MEM8(ebp + 0xC9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(ebp + 0xC9) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, 0x3C8AC0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00028A7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028A7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, MEM8(ebp + 0xC8));
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebp + 0xC8) = LO8(ecx);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C8AB4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00028AA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028AA6: ;
    SET_LO8(ecx, MEM8(ebp + 0xC8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(ebp + 0xC8) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, 0x3C8AA8);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00028ACFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028ACF: ;
    SET_LO8(ecx, MEM8(ebp + 0xC8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebp + 0xC8) = LO8(ecx);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C8A9C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00028AF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028AF6: ;
    SET_LO8(ecx, MEM8(ebp + 0xC8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(ebp + 0xC8) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, 0x3C8A8C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00028B1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028B1F: ;
    SET_LO8(ecx, MEM8(ebp + 0xC8));
    SET_LO8(edx, MEM8(ebp + 0xC8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(ebp + 0xC8) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, 0x3C8A80);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00028B4Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028B4A: ;
    SET_LO8(ecx, MEM8(ebp + 0xC8));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebp + 0xC8) = LO8(ecx);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C8A70);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00028B70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028B70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) << 5);
    SET_LO8(eax, MEM8(ebp + 0xC9));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0x20);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(ebp + 0xC9) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, 0x3C8A5C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00028B9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028B9A: ;
    SET_LO8(ecx, MEM8(ebp + 0xC9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 6);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x40);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM8(ebp + 0xC9) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, 0x3C8A48);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00028BC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028BC3: ;
    SET_LO8(ecx, MEM8(ebp + 0xC9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    eax = esp + 0x14;
    MEM8(ebp + 0xC9) = LO8(ecx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8A40);
    ecx = esi;
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00028BF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028BF2: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(ebp + 0xCF) = LO8(ecx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C8A38);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00028C09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028C09: ;
    SET_LO8(ecx, MEM8(ebp + 0xC9));
    edi = eax;
    SET_LO8(ecx, LO8(ecx) & 0xF3);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(ebp + 0xC9) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00028CF8; /* je: equal / zero */

loc_00028C22: ;
    ecx = MEM32(0x48D8E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00028C2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028C2D: ;
    edx = MEM32(ebp);
    ebx = MEM32(eax);
    ecx = ebp;
    MEM32(esp + 0x2C) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00028C3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028C3E: ;
    ecx = MEM32(esp + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x00028C47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028C47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebp + 0xB8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00028CF8; /* je: equal / zero */

loc_00028C55: ;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 0xC9));
    ecx = ecx >> 2;
    ecx = ecx & 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C8A28);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00028C70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028C70: ;
    SET_LO8(ecx, MEM8(ebp + 0xC9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) << 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 4);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    MEM8(ebp + 0xC9) = LO8(ebx);
    edx = MEM32(esi);
    ecx = esi;
    eax = eax >> 3;
    eax = eax & 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8A14);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00028CA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028CA4: ;
    SET_LO8(ebx, MEM8(ebp + 0xC9));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) << 3);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebp + 0xC9) = LO8(ecx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C8A04);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00028CCEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028CCE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00028CEC; /* je: equal / zero */

loc_00028CD4: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) & 0xFFFFBFFFu;
    PUSH32(esp, 0x00028CE0u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00028CE0: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00028CEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028CEA: ;
    goto loc_00028CF8;

loc_00028CEC: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) | 0x4000;
    PUSH32(esp, 0x00028CF8u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00028CF8: ;
    edx = MEM32(ebp);
    ecx = ebp;
    ebx = ebp + 0x78;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00028D06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028D06: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C8A00);
    ecx = ebx;
    PUSH32(esp, 0x00028D14u); RECOMP_ABI_CALL(0x0006E2D0u, sub_0006E2D0); /* call 0x0006E2D0 */

loc_00028D14: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00028D1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028D1F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C89F8);
    ecx = ebp + 0x7C;
    PUSH32(esp, 0x00028D2Eu); RECOMP_ABI_CALL(0x0006E2D0u, sub_0006E2D0); /* call 0x0006E2D0 */

loc_00028D2E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C89EC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00028D3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028D3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028D89; /* je: equal / zero */

loc_00028D40: ;
    edi = 0x3C806C;
    esi = eax;
    ecx = 1;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00028D89; /* je: equal / zero */

loc_00028D52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00028D58u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_00028D58: ;
    fp_push(MEMF(0x3C832C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    esp = esp + 4;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00028D72; /* jne: not equal / not zero */

loc_00028D6A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C832C)); /* fld float */

loc_00028D72: ;
    PUSH32(esp, 0x3A83126F);
    MEMF(0x44BA04) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x44BA00);
    ecx = ebp;
    PUSH32(esp, 0x00028D89u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_00028D89: ;
    ecx = ebx;
    PUSH32(esp, 0x00028D90u); RECOMP_ABI_CALL(0x0006DE80u, sub_0006DE80); /* call 0x0006DE80 */

loc_00028D90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00028DB5; /* je: equal / zero */

loc_00028D95: ;
    PUSH32(esp, 0x3C89E4);
    ecx = ebx;
    PUSH32(esp, 0x00028DA1u); RECOMP_ABI_CALL(0x0006DE80u, sub_0006DE80); /* call 0x0006DE80 */

loc_00028DA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00028DA7u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00028DA7: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028DB5; /* je: equal / zero */

loc_00028DAE: ;
    MEM8(ebp + 0xC9) = MEM8(ebp + 0xC9) | 0xC0;

loc_00028DB5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00028DC0
 * Original: 0x00028DC0 - 0x00028F3A (378 bytes, 94 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028DC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E1EE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x44) = esp;
    PUSH32(esp, 0x00028E07u); RECOMP_ABI_CALL(0x00067AD0u, sub_00067AD0); /* call 0x00067AD0 */

loc_00028E07: ;
    ebx = 0; /* xor self */
    MEM32(esi) = 0x3C8884;
    MEM32(esi + 0x70) = 0x3C8978;
    MEM32(esi + 0x74) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x88) = 0x3C89C8;
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0x94) = ebx;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xB0) = 0xC47A0000u;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xBC) = ebx;
    MEM32(esi + 0xC0) = ebx;
    MEM32(esi + 0xC4) = ebx;
    SET_LO8(edx, MEM8(esi + 0xC9));
    SET_LO8(edx, LO8(edx) & 0x71);
    SET_LO8(edx, LO8(edx) | 4);
    MEM8(esi + 0xC9) = LO8(edx);
    MEM8(esi + 0xCA) = LO8(ebx);
    MEM8(esi + 0xCB) = LO8(ebx);
    MEM8(esi + 0xCC) = LO8(ebx);
    MEM8(esi + 0xCD) = LO8(ebx);
    MEM8(esi + 0xCE) = LO8(ebx);
    MEM8(esi + 0xCF) = LO8(ebx);
    MEM32(esi + 4) = MEM32(esi + 4) | 0x80000;
    ecx = esi;
    MEM8(esp + 0x18) = 2;
    PUSH32(esp, 0x00028ECEu); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00028ECE: ;
    eax = MEM32(esi + 4);
    eax = eax | 0x200000;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x00028EE0u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00028EE0: ;
    edx = MEM32(esi + 4);
    edx = edx & 0xFFEFFFFFu;
    ecx = esi;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x00028EF3u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_00028EF3: ;
    SET_LO8(ecx, MEM8(esi + 0xC8));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esi + 0xC8) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00028F0E; /* je: equal / zero */

loc_00028F06: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00028F0Eu); RECOMP_ABI_CALL(0x000287A0u, sub_000287A0); /* call 0x000287A0 */

loc_00028F0E: ;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x7C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00028F24; /* je: equal / zero */

loc_00028F13: ;
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0x44BA08);
    ecx = esi;
    PUSH32(esp, 0x00028F24u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_00028F24: ;
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
 * sub_00028F40
 * Original: 0x00028F40 - 0x00028F9C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00028F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028F40: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00028F4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00028F4F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00028F5Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_00028F5A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028F95; /* je: equal / zero */

loc_00028F61: ;
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
    PUSH32(esp, 0x00028F85u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_00028F85: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x00028F8Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_00028F8E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_00028F95: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}





/**
 * sub_00029010
 * Original: 0x00029010 - 0x00029024 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029010(void)
{

loc_00029010: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = ecx + 0xF8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00029021u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_00029021: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00029030
 * Original: 0x00029030 - 0x0002903B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029030(void)
{

loc_00029030: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x134); PUSH32(esp, 0x00029038u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029038: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00029040
 * Original: 0x00029040 - 0x0002907E (62 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029040(void)
{
    int _flags = 0; /* fallback flag var */

loc_00029040: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x2438);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x2234) = MEM32(eax + edx * 4 + 0x2234) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x2234) >= 0)) goto loc_0002907A; /* jns: not sign (positive) */

loc_0002905D: ;
    MEM32(eax + edx * 4 + 0x2234) = edx;
    ecx = MEM32(eax + 0x2438);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x2234) = esi;

loc_0002907A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00029080
 * Original: 0x00029080 - 0x0002909C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00029080(void)
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

loc_00029080: ;
    fp_push(MEMF(ecx + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029099; /* jne: not equal / not zero */

loc_00029093: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00029099: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000290A0
 * Original: 0x000290A0 - 0x000290B3 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000290A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000290A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000290AA; /* jbe: below or equal (unsigned <=) */

loc_000290A8: ;
    SET_LO8(eax, 0xA);

loc_000290AA: ;
    MEM8(ecx + 0x2C2) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000290C0
 * Original: 0x000290C0 - 0x000290C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000290C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000290C0: ;
    g_seh_ebp = ebp; sub_000496D0(); return; /* tail jmp 0x000496D0 */

}

/**
 * sub_000290D0
 * Original: 0x000290D0 - 0x000290F1 (33 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000290D0(void)
{

loc_000290D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000290DDu); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_000290DD: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x300) = eax;
    MEM32(esi + 0x304) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00029100
 * Original: 0x00029100 - 0x00029107 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029100(void)
{

loc_00029100: ;
    MEM32(ecx) = 0x3C8BF8;
    esp += 4; return; /* ret */

}

/**
 * sub_00029110
 * Original: 0x00029110 - 0x0002912F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029110: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3C8BF8;
    if (TEST_Z(_fa, _fb)) goto loc_00029129; /* je: equal / zero */

loc_00029120: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029126u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00029126: ;
    esp = esp + 4;

loc_00029129: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00029130
 * Original: 0x00029130 - 0x0002919A (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029130: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x3C));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002914D; /* je: equal / zero */

loc_0002913D: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002914D; /* je: equal / zero */

loc_00029144: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002914Au); RECOMP_ABI_CALL(0x000967B0u, xml1_guest_powerup_definition_release); /* call 0x000967B0 */

loc_0002914A: ;
    esp = esp + 4;

loc_0002914D: ;
    SET_LO8(edx, MEM8(esi + 0x3C));
    eax = MEM32(esi + 0x30);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM8(esi + 0x3C) = LO8(edx);
    MEM32(esi + 0x2C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002916C; /* je: equal / zero */

loc_00029160: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029166u); RECOMP_ABI_CALL(0x000967B0u, xml1_guest_powerup_definition_release); /* call 0x000967B0 */

loc_00029166: ;
    esp = esp + 4;
    MEM32(esi + 0x30) = edi;

loc_0002916C: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    SET_LO8(eax, LO8(eax) | 2);
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi) = 0xFFFFFFFFu;
    MEM8(esi + 0x3C) = LO8(eax);
    eax = MEM32(0x498D90);
    MEM32(esi + 0x34) = edi;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000291A0
 * Original: 0x000291A0 - 0x000291DE (62 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000291A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000291A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000291A8u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000291A8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000291AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000291AF: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000291BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000291BB: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x44BA20);
    ecx = esi;
    MEM32(0x44BA24) = edx;
    PUSH32(esp, 0x000291DAu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000291DA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000291E0
 * Original: 0x000291E0 - 0x0002920A (42 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000291E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000291E0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00029207; /* jl: less (signed <) */

loc_000291EA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3B (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00029207; /* jge: greater or equal (signed >=) */

loc_000291EF: ;
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 0x1F4;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;

loc_00029207: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00029210
 * Original: 0x00029210 - 0x00029247 (55 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029210: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029243; /* je: equal / zero */

loc_00029219: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00029220u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029220: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00029243; /* je: equal / zero */

loc_0002923F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00029243: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029250
 * Original: 0x00029250 - 0x00029287 (55 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029250: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029283; /* je: equal / zero */

loc_00029259: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00029260u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029260: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00029283; /* je: equal / zero */

loc_0002927F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00029283: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029290
 * Original: 0x00029290 - 0x000292A0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029290(void)
{

loc_00029290: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000292A0
 * Original: 0x000292A0 - 0x000292F3 (83 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000292A0(void)
{

loc_000292A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E20B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    MEM32(esp + 4) = esi;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esp + 0x10) = eax;
    MEM8(esi + 0x3C) = MEM8(esi + 0x3C) & 0xFE;
    PUSH32(esp, 0x000292E1u); RECOMP_ABI_CALL(0x00029130u, sub_00029130); /* call 0x00029130 */

loc_000292E1: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00029300
 * Original: 0x00029300 - 0x0002934A (74 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029300(void)
{

loc_00029300: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E20B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0002932Au); RECOMP_ABI_CALL(0x00029130u, sub_00029130); /* call 0x00029130 */

loc_0002932A: ;
    ecx = esi + 0x10;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0002933Au); RECOMP_ABI_CALL(0x000496D0u, sub_000496D0); /* call 0x000496D0 */

loc_0002933A: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00029350
 * Original: 0x00029350 - 0x0002935E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029350(void)
{

loc_00029350: ;
    eax = 0; /* xor self */
    ecx = ecx + 0x1F4;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00029360
 * Original: 0x00029360 - 0x00029398 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029360: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029377; /* jne: not equal / not zero */

loc_00029367: ;
    eax = 0x3C806C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029372u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00029372: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00029377: ;
    PUSH32(esp, 0x0002937Cu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0002937C: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029393u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00029393: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000293A0
 * Original: 0x000293A0 - 0x000293E1 (65 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000293A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000293A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E231);
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
    if (TEST_Z(_fa, _fb)) goto loc_000293D2; /* je: equal / zero */

loc_000293CD: ;
    PUSH32(esp, 0x000293D2u); RECOMP_ABI_CALL(0x000292A0u, sub_000292A0); /* call 0x000292A0 */

loc_000293D2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000293F0
 * Original: 0x000293F0 - 0x0002942E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000293F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000293F0: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x000293FAu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000293FA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002942A; /* je: equal / zero */

loc_00029400: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00029407u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029407: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_0002942A; /* je: equal / zero */

loc_00029426: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002942A: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029430
 * Original: 0x00029430 - 0x0002946E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029430: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x0002943Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002943A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002946A; /* je: equal / zero */

loc_00029440: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00029447u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029447: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002946A; /* je: equal / zero */

loc_00029466: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002946A: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029470
 * Original: 0x00029470 - 0x000294AE (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029470: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x0002947Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002947A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000294AA; /* je: equal / zero */

loc_00029480: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00029487u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029487: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000294AA; /* je: equal / zero */

loc_000294A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000294AA: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000294B0
 * Original: 0x000294B0 - 0x0002952F (127 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000294B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000294B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1C);
    ecx = esp + 8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x000294C5u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000294C5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002952B; /* je: equal / zero */

loc_000294CB: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000294D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000294D2: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002952B; /* je: equal / zero */

loc_000294F1: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029516; /* je: equal / zero */

loc_000294F8: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), 0xF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029516; /* jne: not equal / not zero */

loc_000294FE: ;
    eax = MEM32(esi + 0x2D8);
    SET_LO8(eax, MEM8(eax + 0x388));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029510; /* jbe: below or equal (unsigned <=) */

loc_0002950E: ;
    SET_LO8(eax, 0xA);

loc_00029510: ;
    MEM8(esi + 0x2C2) = LO8(eax);

loc_00029516: ;
    esi = edi + 0x10;
    ecx = esi;
    PUSH32(esp, 0x00029520u); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_00029520: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002952B; /* je: equal / zero */

loc_00029524: ;
    ecx = esi;
    PUSH32(esp, 0x0002952Bu); RECOMP_ABI_CALL(0x000496D0u, sub_000496D0); /* call 0x000496D0 */

loc_0002952B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00029530
 * Original: 0x00029530 - 0x000295ED (189 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029530: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000295E6; /* je: equal / zero */

loc_00029543: ;
    ecx = MEM32(eax + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000295E6; /* je: equal / zero */

loc_0002954E: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0002955Bu); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002955B: ;
    edx = MEM32(edi + 0x1C);
    ebx = eax;
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x00029569u); RECOMP_ABI_CALL(0x00029470u, sub_00029470); /* call 0x00029470 */

loc_00029569: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00029594; /* je: equal / zero */

loc_00029572: ;
    edi = MEM32(edi + 0x2C);
    ecx = MEM32(edi + 0x58);
    edx = MEM32(edi + 0x5C);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0002958Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002958D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00029594: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000295E6; /* je: equal / zero */

loc_00029598: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(MEM8(eax + 0x72)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x72), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000295D0; /* je: equal / zero */

loc_000295A1: ;
    eax = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000295ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000295AD: ;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x5C);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000295C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000295C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_000295D0: ;
    eax = MEM32(eax + 0x5C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x000295E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000295E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000295F0
 * Original: 0x000295F0 - 0x00029687 (151 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000295F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000295F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    ecx = esp + 0xC;
    ebx = 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002960Bu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002960B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029637; /* je: equal / zero */

loc_00029611: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00029618u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029618: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_00029671; /* jne: not equal / not zero */

loc_00029637: ;
    ecx = MEM32(edi + 0x1C);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 0xC;
    PUSH32(esp, 0x00029647u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00029647: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029680; /* je: equal / zero */

loc_0002964D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00029653u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029653: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029680; /* je: equal / zero */

loc_00029671: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0002967Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002967B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00029680: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00029690
 * Original: 0x00029690 - 0x000296A6 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029690(void)
{

loc_00029690: ;
    PUSH32(esp, 0x00029695u); RECOMP_ABI_CALL(0x000295F0u, sub_000295F0); /* call 0x000295F0 */

loc_00029695: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000296A0u); RECOMP_ABI_CALL(0x001255C0u, sub_001255C0); /* call 0x001255C0 */

loc_000296A0: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000296B0
 * Original: 0x000296B0 - 0x0002978F (223 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000296B0(void)
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

loc_000296B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029789; /* je: equal / zero */

loc_000296BF: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = edi + 0x1C;
    if (TEST_Z(_fa, _fb)) goto loc_00029789; /* je: equal / zero */

loc_000296CD: ;
    ecx = esi;
    PUSH32(esp, 0x000296D4u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000296D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029789; /* je: equal / zero */

loc_000296DC: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x000296E8u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_000296E8: ;
    ebx = eax;
    eax = MEM32(edi + 0x2C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029789; /* je: equal / zero */

loc_000296F8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029789; /* je: equal / zero */

loc_00029700: ;
    edx = MEM32(eax + 0x40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x485808)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x485808) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029789; /* je: equal / zero */

loc_0002970B: ;
    esi = edi + 0x10;
    ecx = esi;
    PUSH32(esp, 0x00029715u); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_00029715: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029789; /* jne: not equal / not zero */

loc_00029719: ;
    ecx = edi;
    PUSH32(esp, 0x00029720u); RECOMP_ABI_CALL(0x000295F0u, sub_000295F0); /* call 0x000295F0 */

loc_00029720: ;
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, eax);
    ecx = ecx + 0x40;
    PUSH32(esp, 0x0002972Cu); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_0002972C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00029734u); RECOMP_ABI_CALL(0x00049720u, sub_00049720); /* call 0x00049720 */

loc_00029734: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029789; /* je: equal / zero */

loc_00029738: ;
    eax = MEM32(edi + 0x2C);
    edi = MEM32(eax + 0x58);
    ecx = eax + 0x44;
    PUSH32(esp, 0x00029746u); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_00029746: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x00029752u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029752: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002975Au); RECOMP_ABI_CALL(0x000495E0u, sub_000495E0); /* call 0x000495E0 */

loc_0002975A: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00029761u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029761: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00029768u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029768: ;
    esi = eax;
    edi = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00029778u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_00029778: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00029781u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_00029781: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edi); PUSH32(esp, 0x00029789u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029789: ;
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
 * sub_00029790
 * Original: 0x00029790 - 0x000297F2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029790: ;
    edx = ecx;
    eax = MEM32(edx + 0x2218);
    eax = MEM32(edx + eax * 4 + 0x2010);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x2220;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x2218);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    MEM32(edx + 0x2218) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000297DC; /* jl: less (signed <) */

loc_000297D2: ;
    MEM32(edx + 0x2218) = 0;

loc_000297DC: ;
    MEM32(edx + 0x221C) = MEM32(edx + 0x221C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x221C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x2230);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x2230) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029800
 * Original: 0x00029800 - 0x000298A4 (164 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029800: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x2000);
    PUSH32(esp, edi);
    edi = ebx + 0x2000;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002983A; /* jne: not equal / not zero */

loc_00029816: ;
    goto loc_00029820;

    /* nop */
    /* nop */

loc_00029820: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00029894; /* jge: greater or equal (signed >=) */

loc_0002982E: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029820; /* je: equal / zero */

loc_0002983A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029847; /* jne: not equal / not zero */

loc_00029841: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_00029847: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029851; /* jne: not equal / not zero */

loc_0002984B: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_00029851: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002985B; /* jne: not equal / not zero */

loc_00029855: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_0002985B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029867; /* jne: not equal / not zero */

loc_0002985F: ;
    /* nop */

loc_00029860: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029860; /* je: equal / zero */

loc_00029867: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00029894; /* jge: greater or equal (signed >=) */

loc_0002986F: ;
    PUSH32(esp, esi);
    esi = ecx;

loc_00029872: ;
    ecx = esi;
    ecx = ecx << 6;
    ecx = ecx + ebx;
    PUSH32(esp, 0x0002987Eu); RECOMP_ABI_CALL(0x00029300u, sub_00029300); /* call 0x00029300 */

loc_0002987E: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00029889u); RECOMP_ABI_CALL(0x000122F0u, sub_000122F0); /* call 0x000122F0 */

loc_00029889: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00029872; /* jl: less (signed <) */

loc_00029893: ;
    POP32(esp, esi);

loc_00029894: ;
    ecx = 0; /* xor self */
    MEM32(edi) = ecx;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = ecx;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000298B0
 * Original: 0x000298B0 - 0x00029912 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000298B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000298B0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x2214) = esi;
    MEM32(ecx + 0x2218) = esi;
    MEM32(ecx + 0x221C) = esi;
    edx = 0; /* xor self */
    goto loc_000298D0;

    /* nop */

loc_000298D0: ;
    eax = MEM32(ecx + 0x2214);
    edi = MEM32(ecx + 0x221C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(ecx + 0x2214) = eax;
    MEM32(ecx + 0x221C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000298FE; /* jl: less (signed <) */

loc_000298F1: ;
    MEM32(ecx + 0x2214) = esi;
    eax = 0x7F;
    goto loc_000298FF;

loc_000298FE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000298FF: ;
    MEM32(ecx + eax * 4 + 0x2010) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000298D0; /* jl: less (signed <) */

loc_0002990F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029920
 * Original: 0x00029920 - 0x000299AD (141 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029920: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    ecx = ecx << 6;
    ecx = ecx + esi;
    PUSH32(esp, 0x00029934u); RECOMP_ABI_CALL(0x00029300u, sub_00029300); /* call 0x00029300 */

loc_00029934: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x2000);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x2000) = ecx;
    MEM32(eax + esi + 0x2220) = MEM32(eax + esi + 0x2220) & edx;
    eax = MEM32(esi + 0x2214);
    edx = MEM32(esi + 0x221C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    MEM32(esi + 0x2214) = eax;
    MEM32(esi + 0x221C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00029993; /* jl: less (signed <) */

loc_00029982: ;
    MEM32(esi + 0x2214) = 0;
    eax = 0x7F;
    goto loc_00029994;

loc_00029993: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00029994: ;
    MEM32(esi + eax * 4 + 0x2010) = edi;
    eax = MEM32(esi + 0x2230);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x2230) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000299B0
 * Original: 0x000299B0 - 0x00029A54 (164 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000299B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000299B0: ;
    raven_xml1_damage_reserve_reset();
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x2000;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x2214) = edi;
    MEM32(esi + 0x2218) = edi;
    MEM32(esi + 0x221C) = edi;
    edx = 0; /* xor self */
    eax = esi + 0x2220;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    ecx = esi;
    MEM32(esi + 0x2230) = edi;
    PUSH32(esp, 0x000299FBu); RECOMP_ABI_CALL(0x000298B0u, sub_000298B0); /* call 0x000298B0 */

loc_000299FB: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x2434) = edi;
    MEM32(esi + 0x2438) = edi;
    ecx = 0x7F;
    edx = 0; /* xor self */

loc_00029A10: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029A10; /* jne: not equal / not zero */

loc_00029A1C: ;
    MEM32(esi + 0x2434) = eax;
    MEM32(esi + 0x2438) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x2234;

loc_00029A30: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x2438);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00029A30; /* jl: less (signed <) */

loc_00029A4F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029A60
 * Original: 0x00029A60 - 0x00029A84 (36 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029A60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 4;
    ecx = edi;
    PUSH32(esp, 0x00029A6Cu); RECOMP_ABI_CALL(0x00029A90u, sub_00029A90); /* call 0x00029A90 */

loc_00029A6C: ;
    esi = 0; /* xor self */
    edi = edi;

loc_00029A70: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00029A78u); RECOMP_ABI_CALL(0x00029040u, sub_00029040); /* call 0x00029040 */

loc_00029A78: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00029A70; /* jl: less (signed <) */

loc_00029A81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029A90
 * Original: 0x00029A90 - 0x00029ABF (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029A90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00029A90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x2230) = 0;
    eax = 0; /* xor self */
    ecx = esi + 0x2220;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    ecx = esi;
    PUSH32(esp, 0x00029AB7u); RECOMP_ABI_CALL(0x00029800u, sub_00029800); /* call 0x00029800 */

loc_00029AB7: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000298B0(); return; /* tail jmp 0x000298B0 */

}

/**
 * sub_00029AC0
 * Original: 0x00029AC0 - 0x00029B09 (73 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029AC0(void)
{

loc_00029AC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E248);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3C8C20;
    ecx = esi + 4;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00029AF3u); RECOMP_ABI_CALL(0x00029800u, sub_00029800); /* call 0x00029800 */

loc_00029AF3: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3C8BF8;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00029B10
 * Original: 0x00029B10 - 0x00029B2E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00029B18u); RECOMP_ABI_CALL(0x00029AC0u, sub_00029AC0); /* call 0x00029AC0 */

loc_00029B18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029B28; /* je: equal / zero */

loc_00029B1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029B25u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00029B25: ;
    esp = esp + 4;

loc_00029B28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00029B30
 * Original: 0x00029B30 - 0x00029B74 (68 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029B30: ;
    SET_LO8(ecx, MEM8(0x485800));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029B6E; /* jne: not equal / not zero */

loc_00029B3F: ;
    edx = MEM32(0x485800);
    edx = edx | eax;
    ecx = 0x4833C4;
    MEM32(0x485800) = edx;
    MEM32(0x4833C0) = 0x3C8C20;
    PUSH32(esp, 0x00029B61u); RECOMP_ABI_CALL(0x000299B0u, sub_000299B0); /* call 0x000299B0 */

loc_00029B61: ;
    PUSH32(esp, 0x359D40);
    PUSH32(esp, 0x00029B6Bu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00029B6B: ;
    esp = esp + 4;

loc_00029B6E: ;
    eax = 0x4833C0;
    esp += 4; return; /* ret */

}

/**
 * sub_00029B80
 * Original: 0x00029B80 - 0x00029B85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029B80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00029B80: ;
    g_seh_ebp = ebp; sub_00029B30(); return; /* tail jmp 0x00029B30 */

}

/**
 * sub_00029B90
 * Original: 0x00029B90 - 0x00029BFC (108 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029B90: ;
    PUSH32(esp, 0x00029B95u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_00029B95: ;
    ecx = MEM32(eax + 0x2234);
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029BA9; /* jne: not equal / not zero */

loc_00029BA6: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_00029BA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00029BB0u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_00029BB0: ;
    esi = eax;
    esi = esi + 4;
    ecx = esi;
    PUSH32(esp, 0x00029BBCu); RECOMP_ABI_CALL(0x00029790u, sub_00029790); /* call 0x00029790 */

loc_00029BBC: ;
    edi = eax;
    eax = eax << 6;
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029BC9u); RECOMP_ABI_CALL(0x000293A0u, sub_000293A0); /* call 0x000293A0 */

loc_00029BC9: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x2000;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + edi * 4 + 0x2234);
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029C00
 * Original: 0x00029C00 - 0x00029C5A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029C06u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_00029C06: ;
    esi = MEM32(esp + 8);
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & esi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029C56; /* jne: not equal / not zero */

loc_00029C1E: ;
    PUSH32(esp, edi);
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00029C56; /* je: equal / zero */

loc_00029C3D: ;
    PUSH32(esp, 0x00029C42u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_00029C42: ;
    ecx = eax;
    eax = MEM32(ecx + 0x2438);
    ecx = ecx + 4;
    eax = eax & esi;
    eax = eax << 6;
    eax = eax + ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00029C56: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029C60
 * Original: 0x00029C60 - 0x00029D0B (171 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029C60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00029C60: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x1FC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029D06; /* je: equal / zero */

loc_00029C73: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    /* nop */

loc_00029C80: ;
    PUSH32(esp, 0x00029C85u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_00029C85: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & edi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029CCD; /* jne: not equal / not zero */

loc_00029C99: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029CCD; /* je: equal / zero */

loc_00029CB6: ;
    PUSH32(esp, 0x00029CBBu); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_00029CBB: ;
    esi = MEM32(eax + 0x2438);
    eax = eax + 4;
    esi = esi & edi;
    esi = esi << 6;
    esi = esi + eax;
    goto loc_00029CCF;

loc_00029CCD: ;
    esi = 0; /* xor self */

loc_00029CCF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029CD9; /* jne: not equal / not zero */

loc_00029CD3: ;
    _fa = (uint32_t)(MEM8(esi + 0x3C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3C), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029CE7; /* jne: not equal / not zero */

loc_00029CD9: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029C80; /* jne: not equal / not zero */

loc_00029CE0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00029CE7: ;
    ecx = esi;
    PUSH32(esp, 0x00029CEEu); RECOMP_ABI_CALL(0x00029530u, sub_00029530); /* call 0x00029530 */

loc_00029CEE: ;
    esi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029D04; /* je: equal / zero */

loc_00029CF5: ;
    ecx = MEM32(esi + 0x5C);
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x108); PUSH32(esp, 0x00029D04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029D04: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00029D06: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00029D10
 * Original: 0x00029D10 - 0x00029DBA (170 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029D10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x1F4;
    eax = 0; /* xor self */
    edx = edi;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    esi = MEM32(ecx + 0x1FC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029DB7; /* je: equal / zero */

loc_00029D30: ;
    PUSH32(esp, ebx);

loc_00029D31: ;
    PUSH32(esp, 0x00029D36u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_00029D36: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & esi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029DB6; /* jne: not equal / not zero */

loc_00029D4A: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), ebx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029DB6; /* je: equal / zero */

loc_00029D67: ;
    PUSH32(esp, 0x00029D6Cu); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_00029D6C: ;
    ecx = MEM32(eax + 0x2438);
    eax = eax + 4;
    ecx = ecx & esi;
    ecx = ecx << 6;
    ecx = ecx + eax;
    if ((ecx == 0)) goto loc_00029DB6; /* je: equal / zero */

loc_00029D7E: ;
    esi = MEM32(ecx);
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029DAD; /* je: equal / zero */

loc_00029D87: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00029DAD; /* jl: less (signed <) */

loc_00029D8F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3B (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00029DAD; /* jge: greater or equal (signed >=) */

loc_00029D94: ;
    eax = ecx;
    ecx = ecx & 0x1F;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(edi + eax * 4);
    eax = edi + eax * 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;

loc_00029DAD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029D31; /* jne: not equal / not zero */

loc_00029DB6: ;
    POP32(esp, ebx);

loc_00029DB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029DC0
 * Original: 0x00029DC0 - 0x00029FA5 (485 bytes, 151 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029DC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00029DC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1FC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00029F9D; /* je: equal / zero */

loc_00029DD8: ;
    ebp = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x1C);

loc_00029DE0: ;
    PUSH32(esp, 0x00029DE5u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_00029DE5: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & edi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029F9D; /* jne: not equal / not zero */

loc_00029DFD: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F9D; /* je: equal / zero */

loc_00029E1E: ;
    PUSH32(esp, 0x00029E23u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_00029E23: ;
    esi = MEM32(eax + 0x2438);
    eax = eax + 4;
    esi = esi & edi;
    esi = esi << 6;
    esi = esi + eax;
    if ((esi == 0)) goto loc_00029F9D; /* je: equal / zero */

loc_00029E39: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029E46: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00029F94; /* ja: above (unsigned >) */

loc_00029E53: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x29FA8); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00029E5Au) goto loc_00029E5A;
    if (_jt == 0x00029E99u) goto loc_00029E99;
    if (_jt == 0x00029ED8u) goto loc_00029ED8;
    if (_jt == 0x00029F0Fu) goto loc_00029F0F;
    if (_jt == 0x00029F21u) goto loc_00029F21;
    if (_jt == 0x00029F40u) goto loc_00029F40;
    if (_jt == 0x00029F52u) goto loc_00029F52;
    if (_jt == 0x00029F64u) goto loc_00029F64;
    if (_jt == 0x00029F78u) goto loc_00029F78;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00029E5A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029E62: ;
    ecx = MEM32(eax + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029E70: ;
    PUSH32(esp, ebp);
    ecx = eax + 4;
    PUSH32(esp, 0x00029E79u); RECOMP_ABI_CALL(0x00094F00u, sub_00094F00); /* call 0x00094F00 */

loc_00029E79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029E81: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x00029E91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029E91: ;
    esp = esp + 0xC;
    goto loc_00029F94;

loc_00029E99: ;
    if (ebp && (MEM32(ebp + 0x18) & 0x10000000u)) goto loc_00029F94;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029EA1: ;
    ecx = MEM32(eax + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029EAF: ;
    PUSH32(esp, ebp);
    ecx = eax + 4;
    PUSH32(esp, 0x00029EB8u); RECOMP_ABI_CALL(0x00094F00u, sub_00094F00); /* call 0x00094F00 */

loc_00029EB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029EC0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0xB0); PUSH32(esp, 0x00029ED0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029ED0: ;
    esp = esp + 0xC;
    goto loc_00029F94;

loc_00029ED8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029EE0: ;
    ecx = MEM32(eax + 0xB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029EEE: ;
    PUSH32(esp, ebp);
    ecx = eax + 4;
    PUSH32(esp, 0x00029EF7u); RECOMP_ABI_CALL(0x00094F00u, sub_00094F00); /* call 0x00094F00 */

loc_00029EF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029EFF: ;
    edx = MEM32(esi + 0x2C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x00029F0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029F0A: ;
    goto loc_00029F91;

loc_00029F0F: ;
    eax = MEM32(eax + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029F19: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00029F1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029F1C: ;
    esp = esp + 4;
    goto loc_00029F94;

loc_00029F21: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM8(ecx + 0x235)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x235), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029F94; /* jne: not equal / not zero */

loc_00029F2E: ;
    eax = MEM32(eax + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029F38: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00029F3Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029F3B: ;
    esp = esp + 4;
    goto loc_00029F94;

loc_00029F40: ;
    eax = MEM32(eax + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029F4A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00029F4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029F4D: ;
    esp = esp + 4;
    goto loc_00029F94;

loc_00029F52: ;
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029F5C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00029F5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029F5F: ;
    esp = esp + 4;
    goto loc_00029F94;

loc_00029F64: ;
    eax = MEM32(eax + 0xAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029F6E: ;
    edx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00029F76u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029F76: ;
    goto loc_00029F91;

loc_00029F78: ;
    ecx = MEM32(eax + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029F94; /* je: equal / zero */

loc_00029F82: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00029F91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00029F91: ;
    esp = esp + 8;

loc_00029F94: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029DE0; /* jne: not equal / not zero */

loc_00029F9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00029FD0
 * Original: 0x00029FD0 - 0x0002A203 (563 bytes, 167 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029FD0(void)
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

loc_00029FD0: ;
    esp = esp - 0x18;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1FC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029FE8; /* jne: not equal / not zero */

loc_00029FDF: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

loc_00029FE8: ;
    eax = MEM32(ecx + 0x1F8);
    edx = eax;
    PUSH32(esp, ebx);
    edx = edx >> 1;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A02E; /* jne: not equal / not zero */

loc_00029FFA: ;
    edx = eax;
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A02E; /* jne: not equal / not zero */

loc_0002A004: ;
    edx = MEM32(ecx + 0x1F4);
    edx = edx >> 0x1F;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A02E; /* jne: not equal / not zero */

loc_0002A012: ;
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A02E; /* jne: not equal / not zero */

loc_0002A019: ;
    ecx = eax;
    ecx = ecx >> 3;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A02E; /* jne: not equal / not zero */

loc_0002A023: ;
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A1F9; /* je: equal / zero */

loc_0002A02E: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    PUSH32(esp, esi);

loc_0002A064: ;
    PUSH32(esp, 0x0002A069u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A069: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & edi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A158; /* jne: not equal / not zero */

loc_0002A081: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A158; /* je: equal / zero */

loc_0002A0A2: ;
    PUSH32(esp, 0x0002A0A7u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A0A7: ;
    esi = MEM32(eax + 0x2438);
    eax = eax + 4;
    esi = esi & edi;
    esi = esi << 6;
    esi = esi + eax;
    if ((esi == 0)) goto loc_0002A158; /* je: equal / zero */

loc_0002A0BD: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_0002A14F; /* je: equal / zero */

loc_0002A0CA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A0DB; /* je: equal / zero */

loc_0002A0CE: ;
    PUSH32(esp, ebp);
    ecx = eax + 4;
    PUSH32(esp, 0x0002A0D7u); RECOMP_ABI_CALL(0x00094F00u, sub_00094F00); /* call 0x00094F00 */

loc_0002A0D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A14F; /* je: equal / zero */

loc_0002A0DB: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    esi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_0002A10C; /* je: equal / zero */

loc_0002A0EA: ;
    eax = eax - 0x21;
    if ((eax == 0)) goto loc_0002A0FF; /* je: equal / zero */

loc_0002A0EF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002A14F; /* jne: not equal / not zero */

loc_0002A0F2: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x2C); /* fmul dword ptr [esi + 0x2c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0002A14D;

loc_0002A0FF: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x2C); /* fadd dword ptr [esi + 0x2c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0002A14D;

loc_0002A10C: ;
    eax = eax + 0xFFFFFFE1u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002A14F; /* ja: above (unsigned >) */

loc_0002A114: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2A204); /* switch: 6 entries, 5 targets */
    if (_jt == 0x0002A11Bu) goto loc_0002A11B;
    if (_jt == 0x0002A128u) goto loc_0002A128;
    if (_jt == 0x0002A135u) goto loc_0002A135;
    if (_jt == 0x0002A142u) goto loc_0002A142;
    if (_jt == 0x0002A14Fu) goto loc_0002A14F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002A11B: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x2C); /* fadd dword ptr [esi + 0x2c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0002A14D;

loc_0002A128: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x2C); /* fmul dword ptr [esi + 0x2c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0002A14D;

loc_0002A135: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x2C); /* fadd dword ptr [esi + 0x2c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0002A14D;

loc_0002A142: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x2C); /* fmul dword ptr [esi + 0x2c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002A14D: ;
    SET_LO8(ebx, 1);

loc_0002A14F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A064; /* jne: not equal / not zero */

loc_0002A158: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0002A1E4; /* je: equal / zero */

loc_0002A161: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    MEM32(esp + 0x30) = edx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, 0x0002A17Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0002A17A: ;
    MEM16(ebp + 8) = LO16(eax);
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A1C7; /* jne: not equal / not zero */

loc_0002A184: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A1E4; /* jne: not equal / not zero */

loc_0002A199: ;
    PUSH32(esp, 0x0002A19Eu); RECOMP_ABI_CALL(0x000B8550u, xml1_guest_values_manager_get); /* call 0x000B8550 */

loc_0002A19E: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xA);
    edx = MEM32(eax);
    MEM32(esp + 0x30) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C8C2C);
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    ecx = eax;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002A1BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002A1BC: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002A1E4; /* jp: parity */

loc_0002A1C7: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xA);
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0002A1E0u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0002A1E0: ;
    MEM16(ebp + 0xA) = LO16(eax);

loc_0002A1E4: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0002A1F9; /* je: equal / zero */

loc_0002A1ED: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002A1F9: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002A220
 * Original: 0x0002A220 - 0x0002A3F6 (470 bytes, 160 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A220(void)
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

loc_0002A220: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    eax = ecx;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 1 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM8(esp + 0xF) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0002A249; /* jne: not equal / not zero */

loc_0002A23A: ;
    MEM32(ebp) = 0x3F800000;
    MEM32(ebx) = 0x3F800000;
    goto loc_0002A256;

loc_0002A249: ;
    MEM32(ebp) = 0;
    MEM32(ebx) = 0;

loc_0002A256: ;
    edi = MEM32(eax + 0x1FC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A26A; /* jne: not equal / not zero */

loc_0002A261: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

loc_0002A26A: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_S(_fas, _fbs)) goto loc_0002A2A0; /* jl: less (signed <) */

loc_0002A273: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3B (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002A2A0; /* jge: greater or equal (signed >=) */

loc_0002A278: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x1F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x1F4), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A2A0; /* jne: not equal / not zero */

loc_0002A295: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

loc_0002A2A0: ;
    PUSH32(esp, 0x0002A2A5u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A2A5: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & edi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A3EA; /* jne: not equal / not zero */

loc_0002A2BD: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A3EA; /* je: equal / zero */

loc_0002A2DE: ;
    PUSH32(esp, 0x0002A2E3u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A2E3: ;
    esi = MEM32(eax + 0x2438);
    eax = eax + 4;
    esi = esi & edi;
    esi = esi << 6;
    esi = esi + eax;
    if ((esi == 0)) goto loc_0002A3EA; /* je: equal / zero */

loc_0002A2F9: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A3DF; /* je: equal / zero */

loc_0002A304: ;
    ecx = MEM32(eax + 0x6C);
    edx = MEM32(esp + 0x28);
    ecx = ecx << 0x14;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x1C) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A3DF; /* jne: not equal / not zero */

loc_0002A319: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A3DF; /* jne: not equal / not zero */

loc_0002A327: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A340; /* je: equal / zero */

loc_0002A32F: ;
    PUSH32(esp, ecx);
    ecx = eax + 4;
    PUSH32(esp, 0x0002A338u); RECOMP_ABI_CALL(0x00094F00u, sub_00094F00); /* call 0x00094F00 */

loc_0002A338: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A3DF; /* je: equal / zero */

loc_0002A340: ;
    eax = MEM32(esp + 0x28);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002A3C4; /* je: equal / zero */

loc_0002A347: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002A391; /* je: equal / zero */

loc_0002A34A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002A363; /* je: equal / zero */

loc_0002A34D: ;
    eax = MEM32(esi + 0x2C);
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x2C);
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx); /* fadd dword ptr [ebx] */
    goto loc_0002A3D8;

loc_0002A363: ;
    ecx = MEM32(esi + 0x2C);
    fp_push(MEMF(ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002A378; /* jp: parity */

loc_0002A373: ;
    fp_push(MEMF(ebp)); /* fld float */
    goto loc_0002A37B;

loc_0002A378: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */

loc_0002A37B: ;
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x2C);
    fp_push(MEMF(ebx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002A3BF; /* jp: parity */

loc_0002A38D: ;
    fp_push(MEMF(ebx)); /* fld float */
    goto loc_0002A3D8;

loc_0002A391: ;
    ecx = MEM32(esi + 0x2C);
    fp_push(MEMF(ebp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A3A6; /* jne: not equal / not zero */

loc_0002A3A1: ;
    fp_push(MEMF(ebp)); /* fld float */
    goto loc_0002A3A9;

loc_0002A3A6: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */

loc_0002A3A9: ;
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x2C);
    fp_push(MEMF(ebx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A3BF; /* jne: not equal / not zero */

loc_0002A3BB: ;
    fp_push(MEMF(ebx)); /* fld float */
    goto loc_0002A3D8;

loc_0002A3BF: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    goto loc_0002A3D8;

loc_0002A3C4: ;
    edx = MEM32(esi + 0x2C);
    fp_push(MEMF(edx + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(ebp); /* fmul dword ptr [ebp] */
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x2C);
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(ebx); /* fmul dword ptr [ebx] */

loc_0002A3D8: ;
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(esp + 0x13) = 1;

loc_0002A3DF: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A2A0; /* jne: not equal / not zero */

loc_0002A3EA: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002A400
 * Original: 0x0002A400 - 0x0002A4AE (174 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A400(void)
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

loc_0002A400: ;
    const uint32_t stat_actor=ecx,stat_type=MEM32(esp+4),
        stat_output=MEM32(esp+8),stat_record=MEM32(esp+12),stat_mode=MEM32(esp+16);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0002A419; /* jne: not equal / not zero */

loc_0002A411: ;
    MEM32(edi) = 0x3F800000;
    goto loc_0002A41F;

loc_0002A419: ;
    MEM32(edi) = 0;

loc_0002A41F: ;
    _fa = (uint32_t)(MEM32(edx + 0x1FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x1FC), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A42F; /* jne: not equal / not zero */

loc_0002A428: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    if(raven_xml1_stat_affecters(stat_actor,stat_type,stat_output,stat_record,stat_mode)) SET_LO8(eax,1);
    esp += 20; return; /* ret 16 */

loc_0002A42F: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    if (TEST_S(_fas, _fbs)) goto loc_0002A464; /* jl: less (signed <) */

loc_0002A438: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002A464; /* jge: greater or equal (signed >=) */

loc_0002A43D: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + ecx * 4 + 0x1F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + ecx * 4 + 0x1F4), ebx (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A464; /* jne: not equal / not zero */

loc_0002A45C: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    if(raven_xml1_stat_affecters(stat_actor,stat_type,stat_output,stat_record,stat_mode)) SET_LO8(eax,1);
    esp += 20; return; /* ret 16 */

loc_0002A464: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0x0002A47Cu); RECOMP_ABI_CALL(0x0002A220u, sub_0002A220); /* call 0x0002A220 */

loc_0002A47C: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    SET_LO8(ebx, LO8(eax));
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A4A4; /* jne: not equal / not zero */

loc_0002A48F: ;
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0002A496u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_0002A496: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x14); /* fadd dword ptr [esp + 0x14] */

loc_0002A4A4: ;
    SET_LO8(eax, LO8(ebx));
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    if(raven_xml1_stat_affecters(stat_actor,stat_type,stat_output,stat_record,stat_mode)) SET_LO8(eax,1);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002A4B0
 * Original: 0x0002A4B0 - 0x0002A5D8 (296 bytes, 108 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A4B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A4B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = ecx;
    ecx = MEM32(esp + 0x1C);
    SET_LO8(ebx, 0); /* xor self */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0002A4C7; /* jne: not equal / not zero */

loc_0002A4C2: ;
    ebp = 1;

loc_0002A4C7: ;
    edi = MEM32(eax + 0x1FC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A4DA; /* jne: not equal / not zero */

loc_0002A4D2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_0002A4DA: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_S(_fas, _fbs)) goto loc_0002A510; /* jl: less (signed <) */

loc_0002A4E3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3B (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002A510; /* jge: greater or equal (signed >=) */

loc_0002A4E8: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x1F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x1F4), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A510; /* jne: not equal / not zero */

loc_0002A505: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

loc_0002A510: ;
    PUSH32(esp, 0x0002A515u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A515: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & edi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A5C9; /* jne: not equal / not zero */

loc_0002A52D: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A5C9; /* je: equal / zero */

loc_0002A54A: ;
    PUSH32(esp, 0x0002A54Fu); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A54F: ;
    esi = MEM32(eax + 0x2438);
    eax = eax + 4;
    esi = esi & edi;
    esi = esi << 6;
    esi = esi + eax;
    if ((esi == 0)) goto loc_0002A5C9; /* je: equal / zero */

loc_0002A561: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A5BE; /* je: equal / zero */

loc_0002A568: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A57D; /* je: equal / zero */

loc_0002A570: ;
    PUSH32(esp, ecx);
    ecx = eax + 4;
    PUSH32(esp, 0x0002A579u); RECOMP_ABI_CALL(0x00094F00u, sub_00094F00); /* call 0x00094F00 */

loc_0002A579: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A5BE; /* je: equal / zero */

loc_0002A57D: ;
    eax = MEM32(esi + 0x2C);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A5BE; /* jne: not equal / not zero */

loc_0002A58A: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A59C; /* jne: not equal / not zero */

loc_0002A593: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x74);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    goto loc_0002A5BC;

loc_0002A59C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x74);
    if (CMP_NE(_fa, _fb)) goto loc_0002A5AD; /* jne: not equal / not zero */

loc_0002A5A5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0002A5BC; /* jg: greater (signed >) */

loc_0002A5A9: ;
    ebp = eax;
    goto loc_0002A5BC;

loc_0002A5AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A5BA; /* jne: not equal / not zero */

loc_0002A5B2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002A5BC; /* jl: less (signed <) */

loc_0002A5B6: ;
    ebp = eax;
    goto loc_0002A5BC;

loc_0002A5BA: ;
    ebp = ebp + eax;

loc_0002A5BC: ;
    SET_LO8(ebx, 1);

loc_0002A5BE: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A510; /* jne: not equal / not zero */

loc_0002A5C9: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, esi);
    POP32(esp, edi);
    MEM32(ecx) = ebp;
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0002A5E0
 * Original: 0x0002A5E0 - 0x0002A62A (74 bytes, 24 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5E0(void)
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

loc_0002A5E0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002A5F9u); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_0002A5F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A625; /* je: equal / zero */

loc_0002A5FD: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp = esp - 8;
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002A612u); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_0002A612: ;
    esp = esp + 8;
    PUSH32(esp, 0x0002A61Au); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0002A61A: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 20; return; /* ret 16 */

loc_0002A625: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002A630
 * Original: 0x0002A630 - 0x0002A70B (219 bytes, 83 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A630(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A630: ;
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1FC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A644; /* jne: not equal / not zero */

loc_0002A63E: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_0002A644: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_S(_fas, _fbs)) goto loc_0002A678; /* jl: less (signed <) */

loc_0002A64E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3B (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002A678; /* jge: greater or equal (signed >=) */

loc_0002A653: ;
    ecx = ebx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + ecx * 4 + 0x1F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + ecx * 4 + 0x1F4), edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A678; /* jne: not equal / not zero */

loc_0002A672: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_0002A678: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    /* nop */

loc_0002A680: ;
    PUSH32(esp, 0x0002A685u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A685: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & edi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A6F3; /* jne: not equal / not zero */

loc_0002A699: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A6F3; /* je: equal / zero */

loc_0002A6B6: ;
    PUSH32(esp, 0x0002A6BBu); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A6BB: ;
    esi = MEM32(eax + 0x2438);
    eax = eax + 4;
    esi = esi & edi;
    esi = esi << 6;
    esi = esi + eax;
    if ((esi == 0)) goto loc_0002A6F3; /* je: equal / zero */

loc_0002A6CD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A6E1; /* je: equal / zero */

loc_0002A6D1: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, ebp);
    ecx = ecx + 4;
    PUSH32(esp, 0x0002A6DDu); RECOMP_ABI_CALL(0x00094F00u, sub_00094F00); /* call 0x00094F00 */

loc_0002A6DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A6EC; /* je: equal / zero */

loc_0002A6E1: ;
    edx = MEM32(esi + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A6FC; /* je: equal / zero */

loc_0002A6EC: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A680; /* jne: not equal / not zero */

loc_0002A6F3: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_0002A6FC: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, ebp);
    MEM32(ecx) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002A710
 * Original: 0x0002A710 - 0x0002A725 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A710(void)
{

loc_0002A710: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002A722u); RECOMP_ABI_CALL(0x00029C60u, sub_00029C60); /* call 0x00029C60 */

loc_0002A722: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002A730
 * Original: 0x0002A730 - 0x0002A7AB (123 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A730(void)
{
    int _flags = 0; /* fallback flag var */

loc_0002A730: ;
    raven_xml1_powerup_runtime_retire(MEM32(esp + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002A738u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A738: ;
    ecx = MEM32(eax + 0x2438);
    ebx = MEM32(esp + 0x10);
    eax = eax + 4;
    ecx = ecx & ebx;
    ecx = ecx << 6;
    eax = ecx + eax + 0x3C;
    MEM8(eax) = MEM8(eax) & 0xFD;
    PUSH32(esp, 0x0002A756u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A756: ;
    esi = eax;
    edi = MEM32(esi + 0x2438);
    esi = esi + 4;
    edi = edi & ebx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002A76Bu); RECOMP_ABI_CALL(0x00029920u, sub_00029920); /* call 0x00029920 */

loc_0002A76B: ;
    ecx = MEM32(esi + 0x2438);
    eax = MEM32(esi + edi * 4 + 0x2234);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = eax + edx;
    MEM32(esi + edi * 4 + 0x2234) = eax;
    if (((int32_t)eax >= 0)) goto loc_0002A7A7; /* jns: not sign (positive) */

loc_0002A78A: ;
    MEM32(esi + edi * 4 + 0x2234) = edi;
    ecx = MEM32(esi + 0x2438);
    eax = 1;
    eax = eax << LO8(ecx);
    eax = eax | edi;
    MEM32(esi + edi * 4 + 0x2234) = eax;

loc_0002A7A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002A7B0
 * Original: 0x0002A7B0 - 0x0002AA84 (724 bytes, 212 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7B0(void)
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

loc_0002A7B0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x14));
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0x3C));
    SET_LO8(edx, MEM8(ebp + 0x3C));
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(ebp + 0x1C) = edi;
    MEM32(ebp + 0x2C) = ecx;
    MEM8(ebp + 0x3C) = LO8(edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x76);
    MEM32(ebp + 0x18) = eax;
    MEM32(ebp + 0xC) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(ebp + 4) = edx;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A81D; /* jne: not equal / not zero */

loc_0002A7FB: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A81D; /* jne: not equal / not zero */

loc_0002A808: ;
    esi = ecx;
    PUSH32(esp, 0x0002A80Fu); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_0002A80F: ;
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002A81D: ;
    raven_xml1_harming_life(ebp);
    ecx = MEM32(ebp + 0x2C);
    SET_LO8(eax, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x32 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A839; /* je: equal / zero */

loc_0002A827: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x33) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x33 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A839; /* je: equal / zero */

loc_0002A82B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x34 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A839; /* je: equal / zero */

loc_0002A82F: ;
    _fa = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x34), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AA5B; /* jne: not equal / not zero */

loc_0002A839: ;
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x0002A846u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002A846: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AA5B; /* je: equal / zero */

loc_0002A850: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002A856u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002A856: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AA5B; /* je: equal / zero */

loc_0002A878: ;
    esi = MEM32(edi + 0x1FC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = 0x3F800000;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A96B; /* je: equal / zero */

loc_0002A88F: ;
    ecx = MEM32(edi + 0x1F4);
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A96B; /* je: equal / zero */

loc_0002A8A1: ;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;

loc_0002A8B1: ;
    PUSH32(esp, 0x0002A8B6u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A8B6: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & esi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A93D; /* jne: not equal / not zero */

loc_0002A8CA: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), ebx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A93D; /* je: equal / zero */

loc_0002A8E7: ;
    PUSH32(esp, 0x0002A8ECu); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A8EC: ;
    ecx = MEM32(eax + 0x2438);
    eax = eax + 4;
    ecx = ecx & esi;
    ecx = ecx << 6;
    ecx = ecx + eax;
    if ((ecx == 0)) goto loc_0002A93D; /* je: equal / zero */

loc_0002A8FE: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002A932; /* je: equal / zero */

loc_0002A905: ;
    edx = MEM32(eax + 0x6C);
    edx = edx & 0xF00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A932; /* jne: not equal / not zero */

loc_0002A916: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x1E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), 0x1E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A932; /* jne: not equal / not zero */

loc_0002A91C: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x2C); /* fmul dword ptr [eax + 0x2c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 0x30); /* fmul dword ptr [eax + 0x30] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002A932: ;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A8B1; /* jne: not equal / not zero */

loc_0002A93D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002A963; /* jne: not equal / not zero */

loc_0002A94C: ;
    PUSH32(esp, 0x0002A951u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_0002A951: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002A963: ;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x14) = eax;

loc_0002A96B: ;
    esi = MEM32(edi + 0x1FC);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AA4D; /* je: equal / zero */

loc_0002A980: ;
    ecx = MEM32(edi + 0x1F4);
    ecx = ecx >> 0x1E;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AA4D; /* je: equal / zero */

loc_0002A992: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x18) = 0;

loc_0002A9A4: ;
    PUSH32(esp, 0x0002A9A9u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A9A9: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & esi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AA23; /* jne: not equal / not zero */

loc_0002A9BD: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AA23; /* je: equal / zero */

loc_0002A9DA: ;
    PUSH32(esp, 0x0002A9DFu); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002A9DF: ;
    ecx = MEM32(eax + 0x2438);
    eax = eax + 4;
    ecx = ecx & esi;
    ecx = ecx << 6;
    ecx = ecx + eax;
    if ((ecx == 0)) goto loc_0002AA23; /* je: equal / zero */

loc_0002A9F1: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002AA1C; /* je: equal / zero */

loc_0002A9F8: ;
    edx = MEM32(eax + 0x6C);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AA1C; /* jne: not equal / not zero */

loc_0002AA00: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(0x1E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), 0x1E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AA1C; /* jne: not equal / not zero */

loc_0002AA06: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 0x2C); /* fadd dword ptr [eax + 0x2c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 0x30); /* fadd dword ptr [eax + 0x30] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002AA1C: ;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A9A4; /* jne: not equal / not zero */

loc_0002AA23: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AA49; /* jne: not equal / not zero */

loc_0002AA32: ;
    PUSH32(esp, 0x0002AA37u); RECOMP_ABI_CALL(0x00123330u, xml1_guest_random_float); /* call 0x00123330 */

loc_0002AA37: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() * fp_top(); fp_pop(); /* fmulp st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002AA49: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */

loc_0002AA4D: ;
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    MEMF(ebp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_0002AA5B: ;
    fp_push(MEMF(ebp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002AA7D; /* jne: not equal / not zero */

loc_0002AA6B: ;
    PUSH32(esp, 0x0002AA70u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002AA70: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0002AA7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002AA7A: ;
    MEMF(ebp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002AA7D: ;
    raven_xml1_powerup_node_begin(ebp);
    raven_xml1_powerup_effects_begin(ebp);
    raven_xml1_scale_affecter_changed(ebp, 0);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}





/**
 * sub_0002B100
 * Original: 0x0002B100 - 0x0002B1B2 (178 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002B100(void)
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

loc_0002B100: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1FC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B1AD; /* je: equal / zero */

loc_0002B113: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    /* nop */

loc_0002B120: ;
    PUSH32(esp, 0x0002B125u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002B125: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & esi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B1AB; /* jne: not equal / not zero */

loc_0002B139: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), ebx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B1AB; /* je: equal / zero */

loc_0002B156: ;
    PUSH32(esp, 0x0002B15Bu); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002B15B: ;
    ecx = MEM32(eax + 0x2438);
    eax = eax + 4;
    ecx = ecx & esi;
    ecx = ecx << 6;
    ecx = ecx + eax;
    if ((ecx == 0)) goto loc_0002B1AB; /* je: equal / zero */

loc_0002B16D: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0002B1A2; /* je: equal / zero */

loc_0002B176: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B183; /* je: equal / zero */

loc_0002B17B: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B1A2; /* jne: not equal / not zero */

loc_0002B183: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x18), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B19A; /* je: equal / zero */

loc_0002B18A: ;
    fp_push(MEMF(eax + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B1A2; /* jne: not equal / not zero */

loc_0002B19A: ;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0002B1A2u); RECOMP_ABI_CALL(0x0002AF30u, xml1_guest_actor_remove_powerup); /* call 0x0002AF30 */

loc_0002B1A2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B120; /* jne: not equal / not zero */

loc_0002B1AB: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_0002B1AD: ;
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
 * sub_0002B1C0
 * Original: 0x0002B1C0 - 0x0002B250 (144 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B1C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B1C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x1FC);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B1DA; /* jne: not equal / not zero */

loc_0002B1D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002B1DA: ;
    PUSH32(esp, ebp);
    goto loc_0002B1E0;

    /* nop */

loc_0002B1E0: ;
    PUSH32(esp, 0x0002B1E5u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002B1E5: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & esi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B247; /* jne: not equal / not zero */

loc_0002B1F9: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), ebp (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B247; /* je: equal / zero */

loc_0002B216: ;
    PUSH32(esp, 0x0002B21Bu); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002B21B: ;
    ecx = MEM32(eax + 0x2438);
    eax = eax + 4;
    ecx = ecx & esi;
    ecx = ecx << 6;
    ecx = ecx + eax;
    if ((ecx == 0)) goto loc_0002B247; /* je: equal / zero */

loc_0002B22D: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), eax (32-bit) */
    esi = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0002B242; /* jne: not equal / not zero */

loc_0002B238: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0002B240u); RECOMP_ABI_CALL(0x0002AF30u, xml1_guest_actor_remove_powerup); /* call 0x0002AF30 */

loc_0002B240: ;
    SET_LO8(ebx, 1);

loc_0002B242: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B1E0; /* jne: not equal / not zero */

loc_0002B247: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002B250
 * Original: 0x0002B250 - 0x0002B267 (23 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B250(void)
{

loc_0002B250: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002B264u); RECOMP_ABI_CALL(0x0002A630u, sub_0002A630); /* call 0x0002A630 */

loc_0002B264: ;
    esp += 12; return; /* ret 8 */

}



/**
 * sub_0002B560
 * Original: 0x0002B560 - 0x0002B596 (54 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B560: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002B592; /* jle: less or equal (signed <=) */

loc_0002B56A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_G(_fas & _fbs, 0)) goto loc_0002B592; /* jg: greater (signed >) */

loc_0002B572: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0002B57Fu); RECOMP_ABI_CALL(0x00029430u, sub_00029430); /* call 0x00029430 */

loc_0002B57F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B58E; /* je: equal / zero */

loc_0002B586: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0002B58Eu); RECOMP_ABI_CALL(0x0002AF30u, xml1_guest_actor_remove_powerup); /* call 0x0002AF30 */

loc_0002B58E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002B592: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B5A0
 * Original: 0x0002B5A0 - 0x0002B64B (171 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B5A0(void)
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

loc_0002B5A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1FC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B645; /* je: equal / zero */

loc_0002B5B2: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B645; /* je: equal / zero */

loc_0002B5BE: ;
    edi = edi;

loc_0002B5C0: ;
    PUSH32(esp, 0x0002B5C5u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002B5C5: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & edi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B645; /* jne: not equal / not zero */

loc_0002B5D9: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B645; /* je: equal / zero */

loc_0002B5F6: ;
    PUSH32(esp, 0x0002B5FBu); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002B5FB: ;
    esi = MEM32(eax + 0x2438);
    eax = eax + 4;
    esi = esi & edi;
    esi = esi << 6;
    esi = esi + eax;
    if ((esi == 0)) goto loc_0002B645; /* je: equal / zero */

loc_0002B60D: ;
    eax = MEM32(esi + 0x2C);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B63A; /* jne: not equal / not zero */

loc_0002B620: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    PUSH32(esp, 0);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0002B63Au); RECOMP_ABI_CALL(0x0002AA90u, xml1_guest_actor_attach_powerup); /* call 0x0002AA90 */

loc_0002B63A: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B5C0; /* jne: not equal / not zero */

loc_0002B645: ;
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
 * sub_0002B650
 * Original: 0x0002B650 - 0x0002B6E2 (146 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B650: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x1FC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B6DD; /* je: equal / zero */

loc_0002B65F: ;
    PUSH32(esp, ebp);

loc_0002B660: ;
    PUSH32(esp, 0x0002B665u); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002B665: ;
    edx = MEM32(eax + 0x2438);
    eax = eax + 4;
    edx = edx & esi;
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2234)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4 + 0x2234), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B6C2; /* jne: not equal / not zero */

loc_0002B679: ;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x2220)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x2220), ebp (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B6C2; /* je: equal / zero */

loc_0002B696: ;
    PUSH32(esp, 0x0002B69Bu); RECOMP_ABI_CALL(0x00029B30u, sub_00029B30); /* call 0x00029B30 */

loc_0002B69B: ;
    ecx = MEM32(eax + 0x2438);
    eax = eax + 4;
    ecx = ecx & esi;
    ecx = ecx << 6;
    ecx = ecx + eax;
    if ((ecx == 0)) goto loc_0002B6C2; /* je: equal / zero */

loc_0002B6AD: ;
    esi = MEM32(ecx);
    PUSH32(esp, 0x0002B6B4u); RECOMP_ABI_CALL(0x0002B270u, xml1_guest_active_powerup_share); /* call 0x0002B270 */

loc_0002B6B4: ;
    _fa = (uint32_t)(MEM32(edi + 0x1FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1FC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B6DC; /* je: equal / zero */

loc_0002B6BD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B660; /* jne: not equal / not zero */

loc_0002B6C2: ;
    _fa = (uint32_t)(MEM32(edi + 0x1FC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1FC), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B6DC; /* je: equal / zero */

loc_0002B6CB: ;
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x44BA1C);
    ecx = edi;
    PUSH32(esp, 0x0002B6DCu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002B6DC: ;
    POP32(esp, ebp);

loc_0002B6DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002B6F0
 * Original: 0x0002B6F0 - 0x0002B6FE (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B6F0(void)
{

loc_0002B6F0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002B6FBu); RECOMP_ABI_CALL(0x0002B650u, sub_0002B650); /* call 0x0002B650 */

loc_0002B6FB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002B700
 * Original: 0x0002B700 - 0x0002B71D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0002B700(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0002B700: ;
    PUSH32(esp, 0x0002B705u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002B705: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0002B70Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B70F: ;
    fp_top() = fp_top() + MEMF(0x3C8C60); /* fadd dword ptr [0x3c8c60] */
    eax = MEM32(esp + 4);
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}



/**
 * sub_0002B810
 * Original: 0x0002B810 - 0x0002B84E (62 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B810: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x0002B81Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002B81A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B84A; /* je: equal / zero */

loc_0002B820: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002B827u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B827: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002B84A; /* je: equal / zero */

loc_0002B846: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002B84A: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B850
 * Original: 0x0002B850 - 0x0002B8B5 (101 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B850: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002B866u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002B866: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B8B2; /* je: equal / zero */

loc_0002B86C: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002B873u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B873: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002B8B2; /* je: equal / zero */

loc_0002B892: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B8B2; /* je: equal / zero */

loc_0002B899: ;
    eax = MEM32(eax + 0x8C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002B8B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B8B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B8C0
 * Original: 0x0002B8C0 - 0x0002B925 (101 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B8C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002B8D6u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002B8D6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B922; /* je: equal / zero */

loc_0002B8DC: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002B8E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B8E3: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002B922; /* je: equal / zero */

loc_0002B902: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B922; /* je: equal / zero */

loc_0002B909: ;
    eax = MEM32(eax + 0x80);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002B922u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B922: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B930
 * Original: 0x0002B930 - 0x0002B9AB (123 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B9A7; /* je: equal / zero */

loc_0002B93B: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B9A7; /* je: equal / zero */

loc_0002B945: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0002B952u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002B952: ;
    esi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B9A7; /* je: equal / zero */

loc_0002B95B: ;
    PUSH32(esp, 0x0002B960u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0002B960: ;
    edx = MEM32(eax);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C8C64);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002B972u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B972: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x84); PUSH32(esp, 0x0002B97Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B97B: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B99F; /* je: equal / zero */

loc_0002B982: ;
    eax = MEM32(eax + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B99F; /* je: equal / zero */

loc_0002B98C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002B99Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B99F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002B9A7u); RECOMP_ABI_CALL(0x0002AF30u, xml1_guest_actor_remove_powerup); /* call 0x0002AF30 */

loc_0002B9A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B9B0
 * Original: 0x0002B9B0 - 0x0002BB46 (406 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B9B0(void)
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

loc_0002B9B0: ;
    esp = esp - 0x10C;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x108) = eax;
    eax = MEM32(esp + 0x110);
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 4) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x0002B9DAu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002B9DA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BB32; /* je: equal / zero */

loc_0002B9E4: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002B9EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002B9EB: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_0002BB32; /* je: equal / zero */

loc_0002BA0E: ;
    eax = MEM32(esp + 0x118);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002BB32; /* jne: not equal / not zero */

loc_0002BA20: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(esi + 0x410)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002BA59; /* jnp: not parity */

loc_0002BA35: ;
    ecx = MEM32(esi + 0x410);
    MEM32(esp + 4) = ecx;
    PUSH32(esp, 0x0002BA44u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002BA44: ;
    fp_top() = fp_top() - MEMF(esp + 4); /* fsub dword ptr [esp + 4] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C837C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c837c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002BB32; /* jne: not equal / not zero */

loc_0002BA59: ;
    eax = MEM32(esi + 0x47C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002BB32; /* jle: less or equal (signed <=) */

loc_0002BA67: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x47C) = eax;
    ecx = esi;
    PUSH32(esp, 1);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002BA9C; /* jle: less or equal (signed <=) */

loc_0002BA76: ;
    PUSH32(esp, 0x4F3384);
    PUSH32(esp, 0x0002BA80u); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_0002BA80: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002BA88u); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_0002BA88: ;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x0002BA95u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0002BA95: ;
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

loc_0002BA9C: ;
    PUSH32(esp, 0x4F33B4);
    PUSH32(esp, 0x0002BAA6u); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_0002BAA6: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002BAAEu); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_0002BAAE: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0002BAB7u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_0002BAB7: ;
    ecx = eax;
    PUSH32(esp, 0x0002BABEu); RECOMP_ABI_CALL(0x000ED320u, sub_000ED320); /* call 0x000ED320 */

loc_0002BABE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BB32; /* je: equal / zero */

loc_0002BAC2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002BACCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BACC: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BB32; /* je: equal / zero */

loc_0002BAD1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002BADBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BADB: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002BAE2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BAE2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BB32; /* je: equal / zero */

loc_0002BAE6: ;
    PUSH32(esp, 3);
    ecx = esi;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0002BAF4u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_0002BAF4: ;
    ecx = eax;
    PUSH32(esp, 0x0002BAFBu); RECOMP_ABI_CALL(0x000ED320u, sub_000ED320); /* call 0x000ED320 */

loc_0002BAFB: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C8C80);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002BB0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BB0C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002BB12u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0002BB12: ;
    eax = MEM32(esi);
    esp = esp + 0xC;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002BB1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BB1F: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002BB26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BB26: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002BB32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BB32: ;
    ecx = MEM32(esp + 0x10C);
    POP32(esp, esi);
    PUSH32(esp, 0x0002BB3Fu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0002BB3F: ;
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002BB50
 * Original: 0x0002BB50 - 0x0002BBCB (123 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BB50(void)
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

loc_0002BB50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002BB56u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_0002BB56: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002BBC9; /* jne: not equal / not zero */

loc_0002BB5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0002BB70u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002BB70: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BBC7; /* je: equal / zero */

loc_0002BB76: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002BB7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BB7D: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002BBC7; /* je: equal / zero */

loc_0002BB9C: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F59999A);
    PUSH32(esp, 0x0002BBABu); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_0002BBAB: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    ecx = esi;
    PUSH32(esp, 0x0002BBB9u); RECOMP_ABI_CALL(0x00076B40u, xml1_guest_entity_set_alpha); /* call 0x00076B40 */

loc_0002BBB9: ;
    PUSH32(esp, 0x0002BBBEu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002BBBE: ;
    fp_top() = fp_top() - MEMF(0x3C8C88); /* fsub dword ptr [0x3c8c88] */
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002BBC7: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0002BBC9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002BBD0
 * Original: 0x0002BBD0 - 0x0002BCB6 (230 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BBD0(void)
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

loc_0002BBD0: ;
    esp = esp - 0x18;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BCB1; /* je: equal / zero */

loc_0002BBE0: ;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, esi);
    ecx = esp + 0x24;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x0002BBF1u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002BBF1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BCB0; /* je: equal / zero */

loc_0002BBFB: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002BC02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BC02: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002BCB0; /* je: equal / zero */

loc_0002BC25: ;
    PUSH32(esp, 0x0002BC2Au); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002BC2A: ;
    fp_top() = fp_top() - MEMF(edi + 0x24); /* fsub dword ptr [edi + 0x24] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3C8C90)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3c8c90] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002BCB0; /* jne: not equal / not zero */

loc_0002BC3A: ;
    ecx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BCB0; /* je: equal / zero */

loc_0002BC41: ;
    eax = MEM32(ecx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BCB0; /* je: equal / zero */

loc_0002BC4B: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(eax + 0x20);
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x24);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x28);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(eax + 0x34);
    MEM32(esp + 0x10) = eax;
    fp_top() = -fp_top(); /* fchs */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    fp_top() = -fp_top(); /* fchs */
    eax = esp + 0x1C;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edx;
    ecx = MEM32(ecx + 0x80);
    edx = MEM32(esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002BCA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BCA8: ;
    PUSH32(esp, 0x0002BCADu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002BCAD: ;
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002BCB0: ;
    POP32(esp, esi);

loc_0002BCB1: ;
    POP32(esp, edi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002BCC0
 * Original: 0x0002BCC0 - 0x0002BE5F (415 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BCC0(void)
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

loc_0002BCC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0002BCD7u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002BCD7: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BE5B; /* je: equal / zero */

loc_0002BCE1: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002BCE8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BCE8: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BE5A; /* je: equal / zero */

loc_0002BD0A: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BD6E; /* je: equal / zero */

loc_0002BD1D: ;
    PUSH32(esp, 0x0002BD22u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0002BD22: ;
    edx = MEM32(eax);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C8C64);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002BD34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BD34: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x84); PUSH32(esp, 0x0002BD3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BD3D: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BD61; /* je: equal / zero */

loc_0002BD44: ;
    eax = MEM32(eax + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BD61; /* je: equal / zero */

loc_0002BD4E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002BD61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BD61: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002BD69u); RECOMP_ABI_CALL(0x0002AF30u, xml1_guest_actor_remove_powerup); /* call 0x0002AF30 */

loc_0002BD69: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002BD6E: ;
    ecx = edi;
    PUSH32(esp, 0x0002BD75u); RECOMP_ABI_CALL(0x00028FF0u, xml1_guest_powerup_end_time); /* call 0x00028FF0 */

loc_0002BD75: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002BD7Eu); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_0002BD7E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BDE1; /* je: equal / zero */

loc_0002BD82: ;
    eax = MEM32(edi + 0x2C);
    SET_LO8(ecx, MEM8(eax + 0x71));
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002BDE1; /* jne: not equal / not zero */

loc_0002BD90: ;
    PUSH32(esp, 0x0002BD95u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0002BD95: ;
    edx = MEM32(eax);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C8C64);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002BDA7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BDA7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x84); PUSH32(esp, 0x0002BDB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BDB0: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BDD4; /* je: equal / zero */

loc_0002BDB7: ;
    eax = MEM32(eax + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BDD4; /* je: equal / zero */

loc_0002BDC1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002BDD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BDD4: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002BDDCu); RECOMP_ABI_CALL(0x0002AF30u, xml1_guest_actor_remove_powerup); /* call 0x0002AF30 */

loc_0002BDDC: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002BDE1: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(edi + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002BE5A; /* jp: parity */

loc_0002BDF3: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002BE5A; /* jne: not equal / not zero */

loc_0002BE04: ;
    PUSH32(esp, 0x0002BE09u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002BE09: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0002BE13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BE13: ;
    fp_top() = MEMF(esp + 0x14) - fp_top(); /* fsubr dword ptr [esp + 0x14] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002BE5A; /* jp: parity */

loc_0002BE24: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BE48; /* je: equal / zero */

loc_0002BE2B: ;
    eax = MEM32(eax + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BE48; /* je: equal / zero */

loc_0002BE35: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002BE48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BE48: ;
    PUSH32(esp, 0x0002BE4Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002BE4D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0002BE57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BE57: ;
    MEMF(edi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002BE5A: ;
    POP32(esp, ebx);

loc_0002BE5B: ;
    POP32(esp, edi);
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
 * sub_0002BE60
 * Original: 0x0002BE60 - 0x0002C002 (418 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BE60(void)
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

loc_0002BE60: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002BE7Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002BE7A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BEA4; /* je: equal / zero */

loc_0002BE80: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002BE86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BE86: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002BEA6; /* jne: not equal / not zero */

loc_0002BEA4: ;
    esi = 0; /* xor self */

loc_0002BEA6: ;
    eax = MEM32(ebx + 0x1C);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0002BEB6u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002BEB6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BEE2; /* je: equal / zero */

loc_0002BEBC: ;
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002BEC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BEC3: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_0002BEE4; /* jne: not equal / not zero */

loc_0002BEE2: ;
    edi = 0; /* xor self */

loc_0002BEE4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BFE5; /* je: equal / zero */

loc_0002BEEC: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0002BEFEu); RECOMP_ABI_CALL(0x000304A0u, sub_000304A0); /* call 0x000304A0 */

loc_0002BEFE: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BF53; /* je: equal / zero */

loc_0002BF05: ;
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x0002BF14u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_0002BF14: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    ecx = esi;
    PUSH32(esp, 0x0002BF22u); RECOMP_ABI_CALL(0x00076B40u, xml1_guest_entity_set_alpha); /* call 0x00076B40 */

loc_0002BF22: ;
    eax = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BFE5; /* je: equal / zero */

loc_0002BF2D: ;
    eax = MEM32(eax + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BFE5; /* je: equal / zero */

loc_0002BF3B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002BF4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002BF4E: ;
    goto loc_0002BFE5;

loc_0002BF53: ;
    PUSH32(esp, 0x0002BF58u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002BF58: ;
    fp_top() = fp_top() - MEMF(ebx + 0x24); /* fsub dword ptr [ebx + 0x24] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8C9C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8c9c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002BFBE; /* jne: not equal / not zero */

loc_0002BF68: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8C98)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8c98] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002BF9F; /* jne: not equal / not zero */

loc_0002BF75: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0002BF7Eu); RECOMP_ABI_CALL(0x00076B40u, xml1_guest_entity_set_alpha); /* call 0x00076B40 */

loc_0002BF7E: ;
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002BF8Au); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_0002BF8A: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 8;
    PUSH32(esp, 0x0002BF96u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002BF96: ;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    MEMF(ebx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0002BFC0;

loc_0002BF9F: ;
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x0002BFAEu); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_0002BFAE: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    ecx = esi;
    PUSH32(esp, 0x0002BFBCu); RECOMP_ABI_CALL(0x00076B40u, xml1_guest_entity_set_alpha); /* call 0x00076B40 */

loc_0002BFBC: ;
    goto loc_0002BFC0;

loc_0002BFBE: ;
    fp_pop(); /* fstp st(0) */

loc_0002BFC0: ;
    ecx = edi;
    PUSH32(esp, 0x0002BFC7u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002BFC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BFD8; /* je: equal / zero */

loc_0002BFCC: ;
    ecx = edi;
    PUSH32(esp, 0x0002BFD3u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002BFD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002BFE5; /* jne: not equal / not zero */

loc_0002BFD8: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BFE5; /* je: equal / zero */

loc_0002BFE0: ;
    PUSH32(esp, 0x0002BFE5u); RECOMP_ABI_CALL(0x00031B00u, sub_00031B00); /* call 0x00031B00 */

loc_0002BFE5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BFFB; /* je: equal / zero */

loc_0002BFE9: ;
    _fa = (uint32_t)(MEM8(edi + 0x336)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x336), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002BFFB; /* je: equal / zero */

loc_0002BFF2: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0002BFFBu); RECOMP_ABI_CALL(0x00076B40u, xml1_guest_entity_set_alpha); /* call 0x00076B40 */

loc_0002BFFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002C010
 * Original: 0x0002C010 - 0x0002C0C0 (176 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C010(void)
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

loc_0002C010: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 4) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x0002C025u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C025: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C0BE; /* je: equal / zero */

loc_0002C02F: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C036u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C036: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C0BD; /* je: equal / zero */

loc_0002C054: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002C05Bu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0002C05B: ;
    edi = eax;
    PUSH32(esp, 0x0002C062u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0002C062: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C8CA0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0002C076u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C076: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(ebp + 0x58); PUSH32(esp, 0x0002C07Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C07C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002C086u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C086: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0002C0BD; /* je: equal / zero */

loc_0002C08D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1BC); PUSH32(esp, 0x0002C097u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C097: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002C0A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C0A1: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0002C0A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C0A8: ;
    esi = eax;
    edi = MEM32(esi);
    PUSH32(esp, 0x0002C0B1u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002C0B1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edi + 0x8C); PUSH32(esp, 0x0002C0BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C0BD: ;
    POP32(esp, edi);

loc_0002C0BE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002C0C0
 * Original: 0x0002C0C0 - 0x0002C180 (192 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C0C0: ;
    esp = esp - 0x18;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0002C0D8u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C0D8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C17B; /* je: equal / zero */

loc_0002C0E2: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C0E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C0E9: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_0002C17B; /* je: equal / zero */

loc_0002C108: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 4) = 0x3ED9999A;
    MEM32(esp + 8) = 0x3ED9999A;
    MEM32(esp + 0xC) = 0x3F666666;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002C12Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C12A: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0002C133u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C133: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002C13Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C13D: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0002C149u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C149: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0002C155u); RECOMP_ABI_CALL(0x00075AE0u, sub_00075AE0); /* call 0x00075AE0 */

loc_0002C155: ;
    edx = MEM32(eax);
    MEM32(esi + 0x584) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x588) = ecx;
    edx = MEM32(eax + 8);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x58C) = edx;
    PUSH32(esp, 0x0002C17Bu); RECOMP_ABI_CALL(0x00075A90u, sub_00075A90); /* call 0x00075A90 */

loc_0002C17B: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0002C180
 * Original: 0x0002C180 - 0x0002C202 (130 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C180(void)
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

loc_0002C180: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 4) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, 0x0002C195u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C195: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C200; /* je: equal / zero */

loc_0002C19B: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C1A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C1A2: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C1FF; /* je: equal / zero */

loc_0002C1C0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002C1CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C1CA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C1FF; /* je: equal / zero */

loc_0002C1CF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1BC); PUSH32(esp, 0x0002C1D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C1D9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002C1E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C1E3: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002C1EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C1EA: ;
    esi = eax;
    edi = MEM32(esi);
    PUSH32(esp, 0x0002C1F3u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002C1F3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edi + 0x8C); PUSH32(esp, 0x0002C1FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C1FF: ;
    POP32(esp, edi);

loc_0002C200: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002C210
 * Original: 0x0002C210 - 0x0002C2FE (238 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C210(void)
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

loc_0002C210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0002C227u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C227: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C2FA; /* je: equal / zero */

loc_0002C231: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C237u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C237: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C2FA; /* je: equal / zero */

loc_0002C259: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C2FA; /* je: equal / zero */

loc_0002C264: ;
    _fa = (uint32_t)(MEM16(eax + 0x74)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x74), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C2A7; /* je: equal / zero */

loc_0002C26B: ;
    PUSH32(esp, 0x0002C270u); RECOMP_ABI_CALL(0x00096740u, xml1_guest_powerup_definition_allocate); /* call 0x00096740 */

loc_0002C270: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C2A7; /* je: equal / zero */

loc_0002C274: ;
    MEM8(eax + 0x1C) = 3;
    ecx = MEM32(edi + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x74);
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(eax + 0x24) = edx;
    edx = MEM32(edi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(ecx) = edx;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0002C2A7u); RECOMP_ABI_CALL(0x0002AA90u, xml1_guest_actor_attach_powerup); /* call 0x0002AA90 */

loc_0002C2A7: ;
    PUSH32(esp, 0x0002C2ACu); RECOMP_ABI_CALL(0x00096740u, xml1_guest_powerup_definition_allocate); /* call 0x00096740 */

loc_0002C2AC: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C2FA; /* je: equal / zero */

loc_0002C2B2: ;
    MEM8(esi + 0x1C) = 9;
    MEM32(esi + 0x2C) = 0x3F000000;
    PUSH32(esp, 0x0002C2C2u); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_0002C2C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C2CD; /* je: equal / zero */

loc_0002C2C6: ;
    MEM32(esi + 0x2C) = 0x3E99999A;

loc_0002C2CD: ;
    eax = MEM32(esi + 0x6C);
    eax = eax & 0xFFFFF1FFu;
    eax = eax | 0x100;
    MEM32(esi + 0x6C) = eax;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(esi + 0x24) = edx;
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(eax) = ecx;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0002C2FAu); RECOMP_ABI_CALL(0x0002AA90u, xml1_guest_actor_attach_powerup); /* call 0x0002AA90 */

loc_0002C2FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002C300
 * Original: 0x0002C300 - 0x0002C353 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C300: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002C316u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C316: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C350; /* je: equal / zero */

loc_0002C31C: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C323u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C323: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002C350; /* je: equal / zero */

loc_0002C342: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C350; /* je: equal / zero */

loc_0002C349: ;
    MEM8(esi + 0x337) = MEM8(esi + 0x337) | 2;

loc_0002C350: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C360
 * Original: 0x0002C360 - 0x0002C3B5 (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C360: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002C376u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C376: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C3B2; /* je: equal / zero */

loc_0002C37C: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C383u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C383: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002C3B2; /* je: equal / zero */

loc_0002C3A2: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C3B2; /* je: equal / zero */

loc_0002C3A9: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0002C3B2u); RECOMP_ABI_CALL(0x0002E220u, sub_0002E220); /* call 0x0002E220 */

loc_0002C3B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C3C0
 * Original: 0x0002C3C0 - 0x0002C44D (141 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C3C0: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x1C);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0002C3D8u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C3D8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C448; /* je: equal / zero */

loc_0002C3DE: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C3E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C3E5: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_0002C448; /* je: equal / zero */

loc_0002C404: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002C40Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C40E: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0002C417u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C417: ;
    eax = MEM32(esi + 0x584);
    ecx = MEM32(esi + 0x588);
    edx = MEM32(esi + 0x58C);
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0002C441u); RECOMP_ABI_CALL(0x00075A90u, sub_00075A90); /* call 0x00075A90 */

loc_0002C441: ;
    ecx = esi;
    PUSH32(esp, 0x0002C448u); RECOMP_ABI_CALL(0x00075B20u, sub_00075B20); /* call 0x00075B20 */

loc_0002C448: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0002C450
 * Original: 0x0002C450 - 0x0002C4E7 (151 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C450: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002C466u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C466: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C49E; /* je: equal / zero */

loc_0002C46C: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C473u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C473: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002C49E; /* je: equal / zero */

loc_0002C492: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0002C49Bu); RECOMP_ABI_CALL(0x0002E220u, sub_0002E220); /* call 0x0002E220 */

loc_0002C49B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002C49E: ;
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002C4AEu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C4AE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C4E4; /* je: equal / zero */

loc_0002C4B4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C4BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C4BA: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C4E4; /* je: equal / zero */

loc_0002C4D8: ;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    PUSH32(esp, 0x0002C4E4u); RECOMP_ABI_CALL(0x00076B40u, xml1_guest_entity_set_alpha); /* call 0x00076B40 */

loc_0002C4E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C4F0
 * Original: 0x0002C4F0 - 0x0002C559 (105 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C4F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002C506u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C506: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C556; /* je: equal / zero */

loc_0002C50C: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C513u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C513: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002C556; /* je: equal / zero */

loc_0002C532: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C556; /* je: equal / zero */

loc_0002C539: ;
    eax = MEM32(eax + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002C556; /* jle: less or equal (signed <=) */

loc_0002C543: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002C556u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C556: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C560
 * Original: 0x0002C560 - 0x0002C5C9 (105 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002C576u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C576: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C5C6; /* je: equal / zero */

loc_0002C57C: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C583u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C583: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002C5C6; /* je: equal / zero */

loc_0002C5A2: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C5C6; /* je: equal / zero */

loc_0002C5A9: ;
    eax = MEM32(eax + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002C5C6; /* jle: less or equal (signed <=) */

loc_0002C5B3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002C5C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C5C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C5D0
 * Original: 0x0002C5D0 - 0x0002C639 (105 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C5D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002C5E6u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C5E6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C636; /* je: equal / zero */

loc_0002C5EC: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C5F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C5F3: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002C636; /* je: equal / zero */

loc_0002C612: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C636; /* je: equal / zero */

loc_0002C619: ;
    eax = MEM32(eax + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002C636; /* jle: less or equal (signed <=) */

loc_0002C623: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002C636u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C636: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C640
 * Original: 0x0002C640 - 0x0002C693 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C640: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002C656u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C656: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C690; /* je: equal / zero */

loc_0002C65C: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C663u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C663: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002C690; /* je: equal / zero */

loc_0002C682: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C690; /* je: equal / zero */

loc_0002C689: ;
    MEM8(esi + 0x337) = MEM8(esi + 0x337) & 0xFD;

loc_0002C690: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C6A0
 * Original: 0x0002C6A0 - 0x0002C830 (400 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C6A0(void)
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

loc_0002C6A0: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0002C6B4u); RECOMP_ABI_CALL(0x000E1EA0u, sub_000E1EA0); /* call 0x000E1EA0 */

loc_0002C6B4: ;
    esi = MEM32(esp + 0x48);
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002C6C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C6C5: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0002C6CCu); RECOMP_ABI_CALL(0x000E1EA0u, sub_000E1EA0); /* call 0x000E1EA0 */

loc_0002C6CC: ;
    edx = MEM32(eax);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002C6D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C6D9: ;
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    PUSH32(esp, 0x0002C6E0u); RECOMP_ABI_CALL(0x000E1EA0u, sub_000E1EA0); /* call 0x000E1EA0 */

loc_0002C6E0: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002C6EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C6ED: ;
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    PUSH32(esp, 0x0002C6F4u); RECOMP_ABI_CALL(0x000E1EA0u, sub_000E1EA0); /* call 0x000E1EA0 */

loc_0002C6F4: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0002C701u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C701: ;
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    PUSH32(esp, 0x0002C708u); RECOMP_ABI_CALL(0x000E1EA0u, sub_000E1EA0); /* call 0x000E1EA0 */

loc_0002C708: ;
    edx = MEM32(eax);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0002C715u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C715: ;
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    if ((LO8(eax) == 0)) goto loc_0002C828; /* je: equal / zero */

loc_0002C71D: ;
    ebp = MEM32(esp + 0x44);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C828; /* je: equal / zero */

loc_0002C729: ;
    eax = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C828; /* je: equal / zero */

loc_0002C734: ;
    ecx = MEM32(eax + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C828; /* je: equal / zero */

loc_0002C742: ;
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0002C74Fu); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002C74F: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0002C828; /* je: equal / zero */

loc_0002C75E: ;
    PUSH32(esp, 0x0002C763u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_0002C763: ;
    edi = eax;
    PUSH32(esp, 0x0002C76Au); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002C76A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002C771u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C771: ;
    ebx = eax;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x30;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0;
    edx = MEM32(edi);
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002C7ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C7AC: ;
    ecx = MEM32(ebp + 0x2C);
    edx = MEM32(ecx + 0x80);
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    edi = MEM32(ebx);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    eax = esp + 0x4C;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002C7F0u); RECOMP_ABI_CALL(0x001389E0u, sub_001389E0); /* call 0x001389E0 */

loc_0002C7F0: ;
    edx = MEM32(esp + 0x54);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edi + 0x44); PUSH32(esp, 0x0002C7FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C7FE: ;
    PUSH32(esp, 0x0002C803u); RECOMP_ABI_CALL(0x000E1EA0u, sub_000E1EA0); /* call 0x000E1EA0 */

loc_0002C803: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0002C80Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C80D: ;
    PUSH32(esp, 0x0002C812u); RECOMP_ABI_CALL(0x000E1EA0u, sub_000E1EA0); /* call 0x000E1EA0 */

loc_0002C812: ;
    ecx = MEM32(ebp + 0x2C);
    ecx = ZX8(MEM8(ecx + 0x71));
    edx = MEM32(eax);
    ecx = ecx & 0xFFFFFF7Fu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0002C828u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C828: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002C830
 * Original: 0x0002C830 - 0x0002C87D (77 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C830: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002C846u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002C846: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002C87A; /* je: equal / zero */

loc_0002C84C: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002C853u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002C853: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0002C87A; /* je: equal / zero */

loc_0002C872: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002C87Au); RECOMP_ABI_CALL(0x0002AF30u, xml1_guest_actor_remove_powerup); /* call 0x0002AF30 */

loc_0002C87A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C880
 * Original: 0x0002C880 - 0x0002C8B2 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C880: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3C8CBC);
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0002C89Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002C89A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002C8A7; /* jne: not equal / not zero */

loc_0002C8A1: ;
    MEM32(esi) = 0x2C6A0;

loc_0002C8A7: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002C8C0
 * Original: 0x0002C8C0 - 0x0002C963 (163 bytes, 52 insns)
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C8C0(void)
{

loc_0002C8C0: ;
    raven_native_damage_clear(ecx);
    eax = ecx;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(esp + 8));
    MEM32(eax) = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM16(eax + 8) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0xC));
    MEM16(eax + 0xA) = LO16(edx);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = edx;
    SET_LO16(edx, MEM16(esp + 0x1C));
    MEM16(eax + 0x14) = LO16(edx);
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 0x24) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(esp + 0x28);
    esi = MEM32(edx);
    MEM32(eax + 0x2C) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 0x30) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(esp + 0x2C);
    esi = MEM32(edx);
    MEM32(eax + 0x38) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 0x3C) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM8(eax + 0x54) = LO8(ecx);
    MEM8(eax + 0x55) = LO8(ecx);
    MEM8(eax + 0x56) = 0;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM8(eax + 0x60) = MEM8(eax + 0x60) & 0xF0;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x1C) = ecx;
    POP32(esp, esi);
    esp += 48; return; /* ret 44 */

}

/**
 * sub_0002C970
 * Original: 0x0002C970 - 0x0002CA1C (172 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C970(void)
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

loc_0002C970: ;
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CA1A; /* je: equal / zero */

loc_0002C97B: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CA1A; /* je: equal / zero */

loc_0002C986: ;
    eax = MEM32(edi + 0x1C);
    SET_LO8(edx, MEM8(esi + 0x60));
    MEM32(esi) = eax;
    MEM32(esi + 0xC) = 0;
    SET_LO8(edx, LO8(edx) | 1);
    MEM8(esi + 0x60) = LO8(edx);
    MEM32(esi + 0x5C) = 0;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(ecx + 0x34);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax + 0x38);
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x2C);
    fp_push(MEMF(ebx + 0x30)); /* fld float */
    PUSH32(esp, 0x0002C9C0u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0002C9C0: ;
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002C9C9u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0002C9C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002C9CFu); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_0002C9CF: ;
    MEM16(esi + 8) = LO16(eax);
    edi = MEM32(edi + 0x2C);
    SET_LO16(eax, MEM16(edi + 0x74));
    esp = esp + 8;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    POP32(esp, ebx);
    if (CMP_G(_fas & _fbs, 0)) goto loc_0002CA07; /* jg: greater (signed >) */

loc_0002C9E3: ;
    fp_push(MEMF(edi + 0x30)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8CC8); /* fmul dword ptr [0x3c8cc8] */
    PUSH32(esp, 0x0002C9F1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0002C9F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002C9FD; /* jge: greater or equal (signed >=) */

loc_0002C9F6: ;
    eax = 1;
    goto loc_0002CA07;

loc_0002C9FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002CA07; /* jle: less or equal (signed <=) */

loc_0002CA02: ;
    eax = 0xA;

loc_0002CA07: ;
    MEM16(esi + 0x14) = LO16(eax);
    PUSH32(esp, 0x0002CA10u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_0002CA10: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0002CA17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CA17: ;
    MEM32(esi + 0x44) = eax;

loc_0002CA1A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002CA20
 * Original: 0x0002CA20 - 0x0002CC97 (631 bytes, 190 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CA20(void)
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

loc_0002CA20: ;
    esp = esp - 0xDC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xE8);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0002CA41u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002CA41: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CA73; /* je: equal / zero */

loc_0002CA49: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002CA4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CA4F: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(eax + edx * 4 + 0x14);
    MEM32(esp + 0x14) = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002CA77; /* jne: not equal / not zero */

loc_0002CA73: ;
    MEM32(esp + 0x14) = ebx;

loc_0002CA77: ;
    eax = MEM32(ebp + 0x1C);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0002CA87u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002CA87: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CAB7; /* je: equal / zero */

loc_0002CA8D: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002CA93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CA93: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(eax + edx * 4 + 0x14);
    MEM32(esp + 0x10) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002CABB; /* jne: not equal / not zero */

loc_0002CAB7: ;
    MEM32(esp + 0x10) = ebx;

loc_0002CABB: ;
    eax = MEM32(ebp + 0x18);
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0002CACBu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002CACB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CAF9; /* je: equal / zero */

loc_0002CAD1: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002CAD7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CAD7: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CAF9; /* je: equal / zero */

loc_0002CAF5: ;
    ebp = edi;
    goto loc_0002CAFB;

loc_0002CAF9: ;
    ebp = 0; /* xor self */

loc_0002CAFB: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CC8C; /* je: equal / zero */

loc_0002CB05: ;
    eax = MEM32(esp + 0xF0);
    edi = MEM32(eax + 0x2C);
    fp_push(MEMF(edi + 0x2C)); /* fld float */
    ebx = MEM32(0x498D90);
    PUSH32(esp, 0x0002CB1Du); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0002CB1D: ;
    fp_push(MEMF(edi + 0x30)); /* fld float */
    esi = eax;
    PUSH32(esp, 0x0002CB27u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0002CB27: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    edi = eax;
    MEM32(esp + 0x18) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0002CB47; /* je: equal / zero */

loc_0002CB31: ;
    fp_push(MEMF(ebp + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002CB47; /* jne: not equal / not zero */

loc_0002CB44: ;
    ebx = MEM32(ebp + 0x1C);

loc_0002CB47: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x50;
    MEM32(eax) = ebx;
    PUSH32(esp, 0x0002CB72u); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_0002CB72: ;
    ebx = MEM32(esp + 0xF0);
    eax = MEM32(ebx + 0x2C);
    ebp = 0; /* xor self */
    MEM32(esp + 0x40) = ebp;
    SET_LO16(ecx, MEM16(eax + 0x74));
    MEM16(esp + 0x2E) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0x84));
    MEM32(esp + 0x30) = 4;
    MEM16(esp + 0x2C) = LO16(esi);
    edx = MEM32(eax + 0x34);
    MEM32(esp + 0x34) = edx;
    MEM16(esp + 0x38) = 5;
    eax = MEM32(eax + 0x38);
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x3C) = eax;
    MEM8(esp + 0x84) = LO8(ecx);
    MEM32(esp + 0x80) = ebp;
    if (CMP_G(_fas, _fbs)) goto loc_0002CBD1; /* jg: greater (signed >) */

loc_0002CBC9: ;
    MEM32(esp + 0x18) = 0x78;

loc_0002CBD1: ;
    PUSH32(esp, 0x0002CBD6u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_0002CBD6: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    esi = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    esp = esp - 0x10;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0002CBF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CBF3: ;
    PUSH32(esp, 0x0002CBF8u); RECOMP_ABI_CALL(0x0005A810u, sub_0005A810); /* call 0x0005A810 */

loc_0002CBF8: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002CC8C; /* jne: not equal / not zero */

loc_0002CC07: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002CC8C; /* jne: not equal / not zero */

loc_0002CC1A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0xB4;
    MEM32(eax) = ebp;
    PUSH32(esp, 0x0002CC44u); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_0002CC44: ;
    SET_LO8(eax, MEM8(esi + 0x2C2));
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM16(esp + 0x9C)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x9C), LO16(ecx) (16-bit) */
    MEM16(esp + 0x90) = 0x7D00;
    if (CMP_G(_fas, _fbs)) goto loc_0002CC6E; /* jg: greater (signed >) */

loc_0002CC61: ;
    SET_LO16(edx, ZX8(LO8(eax)));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(esp + 0x9C) = LO16(edx);

loc_0002CC6E: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0002CC76u); RECOMP_ABI_CALL(0x0002AF30u, xml1_guest_actor_remove_powerup); /* call 0x0002AF30 */

loc_0002CC76: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0002CC8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CC8C: ;
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
 * sub_0002CCA0
 * Original: 0x0002CCA0 - 0x0002CDC5 (293 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CCA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CCA0: ;
    esp = esp - 0x64;
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x7C;
    MEM32(esp + 0x7C) = eax;
    PUSH32(esp, 0x0002CCB8u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002CCB8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CCE8; /* je: equal / zero */

loc_0002CCBE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002CCC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CCC4: ;
    edx = MEM32(0x48D8FC);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(eax + edx * 4 + 0x14);
    MEM32(esp + 0x7C) = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002CCF0; /* jne: not equal / not zero */

loc_0002CCE8: ;
    MEM32(esp + 0x7C) = 0;

loc_0002CCF0: ;
    edi = MEM32(esp + 0x78);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CDBD; /* je: equal / zero */

loc_0002CCFC: ;
    eax = MEM32(esp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CDBD; /* je: equal / zero */

loc_0002CD08: ;
    ebp = MEM32(esp + 0x80);
    _fa = (uint32_t)(MEM8(ebp + 0x60)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x60), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002CDBD; /* jne: not equal / not zero */

loc_0002CD19: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0002CD26u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002CD26: ;
    ebx = eax;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CDBD; /* je: equal / zero */

loc_0002CD33: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0002CD3Du); RECOMP_ABI_CALL(0x0002B720u, xml1_guest_damage_record_copy); /* call 0x0002B720 */

loc_0002CD3D: ;
    esi = esp + 0x10;
    eax = edi;
    PUSH32(esp, 0x0002CD48u); RECOMP_ABI_CALL(0x0002C970u, sub_0002C970); /* call 0x0002C970 */

loc_0002CD48: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebp + 0x14));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esp + 0x24)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esp + 0x24) (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0002CD59; /* jg: greater (signed >) */

loc_0002CD55: ;
    eax = MEM32(esp + 0x24);

loc_0002CD59: ;
    edx = MEM32(ebp + 0x10);
    MEM16(ebp + 0x14) = LO16(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002CD6F; /* jne: not equal / not zero */

loc_0002CD66: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x28) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CDBD; /* je: equal / zero */

loc_0002CD6F: ;
    ecx = edi;
    PUSH32(esp, 0x0002CD76u); RECOMP_ABI_CALL(0x0002B560u, sub_0002B560); /* call 0x0002B560 */

loc_0002CD76: ;
    SET_LO8(edx, MEM8(esp + 0x70));
    SET_LO8(edx, LO8(edx) | 4);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x7C;
    MEM8(esp + 0x74) = LO8(edx);
    PUSH32(esp, 0x0002CD8Fu); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_0002CD8F: ;
    SET_LO8(eax, MEM8(esp + 0x70));
    ecx = MEM32(esp + 0x78);
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(esp + 0x70) = LO8(eax);
    MEM32(esp + 0x6C) = ecx;
    PUSH32(esp, 0x0002CDA6u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_0002CDA6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x84);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0002CDBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CDBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_0002CDD0
 * Original: 0x0002CDD0 - 0x0002CE68 (152 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002CDD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CE4D; /* je: equal / zero */

loc_0002CDDB: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CE4D; /* je: equal / zero */

loc_0002CDE2: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0002CDEFu); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002CDEF: ;
    edx = MEM32(edi + 0x18);
    esi = eax;
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0002CDFDu); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002CDFD: ;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CE4D; /* je: equal / zero */

loc_0002CE04: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CE4D; /* je: equal / zero */

loc_0002CE11: ;
    PUSH32(esp, 0x0002CE16u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0002CE16: ;
    edx = MEM32(eax);
    ebx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C8C64);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002CE28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CE28: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x84); PUSH32(esp, 0x0002CE31u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CE31: ;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(ecx + 0x80);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0002CE4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CE4D: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    eax = esp;
    PUSH32(esp, edi);
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0002CE61u); RECOMP_ABI_CALL(0x0002CCA0u, sub_0002CCA0); /* call 0x0002CCA0 */

loc_0002CE61: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CE70
 * Original: 0x0002CE70 - 0x0002CF7C (268 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CE70(void)
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

loc_0002CE70: ;
    raven_native_damage_enter(0x2CE70, esp);
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x74);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0x74;
    MEM32(esp + 0x74) = eax;
    PUSH32(esp, 0x0002CE8Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002CE8A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CF75; /* je: equal / zero */

loc_0002CE94: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002CE9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CE9A: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CF75; /* je: equal / zero */

loc_0002CEBC: ;
    PUSH32(esp, 0x0002CEC1u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002CEC1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0002CECBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CECB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edi + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edi + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002CF75; /* jne: not equal / not zero */

loc_0002CED9: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = 0xC;
    ecx = 0x180000;
    if (TEST_Z(_fa, _fb)) goto loc_0002CF5D; /* je: equal / zero */

loc_0002CEEA: ;
    edx = MEM32(eax + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CEF3; /* je: equal / zero */

loc_0002CEF1: ;
    ebx = edx;

loc_0002CEF3: ;
    edx = MEM32(eax + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CF02; /* je: equal / zero */

loc_0002CEFA: ;
    edx = edx | 0x180000;
    ecx = edx;

loc_0002CF02: ;
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0xA);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002CF23u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0002CF23: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x18);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esp + 0x38;
    PUSH32(esp, 0x0002CF35u); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_0002CF35: ;
    raven_native_damage_seed(MEM32(edi + 0x2C), esi, esp + 0xC, SMEM16(esp + 0x14));
    SET_LO8(edx, MEM8(esp + 0x6C));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    SET_LO8(edx, LO8(edx) | 1);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    MEM8(esp + 0x78) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x78) = 0;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0002CF5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CF5D: ;
    PUSH32(esp, 0x0002CF62u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002CF62: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0002CF6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CF6C: ;
    fp_top() = fp_top() + MEMF(0x3C8C60); /* fadd dword ptr [0x3c8c60] */
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002CF75: ;
    raven_native_damage_leave(0x2CE70, esp + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002CF80
 * Original: 0x0002CF80 - 0x0002D1DD (605 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CF80(void)
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

loc_0002CF80: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0002CF9Bu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002CF9B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CFC9; /* je: equal / zero */

loc_0002CFA1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002CFA7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CFA7: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002CFC9; /* je: equal / zero */

loc_0002CFC5: ;
    ebp = esi;
    goto loc_0002CFCB;

loc_0002CFC9: ;
    ebp = 0; /* xor self */

loc_0002CFCB: ;
    eax = MEM32(edi + 0x18);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0002CFDBu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002CFDB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D005; /* je: equal / zero */

loc_0002CFE1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002CFE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002CFE7: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D007; /* jne: not equal / not zero */

loc_0002D005: ;
    esi = 0; /* xor self */

loc_0002D007: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D1D5; /* je: equal / zero */

loc_0002D00F: ;
    PUSH32(esp, 0x3C8CE8);
    PUSH32(esp, 0x0002D019u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0002D019: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8CE8);
    PUSH32(esp, 0x0002D028u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0002D028: ;
    ecx = eax;
    PUSH32(esp, 0x0002D02Fu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0002D02F: ;
    ecx = MEM32(ebp + 0x2D8);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D043u); RECOMP_ABI_CALL(0x000B12F0u, sub_000B12F0); /* call 0x000B12F0 */

loc_0002D043: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D1D5; /* jne: not equal / not zero */

loc_0002D04B: ;
    fp_push(MEMF(ebp + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D1D5; /* jne: not equal / not zero */

loc_0002D062: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D1D5; /* je: equal / zero */

loc_0002D06A: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D1D5; /* jne: not equal / not zero */

loc_0002D081: ;
    PUSH32(esp, 3);
    ecx = ebp;
    PUSH32(esp, 0x0002D08Au); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_0002D08A: ;
    ecx = eax;
    PUSH32(esp, 0x0002D091u); RECOMP_ABI_CALL(0x000ED320u, sub_000ED320); /* call 0x000ED320 */

loc_0002D091: ;
    PUSH32(esp, 3);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0002D09Cu); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_0002D09C: ;
    ecx = eax;
    PUSH32(esp, 0x0002D0A3u); RECOMP_ABI_CALL(0x000ED320u, sub_000ED320); /* call 0x000ED320 */

loc_0002D0A3: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D1B1; /* je: equal / zero */

loc_0002D0AD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D1B1; /* je: equal / zero */

loc_0002D0B5: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0002D0BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D0BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D1B1; /* je: equal / zero */

loc_0002D0C4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D1B1; /* je: equal / zero */

loc_0002D0CC: ;
    eax = MEM32(esp + 0x28);
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D1BD; /* je: equal / zero */

loc_0002D0DB: ;
    ebx = (uint32_t)(int32_t)SMEM16(eax + 0x74);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = 0x3C8CD8;
    MEM32(esp + 0x20) = 0x3C8CCC;
    if ((_fa == 0)) goto loc_0002D0FB; /* je: equal / zero */

loc_0002D0F2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D1BD; /* jne: not equal / not zero */

loc_0002D0FB: ;
    ecx = MEM32(esp + ebx * 4 + 0x1C);
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0002D109u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_0002D109: ;
    edx = MEM32(edi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002D115u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D115: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D127; /* je: equal / zero */

loc_0002D119: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0002D123u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D123: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D130; /* jne: not equal / not zero */

loc_0002D127: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    ebx = eax;

loc_0002D130: ;
    ebx = MEM32(esp + ebx * 4 + 0x1C);
    PUSH32(esp, ebx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0002D13Eu); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_0002D13E: ;
    edx = MEM32(edi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002D14Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D14A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D1BD; /* je: equal / zero */

loc_0002D14E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x0002D158u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D158: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D1BD; /* je: equal / zero */

loc_0002D15C: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0002D166u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_0002D166: ;
    PUSH32(esp, 0x3C8CCC);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0002D174u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_0002D174: ;
    eax = MEM32(ebp + 0x1C);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002D191u); RECOMP_ABI_CALL(0x0002E2C0u, sub_0002E2C0); /* call 0x0002E2C0 */

loc_0002D191: ;
    ecx = MEM32(esi + 0x2F4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002D1A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D1A0: ;
    ecx = MEM32(esi + 0x2F4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0002D1AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D1AF: ;
    goto loc_0002D1BD;

loc_0002D1B1: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0002D1BDu); RECOMP_ABI_CALL(0x0002AF30u, xml1_guest_actor_remove_powerup); /* call 0x0002AF30 */

loc_0002D1BD: ;
    PUSH32(esp, 0x0002D1C2u); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_0002D1C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D1D5; /* jne: not equal / not zero */

loc_0002D1C6: ;
    ecx = MEM32(esi + 0x2F4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 5);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002D1D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D1D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002D1E0
 * Original: 0x0002D1E0 - 0x0002D3AB (459 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D1E0(void)
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

loc_0002D1E0: ;
    esp = esp - 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x7C);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0x7C;
    MEM32(esp + 0x7C) = eax;
    PUSH32(esp, 0x0002D1FBu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002D1FB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D3A3; /* je: equal / zero */

loc_0002D205: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002D20Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D20B: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D3A3; /* je: equal / zero */

loc_0002D22D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002D237u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D237: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D3A3; /* je: equal / zero */

loc_0002D240: ;
    edx = MEM32(esi);
    ebx = MEM32(esi + 0x2F4);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002D250u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D250: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0002D257u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D257: ;
    edx = MEM32(ebx);
    ebp = eax;
    eax = MEM32(ebp);
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x0002D26Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D26A: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002D273u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002D273: ;
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x0002D283u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D283: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D3A3; /* je: equal / zero */

loc_0002D28E: ;
    PUSH32(esp, 0x0002D293u); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_0002D293: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D2F1; /* je: equal / zero */

loc_0002D297: ;
    eax = MEM32(edi + 0x2C);
    SET_LO8(ecx, MEM8(eax + 0x71));
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D2F1; /* jne: not equal / not zero */

loc_0002D2A5: ;
    SET_LO8(ebx, MEM8(eax + 0x71));
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) & 0x80);
    MEM8(eax + 0x71) = LO8(ebx);
    edx = MEM32(edi + 0x18);
    eax = esp;
    ecx = esp + 0x40;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0002D2DCu); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_0002D2DC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA8); PUSH32(esp, 0x0002D2F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D2F1: ;
    edx = MEM32(edi + 0x2C);
    _fa = (uint32_t)(MEM16(edx + 0x74)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x74), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D3A3; /* je: equal / zero */

loc_0002D2FF: ;
    PUSH32(esp, 0x0002D304u); RECOMP_ABI_CALL(0x00096740u, xml1_guest_powerup_definition_allocate); /* call 0x00096740 */

loc_0002D304: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D3A3; /* je: equal / zero */

loc_0002D30E: ;
    eax = MEM32(edi + 0x2C);
    SET_LO8(ecx, MEM8(eax + 0x1C));
    edx = MEM32(ebx + 0x6C);
    edx = edx & 0xFFFFF1FFu;
    edx = edx | 0x100;
    MEM8(ebx + 0x1C) = LO8(ecx);
    MEM32(ebx + 0x2C) = 0x3E99999A;
    MEM32(ebx + 0x6C) = edx;
    eax = MEM32(edi + 0x2C);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x74);
    MEM32(esp + 0x7C) = ecx;
    MEM32(ebx + 0x9C) = 0x2C0C0;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */
    MEM32(ebx + 0xA0) = 0x2C3C0;
    MEM32(ebx + 0xB8) = 0x13D370;
    MEM32(ebx + 0xA4) = 0x2C830;
    MEMF(ebx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM16(ebx + 0x74) = 2;
    PUSH32(esp, 0x0002D375u); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_0002D375: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D380; /* je: equal / zero */

loc_0002D379: ;
    MEM32(ebx + 0x2C) = 0x3F000000;

loc_0002D380: ;
    edx = MEM32(edi + 0x2C);
    edx = edx + 0x54;
    PUSH32(esp, edx);
    ecx = ebx + 0x54;
    PUSH32(esp, 0x0002D38Fu); RECOMP_ABI_CALL(0x00095330u, sub_00095330); /* call 0x00095330 */

loc_0002D38F: ;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x18);
    eax = esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(eax) = ecx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0002D3A3u); RECOMP_ABI_CALL(0x0002AA90u, xml1_guest_actor_attach_powerup); /* call 0x0002AA90 */

loc_0002D3A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002D3B0
 * Original: 0x0002D3B0 - 0x0002D4A4 (244 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D3B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0002D3C8u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002D3C8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D3F2; /* je: equal / zero */

loc_0002D3CE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002D3D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D3D4: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D3F4; /* jne: not equal / not zero */

loc_0002D3F2: ;
    esi = 0; /* xor self */

loc_0002D3F4: ;
    eax = MEM32(edi + 0x18);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0002D404u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002D404: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D42E; /* je: equal / zero */

loc_0002D40A: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002D410u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D410: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D430; /* jne: not equal / not zero */

loc_0002D42E: ;
    edi = 0; /* xor self */

loc_0002D430: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D49F; /* je: equal / zero */

loc_0002D434: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D49F; /* je: equal / zero */

loc_0002D438: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x0002D441u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_0002D441: ;
    ecx = eax;
    PUSH32(esp, 0x0002D448u); RECOMP_ABI_CALL(0x000ED320u, sub_000ED320); /* call 0x000ED320 */

loc_0002D448: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D49F; /* je: equal / zero */

loc_0002D44C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0002D453u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D453: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D49F; /* je: equal / zero */

loc_0002D457: ;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0002D465u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_0002D465: ;
    PUSH32(esp, 0x3C8CCC);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0002D473u); RECOMP_ABI_CALL(0x00027EF0u, sub_00027EF0); /* call 0x00027EF0 */

loc_0002D473: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x498D90);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0002D489u); RECOMP_ABI_CALL(0x0002E2C0u, sub_0002E2C0); /* call 0x0002E2C0 */

loc_0002D489: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4F32A8);
    ecx = edi;
    PUSH32(esp, 0x0002D497u); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_0002D497: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0002D49Fu); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_0002D49F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D4B0
 * Original: 0x0002D4B0 - 0x0002D529 (121 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D4B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D4B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002D4C6u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002D4C6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D526; /* je: equal / zero */

loc_0002D4CC: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002D4D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D4D3: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_0002D526; /* je: equal / zero */

loc_0002D4F2: ;
    MEM8(esi + 0x235) = MEM8(esi + 0x235) | 0x10;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D51D; /* je: equal / zero */

loc_0002D500: ;
    eax = MEM32(eax + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D51D; /* je: equal / zero */

loc_0002D50A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002D51Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D51D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002D523u); RECOMP_ABI_CALL(0x0002CA20u, sub_0002CA20); /* call 0x0002CA20 */

loc_0002D523: ;
    esp = esp + 4;

loc_0002D526: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D530
 * Original: 0x0002D530 - 0x0002D610 (224 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D530: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0002D548u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002D548: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D60B; /* je: equal / zero */

loc_0002D552: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002D558u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D558: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D60B; /* je: equal / zero */

loc_0002D57A: ;
    ecx = MEM32(esi + 0x2D8);
    ebx = MEM32(esi);
    PUSH32(esp, 0x16);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0002D58Du); RECOMP_ABI_CALL(0x000B0EA0u, xml1_guest_character_format_skin); /* call 0x000B0EA0 */

loc_0002D58D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x170); PUSH32(esp, 0x0002D596u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D596: ;
    PUSH32(esp, 0x3C8CF0);
    PUSH32(esp, 0x0002D5A0u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0002D5A0: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8CF0);
    PUSH32(esp, 0x0002D5AFu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_0002D5AF: ;
    ecx = eax;
    PUSH32(esp, 0x0002D5B6u); RECOMP_ABI_CALL(0x00012BB0u, sub_00012BB0); /* call 0x00012BB0 */

loc_0002D5B6: ;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002D5C8u); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_0002D5C8: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002D5D0u); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_0002D5D0: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D60B; /* je: equal / zero */

loc_0002D5D7: ;
    edx = MEM32(eax + 0x20);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    PUSH32(esp, 0x0002D5E4u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002D5E4: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D60B; /* je: equal / zero */

loc_0002D5ED: ;
    PUSH32(esp, 0x0002D5F2u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_0002D5F2: ;
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = MEM32(edi + 0x5B4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1FC); PUSH32(esp, 0x0002D60Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D60B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D610
 * Original: 0x0002D610 - 0x0002D682 (114 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D610: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002D626u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002D626: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D67F; /* je: equal / zero */

loc_0002D62C: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002D633u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D633: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_0002D67F; /* je: equal / zero */

loc_0002D652: ;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D676; /* je: equal / zero */

loc_0002D659: ;
    eax = MEM32(eax + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D676; /* je: equal / zero */

loc_0002D663: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002D676u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D676: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002D67Cu); RECOMP_ABI_CALL(0x0002CA20u, sub_0002CA20); /* call 0x0002CA20 */

loc_0002D67C: ;
    esp = esp + 4;

loc_0002D67F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D690
 * Original: 0x0002D690 - 0x0002D7EE (350 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D690(void)
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

loc_0002D690: ;
    esp = esp - 0x64;
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x7C;
    MEM32(esp + 0x7C) = eax;
    PUSH32(esp, 0x0002D6A8u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002D6A8: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D7E6; /* je: equal / zero */

loc_0002D6B2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002D6B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D6B8: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D7E6; /* je: equal / zero */

loc_0002D6DA: ;
    ebp = MEM32(esp + 0x78);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D7E6; /* je: equal / zero */

loc_0002D6E6: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = ebp + 0x1C;
    if (TEST_Z(_fa, _fb)) goto loc_0002D7E6; /* je: equal / zero */

loc_0002D6F4: ;
    ecx = esi;
    PUSH32(esp, 0x0002D6FBu); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0002D6FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D7E6; /* je: equal / zero */

loc_0002D703: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0002D70Fu); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002D70F: ;
    ebx = eax;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D7E6; /* je: equal / zero */

loc_0002D71C: ;
    ecx = edi;
    PUSH32(esp, 0x0002D723u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002D723: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D7E6; /* je: equal / zero */

loc_0002D72C: ;
    SET_LO8(eax, MEM8(0x485840));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D75D; /* jne: not equal / not zero */

loc_0002D735: ;
    PUSH32(esp, 0x0002D73Au); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0002D73A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0002D741u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D741: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D75D; /* jne: not equal / not zero */

loc_0002D745: ;
    ecx = edi;
    PUSH32(esp, 0x0002D74Cu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002D74C: ;
    ecx = ebx;
    esi = eax;
    PUSH32(esp, 0x0002D755u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002D755: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D7E6; /* je: equal / zero */

loc_0002D75D: ;
    ecx = edi;
    PUSH32(esp, 0x0002D764u); RECOMP_ABI_CALL(0x00029080u, sub_00029080); /* call 0x00029080 */

loc_0002D764: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D7E6; /* je: equal / zero */

loc_0002D768: ;
    PUSH32(esp, 0x0002D76Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002D76D: ;
    ecx = MEM32(edi + 0x410);
    edx = MEM32(eax);
    MEM32(esp + 0x7C) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x0002D781u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D781: ;
    fp_top() = fp_top() - MEMF(esp + 0x7C); /* fsub dword ptr [esp + 0x7c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C7084)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c7084] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D7E6; /* jne: not equal / not zero */

loc_0002D792: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 0x5BC9D0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x3C;
    MEM32(eax) = 0;
    PUSH32(esp, 0x0002D7C1u); RECOMP_ABI_CALL(0x0002C8C0u, sub_0002C8C0); /* call 0x0002C8C0 */

loc_0002D7C1: ;
    esi = esp + 0x10;
    eax = ebp;
    PUSH32(esp, 0x0002D7CCu); RECOMP_ABI_CALL(0x0002C970u, sub_0002C970); /* call 0x0002C970 */

loc_0002D7CC: ;
    ecx = ebp;
    PUSH32(esp, 0x0002D7D3u); RECOMP_ABI_CALL(0x0002B560u, sub_0002B560); /* call 0x0002B560 */

loc_0002D7D3: ;
    PUSH32(esp, 0x0002D7D8u); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_0002D7D8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0002D7E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D7E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002D7F0
 * Original: 0x0002D7F0 - 0x0002D91D (301 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D7F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D7F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    ebx = ebp + 0x1C;
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0002D80Cu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002D80C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D83C; /* je: equal / zero */

loc_0002D812: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002D818u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D818: ;
    edx = MEM32(0x4C0A60);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(eax + edx * 4 + 0x14);
    MEM32(esp + 0x18) = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D844; /* jne: not equal / not zero */

loc_0002D83C: ;
    MEM32(esp + 0x18) = 0;

loc_0002D844: ;
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0002D855u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002D855: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D87F; /* je: equal / zero */

loc_0002D85B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002D861u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D861: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D881; /* jne: not equal / not zero */

loc_0002D87F: ;
    edi = 0; /* xor self */

loc_0002D881: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D917; /* je: equal / zero */

loc_0002D88D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D917; /* je: equal / zero */

loc_0002D895: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D917; /* je: equal / zero */

loc_0002D89A: ;
    ecx = ebx;
    PUSH32(esp, 0x0002D8A1u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_0002D8A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D917; /* je: equal / zero */

loc_0002D8A5: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    eax = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0002D8B1u); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002D8B1: ;
    edx = MEM32(ebp + 0x18);
    ebx = eax;
    eax = esp;
    MEM32(eax) = edx;
    PUSH32(esp, 0x0002D8BFu); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002D8BF: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0002D917; /* je: equal / zero */

loc_0002D8C8: ;
    ecx = edi;
    PUSH32(esp, 0x0002D8CFu); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002D8CF: ;
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0002D8D8u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002D8D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D917; /* je: equal / zero */

loc_0002D8DC: ;
    ecx = edi;
    PUSH32(esp, 0x0002D8E3u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002D8E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D917; /* je: equal / zero */

loc_0002D8E8: ;
    eax = MEM32(ebp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D90E; /* je: equal / zero */

loc_0002D8EF: ;
    eax = MEM32(eax + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002D90E; /* je: equal / zero */

loc_0002D8F9: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0002D90Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002D90E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002D914u); RECOMP_ABI_CALL(0x0002CA20u, sub_0002CA20); /* call 0x0002CA20 */

loc_0002D914: ;
    esp = esp + 4;

loc_0002D917: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D920
 * Original: 0x0002D920 - 0x0002D9F9 (217 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D920: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3C8D48);
    PUSH32(esp, edi);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0002D93Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002D93B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D951; /* jne: not equal / not zero */

loc_0002D942: ;
    MEM32(esi) = 0x2B930;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002D951: ;
    PUSH32(esp, 0x3C8D3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002D95Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002D95C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D972; /* jne: not equal / not zero */

loc_0002D963: ;
    MEM32(esi) = 0x13D370;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002D972: ;
    PUSH32(esp, 0x3C8D2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002D97Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002D97D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D993; /* jne: not equal / not zero */

loc_0002D984: ;
    MEM32(esi) = 0x2D610;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002D993: ;
    PUSH32(esp, 0x3C8D18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002D99Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002D99E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D9B4; /* jne: not equal / not zero */

loc_0002D9A5: ;
    MEM32(esi) = 0x2B9B0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002D9B4: ;
    PUSH32(esp, 0x3C8D0C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002D9BFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002D9BF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D9D5; /* jne: not equal / not zero */

loc_0002D9C6: ;
    MEM32(esi) = 0x2BB50;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002D9D5: ;
    PUSH32(esp, 0x3C8D00);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002D9E0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002D9E0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002D9ED; /* jne: not equal / not zero */

loc_0002D9E7: ;
    MEM32(esi) = 0x2BBD0;

loc_0002D9ED: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DA00
 * Original: 0x0002DA00 - 0x0002DA55 (85 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DA00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3C8D64);
    PUSH32(esp, edi);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0002DA1Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DA1B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DA31; /* jne: not equal / not zero */

loc_0002DA22: ;
    MEM32(esi) = 0x2D690;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DA31: ;
    PUSH32(esp, 0x3C8D54);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002DA3Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DA3C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DA49; /* jne: not equal / not zero */

loc_0002DA43: ;
    MEM32(esi) = 0x2D7F0;

loc_0002DA49: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DA60
 * Original: 0x0002DA60 - 0x0002DD8B (811 bytes, 295 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DA60: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x3C8F30);
    PUSH32(esp, esi);
    MEM32(edi) = 0;
    PUSH32(esp, 0x0002DA7Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DA7B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DA91; /* jne: not equal / not zero */

loc_0002DA82: ;
    MEM32(edi) = 0x2BCC0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DA91: ;
    PUSH32(esp, 0x3C8F1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DA9Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DA9C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DAB2; /* jne: not equal / not zero */

loc_0002DAA3: ;
    MEM32(edi) = 0x2D1E0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DAB2: ;
    PUSH32(esp, 0x3C8F0C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DABDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DABD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DAD3; /* jne: not equal / not zero */

loc_0002DAC4: ;
    MEM32(edi) = 0x2C010;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DAD3: ;
    PUSH32(esp, 0x3C8EF8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DADEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DADE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DAF4; /* jne: not equal / not zero */

loc_0002DAE5: ;
    MEM32(edi) = 0x2C3C0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DAF4: ;
    PUSH32(esp, 0x3C8EE8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DAFFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DAFF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DB15; /* jne: not equal / not zero */

loc_0002DB06: ;
    MEM32(edi) = 0x2C0C0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DB15: ;
    PUSH32(esp, 0x3C8ED4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DB20u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DB20: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DB36; /* jne: not equal / not zero */

loc_0002DB27: ;
    MEM32(edi) = 0x2C180;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DB36: ;
    PUSH32(esp, 0x3C8EC8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DB41u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DB41: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DB57; /* jne: not equal / not zero */

loc_0002DB48: ;
    MEM32(edi) = 0x2BE60;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DB57: ;
    PUSH32(esp, 0x3C8EB4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DB62u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DB62: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DB78; /* jne: not equal / not zero */

loc_0002DB69: ;
    MEM32(edi) = 0x2C450;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DB78: ;
    PUSH32(esp, 0x3C8EA4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DB83u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DB83: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DB99; /* jne: not equal / not zero */

loc_0002DB8A: ;
    MEM32(edi) = 0x2B700;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DB99: ;
    PUSH32(esp, 0x3C8E98);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DBA4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DBA4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DBBA; /* jne: not equal / not zero */

loc_0002DBAB: ;
    MEM32(edi) = 0x2CE70;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DBBA: ;
    PUSH32(esp, 0x3C8E84);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DBC5u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DBC5: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DBDB; /* jne: not equal / not zero */

loc_0002DBCC: ;
    MEM32(edi) = 0x2CF80;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DBDB: ;
    PUSH32(esp, 0x3C8E6C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DBE6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DBE6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DBFC; /* jne: not equal / not zero */

loc_0002DBED: ;
    MEM32(edi) = 0x2D3B0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DBFC: ;
    PUSH32(esp, 0x3C8E58);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DC07u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DC07: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DC1D; /* jne: not equal / not zero */

loc_0002DC0E: ;
    MEM32(edi) = 0x2C210;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DC1D: ;
    PUSH32(esp, 0x3C8E40);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DC28u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DC28: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DC3E; /* jne: not equal / not zero */

loc_0002DC2F: ;
    MEM32(edi) = 0x2C300;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DC3E: ;
    PUSH32(esp, 0x3C8E2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DC49u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DC49: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DC5F; /* jne: not equal / not zero */

loc_0002DC50: ;
    MEM32(edi) = 0x2C360;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DC5F: ;
    PUSH32(esp, 0x3C8E18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DC6Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DC6A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DC80; /* jne: not equal / not zero */

loc_0002DC71: ;
    MEM32(edi) = 0x2D4B0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DC80: ;
    PUSH32(esp, 0x3C8E08);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DC8Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DC8B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DCA1; /* jne: not equal / not zero */

loc_0002DC92: ;
    MEM32(edi) = 0x2D610;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DCA1: ;
    PUSH32(esp, 0x3C8DF8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DCACu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DCAC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DCC2; /* jne: not equal / not zero */

loc_0002DCB3: ;
    MEM32(edi) = 0x13D370;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DCC2: ;
    PUSH32(esp, 0x3C8DE4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DCCDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DCCD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DCE3; /* jne: not equal / not zero */

loc_0002DCD4: ;
    MEM32(edi) = 0x2C830;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DCE3: ;
    PUSH32(esp, 0x3C8DD0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DCEEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DCEE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DD04; /* jne: not equal / not zero */

loc_0002DCF5: ;
    MEM32(edi) = 0x2D530;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DD04: ;
    PUSH32(esp, 0x3C8DB8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DD0Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DD0F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DD25; /* jne: not equal / not zero */

loc_0002DD16: ;
    MEM32(edi) = 0x2C4F0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DD25: ;
    PUSH32(esp, 0x3C8DA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DD30u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DD30: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DD46; /* jne: not equal / not zero */

loc_0002DD37: ;
    MEM32(edi) = 0x2C560;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DD46: ;
    PUSH32(esp, 0x3C8D88);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DD51u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DD51: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DD67; /* jne: not equal / not zero */

loc_0002DD58: ;
    MEM32(edi) = 0x2C5D0;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DD67: ;
    PUSH32(esp, 0x3C8D70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DD72u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DD72: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DD7F; /* jne: not equal / not zero */

loc_0002DD79: ;
    MEM32(edi) = 0x2C640;

loc_0002DD7F: ;
    ecx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DD90
 * Original: 0x0002DD90 - 0x0002DED8 (328 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DD90(void)
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

loc_0002DD90: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E28E);
    PUSH32(esp, eax);
    _fa = (uint32_t)(MEM8(0x485820)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x485820), 1 (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0002DDEC; /* jne: not equal / not zero */

loc_0002DDB0: ;
    MEM32(0x485820) = MEM32(0x485820) | 1;
    PUSH32(esp, 0x3C8CE8);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0002DDC9u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0002DDC9: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8CE8);
    PUSH32(esp, 0x0002DDD8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0002DDD8: ;
    ecx = eax;
    PUSH32(esp, 0x0002DDDFu); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0002DDDF: ;
    MEM32(0x48581C) = eax;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;

loc_0002DDEC: ;
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x1C;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0002DDFDu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002DDFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002DE2B; /* je: equal / zero */

loc_0002DE03: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002DE09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002DE09: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002DE2B; /* je: equal / zero */

loc_0002DE27: ;
    edi = esi;
    goto loc_0002DE2D;

loc_0002DE2B: ;
    edi = 0; /* xor self */

loc_0002DE2D: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002DEC7; /* je: equal / zero */

loc_0002DE39: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002DEC7; /* je: equal / zero */

loc_0002DE41: ;
    ecx = MEM32(edi + 0x2D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002DEC7; /* je: equal / zero */

loc_0002DE4B: ;
    PUSH32(esp, 0x48581C);
    PUSH32(esp, 0x0002DE55u); RECOMP_ABI_CALL(0x000B12F0u, sub_000B12F0); /* call 0x000B12F0 */

loc_0002DE55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DEC7; /* jne: not equal / not zero */

loc_0002DE59: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    eax = esp;
    MEM32(esp + 0x1C) = esp;
    MEM32(eax) = ecx;
    PUSH32(esp, 0x0002DE6Au); RECOMP_ABI_CALL(0x000293F0u, sub_000293F0); /* call 0x000293F0 */

loc_0002DE6A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002DEC7; /* je: equal / zero */

loc_0002DE71: ;
    PUSH32(esp, 0x0002DE76u); RECOMP_ABI_CALL(0x00096740u, xml1_guest_powerup_definition_allocate); /* call 0x00096740 */

loc_0002DE76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002DEC7; /* je: equal / zero */

loc_0002DE7A: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002DEC7; /* je: equal / zero */

loc_0002DE81: ;
    edx = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x74);
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(edx + 0x2C);
    PUSH32(esp, ecx);
    MEM32(eax + 0x2C) = ecx;
    ecx = esp;
    MEM32(esp + 0x1C) = esp;
    MEM32(eax + 0x9C) = 0x2B700;
    MEM32(eax + 0xA8) = 0x2CE70;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM32(ecx) = edx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0002DEC7u); RECOMP_ABI_CALL(0x0002AA90u, xml1_guest_actor_attach_powerup); /* call 0x0002AA90 */

loc_0002DEC7: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002DEE0
 * Original: 0x0002DEE0 - 0x0002DF98 (184 bytes, 67 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DEE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x3C8F84);
    PUSH32(esp, edi);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0002DEFBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DEFB: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DF11; /* jne: not equal / not zero */

loc_0002DF02: ;
    MEM32(esi) = 0x2CCA0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DF11: ;
    PUSH32(esp, 0x3C8F74);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002DF1Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DF1C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DF32; /* jne: not equal / not zero */

loc_0002DF23: ;
    MEM32(esi) = 0x2DD90;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DF32: ;
    PUSH32(esp, 0x3C8F64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002DF3Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DF3D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DF53; /* jne: not equal / not zero */

loc_0002DF44: ;
    MEM32(esi) = 0x2CDD0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DF53: ;
    PUSH32(esp, 0x3C8F50);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002DF5Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DF5E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DF74; /* jne: not equal / not zero */

loc_0002DF65: ;
    MEM32(esi) = 0x2B850;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DF74: ;
    PUSH32(esp, 0x3C8F3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002DF7Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0002DF7F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002DF8C; /* jne: not equal / not zero */

loc_0002DF86: ;
    MEM32(esi) = 0x2B8C0;

loc_0002DF8C: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DFA0
 * Original: 0x0002DFA0 - 0x0002E021 (129 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DFA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DFA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DFAEu); RECOMP_ABI_CALL(0x00066C20u, sub_00066C20); /* call 0x00066C20 */

loc_0002DFAE: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi);
    PUSH32(esp, 0x3C91A4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002DFC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002DFC1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0002DFDD; /* je: equal / zero */

loc_0002DFC7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002DFDD; /* je: equal / zero */

loc_0002DFCB: ;
    PUSH32(esp, 0x0002DFD0u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0002DFD0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x0002DFDDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002DFDD: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C9198);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002DFEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002DFEB: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002E01A; /* je: equal / zero */

loc_0002DFF1: ;
    PUSH32(esp, 0x0002DFF6u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_0002DFF6: ;
    edx = MEM32(esi);
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C91A4);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002E00Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E00C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x230); PUSH32(esp, 0x0002E01Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E01A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E030
 * Original: 0x0002E030 - 0x0002E03B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E030(void)
{

loc_0002E030: ;
    SET_LO8(eax, MEM8(ecx + 0x334));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E040
 * Original: 0x0002E040 - 0x0002E09A (90 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E040(void)
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

loc_0002E040: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C8);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0002E053u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002E053: ;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    fp_top() = MEMF(esp + 4) - fp_top(); /* fsubr dword ptr [esp + 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002E093; /* jne: not equal / not zero */

loc_0002E06A: ;
    PUSH32(esp, 0x0002E06Fu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002E06F: ;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    edx = esi + 0x2C4;
    MEMF(esi + 0x2C8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0002E08Cu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002E08C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0002E093: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002E0A0
 * Original: 0x0002E0A0 - 0x0002E0AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E0A0(void)
{

loc_0002E0A0: ;
    MEM32(ecx + 0x2C8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E0B0
 * Original: 0x0002E0B0 - 0x0002E10A (90 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E0B0(void)
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

loc_0002E0B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2D0);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0x0002E0C3u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002E0C3: ;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    fp_top() = MEMF(esp + 4) - fp_top(); /* fsubr dword ptr [esp + 4] */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002E103; /* jne: not equal / not zero */

loc_0002E0DA: ;
    PUSH32(esp, 0x0002E0DFu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002E0DF: ;
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    edx = esi + 0x2CC;
    MEMF(esi + 0x2D0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0002E0FCu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002E0FC: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0002E103: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002E110
 * Original: 0x0002E110 - 0x0002E14C (60 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0002E110(void)
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

loc_0002E110: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002E147; /* jp: parity */

loc_0002E121: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002E147; /* jp: parity */

loc_0002E130: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002E147; /* jp: parity */

loc_0002E13F: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0002E147: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002E150
 * Original: 0x0002E150 - 0x0002E178 (40 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E150: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002E158u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_0002E158: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002E174; /* jne: not equal / not zero */

loc_0002E15C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x44BB5C);
    ecx = esi;
    PUSH32(esp, 0x0002E16Du); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002E16D: ;
    MEM8(0x48584F) = 1;

loc_0002E174: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E180
 * Original: 0x0002E180 - 0x0002E192 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E180(void)
{

loc_0002E180: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x44BB54);
    PUSH32(esp, 0x0002E18Fu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002E18F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E1A0
 * Original: 0x0002E1A0 - 0x0002E1B2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E1A0(void)
{

loc_0002E1A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x44BB4C);
    PUSH32(esp, 0x0002E1AFu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002E1AF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E1C0
 * Original: 0x0002E1C0 - 0x0002E1EC (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E1C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0002E1C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x44BB1C);
    esi = ecx;
    PUSH32(esp, 0x0002E1D2u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002E1D2: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x44BB20);
    PUSH32(esp, 0x0002E1E8u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002E1E8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002E1F0
 * Original: 0x0002E1F0 - 0x0002E20E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E1F0(void)
{

loc_0002E1F0: ;
    SET_LO8(eax, MEM8(esp + 8));
    SET_LO8(edx, MEM8(ecx + 0x334));
    SET_LO8(eax, LO8(eax) << 5);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 0x20);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x334) = LO8(edx);
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002E210
 * Original: 0x0002E210 - 0x0002E215 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E210(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E210: ;
    g_seh_ebp = ebp; sub_00046880(); return; /* tail jmp 0x00046880 */

}

/**
 * sub_0002E220
 * Original: 0x0002E220 - 0x0002E257 (55 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E220: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0002E230; /* je: equal / zero */

loc_0002E22C: ;
    PUSH32(esp, 0);
    goto loc_0002E235;

loc_0002E230: ;
    PUSH32(esp, 0x3F800000);

loc_0002E235: ;
    PUSH32(esp, 0x0002E23Au); RECOMP_ABI_CALL(0x00076B40u, xml1_guest_entity_set_alpha); /* call 0x00076B40 */

loc_0002E23A: ;
    SET_LO8(edx, MEM8(esi + 0x336));
    SET_LO8(ebx, LO8(ebx) << 2);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    SET_LO8(ebx, LO8(ebx) & 4);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    MEM8(esi + 0x336) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E260
 * Original: 0x0002E260 - 0x0002E27C (28 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E260(void)
{

loc_0002E260: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(ecx + 0x337));
    SET_LO8(eax, LO8(eax) << 4);
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(ecx + 0x337) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E280
 * Original: 0x0002E280 - 0x0002E28A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E280(void)
{

loc_0002E280: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0002E289u); RECOMP_ABI_CALL(0x0002B250u, sub_0002B250); /* call 0x0002B250 */

loc_0002E289: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E290
 * Original: 0x0002E290 - 0x0002E297 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E290(void)
{

loc_0002E290: ;
    eax = ecx + 0x2DC;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E2A0
 * Original: 0x0002E2A0 - 0x0002E2BB (27 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E2A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E2A0: ;
    PUSH32(esp, 3);
    ecx = ecx + 0x2DC;
    PUSH32(esp, 0x0002E2ADu); RECOMP_ABI_CALL(0x000ED320u, sub_000ED320); /* call 0x000ED320 */

loc_0002E2AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002E2B8; /* je: equal / zero */

loc_0002E2B1: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x50)); return; /* indirect tail jmp */

loc_0002E2B8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002E2C0
 * Original: 0x0002E2C0 - 0x0002E2DB (27 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E2C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E2C0: ;
    PUSH32(esp, 3);
    ecx = ecx + 0x2DC;
    PUSH32(esp, 0x0002E2CDu); RECOMP_ABI_CALL(0x000ED320u, sub_000ED320); /* call 0x000ED320 */

loc_0002E2CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002E2D8; /* je: equal / zero */

loc_0002E2D1: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x54)); return; /* indirect tail jmp */

loc_0002E2D8: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002E2E0
 * Original: 0x0002E2E0 - 0x0002E2F0 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E2E0(void)
{

loc_0002E2E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 2;
    eax = ecx + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E2F0
 * Original: 0x0002E2F0 - 0x0002E310 (32 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E2F0(void)
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

loc_0002E2F0: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002E308; /* jnp: not parity */

loc_0002E302: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0002E308: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002E310
 * Original: 0x0002E310 - 0x0002E31A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E310(void)
{

loc_0002E310: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002E318u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0002E318: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E320
 * Original: 0x0002E320 - 0x0002E37A (90 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E320(void)
{

loc_0002E320: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFBFFFFFFu;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(eax + 4) = ecx;
    esi = esi & 0xF7FFFFFFu;
    edx = esi;
    edx = edx & 0xEFFFFFFFu;
    MEM32(eax + 4) = esi;
    ecx = edx;
    ecx = ecx & 0xDFFFFFFFu;
    MEM32(eax + 4) = edx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    edx = ecx;
    ecx = ecx & 0x1F;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(eax + edx * 4 + 4);
    edx = eax + edx * 4 + 4;
    ecx = ecx | esi;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x0002E376u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_0002E376: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E380
 * Original: 0x0002E380 - 0x0002E39A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E380(void)
{

loc_0002E380: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0002E38Fu); RECOMP_ABI_CALL(0x00026DD0u, sub_00026DD0); /* call 0x00026DD0 */

loc_0002E38F: ;
    ecx = esi;
    PUSH32(esp, 0x0002E396u); RECOMP_ABI_CALL(0x00066B60u, sub_00066B60); /* call 0x00066B60 */

loc_0002E396: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E3A0
 * Original: 0x0002E3A0 - 0x0002E3C0 (32 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E3A0(void)
{

loc_0002E3A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi);
    MEM32(esi + 0x168) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x0002E3B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E3B5: ;
    ecx = esi;
    PUSH32(esp, 0x0002E3BCu); RECOMP_ABI_CALL(0x00066BE0u, sub_00066BE0); /* call 0x00066BE0 */

loc_0002E3BC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E3C0
 * Original: 0x0002E3C0 - 0x0002E3D0 (16 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E3C0(void)
{

loc_0002E3C0: ;
    eax = ecx + 0x23D;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E3D0
 * Original: 0x0002E3D0 - 0x0002E44F (127 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E3D0(void)
{

loc_0002E3D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E2D2);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3C9204;
    MEM32(esp + 0x10) = 3;
    PUSH32(esp, 0x0002E400u); RECOMP_ABI_CALL(0x00093A30u, sub_00093A30); /* call 0x00093A30 */

loc_0002E400: ;
    ecx = esi + 0x26C;
    MEM8(esp + 0x10) = 2;
    PUSH32(esp, 0x0002E410u); RECOMP_ABI_CALL(0x0006E220u, sub_0006E220); /* call 0x0006E220 */

loc_0002E410: ;
    ecx = esi + 0x260;
    MEM8(esp + 0x10) = 1;
    PUSH32(esp, 0x0002E420u); RECOMP_ABI_CALL(0x0006E220u, sub_0006E220); /* call 0x0006E220 */

loc_0002E420: ;
    ecx = esi + 0x25C;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0002E430u); RECOMP_ABI_CALL(0x0006E220u, sub_0006E220); /* call 0x0006E220 */

loc_0002E430: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0002E43Fu); RECOMP_ABI_CALL(0x00075970u, sub_00075970); /* call 0x00075970 */

loc_0002E43F: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E450
 * Original: 0x0002E450 - 0x0002E457 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E450(void)
{

loc_0002E450: ;
    eax = ecx + 0x138;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E460
 * Original: 0x0002E460 - 0x0002E4CA (106 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E460(void)
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

loc_0002E460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(edi + 4);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(edi + 8);
    ebx = esi + 0x1D8;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(esi + 0x34) = edx;
    PUSH32(esp, 0x0002E488u); RECOMP_ABI_CALL(0x00074340u, sub_00074340); /* call 0x00074340 */

loc_0002E488: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C93C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c93c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002E4A7; /* jp: parity */

loc_0002E495: ;
    eax = MEM32(edi);
    MEM32(ebx) = eax;
    ecx = MEM32(edi + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(edi + 8);
    MEM32(ebx + 8) = edx;
    goto loc_0002E4B3;

loc_0002E4A7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x0002E4B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E4B3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x0002E4BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E4BD: ;
    ecx = esi;
    PUSH32(esp, 0x0002E4C4u); RECOMP_ABI_CALL(0x00066BE0u, sub_00066BE0); /* call 0x00066BE0 */

loc_0002E4C4: ;
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
 * sub_0002E4D0
 * Original: 0x0002E4D0 - 0x0002E500 (48 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E4D0(void)
{

loc_0002E4D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    MEM32(esi + 0x2C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x30) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0002E4F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E4F0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0002E4FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E4FC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002E500
 * Original: 0x0002E500 - 0x0002E540 (64 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E500(void)
{

loc_0002E500: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 0x1D8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x1DC) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x1E0) = eax;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x0002E53Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E53C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002E540
 * Original: 0x0002E540 - 0x0002E57A (58 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E540(void)
{

loc_0002E540: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 0x1D8) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x1DC) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x1E0) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x0002E577u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E577: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E580
 * Original: 0x0002E580 - 0x0002E58F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E580(void)
{

loc_0002E580: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 0x23D) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E590
 * Original: 0x0002E590 - 0x0002E596 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E590(void)
{

loc_0002E590: ;
    eax = 0x4C0A5C;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E5A0
 * Original: 0x0002E5A0 - 0x0002E5A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E5A0(void)
{

loc_0002E5A0: ;
    eax = 0x3C93C4;
    esp += 4; return; /* ret */

}



/**
 * sub_0002E5F0
 * Original: 0x0002E5F0 - 0x0002E625 (53 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0002E5F0(void)
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

loc_0002E5F0: ;
    PUSH32(esp, ecx);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x2BC);
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002E61B; /* jp: parity */

loc_0002E60B: ;
    edx = MEM32(esp + 8);
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x248) = edx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0002E61B: ;
    MEMF(ecx + 0x248) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002E630
 * Original: 0x0002E630 - 0x0002E64E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E630: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002E638u); RECOMP_ABI_CALL(0x0002E3D0u, sub_0002E3D0); /* call 0x0002E3D0 */

loc_0002E638: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002E648; /* je: equal / zero */

loc_0002E63F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002E645u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0002E645: ;
    esp = esp + 4;

loc_0002E648: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E650
 * Original: 0x0002E650 - 0x0002E67F (47 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E650(void)
{

loc_0002E650: ;
    SET_LO8(eax, MEM8(ecx + 0x335));
    edx = MEM32(esp + 8);
    SET_LO8(eax, LO8(eax) | 0x40);
    MEM8(ecx + 0x335) = LO8(eax);
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x310) = edx;
    MEM32(ecx + 0x314) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002E680
 * Original: 0x0002E680 - 0x0002E6AA (42 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E680(void)
{

loc_0002E680: ;
    MEM8(ecx + 0x335) = MEM8(ecx + 0x335) & 0xBF;
    eax = MEM32(0x5BC9D0);
    MEM32(ecx + 0x30C) = eax;
    edx = MEM32(0x5BC9D4);
    MEM32(ecx + 0x310) = edx;
    eax = MEM32(0x5BC9D8);
    MEM32(ecx + 0x314) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E6B0
 * Original: 0x0002E6B0 - 0x0002E6B3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E6B0(void)
{

loc_0002E6B0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}



/**
 * sub_0002E6E0
 * Original: 0x0002E6E0 - 0x0002E6F0 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E6E0(void)
{

loc_0002E6E0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 8;
    eax = ecx + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E6F0
 * Original: 0x0002E6F0 - 0x0002E8B3 (451 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E6F0(void)
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

loc_0002E6F0: ;
    raven_actor_scale_owner_reset(ecx);
    xml1_leader_event_retire_actor(ecx);
    raven_actor_transform_reset(ecx);
    xml1_bishop_contact_reset(ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x3F0) = edi;
    MEM32(esi + 0x3FC) = edi;
    MEM32(esi + 0x400) = edi;
    MEM32(esi + 0x3F4) = edi;
    MEM32(esi + 0x404) = edi;
    MEM32(esi + 0x3EC) = edi;
    MEM32(esi + 0x410) = edi;
    eax = MEM32(0x498D90);
    PUSH32(esp, edi);
    MEM32(esi + 0x41C) = eax;
    MEM16(esi + 0x420) = 3;
    MEM32(esi + 0x414) = edi;
    MEM32(esi + 0x418) = edi;
    MEM32(esi + 0x550) = edi;
    MEM32(0x485838) = edi;
    PUSH32(esp, 0x3B);
    MEM32(esi + 0x498) = edi;
    MEM32(esi + 0x49C) = edi;
    MEM32(esi + 0x4A0) = edi;
    MEM32(esi + 0x4A4) = edi;
    MEM32(esi + 0x4A8) = edi;
    MEM32(esi + 0x28C) = edi;
    PUSH32(esp, 0x0002E778u); RECOMP_ABI_CALL(0x0002B100u, sub_0002B100); /* call 0x0002B100 */

loc_0002E778: ;
    ecx = MEM32(0x498D90);
    MEM32(0x485858) = ecx;
    MEM32(0x485854) = edi;
    SET_LO8(edx, MEM8(esi + 0x334));
    SET_LO8(ecx, MEM8(esi + 0x54C));
    SET_LO8(eax, MEM8(esi + 0x54D));
    SET_LO8(edx, LO8(edx) & 0xF7);
    MEM8(esi + 0x334) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x335));
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(esi + 0x54D) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x336));
    SET_LO8(edx, LO8(edx) & 0x3F);
    MEM8(esi + 0x335) = LO8(edx);
    SET_LO8(edx, MEM8(esi + 0x235));
    SET_LO8(ecx, LO8(ecx) & 3);
    MEM8(esi + 0x54C) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x337));
    SET_LO8(eax, LO8(eax) & 0xC0);
    MEM8(esi + 0x336) = LO8(eax);
    SET_LO8(edx, LO8(edx) & 0xFE);
    MEM8(esi + 0x235) = LO8(edx);
    SET_LO8(ecx, LO8(ecx) & 0xED);
    MEM8(esi + 0x337) = LO8(ecx);
    edx = MEM32(0x498D90);
    MEM32(esi + 0x338) = edx;
    eax = MEM32(0x498D90);
    MEM32(esi + 0x554) = eax;
    ecx = MEM32(0x498D90);
    MEM32(esi + 0x558) = ecx;
    edx = MEM32(0x498D90);
    MEM32(esi + 0x55C) = edx;
    eax = MEM32(0x498D90);
    MEM32(esi + 0x33C) = eax;
    MEM32(esi + 0x300) = edi;
    MEM32(esi + 0x304) = edi;
    MEM32(esi + 0x324) = edi;
    MEM32(esi + 0x478) = 0x3F800000;
    PUSH32(esp, 0x0002E84Cu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002E84C: ;
    MEMF(esi + 0x480) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002E857u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002E857: ;
    MEMF(esi + 0x484) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x10);
    ecx = esi + 0x3B8;
    MEM32(esi + 0x32C) = edi;
    MEM32(esi + 0x560) = edi;
    PUSH32(esp, 0x0002E876u); RECOMP_ABI_CALL(0x00083730u, sub_00083730); /* call 0x00083730 */

loc_0002E876: ;
    ecx = esi;
    PUSH32(esp, 0x0002E87Du); RECOMP_ABI_CALL(0x0003B010u, sub_0003B010); /* call 0x0003B010 */

loc_0002E87D: ;
    ecx = esi;
    PUSH32(esp, 0x0002E884u); RECOMP_ABI_CALL(0x0003A1B0u, sub_0003A1B0); /* call 0x0003A1B0 */

loc_0002E884: ;
    MEMF(esi + 0x3F4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002E88Fu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002E88F: ;
    MEMF(esi + 0x3F8) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(MEM32(esi + 0x5B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x5B4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8B0; /* je: equal / zero */

loc_0002E89D: ;
    PUSH32(esp, 0x0002E8A2u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_0002E8A2: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0002E8B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E8B0: ;
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
 * sub_0002E8C0
 * Original: 0x0002E8C0 - 0x0002E8FA (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E8C0(void)
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

loc_0002E8C0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x485847));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0002E8E9; /* jne: not equal / not zero */

loc_0002E8CD: ;
    PUSH32(esp, 0x0002E8D2u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002E8D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E8E0; /* jne: not equal / not zero */

loc_0002E8D7: ;
    SET_LO8(eax, MEM8(0x485846));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002E8E9; /* jne: not equal / not zero */

loc_0002E8E0: ;
    fp_push(MEMF(esi + 0x248)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002E8E9: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2BC);
    MEM32(esp + 4) = eax;
    POP32(esp, esi);
    fp_push((double)SMEM32(esp)); /* fild */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002E900
 * Original: 0x0002E900 - 0x0002E962 (98 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E900: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    eax = eax >> 0xF;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_0002E93C; /* je: equal / zero */

loc_0002E915: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002E925u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E925: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002E92Bu); RECOMP_ABI_CALL(0x0012CB60u, sub_0012CB60); /* call 0x0012CB60 */

loc_0002E92B: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002E93C; /* je: equal / zero */

loc_0002E932: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_0002E93C: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0002E948u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E948: ;
    edx = MEM32(eax);
    MEM32(edi) = edx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002E970
 * Original: 0x0002E970 - 0x0002E9EB (123 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E970: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    eax = eax >> 0xF;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    if (TEST_Z(_fa, _fb)) goto loc_0002E9B3; /* je: equal / zero */

loc_0002E98A: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002E99Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E99B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002E9A1u); RECOMP_ABI_CALL(0x0012CBA0u, sub_0012CBA0); /* call 0x0012CBA0 */

loc_0002E9A1: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002E9B3; /* je: equal / zero */

loc_0002E9A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

loc_0002E9B3: ;
    eax = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0002E9BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002E9BF: ;
    edx = MEM32(eax);
    MEM32(ebx) = edx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(eax + 8);
    MEM32(ebx + 8) = edx;
    eax = MEM32(esi + 0x2C);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x30);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 0x34);
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002E9F0
 * Original: 0x0002E9F0 - 0x0002EA7B (139 bytes, 58 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E9F0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    eax = eax >> 0xF;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    if (TEST_Z(_fa, _fb)) goto loc_0002EA33; /* je: equal / zero */

loc_0002EA0A: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002EA1Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EA1B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002EA21u); RECOMP_ABI_CALL(0x0012CC00u, sub_0012CC00); /* call 0x0012CC00 */

loc_0002EA21: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002EA33; /* je: equal / zero */

loc_0002EA28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

loc_0002EA33: ;
    eax = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0002EA3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EA3F: ;
    edx = MEM32(eax);
    MEM32(ebx) = edx;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(eax + 8);
    esi = esi + 0x2C;
    eax = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(ebx + 8) = edx;
    PUSH32(esp, 0x0002EA5Du); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_0002EA5D: ;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    esp = esp + 8;
    MEM32(edi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002EA80
 * Original: 0x0002EA80 - 0x0002EA9D (29 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EA80: ;
    eax = MEM32(ecx + 0x2D8);
    SET_LO8(edx, MEM8(eax + 0x3A0));
    eax = eax + 0x3A0;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x10 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EA9C; /* jne: not equal / not zero */

loc_0002EA96: ;
    eax = ecx + 0x23D;

loc_0002EA9C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002EAA0
 * Original: 0x0002EAA0 - 0x0002EAE3 (67 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002EAACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EAAC: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EADC; /* je: equal / zero */

loc_0002EAB1: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002EADC; /* je: equal / zero */

loc_0002EAB9: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EADC; /* je: equal / zero */

loc_0002EABE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002EAC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EAC8: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0002EACFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EACF: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002EAD7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EAD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0002EADC: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002EAF0
 * Original: 0x0002EAF0 - 0x0002EB33 (67 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EAF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002EAFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EAFC: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EB2C; /* je: equal / zero */

loc_0002EB01: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002EB2C; /* je: equal / zero */

loc_0002EB09: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EB2C; /* je: equal / zero */

loc_0002EB0E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002EB18u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EB18: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0002EB1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EB1F: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0002EB27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EB27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0002EB2C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002EB40
 * Original: 0x0002EB40 - 0x0002EB66 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0002EB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EB40: ;
    eax = MEM32(ecx + 0x1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002EB63; /* je: equal / zero */

loc_0002EB4A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x17C); PUSH32(esp, 0x0002EB52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EB52: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002EB59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EB59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002EB63; /* je: equal / zero */

loc_0002EB5D: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0002EB63: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0002EB70
 * Original: 0x0002EB70 - 0x0002EBB2 (66 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EB70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0002EB8C; /* jne: not equal / not zero */

loc_0002EB7C: ;
    PUSH32(esp, 0x4F32A8);
    PUSH32(esp, 0x0002EB86u); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_0002EB86: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002EBAD; /* je: equal / zero */

loc_0002EB8C: ;
    MEM32(edi + 0x2F4) = esi;
    PUSH32(esp, 0x0002EB97u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_0002EB97: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002EBAD; /* je: equal / zero */

loc_0002EB9B: ;
    _fa = (uint32_t)(MEM8(edi + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x334), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002EBAD; /* jne: not equal / not zero */

loc_0002EBA4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002EBAAu); RECOMP_ABI_CALL(0x000C7B40u, sub_000C7B40); /* call 0x000C7B40 */

loc_0002EBAA: ;
    esp = esp + 4;

loc_0002EBAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002EBC0
 * Original: 0x0002EBC0 - 0x0002EC18 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0002EBC0(void)
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

loc_0002EBC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x4F32A8);
    esi = ecx;
    edi = 0; /* xor self */
    PUSH32(esp, 0x0002EBD0u); RECOMP_ABI_CALL(0x00038210u, sub_00038210); /* call 0x00038210 */

loc_0002EBD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002EBEB; /* je: equal / zero */

loc_0002EBD4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    ecx = esi + 0x2DC;
    edi = eax;
    PUSH32(esp, 0x0002EBE5u); RECOMP_ABI_CALL(0x000ED700u, sub_000ED700); /* call 0x000ED700 */

loc_0002EBE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002EBEB; /* je: equal / zero */

loc_0002EBE9: ;
    edi = eax;

loc_0002EBEB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002EC00u); RECOMP_ABI_CALL(0x00040DF0u, sub_00040DF0); /* call 0x00040DF0 */

loc_0002EC00: ;
    MEM32(esi + 0x3F4) = 0;
    PUSH32(esp, 0x0002EC0Fu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002EC0F: ;
    MEMF(esi + 0x3F8) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0002EC20
 * Original: 0x0002EC20 - 0x0002EC36 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EC20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002EC20: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002EC28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EC28: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002EC2Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EC2F: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_0002EC40
 * Original: 0x0002EC40 - 0x0002EC67 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x334), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002EC65; /* jne: not equal / not zero */

loc_0002EC4C: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    PUSH32(esp, 0x0002EC5Eu); RECOMP_ABI_CALL(0x0003B4F0u, sub_0003B4F0); /* call 0x0003B4F0 */

loc_0002EC5E: ;
    MEM8(esi + 0x334) = MEM8(esi + 0x334) | 1;

loc_0002EC65: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002EC70
 * Original: 0x0002EC70 - 0x0002EC91 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EC70(void)
{

loc_0002EC70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002EC78u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002EC78: ;
    ecx = MEM32(esi + 0x2D8);
    edx = MEM32(eax);
    ecx = ecx + 0x20C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0002EC8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EC8F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002ECA0
 * Original: 0x0002ECA0 - 0x0002ED44 (164 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ECA0(void)
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

loc_0002ECA0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0002ECE9; /* jle: less or equal (signed <=) */

loc_0002ECB2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002ECD4; /* jne: not equal / not zero */

loc_0002ECB6: ;
    fp_push(MEMF(0x485838)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002ECC9u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002ECC9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002ED3E; /* jnp: not parity */

loc_0002ECD4: ;
    PUSH32(esp, 0x0002ECD9u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002ECD9: ;
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    fp_top() = fp_top() + MEMF(0x3C837C); /* fadd dword ptr [0x3c837c] */
    MEMF(0x485838) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002ECE9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002ED0B; /* jne: not equal / not zero */

loc_0002ECED: ;
    fp_push(MEMF(esi + 0x404)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002ED00u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002ED00: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002ED3E; /* jnp: not parity */

loc_0002ED0B: ;
    PUSH32(esp, 0x0002ED10u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002ED10: ;
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x44BB28);
    ecx = esi;
    MEMF(esi + 0x404) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x44BB2C) = edi;
    MEM32(0x44BB30) = eax;
    PUSH32(esp, 0x0002ED3Eu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002ED3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002ED50
 * Original: 0x0002ED50 - 0x0002ED83 (51 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ED50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002ED50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002ED58u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0002ED58: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002ED5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002ED5F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002ED7F; /* jne: not equal / not zero */

loc_0002ED63: ;
    ecx = MEM32(esp + 0xC);
    SET_LO16(eax, MEM16(esp + 8));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x44BB34);
    ecx = esi;
    MEM16(0x44BB38) = LO16(eax);
    PUSH32(esp, 0x0002ED7Fu); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002ED7F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002ED90
 * Original: 0x0002ED90 - 0x0002EDA8 (24 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ED90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002ED90: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(0x44BB40) = LO16(eax);
    MEM32(esp + 4) = 0x44BB3C;
    g_seh_ebp = ebp; sub_000277E0(); return; /* tail jmp 0x000277E0 */

}

/**
 * sub_0002EDB0
 * Original: 0x0002EDB0 - 0x0002EDC8 (24 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EDB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002EDB0: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(0x44BB48) = LO16(eax);
    MEM32(esp + 4) = 0x44BB44;
    g_seh_ebp = ebp; sub_000277E0(); return; /* tail jmp 0x000277E0 */

}

/**
 * sub_0002EDD0
 * Original: 0x0002EDD0 - 0x0002EE4D (125 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EDD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002EDD0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) & 0x7FFFFFFF;
    ecx = esi;
    PUSH32(esp, 0x0002EDE5u); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_0002EDE5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x0002EDEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EDEF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x0002EDF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EDF9: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EE34; /* je: equal / zero */

loc_0002EE05: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002EE0Cu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0002EE0C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43160000);
    PUSH32(esp, 0x44A28000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x1C;
    edi = eax;
    eax = MEM32(esi);
    ebp = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0002EE2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EE2B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x5C); PUSH32(esp, 0x0002EE32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EE32: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0002EE34: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x44BB18);
    ecx = esi;
    PUSH32(esp, 0x0002EE45u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_0002EE45: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002EE50
 * Original: 0x0002EE50 - 0x0002EF03 (179 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EE50(void)
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

loc_0002EE50: ;
    SET_LO8(eax, MEM8(0x44BB09));
    esp = esp - 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0002EEFC; /* je: equal / zero */

loc_0002EE63: ;
    eax = MEM32(esi + 0x2D8);
    _fa = (uint32_t)(MEM8(eax + 0x3A1)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x3A1), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002EED9; /* jne: not equal / not zero */

loc_0002EE72: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002EE7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EE7C: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0002EE85u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EE85: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002EE8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EE8F: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0002EE98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EE98: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002EEA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EEA2: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0002EEABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EEAB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002EEB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EEB5: ;
    ecx = MEM32(eax);
    edx = esp + 4;
    MEM32(esp + 4) = 0x3F4CCCCD;
    MEM32(esp + 8) = 0x3F4CCCCD;
    MEM32(esp + 0xC) = 0x3F4CCCCD;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0002EED9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EED9: ;
    PUSH32(esp, 0x0002EEDEu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002EEDE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0002EEE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EEE5: ;
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    eax = MEM32(esi);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1F0); PUSH32(esp, 0x0002EEFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EEFC: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002EF10
 * Original: 0x0002EF10 - 0x0002EF70 (96 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EF10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0002EF6B; /* je: equal / zero */

loc_0002EF1C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002EF22u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0002EF22: ;
    ecx = MEM32(esi + 0x1C);
    ebx = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x10);
    SET_LO8(ebx, MEM8(ecx + 0x60));
    esi = MEM32(ecx + 0x18);
    SET_LO8(ebx, LO8(ebx) >> 2);
    edx = MEM32(eax);
    ebx = ebx & 0xFFFFFF01u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = ebx >> 0xB;
    ebx = ebx & 0xFFFFFF01u;
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = ebx >> 2;
    ebx = ebx & 0xFFFFFF01u;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002EF6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EF6A: ;
    POP32(esp, ebx);

loc_0002EF6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002EF70
 * Original: 0x0002EF70 - 0x0002EF7D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EF70(void)
{

loc_0002EF70: ;
    eax = MEM32(ecx + 0x2D8);
    SET_LO8(eax, MEM8(eax + 0x3A4));
    esp += 4; return; /* ret */

}

/**
 * sub_0002EF80
 * Original: 0x0002EF80 - 0x0002F009 (137 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EF80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0002EF80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0002EF90u); RECOMP_ABI_CALL(0x00091000u, sub_00091000); /* call 0x00091000 */

loc_0002EF90: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x0002EF97u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_0002EF97: ;
    ecx = MEM32(edi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002EFA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002EFA6: ;
    fp_push(MEMF(edi + 0x240)); /* fld float */
    PUSH32(esp, 0x0002EFB1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0002EFB1: ;
    ecx = esi;
    MEM8(esp + 0x14) = 0;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x0002EFC1u); RECOMP_ABI_CALL(0x0006BFC0u, sub_0006BFC0); /* call 0x0006BFC0 */

loc_0002EFC1: ;
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0002EFCFu); RECOMP_ABI_CALL(0x0006C020u, sub_0006C020); /* call 0x0006C020 */

loc_0002EFCF: ;
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002EFDDu); RECOMP_ABI_CALL(0x0006C020u, sub_0006C020); /* call 0x0006C020 */

loc_0002EFDD: ;
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0002EFEBu); RECOMP_ABI_CALL(0x0006C020u, sub_0006C020); /* call 0x0006C020 */

loc_0002EFEB: ;
    PUSH32(esp, 2);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0002EFF9u); RECOMP_ABI_CALL(0x0006BFD0u, sub_0006BFD0); /* call 0x0006BFD0 */

loc_0002EFF9: ;
    ecx = esi;
    PUSH32(esp, 0x0002F000u); RECOMP_ABI_CALL(0x0006C070u, sub_0006C070); /* call 0x0006C070 */

loc_0002F000: ;
    xml1_leader_zone_capture(LO8(ebx) ? edi : 0, esi);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
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
 * sub_0002F010
 * Original: 0x0002F010 - 0x0002F0F8 (232 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F010(void)
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

loc_0002F010: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 9), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0002F0A1; /* jne: not equal / not zero */

loc_0002F022: ;
    PUSH32(esp, 0x0002F027u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_0002F027: ;
    ecx = MEM32(edi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0002F036u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F036: ;
    eax = 0; /* xor self */
    ecx = esi;
    MEM32(esp + 0xC) = eax;
    MEM8(esp + 0x30) = LO8(eax);
    PUSH32(esp, 0x0002F047u); RECOMP_ABI_CALL(0x0006BFC0u, sub_0006BFC0); /* call 0x0006BFC0 */

loc_0002F047: ;
    PUSH32(esp, 1);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0002F055u); RECOMP_ABI_CALL(0x0006C020u, sub_0006C020); /* call 0x0006C020 */

loc_0002F055: ;
    PUSH32(esp, 1);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002F063u); RECOMP_ABI_CALL(0x0006C020u, sub_0006C020); /* call 0x0006C020 */

loc_0002F063: ;
    PUSH32(esp, 1);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0002F071u); RECOMP_ABI_CALL(0x0006C020u, sub_0006C020); /* call 0x0006C020 */

loc_0002F071: ;
    PUSH32(esp, 2);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0002F07Fu); RECOMP_ABI_CALL(0x0006C020u, sub_0006C020); /* call 0x0006C020 */

loc_0002F07F: ;
    ecx = esi;
    PUSH32(esp, 0x0002F086u); RECOMP_ABI_CALL(0x0006C070u, sub_0006C070); /* call 0x0006C070 */

loc_0002F086: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    eax = MEM32(edi);
    MEM32(esp + 0x10) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x0002F0A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F0A1: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0002F0A9u); RECOMP_ABI_CALL(0x00091280u, sub_00091280); /* call 0x00091280 */

loc_0002F0A9: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002F0ED; /* jne: not equal / not zero */

loc_0002F0B1: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0002F0BDu); RECOMP_ABI_CALL(0x0006C410u, sub_0006C410); /* call 0x0006C410 */

loc_0002F0BD: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002F0C9u); RECOMP_ABI_CALL(0x0006C3D0u, sub_0006C3D0); /* call 0x0006C3D0 */

loc_0002F0C9: ;
    edx = MEM32(edi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x1C) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x150); PUSH32(esp, 0x0002F0EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F0ED: ;
    if (LO8(ebx)) xml1_leader_actor_restored(edi, esi);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002F100
 * Original: 0x0002F100 - 0x0002F1B6 (182 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F100(void)
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

loc_0002F100: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0002F10Eu); RECOMP_ABI_CALL(0x00074EE0u, sub_00074EE0); /* call 0x00074EE0 */

loc_0002F10E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F165; /* je: equal / zero */

loc_0002F112: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x178); PUSH32(esp, 0x0002F11Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F11C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F1B1; /* je: equal / zero */

loc_0002F124: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002F12Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F12E: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0002F135u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F135: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F1B1; /* je: equal / zero */

loc_0002F139: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002F145u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F145: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0002F14Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F14C: ;
    edi = eax;
    ebp = MEM32(edi);
    PUSH32(esp, 0x0002F155u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002F155: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp + 0xB4); PUSH32(esp, 0x0002F161u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F161: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    goto loc_0002F194;

loc_0002F165: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F194; /* je: equal / zero */

loc_0002F178: ;
    _fa = (uint32_t)(MEM8(esi + 0x2B8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2B8), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F194; /* je: equal / zero */

loc_0002F181: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D4CCCCD);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0002F194u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F194: ;
    SET_LO8(eax, MEM8(0x44BB01));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F1B1; /* je: equal / zero */

loc_0002F19D: ;
    PUSH32(esp, 0x0002F1A2u); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002F1A2: ;
    ecx = MEM32(esi + 0x2D4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0002F1B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F1B1: ;
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
 * sub_0002F1C0
 * Original: 0x0002F1C0 - 0x0002F1FC (60 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F1C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xE);
    esi = ecx;
    PUSH32(esp, 0x0002F1D0u); RECOMP_ABI_CALL(0x00026DD0u, sub_00026DD0); /* call 0x00026DD0 */

loc_0002F1D0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0002F1D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F1D8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x335));
    if (TEST_NZ(_fa, _fb)) goto loc_0002F1EF; /* jne: not equal / not zero */

loc_0002F1E2: ;
    SET_LO8(eax, LO8(eax) | 0x80);
    MEM8(esi + 0x335) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0002F1EF: ;
    SET_LO8(eax, LO8(eax) & 0x7F);
    MEM8(esi + 0x335) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F200
 * Original: 0x0002F200 - 0x0002F20A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F200(void)
{

loc_0002F200: ;
    eax = MEM32(ecx + 4);
    eax = eax >> 0xE;
    eax = eax & 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0002F210
 * Original: 0x0002F210 - 0x0002F229 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F210(void)
{

loc_0002F210: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0x0002F21Eu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_0002F21E: ;
    PUSH32(esp, esi);
    ecx = eax + 4;
    PUSH32(esp, 0x0002F227u); RECOMP_ABI_CALL(0x000472A0u, sub_000472A0); /* call 0x000472A0 */

loc_0002F227: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F230
 * Original: 0x0002F230 - 0x0002F271 (65 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F230(void)
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

loc_0002F230: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F263; /* je: equal / zero */

loc_0002F246: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002F24Du); RECOMP_ABI_CALL(0x00039D00u, sub_00039D00); /* call 0x00039D00 */

loc_0002F24D: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFFBFFFu;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0002F25Fu); RECOMP_ABI_CALL(0x00066A90u, sub_00066A90); /* call 0x00066A90 */

loc_0002F25F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0002F263: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002F26Du); RECOMP_ABI_CALL(0x00078640u, sub_00078640); /* call 0x00078640 */

loc_0002F26D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002F280
 * Original: 0x0002F280 - 0x0002F28A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F280(void)
{

loc_0002F280: ;
    eax = MEM32(esp + 4);
    MEM32(0x4858AC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0002F290
 * Original: 0x0002F290 - 0x0002F2E2 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F290(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0002F290: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0002F29Cu); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002F29C: ;
    ecx = MEM32(esi + 0x2D4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002F2AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F2AA: ;
    MEM32(esi + 0x2D4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0002F2B9u); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002F2B9: ;
    edx = MEM32(esi);
    edi = eax;
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0002F2C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F2C7: ;
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(edi);
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002F2D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F2D6: ;
    POP32(esp, edi);
    MEM32(esi + 0x2D4) = eax;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002F2F0
 * Original: 0x0002F2F0 - 0x0002F325 (53 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F2F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002F2F8u); RECOMP_ABI_CALL(0x00074C30u, sub_00074C30); /* call 0x00074C30 */

loc_0002F2F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F321; /* je: equal / zero */

loc_0002F2FC: ;
    PUSH32(esp, 0x0002F301u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_0002F301: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = 0;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C8); PUSH32(esp, 0x0002F31Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F31D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002F321: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F330
 * Original: 0x0002F330 - 0x0002F380 (80 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F330(void)
{

loc_0002F330: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002F342u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F342: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0002F34Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F34B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002F355u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F355: ;
    ecx = MEM32(eax);
    eax = esp + 4;
    MEM32(esp + 4) = 0x3F800000;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0002F379u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F379: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F380
 * Original: 0x0002F380 - 0x0002F3C9 (73 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F380(void)
{

loc_0002F380: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002F38Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F38F: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0002F398u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F398: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002F3A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F3A2: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0002F3ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F3AB: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002F3B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F3B5: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x0002F3BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F3BE: ;
    ecx = esi;
    PUSH32(esp, 0x0002F3C5u); RECOMP_ABI_CALL(0x00075B20u, sub_00075B20); /* call 0x00075B20 */

loc_0002F3C5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F3D0
 * Original: 0x0002F3D0 - 0x0002F3D3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F3D0(void)
{

loc_0002F3D0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F3E0
 * Original: 0x0002F3E0 - 0x0002F42B (75 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F3E0(void)
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

loc_0002F3E0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002F428; /* jp: parity */

loc_0002F3F2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx + 4) = 0;
    PUSH32(esp, 0x0002F401u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0002F401: ;
    esi = eax;
    PUSH32(esp, 0x0002F408u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0002F408: ;
    ecx = MEM32(0x3E0360);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    ebx = MEM32(edi);
    PUSH32(esp, 0xA5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002F41Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F41F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0xC); PUSH32(esp, 0x0002F425u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F425: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0002F428: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002F430
 * Original: 0x0002F430 - 0x0002F47B (75 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F430(void)
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

loc_0002F430: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002F478; /* jp: parity */

loc_0002F442: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx + 4) = 0;
    PUSH32(esp, 0x0002F451u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0002F451: ;
    esi = eax;
    PUSH32(esp, 0x0002F458u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0002F458: ;
    ecx = MEM32(0x3E0360);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = eax;
    ebx = MEM32(edi);
    PUSH32(esp, 0xA4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002F46Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F46F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0xC); PUSH32(esp, 0x0002F475u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F475: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0002F478: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002F480
 * Original: 0x0002F480 - 0x0002F4C6 (70 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F480(void)
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

loc_0002F480: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002F4C3; /* jp: parity */

loc_0002F492: ;
    MEM32(ecx + 4) = 0;
    SET_LO8(eax, MEM8(0x48584E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002F4C3; /* jne: not equal / not zero */

loc_0002F4A2: ;
    MEM8(0x48584E) = 1;
    PUSH32(esp, 0x0002F4AEu); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_0002F4AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002F4C3; /* jne: not equal / not zero */

loc_0002F4B2: ;
    PUSH32(esp, 0x0002F4B7u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002F4B7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0002F4C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F4C3: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002F4D0
 * Original: 0x0002F4D0 - 0x0002F4F7 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F4D0(void)
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

loc_0002F4D0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002F4F4; /* jp: parity */

loc_0002F4E2: ;
    MEM32(ecx + 4) = 0;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002F4F4u); RECOMP_ABI_CALL(0x000439A0u, sub_000439A0); /* call 0x000439A0 */

loc_0002F4F4: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002F500
 * Original: 0x0002F500 - 0x0002F527 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F500(void)
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

loc_0002F500: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002F524; /* jp: parity */

loc_0002F512: ;
    MEM32(ecx + 4) = 0;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002F524u); RECOMP_ABI_CALL(0x00043780u, sub_00043780); /* call 0x00043780 */

loc_0002F524: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002F530
 * Original: 0x0002F530 - 0x0002F536 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F530(void)
{

loc_0002F530: ;
    eax = ecx;
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0002F540
 * Original: 0x0002F540 - 0x0002F546 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F540(void)
{

loc_0002F540: ;
    eax = 0x5BC;
    esp += 4; return; /* ret */

}

/**
 * sub_0002F550
 * Original: 0x0002F550 - 0x0002F560 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F550(void)
{

loc_0002F550: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002F55Au); RECOMP_ABI_CALL(0x0002DFA0u, sub_0002DFA0); /* call 0x0002DFA0 */

loc_0002F55A: ;
    esp = esp + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F560
 * Original: 0x0002F560 - 0x0002F590 (48 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F560: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C91A4);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002F571u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F571: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F587; /* je: equal / zero */

loc_0002F577: ;
    PUSH32(esp, 0x0002F57Cu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_0002F57C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0002F587u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F587: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002F590
 * Original: 0x0002F590 - 0x0002F5C7 (55 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F590: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F5C3; /* je: equal / zero */

loc_0002F599: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002F5A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F5A0: ;
    edx = MEM32(0x4D737C);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002F5C3; /* je: equal / zero */

loc_0002F5BF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002F5C3: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F5D0
 * Original: 0x0002F5D0 - 0x0002F5F3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F5D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002F5E5; /* jle: less or equal (signed <=) */

loc_0002F5D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    eax = eax * 4 + 0x48585C;
    if (CMP_L(_fas, _fbs)) goto loc_0002F5EA; /* jl: less (signed <) */

loc_0002F5E5: ;
    eax = 0x498D90;

loc_0002F5EA: ;
    ecx = MEM32(eax);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0002F600
 * Original: 0x0002F600 - 0x0002F620 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F600: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x590;
    edi = 4;
    /* nop */

loc_0002F610: ;
    ecx = esi;
    PUSH32(esp, 0x0002F617u); RECOMP_ABI_CALL(0x000496D0u, sub_000496D0); /* call 0x000496D0 */

loc_0002F617: ;
    esi = esi + 8;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002F610; /* jne: not equal / not zero */

loc_0002F61D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002F620
 * Original: 0x0002F620 - 0x0002F6D6 (182 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002F620: ;
    esp = esp - 0x104;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x104) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x180); PUSH32(esp, 0x0002F63Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F63D: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F6BE; /* je: equal / zero */

loc_0002F642: ;
    eax = MEM32(esp + 0x110);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    MEM8(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0002F66F; /* jne: not equal / not zero */

loc_0002F653: ;
    PUSH32(esp, 0x0002F658u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0002F658: ;
    ecx = MEM32(esi + 0x2D8);
    edx = MEM32(eax);
    ecx = ecx + 0x20C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0002F66Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F66F: ;
    ecx = MEM32(esp + 0x10C);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002F682u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0002F682: ;
    edx = MEM32(esi);
    esp = esp + 0xC;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002F68Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F68F: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0002F696u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F696: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002F6A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F6A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F6BE; /* je: equal / zero */

loc_0002F6A6: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x100);
    PUSH32(esp, 0x0002F6B5u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0002F6B5: ;
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

loc_0002F6BE: ;
    ecx = MEM32(esp + 0x104);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x0002F6CDu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0002F6CD: ;
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002F6E0
 * Original: 0x0002F6E0 - 0x0002F7C9 (233 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F6E0(void)
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

loc_0002F6E0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x178); PUSH32(esp, 0x0002F6EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F6EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F7BE; /* je: equal / zero */

loc_0002F6F6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002F700u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F700: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002F707u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F707: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F7BE; /* je: equal / zero */

loc_0002F70F: ;
    fp_push(MEMF(esi + 0x1D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x1E4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x1e4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002F734; /* jp: parity */

loc_0002F722: ;
    fp_push(MEMF(esi + 0x1D4)); /* fld float */
    fp_top() = fp_top() - MEMD(0x3C9408); /* fsub qword ptr [0x3c9408] */
    MEMF(esi + 0x1E4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002F734: ;
    fp_push(MEMF(esi + 0x1E4)); /* fld float */
    ecx = MEM32(esi + 0x1D0);
    fp_top() = fp_top() + MEMF(0x3C9404); /* fadd dword ptr [0x3c9404] */
    edx = MEM32(esi + 0x1CC);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = edx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002F75Du); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002F75D: ;
    ecx = MEM32(esi + 0x1A8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E8);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(esi + 0x1EC);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esi + 0x1F0);
    MEM32(edx + 8) = ecx;
    fp_push(MEMF(esi + 0x1D4)); /* fld float */
    fp_push(MEMF(esi + 0x1E4)); /* fld float */
    ecx = MEM32(esp + 0x14);
    esp = esp - 0x10;
    fp_top() = fp_top() - fp_st1(); /* fsub st(1) */
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    fp_pop(); /* fstp st(0) */
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esi + 0x2D4);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002F7BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F7BE: ;
    ecx = esi;
    POP32(esp, esi);
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_00074C80(); return; /* tail jmp 0x00074C80 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002F7D0
 * Original: 0x0002F7D0 - 0x0002FA17 (583 bytes, 197 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002F7D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002F7D0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, esi);
    ebp = ebx + 0x338;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0002F7E6u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002F7E6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F816; /* je: equal / zero */

loc_0002F7EC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002F7F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F7F2: ;
    edx = MEM32(0x4D737C);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(eax + edx * 4 + 0x14);
    MEM32(esp + 0x14) = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002F81E; /* jne: not equal / not zero */

loc_0002F816: ;
    MEM32(esp + 0x14) = 0;

loc_0002F81E: ;
    ecx = ebp;
    PUSH32(esp, 0x0002F825u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002F825: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F857; /* je: equal / zero */

loc_0002F82B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002F831u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F831: ;
    edx = MEM32(0x499568);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F857; /* je: equal / zero */

loc_0002F84F: ;
    esi = edi;
    MEM32(esp + 0x10) = esi;
    goto loc_0002F863;

loc_0002F857: ;
    MEM32(esp + 0x10) = 0;
    esi = MEM32(esp + 0x10);

loc_0002F863: ;
    ecx = ebp;
    PUSH32(esp, 0x0002F86Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0002F86A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F894; /* je: equal / zero */

loc_0002F870: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002F876u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F876: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002F896; /* jne: not equal / not zero */

loc_0002F894: ;
    edi = 0; /* xor self */

loc_0002F896: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F9DD; /* je: equal / zero */

loc_0002F8A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002F8A8u); RECOMP_ABI_CALL(0x0003B410u, sub_0003B410); /* call 0x0003B410 */

loc_0002F8A8: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F9DD; /* je: equal / zero */

loc_0002F8B3: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002F9DD; /* jne: not equal / not zero */

loc_0002F8BF: ;
    PUSH32(esp, 0x0002F8C4u); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_0002F8C4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0002F8CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F8CB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002F9DD; /* jne: not equal / not zero */

loc_0002F8D3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F948; /* je: equal / zero */

loc_0002F8D7: ;
    eax = MEM32(edi + 0x5B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F948; /* je: equal / zero */

loc_0002F8E1: ;
    PUSH32(esp, 0x0002F8E6u); RECOMP_ABI_CALL(0x00089FC0u, sub_00089FC0); /* call 0x00089FC0 */

loc_0002F8E6: ;
    ecx = MEM32(edi + 0x5B8);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0002F8FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F8FA: ;
    PUSH32(esp, 0x0002F8FFu); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002F8FF: ;
    ecx = MEM32(esp + 0x18);
    esp = esp - 0xC;
    edx = esp;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(ebx + 0x2D4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0002F926u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F926: ;
    edx = MEM32(esp + 0x18);
    esp = esp - 0xC;
    eax = esp;
    MEM32(eax) = edx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 4) = ecx;
    edx = MEM32(esp + 0x2C);
    ecx = ebx;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x0002F946u); RECOMP_ABI_CALL(0x0002E650u, sub_0002E650); /* call 0x0002E650 */

loc_0002F946: ;
    goto loc_0002F975;

loc_0002F948: ;
    ecx = ebx;
    PUSH32(esp, 0x0002F94Fu); RECOMP_ABI_CALL(0x0002E680u, sub_0002E680); /* call 0x0002E680 */

loc_0002F94F: ;
    PUSH32(esp, 0x0002F954u); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002F954: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = MEM32(ecx);
    ebp = MEM32(esi);
    esp = esp - 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esp);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0002F965u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F965: ;
    ecx = MEM32(ebx + 0x2D4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x20); PUSH32(esp, 0x0002F971u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F971: ;
    esi = MEM32(esp + 0x10);

loc_0002F975: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002F9BB; /* je: equal / zero */

loc_0002F979: ;
    ecx = esi;
    PUSH32(esp, 0x0002F980u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002F980: ;
    ecx = ebx;
    edi = eax;
    PUSH32(esp, 0x0002F989u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002F989: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F9BB; /* je: equal / zero */

loc_0002F98D: ;
    ecx = esi;
    PUSH32(esp, 0x0002F994u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_0002F994: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002F9BB; /* je: equal / zero */

loc_0002F999: ;
    PUSH32(esp, 0x0002F99Eu); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002F99E: ;
    ecx = MEM32(ebx + 0x2D4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0002F9B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F9B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_0002F9BB: ;
    PUSH32(esp, 0x0002F9C0u); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002F9C0: ;
    ecx = MEM32(ebx + 0x2D4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0002F9D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F9D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_0002F9DD: ;
    PUSH32(esp, 0x0002F9E2u); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002F9E2: ;
    ecx = MEM32(ebx + 0x2D4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x800);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0002F9F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002F9F5: ;
    PUSH32(esp, 0x0002F9FAu); RECOMP_ABI_CALL(0x000AD680u, sub_000AD680); /* call 0x000AD680 */

loc_0002F9FA: ;
    ecx = MEM32(ebx + 0x2D4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0002FA0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FA0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002FA20
 * Original: 0x0002FA20 - 0x0002FA4B (43 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FA20(void)
{

loc_0002FA20: ;
    eax = 0; /* xor self */
    MEM32(0x4858D0) = eax;
    MEM32(0x4858D4) = eax;
    MEM32(0x4858D8) = eax;
    MEM32(0x4858DC) = eax;
    MEM32(0x4858E0) = eax;
    MEM32(0x4858E4) = eax;
    MEM32(0x4858E8) = eax;
    MEM32(0x4858EC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0002FA50
 * Original: 0x0002FA50 - 0x0002FB9C (332 bytes, 121 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FA50(void)
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

loc_0002FA50: ;
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0002FAC2; /* je: equal / zero */

loc_0002FA5F: ;
    edi = esi + 0x598;
    ecx = edi;
    PUSH32(esp, 0x0002FA6Cu); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_0002FA6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FAC2; /* je: equal / zero */

loc_0002FA70: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002FA77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FA77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002FAC2; /* jne: not equal / not zero */

loc_0002FA7B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002FA89u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FA89: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0002FA91u); RECOMP_ABI_CALL(0x000495E0u, sub_000495E0); /* call 0x000495E0 */

loc_0002FA91: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002FA98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FA98: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002FA9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FA9F: ;
    edi = eax;
    ebx = MEM32(edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002FAAFu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FAAF: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002FAB8u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FAB8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x0002FAC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FAC0: ;
    SET_LO8(ebx, 1);

loc_0002FAC2: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FB2C; /* je: equal / zero */

loc_0002FAC9: ;
    edi = esi + 0x590;
    ecx = edi;
    PUSH32(esp, 0x0002FAD6u); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_0002FAD6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FB2C; /* je: equal / zero */

loc_0002FADA: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002FAE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FAE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002FB2C; /* jne: not equal / not zero */

loc_0002FAE5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0002FAF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FAF3: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0002FAFBu); RECOMP_ABI_CALL(0x000495E0u, sub_000495E0); /* call 0x000495E0 */

loc_0002FAFB: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0002FB02u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FB02: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002FB09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FB09: ;
    edi = eax;
    ebx = MEM32(edi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002FB19u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FB19: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002FB22u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FB22: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx); PUSH32(esp, 0x0002FB2Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FB2A: ;
    SET_LO8(ebx, 1);

loc_0002FB2C: ;
    PUSH32(esp, 0x0002FB31u); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_0002FB31: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0002FB38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FB38: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002FB96; /* jne: not equal / not zero */

loc_0002FB3C: ;
    PUSH32(esp, 0x0002FB41u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0002FB41: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0002FB4Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FB4B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002FB96; /* jne: not equal / not zero */

loc_0002FB4F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FB96; /* je: equal / zero */

loc_0002FB53: ;
    PUSH32(esp, 0x0002FB58u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FB58: ;
    fp_top() = fp_top() - MEMF(0x4858F8); /* fsub dword ptr [0x4858f8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C942C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c942c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002FB96; /* jne: not equal / not zero */

loc_0002FB6B: ;
    PUSH32(esp, 0x0002FB70u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0002FB70: ;
    edx = MEM32(eax);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C9410);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002FB82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FB82: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x84); PUSH32(esp, 0x0002FB8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FB8B: ;
    PUSH32(esp, 0x0002FB90u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FB90: ;
    MEMF(0x4858F8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002FB96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002FBA0
 * Original: 0x0002FBA0 - 0x0002FCEC (332 bytes, 119 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FBA0(void)
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

loc_0002FBA0: ;
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0002FBFE; /* je: equal / zero */

loc_0002FBB0: ;
    esi = edi + 0x598;
    ecx = esi;
    PUSH32(esp, 0x0002FBBDu); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_0002FBBD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FBFE; /* je: equal / zero */

loc_0002FBC1: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002FBC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FBC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FBFE; /* je: equal / zero */

loc_0002FBCC: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    SET_LO8(ebx, 1);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002FBD5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FBD5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002FBDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FBDC: ;
    esi = eax;
    ebp = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002FBECu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FBEC: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002FBF5u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FBF5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0002FBFEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FBFE: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FC57; /* je: equal / zero */

loc_0002FC05: ;
    esi = edi + 0x590;
    ecx = esi;
    PUSH32(esp, 0x0002FC12u); RECOMP_ABI_CALL(0x000495C0u, sub_000495C0); /* call 0x000495C0 */

loc_0002FC12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FC57; /* je: equal / zero */

loc_0002FC16: ;
    ecx = MEM32(edi + 0x598);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002FC21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FC21: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FC57; /* je: equal / zero */

loc_0002FC25: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    SET_LO8(ebx, 1);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002FC2Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FC2E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0002FC35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FC35: ;
    esi = eax;
    ebp = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002FC45u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FC45: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002FC4Eu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FC4E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebp + 4); PUSH32(esp, 0x0002FC57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FC57: ;
    PUSH32(esp, 0x0002FC5Cu); RECOMP_ABI_CALL(0x00060C00u, sub_00060C00); /* call 0x00060C00 */

loc_0002FC5C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0002FC63u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FC63: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002FCE5; /* jne: not equal / not zero */

loc_0002FC67: ;
    PUSH32(esp, 0x0002FC6Cu); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0002FC6C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0002FC76u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FC76: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002FCE5; /* jne: not equal / not zero */

loc_0002FC7A: ;
    PUSH32(esp, 0x0002FC7Fu); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_0002FC7F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002FC86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FC86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002FCE5; /* jne: not equal / not zero */

loc_0002FC8A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FCE5; /* je: equal / zero */

loc_0002FC8E: ;
    PUSH32(esp, 0x0002FC93u); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FC93: ;
    fp_top() = fp_top() - MEMF(0x4858FC); /* fsub dword ptr [0x4858fc] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C942C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c942c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002FCD1; /* jne: not equal / not zero */

loc_0002FCA6: ;
    PUSH32(esp, 0x0002FCABu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_0002FCAB: ;
    edx = MEM32(eax);
    esi = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C9430);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0002FCBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FCBD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(esi + 0x84); PUSH32(esp, 0x0002FCC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FCC6: ;
    PUSH32(esp, 0x0002FCCBu); RECOMP_ABI_CALL(0x00066AB0u, xml1_guest_simulation_time); /* call 0x00066AB0 */

loc_0002FCCB: ;
    MEMF(0x4858FC) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002FCD1: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1DC); PUSH32(esp, 0x0002FCE5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FCE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002FCF0
 * Original: 0x0002FCF0 - 0x0002FDE2 (242 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002FCF0: ;
    esp = esp - 0x54;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x54) = eax;
    SET_LO8(eax, MEM8(0x44BB07));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002FDD2; /* je: equal / zero */

loc_0002FD0C: ;
    PUSH32(esp, 0x50);
    eax = esp + 0x10;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002FD1Du); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0002FD1D: ;
    ebx = MEM32(esp + 0x74);
    esp = esp + 0xC;
    MEM8(esp + 0x5B) = 0;
    PUSH32(esp, 0x0002FD2Eu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0002FD2E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FD6B; /* je: equal / zero */

loc_0002FD32: ;
    esi = eax;
    PUSH32(esp, 0x0002FD39u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0002FD39: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x69);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002FD44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FD44: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x68);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0002FD4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FD4F: ;
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3C9454);
    edx = esp + 0x20;
    PUSH32(esp, 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002FD66u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0002FD66: ;
    esp = esp + 0x1C;
    goto loc_0002FD8E;

loc_0002FD6B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x68);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002FD74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FD74: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C944C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002FD8Bu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_0002FD8B: ;
    esp = esp + 0x14;

loc_0002FD8E: ;
    PUSH32(esp, 0x0002FD93u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0002FD93: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esp = esp - 0x10;
    edx = esp;
    PUSH32(esp, 0x40400000);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(0x48583C);
    MEM32(edx) = 0x3E800000;
    MEM32(edx + 4) = 0x3F266666;
    MEM32(edx + 8) = 0x3F666666;
    MEM32(edx + 0xC) = 0x3F800000;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0002FDCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FDCD: ;
    MEM32(0x48583C) = eax;

loc_0002FDD2: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, 0x0002FDDBu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0002FDDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_0002FDF0
 * Original: 0x0002FDF0 - 0x0002FF17 (295 bytes, 89 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002FDF0: ;
    esp = esp - 0x10;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2D8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002FF06; /* je: equal / zero */

loc_0002FE0E: ;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002FE18u); RECOMP_ABI_CALL(0x000AF900u, sub_000AF900); /* call 0x000AF900 */

loc_0002FE18: ;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0x0002FE23u); RECOMP_ABI_CALL(0x000AF950u, xml1_guest_character_reconcile_level); /* call 0x000AF950 */

loc_0002FE23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0002FE73; /* jge: greater or equal (signed >=) */

loc_0002FE27: ;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002FE37u); RECOMP_ABI_CALL(0x000AFA90u, sub_000AFA90); /* call 0x000AFA90 */

loc_0002FE37: ;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM16(esi + 0x246) = LO16(eax);
    PUSH32(esp, 0x0002FE4Eu); RECOMP_ABI_CALL(0x000AFBD0u, sub_000AFBD0); /* call 0x000AFBD0 */

loc_0002FE4E: ;
    MEM16(esi + 0x2BC) = LO16(eax);
    PUSH32(esp, 0x0002FE5Au); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0002FE5A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x6C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002FE63u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FE63: ;
    ecx = esp + 8;

loc_0002FE67: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002FE67; /* jne: not equal / not zero */

loc_0002FE71: ;
    goto loc_0002FEA2;

loc_0002FE73: ;
    PUSH32(esp, 0x0002FE78u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0002FE78: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3E7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002FE85; /* jle: less or equal (signed <=) */

loc_0002FE80: ;
    edi = 0x3E7;

loc_0002FE85: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x68);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002FE8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FE8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0x3C9464);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002FE9Fu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0002FE9F: ;
    esp = esp + 0x10;

loc_0002FEA2: ;
    SET_LO8(eax, MEM8(0x44BB07));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FF06; /* je: equal / zero */

loc_0002FEAB: ;
    ecx = MEM32(esi + 0x1C);
    esi = MEM32(esi + 0x330);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002FEC5; /* jle: less or equal (signed <=) */

loc_0002FEB9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    eax = esi * 4 + 0x48585C;
    if (CMP_L(_fas, _fbs)) goto loc_0002FECA; /* jl: less (signed <) */

loc_0002FEC5: ;
    eax = 0x498D90;

loc_0002FECA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002FF06; /* jne: not equal / not zero */

loc_0002FECE: ;
    PUSH32(esp, 0x0002FED3u); RECOMP_ABI_CALL(0x00158860u, sub_00158860); /* call 0x00158860 */

loc_0002FED3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esp = esp - 0x10;
    edx = esp;
    PUSH32(esp, 0x40400000);
    ecx = esp + 0x20;
    MEM32(edx) = 0;
    MEM32(edx + 4) = 0x3F000000;
    MEM32(edx + 8) = 0x3F666666;
    MEM32(edx + 0xC) = 0x3F800000;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0002FF06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FF06: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x0002FF0Fu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0002FF0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002FF20
 * Original: 0x0002FF20 - 0x00030019 (249 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002FF20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002FF20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E2F0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ebp = 0; /* xor self */
    PUSH32(esp, 0x485874);
    ecx = esp + 0x18;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x0002FF55u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_0002FF55: ;
    edx = MEM32(esp + 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x20) = 0x3C898C;
    PUSH32(esp, 0x0002FF70u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_0002FF70: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x1C) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x28) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002FF84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FF84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0002FFB1; /* jle: less or equal (signed <=) */

loc_0002FF88: ;
    ebx = MEM32(esp + 0x30);
    /* nop */

loc_0002FF90: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0002FF98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FF98: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002FFA6; /* je: equal / zero */

loc_0002FF9E: ;
    _fa = (uint32_t)(MEM32(edi + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2D8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002FFE5; /* je: equal / zero */

loc_0002FFA6: ;
    eax = MEM32(esi);
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0002FFADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0002FFAD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002FF90; /* jl: less (signed <) */

loc_0002FFB1: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0x0002FFBCu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0002FFBC: ;
    esp = esp + 4;
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0002FFD0u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_0002FFD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0002FFE5: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0x0002FFF0u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0002FFF0: ;
    esp = esp + 4;
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00030004u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_00030004: ;
    ecx = MEM32(esp + 0x20);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00030004
 * Original: 0x00030004 - 0x00030019 (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030004(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030004: ;
    ecx = MEM32(esp + 0x20);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00030008
 * Original: 0x00030008 - 0x00030019 (17 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030008(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030008: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00030020
 * Original: 0x00030020 - 0x000300DF (191 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030020(void)
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

loc_00030020: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000300DA; /* jne: not equal / not zero */

loc_0003003D: ;
    SET_LO8(eax, MEM8(esi + 0x336));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_000300CC; /* jns: not sign (positive) */

loc_0003004B: ;
    PUSH32(esp, 0x00030050u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_00030050: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x134); PUSH32(esp, 0x00030061u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00030061: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    edx = MEM32(eax + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x18) = edx;
    fp_top() = fp_top() - MEMF(esi + 0x20); /* fsub dword ptr [esi + 0x20] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x28); /* fsub dword ptr [esi + 0x28] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C9404)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c9404] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_000300CC; /* jne: not equal / not zero */

loc_000300A5: ;
    eax = MEM32(esi + 0x20);
    fp_push(MEMF(esi + 0x28)); /* fld float */
    ecx = MEM32(esi + 0x24);
    fp_top() = fp_top() + MEMF(0x3C72F0); /* fadd dword ptr [0x3c72f0] */
    edx = MEM32(esi);
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000300CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000300CC: ;
    ecx = esi;
    PUSH32(esp, 0x000300D3u); RECOMP_ABI_CALL(0x00066940u, sub_00066940); /* call 0x00066940 */

loc_000300D3: ;
    ecx = esi;
    PUSH32(esp, 0x000300DAu); RECOMP_ABI_CALL(0x0003B010u, sub_0003B010); /* call 0x0003B010 */

loc_000300DA: ;
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
 * sub_000300E0
 * Original: 0x000300E0 - 0x000301DE (254 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000300E0(void)
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

loc_000300E0: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x40) = eax;
    SET_LO8(eax, MEM8(esp + 0x4C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x4C));
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000301B5; /* je: equal / zero */

loc_00030100: ;
    PUSH32(esp, 0x40);
    eax = esp + 0xC;
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00030111u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00030111: ;
    SET_LO8(eax, MEM8(esi + 0x334));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM8(esp + 0x47) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0003015D; /* je: equal / zero */

loc_00030123: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0003017F; /* jne: not equal / not zero */

loc_00030127: ;
    ecx = MEM32(esi + 0x2D8);
    ecx = ecx + 0x30C;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x3C9480);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00030143u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00030143: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x0003014Bu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_0003014B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00030155u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00030155: ;
    MEMF(esi + 0x488) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0003017F;

loc_0003015D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003017F; /* je: equal / zero */

loc_00030161: ;
    eax = MEM32(esi + 0x2D8);
    eax = eax + 0x30C;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x3C946C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003017Cu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0003017C: ;
    esp = esp + 0xC;

loc_0003017F: ;
    eax = esp + 8;
    edx = eax + 1;

loc_00030186: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00030186; /* jne: not equal / not zero */

loc_0003018D: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000301B5; /* jle: less or equal (signed <=) */

loc_00030193: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00030199u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_00030199: ;
    edx = MEM32(eax);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000301ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000301AB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x84); PUSH32(esp, 0x000301B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000301B4: ;
    POP32(esp, edi);

loc_000301B5: ;
    SET_LO8(edx, MEM8(esi + 0x334));
    ecx = MEM32(esp + 0x48);
    SET_LO8(ebx, LO8(ebx) << 3);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    SET_LO8(ebx, LO8(ebx) & 8);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    MEM8(esi + 0x334) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000301D8u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000301D8: ;
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000301E0
 * Original: 0x000301E0 - 0x000302F1 (273 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000301E0(void)
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

loc_000301E0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 6);
    ecx = ebx;
    PUSH32(esp, 0x000301F8u); RECOMP_ABI_CALL(0x0002E900u, sub_0002E900); /* call 0x0002E900 */

loc_000301F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00030220; /* je: equal / zero */

loc_000301FC: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0003020Au); RECOMP_ABI_CALL(0x0002E900u, sub_0002E900); /* call 0x0002E900 */

loc_0003020A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00030220; /* je: equal / zero */

loc_0003020E: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F000000);
    ecx = edi;
    PUSH32(esp, 0x00030220u); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_00030220: ;
    edx = MEM32(ebx + 0x554);
    ecx = esp + 0x2C;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x00030233u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00030233: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003025F; /* je: equal / zero */

loc_00030239: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00030240u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00030240: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_00030261; /* jne: not equal / not zero */

loc_0003025F: ;
    esi = 0; /* xor self */

loc_00030261: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0003026Fu); RECOMP_ABI_CALL(0x0002E900u, sub_0002E900); /* call 0x0002E900 */

loc_0003026F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003029D; /* je: equal / zero */

loc_00030273: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x00030281u); RECOMP_ABI_CALL(0x0002E900u, sub_0002E900); /* call 0x0002E900 */

loc_00030281: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003029D; /* je: equal / zero */

loc_00030285: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F000000);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0003029Du); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_0003029D: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    eax = MEM32(esp + 0x30);
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebx + 0x1D8);
    MEM32(eax) = edx;
    ecx = MEM32(ebx + 0x1DC);
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebx + 0x1E0);
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
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
 * sub_00030201
 * Original: 0x00030201 - 0x000302F1 (240 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030201(void)
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

loc_00030201: ;
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0003020Au); RECOMP_ABI_CALL(0x0002E900u, sub_0002E900); /* call 0x0002E900 */

loc_0003020A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00030220; /* je: equal / zero */

loc_0003020E: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F000000);
    ecx = edi;
    PUSH32(esp, 0x00030220u); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_00030220: ;
    edx = MEM32(ebx + 0x554);
    ecx = esp + 0x2C;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, 0x00030233u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_00030233: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003025F; /* je: equal / zero */

loc_00030239: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00030240u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00030240: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_00030261; /* jne: not equal / not zero */

loc_0003025F: ;
    esi = 0; /* xor self */

loc_00030261: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x0003026Fu); RECOMP_ABI_CALL(0x0002E900u, sub_0002E900); /* call 0x0002E900 */

loc_0003026F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003029D; /* je: equal / zero */

loc_00030273: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x00030281u); RECOMP_ABI_CALL(0x0002E900u, sub_0002E900); /* call 0x0002E900 */

loc_00030281: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003029D; /* je: equal / zero */

loc_00030285: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F000000);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0003029Du); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_0003029D: ;
    fp_push(MEMF(esi + 0x20)); /* fld float */
    eax = MEM32(esp + 0x30);
    fp_top() = fp_top() - MEMF(esp + 0xC); /* fsub dword ptr [esp + 0xc] */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebx + 0x1D8);
    MEM32(eax) = edx;
    ecx = MEM32(ebx + 0x1DC);
    POP32(esp, edi);
    MEM32(eax + 4) = ecx;
    edx = MEM32(ebx + 0x1E0);
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
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
 * sub_00030300
 * Original: 0x00030300 - 0x00030483 (387 bytes, 122 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030300(void)
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

loc_00030300: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x554);
    ecx = esp + 8;
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x0003031Au); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_0003031A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00030461; /* je: equal / zero */

loc_00030324: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0003032Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0003032B: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00030461; /* je: equal / zero */

loc_0003034E: ;
    fp_push(MEMF(esi + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00030461; /* jne: not equal / not zero */

loc_00030365: ;
    ecx = MEM32(esi + 0x2F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003047D; /* je: equal / zero */

loc_00030373: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0003037Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0003037B: ;
    eax = eax + 0xFFFFFFA8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000303E1; /* ja: above (unsigned >) */

loc_00030383: ;
    ecx = ZX8(MEM8(eax + 0x30494));
    { uint32_t _jt = MEM32(ecx * 4 + 0x30484); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00030391u) goto loc_00030391;
    if (_jt == 0x000303A3u) goto loc_000303A3;
    if (_jt == 0x000303B5u) goto loc_000303B5;
    if (_jt == 0x000303E1u) goto loc_000303E1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00030391: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000303A1u); RECOMP_ABI_CALL(0x000301E0u, sub_000301E0); /* call 0x000301E0 */

loc_000303A1: ;
    goto loc_000303C5;

loc_000303A3: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000303B3u); RECOMP_ABI_CALL(0x000301E0u, sub_000301E0); /* call 0x000301E0 */

loc_000303B3: ;
    goto loc_000303F1;

loc_000303B5: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000303C5u); RECOMP_ABI_CALL(0x000DC040u, sub_000DC040); /* call 0x000DC040 */

loc_000303C5: ;
    esp = esp + 0xC;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000303DFu); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_000303DF: ;
    goto loc_000303F4;

loc_000303E1: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000303F1u); RECOMP_ABI_CALL(0x000DC040u, sub_000DC040); /* call 0x000DC040 */

loc_000303F1: ;
    esp = esp + 0xC;

loc_000303F4: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = esi;
    fp_top() = fp_top() - MEMF(esi + 0x20); /* fsub dword ptr [esi + 0x20] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x28); /* fsub dword ptr [esi + 0x28] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x2C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x2C); /* fsub dword ptr [esi + 0x2c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x30); /* fsub dword ptr [esi + 0x30] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x34); /* fsub dword ptr [esi + 0x34] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x44) = eax;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x124); PUSH32(esp, 0x00030459u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00030459: ;
    POP32(esp, edi);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_00030461: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4F32A8);
    ecx = edi + 0x2DC;
    PUSH32(esp, 0x00030475u); RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0); /* call 0x000ED6E0 */

loc_00030475: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0003047Du); RECOMP_ABI_CALL(0x0003B100u, sub_0003B100); /* call 0x0003B100 */

loc_0003047D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000304A0
 * Original: 0x000304A0 - 0x00030586 (230 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000304A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000304A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E2F0);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, 0x485874);
    ecx = esp + 0x14;
    SET_LO8(ebx, 0); /* xor self */
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x000304D6u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000304D6: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 2);
    MEM32(esp + 0x2C) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000304E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000304E7: ;
    ecx = MEM32(esp + 0xC);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = 0x3C898C;
    PUSH32(esp, 0x000304FEu); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000304FE: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x18) = esi;
    edx = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x24) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00030512u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00030512: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00030553; /* jle: less or equal (signed <=) */

loc_00030516: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    goto loc_00030520;

    /* nop */

loc_00030520: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00030528u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00030528: ;
    ecx = MEM32(eax + 0x2D8);
    _fa = (uint32_t)(MEM8(ecx + 0x3A1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x3A1), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00030547; /* je: equal / zero */

loc_00030537: ;
    _fa = (uint32_t)(MEM8(eax + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x334), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00030545; /* je: equal / zero */

loc_00030540: ;
    MEM32(ebp) = eax;
    goto loc_00030547;

loc_00030545: ;
    SET_LO8(ebx, 1);

loc_00030547: ;
    edx = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0003054Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0003054E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00030520; /* jl: less (signed <) */

loc_00030552: ;
    POP32(esp, ebp);

loc_00030553: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x28) = 0;
    PUSH32(esp, 0x0003055Eu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_0003055E: ;
    esp = esp + 4;
    ecx = esp + 0xC;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00030572u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_00030572: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00030590
 * Original: 0x00030590 - 0x000305C8 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030590: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000305A7; /* jne: not equal / not zero */

loc_00030597: ;
    eax = 0x3C806C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000305A2u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000305A2: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000305A7: ;
    PUSH32(esp, 0x000305ACu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000305AC: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x4008;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000305C3u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000305C3: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000305D0
 * Original: 0x000305D0 - 0x000305E8 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000305D0(void)
{

loc_000305D0: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000305E5u); RECOMP_ABI_CALL(0x0002FA50u, sub_0002FA50); /* call 0x0002FA50 */

loc_000305E5: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000305F0
 * Original: 0x000305F0 - 0x00030608 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000305F0(void)
{

loc_000305F0: ;
    eax = MEM32(esp + 8);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00030605u); RECOMP_ABI_CALL(0x0002FBA0u, sub_0002FBA0); /* call 0x0002FBA0 */

loc_00030605: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00030610
 * Original: 0x00030610 - 0x00030642 (50 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00030610: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0003062D; /* je: equal / zero */

loc_00030622: ;
    ecx = esi + 0x598;
    PUSH32(esp, 0x0003062Du); RECOMP_ABI_CALL(0x00049660u, sub_00049660); /* call 0x00049660 */

loc_0003062D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0003063D; /* je: equal / zero */

loc_00030632: ;
    ecx = esi + 0x590;
    PUSH32(esp, 0x0003063Du); RECOMP_ABI_CALL(0x00049660u, sub_00049660); /* call 0x00049660 */

loc_0003063D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00030650
 * Original: 0x00030650 - 0x0003065A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030650(void)
{

loc_00030650: ;
    eax = ecx;
    MEM32(eax + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00030660
 * Original: 0x00030660 - 0x00030677 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030660(void)
{

loc_00030660: ;
    eax = ecx;
    edx = 0; /* xor self */
    MEM32(eax) = edx;
    ecx = eax + 4;
    MEM32(ecx) = edx;
    ecx = ecx + 4;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(eax + 0x14) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00030680
 * Original: 0x00030680 - 0x000306FF (127 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00030680(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00030680: ;
    esp = esp - 0x18;
    fp_push(MEMF(ecx + 0x144)); /* fld float */
    eax = MEM32(esp + 0x1C);
    fp_top() = fp_top() - MEMF(ecx + 0x138); /* fsub dword ptr [ecx + 0x138] */
    fp_push(MEMF(ecx + 0x148)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x13C); /* fsub dword ptr [ecx + 0x13c] */
    fp_push(MEMF(ecx + 0x14C)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 0x140); /* fsub dword ptr [ecx + 0x140] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x168); /* fmul dword ptr [ecx + 0x168] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 0x168); /* fmul dword ptr [ecx + 0x168] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(ecx + 0x168); /* fmul dword ptr [ecx + 0x168] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00030700
 * Original: 0x00030700 - 0x000307F5 (245 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030700(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00030700: ;
    esp = esp - 0x24;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    eax = esp;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x0003072Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0003072D: ;
    fp_push(MEMF(0x3C912C)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x34); /* fdiv dword ptr [esp + 0x34] */
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    fp_push(MEMF(esi + 0x1C0)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x2C); /* fsub dword ptr [esi + 0x2c] */
    fp_push(MEMF(esi + 0x1C4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x30); /* fsub dword ptr [esi + 0x30] */
    fp_push(MEMF(esi + 0x1C8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x34); /* fsub dword ptr [esi + 0x34] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1B4)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x20); /* fsub dword ptr [esi + 0x20] */
    fp_push(MEMF(esi + 0x1B8)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    fp_push(MEMF(esi + 0x1BC)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x28); /* fsub dword ptr [esi + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000307B3u); RECOMP_ABI_CALL(0x000760D0u, xml1_guest_entity_set_velocity); /* call 0x000760D0 */

loc_000307B3: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000307BFu); RECOMP_ABI_CALL(0x000761B0u, sub_000761B0); /* call 0x000761B0 */

loc_000307BF: ;
    SET_LO8(edx, MEM8(esi + 0x234));
    SET_LO8(edx, LO8(edx) | 2);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM8(esi + 0x234) = LO8(edx);
    edx = MEM32(esi);
    PUSH32(esp, 0xBF800000u);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x000307DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000307DF: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x000307EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000307EE: ;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
