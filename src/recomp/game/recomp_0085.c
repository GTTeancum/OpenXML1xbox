/**
 * X-Men Legends - Recompiled code chunk 85
 * Functions: 250 (0x0034E260 - 0x0034F350)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0034E260
 * Original: 0x0034E260 - 0x0034E268 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E260: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E268
 * Original: 0x0034E268 - 0x0034E280 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E268(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E268: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440254;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E280
 * Original: 0x0034E280 - 0x0034E28E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E280(void)
{

loc_0034E280: ;
    eax = MEM32(0x485820);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x485820) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0034E2A0
 * Original: 0x0034E2A0 - 0x0034E2A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E2A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E2A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00075970(); return; /* tail jmp 0x00075970 */

}

/**
 * sub_0034E2A8
 * Original: 0x0034E2A8 - 0x0034E2E0 (56 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E2A8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E2A8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x25C;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x260;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x26C;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    eax = 0x4402B4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E2B6
 * Original: 0x0034E2B6 - 0x0034E2E0 (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E2B6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E2B6: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x260;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x26C;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    eax = 0x4402B4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E2C4
 * Original: 0x0034E2C4 - 0x0034E2E0 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E2C4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E2C4: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x26C;
    g_seh_ebp = ebp; sub_0006E220(); return; /* tail jmp 0x0006E220 */

    eax = 0x4402B4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E2E0
 * Original: 0x0034E2E0 - 0x0034E2E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E2E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E2E0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E2E8
 * Original: 0x0034E2E8 - 0x0034E300 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E2E8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E2E8: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4402E0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E300
 * Original: 0x0034E300 - 0x0034E308 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E300: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E308
 * Original: 0x0034E308 - 0x0034E320 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E308(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E308: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440338;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E320
 * Original: 0x0034E320 - 0x0034E328 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E320(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E320: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0002E3D0(); return; /* tail jmp 0x0002E3D0 */

}

/**
 * sub_0034E328
 * Original: 0x0034E328 - 0x0034E350 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E328(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E328: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x2DC;
    g_seh_ebp = ebp; sub_000322C0(); return; /* tail jmp 0x000322C0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x590;
    g_seh_ebp = ebp; sub_00030880(); return; /* tail jmp 0x00030880 */

    eax = 0x44036C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E336
 * Original: 0x0034E336 - 0x0034E350 (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E336(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E336: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x590;
    g_seh_ebp = ebp; sub_00030880(); return; /* tail jmp 0x00030880 */

    eax = 0x44036C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E350
 * Original: 0x0034E350 - 0x0034E358 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E350: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

}

/**
 * sub_0034E370
 * Original: 0x0034E370 - 0x0034E378 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E370(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E370: ;
    ecx = MEM32(ebp + -52);
    g_seh_ebp = ebp; sub_0002E3D0(); return; /* tail jmp 0x0002E3D0 */

}

/**
 * sub_0034E378
 * Original: 0x0034E378 - 0x0034E3A0 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E378(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E378: ;
    ecx = MEM32(ebp + -52);
    ecx = ecx + 0x2DC;
    g_seh_ebp = ebp; sub_000322C0(); return; /* tail jmp 0x000322C0 */

    ecx = MEM32(ebp + -52);
    ecx = ecx + 0x590;
    g_seh_ebp = ebp; sub_00030880(); return; /* tail jmp 0x00030880 */

    eax = 0x4403C4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E386
 * Original: 0x0034E386 - 0x0034E3A0 (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E386(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E386: ;
    ecx = MEM32(ebp + -52);
    ecx = ecx + 0x590;
    g_seh_ebp = ebp; sub_00030880(); return; /* tail jmp 0x00030880 */

    eax = 0x4403C4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E3A0
 * Original: 0x0034E3A0 - 0x0034E3A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E3A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E3A0: ;
    ecx = ebp + -88;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E3C0
 * Original: 0x0034E3C0 - 0x0034E3C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E3C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E3C0: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034E3C8
 * Original: 0x0034E3C8 - 0x0034E3F0 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E3C8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E3C8: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440424;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E3D0
 * Original: 0x0034E3D0 - 0x0034E3F0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E3D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E3D0: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440424;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E3D8
 * Original: 0x0034E3D8 - 0x0034E3F0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E3D8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E3D8: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440424;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E3F0
 * Original: 0x0034E3F0 - 0x0034E3F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E3F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E3F0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E3F8
 * Original: 0x0034E3F8 - 0x0034E410 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E3F8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E3F8: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440450;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E410
 * Original: 0x0034E410 - 0x0034E418 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E410(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E410: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E418
 * Original: 0x0034E418 - 0x0034E430 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E418(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E418: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x44047C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E430
 * Original: 0x0034E430 - 0x0034E438 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E430(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E430: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E438
 * Original: 0x0034E438 - 0x0034E450 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E438(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E438: ;
    ecx = ebp + -88;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4404A8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E450
 * Original: 0x0034E450 - 0x0034E458 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E450(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E450: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E470
 * Original: 0x0034E470 - 0x0034E478 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E470(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E470: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E478
 * Original: 0x0034E478 - 0x0034E490 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E478(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E478: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4404F8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E490
 * Original: 0x0034E490 - 0x0034E49B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E490(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E490: ;
    ecx = ebp + -264;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E49B
 * Original: 0x0034E49B - 0x0034E4E0 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E49B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E49B: ;
    ecx = ebp + -220;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440524;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440560;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E4B0
 * Original: 0x0034E4B0 - 0x0034E4E0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E4B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E4B0: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440560;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E4B8
 * Original: 0x0034E4B8 - 0x0034E4E0 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E4B8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E4B8: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440560;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E4C0
 * Original: 0x0034E4C0 - 0x0034E4E0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E4C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E4C0: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440560;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E4C8
 * Original: 0x0034E4C8 - 0x0034E4E0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E4C8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E4C8: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440560;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E4E0
 * Original: 0x0034E4E0 - 0x0034E4EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E4E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E4E0: ;
    ecx = ebp + -264;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E4EB
 * Original: 0x0034E4EB - 0x0034E520 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E4EB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E4EB: ;
    ecx = ebp + -140;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    ecx = ebp + -184;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -140;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x44059C;
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
 * sub_0034E4F6
 * Original: 0x0034E4F6 - 0x0034E520 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E4F6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E4F6: ;
    ecx = ebp + -184;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -140;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x44059C;
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
 * sub_0034E501
 * Original: 0x0034E501 - 0x0034E520 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E501(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E501: ;
    ecx = ebp + -140;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x44059C;
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
 * sub_0034E520
 * Original: 0x0034E520 - 0x0034E528 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E520(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E520: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034E528
 * Original: 0x0034E528 - 0x0034E550 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E528(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E528: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4405D8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E530
 * Original: 0x0034E530 - 0x0034E550 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E530(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E530: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4405D8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E538
 * Original: 0x0034E538 - 0x0034E550 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E538(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E538: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4405D8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E550
 * Original: 0x0034E550 - 0x0034E558 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E550(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E550: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000942B0(); return; /* tail jmp 0x000942B0 */

}

/**
 * sub_0034E570
 * Original: 0x0034E570 - 0x0034E578 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E570: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034E590
 * Original: 0x0034E590 - 0x0034E59B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E590: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x30;
    g_seh_ebp = ebp; xml1_guest_character_talent_map_destroy(); return; /* tail jmp 0x00048EE0 */

}

/**
 * sub_0034E5B0
 * Original: 0x0034E5B0 - 0x0034E5BB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E5B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E5B0: ;
    ecx = ebp + -440;
    g_seh_ebp = ebp; xml1_guest_character_talent_map_destroy(); return; /* tail jmp 0x00048EE0 */

}

/**
 * sub_0034E5D0
 * Original: 0x0034E5D0 - 0x0034E5DB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E5D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E5D0: ;
    ecx = ebp + -1616;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034E5DB
 * Original: 0x0034E5DB - 0x0034E620 (69 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E5DB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E5DB: ;
    ecx = ebp + -1568;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    ecx = ebp + -1632;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1632;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1584;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1600;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440704;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E5E6
 * Original: 0x0034E5E6 - 0x0034E620 (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E5E6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E5E6: ;
    ecx = ebp + -1632;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1632;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1584;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1600;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440704;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E5F1
 * Original: 0x0034E5F1 - 0x0034E620 (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E5F1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E5F1: ;
    ecx = ebp + -1632;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1584;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1600;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440704;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E5FC
 * Original: 0x0034E5FC - 0x0034E620 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E5FC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E5FC: ;
    ecx = ebp + -1584;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1600;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440704;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E607
 * Original: 0x0034E607 - 0x0034E620 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E607(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E607: ;
    ecx = ebp + -1600;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440704;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E620
 * Original: 0x0034E620 - 0x0034E62E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E620(void)
{

loc_0034E620: ;
    eax = MEM32(0x48D0D8);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x48D0D8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0034E640
 * Original: 0x0034E640 - 0x0034E648 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E640: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E648
 * Original: 0x0034E648 - 0x0034E660 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E648(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E648: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440754;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E660
 * Original: 0x0034E660 - 0x0034E668 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E660: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E668
 * Original: 0x0034E668 - 0x0034E680 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E668(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E668: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440780;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E680
 * Original: 0x0034E680 - 0x0034E688 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E680(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E680: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E688
 * Original: 0x0034E688 - 0x0034E6A0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E688(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E688: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4407AC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E6A0
 * Original: 0x0034E6A0 - 0x0034E6AE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E6A0(void)
{

loc_0034E6A0: ;
    eax = MEM32(0x48D53C);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x48D53C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0034E6C0
 * Original: 0x0034E6C0 - 0x0034E6C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E6C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E6C0: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E6C8
 * Original: 0x0034E6C8 - 0x0034E6E0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E6C8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E6C8: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440828;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E6E0
 * Original: 0x0034E6E0 - 0x0034E6E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E6E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E6E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00075970(); return; /* tail jmp 0x00075970 */

}

/**
 * sub_0034E700
 * Original: 0x0034E700 - 0x0034E708 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E700(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E700: ;
    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034E708
 * Original: 0x0034E708 - 0x0034E740 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E708(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E708: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440890;
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
 * sub_0034E710
 * Original: 0x0034E710 - 0x0034E740 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E710: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440890;
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
 * sub_0034E718
 * Original: 0x0034E718 - 0x0034E740 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E718(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E718: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440890;
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
 * sub_0034E720
 * Original: 0x0034E720 - 0x0034E740 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E720(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E720: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440890;
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
 * sub_0034E740
 * Original: 0x0034E740 - 0x0034E748 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E740(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E740: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034E748
 * Original: 0x0034E748 - 0x0034E770 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E748(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E748: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4408CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E750
 * Original: 0x0034E750 - 0x0034E770 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E750(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E750: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4408CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E758
 * Original: 0x0034E758 - 0x0034E770 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E758(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E758: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4408CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E770
 * Original: 0x0034E770 - 0x0034E778 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E770: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034E778
 * Original: 0x0034E778 - 0x0034E7A0 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E778(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E778: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440900;
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
 * sub_0034E780
 * Original: 0x0034E780 - 0x0034E7A0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E780: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440900;
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
 * sub_0034E7A0
 * Original: 0x0034E7A0 - 0x0034E7AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E7A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E7A0: ;
    ecx = ebp + -140;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034E7AB
 * Original: 0x0034E7AB - 0x0034E800 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E7AB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E7AB: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -168;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440964;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E7B3
 * Original: 0x0034E7B3 - 0x0034E800 (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E7B3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E7B3: ;
    ecx = ebp + -108;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -168;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440964;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E7BB
 * Original: 0x0034E7BB - 0x0034E800 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E7BB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E7BB: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -168;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440964;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E7C3
 * Original: 0x0034E7C3 - 0x0034E800 (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E7C3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E7C3: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -168;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440964;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E7CB
 * Original: 0x0034E7CB - 0x0034E800 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E7CB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E7CB: ;
    ecx = ebp + -124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -168;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440964;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E7D3
 * Original: 0x0034E7D3 - 0x0034E800 (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E7D3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E7D3: ;
    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -168;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440964;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E7DB
 * Original: 0x0034E7DB - 0x0034E800 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E7DB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E7DB: ;
    ecx = ebp + -168;
    g_seh_ebp = ebp; sub_00033860(); return; /* tail jmp 0x00033860 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440964;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E7E6
 * Original: 0x0034E7E6 - 0x0034E800 (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E7E6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E7E6: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440964;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034E800
 * Original: 0x0034E800 - 0x0034E808 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E800(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E800: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034E808
 * Original: 0x0034E808 - 0x0034E820 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E808(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E808: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4409BC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E820
 * Original: 0x0034E820 - 0x0034E828 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E820: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_000542B0(); return; /* tail jmp 0x000542B0 */

}

/**
 * sub_0034E840
 * Original: 0x0034E840 - 0x0034E848 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E840: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

}

/**
 * sub_0034E848
 * Original: 0x0034E848 - 0x0034E910 (200 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E848(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E848: ;
    ecx = ebp + -240;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -224;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -260);
    eax = eax & 1;
    if ((eax == 0)) goto loc_0034E87F; /* je: equal / zero */

loc_0034E86D: ;
    MEM32(ebp + -260) = MEM32(ebp + -260) & 0xFFFFFFFEu;
    ecx = ebp + -240;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_0034E87F: ;
    esp += 4; return; /* ret */

    ecx = ebp + -240;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E853
 * Original: 0x0034E853 - 0x0034E910 (189 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E853(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E853: ;
    ecx = ebp + -224;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -260);
    eax = eax & 1;
    if ((eax == 0)) goto loc_0034E87F; /* je: equal / zero */

loc_0034E86D: ;
    MEM32(ebp + -260) = MEM32(ebp + -260) & 0xFFFFFFFEu;
    ecx = ebp + -240;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_0034E87F: ;
    esp += 4; return; /* ret */

    ecx = ebp + -240;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E85E
 * Original: 0x0034E85E - 0x0034E910 (178 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E85E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E85E: ;
    eax = MEM32(ebp + -260);
    eax = eax & 1;
    if ((eax == 0)) goto loc_0034E87F; /* je: equal / zero */

loc_0034E86D: ;
    MEM32(ebp + -260) = MEM32(ebp + -260) & 0xFFFFFFFEu;
    ecx = ebp + -240;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_0034E87F: ;
    esp += 4; return; /* ret */

    ecx = ebp + -240;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E880
 * Original: 0x0034E880 - 0x0034E910 (144 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E880(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E880: ;
    ecx = ebp + -224;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -240;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E88B
 * Original: 0x0034E88B - 0x0034E910 (133 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E88B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E88B: ;
    ecx = ebp + -240;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E896
 * Original: 0x0034E896 - 0x0034E910 (122 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E896(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E896: ;
    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E8A1
 * Original: 0x0034E8A1 - 0x0034E910 (111 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E8A1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E8A1: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E8A9
 * Original: 0x0034E8A9 - 0x0034E910 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E8A9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E8A9: ;
    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E8B4
 * Original: 0x0034E8B4 - 0x0034E910 (92 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E8B4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E8B4: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E8BC
 * Original: 0x0034E8BC - 0x0034E910 (84 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E8BC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E8BC: ;
    ecx = ebp + -208;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E8C7
 * Original: 0x0034E8C7 - 0x0034E910 (73 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E8C7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E8C7: ;
    ecx = ebp + -176;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E8D2
 * Original: 0x0034E8D2 - 0x0034E910 (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E8D2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E8D2: ;
    eax = MEM32(ebp + -244);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -252);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E8E5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E8E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E8E9
 * Original: 0x0034E8E9 - 0x0034E910 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E8E9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E8E9: ;
    ecx = ebp + -144;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E8F4
 * Original: 0x0034E8F4 - 0x0034E910 (28 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E8F4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E8F4: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440A74;
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
 * sub_0034E910
 * Original: 0x0034E910 - 0x0034E91B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E910(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E910: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00055ED0(); return; /* tail jmp 0x00055ED0 */

}

/**
 * sub_0034E930
 * Original: 0x0034E930 - 0x0034E941 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E930: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034E93Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034E93D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0034E950
 * Original: 0x0034E950 - 0x0034E958 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E950(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E950: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

}

/**
 * sub_0034E958
 * Original: 0x0034E958 - 0x0034E970 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E958(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E958: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440AE8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E970
 * Original: 0x0034E970 - 0x0034E978 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E970: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E990
 * Original: 0x0034E990 - 0x0034E998 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E990(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E990: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

}

/**
 * sub_0034E9B0
 * Original: 0x0034E9B0 - 0x0034E9B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E9B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E9B0: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E9D0
 * Original: 0x0034E9D0 - 0x0034E9D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E9D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E9D0: ;
    ecx = ebp + -88;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E9D8
 * Original: 0x0034E9D8 - 0x0034E9F0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E9D8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E9D8: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440BA4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034E9F0
 * Original: 0x0034E9F0 - 0x0034E9FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E9F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E9F0: ;
    ecx = ebp + -192;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034E9FB
 * Original: 0x0034E9FB - 0x0034EA10 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034E9FB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034E9FB: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440BD0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EA10
 * Original: 0x0034EA10 - 0x0034EA18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EA10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EA10: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034EA18
 * Original: 0x0034EA18 - 0x0034EA30 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EA18(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EA18: ;
    ecx = ebp + 0x30;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440BFC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EA30
 * Original: 0x0034EA30 - 0x0034EA38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EA30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EA30: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034EA38
 * Original: 0x0034EA38 - 0x0034EA50 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EA38(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EA38: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x440C54;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EA50
 * Original: 0x0034EA50 - 0x0034EA6D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EA50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EA50: ;
    eax = MEM32(ebp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA0);
    eax = eax + MEM32(0x48D840);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034EA69u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034EA69: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0034EA80
 * Original: 0x0034EA80 - 0x0034EA9D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EA80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EA80: ;
    eax = MEM32(ebp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x9C);
    eax = eax + MEM32(0x48D83C);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034EA99u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034EA99: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0034EAB0
 * Original: 0x0034EAB0 - 0x0034EAB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EAB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EAB0: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0005E780(); return; /* tail jmp 0x0005E780 */

}

/**
 * sub_0034EAB8
 * Original: 0x0034EAB8 - 0x0034EAE0 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EAB8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EAB8: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_000606B0(); return; /* tail jmp 0x000606B0 */

    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x1D90;
    g_seh_ebp = ebp; sub_0018B460(); return; /* tail jmp 0x0018B460 */

    eax = 0x440CD0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EAC3
 * Original: 0x0034EAC3 - 0x0034EAE0 (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EAC3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EAC3: ;
    ecx = MEM32(ebp + -20);
    ecx = ecx + 0x1D90;
    g_seh_ebp = ebp; sub_0018B460(); return; /* tail jmp 0x0018B460 */

    eax = 0x440CD0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EAE0
 * Original: 0x0034EAE0 - 0x0034EAE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EAE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EAE0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0005E780(); return; /* tail jmp 0x0005E780 */

}

/**
 * sub_0034EAE8
 * Original: 0x0034EAE8 - 0x0034EB00 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EAE8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EAE8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_000606B0(); return; /* tail jmp 0x000606B0 */

    eax = 0x440CFC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EB00
 * Original: 0x0034EB00 - 0x0034EB11 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB00: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034EB0Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034EB0D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0034EB20
 * Original: 0x0034EB20 - 0x0034EB2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB20: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034EB2B
 * Original: 0x0034EB2B - 0x0034EBD0 (165 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB2B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB2B: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EB36
 * Original: 0x0034EB36 - 0x0034EBD0 (154 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB36(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB36: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EB41
 * Original: 0x0034EB41 - 0x0034EBD0 (143 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB41(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB41: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EB4C
 * Original: 0x0034EB4C - 0x0034EBD0 (132 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB4C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB4C: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EB57
 * Original: 0x0034EB57 - 0x0034EBD0 (121 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB57(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB57: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EB62
 * Original: 0x0034EB62 - 0x0034EBD0 (110 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB62(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB62: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EB6D
 * Original: 0x0034EB6D - 0x0034EBD0 (99 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB6D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB6D: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EB78
 * Original: 0x0034EB78 - 0x0034EBD0 (88 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB78(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB78: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EB83
 * Original: 0x0034EB83 - 0x0034EBD0 (77 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB83(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB83: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EB8E
 * Original: 0x0034EB8E - 0x0034EBD0 (66 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB8E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB8E: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EB99
 * Original: 0x0034EB99 - 0x0034EBD0 (55 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EB99(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EB99: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EBA4
 * Original: 0x0034EBA4 - 0x0034EBD0 (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EBA4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EBA4: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EBAF
 * Original: 0x0034EBAF - 0x0034EBD0 (33 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EBAF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EBAF: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EBBA
 * Original: 0x0034EBBA - 0x0034EBD0 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EBBA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EBBA: ;
    ecx = ebp + -1124;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440DB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EBD0
 * Original: 0x0034EBD0 - 0x0034EBD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EBD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EBD0: ;
    ecx = ebp + -92;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034EBD8
 * Original: 0x0034EBD8 - 0x0034EC10 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EBD8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EBD8: ;
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

    eax = 0x440E00;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EBE0
 * Original: 0x0034EBE0 - 0x0034EC10 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EBE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EBE0: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440E00;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EBE8
 * Original: 0x0034EBE8 - 0x0034EC10 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EBE8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EBE8: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440E00;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EBF0
 * Original: 0x0034EBF0 - 0x0034EC10 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EBF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EBF0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440E00;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EBF8
 * Original: 0x0034EBF8 - 0x0034EC10 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EBF8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EBF8: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440E00;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EC10
 * Original: 0x0034EC10 - 0x0034EC1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC10: ;
    ecx = ebp + -336;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

}

/**
 * sub_0034EC1B
 * Original: 0x0034EC1B - 0x0034ECE0 (197 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC1B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC1B: ;
    ecx = ebp + -592;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -576;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -432;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -528;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -496;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -400;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -464;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -560;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC26
 * Original: 0x0034EC26 - 0x0034ECE0 (186 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC26(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC26: ;
    ecx = ebp + -576;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -432;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -528;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -496;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -400;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -464;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -560;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC31
 * Original: 0x0034EC31 - 0x0034ECE0 (175 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC31(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC31: ;
    ecx = ebp + -432;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -528;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -496;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -400;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -464;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -560;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC3C
 * Original: 0x0034EC3C - 0x0034ECE0 (164 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC3C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC3C: ;
    ecx = ebp + -528;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -496;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -400;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -464;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -560;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC47
 * Original: 0x0034EC47 - 0x0034ECE0 (153 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC47(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC47: ;
    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -496;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -400;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -464;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -560;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC52
 * Original: 0x0034EC52 - 0x0034ECE0 (142 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC52(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC52: ;
    ecx = ebp + -496;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -400;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -464;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -560;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC5D
 * Original: 0x0034EC5D - 0x0034ECE0 (131 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC5D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC5D: ;
    ecx = ebp + -400;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -464;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -560;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC68
 * Original: 0x0034EC68 - 0x0034ECE0 (120 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC68(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC68: ;
    ecx = ebp + -464;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -560;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC73
 * Original: 0x0034EC73 - 0x0034ECE0 (109 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC73(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC73: ;
    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -560;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC7E
 * Original: 0x0034EC7E - 0x0034ECE0 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC7E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC7E: ;
    ecx = ebp + -560;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC89
 * Original: 0x0034EC89 - 0x0034ECE0 (87 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC89(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC89: ;
    ecx = ebp + -544;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC94
 * Original: 0x0034EC94 - 0x0034ECE0 (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC94(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC94: ;
    ecx = ebp + -512;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034EC9F
 * Original: 0x0034EC9F - 0x0034ECE0 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EC9F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EC9F: ;
    ecx = ebp + -480;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034ECAA
 * Original: 0x0034ECAA - 0x0034ECE0 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ECAA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ECAA: ;
    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034ECB5
 * Original: 0x0034ECB5 - 0x0034ECE0 (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ECB5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ECB5: ;
    ecx = ebp + -416;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034ECC0
 * Original: 0x0034ECC0 - 0x0034ECE0 (32 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ECC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ECC0: ;
    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440EA4;
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
 * sub_0034ECE0
 * Original: 0x0034ECE0 - 0x0034ECE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ECE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ECE0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0002E3D0(); return; /* tail jmp 0x0002E3D0 */

}

/**
 * sub_0034ED00
 * Original: 0x0034ED00 - 0x0034ED08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ED00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ED00: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00075970(); return; /* tail jmp 0x00075970 */

}

/**
 * sub_0034ED20
 * Original: 0x0034ED20 - 0x0034ED28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ED20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ED20: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_00066A60(); return; /* tail jmp 0x00066A60 */

}

/**
 * sub_0034ED40
 * Original: 0x0034ED40 - 0x0034ED4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ED40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ED40: ;
    ecx = ebp + -400;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034ED4B
 * Original: 0x0034ED4B - 0x0034EDB0 (101 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ED4B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ED4B: ;
    ecx = ebp + -320;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -288;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -336;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440F6C;
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
 * sub_0034ED56
 * Original: 0x0034ED56 - 0x0034EDB0 (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ED56(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ED56: ;
    ecx = ebp + -352;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -288;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -336;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440F6C;
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
 * sub_0034ED61
 * Original: 0x0034ED61 - 0x0034EDB0 (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ED61(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ED61: ;
    ecx = ebp + -288;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -336;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440F6C;
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
 * sub_0034ED6C
 * Original: 0x0034ED6C - 0x0034EDB0 (68 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ED6C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ED6C: ;
    ecx = ebp + -384;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -336;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440F6C;
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
 * sub_0034ED77
 * Original: 0x0034ED77 - 0x0034EDB0 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ED77(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ED77: ;
    ecx = ebp + -368;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -336;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440F6C;
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
 * sub_0034ED82
 * Original: 0x0034ED82 - 0x0034EDB0 (46 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ED82(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ED82: ;
    ecx = ebp + -336;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440F6C;
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
 * sub_0034ED8D
 * Original: 0x0034ED8D - 0x0034EDB0 (35 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034ED8D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034ED8D: ;
    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440F6C;
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
 * sub_0034EDB0
 * Original: 0x0034EDB0 - 0x0034EDB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EDB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EDB0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000686C0(); return; /* tail jmp 0x000686C0 */

}

/**
 * sub_0034EDD0
 * Original: 0x0034EDD0 - 0x0034EDD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EDD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EDD0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034EDD8
 * Original: 0x0034EDD8 - 0x0034EDF0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EDD8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EDD8: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x440FE8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EDF0
 * Original: 0x0034EDF0 - 0x0034EDF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EDF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EDF0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034EDF8
 * Original: 0x0034EDF8 - 0x0034EE20 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EDF8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EDF8: ;
    eax = MEM32(ebp + -52);
    eax = eax & 1;
    if ((eax == 0)) goto loc_0034EE10; /* je: equal / zero */

loc_0034EE04: ;
    MEM32(ebp + -52) = MEM32(ebp + -52) & 0xFFFFFFFEu;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_0034EE10: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EE20
 * Original: 0x0034EE20 - 0x0034EE31 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EE20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EE20: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034EE2Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034EE2D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0034EE40
 * Original: 0x0034EE40 - 0x0034EE48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EE40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EE40: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00069F40(); return; /* tail jmp 0x00069F40 */

}

/**
 * sub_0034EE48
 * Original: 0x0034EE48 - 0x0034EE60 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EE48(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EE48: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

    eax = 0x441064;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EE60
 * Original: 0x0034EE60 - 0x0034EE68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EE60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EE60: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_0034EE80
 * Original: 0x0034EE80 - 0x0034EE88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EE80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EE80: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_0034EE88
 * Original: 0x0034EE88 - 0x0034EEC0 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EE88(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EE88: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x194;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

    eax = 0x4410B4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4410E0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EEA0
 * Original: 0x0034EEA0 - 0x0034EEC0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EEA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EEA0: ;
    ecx = ebp + -32;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4410E0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EEA8
 * Original: 0x0034EEA8 - 0x0034EEC0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EEA8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EEA8: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4410E0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EEC0
 * Original: 0x0034EEC0 - 0x0034EEC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EEC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EEC0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034EEC8
 * Original: 0x0034EEC8 - 0x0034EEE0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EEC8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EEC8: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x44110C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EEE0
 * Original: 0x0034EEE0 - 0x0034EEEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EEE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EEE0: ;
    ecx = ebp + -140;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034EEEB
 * Original: 0x0034EEEB - 0x0034EF10 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EEEB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EEEB: ;
    ecx = ebp + -124;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x441140;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034EEF3
 * Original: 0x0034EEF3 - 0x0034EF10 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EEF3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EEF3: ;
    ecx = ebp + -132;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x441140;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034EF10
 * Original: 0x0034EF10 - 0x0034EF1E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EF10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EF10: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1B0;
    g_seh_ebp = ebp; sub_0006EC00(); return; /* tail jmp 0x0006EC00 */

}

/**
 * sub_0034EF30
 * Original: 0x0034EF30 - 0x0034EF38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EF30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EF30: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034EF38
 * Original: 0x0034EF38 - 0x0034EF60 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EF38(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EF38: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4411A0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EF40
 * Original: 0x0034EF40 - 0x0034EF60 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EF40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EF40: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4411A0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EF48
 * Original: 0x0034EF48 - 0x0034EF60 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EF48(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EF48: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4411A0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EF60
 * Original: 0x0034EF60 - 0x0034EF68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EF60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EF60: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034EF68
 * Original: 0x0034EF68 - 0x0034EF80 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EF68(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EF68: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4411F8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EF80
 * Original: 0x0034EF80 - 0x0034EF88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EF80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EF80: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034EF88
 * Original: 0x0034EF88 - 0x0034EFA0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EF88(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EF88: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x441224;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EFA0
 * Original: 0x0034EFA0 - 0x0034EFAE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EFA0(void)
{

loc_0034EFA0: ;
    eax = MEM32(0x498DD0);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x498DD0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0034EFC0
 * Original: 0x0034EFC0 - 0x0034EFCB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EFC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EFC0: ;
    ecx = ebp + -556;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_0034EFCB
 * Original: 0x0034EFCB - 0x0034EFF0 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EFCB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EFCB: ;
    ecx = ebp + -600;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -532;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x44127C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EFD6
 * Original: 0x0034EFD6 - 0x0034EFF0 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EFD6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EFD6: ;
    ecx = ebp + -532;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x44127C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034EFF0
 * Original: 0x0034EFF0 - 0x0034EFF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034EFF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034EFF0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_0034F010
 * Original: 0x0034F010 - 0x0034F01E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F010(void)
{

loc_0034F010: ;
    eax = MEM32(0x498E80);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x498E80) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0034F01E
 * Original: 0x0034F01E - 0x0034F040 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F01E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F01E: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4412D4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034F026
 * Original: 0x0034F026 - 0x0034F040 (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F026(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F026: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4412D4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

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
 * sub_0034F040
 * Original: 0x0034F040 - 0x0034F04E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F040(void)
{

loc_0034F040: ;
    eax = MEM32(0x49954C);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x49954C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0034F060
 * Original: 0x0034F060 - 0x0034F068 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F060: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034F068
 * Original: 0x0034F068 - 0x0034F080 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F068(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F068: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x441324;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F080
 * Original: 0x0034F080 - 0x0034F088 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F080(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F080: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034F088
 * Original: 0x0034F088 - 0x0034F0A0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F088(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F088: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x441350;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F0A0
 * Original: 0x0034F0A0 - 0x0034F0A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F0A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F0A0: ;
    ecx = MEM32(ebp + -40);
    g_seh_ebp = ebp; sub_00026B60(); return; /* tail jmp 0x00026B60 */

}

/**
 * sub_0034F0C0
 * Original: 0x0034F0C0 - 0x0034F0C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F0C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F0C0: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034F0E0
 * Original: 0x0034F0E0 - 0x0034F0E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F0E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F0E0: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034F100
 * Original: 0x0034F100 - 0x0034F108 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F100: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034F120
 * Original: 0x0034F120 - 0x0034F128 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F120: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034F140
 * Original: 0x0034F140 - 0x0034F148 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F140: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034F148
 * Original: 0x0034F148 - 0x0034F160 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F148(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F148: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    eax = 0x441430;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F160
 * Original: 0x0034F160 - 0x0034F168 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F160: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034F180
 * Original: 0x0034F180 - 0x0034F188 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F180: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00026B60(); return; /* tail jmp 0x00026B60 */

}

/**
 * sub_0034F1A0
 * Original: 0x0034F1A0 - 0x0034F1A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F1A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F1A0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034F1A8
 * Original: 0x0034F1A8 - 0x0034F1C0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F1A8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F1A8: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4414A4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F1C0
 * Original: 0x0034F1C0 - 0x0034F1CE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F1C0(void)
{

loc_0034F1C0: ;
    eax = MEM32(0x49970C);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x49970C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0034F1E0
 * Original: 0x0034F1E0 - 0x0034F1EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F1E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F1E0: ;
    ecx = ebp + -140;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034F1EB
 * Original: 0x0034F1EB - 0x0034F200 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F1EB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F1EB: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x4414F4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F200
 * Original: 0x0034F200 - 0x0034F208 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F200: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0007BEF0(); return; /* tail jmp 0x0007BEF0 */

}

/**
 * sub_0034F220
 * Original: 0x0034F220 - 0x0034F228 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F220(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F220: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0002E3D0(); return; /* tail jmp 0x0002E3D0 */

}

/**
 * sub_0034F240
 * Original: 0x0034F240 - 0x0034F248 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F240: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_0034F248
 * Original: 0x0034F248 - 0x0034F260 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F248(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F248: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x441568;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F260
 * Original: 0x0034F260 - 0x0034F268 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F260: ;
    ecx = MEM32(ebp + -116);
    g_seh_ebp = ebp; sub_00075970(); return; /* tail jmp 0x00075970 */

}

/**
 * sub_0034F280
 * Original: 0x0034F280 - 0x0034F288 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F280: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0007CDF0(); return; /* tail jmp 0x0007CDF0 */

}

/**
 * sub_0034F288
 * Original: 0x0034F288 - 0x0034F2B0 (40 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F288(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F288: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2A8;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2D0;
    g_seh_ebp = ebp; sub_0007CF40(); return; /* tail jmp 0x0007CF40 */

    eax = 0x4415C0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F296
 * Original: 0x0034F296 - 0x0034F2B0 (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F296(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F296: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2D0;
    g_seh_ebp = ebp; sub_0007CF40(); return; /* tail jmp 0x0007CF40 */

    eax = 0x4415C0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F2B0
 * Original: 0x0034F2B0 - 0x0034F2B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F2B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F2B0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0007CDF0(); return; /* tail jmp 0x0007CDF0 */

}

/**
 * sub_0034F2D0
 * Original: 0x0034F2D0 - 0x0034F2D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F2D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F2D0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0002E3D0(); return; /* tail jmp 0x0002E3D0 */

}

/**
 * sub_0034F2F0
 * Original: 0x0034F2F0 - 0x0034F301 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F2F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F2F0: ;
    eax = MEM32(ebp + -52);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -48);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0034F2FDu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0034F2FD: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0034F301
 * Original: 0x0034F301 - 0x0034F320 (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F301(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F301: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x441678;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F309
 * Original: 0x0034F309 - 0x0034F320 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F309(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F309: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x441678;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F320
 * Original: 0x0034F320 - 0x0034F328 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F320(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F320: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_0034F328
 * Original: 0x0034F328 - 0x0034F350 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F328(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F328: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4416B4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F330
 * Original: 0x0034F330 - 0x0034F350 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F330: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4416B4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F338
 * Original: 0x0034F338 - 0x0034F350 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F338(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F338: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4416B4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0034F350
 * Original: 0x0034F350 - 0x0034F358 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034F350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034F350: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}
