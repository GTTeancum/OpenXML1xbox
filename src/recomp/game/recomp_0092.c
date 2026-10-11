/**
 * X-Men Legends - Recompiled code chunk 92
 * Functions: 250 (0x00355A10 - 0x00357410)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00355A10
 * Original: 0x00355A10 - 0x00355A26 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355A10(void)
{

loc_00355A10: ;
    ecx = 0x4858BC;
    PUSH32(esp, 0x00355A1Au); RECOMP_ABI_CALL(0x00032220u, sub_00032220); /* call 0x00032220 */

loc_00355A1A: ;
    PUSH32(esp, 0x359D50);
    PUSH32(esp, 0x00355A24u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355A24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355A30
 * Original: 0x00355A30 - 0x00355A3B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355A30(void)
{

loc_00355A30: ;
    eax = MEM32(0x3DD050);
    MEM32(0x44BC54) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355A40
 * Original: 0x00355A40 - 0x00355A64 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355A40(void)
{

loc_00355A40: ;
    PUSH32(esp, 0x3C93C4);
    PUSH32(esp, 0x3C93D0);
    PUSH32(esp, 0x5BC);
    ecx = 0x485874;
    PUSH32(esp, 0x00355A59u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00355A59: ;
    MEM32(0x485874) = 0x3C93F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00355A70
 * Original: 0x00355A70 - 0x00355A7B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355A70(void)
{

loc_00355A70: ;
    eax = MEM32(0x498D90);
    MEM32(0x485858) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355A80
 * Original: 0x00355A80 - 0x00355A8B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355A80(void)
{

loc_00355A80: ;
    eax = MEM32(0x498D90);
    MEM32(0x4858AC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355A90
 * Original: 0x00355A90 - 0x00355A9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355A90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355A90: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4859A4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355AA0
 * Original: 0x00355AA0 - 0x00355AAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355AA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355AA0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4859A8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355AB0
 * Original: 0x00355AB0 - 0x00355ABF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355AB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355AB0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48599C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355AC0
 * Original: 0x00355AC0 - 0x00355AE6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355AC0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355ACAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355ACA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355AD9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355AD9: ;
    ecx = eax;
    PUSH32(esp, 0x00355AE0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355AE0: ;
    MEM32(0x485B24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355AF0
 * Original: 0x00355AF0 - 0x00355B16 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355AF0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355AFAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355AFA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355B09u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355B09: ;
    ecx = eax;
    PUSH32(esp, 0x00355B10u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355B10: ;
    MEM32(0x4859A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355B20
 * Original: 0x00355B20 - 0x00355B36 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355B20(void)
{

loc_00355B20: ;
    ecx = 0x4859B0;
    PUSH32(esp, 0x00355B2Au); RECOMP_ABI_CALL(0x00034DD0u, sub_00034DD0); /* call 0x00034DD0 */

loc_00355B2A: ;
    PUSH32(esp, 0x359DC0);
    PUSH32(esp, 0x00355B34u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355B34: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355B40
 * Original: 0x00355B40 - 0x00355B56 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355B40(void)
{

loc_00355B40: ;
    ecx = 0x485948;
    PUSH32(esp, 0x00355B4Au); RECOMP_ABI_CALL(0x00034DD0u, sub_00034DD0); /* call 0x00034DD0 */

loc_00355B4A: ;
    PUSH32(esp, 0x359D80);
    PUSH32(esp, 0x00355B54u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355B54: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355B60
 * Original: 0x00355B60 - 0x00355B76 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355B60(void)
{

loc_00355B60: ;
    ecx = 0x485A20;
    PUSH32(esp, 0x00355B6Au); RECOMP_ABI_CALL(0x00034DD0u, sub_00034DD0); /* call 0x00034DD0 */

loc_00355B6A: ;
    PUSH32(esp, 0x359DD0);
    PUSH32(esp, 0x00355B74u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355B74: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355B80
 * Original: 0x00355B80 - 0x00355B96 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355B80(void)
{

loc_00355B80: ;
    ecx = 0x485AD0;
    PUSH32(esp, 0x00355B8Au); RECOMP_ABI_CALL(0x00034DD0u, sub_00034DD0); /* call 0x00034DD0 */

loc_00355B8A: ;
    PUSH32(esp, 0x359D90);
    PUSH32(esp, 0x00355B94u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355B94: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355BA0
 * Original: 0x00355BA0 - 0x00355BB6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355BA0(void)
{

loc_00355BA0: ;
    ecx = 0x485A78;
    PUSH32(esp, 0x00355BAAu); RECOMP_ABI_CALL(0x00034DD0u, sub_00034DD0); /* call 0x00034DD0 */

loc_00355BAA: ;
    PUSH32(esp, 0x359DA0);
    PUSH32(esp, 0x00355BB4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355BB4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355BC0
 * Original: 0x00355BC0 - 0x00355BCC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355BC0(void)
{

loc_00355BC0: ;
    PUSH32(esp, 0x359DB0);
    PUSH32(esp, 0x00355BCAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355BCA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355BD0
 * Original: 0x00355BD0 - 0x00355BDF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355BD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355BD0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48A908) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355BE0
 * Original: 0x00355BE0 - 0x00355BEF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355BE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355BE0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48A90C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355BF0
 * Original: 0x00355BF0 - 0x00355BFF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355BF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355BF0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x486F7C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355C00
 * Original: 0x00355C00 - 0x00355C26 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355C00: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355C0Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355C0A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355C19u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355C19: ;
    ecx = eax;
    PUSH32(esp, 0x00355C20u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355C20: ;
    MEM32(0x48AFC8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355C30
 * Original: 0x00355C30 - 0x00355C56 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355C30: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355C3Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355C3A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355C49u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355C49: ;
    ecx = eax;
    PUSH32(esp, 0x00355C50u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355C50: ;
    MEM32(0x48A904) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355C60
 * Original: 0x00355C60 - 0x00355C76 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355C60(void)
{

loc_00355C60: ;
    ecx = 0x486F80;
    PUSH32(esp, 0x00355C6Au); RECOMP_ABI_CALL(0x00036CE0u, sub_00036CE0); /* call 0x00036CE0 */

loc_00355C6A: ;
    PUSH32(esp, 0x359DF0);
    PUSH32(esp, 0x00355C74u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355C74: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355C80
 * Original: 0x00355C80 - 0x00355C96 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355C80(void)
{

loc_00355C80: ;
    ecx = 0x48A910;
    PUSH32(esp, 0x00355C8Au); RECOMP_ABI_CALL(0x00036240u, sub_00036240); /* call 0x00036240 */

loc_00355C8A: ;
    PUSH32(esp, 0x359DE0);
    PUSH32(esp, 0x00355C94u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355C94: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355CA0
 * Original: 0x00355CA0 - 0x00355CB6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355CA0(void)
{

loc_00355CA0: ;
    ecx = 0x485B28;
    PUSH32(esp, 0x00355CAAu); RECOMP_ABI_CALL(0x000381D0u, sub_000381D0); /* call 0x000381D0 */

loc_00355CAA: ;
    PUSH32(esp, 0x359E00);
    PUSH32(esp, 0x00355CB4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355CB4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355CC0
 * Original: 0x00355CC0 - 0x00355CCF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355CC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355CC0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48AFD8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355CD0
 * Original: 0x00355CD0 - 0x00355CDF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355CD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355CD0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48AFDC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355CE0
 * Original: 0x00355CE0 - 0x00355CEF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355CE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355CE0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48AFCC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355CF0
 * Original: 0x00355CF0 - 0x00355D16 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355CF0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355CFAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355CFA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355D09u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355D09: ;
    ecx = eax;
    PUSH32(esp, 0x00355D10u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355D10: ;
    MEM32(0x48AFE0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355D20
 * Original: 0x00355D20 - 0x00355D46 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355D20: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355D2Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355D2A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355D39u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355D39: ;
    ecx = eax;
    PUSH32(esp, 0x00355D40u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355D40: ;
    MEM32(0x48AFD4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355D50
 * Original: 0x00355D50 - 0x00355D5B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355D50(void)
{

loc_00355D50: ;
    MEM32(0x48AFD0) = 0x3DCCCCCD;
    esp += 4; return; /* ret */

}

/**
 * sub_00355D60
 * Original: 0x00355D60 - 0x00355D6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355D60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355D60: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48AFF4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355D70
 * Original: 0x00355D70 - 0x00355D7F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355D70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355D70: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48AFF8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355D80
 * Original: 0x00355D80 - 0x00355D8F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355D80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355D80: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48AFEC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355D90
 * Original: 0x00355D90 - 0x00355DB6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355D90: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355D9Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355D9A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355DA9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355DA9: ;
    ecx = eax;
    PUSH32(esp, 0x00355DB0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355DB0: ;
    MEM32(0x48AFE8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355DC0
 * Original: 0x00355DC0 - 0x00355DE6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355DC0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355DCAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355DCA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355DD9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355DD9: ;
    ecx = eax;
    PUSH32(esp, 0x00355DE0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355DE0: ;
    MEM32(0x48AFF0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355DF0
 * Original: 0x00355DF0 - 0x00355DFF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355DF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355DF0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B008) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355E00
 * Original: 0x00355E00 - 0x00355E0F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355E00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355E00: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B00C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355E10
 * Original: 0x00355E10 - 0x00355E1F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355E10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355E10: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B000) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355E20
 * Original: 0x00355E20 - 0x00355E46 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355E20: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355E2Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355E2A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355E39u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355E39: ;
    ecx = eax;
    PUSH32(esp, 0x00355E40u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355E40: ;
    MEM32(0x48B010) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355E50
 * Original: 0x00355E50 - 0x00355E76 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355E50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355E50: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355E5Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355E5A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355E69u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355E69: ;
    ecx = eax;
    PUSH32(esp, 0x00355E70u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355E70: ;
    MEM32(0x48B004) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355E80
 * Original: 0x00355E80 - 0x00355E8F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355E80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355E80: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B8E8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355E90
 * Original: 0x00355E90 - 0x00355E9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355E90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355E90: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B970) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355EA0
 * Original: 0x00355EA0 - 0x00355EAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355EA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355EA0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B018) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355EB0
 * Original: 0x00355EB0 - 0x00355ED6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355EB0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355EBAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355EBA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355EC9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355EC9: ;
    ecx = eax;
    PUSH32(esp, 0x00355ED0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355ED0: ;
    MEM32(0x48B974) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355EE0
 * Original: 0x00355EE0 - 0x00355F06 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355EE0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355EEAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355EEA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00355EF9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355EF9: ;
    ecx = eax;
    PUSH32(esp, 0x00355F00u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00355F00: ;
    MEM32(0x48B8E4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00355F10
 * Original: 0x00355F10 - 0x00355F26 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355F10(void)
{

loc_00355F10: ;
    ecx = 0x48B020;
    PUSH32(esp, 0x00355F1Au); RECOMP_ABI_CALL(0x00046AF0u, sub_00046AF0); /* call 0x00046AF0 */

loc_00355F1A: ;
    PUSH32(esp, 0x359E20);
    PUSH32(esp, 0x00355F24u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355F24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355F30
 * Original: 0x00355F30 - 0x00355F46 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355F30(void)
{

loc_00355F30: ;
    ecx = 0x48B8F0;
    PUSH32(esp, 0x00355F3Au); RECOMP_ABI_CALL(0x00046560u, sub_00046560); /* call 0x00046560 */

loc_00355F3A: ;
    PUSH32(esp, 0x359E10);
    PUSH32(esp, 0x00355F44u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00355F44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00355F45
 * Original: 0x00355F45 - 0x00355F46 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355F45(void)
{

loc_00355F45: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00355F50
 * Original: 0x00355F50 - 0x00355F5F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355F50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355F50: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B97C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355F60
 * Original: 0x00355F60 - 0x00355F6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355F60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355F60: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B980) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355F70
 * Original: 0x00355F70 - 0x00355F7F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355F70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355F70: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B978) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355F80
 * Original: 0x00355F80 - 0x00355FA4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355F80(void)
{

loc_00355F80: ;
    PUSH32(esp, 0x3CAAE4);
    PUSH32(esp, 0x3CAAF4);
    PUSH32(esp, 0x334);
    ecx = 0x48B984;
    PUSH32(esp, 0x00355F99u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00355F99: ;
    MEM32(0x48B984) = 0x3CACCC;
    esp += 4; return; /* ret */

}

/**
 * sub_00355FB0
 * Original: 0x00355FB0 - 0x00355FBF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355FB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355FB0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B9C0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355FC0
 * Original: 0x00355FC0 - 0x00355FCF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355FC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355FC0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B9C4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355FD0
 * Original: 0x00355FD0 - 0x00355FDF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00355FD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00355FD0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48B9B8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00355FE0
 * Original: 0x00355FE0 - 0x00356006 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00355FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00355FE0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355FEAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00355FEA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00355FF9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00355FF9: ;
    ecx = eax;
    PUSH32(esp, 0x00356000u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356000: ;
    MEM32(0x48B9C8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356010
 * Original: 0x00356010 - 0x00356036 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356010: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035601Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035601A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356029u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356029: ;
    ecx = eax;
    PUSH32(esp, 0x00356030u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356030: ;
    MEM32(0x48B9BC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356040
 * Original: 0x00356040 - 0x00356056 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356040(void)
{

loc_00356040: ;
    ecx = 0x48B9D0;
    PUSH32(esp, 0x0035604Au); RECOMP_ABI_CALL(0x0004A2D0u, sub_0004A2D0); /* call 0x0004A2D0 */

loc_0035604A: ;
    PUSH32(esp, 0x359E30);
    PUSH32(esp, 0x00356054u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00356054: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356060
 * Original: 0x00356060 - 0x0035606F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356060(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356060: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D544) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356070
 * Original: 0x00356070 - 0x0035607F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356070(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356070: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D548) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356080
 * Original: 0x00356080 - 0x0035608F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356080(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356080: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D540) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356090
 * Original: 0x00356090 - 0x003560B4 (36 bytes, 7 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356090(void)
{

loc_00356090: ;
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x3CB498);
    PUSH32(esp, 0x260);
    ecx = 0x48D54C;
    PUSH32(esp, 0x003560A9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_003560A9: ;
    MEM32(0x48D54C) = 0x3CB4AC;
    esp += 4; return; /* ret */

}

/**
 * sub_003560C0
 * Original: 0x003560C0 - 0x003560CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003560C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003560C0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D594) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003560D0
 * Original: 0x003560D0 - 0x003560DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003560D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003560D0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D598) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003560E0
 * Original: 0x003560E0 - 0x003560EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003560E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003560E0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D590) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003560F0
 * Original: 0x003560F0 - 0x00356116 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003560F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003560F0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003560FAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003560FA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356109u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356109: ;
    ecx = eax;
    PUSH32(esp, 0x00356110u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356110: ;
    MEM32(0x48D5A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356120
 * Original: 0x00356120 - 0x00356146 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356120: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035612Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035612A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356139u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356139: ;
    ecx = eax;
    PUSH32(esp, 0x00356140u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356140: ;
    MEM32(0x48D5A8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356150
 * Original: 0x00356150 - 0x0035615B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356150(void)
{

loc_00356150: ;
    MEM32(0x48D5AC) = 0x3F490FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_00356160
 * Original: 0x00356160 - 0x0035616F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356160(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356160: ;
    fp_push(MEMF(0x48D5AC)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D5B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356170
 * Original: 0x00356170 - 0x0035617F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356170(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356170: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D5B4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356180
 * Original: 0x00356180 - 0x0035618F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356180(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356180: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D5A4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356190
 * Original: 0x00356190 - 0x0035619F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356190(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356190: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D818) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003561A0
 * Original: 0x003561A0 - 0x003561AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003561A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003561A0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D81C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003561B0
 * Original: 0x003561B0 - 0x003561BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003561B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003561B0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D810) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003561C0
 * Original: 0x003561C0 - 0x003561E6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003561C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003561C0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003561CAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003561CA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003561D9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003561D9: ;
    ecx = eax;
    PUSH32(esp, 0x003561E0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003561E0: ;
    MEM32(0x48D820) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003561F0
 * Original: 0x003561F0 - 0x00356216 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003561F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003561F0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003561FAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003561FA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356209u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356209: ;
    ecx = eax;
    PUSH32(esp, 0x00356210u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356210: ;
    MEM32(0x48D814) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356220
 * Original: 0x00356220 - 0x0035622F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356220(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356220: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D830) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356230
 * Original: 0x00356230 - 0x0035623F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356230(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356230: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D834) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356240
 * Original: 0x00356240 - 0x0035624F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356240(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356240: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D828) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356250
 * Original: 0x00356250 - 0x00356276 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356250: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035625Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035625A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356269u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356269: ;
    ecx = eax;
    PUSH32(esp, 0x00356270u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356270: ;
    MEM32(0x48D838) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356280
 * Original: 0x00356280 - 0x003562A6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356280: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035628Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035628A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356299u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356299: ;
    ecx = eax;
    PUSH32(esp, 0x003562A0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003562A0: ;
    MEM32(0x48D82C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003562B0
 * Original: 0x003562B0 - 0x003562BD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003562B0(void)
{

loc_003562B0: ;
    PUSH32(esp, 0x10);
    ecx = 0x48D824;
    PUSH32(esp, 0x003562BCu); RECOMP_ABI_CALL(0x00083730u, sub_00083730); /* call 0x00083730 */

loc_003562BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003562C0
 * Original: 0x003562C0 - 0x003562CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003562C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003562C0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D85C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003562D0
 * Original: 0x003562D0 - 0x003562DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003562D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003562D0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D860) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003562E0
 * Original: 0x003562E0 - 0x003562EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003562E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003562E0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D850) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003562F0
 * Original: 0x003562F0 - 0x00356316 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003562F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003562F0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003562FAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003562FA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356309u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356309: ;
    ecx = eax;
    PUSH32(esp, 0x00356310u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356310: ;
    MEM32(0x48D854) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356320
 * Original: 0x00356320 - 0x00356346 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356320: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035632Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035632A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356339u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356339: ;
    ecx = eax;
    PUSH32(esp, 0x00356340u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356340: ;
    MEM32(0x48D858) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356350
 * Original: 0x00356350 - 0x0035635F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356350(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356350: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D870) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356360
 * Original: 0x00356360 - 0x0035636F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356360(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356360: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D874) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356370
 * Original: 0x00356370 - 0x0035637F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356370(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356370: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D86C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356380
 * Original: 0x00356380 - 0x003563A4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356380(void)
{

loc_00356380: ;
    PUSH32(esp, 0x3C93C4);
    PUSH32(esp, 0x3CC260);
    PUSH32(esp, 0x2F8);
    ecx = 0x48D878;
    PUSH32(esp, 0x00356399u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356399: ;
    MEM32(0x48D878) = 0x3CC2C0;
    esp += 4; return; /* ret */

}

/**
 * sub_003563B0
 * Original: 0x003563B0 - 0x003563D4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003563B0(void)
{

loc_003563B0: ;
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x3CC4AC);
    PUSH32(esp, 0x244);
    ecx = 0x48D8AC;
    PUSH32(esp, 0x003563C9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_003563C9: ;
    MEM32(0x48D8AC) = 0x3CC658;
    esp += 4; return; /* ret */

}

/**
 * sub_003563E0
 * Original: 0x003563E0 - 0x003563EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003563E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003563E0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D8F0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003563F0
 * Original: 0x003563F0 - 0x003563FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003563F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003563F0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D8F4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356400
 * Original: 0x00356400 - 0x0035640F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356400(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356400: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48D8EC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356410
 * Original: 0x00356410 - 0x00356431 (33 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356410(void)
{

loc_00356410: ;
    PUSH32(esp, 0x3C8984);
    PUSH32(esp, 0x3C8984);
    PUSH32(esp, 0x70);
    ecx = 0x48D8F8;
    PUSH32(esp, 0x00356426u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356426: ;
    MEM32(0x48D8F8) = 0x3CC8DC;
    esp += 4; return; /* ret */

}

/**
 * sub_00356440
 * Original: 0x00356440 - 0x0035644F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356440(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356440: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48E474) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356450
 * Original: 0x00356450 - 0x0035645F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356450(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356450: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48E478) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356460
 * Original: 0x00356460 - 0x0035646F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356460(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356460: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x48E470) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356470
 * Original: 0x00356470 - 0x0035647F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356470(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356470: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x498D9C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356480
 * Original: 0x00356480 - 0x0035648F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356480(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356480: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x498DA0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356490
 * Original: 0x00356490 - 0x0035649F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356490(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356490: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x498D98) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003564A0
 * Original: 0x003564A0 - 0x003564AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003564A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003564A0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x498DC4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003564B0
 * Original: 0x003564B0 - 0x003564BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003564B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003564B0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x498DC8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003564C0
 * Original: 0x003564C0 - 0x003564CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003564C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003564C0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x498DBC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003564D0
 * Original: 0x003564D0 - 0x003564F6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003564D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003564D0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003564DAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003564DA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003564E9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003564E9: ;
    ecx = eax;
    PUSH32(esp, 0x003564F0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003564F0: ;
    MEM32(0x498DB8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356500
 * Original: 0x00356500 - 0x00356526 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356500: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035650Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035650A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356519u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356519: ;
    ecx = eax;
    PUSH32(esp, 0x00356520u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356520: ;
    MEM32(0x498DC0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356530
 * Original: 0x00356530 - 0x0035653F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356530(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356530: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49955C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356540
 * Original: 0x00356540 - 0x0035654F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356540(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356540: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x499560) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356550
 * Original: 0x00356550 - 0x0035655F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356550(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356550: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x499558) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356560
 * Original: 0x00356560 - 0x00356584 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356560(void)
{

loc_00356560: ;
    PUSH32(esp, 0x3C8990);
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x240);
    ecx = 0x499564;
    PUSH32(esp, 0x00356579u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356579: ;
    MEM32(0x499564) = 0x3CD158;
    esp += 4; return; /* ret */

}

/**
 * sub_00356590
 * Original: 0x00356590 - 0x0035659F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356590(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356590: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4996A8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003565A0
 * Original: 0x003565A0 - 0x003565AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003565A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003565A0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4996AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003565B0
 * Original: 0x003565B0 - 0x003565BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003565B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003565B0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4996A4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003565C0
 * Original: 0x003565C0 - 0x003565CB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003565C0(void)
{

loc_003565C0: ;
    eax = MEM32(0x3DD050);
    MEM32(0x44DABC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003565D0
 * Original: 0x003565D0 - 0x003565DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003565D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003565D0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x499714) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003565E0
 * Original: 0x003565E0 - 0x003565EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003565E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003565E0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x499718) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003565F0
 * Original: 0x003565F0 - 0x003565FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003565F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003565F0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x499710) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356600
 * Original: 0x00356600 - 0x00356624 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356600(void)
{

loc_00356600: ;
    PUSH32(esp, 0x3CD5FC);
    PUSH32(esp, 0x3CD60C);
    PUSH32(esp, 0x378);
    ecx = 0x49971C;
    PUSH32(esp, 0x00356619u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356619: ;
    MEM32(0x49971C) = 0x3CD624;
    esp += 4; return; /* ret */

}

/**
 * sub_00356630
 * Original: 0x00356630 - 0x0035663F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356630(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356630: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x499754) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356640
 * Original: 0x00356640 - 0x0035664F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356640(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356640: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x499758) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356650
 * Original: 0x00356650 - 0x0035665F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356650(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356650: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x499750) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356660
 * Original: 0x00356660 - 0x00356684 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356660(void)
{

loc_00356660: ;
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x3CDA84);
    PUSH32(esp, 0x2A8);
    ecx = 0x499790;
    PUSH32(esp, 0x00356679u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356679: ;
    MEM32(0x499790) = 0x3CDAB4;
    esp += 4; return; /* ret */

}

/**
 * sub_00356690
 * Original: 0x00356690 - 0x003566B4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356690(void)
{

loc_00356690: ;
    PUSH32(esp, 0x3CDA84);
    PUSH32(esp, 0x3CDA94);
    PUSH32(esp, 0x2FC);
    ecx = 0x49975C;
    PUSH32(esp, 0x003566A9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_003566A9: ;
    MEM32(0x49975C) = 0x3CDAC8;
    esp += 4; return; /* ret */

}

/**
 * sub_003566C0
 * Original: 0x003566C0 - 0x003566CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003566C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003566C0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4997C8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003566D0
 * Original: 0x003566D0 - 0x003566DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003566D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003566D0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4997CC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003566E0
 * Original: 0x003566E0 - 0x003566EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003566E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003566E0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4997C4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003566F0
 * Original: 0x003566F0 - 0x003566FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003566F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003566F0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4997E0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356700
 * Original: 0x00356700 - 0x0035670F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356700(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356700: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4997E4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356710
 * Original: 0x00356710 - 0x0035671F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356710(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356710: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4997D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356720
 * Original: 0x00356720 - 0x00356746 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356720: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035672Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035672A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356739u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356739: ;
    ecx = eax;
    PUSH32(esp, 0x00356740u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356740: ;
    MEM32(0x49981C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356750
 * Original: 0x00356750 - 0x00356776 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356750: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035675Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035675A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356769u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356769: ;
    ecx = eax;
    PUSH32(esp, 0x00356770u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356770: ;
    MEM32(0x4997DC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356780
 * Original: 0x00356780 - 0x0035678B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356780(void)
{

loc_00356780: ;
    MEM32(0x4997D8) = 0x3DCCCCCD;
    esp += 4; return; /* ret */

}

/**
 * sub_00356790
 * Original: 0x00356790 - 0x003567B4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356790(void)
{

loc_00356790: ;
    PUSH32(esp, 0x3C93C4);
    PUSH32(esp, 0x3CDE58);
    PUSH32(esp, 0x2CC);
    ecx = 0x4997E8;
    PUSH32(esp, 0x003567A9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_003567A9: ;
    MEM32(0x4997E8) = 0x3CE030;
    esp += 4; return; /* ret */

}

/**
 * sub_003567C0
 * Original: 0x003567C0 - 0x003567CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003567C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003567C0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49B290) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003567D0
 * Original: 0x003567D0 - 0x003567DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003567D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003567D0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49B294) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003567E0
 * Original: 0x003567E0 - 0x003567EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003567E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003567E0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49B28C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003567F0
 * Original: 0x003567F0 - 0x00356814 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003567F0(void)
{

loc_003567F0: ;
    PUSH32(esp, 0x3C8990);
    PUSH32(esp, 0x3CE238);
    PUSH32(esp, 0xEC);
    ecx = 0x49B298;
    PUSH32(esp, 0x00356809u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356809: ;
    MEM32(0x49B298) = 0x3CE364;
    esp += 4; return; /* ret */

}

/**
 * sub_00356820
 * Original: 0x00356820 - 0x0035682F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356820(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356820: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49B2E0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356830
 * Original: 0x00356830 - 0x0035683F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356830(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356830: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49B2E4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356840
 * Original: 0x00356840 - 0x0035684F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356840(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356840: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49B2D8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356850
 * Original: 0x00356850 - 0x00356876 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356850: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035685Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035685A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356869u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356869: ;
    ecx = eax;
    PUSH32(esp, 0x00356870u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356870: ;
    MEM32(0x49B2D4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356880
 * Original: 0x00356880 - 0x003568A6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356880: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035688Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035688A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356899u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356899: ;
    ecx = eax;
    PUSH32(esp, 0x003568A0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003568A0: ;
    MEM32(0x49B2DC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003568B0
 * Original: 0x003568B0 - 0x003568C6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003568B0(void)
{

loc_003568B0: ;
    ecx = 0x49BF28;
    PUSH32(esp, 0x003568BAu); RECOMP_ABI_CALL(0x000842D0u, sub_000842D0); /* call 0x000842D0 */

loc_003568BA: ;
    PUSH32(esp, 0x359F60);
    PUSH32(esp, 0x003568C4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003568C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003568D0
 * Original: 0x003568D0 - 0x003568E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003568D0(void)
{

loc_003568D0: ;
    ecx = 0x49BD48;
    PUSH32(esp, 0x003568DAu); RECOMP_ABI_CALL(0x000842D0u, sub_000842D0); /* call 0x000842D0 */

loc_003568DA: ;
    PUSH32(esp, 0x359F50);
    PUSH32(esp, 0x003568E4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003568E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003568F0
 * Original: 0x003568F0 - 0x00356906 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003568F0(void)
{

loc_003568F0: ;
    ecx = 0x49BCF8;
    PUSH32(esp, 0x003568FAu); RECOMP_ABI_CALL(0x000837F0u, sub_000837F0); /* call 0x000837F0 */

loc_003568FA: ;
    PUSH32(esp, 0x359F30);
    PUSH32(esp, 0x00356904u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00356904: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356910
 * Original: 0x00356910 - 0x00356926 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356910(void)
{

loc_00356910: ;
    ecx = 0x49B900;
    PUSH32(esp, 0x0035691Au); RECOMP_ABI_CALL(0x00083800u, sub_00083800); /* call 0x00083800 */

loc_0035691A: ;
    PUSH32(esp, 0x359F40);
    PUSH32(esp, 0x00356924u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00356924: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356930
 * Original: 0x00356930 - 0x00356946 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356930(void)
{

loc_00356930: ;
    ecx = 0x49B8B0;
    PUSH32(esp, 0x0035693Au); RECOMP_ABI_CALL(0x000837F0u, sub_000837F0); /* call 0x000837F0 */

loc_0035693A: ;
    PUSH32(esp, 0x359F10);
    PUSH32(esp, 0x00356944u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00356944: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356950
 * Original: 0x00356950 - 0x00356966 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356950(void)
{

loc_00356950: ;
    ecx = 0x49C108;
    PUSH32(esp, 0x0035695Au); RECOMP_ABI_CALL(0x00083800u, sub_00083800); /* call 0x00083800 */

loc_0035695A: ;
    PUSH32(esp, 0x359F20);
    PUSH32(esp, 0x00356964u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00356964: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356970
 * Original: 0x00356970 - 0x0035697F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356970(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356970: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49E808) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356980
 * Original: 0x00356980 - 0x0035698F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356980(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356980: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49E80C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356990
 * Original: 0x00356990 - 0x0035699F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356990(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356990: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49C818) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003569A0
 * Original: 0x003569A0 - 0x003569B6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003569A0(void)
{

loc_003569A0: ;
    ecx = 0x49E810;
    PUSH32(esp, 0x003569AAu); RECOMP_ABI_CALL(0x00085200u, sub_00085200); /* call 0x00085200 */

loc_003569AA: ;
    PUSH32(esp, 0x359F70);
    PUSH32(esp, 0x003569B4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003569B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003569C0
 * Original: 0x003569C0 - 0x003569D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003569C0(void)
{

loc_003569C0: ;
    ecx = 0x49C820;
    PUSH32(esp, 0x003569CAu); RECOMP_ABI_CALL(0x000851E0u, sub_000851E0); /* call 0x000851E0 */

loc_003569CA: ;
    PUSH32(esp, 0x359F80);
    PUSH32(esp, 0x003569D4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003569D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003569E0
 * Original: 0x003569E0 - 0x003569F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003569E0(void)
{

loc_003569E0: ;
    ecx = 0x49E898;
    PUSH32(esp, 0x003569EAu); RECOMP_ABI_CALL(0x000851F0u, sub_000851F0); /* call 0x000851F0 */

loc_003569EA: ;
    PUSH32(esp, 0x359F90);
    PUSH32(esp, 0x003569F4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003569F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356A00
 * Original: 0x00356A00 - 0x00356A16 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356A00(void)
{

loc_00356A00: ;
    ecx = 0x49C508;
    PUSH32(esp, 0x00356A0Au); RECOMP_ABI_CALL(0x00086530u, sub_00086530); /* call 0x00086530 */

loc_00356A0A: ;
    PUSH32(esp, 0x359FA0);
    PUSH32(esp, 0x00356A14u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00356A14: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356A20
 * Original: 0x00356A20 - 0x00356A2F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356A20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356A20: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49ECA4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356A30
 * Original: 0x00356A30 - 0x00356A3F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356A30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356A30: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49ECA8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356A40
 * Original: 0x00356A40 - 0x00356A4F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356A40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356A40: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x49EC9C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356A50
 * Original: 0x00356A50 - 0x00356A76 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356A50: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356A5Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00356A5A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356A69u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356A69: ;
    ecx = eax;
    PUSH32(esp, 0x00356A70u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356A70: ;
    MEM32(0x49ECE0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356A80
 * Original: 0x00356A80 - 0x00356AA6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356A80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356A80: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356A8Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00356A8A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356A99u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356A99: ;
    ecx = eax;
    PUSH32(esp, 0x00356AA0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356AA0: ;
    MEM32(0x49ECA0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356AB0
 * Original: 0x00356AB0 - 0x00356AD4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356AB0(void)
{

loc_00356AB0: ;
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x3CF15C);
    PUSH32(esp, 0x258);
    ecx = 0x49ECAC;
    PUSH32(esp, 0x00356AC9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356AC9: ;
    MEM32(0x49ECAC) = 0x3CF1B8;
    esp += 4; return; /* ret */

}

/**
 * sub_00356AE0
 * Original: 0x00356AE0 - 0x00356B04 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356AE0(void)
{

loc_00356AE0: ;
    PUSH32(esp, 0x3C93C4);
    PUSH32(esp, 0x3CF3E4);
    PUSH32(esp, 0x2F8);
    ecx = 0x49ECE4;
    PUSH32(esp, 0x00356AF9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356AF9: ;
    MEM32(0x49ECE4) = 0x3CF414;
    esp += 4; return; /* ret */

}

/**
 * sub_00356B10
 * Original: 0x00356B10 - 0x00356B1F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356B10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356B10: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4A0198) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356B20
 * Original: 0x00356B20 - 0x00356B2F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356B20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356B20: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4A019C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356B30
 * Original: 0x00356B30 - 0x00356B3F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356B30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356B30: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4A0194) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356B40
 * Original: 0x00356B40 - 0x00356B4F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356B40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356B40: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4A01CC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356B50
 * Original: 0x00356B50 - 0x00356B5F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356B50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356B50: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4A01D0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356B60
 * Original: 0x00356B60 - 0x00356B6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356B60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356B60: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4A01D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356B70
 * Original: 0x00356B70 - 0x00356B94 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356B70(void)
{

loc_00356B70: ;
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x3CF7F8);
    PUSH32(esp, 0x240);
    ecx = 0x4A01D8;
    PUSH32(esp, 0x00356B89u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356B89: ;
    MEM32(0x4A01D8) = 0x3CF808;
    esp += 4; return; /* ret */

}

/**
 * sub_00356BA0
 * Original: 0x00356BA0 - 0x00356BAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356BA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356BA0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4BFD1C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356BB0
 * Original: 0x00356BB0 - 0x00356BBF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356BB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356BB0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4BFD20) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356BC0
 * Original: 0x00356BC0 - 0x00356BCF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356BC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356BC0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4BFD24) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356BD0
 * Original: 0x00356BD0 - 0x00356BE6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356BD0(void)
{

loc_00356BD0: ;
    ecx = 0x4B3000;
    PUSH32(esp, 0x00356BDAu); RECOMP_ABI_CALL(0x00090E50u, sub_00090E50); /* call 0x00090E50 */

loc_00356BDA: ;
    PUSH32(esp, 0x359FE0);
    PUSH32(esp, 0x00356BE4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00356BE4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356BF0
 * Original: 0x00356BF0 - 0x00356BFF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356BF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356BF0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C0A54) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356C00
 * Original: 0x00356C00 - 0x00356C0F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356C00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356C00: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C0A58) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356C10
 * Original: 0x00356C10 - 0x00356C1F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356C10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356C10: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C0A4C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356C20
 * Original: 0x00356C20 - 0x00356C46 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356C20: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356C2Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00356C2A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356C39u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356C39: ;
    ecx = eax;
    PUSH32(esp, 0x00356C40u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356C40: ;
    MEM32(0x4C0A90) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356C50
 * Original: 0x00356C50 - 0x00356C76 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356C50: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356C5Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00356C5A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356C69u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356C69: ;
    ecx = eax;
    PUSH32(esp, 0x00356C70u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356C70: ;
    MEM32(0x4C0A50) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356C80
 * Original: 0x00356C80 - 0x00356C96 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356C80(void)
{

loc_00356C80: ;
    ecx = 0x4BFD30;
    PUSH32(esp, 0x00356C8Au); RECOMP_ABI_CALL(0x00093BA0u, sub_00093BA0); /* call 0x00093BA0 */

loc_00356C8A: ;
    PUSH32(esp, 0x359FF0);
    PUSH32(esp, 0x00356C94u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00356C94: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356CA0
 * Original: 0x00356CA0 - 0x00356CC4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356CA0(void)
{

loc_00356CA0: ;
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x3C93C4);
    PUSH32(esp, 0x2C4);
    ecx = 0x4C0A5C;
    PUSH32(esp, 0x00356CB9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356CB9: ;
    MEM32(0x4C0A5C) = 0x3CFC64;
    esp += 4; return; /* ret */

}

/**
 * sub_00356CD0
 * Original: 0x00356CD0 - 0x00356CDF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356CD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356CD0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C0A98) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356CE0
 * Original: 0x00356CE0 - 0x00356CEF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356CE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356CE0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C0A9C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356CF0
 * Original: 0x00356CF0 - 0x00356CFF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356CF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356CF0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C0A94) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356D00
 * Original: 0x00356D00 - 0x00356D24 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356D00(void)
{

loc_00356D00: ;
    PUSH32(esp, 0x3C8990);
    PUSH32(esp, 0x3CFD88);
    PUSH32(esp, 0xE0);
    ecx = 0x4C0AA0;
    PUSH32(esp, 0x00356D19u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356D19: ;
    MEM32(0x4C0AA0) = 0x3CFD9C;
    esp += 4; return; /* ret */

}

/**
 * sub_00356D30
 * Original: 0x00356D30 - 0x00356D3F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356D30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356D30: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C0AD8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356D40
 * Original: 0x00356D40 - 0x00356D4F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356D40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356D40: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C0ADC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356D50
 * Original: 0x00356D50 - 0x00356D5F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356D50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356D50: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C0AD4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356D60
 * Original: 0x00356D60 - 0x00356D84 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356D60(void)
{

loc_00356D60: ;
    PUSH32(esp, 0x3C93C4);
    PUSH32(esp, 0x3CAAE4);
    PUSH32(esp, 0x2CC);
    ecx = 0x4C0AE0;
    PUSH32(esp, 0x00356D79u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356D79: ;
    MEM32(0x4C0AE0) = 0x3D00D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00356D90
 * Original: 0x00356D90 - 0x00356D9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356D90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356D90: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C2458) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356DA0
 * Original: 0x00356DA0 - 0x00356DAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356DA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356DA0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C245C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356DB0
 * Original: 0x00356DB0 - 0x00356DBF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356DB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356DB0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C2450) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356DC0
 * Original: 0x00356DC0 - 0x00356DE6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356DC0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356DCAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00356DCA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356DD9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356DD9: ;
    ecx = eax;
    PUSH32(esp, 0x00356DE0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356DE0: ;
    MEM32(0x4C2460) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356DF0
 * Original: 0x00356DF0 - 0x00356E16 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356DF0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356DFAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00356DFA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356E09u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356E09: ;
    ecx = eax;
    PUSH32(esp, 0x00356E10u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356E10: ;
    MEM32(0x4C2454) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356E20
 * Original: 0x00356E20 - 0x00356E36 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356E20(void)
{

loc_00356E20: ;
    ecx = 0x4C0B20;
    PUSH32(esp, 0x00356E2Au); RECOMP_ABI_CALL(0x00096200u, sub_00096200); /* call 0x00096200 */

loc_00356E2A: ;
    PUSH32(esp, 0x35A000);
    PUSH32(esp, 0x00356E34u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00356E34: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00356E40
 * Original: 0x00356E40 - 0x00356E4F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356E40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356E40: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C2570) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356E50
 * Original: 0x00356E50 - 0x00356E5F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356E50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356E50: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C2574) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356E60
 * Original: 0x00356E60 - 0x00356E6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356E60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356E60: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C256C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356E70
 * Original: 0x00356E70 - 0x00356E94 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356E70(void)
{

loc_00356E70: ;
    PUSH32(esp, 0x3C93C4);
    PUSH32(esp, 0x3CD5FC);
    PUSH32(esp, 0x344);
    ecx = 0x4C2578;
    PUSH32(esp, 0x00356E89u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356E89: ;
    MEM32(0x4C2578) = 0x3D06D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00356EA0
 * Original: 0x00356EA0 - 0x00356EAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356EA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356EA0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C25E8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356EB0
 * Original: 0x00356EB0 - 0x00356EBF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356EB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356EB0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C25EC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356EC0
 * Original: 0x00356EC0 - 0x00356ECF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356EC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356EC0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C25AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356ED0
 * Original: 0x00356ED0 - 0x00356EF6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356ED0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356EDAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00356EDA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356EE9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356EE9: ;
    ecx = eax;
    PUSH32(esp, 0x00356EF0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356EF0: ;
    MEM32(0x4C25F0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356F00
 * Original: 0x00356F00 - 0x00356F26 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356F00: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356F0Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00356F0A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356F19u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356F19: ;
    ecx = eax;
    PUSH32(esp, 0x00356F20u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356F20: ;
    MEM32(0x4C25E4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356F30
 * Original: 0x00356F30 - 0x00356F54 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356F30(void)
{

loc_00356F30: ;
    PUSH32(esp, 0x3CD5FC);
    PUSH32(esp, 0x3D0898);
    PUSH32(esp, 0x354);
    ecx = 0x4C25B0;
    PUSH32(esp, 0x00356F49u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00356F49: ;
    MEM32(0x4C25B0) = 0x3D08C0;
    esp += 4; return; /* ret */

}

/**
 * sub_00356F60
 * Original: 0x00356F60 - 0x00356F6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356F60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356F60: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C2A04) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356F70
 * Original: 0x00356F70 - 0x00356F7F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356F70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356F70: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C2A08) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356F80
 * Original: 0x00356F80 - 0x00356F8F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00356F80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00356F80: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C29F8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00356F90
 * Original: 0x00356F90 - 0x00356FB6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356F90: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356F9Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00356F9A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00356FA9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356FA9: ;
    ecx = eax;
    PUSH32(esp, 0x00356FB0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356FB0: ;
    MEM32(0x4C2A0C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356FC0
 * Original: 0x00356FC0 - 0x00356FE6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00356FC0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356FCAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00356FCA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00356FD9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00356FD9: ;
    ecx = eax;
    PUSH32(esp, 0x00356FE0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00356FE0: ;
    MEM32(0x4C2A00) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00356FF0
 * Original: 0x00356FF0 - 0x00356FFB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00356FF0(void)
{

loc_00356FF0: ;
    MEM32(0x4C29FC) = 0x3DCCCCCD;
    esp += 4; return; /* ret */

}

/**
 * sub_00357000
 * Original: 0x00357000 - 0x0035700F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357000(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357000: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C6404) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357010
 * Original: 0x00357010 - 0x0035701F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357010(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357010: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C6408) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357020
 * Original: 0x00357020 - 0x0035702F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357020(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357020: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C6400) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357030
 * Original: 0x00357030 - 0x00357046 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357030(void)
{

loc_00357030: ;
    ecx = 0x4C6410;
    PUSH32(esp, 0x0035703Au); RECOMP_ABI_CALL(0x000A2870u, sub_000A2870); /* call 0x000A2870 */

loc_0035703A: ;
    PUSH32(esp, 0x35A010);
    PUSH32(esp, 0x00357044u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357044: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357050
 * Original: 0x00357050 - 0x00357074 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357050(void)
{

loc_00357050: ;
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x3D2A80);
    PUSH32(esp, 0x240);
    ecx = 0x4C7178;
    PUSH32(esp, 0x00357069u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00357069: ;
    MEM32(0x4C7178) = 0x3D2A90;
    esp += 4; return; /* ret */

}

/**
 * sub_00357080
 * Original: 0x00357080 - 0x0035708F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357080(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357080: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C8E14) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357090
 * Original: 0x00357090 - 0x0035709F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357090(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357090: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C8E18) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003570A0
 * Original: 0x003570A0 - 0x003570AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003570A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003570A0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C8E0C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003570B0
 * Original: 0x003570B0 - 0x003570D6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003570B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003570B0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003570BAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003570BA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003570C9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003570C9: ;
    ecx = eax;
    PUSH32(esp, 0x003570D0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003570D0: ;
    MEM32(0x4C8E1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003570E0
 * Original: 0x003570E0 - 0x00357106 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003570E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003570E0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003570EAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003570EA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003570F9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003570F9: ;
    ecx = eax;
    PUSH32(esp, 0x00357100u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357100: ;
    MEM32(0x4C8E10) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357110
 * Original: 0x00357110 - 0x00357126 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357110(void)
{

loc_00357110: ;
    ecx = 0x4C71B0;
    PUSH32(esp, 0x0035711Au); RECOMP_ABI_CALL(0x000A41E0u, sub_000A41E0); /* call 0x000A41E0 */

loc_0035711A: ;
    PUSH32(esp, 0x35A030);
    PUSH32(esp, 0x00357124u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357124: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357130
 * Original: 0x00357130 - 0x0035713F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357130: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C9A08) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357140
 * Original: 0x00357140 - 0x0035714F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357140(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357140: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C9A0C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357150
 * Original: 0x00357150 - 0x0035715F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357150(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357150: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C9A04) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357160
 * Original: 0x00357160 - 0x0035716F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357160(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357160: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C9A14) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357170
 * Original: 0x00357170 - 0x0035717F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357170(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357170: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C9A18) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357180
 * Original: 0x00357180 - 0x0035718F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357180(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357180: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4C9A10) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357190
 * Original: 0x00357190 - 0x003571B4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357190(void)
{

loc_00357190: ;
    PUSH32(esp, 0x3C93C4);
    PUSH32(esp, 0x3D2F88);
    PUSH32(esp, 0x354);
    ecx = 0x4C9A1C;
    PUSH32(esp, 0x003571A9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_003571A9: ;
    MEM32(0x4C9A1C) = 0x3D3164;
    esp += 4; return; /* ret */

}

/**
 * sub_003571C0
 * Original: 0x003571C0 - 0x003571E4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003571C0(void)
{

loc_003571C0: ;
    PUSH32(esp, 0x3D2F88);
    PUSH32(esp, 0x3D342C);
    PUSH32(esp, 0x380);
    ecx = 0x4C9A50;
    PUSH32(esp, 0x003571D9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_003571D9: ;
    MEM32(0x4C9A50) = 0x3D3440;
    esp += 4; return; /* ret */

}

/**
 * sub_003571F0
 * Original: 0x003571F0 - 0x003571FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003571F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003571F0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D0C00) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357200
 * Original: 0x00357200 - 0x0035720F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357200(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357200: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D0C04) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357210
 * Original: 0x00357210 - 0x0035721F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357210(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357210: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D0BFC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357220
 * Original: 0x00357220 - 0x00357244 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357220(void)
{

loc_00357220: ;
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x3D34BC);
    PUSH32(esp, 0x248);
    ecx = 0x4D0C08;
    PUSH32(esp, 0x00357239u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00357239: ;
    MEM32(0x4D0C08) = 0x3D34D4;
    esp += 4; return; /* ret */

}

/**
 * sub_00357250
 * Original: 0x00357250 - 0x0035725F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357250(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357250: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D23E8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357260
 * Original: 0x00357260 - 0x0035726F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357260(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357260: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D23EC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357270
 * Original: 0x00357270 - 0x0035727F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357270(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357270: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D23E4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357280
 * Original: 0x00357280 - 0x003572A4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357280(void)
{

loc_00357280: ;
    PUSH32(esp, 0x3C8990);
    PUSH32(esp, 0x3D3838);
    PUSH32(esp, 0xD0);
    ecx = 0x4D23F0;
    PUSH32(esp, 0x00357299u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00357299: ;
    MEM32(0x4D23F0) = 0x3D3848;
    esp += 4; return; /* ret */

}

/**
 * sub_003572B0
 * Original: 0x003572B0 - 0x003572D4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003572B0(void)
{

loc_003572B0: ;
    PUSH32(esp, 0x3C8990);
    PUSH32(esp, 0x3D3950);
    PUSH32(esp, 0x124);
    ecx = 0x4D2424;
    PUSH32(esp, 0x003572C9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_003572C9: ;
    MEM32(0x4D2424) = 0x3D3960;
    esp += 4; return; /* ret */

}

/**
 * sub_003572E0
 * Original: 0x003572E0 - 0x00357306 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003572E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003572E0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003572EAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003572EA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003572F9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003572F9: ;
    ecx = eax;
    PUSH32(esp, 0x00357300u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357300: ;
    MEM32(0x4D2458) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357310
 * Original: 0x00357310 - 0x00357336 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357310: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035731Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035731A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357329u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357329: ;
    ecx = eax;
    PUSH32(esp, 0x00357330u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357330: ;
    MEM32(0x4D245C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357340
 * Original: 0x00357340 - 0x00357366 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357340: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035734Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035734A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357359u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357359: ;
    ecx = eax;
    PUSH32(esp, 0x00357360u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357360: ;
    MEM32(0x4D2464) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357370
 * Original: 0x00357370 - 0x00357396 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357370: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035737Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035737A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357389u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357389: ;
    ecx = eax;
    PUSH32(esp, 0x00357390u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357390: ;
    MEM32(0x4D2470) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003573A0
 * Original: 0x003573A0 - 0x003573AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003573A0(void)
{

loc_003573A0: ;
    MEM32(0x4D2474) = 0x3F490FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003573B0
 * Original: 0x003573B0 - 0x003573BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003573B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003573B0: ;
    fp_push(MEMF(0x4D2474)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D2478) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003573C0
 * Original: 0x003573C0 - 0x003573CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003573C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003573C0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D403C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003573D0
 * Original: 0x003573D0 - 0x003573DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003573D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003573D0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D2468) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003573E0
 * Original: 0x003573E0 - 0x003573EB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003573E0(void)
{

loc_003573E0: ;
    MEM32(0x4D246C) = 0x3DCCCCCD;
    esp += 4; return; /* ret */

}

/**
 * sub_003573F0
 * Original: 0x003573F0 - 0x00357406 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003573F0(void)
{

loc_003573F0: ;
    ecx = 0x4D2A98;
    PUSH32(esp, 0x003573FAu); RECOMP_ABI_CALL(0x000B2E50u, sub_000B2E50); /* call 0x000B2E50 */

loc_003573FA: ;
    PUSH32(esp, 0x35A090);
    PUSH32(esp, 0x00357404u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357404: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357410
 * Original: 0x00357410 - 0x00357426 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357410(void)
{

loc_00357410: ;
    ecx = 0x4D2480;
    PUSH32(esp, 0x0035741Au); RECOMP_ABI_CALL(0x000B2A40u, sub_000B2A40); /* call 0x000B2A40 */

loc_0035741A: ;
    PUSH32(esp, 0x35A080);
    PUSH32(esp, 0x00357424u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357424: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
