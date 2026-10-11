/**
 * X-Men Legends - Recompiled code chunk 90
 * Functions: 250 (0x00353A1C - 0x003549D8)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00353A1C
 * Original: 0x00353A1C - 0x00353A40 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353A1C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353A1C: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x447970;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_00353A24
 * Original: 0x00353A24 - 0x00353A40 (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353A24(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353A24: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x447970;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_00353A40
 * Original: 0x00353A40 - 0x00353A48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353A40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353A40: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00353A60
 * Original: 0x00353A60 - 0x00353A71 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353A60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353A60: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00353A6Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00353A6D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00353A80
 * Original: 0x00353A80 - 0x00353A8E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353A80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353A80: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x5F80;
    g_seh_ebp = ebp; sub_0014F430(); return; /* tail jmp 0x0014F430 */

}

/**
 * sub_00353A8E
 * Original: 0x00353A8E - 0x00353AB0 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353A8E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353A8E: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x88BC;
    g_seh_ebp = ebp; sub_0014F440(); return; /* tail jmp 0x0014F440 */

    eax = 0x4479E4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_00353AB0
 * Original: 0x00353AB0 - 0x00353AB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353AB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353AB0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_00353AB8
 * Original: 0x00353AB8 - 0x00353AD0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353AB8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353AB8: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x447A10;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353AD0
 * Original: 0x00353AD0 - 0x00353ADB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353AD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353AD0: ;
    ecx = ebp + -224;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00353ADB
 * Original: 0x00353ADB - 0x00353B80 (165 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353ADB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353ADB: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353AE3
 * Original: 0x00353AE3 - 0x00353B80 (157 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353AE3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353AE3: ;
    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353AEE
 * Original: 0x00353AEE - 0x00353B80 (146 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353AEE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353AEE: ;
    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353AF9
 * Original: 0x00353AF9 - 0x00353B80 (135 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353AF9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353AF9: ;
    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B04
 * Original: 0x00353B04 - 0x00353B80 (124 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B04(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B04: ;
    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B0F
 * Original: 0x00353B0F - 0x00353B80 (113 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B0F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B0F: ;
    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B1A
 * Original: 0x00353B1A - 0x00353B80 (102 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B1A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B1A: ;
    ecx = ebp + -244;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B25
 * Original: 0x00353B25 - 0x00353B80 (91 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B25(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B25: ;
    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B30
 * Original: 0x00353B30 - 0x00353B80 (80 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B30: ;
    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B3B
 * Original: 0x00353B3B - 0x00353B80 (69 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B3B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B3B: ;
    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B46
 * Original: 0x00353B46 - 0x00353B80 (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B46(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B46: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B4E
 * Original: 0x00353B4E - 0x00353B80 (50 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B4E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B4E: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B56
 * Original: 0x00353B56 - 0x00353B80 (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B56(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B56: ;
    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B61
 * Original: 0x00353B61 - 0x00353B80 (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B61(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B61: ;
    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B6C
 * Original: 0x00353B6C - 0x00353B80 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B6C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B6C: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447AAC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353B80
 * Original: 0x00353B80 - 0x00353B8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B80: ;
    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00353B8B
 * Original: 0x00353B8B - 0x00353BE0 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B8B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B8B: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447B10;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_00353B93
 * Original: 0x00353B93 - 0x00353BE0 (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B93(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B93: ;
    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447B10;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_00353B9E
 * Original: 0x00353B9E - 0x00353BE0 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353B9E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353B9E: ;
    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447B10;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_00353BA9
 * Original: 0x00353BA9 - 0x00353BE0 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353BA9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353BA9: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447B10;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_00353BB1
 * Original: 0x00353BB1 - 0x00353BE0 (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353BB1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353BB1: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447B10;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_00353BB9
 * Original: 0x00353BB9 - 0x00353BE0 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353BB9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353BB9: ;
    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447B10;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_00353BC4
 * Original: 0x00353BC4 - 0x00353BE0 (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353BC4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353BC4: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447B10;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_00353BE0
 * Original: 0x00353BE0 - 0x00353BEE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353BE0(void)
{

loc_00353BE0: ;
    eax = MEM32(0x56DCC8);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x56DCC8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00353C00
 * Original: 0x00353C00 - 0x00353C0E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353C00(void)
{

loc_00353C00: ;
    eax = MEM32(0x56DD00);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x56DD00) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00353C20
 * Original: 0x00353C20 - 0x00353C2B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353C20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353C20: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00155C10(); return; /* tail jmp 0x00155C10 */

}

/**
 * sub_00353C2B
 * Original: 0x00353C2B - 0x00353CF0 (197 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353C2B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353C2B: ;
    PUSH32(esp, 0x154100);
    PUSH32(esp, 3);
    PUSH32(esp, 0x104);
    eax = MEM32(ebp + -20);
    eax = eax + 0x890;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00353C45u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00353C45: ;
    esp += 4; return; /* ret */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0xBCC;
    g_seh_ebp = ebp; sub_00155520(); return; /* tail jmp 0x00155520 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0xD24;
    g_seh_ebp = ebp; sub_00156370(); return; /* tail jmp 0x00156370 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x1328;
    g_seh_ebp = ebp; sub_00155530(); return; /* tail jmp 0x00155530 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353C46
 * Original: 0x00353C46 - 0x00353CF0 (170 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353C46(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353C46: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0xBA8;
    g_seh_ebp = ebp; sub_0018B4A0(); return; /* tail jmp 0x0018B4A0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0xBCC;
    g_seh_ebp = ebp; sub_00155520(); return; /* tail jmp 0x00155520 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0xD24;
    g_seh_ebp = ebp; sub_00156370(); return; /* tail jmp 0x00156370 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x1328;
    g_seh_ebp = ebp; sub_00155530(); return; /* tail jmp 0x00155530 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353C54
 * Original: 0x00353C54 - 0x00353CF0 (156 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353C54(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353C54: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0xBCC;
    g_seh_ebp = ebp; sub_00155520(); return; /* tail jmp 0x00155520 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0xD24;
    g_seh_ebp = ebp; sub_00156370(); return; /* tail jmp 0x00156370 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x1328;
    g_seh_ebp = ebp; sub_00155530(); return; /* tail jmp 0x00155530 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353C62
 * Original: 0x00353C62 - 0x00353CF0 (142 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353C62(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353C62: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0xD24;
    g_seh_ebp = ebp; sub_00156370(); return; /* tail jmp 0x00156370 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x1328;
    g_seh_ebp = ebp; sub_00155530(); return; /* tail jmp 0x00155530 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353C70
 * Original: 0x00353C70 - 0x00353CF0 (128 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353C70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353C70: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x1328;
    g_seh_ebp = ebp; sub_00155530(); return; /* tail jmp 0x00155530 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353C7E
 * Original: 0x00353C7E - 0x00353CF0 (114 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353C7E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353C7E: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353C8C
 * Original: 0x00353C8C - 0x00353CF0 (100 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353C8C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353C8C: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353C9A
 * Original: 0x00353C9A - 0x00353CF0 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353C9A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353C9A: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353CA8
 * Original: 0x00353CA8 - 0x00353CF0 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353CA8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353CA8: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353CB6
 * Original: 0x00353CB6 - 0x00353CF0 (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353CB6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353CB6: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353CC4
 * Original: 0x00353CC4 - 0x00353CF0 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353CC4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353CC4: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353CD2
 * Original: 0x00353CD2 - 0x00353CF0 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353CD2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353CD2: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DB4;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x447BDC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353CF0
 * Original: 0x00353CF0 - 0x00353CFB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353CF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353CF0: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00155C10(); return; /* tail jmp 0x00155C10 */

}

/**
 * sub_00353CFB
 * Original: 0x00353CFB - 0x00353DB0 (181 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353CFB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353CFB: ;
    PUSH32(esp, 0x154100);
    PUSH32(esp, 3);
    PUSH32(esp, 0x104);
    eax = MEM32(ebp + -16);
    eax = eax + 0x890;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00353D15u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00353D15: ;
    esp += 4; return; /* ret */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xBCC;
    g_seh_ebp = ebp; sub_00155520(); return; /* tail jmp 0x00155520 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xD24;
    g_seh_ebp = ebp; sub_00156370(); return; /* tail jmp 0x00156370 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1328;
    g_seh_ebp = ebp; sub_00155530(); return; /* tail jmp 0x00155530 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    eax = 0x447C58;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353D16
 * Original: 0x00353D16 - 0x00353DB0 (154 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D16(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353D16: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xBA8;
    g_seh_ebp = ebp; sub_0018B4A0(); return; /* tail jmp 0x0018B4A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xBCC;
    g_seh_ebp = ebp; sub_00155520(); return; /* tail jmp 0x00155520 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xD24;
    g_seh_ebp = ebp; sub_00156370(); return; /* tail jmp 0x00156370 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1328;
    g_seh_ebp = ebp; sub_00155530(); return; /* tail jmp 0x00155530 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    eax = 0x447C58;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353D24
 * Original: 0x00353D24 - 0x00353DB0 (140 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D24(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353D24: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xBCC;
    g_seh_ebp = ebp; sub_00155520(); return; /* tail jmp 0x00155520 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xD24;
    g_seh_ebp = ebp; sub_00156370(); return; /* tail jmp 0x00156370 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1328;
    g_seh_ebp = ebp; sub_00155530(); return; /* tail jmp 0x00155530 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    eax = 0x447C58;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353D32
 * Original: 0x00353D32 - 0x00353DB0 (126 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D32(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353D32: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xD24;
    g_seh_ebp = ebp; sub_00156370(); return; /* tail jmp 0x00156370 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1328;
    g_seh_ebp = ebp; sub_00155530(); return; /* tail jmp 0x00155530 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    eax = 0x447C58;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353D40
 * Original: 0x00353D40 - 0x00353DB0 (112 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353D40: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1328;
    g_seh_ebp = ebp; sub_00155530(); return; /* tail jmp 0x00155530 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    eax = 0x447C58;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353D4E
 * Original: 0x00353D4E - 0x00353DB0 (98 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D4E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353D4E: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x13EC;
    g_seh_ebp = ebp; sub_00158320(); return; /* tail jmp 0x00158320 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    eax = 0x447C58;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353D5C
 * Original: 0x00353D5C - 0x00353DB0 (84 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D5C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353D5C: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21A8;
    g_seh_ebp = ebp; sub_00155540(); return; /* tail jmp 0x00155540 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    eax = 0x447C58;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353D6A
 * Original: 0x00353D6A - 0x00353DB0 (70 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D6A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353D6A: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x21E8;
    g_seh_ebp = ebp; sub_00155550(); return; /* tail jmp 0x00155550 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    eax = 0x447C58;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353D78
 * Original: 0x00353D78 - 0x00353DB0 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D78(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353D78: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2354;
    g_seh_ebp = ebp; sub_00154020(); return; /* tail jmp 0x00154020 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    eax = 0x447C58;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353D86
 * Original: 0x00353D86 - 0x00353DB0 (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D86(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353D86: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x23F8;
    g_seh_ebp = ebp; sub_001540C0(); return; /* tail jmp 0x001540C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    eax = 0x447C58;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353D94
 * Original: 0x00353D94 - 0x00353DB0 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353D94(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353D94: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2464;
    g_seh_ebp = ebp; sub_001540F0(); return; /* tail jmp 0x001540F0 */

    eax = 0x447C58;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353DB0
 * Original: 0x00353DB0 - 0x00353DBE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353DB0(void)
{

loc_00353DB0: ;
    eax = MEM32(0x570D60);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x570D60) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00353DD0
 * Original: 0x00353DD0 - 0x00353DDB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353DD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353DD0: ;
    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_00353DDB
 * Original: 0x00353DDB - 0x00353DF0 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353DDB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353DDB: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x447CA8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353DF0
 * Original: 0x00353DF0 - 0x00353DFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353DF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353DF0: ;
    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_00353DFB
 * Original: 0x00353DFB - 0x00353E10 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353DFB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353DFB: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x447CD4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353E10
 * Original: 0x00353E10 - 0x00353E18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E10: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00353E18
 * Original: 0x00353E18 - 0x00353E30 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E18(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E18: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    eax = 0x447D00;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353E30
 * Original: 0x00353E30 - 0x00353E38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E30: ;
    ecx = ebp + -124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00353E38
 * Original: 0x00353E38 - 0x00353E60 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E38(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E38: ;
    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447D34;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353E40
 * Original: 0x00353E40 - 0x00353E60 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E40: ;
    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447D34;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353E60
 * Original: 0x00353E60 - 0x00353E68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E60: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00353E68
 * Original: 0x00353E68 - 0x00353F20 (184 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E68(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E68: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353E70
 * Original: 0x00353E70 - 0x00353F20 (176 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E70: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353E78
 * Original: 0x00353E78 - 0x00353F20 (168 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E78(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E78: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353E80
 * Original: 0x00353E80 - 0x00353F20 (160 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E80: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353E88
 * Original: 0x00353E88 - 0x00353F20 (152 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E88(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E88: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353E90
 * Original: 0x00353E90 - 0x00353F20 (144 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E90: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353E98
 * Original: 0x00353E98 - 0x00353F20 (136 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353E98(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353E98: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353EA0
 * Original: 0x00353EA0 - 0x00353F20 (128 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353EA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353EA0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353EA8
 * Original: 0x00353EA8 - 0x00353F20 (120 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353EA8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353EA8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353EB0
 * Original: 0x00353EB0 - 0x00353F20 (112 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353EB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353EB0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353EB8
 * Original: 0x00353EB8 - 0x00353F20 (104 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353EB8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353EB8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353EC0
 * Original: 0x00353EC0 - 0x00353F20 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353EC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353EC0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353EC8
 * Original: 0x00353EC8 - 0x00353F20 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353EC8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353EC8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353ED0
 * Original: 0x00353ED0 - 0x00353F20 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353ED0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353ED0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353ED8
 * Original: 0x00353ED8 - 0x00353F20 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353ED8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353ED8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353EE0
 * Original: 0x00353EE0 - 0x00353F20 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353EE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353EE0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353EE8
 * Original: 0x00353EE8 - 0x00353F20 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353EE8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353EE8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353EF0
 * Original: 0x00353EF0 - 0x00353F20 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353EF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353EF0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353EF8
 * Original: 0x00353EF8 - 0x00353F20 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353EF8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353EF8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353F00
 * Original: 0x00353F00 - 0x00353F20 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353F00: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447DF8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353F20
 * Original: 0x00353F20 - 0x00353F28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353F20: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00353F28
 * Original: 0x00353F28 - 0x00353F50 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F28(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353F28: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447E2C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353F30
 * Original: 0x00353F30 - 0x00353F50 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353F30: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447E2C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353F50
 * Original: 0x00353F50 - 0x00353F58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353F50: ;
    ecx = ebp + -124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00353F58
 * Original: 0x00353F58 - 0x00353FA0 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F58(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353F58: ;
    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447E80;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353F60
 * Original: 0x00353F60 - 0x00353FA0 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353F60: ;
    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447E80;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353F68
 * Original: 0x00353F68 - 0x00353FA0 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F68(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353F68: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447E80;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353F70
 * Original: 0x00353F70 - 0x00353FA0 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353F70: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447E80;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353F78
 * Original: 0x00353F78 - 0x00353FA0 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F78(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353F78: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447E80;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353F80
 * Original: 0x00353F80 - 0x00353FA0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353F80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353F80: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447E80;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353FA0
 * Original: 0x00353FA0 - 0x00353FA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353FA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353FA0: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00353FA8
 * Original: 0x00353FA8 - 0x00353FE0 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353FA8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353FA8: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447EC4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353FB0
 * Original: 0x00353FB0 - 0x00353FE0 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353FB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353FB0: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447EC4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353FB8
 * Original: 0x00353FB8 - 0x00353FE0 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353FB8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353FB8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447EC4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353FC0
 * Original: 0x00353FC0 - 0x00353FE0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353FC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353FC0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447EC4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00353FE0
 * Original: 0x00353FE0 - 0x00353FE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353FE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353FE0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00353FE8
 * Original: 0x00353FE8 - 0x00354000 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00353FE8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00353FE8: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x447EF0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354000
 * Original: 0x00354000 - 0x00354011 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354000(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354000: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035400Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0035400D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00354020
 * Original: 0x00354020 - 0x00354028 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354020(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354020: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_00354028
 * Original: 0x00354028 - 0x00354040 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354028(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354028: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x447F40;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354040
 * Original: 0x00354040 - 0x0035404B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354040: ;
    ecx = ebp + -556;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

}

/**
 * sub_00354060
 * Original: 0x00354060 - 0x0035406B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354060: ;
    ecx = ebp + -708;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

}

/**
 * sub_0035406B
 * Original: 0x0035406B - 0x003540A0 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035406B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035406B: ;
    ecx = ebp + -736;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

    eax = 0x447FD8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + -1232;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

    eax = 0x447FFC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_00354080
 * Original: 0x00354080 - 0x003540A0 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354080(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354080: ;
    ecx = ebp + -1232;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

    eax = 0x447FFC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_003540A0
 * Original: 0x003540A0 - 0x003540A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003540A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003540A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00172720(); return; /* tail jmp 0x00172720 */

}

/**
 * sub_003540A8
 * Original: 0x003540A8 - 0x003540E0 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003540A8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003540A8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xED0;
    g_seh_ebp = ebp; sub_000542B0(); return; /* tail jmp 0x000542B0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xEE0;
    g_seh_ebp = ebp; sub_00188EE0(); return; /* tail jmp 0x00188EE0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xF68;
    g_seh_ebp = ebp; sub_00166490(); return; /* tail jmp 0x00166490 */

    eax = 0x448074;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003540B6
 * Original: 0x003540B6 - 0x003540E0 (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003540B6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003540B6: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xEE0;
    g_seh_ebp = ebp; sub_00188EE0(); return; /* tail jmp 0x00188EE0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xF68;
    g_seh_ebp = ebp; sub_00166490(); return; /* tail jmp 0x00166490 */

    eax = 0x448074;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003540C4
 * Original: 0x003540C4 - 0x003540E0 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003540C4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003540C4: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xF68;
    g_seh_ebp = ebp; sub_00166490(); return; /* tail jmp 0x00166490 */

    eax = 0x448074;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003540E0
 * Original: 0x003540E0 - 0x003540E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003540E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003540E0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

}

/**
 * sub_00354100
 * Original: 0x00354100 - 0x0035410E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354100(void)
{

loc_00354100: ;
    eax = MEM32(0x570F10);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x570F10) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00354120
 * Original: 0x00354120 - 0x00354128 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354120: ;
    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00354140
 * Original: 0x00354140 - 0x00354148 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354140: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_00172720(); return; /* tail jmp 0x00172720 */

}

/**
 * sub_00354148
 * Original: 0x00354148 - 0x00354180 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354148(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354148: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0xED4;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    eax = 0x44810C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448138;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354160
 * Original: 0x00354160 - 0x00354180 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354160: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448138;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354168
 * Original: 0x00354168 - 0x00354180 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354168(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354168: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448138;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354180
 * Original: 0x00354180 - 0x00354188 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354180: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00354188
 * Original: 0x00354188 - 0x003541B0 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354188(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354188: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x44816C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354190
 * Original: 0x00354190 - 0x003541B0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354190(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354190: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x44816C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003541B0
 * Original: 0x003541B0 - 0x003541B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003541B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003541B0: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_003541B8
 * Original: 0x003541B8 - 0x00354220 (104 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003541B8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003541B8: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -96);
    eax = eax & 1;
    if ((eax == 0)) goto loc_003541E8; /* je: equal / zero */

loc_003541DC: ;
    MEM32(ebp + -96) = MEM32(ebp + -96) & 0xFFFFFFFEu;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_003541E8: ;
    esp += 4; return; /* ret */

    MEM32(ebp + -96) = MEM32(ebp + -96) & 0xFFFFFFFDu;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_00354201: ;
    esp += 4; return; /* ret */

    eax = 0x4481C0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003541C0
 * Original: 0x003541C0 - 0x00354220 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003541C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003541C0: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -96);
    eax = eax & 1;
    if ((eax == 0)) goto loc_003541E8; /* je: equal / zero */

loc_003541DC: ;
    MEM32(ebp + -96) = MEM32(ebp + -96) & 0xFFFFFFFEu;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_003541E8: ;
    esp += 4; return; /* ret */

    MEM32(ebp + -96) = MEM32(ebp + -96) & 0xFFFFFFFDu;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_00354201: ;
    esp += 4; return; /* ret */

    eax = 0x4481C0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003541C8
 * Original: 0x003541C8 - 0x00354220 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003541C8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003541C8: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -96);
    eax = eax & 1;
    if ((eax == 0)) goto loc_003541E8; /* je: equal / zero */

loc_003541DC: ;
    MEM32(ebp + -96) = MEM32(ebp + -96) & 0xFFFFFFFEu;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_003541E8: ;
    esp += 4; return; /* ret */

    MEM32(ebp + -96) = MEM32(ebp + -96) & 0xFFFFFFFDu;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_00354201: ;
    esp += 4; return; /* ret */

    eax = 0x4481C0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003541D0
 * Original: 0x003541D0 - 0x00354220 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003541D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003541D0: ;
    eax = MEM32(ebp + -96);
    eax = eax & 1;
    if ((eax == 0)) goto loc_003541E8; /* je: equal / zero */

loc_003541DC: ;
    MEM32(ebp + -96) = MEM32(ebp + -96) & 0xFFFFFFFEu;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_003541E8: ;
    esp += 4; return; /* ret */

    MEM32(ebp + -96) = MEM32(ebp + -96) & 0xFFFFFFFDu;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_00354201: ;
    esp += 4; return; /* ret */

    eax = 0x4481C0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003541E9
 * Original: 0x003541E9 - 0x00354220 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003541E9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003541E9: ;
    eax = MEM32(ebp + -96);
    eax = eax & 2;
    if ((eax == 0)) goto loc_00354201; /* je: equal / zero */

loc_003541F5: ;
    MEM32(ebp + -96) = MEM32(ebp + -96) & 0xFFFFFFFDu;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_00354201: ;
    esp += 4; return; /* ret */

    eax = 0x4481C0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354202
 * Original: 0x00354202 - 0x00354220 (30 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354202(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354202: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4481C0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354220
 * Original: 0x00354220 - 0x00354228 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354220(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354220: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0017F050(); return; /* tail jmp 0x0017F050 */

}

/**
 * sub_00354240
 * Original: 0x00354240 - 0x00354248 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354240: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0017F050(); return; /* tail jmp 0x0017F050 */

}

/**
 * sub_00354248
 * Original: 0x00354248 - 0x00354280 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354248(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354248: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10E8;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    eax = 0x448210;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00172720(); return; /* tail jmp 0x00172720 */

    eax = 0x4482A0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354260
 * Original: 0x00354260 - 0x00354280 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354260: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00172720(); return; /* tail jmp 0x00172720 */

    eax = 0x4482A0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354280
 * Original: 0x00354280 - 0x00354291 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354280: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035428Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0035428D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00354291
 * Original: 0x00354291 - 0x00354320 (143 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354291(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354291: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035429Eu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0035429E: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003542A2
 * Original: 0x003542A2 - 0x00354320 (126 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003542A2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003542A2: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003542AFu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003542AF: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003542B3
 * Original: 0x003542B3 - 0x00354320 (109 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003542B3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003542B3: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003542C0u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003542C0: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003542C4
 * Original: 0x003542C4 - 0x00354320 (92 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003542C4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003542C4: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003542D1u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003542D1: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003542D5
 * Original: 0x003542D5 - 0x00354320 (75 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003542D5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003542D5: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003542E2u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003542E2: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003542E6
 * Original: 0x003542E6 - 0x00354320 (58 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003542E6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003542E6: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003542F3u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003542F3: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003542F7
 * Original: 0x003542F7 - 0x00354320 (41 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003542F7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003542F7: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354304u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00354304: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354320
 * Original: 0x00354320 - 0x00354328 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354320(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354320: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00354328
 * Original: 0x00354328 - 0x00354360 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354328(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354328: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448348;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354330
 * Original: 0x00354330 - 0x00354360 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354330: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448348;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354338
 * Original: 0x00354338 - 0x00354360 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354338(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354338: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448348;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354340
 * Original: 0x00354340 - 0x00354360 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354340(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354340: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448348;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354348
 * Original: 0x00354348 - 0x00354360 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354348(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354348: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448348;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354360
 * Original: 0x00354360 - 0x00354368 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354360(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354360: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00172720(); return; /* tail jmp 0x00172720 */

}

/**
 * sub_00354368
 * Original: 0x00354368 - 0x003543D0 (104 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354368(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354368: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xECC;
    g_seh_ebp = ebp; sub_0018A490(); return; /* tail jmp 0x0018A490 */

    eax = 0x448374;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4483C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354380
 * Original: 0x00354380 - 0x003543D0 (80 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354380(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354380: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4483C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354388
 * Original: 0x00354388 - 0x003543D0 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354388(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354388: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4483C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354390
 * Original: 0x00354390 - 0x003543D0 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354390(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354390: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4483C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354398
 * Original: 0x00354398 - 0x003543D0 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354398(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354398: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4483C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003543A0
 * Original: 0x003543A0 - 0x003543D0 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003543A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003543A0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4483C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003543A8
 * Original: 0x003543A8 - 0x003543D0 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003543A8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003543A8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4483C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003543B0
 * Original: 0x003543B0 - 0x003543D0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003543B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003543B0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4483C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003543D0
 * Original: 0x003543D0 - 0x003543D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003543D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003543D0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_003543D8
 * Original: 0x003543D8 - 0x003543F0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003543D8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003543D8: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4483F4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003543F0
 * Original: 0x003543F0 - 0x003543FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003543F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003543F0: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_003543FB
 * Original: 0x003543FB - 0x00354490 (149 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003543FB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003543FB: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354406
 * Original: 0x00354406 - 0x00354490 (138 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354406(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354406: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354411
 * Original: 0x00354411 - 0x00354490 (127 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354411(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354411: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035441C
 * Original: 0x0035441C - 0x00354490 (116 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035441C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035441C: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354427
 * Original: 0x00354427 - 0x00354490 (105 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354427(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354427: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354432
 * Original: 0x00354432 - 0x00354490 (94 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354432(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354432: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035443D
 * Original: 0x0035443D - 0x00354490 (83 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035443D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035443D: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354448
 * Original: 0x00354448 - 0x00354490 (72 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354448(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354448: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354453
 * Original: 0x00354453 - 0x00354490 (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354453(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354453: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035445E
 * Original: 0x0035445E - 0x00354490 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035445E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035445E: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354469
 * Original: 0x00354469 - 0x00354490 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354469(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354469: ;
    ecx = ebp + -152;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354474
 * Original: 0x00354474 - 0x00354490 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354474(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354474: ;
    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448478;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354490
 * Original: 0x00354490 - 0x00354498 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354490(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354490: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00354498
 * Original: 0x00354498 - 0x003544B0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354498(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354498: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4484A4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003544B0
 * Original: 0x003544B0 - 0x003544B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003544B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003544B0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_003544B8
 * Original: 0x003544B8 - 0x003544E0 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003544B8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003544B8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4484D8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003544C0
 * Original: 0x003544C0 - 0x003544E0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003544C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003544C0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4484D8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003544E0
 * Original: 0x003544E0 - 0x003544EB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003544E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003544E0: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x60;
    g_seh_ebp = ebp; sub_001768F0(); return; /* tail jmp 0x001768F0 */

}

/**
 * sub_003544EB
 * Original: 0x003544EB - 0x00354530 (69 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003544EB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003544EB: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x370;
    g_seh_ebp = ebp; sub_001768F0(); return; /* tail jmp 0x001768F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x680;
    g_seh_ebp = ebp; sub_001768F0(); return; /* tail jmp 0x001768F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x990;
    g_seh_ebp = ebp; sub_001768F0(); return; /* tail jmp 0x001768F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xCA0;
    g_seh_ebp = ebp; sub_001768F0(); return; /* tail jmp 0x001768F0 */

    eax = 0x44851C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003544F9
 * Original: 0x003544F9 - 0x00354530 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003544F9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003544F9: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x680;
    g_seh_ebp = ebp; sub_001768F0(); return; /* tail jmp 0x001768F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x990;
    g_seh_ebp = ebp; sub_001768F0(); return; /* tail jmp 0x001768F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xCA0;
    g_seh_ebp = ebp; sub_001768F0(); return; /* tail jmp 0x001768F0 */

    eax = 0x44851C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354507
 * Original: 0x00354507 - 0x00354530 (41 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354507(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354507: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x990;
    g_seh_ebp = ebp; sub_001768F0(); return; /* tail jmp 0x001768F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xCA0;
    g_seh_ebp = ebp; sub_001768F0(); return; /* tail jmp 0x001768F0 */

    eax = 0x44851C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354515
 * Original: 0x00354515 - 0x00354530 (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354515(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354515: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xCA0;
    g_seh_ebp = ebp; sub_001768F0(); return; /* tail jmp 0x001768F0 */

    eax = 0x44851C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354530
 * Original: 0x00354530 - 0x00354538 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354530(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354530: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0017D9E0(); return; /* tail jmp 0x0017D9E0 */

}

/**
 * sub_00354550
 * Original: 0x00354550 - 0x00354558 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354550(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354550: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00176DA0(); return; /* tail jmp 0x00176DA0 */

}

/**
 * sub_00354570
 * Original: 0x00354570 - 0x00354578 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354570: ;
    ecx = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_00176DA0(); return; /* tail jmp 0x00176DA0 */

}

/**
 * sub_00354578
 * Original: 0x00354578 - 0x003545A0 (40 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354578(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354578: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354585u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00354585: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003545A0
 * Original: 0x003545A0 - 0x003545A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003545A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003545A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00177160(); return; /* tail jmp 0x00177160 */

}

/**
 * sub_003545C0
 * Original: 0x003545C0 - 0x003545C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003545C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003545C0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0017D9E0(); return; /* tail jmp 0x0017D9E0 */

}

/**
 * sub_003545E0
 * Original: 0x003545E0 - 0x003545F1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003545E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003545E0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003545EDu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003545ED: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003545F1
 * Original: 0x003545F1 - 0x003546B0 (191 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003545F1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003545F1: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003545FEu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003545FE: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
 * sub_00354602
 * Original: 0x00354602 - 0x003546B0 (174 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354602(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354602: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035460Fu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0035460F: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
 * sub_00354613
 * Original: 0x00354613 - 0x003546B0 (157 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354613(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354613: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354620u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00354620: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
 * sub_00354624
 * Original: 0x00354624 - 0x003546B0 (140 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354624(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354624: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354631u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00354631: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
 * sub_00354635
 * Original: 0x00354635 - 0x003546B0 (123 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354635(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354635: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354642u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00354642: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
 * sub_00354646
 * Original: 0x00354646 - 0x003546B0 (106 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354646(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354646: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354653u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00354653: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
 * sub_00354657
 * Original: 0x00354657 - 0x003546B0 (89 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354657(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354657: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354664u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00354664: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
 * sub_00354668
 * Original: 0x00354668 - 0x003546B0 (72 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354668(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354668: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354675u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00354675: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
 * sub_00354679
 * Original: 0x00354679 - 0x003546B0 (55 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354679(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354679: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354686u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00354686: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

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
 * sub_0035468A
 * Original: 0x0035468A - 0x003546B0 (38 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035468A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035468A: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354697u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00354697: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

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
 * sub_003546B0
 * Original: 0x003546B0 - 0x003546B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003546B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003546B0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_003546B8
 * Original: 0x003546B8 - 0x003546E0 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003546B8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003546B8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4486E8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003546C0
 * Original: 0x003546C0 - 0x003546E0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003546C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003546C0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4486E8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003546E0
 * Original: 0x003546E0 - 0x003546E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003546E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003546E0: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_003546E8
 * Original: 0x003546E8 - 0x00354730 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003546E8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003546E8: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x44873C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003546F0
 * Original: 0x003546F0 - 0x00354730 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003546F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003546F0: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x44873C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003546F8
 * Original: 0x003546F8 - 0x00354730 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003546F8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003546F8: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x44873C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354700
 * Original: 0x00354700 - 0x00354730 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354700(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354700: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x44873C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354708
 * Original: 0x00354708 - 0x00354730 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354708(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354708: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x44873C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354710
 * Original: 0x00354710 - 0x00354730 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354710: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x44873C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354730
 * Original: 0x00354730 - 0x00354738 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354730: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00176DA0(); return; /* tail jmp 0x00176DA0 */

}

/**
 * sub_00354738
 * Original: 0x00354738 - 0x00354760 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354738(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354738: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xB4;
    g_seh_ebp = ebp; sub_00188EE0(); return; /* tail jmp 0x00188EE0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10C;
    g_seh_ebp = ebp; sub_0018A5E0(); return; /* tail jmp 0x0018A5E0 */

    eax = 0x448770;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354746
 * Original: 0x00354746 - 0x00354760 (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354746(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354746: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10C;
    g_seh_ebp = ebp; sub_0018A5E0(); return; /* tail jmp 0x0018A5E0 */

    eax = 0x448770;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354760
 * Original: 0x00354760 - 0x00354768 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354760(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354760: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00354780
 * Original: 0x00354780 - 0x00354788 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354780: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00354788
 * Original: 0x00354788 - 0x003547A0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354788(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354788: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4487C0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003547A0
 * Original: 0x003547A0 - 0x003547AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003547A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003547A0: ;
    ecx = ebp + -300;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

}

/**
 * sub_003547C0
 * Original: 0x003547C0 - 0x003547CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003547C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003547C0: ;
    ecx = ebp + -656;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

}

/**
 * sub_003547E0
 * Original: 0x003547E0 - 0x003547E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003547E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003547E0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_003547E8
 * Original: 0x003547E8 - 0x00354800 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003547E8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003547E8: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448834;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354800
 * Original: 0x00354800 - 0x00354808 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354800(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354800: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00354808
 * Original: 0x00354808 - 0x00354830 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354808(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354808: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448870;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354810
 * Original: 0x00354810 - 0x00354830 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354810: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448870;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354818
 * Original: 0x00354818 - 0x00354830 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354818(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354818: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448870;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354830
 * Original: 0x00354830 - 0x00354838 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354830(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354830: ;
    ecx = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_00177160(); return; /* tail jmp 0x00177160 */

}

/**
 * sub_00354838
 * Original: 0x00354838 - 0x00354860 (40 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354838(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354838: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00354845u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00354845: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354860
 * Original: 0x00354860 - 0x00354868 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354860(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354860: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00177160(); return; /* tail jmp 0x00177160 */

}

/**
 * sub_00354880
 * Original: 0x00354880 - 0x00354888 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354880(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354880: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_003548A0
 * Original: 0x003548A0 - 0x003548A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003548A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003548A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0017D9E0(); return; /* tail jmp 0x0017D9E0 */

}

/**
 * sub_003548C0
 * Original: 0x003548C0 - 0x003548C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003548C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003548C0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00172720(); return; /* tail jmp 0x00172720 */

}

/**
 * sub_003548E0
 * Original: 0x003548E0 - 0x003548E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003548E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003548E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00172720(); return; /* tail jmp 0x00172720 */

}

/**
 * sub_003548E8
 * Original: 0x003548E8 - 0x00354970 (136 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003548E8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003548E8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xECC;
    g_seh_ebp = ebp; sub_0018C0E0(); return; /* tail jmp 0x0018C0E0 */

    eax = 0x448958;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -288;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448984;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4489C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354900
 * Original: 0x00354900 - 0x00354970 (112 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354900: ;
    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -288;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448984;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4489C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035490B
 * Original: 0x0035490B - 0x00354970 (101 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035490B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035490B: ;
    ecx = ebp + -288;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448984;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4489C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354920
 * Original: 0x00354920 - 0x00354970 (80 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354920: ;
    ecx = ebp + -148;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4489C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035492B
 * Original: 0x0035492B - 0x00354970 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035492B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035492B: ;
    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4489C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354936
 * Original: 0x00354936 - 0x00354970 (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354936(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354936: ;
    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4489C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354941
 * Original: 0x00354941 - 0x00354970 (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354941(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354941: ;
    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4489C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035494C
 * Original: 0x0035494C - 0x00354970 (36 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035494C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035494C: ;
    ecx = ebp + -164;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4489C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00354970
 * Original: 0x00354970 - 0x00354978 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354970: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00354990
 * Original: 0x00354990 - 0x0035499B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00354990(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00354990: ;
    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0035499B
 * Original: 0x0035499B - 0x003549D0 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035499B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035499B: ;
    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -128);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -124);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003549B3u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003549B3: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    eax = 0x448A28;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003549A6
 * Original: 0x003549A6 - 0x003549D0 (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003549A6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003549A6: ;
    eax = MEM32(ebp + -128);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -124);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003549B3u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_003549B3: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    eax = 0x448A28;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003549B7
 * Original: 0x003549B7 - 0x003549D0 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003549B7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003549B7: ;
    ecx = ebp + -120;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448A28;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003549D0
 * Original: 0x003549D0 - 0x003549D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003549D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003549D0: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

}

/**
 * sub_003549D8
 * Original: 0x003549D8 - 0x00354A10 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003549D8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003549D8: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x448A74;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}
