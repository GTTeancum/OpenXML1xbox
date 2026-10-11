/**
 * X-Men Legends - Recompiled code chunk 93
 * Functions: 250 (0x00357430 - 0x00358A00)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00357430
 * Original: 0x00357430 - 0x0035743F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357430(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357430: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D7308) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357440
 * Original: 0x00357440 - 0x0035744F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357440(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357440: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D730C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357450
 * Original: 0x00357450 - 0x0035745F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357450(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357450: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D7304) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357460
 * Original: 0x00357460 - 0x00357476 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357460(void)
{

loc_00357460: ;
    ecx = 0x4D7310;
    PUSH32(esp, 0x0035746Au); RECOMP_ABI_CALL(0x000B3B20u, sub_000B3B20); /* call 0x000B3B20 */

loc_0035746A: ;
    PUSH32(esp, 0x35A0B0);
    PUSH32(esp, 0x00357474u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357474: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357480
 * Original: 0x00357480 - 0x003574A4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357480(void)
{

loc_00357480: ;
    PUSH32(esp, 0x3C93C4);
    PUSH32(esp, 0x3CF5E8);
    PUSH32(esp, 0x2D0);
    ecx = 0x4D7378;
    PUSH32(esp, 0x00357499u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00357499: ;
    MEM32(0x4D7378) = 0x3D4158;
    esp += 4; return; /* ret */

}

/**
 * sub_003574B0
 * Original: 0x003574B0 - 0x003574BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003574B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003574B0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D8118) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003574C0
 * Original: 0x003574C0 - 0x003574CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003574C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003574C0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D8120) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003574D0
 * Original: 0x003574D0 - 0x003574DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003574D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003574D0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4D8114) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003574E0
 * Original: 0x003574E0 - 0x00357504 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003574E0(void)
{

loc_003574E0: ;
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x3D4590);
    PUSH32(esp, 0x278);
    ecx = 0x4D8124;
    PUSH32(esp, 0x003574F9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_003574F9: ;
    MEM32(0x4D8124) = 0x3D45A0;
    esp += 4; return; /* ret */

}

/**
 * sub_00357510
 * Original: 0x00357510 - 0x0035751B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357510(void)
{

loc_00357510: ;
    MEM32(0x4D8110) = 0xC17FE000u;
    esp += 4; return; /* ret */

}

/**
 * sub_00357520
 * Original: 0x00357520 - 0x0035752B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357520(void)
{

loc_00357520: ;
    MEM32(0x4D811C) = 0x41800000;
    esp += 4; return; /* ret */

}

/**
 * sub_00357530
 * Original: 0x00357530 - 0x00357554 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357530(void)
{

loc_00357530: ;
    PUSH32(esp, 0x3C8990);
    PUSH32(esp, 0x3D4744);
    PUSH32(esp, 0xF4);
    ecx = 0x4D8158;
    PUSH32(esp, 0x00357549u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00357549: ;
    MEM32(0x4D8158) = 0x3D4754;
    esp += 4; return; /* ret */

}

/**
 * sub_00357560
 * Original: 0x00357560 - 0x0035756F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357560(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357560: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4DB2B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357570
 * Original: 0x00357570 - 0x0035757F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357570(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357570: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4DB2B4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357580
 * Original: 0x00357580 - 0x0035758F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357580(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357580: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4DB2AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357590
 * Original: 0x00357590 - 0x003575B4 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357590(void)
{

loc_00357590: ;
    PUSH32(esp, 0x3C8984);
    PUSH32(esp, 0x3CE740);
    PUSH32(esp, 0xD4);
    ecx = 0x4E7048;
    PUSH32(esp, 0x003575A9u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_003575A9: ;
    MEM32(0x4E7048) = 0x3D4BE8;
    esp += 4; return; /* ret */

}

/**
 * sub_003575C0
 * Original: 0x003575C0 - 0x003575CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003575C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003575C0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4E7080) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003575D0
 * Original: 0x003575D0 - 0x003575DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003575D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003575D0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4E7084) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003575E0
 * Original: 0x003575E0 - 0x003575EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003575E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003575E0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4E707C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003575F0
 * Original: 0x003575F0 - 0x00357614 (36 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003575F0(void)
{

loc_003575F0: ;
    PUSH32(esp, 0x3CB490);
    PUSH32(esp, 0x3D4CE8);
    PUSH32(esp, 0x244);
    ecx = 0x4E7088;
    PUSH32(esp, 0x00357609u); RECOMP_ABI_CALL(0x00067DF0u, sub_00067DF0); /* call 0x00067DF0 */

loc_00357609: ;
    MEM32(0x4E7088) = 0x3D4CF8;
    esp += 4; return; /* ret */

}

/**
 * sub_00357620
 * Original: 0x00357620 - 0x0035762F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357620(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357620: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4E70D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357630
 * Original: 0x00357630 - 0x0035763F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357630(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357630: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4E9784) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357640
 * Original: 0x00357640 - 0x0035764F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357640(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357640: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4EBF38) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357650
 * Original: 0x00357650 - 0x00357676 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357650: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035765Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035765A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357669u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357669: ;
    ecx = eax;
    PUSH32(esp, 0x00357670u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357670: ;
    MEM32(0x4E70CC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357680
 * Original: 0x00357680 - 0x003576A6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357680: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035768Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035768A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357699u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357699: ;
    ecx = eax;
    PUSH32(esp, 0x003576A0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003576A0: ;
    MEM32(0x4E70D0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003576B0
 * Original: 0x003576B0 - 0x003576C6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003576B0(void)
{

loc_003576B0: ;
    ecx = 0x4EA478;
    PUSH32(esp, 0x003576BAu); RECOMP_ABI_CALL(0x000C1690u, sub_000C1690); /* call 0x000C1690 */

loc_003576BA: ;
    PUSH32(esp, 0x35A0F0);
    PUSH32(esp, 0x003576C4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003576C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003576D0
 * Original: 0x003576D0 - 0x003576E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003576D0(void)
{

loc_003576D0: ;
    ecx = 0x4E70D8;
    PUSH32(esp, 0x003576DAu); RECOMP_ABI_CALL(0x000C9090u, sub_000C9090); /* call 0x000C9090 */

loc_003576DA: ;
    PUSH32(esp, 0x35A130);
    PUSH32(esp, 0x003576E4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003576E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003576F0
 * Original: 0x003576F0 - 0x00357706 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003576F0(void)
{

loc_003576F0: ;
    ecx = 0x4E9788;
    PUSH32(esp, 0x003576FAu); RECOMP_ABI_CALL(0x000C4FD0u, sub_000C4FD0); /* call 0x000C4FD0 */

loc_003576FA: ;
    PUSH32(esp, 0x35A100);
    PUSH32(esp, 0x00357704u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357704: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357710
 * Original: 0x00357710 - 0x00357726 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357710(void)
{

loc_00357710: ;
    ecx = 0x4E7948;
    PUSH32(esp, 0x0035771Au); RECOMP_ABI_CALL(0x000C80D0u, sub_000C80D0); /* call 0x000C80D0 */

loc_0035771A: ;
    PUSH32(esp, 0x35A120);
    PUSH32(esp, 0x00357724u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357724: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357730
 * Original: 0x00357730 - 0x00357746 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357730(void)
{

loc_00357730: ;
    ecx = 0x4E7AB0;
    PUSH32(esp, 0x0035773Au); RECOMP_ABI_CALL(0x000C90B0u, sub_000C90B0); /* call 0x000C90B0 */

loc_0035773A: ;
    PUSH32(esp, 0x35A140);
    PUSH32(esp, 0x00357744u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357744: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357750
 * Original: 0x00357750 - 0x00357766 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357750(void)
{

loc_00357750: ;
    ecx = 0x4EB8D0;
    PUSH32(esp, 0x0035775Au); RECOMP_ABI_CALL(0x000C7E10u, sub_000C7E10); /* call 0x000C7E10 */

loc_0035775A: ;
    PUSH32(esp, 0x35A110);
    PUSH32(esp, 0x00357764u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357764: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357770
 * Original: 0x00357770 - 0x00357794 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357770(void)
{

loc_00357770: ;
    PUSH32(esp, 0xCC2C0);
    PUSH32(esp, 0xC9410);
    PUSH32(esp, 2);
    PUSH32(esp, 8);
    PUSH32(esp, 0x4EC200);
    PUSH32(esp, 0x00357788u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_00357788: ;
    PUSH32(esp, 0x35A150);
    PUSH32(esp, 0x00357792u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357792: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003577A0
 * Original: 0x003577A0 - 0x003577C4 (36 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003577A0(void)
{

loc_003577A0: ;
    PUSH32(esp, 0xCC2C0);
    PUSH32(esp, 0xC9410);
    PUSH32(esp, 0x10);
    PUSH32(esp, 8);
    PUSH32(esp, 0x4EC078);
    PUSH32(esp, 0x003577B8u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_003577B8: ;
    PUSH32(esp, 0x35A170);
    PUSH32(esp, 0x003577C2u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003577C2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003577D0
 * Original: 0x003577D0 - 0x003577E6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003577D0(void)
{

loc_003577D0: ;
    ecx = 0x4EC0F8;
    PUSH32(esp, 0x003577DAu); RECOMP_ABI_CALL(0x000C9CC0u, sub_000C9CC0); /* call 0x000C9CC0 */

loc_003577DA: ;
    PUSH32(esp, 0x35A1B0);
    PUSH32(esp, 0x003577E4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003577E4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003577F0
 * Original: 0x003577F0 - 0x00357806 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003577F0(void)
{

loc_003577F0: ;
    ecx = 0x4EC210;
    PUSH32(esp, 0x003577FAu); RECOMP_ABI_CALL(0x000C9CC0u, sub_000C9CC0); /* call 0x000C9CC0 */

loc_003577FA: ;
    PUSH32(esp, 0x35A190);
    PUSH32(esp, 0x00357804u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357804: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357810
 * Original: 0x00357810 - 0x00357826 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357810(void)
{

loc_00357810: ;
    ecx = 0x4EBF58;
    PUSH32(esp, 0x0035781Au); RECOMP_ABI_CALL(0x00173600u, sub_00173600); /* call 0x00173600 */

loc_0035781A: ;
    PUSH32(esp, 0x35A1C0);
    PUSH32(esp, 0x00357824u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357824: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357830
 * Original: 0x00357830 - 0x00357846 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357830(void)
{

loc_00357830: ;
    ecx = 0x4EBFE8;
    PUSH32(esp, 0x0035783Au); RECOMP_ABI_CALL(0x00173600u, sub_00173600); /* call 0x00173600 */

loc_0035783A: ;
    PUSH32(esp, 0x35A1A0);
    PUSH32(esp, 0x00357844u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357844: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357850
 * Original: 0x00357850 - 0x0035785F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357850(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357850: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4EC324) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357860
 * Original: 0x00357860 - 0x0035786F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357860(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357860: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4EC328) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357870
 * Original: 0x00357870 - 0x0035787F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357870(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357870: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4EC31C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357880
 * Original: 0x00357880 - 0x003578A6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357880: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035788Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035788A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357899u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357899: ;
    ecx = eax;
    PUSH32(esp, 0x003578A0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003578A0: ;
    MEM32(0x4EC318) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003578B0
 * Original: 0x003578B0 - 0x003578D6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003578B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003578B0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003578BAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003578BA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003578C9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003578C9: ;
    ecx = eax;
    PUSH32(esp, 0x003578D0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003578D0: ;
    MEM32(0x4EC320) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003578E0
 * Original: 0x003578E0 - 0x003578EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003578E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003578E0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2534) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003578F0
 * Original: 0x003578F0 - 0x003578FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003578F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003578F0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2538) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357900
 * Original: 0x00357900 - 0x0035790F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357900(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357900: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4EC330) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357910
 * Original: 0x00357910 - 0x00357926 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357910(void)
{

loc_00357910: ;
    ecx = 0x4EC338;
    PUSH32(esp, 0x0035791Au); RECOMP_ABI_CALL(0x000CFEC0u, sub_000CFEC0); /* call 0x000CFEC0 */

loc_0035791A: ;
    PUSH32(esp, 0x35A1D0);
    PUSH32(esp, 0x00357924u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357924: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357930
 * Original: 0x00357930 - 0x0035793F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357930(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357930: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2540) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357940
 * Original: 0x00357940 - 0x0035794F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357940(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357940: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2544) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357950
 * Original: 0x00357950 - 0x0035795F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357950(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357950: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F253C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357960
 * Original: 0x00357960 - 0x0035796F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357960(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357960: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F254C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357970
 * Original: 0x00357970 - 0x0035797F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357970(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357970: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2550) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357980
 * Original: 0x00357980 - 0x0035798F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357980(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357980: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2548) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357990
 * Original: 0x00357990 - 0x0035799F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357990(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357990: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2560) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003579A0
 * Original: 0x003579A0 - 0x003579AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003579A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003579A0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2564) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003579B0
 * Original: 0x003579B0 - 0x003579BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003579B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003579B0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2558) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003579C0
 * Original: 0x003579C0 - 0x003579E6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003579C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003579C0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003579CAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003579CA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003579D9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003579D9: ;
    ecx = eax;
    PUSH32(esp, 0x003579E0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003579E0: ;
    MEM32(0x4F2554) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003579F0
 * Original: 0x003579F0 - 0x00357A16 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003579F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003579F0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003579FAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003579FA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357A09u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357A09: ;
    ecx = eax;
    PUSH32(esp, 0x00357A10u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357A10: ;
    MEM32(0x4F255C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357A20
 * Original: 0x00357A20 - 0x00357A2F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357A20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357A20: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F256C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357A30
 * Original: 0x00357A30 - 0x00357A3F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357A30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357A30: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2570) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357A40
 * Original: 0x00357A40 - 0x00357A4F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357A40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357A40: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2568) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357A50
 * Original: 0x00357A50 - 0x00357A5F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357A50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357A50: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2578) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357A60
 * Original: 0x00357A60 - 0x00357A6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357A60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357A60: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F257C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357A70
 * Original: 0x00357A70 - 0x00357A7F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357A70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357A70: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F2574) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357A80
 * Original: 0x00357A80 - 0x00357A8F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357A80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357A80: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F25BC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357A90
 * Original: 0x00357A90 - 0x00357A9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357A90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357A90: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F25C0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357AA0
 * Original: 0x00357AA0 - 0x00357AAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357AA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357AA0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F25B4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357AB0
 * Original: 0x00357AB0 - 0x00357AD6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357AB0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357ABAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00357ABA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357AC9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357AC9: ;
    ecx = eax;
    PUSH32(esp, 0x00357AD0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357AD0: ;
    MEM32(0x4F25B0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357AE0
 * Original: 0x00357AE0 - 0x00357B06 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357AE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357AE0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357AEAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00357AEA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357AF9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357AF9: ;
    ecx = eax;
    PUSH32(esp, 0x00357B00u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357B00: ;
    MEM32(0x4F25B8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357B10
 * Original: 0x00357B10 - 0x00357B26 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357B10(void)
{

loc_00357B10: ;
    ecx = 0x4F25C8;
    PUSH32(esp, 0x00357B1Au); RECOMP_ABI_CALL(0x000D3F90u, sub_000D3F90); /* call 0x000D3F90 */

loc_00357B1A: ;
    PUSH32(esp, 0x35A1E0);
    PUSH32(esp, 0x00357B24u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00357B24: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00357B30
 * Original: 0x00357B30 - 0x00357B3F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357B30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357B30: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3070) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357B40
 * Original: 0x00357B40 - 0x00357B4F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357B40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357B40: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3074) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357B50
 * Original: 0x00357B50 - 0x00357B5F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357B50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357B50: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F306C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357B60
 * Original: 0x00357B60 - 0x00357B6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357B60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357B60: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3084) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357B70
 * Original: 0x00357B70 - 0x00357B7F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357B70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357B70: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3088) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357B80
 * Original: 0x00357B80 - 0x00357B8F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357B80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357B80: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F307C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357B90
 * Original: 0x00357B90 - 0x00357BB6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357B90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357B90: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357B9Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00357B9A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357BA9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357BA9: ;
    ecx = eax;
    PUSH32(esp, 0x00357BB0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357BB0: ;
    MEM32(0x4F3078) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357BC0
 * Original: 0x00357BC0 - 0x00357BE6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357BC0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357BCAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00357BCA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357BD9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357BD9: ;
    ecx = eax;
    PUSH32(esp, 0x00357BE0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357BE0: ;
    MEM32(0x4F3080) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357BF0
 * Original: 0x00357BF0 - 0x00357BFF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357BF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357BF0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3090) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357C00
 * Original: 0x00357C00 - 0x00357C0F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357C00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357C00: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3094) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357C10
 * Original: 0x00357C10 - 0x00357C1F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357C10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357C10: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F308C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357C20
 * Original: 0x00357C20 - 0x00357C2F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357C20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357C20: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F309C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357C30
 * Original: 0x00357C30 - 0x00357C3F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357C30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357C30: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30A0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357C40
 * Original: 0x00357C40 - 0x00357C4F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357C40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357C40: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3098) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357C50
 * Original: 0x00357C50 - 0x00357C5F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357C50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357C50: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30A8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357C60
 * Original: 0x00357C60 - 0x00357C6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357C60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357C60: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357C70
 * Original: 0x00357C70 - 0x00357C7F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357C70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357C70: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30A4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357C80
 * Original: 0x00357C80 - 0x00357C8F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357C80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357C80: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30B4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357C90
 * Original: 0x00357C90 - 0x00357C9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357C90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357C90: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30B8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357CA0
 * Original: 0x00357CA0 - 0x00357CAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357CA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357CA0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357CB0
 * Original: 0x00357CB0 - 0x00357CBF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357CB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357CB0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30C0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357CC0
 * Original: 0x00357CC0 - 0x00357CCF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357CC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357CC0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30C4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357CD0
 * Original: 0x00357CD0 - 0x00357CDF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357CD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357CD0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30BC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357CE0
 * Original: 0x00357CE0 - 0x00357CEF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357CE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357CE0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30CC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357CF0
 * Original: 0x00357CF0 - 0x00357CFF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357CF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357CF0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30D0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357D00
 * Original: 0x00357D00 - 0x00357D0F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357D00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357D00: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30C8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357D10
 * Original: 0x00357D10 - 0x00357D1F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357D10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357D10: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30D8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357D20
 * Original: 0x00357D20 - 0x00357D2F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357D20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357D20: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30DC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357D30
 * Original: 0x00357D30 - 0x00357D3F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357D30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357D30: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357D40
 * Original: 0x00357D40 - 0x00357D4F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357D40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357D40: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30E4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357D50
 * Original: 0x00357D50 - 0x00357D5F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357D50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357D50: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30E8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357D60
 * Original: 0x00357D60 - 0x00357D6F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357D60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357D60: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30E0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357D70
 * Original: 0x00357D70 - 0x00357D7F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357D70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357D70: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30F8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357D80
 * Original: 0x00357D80 - 0x00357D8F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357D80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357D80: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30FC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357D90
 * Original: 0x00357D90 - 0x00357D9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357D90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357D90: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F30F0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357DA0
 * Original: 0x00357DA0 - 0x00357DC6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357DA0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357DAAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00357DAA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357DB9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357DB9: ;
    ecx = eax;
    PUSH32(esp, 0x00357DC0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357DC0: ;
    MEM32(0x4F30EC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357DD0
 * Original: 0x00357DD0 - 0x00357DF6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357DD0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357DDAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00357DDA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357DE9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357DE9: ;
    ecx = eax;
    PUSH32(esp, 0x00357DF0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357DF0: ;
    MEM32(0x4F30F4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357E00
 * Original: 0x00357E00 - 0x00357E0F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357E00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357E00: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F310C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357E10
 * Original: 0x00357E10 - 0x00357E1F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357E10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357E10: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3110) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357E20
 * Original: 0x00357E20 - 0x00357E2F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357E20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357E20: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3104) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357E30
 * Original: 0x00357E30 - 0x00357E56 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357E30: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357E3Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00357E3A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357E49u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357E49: ;
    ecx = eax;
    PUSH32(esp, 0x00357E50u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357E50: ;
    MEM32(0x4F3100) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357E60
 * Original: 0x00357E60 - 0x00357E86 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357E60: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357E6Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00357E6A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357E79u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357E79: ;
    ecx = eax;
    PUSH32(esp, 0x00357E80u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357E80: ;
    MEM32(0x4F3108) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357E90
 * Original: 0x00357E90 - 0x00357E9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357E90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357E90: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3118) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357EA0
 * Original: 0x00357EA0 - 0x00357EAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357EA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357EA0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F311C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357EB0
 * Original: 0x00357EB0 - 0x00357EBF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357EB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357EB0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3114) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357EC0
 * Original: 0x00357EC0 - 0x00357ECF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357EC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357EC0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3124) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357ED0
 * Original: 0x00357ED0 - 0x00357EDF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357ED0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357ED0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3128) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357EE0
 * Original: 0x00357EE0 - 0x00357EEF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357EE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357EE0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3120) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357EF0
 * Original: 0x00357EF0 - 0x00357EFF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357EF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357EF0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3134) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357F00
 * Original: 0x00357F00 - 0x00357F0F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357F00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357F00: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3138) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357F10
 * Original: 0x00357F10 - 0x00357F1F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357F10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357F10: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F312C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357F20
 * Original: 0x00357F20 - 0x00357F46 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357F20: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357F2Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00357F2A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357F39u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357F39: ;
    ecx = eax;
    PUSH32(esp, 0x00357F40u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357F40: ;
    MEM32(0x4F313C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357F50
 * Original: 0x00357F50 - 0x00357F76 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357F50: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357F5Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00357F5A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00357F69u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357F69: ;
    ecx = eax;
    PUSH32(esp, 0x00357F70u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00357F70: ;
    MEM32(0x4F3130) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00357F80
 * Original: 0x00357F80 - 0x00357F8F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357F80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357F80: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3144) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357F90
 * Original: 0x00357F90 - 0x00357F9F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357F90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357F90: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3148) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357FA0
 * Original: 0x00357FA0 - 0x00357FAF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357FA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357FA0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3140) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357FB0
 * Original: 0x00357FB0 - 0x00357FBF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357FB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357FB0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3158) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357FC0
 * Original: 0x00357FC0 - 0x00357FCF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357FC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357FC0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F315C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357FD0
 * Original: 0x00357FD0 - 0x00357FDF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00357FD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00357FD0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3150) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00357FE0
 * Original: 0x00357FE0 - 0x00358006 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00357FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00357FE0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357FEAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00357FEA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00357FF9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00357FF9: ;
    ecx = eax;
    PUSH32(esp, 0x00358000u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358000: ;
    MEM32(0x4F3160) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358010
 * Original: 0x00358010 - 0x00358036 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358010: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035801Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035801A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358029u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358029: ;
    ecx = eax;
    PUSH32(esp, 0x00358030u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358030: ;
    MEM32(0x4F3154) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358040
 * Original: 0x00358040 - 0x0035804F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358040(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358040: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3168) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358050
 * Original: 0x00358050 - 0x0035805F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358050(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358050: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F316C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358060
 * Original: 0x00358060 - 0x0035806F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358060(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358060: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3164) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358070
 * Original: 0x00358070 - 0x0035807F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358070(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358070: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3178) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358080
 * Original: 0x00358080 - 0x0035808F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358080(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358080: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F317C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358090
 * Original: 0x00358090 - 0x0035809F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358090(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358090: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3174) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003580A0
 * Original: 0x003580A0 - 0x003580C6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003580A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003580A0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003580AAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003580AA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003580B9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003580B9: ;
    ecx = eax;
    PUSH32(esp, 0x003580C0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003580C0: ;
    MEM32(0x4F3170) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003580D0
 * Original: 0x003580D0 - 0x003580F6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003580D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003580D0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003580DAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003580DA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003580E9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003580E9: ;
    ecx = eax;
    PUSH32(esp, 0x003580F0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003580F0: ;
    MEM32(0x4F3180) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358100
 * Original: 0x00358100 - 0x0035810F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358100(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358100: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3188) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358110
 * Original: 0x00358110 - 0x0035811F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358110(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358110: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F318C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358120
 * Original: 0x00358120 - 0x0035812F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358120(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358120: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3184) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358130
 * Original: 0x00358130 - 0x0035813F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358130: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3198) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358140
 * Original: 0x00358140 - 0x0035814F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358140(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358140: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F319C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358150
 * Original: 0x00358150 - 0x0035815F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358150(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358150: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3190) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358160
 * Original: 0x00358160 - 0x00358186 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358160: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035816Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035816A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358179u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358179: ;
    ecx = eax;
    PUSH32(esp, 0x00358180u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358180: ;
    MEM32(0x4F31A0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358190
 * Original: 0x00358190 - 0x003581B6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358190: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035819Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035819A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003581A9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003581A9: ;
    ecx = eax;
    PUSH32(esp, 0x003581B0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003581B0: ;
    MEM32(0x4F3194) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003581C0
 * Original: 0x003581C0 - 0x003581CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003581C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003581C0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31A8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003581D0
 * Original: 0x003581D0 - 0x003581DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003581D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003581D0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31AC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003581E0
 * Original: 0x003581E0 - 0x003581EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003581E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003581E0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31A4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003581F0
 * Original: 0x003581F0 - 0x003581FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003581F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003581F0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31B8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358200
 * Original: 0x00358200 - 0x0035820F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358200(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358200: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31BC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358210
 * Original: 0x00358210 - 0x0035821F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358210(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358210: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31B0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358220
 * Original: 0x00358220 - 0x00358246 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358220: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035822Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035822A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358239u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358239: ;
    ecx = eax;
    PUSH32(esp, 0x00358240u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358240: ;
    MEM32(0x4F31C0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358250
 * Original: 0x00358250 - 0x00358276 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358250: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035825Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035825A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358269u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358269: ;
    ecx = eax;
    PUSH32(esp, 0x00358270u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358270: ;
    MEM32(0x4F31B4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358280
 * Original: 0x00358280 - 0x0035828F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358280(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358280: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31C8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358290
 * Original: 0x00358290 - 0x0035829F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358290(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358290: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31CC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003582A0
 * Original: 0x003582A0 - 0x003582AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003582A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003582A0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31C4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003582B0
 * Original: 0x003582B0 - 0x003582BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003582B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003582B0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31DC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003582C0
 * Original: 0x003582C0 - 0x003582CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003582C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003582C0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31E0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003582D0
 * Original: 0x003582D0 - 0x003582DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003582D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003582D0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003582E0
 * Original: 0x003582E0 - 0x00358306 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003582E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003582E0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003582EAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003582EA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003582F9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003582F9: ;
    ecx = eax;
    PUSH32(esp, 0x00358300u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358300: ;
    MEM32(0x4F31D0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358310
 * Original: 0x00358310 - 0x00358336 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358310: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035831Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035831A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358329u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358329: ;
    ecx = eax;
    PUSH32(esp, 0x00358330u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358330: ;
    MEM32(0x4F31D8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358340
 * Original: 0x00358340 - 0x0035834F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358340(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358340: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31E8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358350
 * Original: 0x00358350 - 0x0035835F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358350(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358350: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31EC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358360
 * Original: 0x00358360 - 0x0035836F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358360(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358360: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31E4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358370
 * Original: 0x00358370 - 0x0035837F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358370(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358370: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31F4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358380
 * Original: 0x00358380 - 0x0035838F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358380(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358380: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31F8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358390
 * Original: 0x00358390 - 0x0035839F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358390(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358390: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31F0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003583A0
 * Original: 0x003583A0 - 0x003583AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003583A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003583A0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3200) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003583B0
 * Original: 0x003583B0 - 0x003583BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003583B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003583B0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3204) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003583C0
 * Original: 0x003583C0 - 0x003583CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003583C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003583C0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F31FC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003583D0
 * Original: 0x003583D0 - 0x003583DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003583D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003583D0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F320C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003583E0
 * Original: 0x003583E0 - 0x003583EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003583E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003583E0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3210) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003583F0
 * Original: 0x003583F0 - 0x003583FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003583F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003583F0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3208) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358400
 * Original: 0x00358400 - 0x0035840F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358400(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358400: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3218) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358410
 * Original: 0x00358410 - 0x0035841F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358410(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358410: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F321C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358420
 * Original: 0x00358420 - 0x0035842F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358420(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358420: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3214) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358430
 * Original: 0x00358430 - 0x0035843F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358430(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358430: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3224) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358440
 * Original: 0x00358440 - 0x0035844F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358440(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358440: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3228) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358450
 * Original: 0x00358450 - 0x0035845F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358450(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358450: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3220) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358460
 * Original: 0x00358460 - 0x0035846F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358460(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358460: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3230) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358470
 * Original: 0x00358470 - 0x0035847F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358470(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358470: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3234) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358480
 * Original: 0x00358480 - 0x0035848F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358480(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358480: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F322C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358490
 * Original: 0x00358490 - 0x0035849F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358490(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358490: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F323C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003584A0
 * Original: 0x003584A0 - 0x003584AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003584A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003584A0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3240) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003584B0
 * Original: 0x003584B0 - 0x003584BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003584B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003584B0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3238) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003584C0
 * Original: 0x003584C0 - 0x003584CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003584C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003584C0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F324C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003584D0
 * Original: 0x003584D0 - 0x003584DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003584D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003584D0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3250) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003584E0
 * Original: 0x003584E0 - 0x003584EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003584E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003584E0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3248) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003584F0
 * Original: 0x003584F0 - 0x00358516 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003584F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003584F0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003584FAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003584FA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358509u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358509: ;
    ecx = eax;
    PUSH32(esp, 0x00358510u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358510: ;
    MEM32(0x4F3244) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358520
 * Original: 0x00358520 - 0x00358546 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358520: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035852Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035852A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358539u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358539: ;
    ecx = eax;
    PUSH32(esp, 0x00358540u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358540: ;
    MEM32(0x4F3254) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358550
 * Original: 0x00358550 - 0x0035855F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358550(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358550: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F325C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358560
 * Original: 0x00358560 - 0x0035856F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358560(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358560: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3260) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358570
 * Original: 0x00358570 - 0x0035857F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358570(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358570: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3258) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358580
 * Original: 0x00358580 - 0x0035858F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358580(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358580: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3268) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358590
 * Original: 0x00358590 - 0x0035859F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358590(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358590: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F326C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003585A0
 * Original: 0x003585A0 - 0x003585AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003585A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003585A0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3264) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003585B0
 * Original: 0x003585B0 - 0x003585BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003585B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003585B0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3274) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003585C0
 * Original: 0x003585C0 - 0x003585CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003585C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003585C0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3278) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003585D0
 * Original: 0x003585D0 - 0x003585DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003585D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003585D0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3270) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003585E0
 * Original: 0x003585E0 - 0x003585EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003585E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003585E0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3280) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003585F0
 * Original: 0x003585F0 - 0x003585FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003585F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003585F0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3284) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358600
 * Original: 0x00358600 - 0x0035860F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358600(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358600: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F327C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358610
 * Original: 0x00358610 - 0x0035861F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358610(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358610: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F332C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358620
 * Original: 0x00358620 - 0x0035862F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358620(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358620: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3344) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358630
 * Original: 0x00358630 - 0x0035863F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358630(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358630: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F32A0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358640
 * Original: 0x00358640 - 0x00358666 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358640: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035864Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035864A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358659u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358659: ;
    ecx = eax;
    PUSH32(esp, 0x00358660u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358660: ;
    MEM32(0x4F3290) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358670
 * Original: 0x00358670 - 0x00358696 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358670: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035867Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035867A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358689u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358689: ;
    ecx = eax;
    PUSH32(esp, 0x00358690u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358690: ;
    MEM32(0x4F3360) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003586A0
 * Original: 0x003586A0 - 0x003586AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003586A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003586A0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F33D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003586B0
 * Original: 0x003586B0 - 0x003586BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003586B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003586B0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F33D8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003586C0
 * Original: 0x003586C0 - 0x003586CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003586C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003586C0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F33D0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003586D0
 * Original: 0x003586D0 - 0x003586DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003586D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003586D0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F33E0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003586E0
 * Original: 0x003586E0 - 0x003586EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003586E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003586E0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F33E4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003586F0
 * Original: 0x003586F0 - 0x003586FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003586F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003586F0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F33DC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358700
 * Original: 0x00358700 - 0x0035870F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358700(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358700: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F33F4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358710
 * Original: 0x00358710 - 0x0035871F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358710(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358710: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F33F8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358720
 * Original: 0x00358720 - 0x0035872F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358720(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358720: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F33EC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358730
 * Original: 0x00358730 - 0x00358756 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358730: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035873Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035873A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358749u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358749: ;
    ecx = eax;
    PUSH32(esp, 0x00358750u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358750: ;
    MEM32(0x4F33FC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358760
 * Original: 0x00358760 - 0x00358786 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358760: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035876Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035876A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358779u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358779: ;
    ecx = eax;
    PUSH32(esp, 0x00358780u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358780: ;
    MEM32(0x4F33F0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358790
 * Original: 0x00358790 - 0x0035879F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358790(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358790: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3408) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003587A0
 * Original: 0x003587A0 - 0x003587AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003587A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003587A0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F340C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003587B0
 * Original: 0x003587B0 - 0x003587BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003587B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003587B0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3400) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003587C0
 * Original: 0x003587C0 - 0x003587D6 (22 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003587C0(void)
{

loc_003587C0: ;
    ecx = 0x4F3410;
    PUSH32(esp, 0x003587CAu); RECOMP_ABI_CALL(0x000E8B70u, sub_000E8B70); /* call 0x000E8B70 */

loc_003587CA: ;
    PUSH32(esp, 0x35A1F0);
    PUSH32(esp, 0x003587D4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_003587D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003587E0
 * Original: 0x003587E0 - 0x003587EA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003587E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003587E0: ;
    ecx = 0x4F3404;
    g_seh_ebp = ebp; sub_000E7C20(); return; /* tail jmp 0x000E7C20 */

}

/**
 * sub_003587F0
 * Original: 0x003587F0 - 0x003587FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003587F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003587F0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D54) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358800
 * Original: 0x00358800 - 0x0035880F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358800(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358800: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D58) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358810
 * Original: 0x00358810 - 0x0035881F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358810(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358810: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D50) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358820
 * Original: 0x00358820 - 0x0035882F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358820(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358820: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D60) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358830
 * Original: 0x00358830 - 0x0035883F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358830(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358830: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D64) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358840
 * Original: 0x00358840 - 0x0035884F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358840(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358840: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D5C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358850
 * Original: 0x00358850 - 0x0035885F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358850(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358850: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D6C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358860
 * Original: 0x00358860 - 0x0035886F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358860(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358860: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D70) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358870
 * Original: 0x00358870 - 0x0035887F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358870(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358870: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D68) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358880
 * Original: 0x00358880 - 0x0035888F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358880(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358880: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D80) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358890
 * Original: 0x00358890 - 0x0035889F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358890(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358890: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D84) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003588A0
 * Original: 0x003588A0 - 0x003588AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003588A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003588A0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3D78) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003588B0
 * Original: 0x003588B0 - 0x003588D6 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003588B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003588B0: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003588BAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003588BA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x003588C9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003588C9: ;
    ecx = eax;
    PUSH32(esp, 0x003588D0u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_003588D0: ;
    MEM32(0x4F3D74) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003588E0
 * Original: 0x003588E0 - 0x00358906 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003588E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003588E0: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003588EAu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_003588EA: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x003588F9u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_003588F9: ;
    ecx = eax;
    PUSH32(esp, 0x00358900u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358900: ;
    MEM32(0x4F3D7C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358910
 * Original: 0x00358910 - 0x0035891F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358910(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358910: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DA8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358920
 * Original: 0x00358920 - 0x0035892F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358920(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358920: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DAC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358930
 * Original: 0x00358930 - 0x0035893F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00358930(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00358930: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DA0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358940
 * Original: 0x00358940 - 0x00358966 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358940: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x0035894Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035894A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358959u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358959: ;
    ecx = eax;
    PUSH32(esp, 0x00358960u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358960: ;
    MEM32(0x4F3DB0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00358970
 * Original: 0x00358970 - 0x00358996 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358970: ;
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x0035897Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0035897A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C40);
    PUSH32(esp, 0x00358989u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358989: ;
    ecx = eax;
    PUSH32(esp, 0x00358990u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358990: ;
    MEM32(0x4F3DA4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003589A0
 * Original: 0x003589A0 - 0x003589AF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003589A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003589A0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DB8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003589B0
 * Original: 0x003589B0 - 0x003589BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003589B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003589B0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DBC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003589C0
 * Original: 0x003589C0 - 0x003589CF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003589C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003589C0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DB4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003589D0
 * Original: 0x003589D0 - 0x003589DF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003589D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003589D0: ;
    fp_push(MEMD(0x3C8330)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DC8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003589E0
 * Original: 0x003589E0 - 0x003589EF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003589E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003589E0: ;
    fp_push(MEMD(0x3C8338)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DCC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003589F0
 * Original: 0x003589F0 - 0x003589FF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_003589F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003589F0: ;
    fp_push(MEMD(0x3C8340)); /* fld double */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(0x4F3DC0) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00358A00
 * Original: 0x00358A00 - 0x00358A26 (38 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00358A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00358A00: ;
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358A0Au); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00358A0A: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8C38);
    PUSH32(esp, 0x00358A19u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00358A19: ;
    ecx = eax;
    PUSH32(esp, 0x00358A20u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00358A20: ;
    MEM32(0x4F3DD0) = eax;
    esp += 4; return; /* ret */

}
