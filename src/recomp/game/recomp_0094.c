/**
 * X-Men Legends - Recompiled code chunk 94
 * Functions: 250 (0x00358A30 - 0x0035A230)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00358A30
 * Original: 0x00358A30 - 0x00358A56 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358A30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358A30: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358A3Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358A3A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358A49u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358A49: ;
    ecx = eax;
    PUSH32(esp, 0x00358A50u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358A50: ;
    MEM32(0x4F3DC4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358A60
 * Original: 0x00358A60 - 0x00358A6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358A60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358A60: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DDC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358A70
 * Original: 0x00358A70 - 0x00358A7F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358A70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358A70: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DE0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358A80
 * Original: 0x00358A80 - 0x00358A8F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358A80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358A80: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DD8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358A90
 * Original: 0x00358A90 - 0x00358A9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358A90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358A90: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FED7C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358AA0
 * Original: 0x00358AA0 - 0x00358AAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358AA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358AA0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FED80) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358AB0
 * Original: 0x00358AB0 - 0x00358ABF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358AB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358AB0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FED78) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358AC0
 * Original: 0x00358AC0 - 0x00358ACF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358AC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358AC0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FED8C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358AD0
 * Original: 0x00358AD0 - 0x00358ADF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358AD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358AD0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FED90) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358AE0
 * Original: 0x00358AE0 - 0x00358AEF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358AE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358AE0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FED84) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358AF0
 * Original: 0x00358AF0 - 0x00358B16 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358AF0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358AFAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358AFA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358B09u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358B09: ;
    ecx = eax;
    PUSH32(esp, 0x00358B10u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358B10: ;
    MEM32(0x4FED94) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358B20
 * Original: 0x00358B20 - 0x00358B46 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358B20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358B20: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358B2Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358B2A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358B39u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358B39: ;
    ecx = eax;
    PUSH32(esp, 0x00358B40u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358B40: ;
    MEM32(0x4FED88) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358B50
 * Original: 0x00358B50 - 0x00358B5F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358B50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358B50: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FF9D0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358B60
 * Original: 0x00358B60 - 0x00358B6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358B60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358B60: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FF9D8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358B70
 * Original: 0x00358B70 - 0x00358B7F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358B70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358B70: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FEE38) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358B80
 * Original: 0x00358B80 - 0x00358BA6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358B80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358B80: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358B8Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358B8A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358B99u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358B99: ;
    ecx = eax;
    PUSH32(esp, 0x00358BA0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358BA0: ;
    MEM32(0x4FFA08) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358BB0
 * Original: 0x00358BB0 - 0x00358BD6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358BB0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358BBAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358BBA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358BC9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358BC9: ;
    ecx = eax;
    PUSH32(esp, 0x00358BD0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358BD0: ;
    MEM32(0x4FF9CC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358BE0
 * Original: 0x00358BE0 - 0x00358BF6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358BE0(void)
{

loc_00358BE0: ;
    ecx = 0x4FF9F4;
    PUSH32(esp, 0x00358BEAu); RECOMP_ABI_CALL(0x00032220u, sub_00032220); /* call 0x00032220 */

loc_00358BEA: ;
    PUSH32(esp, 0x35A220);
    PUSH32(esp, 0x00358BF4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358BF4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358C00
 * Original: 0x00358C00 - 0x00358C16 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358C00(void)
{

loc_00358C00: ;
    ecx = 0x4FF078;
    PUSH32(esp, 0x00358C0Au); RECOMP_ABI_CALL(0x0010DC90u, sub_0010DC90); /* call 0x0010DC90 */

loc_00358C0A: ;
    PUSH32(esp, 0x35A260);
    PUSH32(esp, 0x00358C14u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358C14: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358C20
 * Original: 0x00358C20 - 0x00358C36 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358C20(void)
{

loc_00358C20: ;
    ecx = 0x4FEE40;
    PUSH32(esp, 0x00358C2Au); RECOMP_ABI_CALL(0x00104280u, sub_00104280); /* call 0x00104280 */

loc_00358C2A: ;
    PUSH32(esp, 0x35A230);
    PUSH32(esp, 0x00358C34u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358C34: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358C40
 * Original: 0x00358C40 - 0x00358C56 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358C40(void)
{

loc_00358C40: ;
    ecx = 0x4FF950;
    PUSH32(esp, 0x00358C4Au); RECOMP_ABI_CALL(0x001041F0u, sub_001041F0); /* call 0x001041F0 */

loc_00358C4A: ;
    PUSH32(esp, 0x35A240);
    PUSH32(esp, 0x00358C54u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358C54: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358C60
 * Original: 0x00358C60 - 0x00358C76 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358C60(void)
{

loc_00358C60: ;
    ecx = 0x4FF8D0;
    PUSH32(esp, 0x00358C6Au); RECOMP_ABI_CALL(0x001041F0u, sub_001041F0); /* call 0x001041F0 */

loc_00358C6A: ;
    PUSH32(esp, 0x35A210);
    PUSH32(esp, 0x00358C74u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358C74: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358C80
 * Original: 0x00358C80 - 0x00358C8C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358C80(void)
{

loc_00358C80: ;
    PUSH32(esp, 0x35A250);
    PUSH32(esp, 0x00358C8Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358C8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358C90
 * Original: 0x00358C90 - 0x00358C9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358C90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358C90: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FFA64) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358CA0
 * Original: 0x00358CA0 - 0x00358CAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358CA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358CA0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FFA68) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358CB0
 * Original: 0x00358CB0 - 0x00358CBF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358CB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358CB0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4FFA58) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358CC0
 * Original: 0x00358CC0 - 0x00358CE6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358CC0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358CCAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358CCA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358CD9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358CD9: ;
    ecx = eax;
    PUSH32(esp, 0x00358CE0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358CE0: ;
    MEM32(0x4FFA70) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358CF0
 * Original: 0x00358CF0 - 0x00358D16 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358CF0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358CFAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358CFA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358D09u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358D09: ;
    ecx = eax;
    PUSH32(esp, 0x00358D10u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358D10: ;
    MEM32(0x4FFA60) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358D20
 * Original: 0x00358D20 - 0x00358D36 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358D20(void)
{

loc_00358D20: ;
    ecx = 0x4FFEB0;
    PUSH32(esp, 0x00358D2Au); RECOMP_ABI_CALL(0x0011A860u, sub_0011A860); /* call 0x0011A860 */

loc_00358D2A: ;
    PUSH32(esp, 0x35A2A0);
    PUSH32(esp, 0x00358D34u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358D34: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358D40
 * Original: 0x00358D40 - 0x00358D56 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358D40(void)
{

loc_00358D40: ;
    ecx = 0x500480;
    PUSH32(esp, 0x00358D4Au); RECOMP_ABI_CALL(0x001189F0u, sub_001189F0); /* call 0x001189F0 */

loc_00358D4A: ;
    PUSH32(esp, 0x35A270);
    PUSH32(esp, 0x00358D54u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358D54: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358D60
 * Original: 0x00358D60 - 0x00358D76 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358D60(void)
{

loc_00358D60: ;
    ecx = 0x500670;
    PUSH32(esp, 0x00358D6Au); RECOMP_ABI_CALL(0x001190B0u, sub_001190B0); /* call 0x001190B0 */

loc_00358D6A: ;
    PUSH32(esp, 0x35A280);
    PUSH32(esp, 0x00358D74u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358D74: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358D80
 * Original: 0x00358D80 - 0x00358D96 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358D80(void)
{

loc_00358D80: ;
    ecx = 0x4FFA80;
    PUSH32(esp, 0x00358D8Au); RECOMP_ABI_CALL(0x0011A900u, sub_0011A900); /* call 0x0011A900 */

loc_00358D8A: ;
    PUSH32(esp, 0x35A2B0);
    PUSH32(esp, 0x00358D94u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358D94: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358DA0
 * Original: 0x00358DA0 - 0x00358DB6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358DA0(void)
{

loc_00358DA0: ;
    ecx = 0x502888;
    PUSH32(esp, 0x00358DAAu); RECOMP_ABI_CALL(0x0011ED10u, sub_0011ED10); /* call 0x0011ED10 */

loc_00358DAA: ;
    PUSH32(esp, 0x35A320);
    PUSH32(esp, 0x00358DB4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358DB4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358DC0
 * Original: 0x00358DC0 - 0x00358DD6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358DC0(void)
{

loc_00358DC0: ;
    ecx = 0x557E00;
    PUSH32(esp, 0x00358DCAu); RECOMP_ABI_CALL(0x00149560u, sub_00149560); /* call 0x00149560 */

loc_00358DCA: ;
    PUSH32(esp, 0x35A540);
    PUSH32(esp, 0x00358DD4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358DD4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358DE0
 * Original: 0x00358DE0 - 0x00358DF6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358DE0(void)
{

loc_00358DE0: ;
    ecx = 0x56DAE0;
    PUSH32(esp, 0x00358DEAu); RECOMP_ABI_CALL(0x00153F50u, sub_00153F50); /* call 0x00153F50 */

loc_00358DEA: ;
    PUSH32(esp, 0x35A5A0);
    PUSH32(esp, 0x00358DF4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00358DF4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00358E00
 * Original: 0x00358E00 - 0x00358E0F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358E00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358E00: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x56DC00) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358E10
 * Original: 0x00358E10 - 0x00358E1F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358E10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358E10: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x56DC04) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358E20
 * Original: 0x00358E20 - 0x00358E2F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358E20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358E20: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x56DBF8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358E30
 * Original: 0x00358E30 - 0x00358E56 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358E30: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358E3Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358E3A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358E49u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358E49: ;
    ecx = eax;
    PUSH32(esp, 0x00358E50u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358E50: ;
    MEM32(0x56DBF4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358E60
 * Original: 0x00358E60 - 0x00358E86 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358E60: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358E6Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358E6A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358E79u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358E79: ;
    ecx = eax;
    PUSH32(esp, 0x00358E80u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358E80: ;
    MEM32(0x56DBFC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358E90
 * Original: 0x00358E90 - 0x00358E9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358E90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358E90: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570D68) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358EA0
 * Original: 0x00358EA0 - 0x00358EAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358EA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358EA0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570D6C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358EB0
 * Original: 0x00358EB0 - 0x00358EBF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358EB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358EB0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570D70) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358EC0
 * Original: 0x00358EC0 - 0x00358ECF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358EC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358EC0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570D7C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358ED0
 * Original: 0x00358ED0 - 0x00358EDF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358ED0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358ED0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570D80) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358EE0
 * Original: 0x00358EE0 - 0x00358EEF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358EE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358EE0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570D84) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358EF0
 * Original: 0x00358EF0 - 0x00358F16 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358EF0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358EFAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358EFA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358F09u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358F09: ;
    ecx = eax;
    PUSH32(esp, 0x00358F10u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358F10: ;
    MEM32(0x570D74) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358F20
 * Original: 0x00358F20 - 0x00358F46 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358F20: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358F2Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358F2A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358F39u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358F39: ;
    ecx = eax;
    PUSH32(esp, 0x00358F40u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358F40: ;
    MEM32(0x570D78) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358F50
 * Original: 0x00358F50 - 0x00358F5F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358F50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358F50: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570DC4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358F60
 * Original: 0x00358F60 - 0x00358F6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358F60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358F60: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570DC8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358F70
 * Original: 0x00358F70 - 0x00358F7F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358F70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358F70: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570DCC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358F80
 * Original: 0x00358F80 - 0x00358FA6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358F80: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358F8Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358F8A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358F99u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358F99: ;
    ecx = eax;
    PUSH32(esp, 0x00358FA0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358FA0: ;
    MEM32(0x570DBC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358FB0
 * Original: 0x00358FB0 - 0x00358FD6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358FB0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358FBAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358FBA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358FC9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358FC9: ;
    ecx = eax;
    PUSH32(esp, 0x00358FD0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358FD0: ;
    MEM32(0x570DC0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358FE0
 * Original: 0x00358FE0 - 0x00358FEF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358FE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358FE0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570DD8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358FF0
 * Original: 0x00358FF0 - 0x00358FFF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358FF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358FF0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570DDC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359000
 * Original: 0x00359000 - 0x0035900F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359000(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359000: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570DE0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359010
 * Original: 0x00359010 - 0x00359036 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359010: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035901Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035901A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00359029u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359029: ;
    ecx = eax;
    PUSH32(esp, 0x00359030u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359030: ;
    MEM32(0x570DD0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359040
 * Original: 0x00359040 - 0x00359066 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359040: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035904Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035904A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00359059u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359059: ;
    ecx = eax;
    PUSH32(esp, 0x00359060u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359060: ;
    MEM32(0x570DD4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359070
 * Original: 0x00359070 - 0x0035907F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359070(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359070: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570DF0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359080
 * Original: 0x00359080 - 0x0035908F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359080(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359080: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570DF4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359090
 * Original: 0x00359090 - 0x0035909F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359090(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359090: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570E94) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003590A0
 * Original: 0x003590A0 - 0x003590C6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003590A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003590A0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003590AAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003590AA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003590B9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003590B9: ;
    ecx = eax;
    PUSH32(esp, 0x003590C0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003590C0: ;
    MEM32(0x570DE8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003590D0
 * Original: 0x003590D0 - 0x003590F6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003590D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003590D0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003590DAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003590DA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003590E9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003590E9: ;
    ecx = eax;
    PUSH32(esp, 0x003590F0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003590F0: ;
    MEM32(0x570DEC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359100
 * Original: 0x00359100 - 0x00359116 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359100(void)
{

loc_00359100: ;
    ecx = 0x570DF8;
    PUSH32(esp, 0x0035910Au); RECOMP_ABI_CALL(0x0015F280u, sub_0015F280); /* call 0x0015F280 */

loc_0035910A: ;
    PUSH32(esp, 0x35A5C0);
    PUSH32(esp, 0x00359114u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359114: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359120
 * Original: 0x00359120 - 0x0035912F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359120(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359120: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570EA0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359130
 * Original: 0x00359130 - 0x0035913F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359130: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570EA4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359140
 * Original: 0x00359140 - 0x0035914F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359140(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359140: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570EA8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359150
 * Original: 0x00359150 - 0x00359176 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359150: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035915Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035915A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00359169u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359169: ;
    ecx = eax;
    PUSH32(esp, 0x00359170u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359170: ;
    MEM32(0x570E98) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359180
 * Original: 0x00359180 - 0x003591A6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359180: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035918Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035918A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00359199u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359199: ;
    ecx = eax;
    PUSH32(esp, 0x003591A0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003591A0: ;
    MEM32(0x570E9C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003591B0
 * Original: 0x003591B0 - 0x003591BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003591B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003591B0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570EB8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003591C0
 * Original: 0x003591C0 - 0x003591CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003591C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003591C0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570EBC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003591D0
 * Original: 0x003591D0 - 0x003591DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003591D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003591D0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570EC0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003591E0
 * Original: 0x003591E0 - 0x00359206 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003591E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003591E0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003591EAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003591EA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003591F9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003591F9: ;
    ecx = eax;
    PUSH32(esp, 0x00359200u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359200: ;
    MEM32(0x570EB0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359210
 * Original: 0x00359210 - 0x00359236 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359210: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035921Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035921A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00359229u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359229: ;
    ecx = eax;
    PUSH32(esp, 0x00359230u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359230: ;
    MEM32(0x570EB4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359240
 * Original: 0x00359240 - 0x00359266 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359240: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035924Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035924A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00359259u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359259: ;
    ecx = eax;
    PUSH32(esp, 0x00359260u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359260: ;
    MEM32(0x570F2C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359270
 * Original: 0x00359270 - 0x00359296 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359270: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035927Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035927A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00359289u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359289: ;
    ecx = eax;
    PUSH32(esp, 0x00359290u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359290: ;
    MEM32(0x570F34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003592A0
 * Original: 0x003592A0 - 0x003592AB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003592A0(void)
{

loc_003592A0: ;
    MEM32(0x570F30) = 0x3F490FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_003592B0
 * Original: 0x003592B0 - 0x003592BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003592B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003592B0: ;
    fp_push(MEMF(0x570F30)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x571724) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003592C0
 * Original: 0x003592C0 - 0x003592CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003592C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003592C0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570F38) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003592D0
 * Original: 0x003592D0 - 0x003592DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003592D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003592D0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x570F28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003592E0
 * Original: 0x003592E0 - 0x003592F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003592E0(void)
{

loc_003592E0: ;
    ecx = 0x571448;
    PUSH32(esp, 0x003592EAu); RECOMP_ABI_CALL(0x0016A510u, sub_0016A510); /* call 0x0016A510 */

loc_003592EA: ;
    PUSH32(esp, 0x35A5F0);
    PUSH32(esp, 0x003592F4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003592F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359300
 * Original: 0x00359300 - 0x00359316 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359300(void)
{

loc_00359300: ;
    ecx = 0x570F18;
    PUSH32(esp, 0x0035930Au); RECOMP_ABI_CALL(0x000F7620u, sub_000F7620); /* call 0x000F7620 */

loc_0035930A: ;
    PUSH32(esp, 0x35A5D0);
    PUSH32(esp, 0x00359314u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359314: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359320
 * Original: 0x00359320 - 0x00359336 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359320(void)
{

loc_00359320: ;
    ecx = 0x570F40;
    PUSH32(esp, 0x0035932Au); RECOMP_ABI_CALL(0x00166140u, sub_00166140); /* call 0x00166140 */

loc_0035932A: ;
    PUSH32(esp, 0x35A5E0);
    PUSH32(esp, 0x00359334u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359334: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359340
 * Original: 0x00359340 - 0x0035934F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359340(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359340: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x57174C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359350
 * Original: 0x00359350 - 0x0035935F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359350(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359350: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x571750) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359360
 * Original: 0x00359360 - 0x0035936F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359360(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359360: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x571754) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359370
 * Original: 0x00359370 - 0x0035937F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359370(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359370: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x571870) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359380
 * Original: 0x00359380 - 0x0035938F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359380(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359380: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x571874) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359390
 * Original: 0x00359390 - 0x0035939F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359390(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359390: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x571878) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003593A0
 * Original: 0x003593A0 - 0x003593C6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003593A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003593A0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003593AAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003593AA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003593B9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003593B9: ;
    ecx = eax;
    PUSH32(esp, 0x003593C0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003593C0: ;
    MEM32(0x571868) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003593D0
 * Original: 0x003593D0 - 0x003593F6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003593D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003593D0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003593DAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003593DA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003593E9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003593E9: ;
    ecx = eax;
    PUSH32(esp, 0x003593F0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003593F0: ;
    MEM32(0x57186C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359400
 * Original: 0x00359400 - 0x00359426 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359400: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035940Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035940A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00359419u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359419: ;
    ecx = eax;
    PUSH32(esp, 0x00359420u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359420: ;
    MEM32(0x571884) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359430
 * Original: 0x00359430 - 0x00359456 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359430: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035943Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035943A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00359449u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359449: ;
    ecx = eax;
    PUSH32(esp, 0x00359450u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359450: ;
    MEM32(0x57188C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359460
 * Original: 0x00359460 - 0x0035946B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359460(void)
{

loc_00359460: ;
    MEM32(0x571888) = 0x3F490FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_00359470
 * Original: 0x00359470 - 0x0035947F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359470(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359470: ;
    fp_push(MEMF(0x571888)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x573834) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359480
 * Original: 0x00359480 - 0x0035948F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359480(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359480: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x571890) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359490
 * Original: 0x00359490 - 0x0035949F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359490(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359490: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x571880) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003594A0
 * Original: 0x003594A0 - 0x003594B6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003594A0(void)
{

loc_003594A0: ;
    ecx = 0x571898;
    PUSH32(esp, 0x003594AAu); RECOMP_ABI_CALL(0x00176EF0u, sub_00176EF0); /* call 0x00176EF0 */

loc_003594AA: ;
    PUSH32(esp, 0x35A600);
    PUSH32(esp, 0x003594B4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003594B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003594C0
 * Original: 0x003594C0 - 0x003594D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003594C0(void)
{

loc_003594C0: ;
    ecx = 0x573B48;
    PUSH32(esp, 0x003594CAu); RECOMP_ABI_CALL(0x00178A70u, sub_00178A70); /* call 0x00178A70 */

loc_003594CA: ;
    PUSH32(esp, 0x35A610);
    PUSH32(esp, 0x003594D4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003594D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003594E0
 * Original: 0x003594E0 - 0x003594F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003594E0(void)
{

loc_003594E0: ;
    ecx = 0x573838;
    PUSH32(esp, 0x003594EAu); RECOMP_ABI_CALL(0x00178AD0u, sub_00178AD0); /* call 0x00178AD0 */

loc_003594EA: ;
    PUSH32(esp, 0x35A620);
    PUSH32(esp, 0x003594F4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003594F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359500
 * Original: 0x00359500 - 0x00359526 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359500: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035950Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035950A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00359519u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359519: ;
    ecx = eax;
    PUSH32(esp, 0x00359520u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359520: ;
    MEM32(0x575D98) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359530
 * Original: 0x00359530 - 0x00359556 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359530: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035953Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035953A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00359549u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359549: ;
    ecx = eax;
    PUSH32(esp, 0x00359550u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359550: ;
    MEM32(0x575D9C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359560
 * Original: 0x00359560 - 0x00359576 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359560(void)
{

loc_00359560: ;
    ecx = 0x575DA0;
    PUSH32(esp, 0x0035956Au); RECOMP_ABI_CALL(0x0017B840u, sub_0017B840); /* call 0x0017B840 */

loc_0035956A: ;
    PUSH32(esp, 0x35A630);
    PUSH32(esp, 0x00359574u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359574: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359580
 * Original: 0x00359580 - 0x00359596 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359580(void)
{

loc_00359580: ;
    ecx = 0x5765C8;
    PUSH32(esp, 0x0035958Au); RECOMP_ABI_CALL(0x0017E6B0u, sub_0017E6B0); /* call 0x0017E6B0 */

loc_0035958A: ;
    PUSH32(esp, 0x35A640);
    PUSH32(esp, 0x00359594u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359594: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003595A0
 * Original: 0x003595A0 - 0x003595C6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003595A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003595A0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003595AAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003595AA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003595B9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003595B9: ;
    ecx = eax;
    PUSH32(esp, 0x003595C0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003595C0: ;
    MEM32(0x577204) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003595D0
 * Original: 0x003595D0 - 0x003595F6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003595D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003595D0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003595DAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003595DA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003595E9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003595E9: ;
    ecx = eax;
    PUSH32(esp, 0x003595F0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003595F0: ;
    MEM32(0x577208) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359600
 * Original: 0x00359600 - 0x00359626 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359600: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035960Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035960A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00359619u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359619: ;
    ecx = eax;
    PUSH32(esp, 0x00359620u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359620: ;
    MEM32(0x577218) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359630
 * Original: 0x00359630 - 0x00359656 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359630: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035963Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035963A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00359649u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359649: ;
    ecx = eax;
    PUSH32(esp, 0x00359650u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359650: ;
    MEM32(0x577220) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359660
 * Original: 0x00359660 - 0x0035966B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359660(void)
{

loc_00359660: ;
    MEM32(0x57721C) = 0x3F490FDB;
    esp += 4; return; /* ret */

}

/**
 * sub_00359670
 * Original: 0x00359670 - 0x0035967F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359670(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359670: ;
    fp_push(MEMF(0x57721C)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x577648) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359680
 * Original: 0x00359680 - 0x0035968F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359680(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359680: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x577224) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359690
 * Original: 0x00359690 - 0x0035969F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359690(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359690: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x577214) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003596A0
 * Original: 0x003596A0 - 0x003596B6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003596A0(void)
{

loc_003596A0: ;
    ecx = 0x577B70;
    PUSH32(esp, 0x003596AAu); RECOMP_ABI_CALL(0x001892D0u, sub_001892D0); /* call 0x001892D0 */

loc_003596AA: ;
    PUSH32(esp, 0x35A650);
    PUSH32(esp, 0x003596B4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003596B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003596C0
 * Original: 0x003596C0 - 0x003596D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003596C0(void)
{

loc_003596C0: ;
    ecx = 0x5780D8;
    PUSH32(esp, 0x003596CAu); RECOMP_ABI_CALL(0x0018A5F0u, sub_0018A5F0); /* call 0x0018A5F0 */

loc_003596CA: ;
    PUSH32(esp, 0x35A660);
    PUSH32(esp, 0x003596D4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003596D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003596E0
 * Original: 0x003596E0 - 0x003596F6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003596E0(void)
{

loc_003596E0: ;
    ecx = 0x57CC98;
    PUSH32(esp, 0x003596EAu); RECOMP_ABI_CALL(0x0018B450u, sub_0018B450); /* call 0x0018B450 */

loc_003596EA: ;
    PUSH32(esp, 0x35A670);
    PUSH32(esp, 0x003596F4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003596F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359700
 * Original: 0x00359700 - 0x00359726 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359700: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035970Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035970A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00359719u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359719: ;
    ecx = eax;
    PUSH32(esp, 0x00359720u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359720: ;
    MEM32(0x57F4D8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359730
 * Original: 0x00359730 - 0x00359756 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359730: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035973Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035973A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00359749u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359749: ;
    ecx = eax;
    PUSH32(esp, 0x00359750u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359750: ;
    MEM32(0x57F4DC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359760
 * Original: 0x00359760 - 0x0035977C (28 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359760(void)
{

loc_00359760: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, 0x4598A8);
    PUSH32(esp, 0x00359771u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00359771: ;
    esp = esp + 0xC;
    MEM8(0x4598A8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00359780
 * Original: 0x00359780 - 0x0035978F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359780(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359780: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x583890) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359790
 * Original: 0x00359790 - 0x0035979F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00359790(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00359790: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x583894) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003597A0
 * Original: 0x003597A0 - 0x003597AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003597A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003597A0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x583898) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003597B0
 * Original: 0x003597B0 - 0x003597D6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003597B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003597B0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003597BAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003597BA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003597C9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003597C9: ;
    ecx = eax;
    PUSH32(esp, 0x003597D0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003597D0: ;
    MEM32(0x583888) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003597E0
 * Original: 0x003597E0 - 0x00359806 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003597E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003597E0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003597EAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003597EA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003597F9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003597F9: ;
    ecx = eax;
    PUSH32(esp, 0x00359800u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359800: ;
    MEM32(0x58388C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359810
 * Original: 0x00359810 - 0x00359836 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359810: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035981Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035981A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00359829u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359829: ;
    ecx = eax;
    PUSH32(esp, 0x00359830u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359830: ;
    MEM32(0x58389C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359840
 * Original: 0x00359840 - 0x00359866 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00359840: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035984Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035984A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00359859u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00359859: ;
    ecx = eax;
    PUSH32(esp, 0x00359860u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00359860: ;
    MEM32(0x5838A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00359870
 * Original: 0x00359870 - 0x0035987B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359870(void)
{

loc_00359870: ;
    MEM32(0x5838A4) = 0x3DCCCCCD;
    esp += 4; return; /* ret */

}

/**
 * sub_00359880
 * Original: 0x00359880 - 0x00359896 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359880(void)
{

loc_00359880: ;
    ecx = 0x58F0D8;
    PUSH32(esp, 0x0035988Au); RECOMP_ABI_CALL(0x00192280u, sub_00192280); /* call 0x00192280 */

loc_0035988A: ;
    PUSH32(esp, 0x35A690);
    PUSH32(esp, 0x00359894u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359894: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003598A0
 * Original: 0x003598A0 - 0x003598D1 (49 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003598A0(void)
{

loc_003598A0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x400;
    edi = 0x5B76C4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    SET_LO8(eax, 0); /* xor self */
    MEM32(0x5B76C4) = 1;
    MEM8(0x5B86C8) = LO8(eax);
    MEM8(0x5B86C9) = LO8(eax);
    MEM32(0x5B86C4) = 2;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003598E0
 * Original: 0x003598E0 - 0x003598EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003598E0(void)
{

loc_003598E0: ;
    PUSH32(esp, 0x35A6B0);
    PUSH32(esp, 0x003598EAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003598EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003598F0
 * Original: 0x003598F0 - 0x003598FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003598F0(void)
{

loc_003598F0: ;
    PUSH32(esp, 0x35A6E0);
    PUSH32(esp, 0x003598FAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003598FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359900
 * Original: 0x00359900 - 0x0035990C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359900(void)
{

loc_00359900: ;
    PUSH32(esp, 0x35A710);
    PUSH32(esp, 0x0035990Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0035990A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359910
 * Original: 0x00359910 - 0x0035991C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359910(void)
{

loc_00359910: ;
    PUSH32(esp, 0x35A740);
    PUSH32(esp, 0x0035991Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0035991A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359920
 * Original: 0x00359920 - 0x0035992C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359920(void)
{

loc_00359920: ;
    PUSH32(esp, 0x35A770);
    PUSH32(esp, 0x0035992Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0035992A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359930
 * Original: 0x00359930 - 0x0035993C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359930(void)
{

loc_00359930: ;
    PUSH32(esp, 0x35A7A0);
    PUSH32(esp, 0x0035993Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0035993A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359940
 * Original: 0x00359940 - 0x0035994C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359940(void)
{

loc_00359940: ;
    PUSH32(esp, 0x35A7D0);
    PUSH32(esp, 0x0035994Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0035994A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359950
 * Original: 0x00359950 - 0x0035995C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359950(void)
{

loc_00359950: ;
    PUSH32(esp, 0x35A800);
    PUSH32(esp, 0x0035995Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0035995A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359960
 * Original: 0x00359960 - 0x0035996C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359960(void)
{

loc_00359960: ;
    PUSH32(esp, 0x35A830);
    PUSH32(esp, 0x0035996Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0035996A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359970
 * Original: 0x00359970 - 0x0035997C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359970(void)
{

loc_00359970: ;
    PUSH32(esp, 0x35A870);
    PUSH32(esp, 0x0035997Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0035997A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359980
 * Original: 0x00359980 - 0x0035998C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359980(void)
{

loc_00359980: ;
    PUSH32(esp, 0x35A860);
    PUSH32(esp, 0x0035998Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0035998A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359990
 * Original: 0x00359990 - 0x0035999C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359990(void)
{

loc_00359990: ;
    PUSH32(esp, 0x35A8A0);
    PUSH32(esp, 0x0035999Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0035999A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003599A0
 * Original: 0x003599A0 - 0x00359A97 (247 bytes, 59 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003599A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003599A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x80;
    fp_push(MEMD(0x3DCF30)); /* fld double */
    PUSH32(esp, esi);
    MEMD(esp + 0x64) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    fp_push(MEMD(0x3DCF30)); /* fld double */
    ecx = 8;
    MEMD(esp + 0x70) = fp_top(); fp_pop(); /* fstp */
    esi = esp + 8;
    fp_push(MEMD(0x3DCF30)); /* fld double */
    edi = 0x5BCA10;
    MEMD(esp + 0x78) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x80) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x48) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x50) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x58) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x60) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x28) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x38) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x40) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x20) = fp_top(); fp_pop(); /* fstp */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = 8;
    esi = esp + 0x28;
    edi = 0x5BCA30;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = 8;
    esi = esp + 0x48;
    edi = 0x5BCA50;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = 8;
    esi = esp + 0x68;
    edi = 0x5BCA70;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00359AA0
 * Original: 0x00359AA0 - 0x00359B44 (164 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359AA0(void)
{

loc_00359AA0: ;
    esp = esp - 0x40;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = 0x5BCA90;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    PUSH32(esp, 0x00359B40u); RECOMP_ABI_CALL(0x001B7D30u, sub_001B7D30); /* call 0x001B7D30 */

loc_00359B40: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00359B50
 * Original: 0x00359B50 - 0x00359B5C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359B50(void)
{

loc_00359B50: ;
    PUSH32(esp, 0x35A8C0);
    PUSH32(esp, 0x00359B5Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359B5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359B60
 * Original: 0x00359B60 - 0x00359B6C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359B60(void)
{

loc_00359B60: ;
    PUSH32(esp, 0x35A8F0);
    PUSH32(esp, 0x00359B6Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359B6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359B70
 * Original: 0x00359B70 - 0x00359B7C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359B70(void)
{

loc_00359B70: ;
    PUSH32(esp, 0x35A920);
    PUSH32(esp, 0x00359B7Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359B7A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359B80
 * Original: 0x00359B80 - 0x00359B8C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359B80(void)
{

loc_00359B80: ;
    PUSH32(esp, 0x35A950);
    PUSH32(esp, 0x00359B8Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359B8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359B90
 * Original: 0x00359B90 - 0x00359B9C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359B90(void)
{

loc_00359B90: ;
    PUSH32(esp, 0x35A980);
    PUSH32(esp, 0x00359B9Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359B9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359BA0
 * Original: 0x00359BA0 - 0x00359BAC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359BA0(void)
{

loc_00359BA0: ;
    PUSH32(esp, 0x35A9B0);
    PUSH32(esp, 0x00359BAAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359BAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359BB0
 * Original: 0x00359BB0 - 0x00359BBA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359BB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359BB0: ;
    ecx = 0x5BDEE0;
    g_seh_ebp = ebp; sub_0023DC50(); return; /* tail jmp 0x0023DC50 */

}

/**
 * sub_00359BC0
 * Original: 0x00359BC0 - 0x00359BCC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359BC0(void)
{

loc_00359BC0: ;
    PUSH32(esp, 0x35A9E0);
    PUSH32(esp, 0x00359BCAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359BCA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359BD0
 * Original: 0x00359BD0 - 0x00359BDC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359BD0(void)
{

loc_00359BD0: ;
    PUSH32(esp, 0x35AA10);
    PUSH32(esp, 0x00359BDAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359BDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359BE0
 * Original: 0x00359BE0 - 0x00359BEC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359BE0(void)
{

loc_00359BE0: ;
    PUSH32(esp, 0x35AA40);
    PUSH32(esp, 0x00359BEAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359BEA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359BF0
 * Original: 0x00359BF0 - 0x00359BFC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359BF0(void)
{

loc_00359BF0: ;
    PUSH32(esp, 0x35AA70);
    PUSH32(esp, 0x00359BFAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359BFA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359C00
 * Original: 0x00359C00 - 0x00359C0C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359C00(void)
{

loc_00359C00: ;
    PUSH32(esp, 0x35AAA0);
    PUSH32(esp, 0x00359C0Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359C0A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359C10
 * Original: 0x00359C10 - 0x00359C1C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359C10(void)
{

loc_00359C10: ;
    PUSH32(esp, 0x35AAD0);
    PUSH32(esp, 0x00359C1Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359C1A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359C20
 * Original: 0x00359C20 - 0x00359C2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359C20(void)
{

loc_00359C20: ;
    PUSH32(esp, 0x35AB00);
    PUSH32(esp, 0x00359C2Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359C2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359C30
 * Original: 0x00359C30 - 0x00359C3C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359C30(void)
{

loc_00359C30: ;
    PUSH32(esp, 0x35AB30);
    PUSH32(esp, 0x00359C3Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359C3A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359C40
 * Original: 0x00359C40 - 0x00359C4C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359C40(void)
{

loc_00359C40: ;
    PUSH32(esp, 0x35AB60);
    PUSH32(esp, 0x00359C4Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359C4A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359C50
 * Original: 0x00359C50 - 0x00359C5C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359C50(void)
{

loc_00359C50: ;
    PUSH32(esp, 0x35AB90);
    PUSH32(esp, 0x00359C5Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359C5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359C60
 * Original: 0x00359C60 - 0x00359C6C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359C60(void)
{

loc_00359C60: ;
    PUSH32(esp, 0x35ABC0);
    PUSH32(esp, 0x00359C6Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359C6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359C70
 * Original: 0x00359C70 - 0x00359C7C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359C70(void)
{

loc_00359C70: ;
    PUSH32(esp, 0x35ABF0);
    PUSH32(esp, 0x00359C7Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359C7A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359C80
 * Original: 0x00359C80 - 0x00359C8C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359C80(void)
{

loc_00359C80: ;
    PUSH32(esp, 0x35AC20);
    PUSH32(esp, 0x00359C8Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359C8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359C90
 * Original: 0x00359C90 - 0x00359C9C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359C90(void)
{

loc_00359C90: ;
    PUSH32(esp, 0x35AC50);
    PUSH32(esp, 0x00359C9Au); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359C9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359CA0
 * Original: 0x00359CA0 - 0x00359CAC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359CA0(void)
{

loc_00359CA0: ;
    PUSH32(esp, 0x35AC80);
    PUSH32(esp, 0x00359CAAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359CAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359CB0
 * Original: 0x00359CB0 - 0x00359CBC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359CB0(void)
{

loc_00359CB0: ;
    PUSH32(esp, 0x35ACB0);
    PUSH32(esp, 0x00359CBAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359CBA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359CC0
 * Original: 0x00359CC0 - 0x00359CCC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359CC0(void)
{

loc_00359CC0: ;
    PUSH32(esp, 0x35ACE0);
    PUSH32(esp, 0x00359CCAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359CCA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359CD0
 * Original: 0x00359CD0 - 0x00359CDC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359CD0(void)
{

loc_00359CD0: ;
    PUSH32(esp, 0x35AD10);
    PUSH32(esp, 0x00359CDAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359CDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359CE0
 * Original: 0x00359CE0 - 0x00359CEC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359CE0(void)
{

loc_00359CE0: ;
    PUSH32(esp, 0x35AD40);
    PUSH32(esp, 0x00359CEAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359CEA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359CF0
 * Original: 0x00359CF0 - 0x00359CFC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359CF0(void)
{

loc_00359CF0: ;
    PUSH32(esp, 0x35AD70);
    PUSH32(esp, 0x00359CFAu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00359CFA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00359D00
 * Original: 0x00359D00 - 0x00359D0B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359D00(void)
{

loc_00359D00: ;
    MEM32(0x47C4E0) = 0x3C6DBC;
    esp += 4; return; /* ret */

}

/**
 * sub_00359D10
 * Original: 0x00359D10 - 0x00359D11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359D10(void)
{

loc_00359D10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359D20
 * Original: 0x00359D20 - 0x00359D2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359D20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359D20: ;
    ecx = 0x47C560;
    g_seh_ebp = ebp; sub_00016780(); return; /* tail jmp 0x00016780 */

}

/**
 * sub_00359D30
 * Original: 0x00359D30 - 0x00359D3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359D30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359D30: ;
    ecx = 0x483020;
    g_seh_ebp = ebp; sub_00023520(); return; /* tail jmp 0x00023520 */

}

/**
 * sub_00359D40
 * Original: 0x00359D40 - 0x00359D4A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359D40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359D40: ;
    ecx = 0x4833C0;
    g_seh_ebp = ebp; sub_00029AC0(); return; /* tail jmp 0x00029AC0 */

}

/**
 * sub_00359D50
 * Original: 0x00359D50 - 0x00359D51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359D50(void)
{

loc_00359D50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359D60
 * Original: 0x00359D60 - 0x00359D61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359D60(void)
{

loc_00359D60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359D70
 * Original: 0x00359D70 - 0x00359D71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359D70(void)
{

loc_00359D70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359D80
 * Original: 0x00359D80 - 0x00359D8A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359D80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359D80: ;
    ecx = 0x485948;
    g_seh_ebp = ebp; sub_00034AE0(); return; /* tail jmp 0x00034AE0 */

}

/**
 * sub_00359D90
 * Original: 0x00359D90 - 0x00359D9A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359D90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359D90: ;
    ecx = 0x485AD0;
    g_seh_ebp = ebp; sub_00034AE0(); return; /* tail jmp 0x00034AE0 */

}

/**
 * sub_00359DA0
 * Original: 0x00359DA0 - 0x00359DAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359DA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359DA0: ;
    ecx = 0x485A78;
    g_seh_ebp = ebp; sub_00034AE0(); return; /* tail jmp 0x00034AE0 */

}

/**
 * sub_00359DB0
 * Original: 0x00359DB0 - 0x00359DB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359DB0(void)
{

loc_00359DB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359DC0
 * Original: 0x00359DC0 - 0x00359DCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359DC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359DC0: ;
    ecx = 0x4859B0;
    g_seh_ebp = ebp; sub_00034AE0(); return; /* tail jmp 0x00034AE0 */

}

/**
 * sub_00359DD0
 * Original: 0x00359DD0 - 0x00359DDA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359DD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359DD0: ;
    ecx = 0x485A20;
    g_seh_ebp = ebp; sub_00034AE0(); return; /* tail jmp 0x00034AE0 */

}

/**
 * sub_00359DE0
 * Original: 0x00359DE0 - 0x00359DE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359DE0(void)
{

loc_00359DE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359DF0
 * Original: 0x00359DF0 - 0x00359DFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359DF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359DF0: ;
    ecx = 0x486F80;
    g_seh_ebp = ebp; sub_00036540(); return; /* tail jmp 0x00036540 */

}

/**
 * sub_00359E00
 * Original: 0x00359E00 - 0x00359E01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359E00(void)
{

loc_00359E00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359E10
 * Original: 0x00359E10 - 0x00359E11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359E10(void)
{

loc_00359E10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359E20
 * Original: 0x00359E20 - 0x00359E2A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359E20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359E20: ;
    ecx = 0x48B020;
    g_seh_ebp = ebp; sub_00046A90(); return; /* tail jmp 0x00046A90 */

}

/**
 * sub_00359E30
 * Original: 0x00359E30 - 0x00359E3A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359E30: ;
    ecx = 0x48B9D0;
    g_seh_ebp = ebp; sub_0004A2B0(); return; /* tail jmp 0x0004A2B0 */

}

/**
 * sub_00359E40
 * Original: 0x00359E40 - 0x00359E41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359E40(void)
{

loc_00359E40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359E50
 * Original: 0x00359E50 - 0x00359E51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359E50(void)
{

loc_00359E50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359E60
 * Original: 0x00359E60 - 0x00359E6B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359E60(void)
{

loc_00359E60: ;
    MEM32(0x48D734) = 0x3CB964;
    esp += 4; return; /* ret */

}

/**
 * sub_00359E70
 * Original: 0x00359E70 - 0x00359E7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359E70(void)
{

loc_00359E70: ;
    MEM32(0x48D750) = 0x3CBCF4;
    esp += 4; return; /* ret */

}

/**
 * sub_00359E80
 * Original: 0x00359E80 - 0x00359E81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359E80(void)
{

loc_00359E80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359E90
 * Original: 0x00359E90 - 0x00359E91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359E90(void)
{

loc_00359E90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359EA0
 * Original: 0x00359EA0 - 0x00359EAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359EA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359EA0: ;
    ecx = 0x48E480;
    g_seh_ebp = ebp; sub_0006AC10(); return; /* tail jmp 0x0006AC10 */

}

/**
 * sub_00359EB0
 * Original: 0x00359EB0 - 0x00359EBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359EB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359EB0: ;
    ecx = 0x498DA4;
    g_seh_ebp = ebp; sub_0006D080(); return; /* tail jmp 0x0006D080 */

}

/**
 * sub_00359EC0
 * Original: 0x00359EC0 - 0x00359ED4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359EC0(void)
{

loc_00359EC0: ;
    PUSH32(esp, 0x13D370);
    PUSH32(esp, 6);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x498DF0);
    PUSH32(esp, 0x00359ED3u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00359ED3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359EE0
 * Original: 0x00359EE0 - 0x00359EEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359EE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359EE0: ;
    ecx = 0x498E88;
    g_seh_ebp = ebp; sub_000728C0(); return; /* tail jmp 0x000728C0 */

}

/**
 * sub_00359EF0
 * Original: 0x00359EF0 - 0x00359EFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359EF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359EF0: ;
    ecx = 0x499820;
    g_seh_ebp = ebp; sub_0007DF80(); return; /* tail jmp 0x0007DF80 */

}

/**
 * sub_00359F00
 * Original: 0x00359F00 - 0x00359F0A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359F00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359F00: ;
    ecx = 0x49B2F0;
    g_seh_ebp = ebp; sub_00080100(); return; /* tail jmp 0x00080100 */

}

/**
 * sub_00359F10
 * Original: 0x00359F10 - 0x00359F11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359F10(void)
{

loc_00359F10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359F20
 * Original: 0x00359F20 - 0x00359F21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359F20(void)
{

loc_00359F20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359F30
 * Original: 0x00359F30 - 0x00359F31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359F30(void)
{

loc_00359F30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359F40
 * Original: 0x00359F40 - 0x00359F41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359F40(void)
{

loc_00359F40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359F50
 * Original: 0x00359F50 - 0x00359F51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359F50(void)
{

loc_00359F50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359F60
 * Original: 0x00359F60 - 0x00359F61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359F60(void)
{

loc_00359F60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359F70
 * Original: 0x00359F70 - 0x00359F71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359F70(void)
{

loc_00359F70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359F80
 * Original: 0x00359F80 - 0x00359F81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359F80(void)
{

loc_00359F80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359F90
 * Original: 0x00359F90 - 0x00359F91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359F90(void)
{

loc_00359F90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359FA0
 * Original: 0x00359FA0 - 0x00359FAA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359FA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359FA0: ;
    ecx = 0x49C508;
    g_seh_ebp = ebp; sub_00086070(); return; /* tail jmp 0x00086070 */

}

/**
 * sub_00359FB0
 * Original: 0x00359FB0 - 0x00359FBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359FB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359FB0: ;
    ecx = 0x49ED18;
    g_seh_ebp = ebp; sub_00089FB0(); return; /* tail jmp 0x00089FB0 */

}

/**
 * sub_00359FC0
 * Original: 0x00359FC0 - 0x00359FCA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359FC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359FC0: ;
    ecx = 0x4A0210;
    g_seh_ebp = ebp; sub_0008BDC0(); return; /* tail jmp 0x0008BDC0 */

}

/**
 * sub_00359FD0
 * Original: 0x00359FD0 - 0x00359FD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359FD0(void)
{

loc_00359FD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00359FE0
 * Original: 0x00359FE0 - 0x00359FEA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359FE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359FE0: ;
    ecx = 0x4B3000;
    g_seh_ebp = ebp; sub_00090690(); return; /* tail jmp 0x00090690 */

}

/**
 * sub_00359FF0
 * Original: 0x00359FF0 - 0x00359FFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00359FF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00359FF0: ;
    ecx = 0x4BFD30;
    g_seh_ebp = ebp; sub_00093870(); return; /* tail jmp 0x00093870 */

}

/**
 * sub_0035A000
 * Original: 0x0035A000 - 0x0035A001 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A000(void)
{

loc_0035A000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A010
 * Original: 0x0035A010 - 0x0035A011 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A010(void)
{

loc_0035A010: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A020
 * Original: 0x0035A020 - 0x0035A02A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A020(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A020: ;
    ecx = 0x4C2AA8;
    g_seh_ebp = ebp; sub_000A2800(); return; /* tail jmp 0x000A2800 */

}

/**
 * sub_0035A030
 * Original: 0x0035A030 - 0x0035A03A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A030(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A030: ;
    ecx = 0x4C71B0;
    g_seh_ebp = ebp; sub_000A40A0(); return; /* tail jmp 0x000A40A0 */

}

/**
 * sub_0035A040
 * Original: 0x0035A040 - 0x0035A04A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A040: ;
    ecx = 0x4C8E20;
    g_seh_ebp = ebp; sub_000A5120(); return; /* tail jmp 0x000A5120 */

}

/**
 * sub_0035A050
 * Original: 0x0035A050 - 0x0035A05B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A050(void)
{

loc_0035A050: ;
    MEM32(0x4C9288) = 0x3D2D9C;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A060
 * Original: 0x0035A060 - 0x0035A06A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A060: ;
    ecx = 0x4C9A88;
    g_seh_ebp = ebp; sub_000AA430(); return; /* tail jmp 0x000AA430 */

}

/**
 * sub_0035A070
 * Original: 0x0035A070 - 0x0035A07A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A070(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A070: ;
    ecx = 0x4D0C40;
    g_seh_ebp = ebp; sub_000ADAC0(); return; /* tail jmp 0x000ADAC0 */

}

/**
 * sub_0035A080
 * Original: 0x0035A080 - 0x0035A081 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A080(void)
{

loc_0035A080: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A090
 * Original: 0x0035A090 - 0x0035A09A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A090(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A090: ;
    ecx = 0x4D2A98;
    g_seh_ebp = ebp; sub_000B2C80(); return; /* tail jmp 0x000B2C80 */

}

/**
 * sub_0035A0A0
 * Original: 0x0035A0A0 - 0x0035A0A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A0A0(void)
{

loc_0035A0A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A0B0
 * Original: 0x0035A0B0 - 0x0035A0B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A0B0(void)
{

loc_0035A0B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A0C0
 * Original: 0x0035A0C0 - 0x0035A0C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A0C0(void)
{

loc_0035A0C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A0D0
 * Original: 0x0035A0D0 - 0x0035A0DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A0D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A0D0: ;
    ecx = 0x4D8190;
    g_seh_ebp = ebp; sub_000BD4C0(); return; /* tail jmp 0x000BD4C0 */

}

/**
 * sub_0035A0E0
 * Original: 0x0035A0E0 - 0x0035A0EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A0E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A0E0: ;
    ecx = 0x4DB2B8;
    g_seh_ebp = ebp; sub_000BEEA0(); return; /* tail jmp 0x000BEEA0 */

}

/**
 * sub_0035A0F0
 * Original: 0x0035A0F0 - 0x0035A0F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A0F0(void)
{

loc_0035A0F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A100
 * Original: 0x0035A100 - 0x0035A101 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A100(void)
{

loc_0035A100: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A110
 * Original: 0x0035A110 - 0x0035A11A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A110(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A110: ;
    ecx = 0x4EB8D0;
    g_seh_ebp = ebp; sub_000C7E30(); return; /* tail jmp 0x000C7E30 */

}

/**
 * sub_0035A120
 * Original: 0x0035A120 - 0x0035A12A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A120: ;
    ecx = 0x4E7948;
    g_seh_ebp = ebp; sub_000C8120(); return; /* tail jmp 0x000C8120 */

}

/**
 * sub_0035A130
 * Original: 0x0035A130 - 0x0035A131 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A130(void)
{

loc_0035A130: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A140
 * Original: 0x0035A140 - 0x0035A14A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A140: ;
    ecx = 0x4E7AB0;
    g_seh_ebp = ebp; sub_000C9220(); return; /* tail jmp 0x000C9220 */

}

/**
 * sub_0035A150
 * Original: 0x0035A150 - 0x0035A164 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A150(void)
{

loc_0035A150: ;
    PUSH32(esp, 0xCC2C0);
    PUSH32(esp, 2);
    PUSH32(esp, 8);
    PUSH32(esp, 0x4EC200);
    PUSH32(esp, 0x0035A163u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0035A163: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A170
 * Original: 0x0035A170 - 0x0035A184 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A170(void)
{

loc_0035A170: ;
    PUSH32(esp, 0xCC2C0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 8);
    PUSH32(esp, 0x4EC078);
    PUSH32(esp, 0x0035A183u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0035A183: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A190
 * Original: 0x0035A190 - 0x0035A191 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A190(void)
{

loc_0035A190: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A1A0
 * Original: 0x0035A1A0 - 0x0035A1A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A1A0(void)
{

loc_0035A1A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A1B0
 * Original: 0x0035A1B0 - 0x0035A1B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A1B0(void)
{

loc_0035A1B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A1C0
 * Original: 0x0035A1C0 - 0x0035A1C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A1C0(void)
{

loc_0035A1C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A1D0
 * Original: 0x0035A1D0 - 0x0035A1DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A1D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A1D0: ;
    ecx = 0x4EC338;
    g_seh_ebp = ebp; sub_000CFE90(); return; /* tail jmp 0x000CFE90 */

}

/**
 * sub_0035A1E0
 * Original: 0x0035A1E0 - 0x0035A1EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A1E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A1E0: ;
    ecx = 0x4F25C8;
    g_seh_ebp = ebp; sub_000D3F60(); return; /* tail jmp 0x000D3F60 */

}

/**
 * sub_0035A1F0
 * Original: 0x0035A1F0 - 0x0035A1FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A1F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A1F0: ;
    ecx = 0x4F3410;
    g_seh_ebp = ebp; sub_000E8B60(); return; /* tail jmp 0x000E8B60 */

}

/**
 * sub_0035A200
 * Original: 0x0035A200 - 0x0035A20A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035A200: ;
    ecx = 0x4F3DE8;
    g_seh_ebp = ebp; sub_000F8130(); return; /* tail jmp 0x000F8130 */

}

/**
 * sub_0035A210
 * Original: 0x0035A210 - 0x0035A211 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A210(void)
{

loc_0035A210: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A220
 * Original: 0x0035A220 - 0x0035A221 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A220(void)
{

loc_0035A220: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0035A230
 * Original: 0x0035A230 - 0x0035A231 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035A230(void)
{

loc_0035A230: ;
    esp += 4; return; /* ret */

}
