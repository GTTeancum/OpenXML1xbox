/**
 * X-Men Legends - Recompiled code chunk 88
 * Functions: 250 (0x00351580 - 0x00352764)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00351580
 * Original: 0x00351580 - 0x00351596 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351580(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351580: ;
    eax = MEM32(ebp + -20);
    eax = eax + 0x498;
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351592u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351592: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003515A0
 * Original: 0x003515A0 - 0x003515C0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003515A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003515A0: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -84;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x443DC8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003515A8
 * Original: 0x003515A8 - 0x003515C0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003515A8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003515A8: ;
    ecx = ebp + -84;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x443DC8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003515C0
 * Original: 0x003515C0 - 0x003515CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003515C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003515C0: ;
    ecx = ebp + -476;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

}

/**
 * sub_003515CB
 * Original: 0x003515CB - 0x00351610 (69 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003515CB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003515CB: ;
    ecx = ebp + -444;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    ecx = ebp + -476;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -472;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    ecx = ebp + -476;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -456;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x443E14;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003515D6
 * Original: 0x003515D6 - 0x00351610 (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003515D6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003515D6: ;
    ecx = ebp + -476;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -472;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    ecx = ebp + -476;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -456;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x443E14;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003515E1
 * Original: 0x003515E1 - 0x00351610 (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003515E1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003515E1: ;
    ecx = ebp + -472;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    ecx = ebp + -476;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -456;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x443E14;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003515EC
 * Original: 0x003515EC - 0x00351610 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003515EC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003515EC: ;
    ecx = ebp + -476;
    g_seh_ebp = ebp; sub_000A2AC0(); return; /* tail jmp 0x000A2AC0 */

    ecx = ebp + -456;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x443E14;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003515F7
 * Original: 0x003515F7 - 0x00351610 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003515F7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003515F7: ;
    ecx = ebp + -456;
    g_seh_ebp = ebp; sub_0002E310(); return; /* tail jmp 0x0002E310 */

    eax = 0x443E14;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351610
 * Original: 0x00351610 - 0x00351618 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351610(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351610: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00117250(); return; /* tail jmp 0x00117250 */

}

/**
 * sub_00351618
 * Original: 0x00351618 - 0x00351670 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351618(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351618: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    PUSH32(esp, 0x1173C0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x388);
    eax = MEM32(ebp + -16);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00351646u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00351646: ;
    esp += 4; return; /* ret */

    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351623
 * Original: 0x00351623 - 0x00351670 (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351623(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351623: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    PUSH32(esp, 0x1173C0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x388);
    eax = MEM32(ebp + -16);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00351646u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00351646: ;
    esp += 4; return; /* ret */

    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035162E
 * Original: 0x0035162E - 0x00351670 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035162E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035162E: ;
    PUSH32(esp, 0x1173C0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x388);
    eax = MEM32(ebp + -16);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00351646u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00351646: ;
    esp += 4; return; /* ret */

    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351647
 * Original: 0x00351647 - 0x00351670 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351647(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351647: ;
    PUSH32(esp, 0x1A59F0);
    PUSH32(esp, 8);
    PUSH32(esp, 4);
    eax = MEM32(ebp + -16);
    eax = eax + 0xE38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0035165Eu); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_0035165E: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351670
 * Original: 0x00351670 - 0x00351678 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351670(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351670: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00117250(); return; /* tail jmp 0x00117250 */

}

/**
 * sub_00351678
 * Original: 0x00351678 - 0x003516C0 (72 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351678(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351678: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    PUSH32(esp, 0x1173C0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x388);
    eax = MEM32(ebp + -16);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003516A6u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_003516A6: ;
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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351683
 * Original: 0x00351683 - 0x003516C0 (61 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351683(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351683: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    PUSH32(esp, 0x1173C0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x388);
    eax = MEM32(ebp + -16);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003516A6u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_003516A6: ;
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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035168E
 * Original: 0x0035168E - 0x003516C0 (50 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035168E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035168E: ;
    PUSH32(esp, 0x1173C0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x388);
    eax = MEM32(ebp + -16);
    eax = eax + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003516A6u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_003516A6: ;
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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003516C0
 * Original: 0x003516C0 - 0x003516C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003516C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003516C0: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_003516E0
 * Original: 0x003516E0 - 0x003516EE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003516E0(void)
{

loc_003516E0: ;
    eax = MEM32(0x5016BC);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x5016BC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00351700
 * Original: 0x00351700 - 0x00351708 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351700(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351700: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001173B0(); return; /* tail jmp 0x001173B0 */

}

/**
 * sub_00351720
 * Original: 0x00351720 - 0x00351728 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351720(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351720: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351728
 * Original: 0x00351728 - 0x00351740 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351728(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351728: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x443F50;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351740
 * Original: 0x00351740 - 0x00351748 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351740(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351740: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351748
 * Original: 0x00351748 - 0x00351770 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351748(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351748: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    if ((eax == 0)) goto loc_00351760; /* je: equal / zero */

loc_00351754: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_00351760: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351770
 * Original: 0x00351770 - 0x00351778 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351770: ;
    ecx = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_0011A880(); return; /* tail jmp 0x0011A880 */

}

/**
 * sub_00351790
 * Original: 0x00351790 - 0x00351798 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351790(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351790: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0011BD50(); return; /* tail jmp 0x0011BD50 */

}

/**
 * sub_003517B0
 * Original: 0x003517B0 - 0x003517B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003517B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003517B0: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_003517B8
 * Original: 0x003517B8 - 0x003517E0 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003517B8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003517B8: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    if ((eax == 0)) goto loc_003517D0; /* je: equal / zero */

loc_003517C4: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_003517D0: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003517E0
 * Original: 0x003517E0 - 0x003517E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003517E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003517E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0011BD50(); return; /* tail jmp 0x0011BD50 */

}

/**
 * sub_003517E8
 * Original: 0x003517E8 - 0x00351800 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003517E8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003517E8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444048;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351800
 * Original: 0x00351800 - 0x0035180E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351800(void)
{

loc_00351800: ;
    eax = MEM32(0x5016E8);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x5016E8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00351820
 * Original: 0x00351820 - 0x00351828 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351820: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0011CE80(); return; /* tail jmp 0x0011CE80 */

}

/**
 * sub_00351828
 * Original: 0x00351828 - 0x00351840 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351828(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351828: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444098;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351840
 * Original: 0x00351840 - 0x00351848 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351840: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351848
 * Original: 0x00351848 - 0x00351870 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351848(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351848: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    if ((eax == 0)) goto loc_00351860; /* je: equal / zero */

loc_00351854: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_00351860: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351870
 * Original: 0x00351870 - 0x00351878 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351870: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351878
 * Original: 0x00351878 - 0x00351890 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351878(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351878: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44411C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351890
 * Original: 0x00351890 - 0x00351898 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351890: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_003518B0
 * Original: 0x003518B0 - 0x003518B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003518B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003518B0: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_003518B8
 * Original: 0x003518B8 - 0x00351900 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003518B8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003518B8: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0011DD10(); return; /* tail jmp 0x0011DD10 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4441A0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0011DD10(); return; /* tail jmp 0x0011DD10 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4441CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003518C0
 * Original: 0x003518C0 - 0x00351900 (64 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003518C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003518C0: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4441A0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0011DD10(); return; /* tail jmp 0x0011DD10 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4441CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003518CB
 * Original: 0x003518CB - 0x00351900 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003518CB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003518CB: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4441A0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0011DD10(); return; /* tail jmp 0x0011DD10 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4441CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003518E0
 * Original: 0x003518E0 - 0x00351900 (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003518E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003518E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0011DD10(); return; /* tail jmp 0x0011DD10 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4441CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003518E8
 * Original: 0x003518E8 - 0x00351900 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003518E8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003518E8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4441CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351900
 * Original: 0x00351900 - 0x00351908 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351900: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351908
 * Original: 0x00351908 - 0x00351930 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351908(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351908: ;
    eax = MEM32(ebp + -20);
    eax = eax & 1;
    if ((eax == 0)) goto loc_00351920; /* je: equal / zero */

loc_00351914: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0xFFFFFFFEu;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_00351920: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351930
 * Original: 0x00351930 - 0x00351941 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351930: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035193Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0035193D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00351950
 * Original: 0x00351950 - 0x00351961 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351950(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351950: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0035195Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_0035195D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00351961
 * Original: 0x00351961 - 0x00351990 (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351961(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351961: ;
    eax = MEM32(ebp + -28);
    eax = eax & 1;
    if ((eax == 0)) goto loc_00351979; /* je: equal / zero */

loc_0035196D: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0xFFFFFFFEu;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_00351979: ;
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

}

/**
 * sub_00351990
 * Original: 0x00351990 - 0x00351998 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351990(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351990: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0011DCE0(); return; /* tail jmp 0x0011DCE0 */

}

/**
 * sub_003519B0
 * Original: 0x003519B0 - 0x003519B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003519B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003519B0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0011DCE0(); return; /* tail jmp 0x0011DCE0 */

}

/**
 * sub_003519B8
 * Original: 0x003519B8 - 0x003519D0 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003519B8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003519B8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_0011E1B0(); return; /* tail jmp 0x0011E1B0 */

    eax = 0x4442A0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003519D0
 * Original: 0x003519D0 - 0x003519DE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003519D0(void)
{

loc_003519D0: ;
    eax = MEM32(0x502878);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x502878) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003519F0
 * Original: 0x003519F0 - 0x003519F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003519F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003519F0: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00351A10
 * Original: 0x00351A10 - 0x00351A18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351A10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351A10: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00351A18
 * Original: 0x00351A18 - 0x00351A40 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351A18(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351A18: ;
    ecx = ebp + -80;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x444340;
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
 * sub_00351A20
 * Original: 0x00351A20 - 0x00351A40 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351A20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351A20: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x444340;
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
 * sub_00351A40
 * Original: 0x00351A40 - 0x00351A51 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351A40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351A40: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351A4Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351A4D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00351A60
 * Original: 0x00351A60 - 0x00351A68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351A60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351A60: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00120E60(); return; /* tail jmp 0x00120E60 */

}

/**
 * sub_00351A68
 * Original: 0x00351A68 - 0x00351AA0 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351A68(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351A68: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00122850(); return; /* tail jmp 0x00122850 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x120;
    g_seh_ebp = ebp; sub_00121960(); return; /* tail jmp 0x00121960 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1A0;
    g_seh_ebp = ebp; sub_00122860(); return; /* tail jmp 0x00122860 */

    eax = 0x44440C;
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
 * sub_00351A73
 * Original: 0x00351A73 - 0x00351AA0 (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351A73(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351A73: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x120;
    g_seh_ebp = ebp; sub_00121960(); return; /* tail jmp 0x00121960 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1A0;
    g_seh_ebp = ebp; sub_00122860(); return; /* tail jmp 0x00122860 */

    eax = 0x44440C;
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
 * sub_00351A81
 * Original: 0x00351A81 - 0x00351AA0 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351A81(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351A81: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1A0;
    g_seh_ebp = ebp; sub_00122860(); return; /* tail jmp 0x00122860 */

    eax = 0x44440C;
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
 * sub_00351AA0
 * Original: 0x00351AA0 - 0x00351AAE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351AA0(void)
{

loc_00351AA0: ;
    eax = MEM32(0x50321C);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x50321C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00351AC0
 * Original: 0x00351AC0 - 0x00351ACB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351AC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351AC0: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00351AC9u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_00351AC9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00351AE0
 * Original: 0x00351AE0 - 0x00351AE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351AE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351AE0: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351AE8
 * Original: 0x00351AE8 - 0x00351B10 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351AE8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351AE8: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    if ((eax == 0)) goto loc_00351B00; /* je: equal / zero */

loc_00351AF4: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_00351B00: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351B10
 * Original: 0x00351B10 - 0x00351B1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351B10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351B10: ;
    ecx = ebp + -1048;
    g_seh_ebp = ebp; sub_00123E30(); return; /* tail jmp 0x00123E30 */

}

/**
 * sub_00351B1B
 * Original: 0x00351B1B - 0x00351B40 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351B1B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351B1B: ;
    ecx = ebp + -1056;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = MEM32(ebp + -1044);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00351B32u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_00351B32: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351B26
 * Original: 0x00351B26 - 0x00351B40 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351B26(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351B26: ;
    eax = MEM32(ebp + -1044);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00351B32u); RECOMP_ABI_CALL(0x001F4EB0u, sub_001F4EB0); /* call 0x001F4EB0 */

loc_00351B32: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351B40
 * Original: 0x00351B40 - 0x00351B48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351B40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351B40: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351B60
 * Original: 0x00351B60 - 0x00351B68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351B60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351B60: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351B80
 * Original: 0x00351B80 - 0x00351B8E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351B80(void)
{

loc_00351B80: ;
    eax = MEM32(0x508448);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x508448) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00351B8E
 * Original: 0x00351B8E - 0x00351BB0 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351B8E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351B8E: ;
    eax = MEM32(0x508448);
    eax = eax & 0xFFFFFFFDu;
    MEM32(0x508448) = eax;
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

}

/**
 * sub_00351BB0
 * Original: 0x00351BB0 - 0x00351BB8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351BB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351BB0: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351BD0
 * Original: 0x00351BD0 - 0x00351BD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351BD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351BD0: ;
    ecx = MEM32(ebp + -40);
    g_seh_ebp = ebp; sub_00125A70(); return; /* tail jmp 0x00125A70 */

}

/**
 * sub_00351BD8
 * Original: 0x00351BD8 - 0x00351BF0 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351BD8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351BD8: ;
    ecx = MEM32(ebp + -40);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x444578;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351BF0
 * Original: 0x00351BF0 - 0x00351BF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351BF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351BF0: ;
    ecx = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_00125A70(); return; /* tail jmp 0x00125A70 */

}

/**
 * sub_00351BF8
 * Original: 0x00351BF8 - 0x00351C10 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351BF8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351BF8: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4445A4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351C10
 * Original: 0x00351C10 - 0x00351C18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351C10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351C10: ;
    ecx = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_00125A70(); return; /* tail jmp 0x00125A70 */

}

/**
 * sub_00351C30
 * Original: 0x00351C30 - 0x00351C38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351C30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351C30: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00351C50
 * Original: 0x00351C50 - 0x00351C58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351C50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351C50: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00351C58
 * Original: 0x00351C58 - 0x00351C70 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351C58(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351C58: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x444740;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351C70
 * Original: 0x00351C70 - 0x00351C78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351C70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351C70: ;
    ecx = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_00125A70(); return; /* tail jmp 0x00125A70 */

}

/**
 * sub_00351C78
 * Original: 0x00351C78 - 0x00351C90 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351C78(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351C78: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x44476C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351C90
 * Original: 0x00351C90 - 0x00351C98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351C90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351C90: ;
    ecx = MEM32(ebp + -44);
    g_seh_ebp = ebp; sub_00126E70(); return; /* tail jmp 0x00126E70 */

}

/**
 * sub_00351C98
 * Original: 0x00351C98 - 0x00351CC0 (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351C98(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351C98: ;
    ecx = MEM32(ebp + -44);
    ecx = ecx + 0x2C;
    g_seh_ebp = ebp; sub_00125BF0(); return; /* tail jmp 0x00125BF0 */

    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4447A0;
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
 * sub_00351CA3
 * Original: 0x00351CA3 - 0x00351CC0 (29 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351CA3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351CA3: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4447A0;
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
 * sub_00351CC0
 * Original: 0x00351CC0 - 0x00351CC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351CC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351CC0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00126E70(); return; /* tail jmp 0x00126E70 */

}

/**
 * sub_00351CC8
 * Original: 0x00351CC8 - 0x00351CE0 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351CC8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351CC8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x2C;
    g_seh_ebp = ebp; sub_00125BF0(); return; /* tail jmp 0x00125BF0 */

    eax = 0x4447CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351CE0
 * Original: 0x00351CE0 - 0x00351CF1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351CE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351CE0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351CEDu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351CED: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00351D00
 * Original: 0x00351D00 - 0x00351D08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351D00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351D00: ;
    ecx = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_00126E70(); return; /* tail jmp 0x00126E70 */

}

/**
 * sub_00351D20
 * Original: 0x00351D20 - 0x00351D28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351D20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351D20: ;
    ecx = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_00126E70(); return; /* tail jmp 0x00126E70 */

}

/**
 * sub_00351D28
 * Original: 0x00351D28 - 0x00351D40 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351D28(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351D28: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x444864;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351D40
 * Original: 0x00351D40 - 0x00351D48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351D40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351D40: ;
    ecx = MEM32(ebp + -40);
    g_seh_ebp = ebp; sub_00126E70(); return; /* tail jmp 0x00126E70 */

}

/**
 * sub_00351D48
 * Original: 0x00351D48 - 0x00351D70 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351D48(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351D48: ;
    ecx = MEM32(ebp + -40);
    ecx = ecx + 0x2C;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = MEM32(ebp + -40);
    ecx = ecx + 0x3C;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4448C4;
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
 * sub_00351D53
 * Original: 0x00351D53 - 0x00351D70 (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351D53(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351D53: ;
    ecx = MEM32(ebp + -40);
    ecx = ecx + 0x3C;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4448C4;
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
 * sub_00351D70
 * Original: 0x00351D70 - 0x00351D78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351D70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351D70: ;
    ecx = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_00126E70(); return; /* tail jmp 0x00126E70 */

}

/**
 * sub_00351D78
 * Original: 0x00351D78 - 0x00351DA0 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351D78(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351D78: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x2C;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x3C;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4448F8;
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
 * sub_00351D83
 * Original: 0x00351D83 - 0x00351DA0 (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351D83(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351D83: ;
    ecx = MEM32(ebp + -28);
    ecx = ecx + 0x3C;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x4448F8;
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
 * sub_00351DA0
 * Original: 0x00351DA0 - 0x00351DB1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351DA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351DA0: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351DADu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351DAD: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00351DC0
 * Original: 0x00351DC0 - 0x00351DD1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351DC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351DC0: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351DCDu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351DCD: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00351DD1
 * Original: 0x00351DD1 - 0x00351E30 (95 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351DD1(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351DD1: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351DDEu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351DDE: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    MEM32(ebp + -40) = MEM32(ebp + -40) & 0xFFFFFFFEu;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_00351E1C: ;
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

}

/**
 * sub_00351DE2
 * Original: 0x00351DE2 - 0x00351E30 (78 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351DE2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351DE2: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351DEFu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351DEF: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    esp = esp + 8;
    esp += 4; return; /* ret */

    MEM32(ebp + -40) = MEM32(ebp + -40) & 0xFFFFFFFEu;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_00351E1C: ;
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

}

/**
 * sub_00351DF3
 * Original: 0x00351DF3 - 0x00351E30 (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351DF3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351DF3: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -32);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351E00u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351E00: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    MEM32(ebp + -40) = MEM32(ebp + -40) & 0xFFFFFFFEu;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_00351E1C: ;
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

}

/**
 * sub_00351E04
 * Original: 0x00351E04 - 0x00351E30 (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351E04(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351E04: ;
    eax = MEM32(ebp + -40);
    eax = eax & 1;
    if ((eax == 0)) goto loc_00351E1C; /* je: equal / zero */

loc_00351E10: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0xFFFFFFFEu;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

loc_00351E1C: ;
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

}

/**
 * sub_00351E30
 * Original: 0x00351E30 - 0x00351E38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351E30: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00351E50
 * Original: 0x00351E50 - 0x00351E58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351E50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351E50: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_00125B40(); return; /* tail jmp 0x00125B40 */

}

/**
 * sub_00351E58
 * Original: 0x00351E58 - 0x00351E80 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351E58(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351E58: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_00125B40(); return; /* tail jmp 0x00125B40 */

    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_00125B40(); return; /* tail jmp 0x00125B40 */

    eax = 0x444A98;
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
 * sub_00351E60
 * Original: 0x00351E60 - 0x00351E80 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351E60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351E60: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_00125B40(); return; /* tail jmp 0x00125B40 */

    eax = 0x444A98;
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
 * sub_00351E80
 * Original: 0x00351E80 - 0x00351E91 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351E80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351E80: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -16);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351E8Du); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351E8D: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00351EA0
 * Original: 0x00351EA0 - 0x00351EA8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351EA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351EA0: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

}

/**
 * sub_00351EA8
 * Original: 0x00351EA8 - 0x00351ED0 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351EA8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351EA8: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -48);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351EB5u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351EB5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    eax = 0x444AF0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351EB9
 * Original: 0x00351EB9 - 0x00351ED0 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351EB9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351EB9: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_00025BE0(); return; /* tail jmp 0x00025BE0 */

    eax = 0x444AF0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351ED0
 * Original: 0x00351ED0 - 0x00351ED8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351ED0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351ED0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351ED8
 * Original: 0x00351ED8 - 0x00351F10 (56 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351ED8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351ED8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444B78;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351EE3
 * Original: 0x00351EE3 - 0x00351F10 (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351EE3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351EE3: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444B78;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351EEE
 * Original: 0x00351EEE - 0x00351F10 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351EEE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351EEE: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444B78;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351EF9
 * Original: 0x00351EF9 - 0x00351F10 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351EF9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351EF9: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444B78;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351F10
 * Original: 0x00351F10 - 0x00351F18 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351F10: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351F18
 * Original: 0x00351F18 - 0x00351F40 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F18(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351F18: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444BB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351F20
 * Original: 0x00351F20 - 0x00351F40 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351F20: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444BB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351F28
 * Original: 0x00351F28 - 0x00351F40 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F28(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351F28: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444BB4;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351F40
 * Original: 0x00351F40 - 0x00351F48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351F40: ;
    ecx = ebp + -120;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351F48
 * Original: 0x00351F48 - 0x00351F70 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F48(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351F48: ;
    ecx = ebp + -124;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444BF0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351F50
 * Original: 0x00351F50 - 0x00351F70 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351F50: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444BF0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351F58
 * Original: 0x00351F58 - 0x00351F70 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F58(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351F58: ;
    ecx = ebp + -112;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444BF0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00351F70
 * Original: 0x00351F70 - 0x00351F7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351F70: ;
    ecx = ebp + -280;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351F90
 * Original: 0x00351F90 - 0x00351F98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351F90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351F90: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00149820(); return; /* tail jmp 0x00149820 */

}

/**
 * sub_00351FB0
 * Original: 0x00351FB0 - 0x00351FBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351FB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351FB0: ;
    ecx = ebp + -568;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00351FBB
 * Original: 0x00351FBB - 0x00351FF0 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351FBB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351FBB: ;
    ecx = ebp + -548;
    g_seh_ebp = ebp; sub_0012CEC0(); return; /* tail jmp 0x0012CEC0 */

    eax = MEM32(ebp + -556);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -560);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351FD9u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351FD9: ;
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

}

/**
 * sub_00351FC6
 * Original: 0x00351FC6 - 0x00351FF0 (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351FC6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351FC6: ;
    eax = MEM32(ebp + -556);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -560);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00351FD9u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00351FD9: ;
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

}

/**
 * sub_00351FF0
 * Original: 0x00351FF0 - 0x00351FF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00351FF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00351FF0: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352010
 * Original: 0x00352010 - 0x00352018 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352010(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352010: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352018
 * Original: 0x00352018 - 0x00352040 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352018(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352018: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

    eax = 0x444CC4;
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
 * sub_00352023
 * Original: 0x00352023 - 0x00352040 (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352023(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352023: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

    eax = 0x444CC4;
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
 * sub_00352040
 * Original: 0x00352040 - 0x00352048 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352040: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00149820(); return; /* tail jmp 0x00149820 */

}

/**
 * sub_00352048
 * Original: 0x00352048 - 0x00352060 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352048(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352048: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_0012E460(); return; /* tail jmp 0x0012E460 */

    eax = 0x444CF0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352060
 * Original: 0x00352060 - 0x0035206E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352060(void)
{

loc_00352060: ;
    eax = MEM32(0x5198B8);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x5198B8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00352080
 * Original: 0x00352080 - 0x00352088 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352080(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352080: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0012F2E0(); return; /* tail jmp 0x0012F2E0 */

}

/**
 * sub_00352088
 * Original: 0x00352088 - 0x003520A0 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352088(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352088: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444D6C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003520A0
 * Original: 0x003520A0 - 0x003520AE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003520A0(void)
{

loc_003520A0: ;
    eax = MEM32(0x519B70);
    eax = eax & 0xFFFFFFFEu;
    MEM32(0x519B70) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003520C0
 * Original: 0x003520C0 - 0x003520C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003520C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003520C0: ;
    ecx = ebp + -84;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_003520E0
 * Original: 0x003520E0 - 0x003520E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003520E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003520E0: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352100
 * Original: 0x00352100 - 0x00352108 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352100(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352100: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352120
 * Original: 0x00352120 - 0x00352128 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352120: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352128
 * Original: 0x00352128 - 0x00352150 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352128(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352128: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    if ((eax == 0)) goto loc_00352140; /* je: equal / zero */

loc_00352134: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_00352140: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352150
 * Original: 0x00352150 - 0x0035215B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352150(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352150: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x40;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_0035215B
 * Original: 0x0035215B - 0x00352190 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035215B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035215B: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x54;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x5C;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x68;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444E90;
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
 * sub_00352166
 * Original: 0x00352166 - 0x00352190 (42 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352166(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352166: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x5C;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x68;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444E90;
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
 * sub_00352171
 * Original: 0x00352171 - 0x00352190 (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352171(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352171: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x68;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444E90;
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
 * sub_00352190
 * Original: 0x00352190 - 0x00352198 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352190(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352190: ;
    ecx = ebp + -16;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352198
 * Original: 0x00352198 - 0x003521C0 (40 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352198(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352198: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444EC4;
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
 * sub_003521A0
 * Original: 0x003521A0 - 0x003521C0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003521A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003521A0: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444EC4;
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
 * sub_003521C0
 * Original: 0x003521C0 - 0x003521C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003521C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003521C0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_003521C8
 * Original: 0x003521C8 - 0x00352200 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003521C8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003521C8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444F00;
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

}

/**
 * sub_003521D3
 * Original: 0x003521D3 - 0x00352200 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003521D3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003521D3: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444F00;
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

}

/**
 * sub_003521DE
 * Original: 0x003521DE - 0x00352200 (34 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003521DE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003521DE: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x444F00;
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

}

/**
 * sub_00352200
 * Original: 0x00352200 - 0x00352208 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352200: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352208
 * Original: 0x00352208 - 0x00352230 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352208(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352208: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    if ((eax == 0)) goto loc_00352220; /* je: equal / zero */

loc_00352214: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_00352220: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352230
 * Original: 0x00352230 - 0x00352238 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352230(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352230: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352250
 * Original: 0x00352250 - 0x00352258 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352250(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352250: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352258
 * Original: 0x00352258 - 0x003522C0 (104 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352258(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352258: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x44;
    g_seh_ebp = ebp; sub_0012FFB0(); return; /* tail jmp 0x0012FFB0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44501C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352260
 * Original: 0x00352260 - 0x003522C0 (96 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352260: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x44;
    g_seh_ebp = ebp; sub_0012FFB0(); return; /* tail jmp 0x0012FFB0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44501C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352268
 * Original: 0x00352268 - 0x003522C0 (88 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352268(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352268: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x44;
    g_seh_ebp = ebp; sub_0012FFB0(); return; /* tail jmp 0x0012FFB0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44501C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352270
 * Original: 0x00352270 - 0x003522C0 (80 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352270: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x44;
    g_seh_ebp = ebp; sub_0012FFB0(); return; /* tail jmp 0x0012FFB0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44501C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035227B
 * Original: 0x0035227B - 0x003522C0 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035227B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035227B: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x44;
    g_seh_ebp = ebp; sub_0012FFB0(); return; /* tail jmp 0x0012FFB0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44501C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352286
 * Original: 0x00352286 - 0x003522C0 (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352286(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352286: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x44;
    g_seh_ebp = ebp; sub_0012FFB0(); return; /* tail jmp 0x0012FFB0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44501C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352291
 * Original: 0x00352291 - 0x003522C0 (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352291(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352291: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x44;
    g_seh_ebp = ebp; sub_0012FFB0(); return; /* tail jmp 0x0012FFB0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44501C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035229C
 * Original: 0x0035229C - 0x003522C0 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035229C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035229C: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44501C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003522A4
 * Original: 0x003522A4 - 0x003522C0 (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003522A4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003522A4: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44501C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003522AC
 * Original: 0x003522AC - 0x003522C0 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003522AC(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003522AC: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44501C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003522C0
 * Original: 0x003522C0 - 0x003522C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003522C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003522C0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00149820(); return; /* tail jmp 0x00149820 */

}

/**
 * sub_003522E0
 * Original: 0x003522E0 - 0x003522EB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003522E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003522E0: ;
    ecx = ebp + -1096;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_003522EB
 * Original: 0x003522EB - 0x00352350 (101 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003522EB(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003522EB: ;
    ecx = ebp + -1092;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -1100;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -1064;
    g_seh_ebp = ebp; sub_0012CEC0(); return; /* tail jmp 0x0012CEC0 */

    ecx = ebp + -1088;
    g_seh_ebp = ebp; sub_001322E0(); return; /* tail jmp 0x001322E0 */

    ecx = ebp + -1068;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -1084;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = MEM32(ebp + -1080);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -1044);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00352340u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00352340: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003522F6
 * Original: 0x003522F6 - 0x00352350 (90 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003522F6(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003522F6: ;
    ecx = ebp + -1100;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -1064;
    g_seh_ebp = ebp; sub_0012CEC0(); return; /* tail jmp 0x0012CEC0 */

    ecx = ebp + -1088;
    g_seh_ebp = ebp; sub_001322E0(); return; /* tail jmp 0x001322E0 */

    ecx = ebp + -1068;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -1084;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = MEM32(ebp + -1080);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -1044);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00352340u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00352340: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352301
 * Original: 0x00352301 - 0x00352350 (79 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352301(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352301: ;
    ecx = ebp + -1064;
    g_seh_ebp = ebp; sub_0012CEC0(); return; /* tail jmp 0x0012CEC0 */

    ecx = ebp + -1088;
    g_seh_ebp = ebp; sub_001322E0(); return; /* tail jmp 0x001322E0 */

    ecx = ebp + -1068;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -1084;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = MEM32(ebp + -1080);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -1044);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00352340u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00352340: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035230C
 * Original: 0x0035230C - 0x00352350 (68 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035230C(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035230C: ;
    ecx = ebp + -1088;
    g_seh_ebp = ebp; sub_001322E0(); return; /* tail jmp 0x001322E0 */

    ecx = ebp + -1068;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -1084;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = MEM32(ebp + -1080);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -1044);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00352340u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00352340: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352317
 * Original: 0x00352317 - 0x00352350 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352317(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352317: ;
    ecx = ebp + -1068;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = ebp + -1084;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = MEM32(ebp + -1080);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -1044);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00352340u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00352340: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352322
 * Original: 0x00352322 - 0x00352350 (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352322(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352322: ;
    ecx = ebp + -1084;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = MEM32(ebp + -1080);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -1044);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00352340u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00352340: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035232D
 * Original: 0x0035232D - 0x00352350 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035232D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035232D: ;
    eax = MEM32(ebp + -1080);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + -1044);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00352340u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00352340: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352350
 * Original: 0x00352350 - 0x00352358 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352350: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352358
 * Original: 0x00352358 - 0x00352380 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352358(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352358: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    if ((eax == 0)) goto loc_00352370; /* je: equal / zero */

loc_00352364: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_00352370: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352380
 * Original: 0x00352380 - 0x00352388 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352380(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352380: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352388
 * Original: 0x00352388 - 0x003523B0 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352388(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352388: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    if ((eax == 0)) goto loc_003523A0; /* je: equal / zero */

loc_00352394: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

loc_003523A0: ;
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003523B0
 * Original: 0x003523B0 - 0x003523B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003523B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003523B0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013A480(); return; /* tail jmp 0x0013A480 */

}

/**
 * sub_003523B8
 * Original: 0x003523B8 - 0x003523E0 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003523B8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003523B8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00133090(); return; /* tail jmp 0x00133090 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00132FC0(); return; /* tail jmp 0x00132FC0 */

    eax = 0x4451E4;
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
 * sub_003523C3
 * Original: 0x003523C3 - 0x003523E0 (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003523C3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003523C3: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00132FC0(); return; /* tail jmp 0x00132FC0 */

    eax = 0x4451E4;
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
 * sub_003523E0
 * Original: 0x003523E0 - 0x003523E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003523E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003523E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352400
 * Original: 0x00352400 - 0x00352408 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352400: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013A480(); return; /* tail jmp 0x0013A480 */

}

/**
 * sub_00352408
 * Original: 0x00352408 - 0x003524A0 (152 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352408(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352408: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00133FD0(); return; /* tail jmp 0x00133FD0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00134060(); return; /* tail jmp 0x00134060 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001340F0(); return; /* tail jmp 0x001340F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_00134180(); return; /* tail jmp 0x00134180 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_00134210(); return; /* tail jmp 0x00134210 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_001344E0(); return; /* tail jmp 0x001344E0 */

    eax = 0x4454CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4454F0;
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
 * sub_00352413
 * Original: 0x00352413 - 0x003524A0 (141 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352413(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352413: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00134060(); return; /* tail jmp 0x00134060 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001340F0(); return; /* tail jmp 0x001340F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_00134180(); return; /* tail jmp 0x00134180 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_00134210(); return; /* tail jmp 0x00134210 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_001344E0(); return; /* tail jmp 0x001344E0 */

    eax = 0x4454CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4454F0;
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
 * sub_0035241E
 * Original: 0x0035241E - 0x003524A0 (130 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035241E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035241E: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001340F0(); return; /* tail jmp 0x001340F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_00134180(); return; /* tail jmp 0x00134180 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_00134210(); return; /* tail jmp 0x00134210 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_001344E0(); return; /* tail jmp 0x001344E0 */

    eax = 0x4454CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4454F0;
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
 * sub_00352429
 * Original: 0x00352429 - 0x003524A0 (119 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352429(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352429: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_00134180(); return; /* tail jmp 0x00134180 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_00134210(); return; /* tail jmp 0x00134210 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_001344E0(); return; /* tail jmp 0x001344E0 */

    eax = 0x4454CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4454F0;
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
 * sub_00352434
 * Original: 0x00352434 - 0x003524A0 (108 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352434(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352434: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_00134210(); return; /* tail jmp 0x00134210 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_001344E0(); return; /* tail jmp 0x001344E0 */

    eax = 0x4454CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4454F0;
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
 * sub_0035243F
 * Original: 0x0035243F - 0x003524A0 (97 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035243F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035243F: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_001344E0(); return; /* tail jmp 0x001344E0 */

    eax = 0x4454CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4454F0;
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
 * sub_0035244A
 * Original: 0x0035244A - 0x003524A0 (86 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035244A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035244A: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_001344E0(); return; /* tail jmp 0x001344E0 */

    eax = 0x4454CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4454F0;
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
 * sub_00352455
 * Original: 0x00352455 - 0x003524A0 (75 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352455(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352455: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_001344E0(); return; /* tail jmp 0x001344E0 */

    eax = 0x4454CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4454F0;
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
 * sub_00352460
 * Original: 0x00352460 - 0x003524A0 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352460: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_001344E0(); return; /* tail jmp 0x001344E0 */

    eax = 0x4454CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4454F0;
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
 * sub_0035246B
 * Original: 0x0035246B - 0x003524A0 (53 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035246B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035246B: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x28;
    g_seh_ebp = ebp; sub_001344E0(); return; /* tail jmp 0x001344E0 */

    eax = 0x4454CC;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4454F0;
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
 * sub_00352480
 * Original: 0x00352480 - 0x003524A0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352480(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352480: ;
    ecx = ebp + 4;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x4454F0;
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
 * sub_003524A0
 * Original: 0x003524A0 - 0x003524A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003524A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003524A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013A480(); return; /* tail jmp 0x0013A480 */

}

/**
 * sub_003524A8
 * Original: 0x003524A8 - 0x00352520 (120 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003524A8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003524A8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00133FD0(); return; /* tail jmp 0x00133FD0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00134060(); return; /* tail jmp 0x00134060 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001340F0(); return; /* tail jmp 0x001340F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_00134180(); return; /* tail jmp 0x00134180 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_00134210(); return; /* tail jmp 0x00134210 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    eax = 0x44555C;
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
 * sub_003524B3
 * Original: 0x003524B3 - 0x00352520 (109 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003524B3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003524B3: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00134060(); return; /* tail jmp 0x00134060 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001340F0(); return; /* tail jmp 0x001340F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_00134180(); return; /* tail jmp 0x00134180 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_00134210(); return; /* tail jmp 0x00134210 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    eax = 0x44555C;
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
 * sub_003524BE
 * Original: 0x003524BE - 0x00352520 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003524BE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003524BE: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001340F0(); return; /* tail jmp 0x001340F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_00134180(); return; /* tail jmp 0x00134180 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_00134210(); return; /* tail jmp 0x00134210 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    eax = 0x44555C;
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
 * sub_003524C9
 * Original: 0x003524C9 - 0x00352520 (87 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003524C9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003524C9: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_00134180(); return; /* tail jmp 0x00134180 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_00134210(); return; /* tail jmp 0x00134210 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    eax = 0x44555C;
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
 * sub_003524D4
 * Original: 0x003524D4 - 0x00352520 (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003524D4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003524D4: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_00134210(); return; /* tail jmp 0x00134210 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    eax = 0x44555C;
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
 * sub_003524DF
 * Original: 0x003524DF - 0x00352520 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003524DF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003524DF: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x18;
    g_seh_ebp = ebp; sub_001342A0(); return; /* tail jmp 0x001342A0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    eax = 0x44555C;
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
 * sub_003524EA
 * Original: 0x003524EA - 0x00352520 (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003524EA(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003524EA: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1C;
    g_seh_ebp = ebp; sub_00134330(); return; /* tail jmp 0x00134330 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    eax = 0x44555C;
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
 * sub_003524F5
 * Original: 0x003524F5 - 0x00352520 (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003524F5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003524F5: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001343C0(); return; /* tail jmp 0x001343C0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    eax = 0x44555C;
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
 * sub_00352500
 * Original: 0x00352500 - 0x00352520 (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352500(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352500: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x24;
    g_seh_ebp = ebp; sub_00134450(); return; /* tail jmp 0x00134450 */

    eax = 0x44555C;
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
 * sub_00352520
 * Original: 0x00352520 - 0x00352528 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352520(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352520: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013A480(); return; /* tail jmp 0x0013A480 */

}

/**
 * sub_00352528
 * Original: 0x00352528 - 0x00352560 (56 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352528(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352528: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_00135600(); return; /* tail jmp 0x00135600 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x30;
    g_seh_ebp = ebp; sub_00134600(); return; /* tail jmp 0x00134600 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_00133F40(); return; /* tail jmp 0x00133F40 */

    eax = 0x445598;
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

}

/**
 * sub_00352533
 * Original: 0x00352533 - 0x00352560 (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352533(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352533: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x30;
    g_seh_ebp = ebp; sub_00134600(); return; /* tail jmp 0x00134600 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_00133F40(); return; /* tail jmp 0x00133F40 */

    eax = 0x445598;
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

}

/**
 * sub_0035253E
 * Original: 0x0035253E - 0x00352560 (34 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035253E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035253E: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_00133F40(); return; /* tail jmp 0x00133F40 */

    eax = 0x445598;
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

}

/**
 * sub_00352560
 * Original: 0x00352560 - 0x00352568 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352560: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013A480(); return; /* tail jmp 0x0013A480 */

}

/**
 * sub_00352568
 * Original: 0x00352568 - 0x00352590 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352568(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352568: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_00135600(); return; /* tail jmp 0x00135600 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x30;
    g_seh_ebp = ebp; sub_00134600(); return; /* tail jmp 0x00134600 */

    eax = 0x4455CC;
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
 * sub_00352573
 * Original: 0x00352573 - 0x00352590 (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352573(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352573: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x30;
    g_seh_ebp = ebp; sub_00134600(); return; /* tail jmp 0x00134600 */

    eax = 0x4455CC;
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
 * sub_00352590
 * Original: 0x00352590 - 0x00352598 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352590: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013A480(); return; /* tail jmp 0x0013A480 */

}

/**
 * sub_00352598
 * Original: 0x00352598 - 0x003525C0 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352598(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352598: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00132FC0(); return; /* tail jmp 0x00132FC0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00134690(); return; /* tail jmp 0x00134690 */

    eax = 0x445600;
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
 * sub_003525A3
 * Original: 0x003525A3 - 0x003525C0 (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003525A3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003525A3: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00134690(); return; /* tail jmp 0x00134690 */

    eax = 0x445600;
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
 * sub_003525C0
 * Original: 0x003525C0 - 0x003525C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003525C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003525C0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013A480(); return; /* tail jmp 0x0013A480 */

}

/**
 * sub_003525C8
 * Original: 0x003525C8 - 0x003525E0 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003525C8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003525C8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00134720(); return; /* tail jmp 0x00134720 */

    eax = 0x44562C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003525E0
 * Original: 0x003525E0 - 0x003525E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003525E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003525E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013A480(); return; /* tail jmp 0x0013A480 */

}

/**
 * sub_00352600
 * Original: 0x00352600 - 0x00352608 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352600: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00132770(); return; /* tail jmp 0x00132770 */

}

/**
 * sub_00352608
 * Original: 0x00352608 - 0x00352620 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352608(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352608: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x44567C;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352620
 * Original: 0x00352620 - 0x00352628 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352620(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352620: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

}

/**
 * sub_00352640
 * Original: 0x00352640 - 0x00352648 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352640: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013A480(); return; /* tail jmp 0x0013A480 */

}

/**
 * sub_00352648
 * Original: 0x00352648 - 0x003526A0 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352648(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352648: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00132FC0(); return; /* tail jmp 0x00132FC0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00133F40(); return; /* tail jmp 0x00133F40 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x445720;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352653
 * Original: 0x00352653 - 0x003526A0 (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352653(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352653: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00133F40(); return; /* tail jmp 0x00133F40 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x445720;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035265E
 * Original: 0x0035265E - 0x003526A0 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035265E(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035265E: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x445720;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352669
 * Original: 0x00352669 - 0x003526A0 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352669(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352669: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x445720;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352674
 * Original: 0x00352674 - 0x003526A0 (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352674(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352674: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x445720;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035267F
 * Original: 0x0035267F - 0x003526A0 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035267F(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035267F: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x445720;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0035268A
 * Original: 0x0035268A - 0x003526A0 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0035268A(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0035268A: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    eax = 0x445720;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003526A0
 * Original: 0x003526A0 - 0x003526A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003526A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003526A0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013A480(); return; /* tail jmp 0x0013A480 */

}

/**
 * sub_003526A8
 * Original: 0x003526A8 - 0x00352700 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003526A8(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003526A8: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00132FC0(); return; /* tail jmp 0x00132FC0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00133F40(); return; /* tail jmp 0x00133F40 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    eax = 0x445774;
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
 * sub_003526B3
 * Original: 0x003526B3 - 0x00352700 (77 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003526B3(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003526B3: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 8;
    g_seh_ebp = ebp; sub_00133F40(); return; /* tail jmp 0x00133F40 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    eax = 0x445774;
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
 * sub_003526BE
 * Original: 0x003526BE - 0x00352700 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003526BE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003526BE: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    eax = 0x445774;
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
 * sub_003526C9
 * Original: 0x003526C9 - 0x00352700 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003526C9(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003526C9: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x10;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    eax = 0x445774;
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
 * sub_003526D4
 * Original: 0x003526D4 - 0x00352700 (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003526D4(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003526D4: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x14;
    g_seh_ebp = ebp; sub_001A59F0(); return; /* tail jmp 0x001A59F0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    eax = 0x445774;
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
 * sub_003526DF
 * Original: 0x003526DF - 0x00352700 (33 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003526DF(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003526DF: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x34;
    g_seh_ebp = ebp; sub_001339E0(); return; /* tail jmp 0x001339E0 */

    eax = 0x445774;
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
 * sub_00352700
 * Original: 0x00352700 - 0x00352708 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352700(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352700: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0013A480(); return; /* tail jmp 0x0013A480 */

}

/**
 * sub_00352708
 * Original: 0x00352708 - 0x00352720 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352708(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352708: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00132FC0(); return; /* tail jmp 0x00132FC0 */

    eax = 0x4457A0;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352720
 * Original: 0x00352720 - 0x00352728 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352720(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352720: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_001328C0(); return; /* tail jmp 0x001328C0 */

}

/**
 * sub_00352728
 * Original: 0x00352728 - 0x00352740 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352728(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352728: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00137A60(); return; /* tail jmp 0x00137A60 */

    eax = 0x4458C8;
    g_seh_ebp = ebp; sub_00340FEB(); return; /* tail jmp 0x00340FEB */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00352740
 * Original: 0x00352740 - 0x00352748 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352740(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352740: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00137EA0(); return; /* tail jmp 0x00137EA0 */

}

/**
 * sub_00352748
 * Original: 0x00352748 - 0x003527C0 (120 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352748(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352748: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x456C;
    g_seh_ebp = ebp; sub_00137EB0(); return; /* tail jmp 0x00137EB0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x6D28;
    g_seh_ebp = ebp; sub_00137EC0(); return; /* tail jmp 0x00137EC0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x9894;
    g_seh_ebp = ebp; sub_00137ED0(); return; /* tail jmp 0x00137ED0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x13BD8;
    g_seh_ebp = ebp; sub_00137EE0(); return; /* tail jmp 0x00137EE0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1517C;
    g_seh_ebp = ebp; sub_00137EF0(); return; /* tail jmp 0x00137EF0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x15DF0;
    g_seh_ebp = ebp; sub_00137F00(); return; /* tail jmp 0x00137F00 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1771C;
    g_seh_ebp = ebp; sub_00137F10(); return; /* tail jmp 0x00137F10 */

    eax = 0x445924;
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
 * sub_00352756
 * Original: 0x00352756 - 0x003527C0 (106 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352756(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352756: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x6D28;
    g_seh_ebp = ebp; sub_00137EC0(); return; /* tail jmp 0x00137EC0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x9894;
    g_seh_ebp = ebp; sub_00137ED0(); return; /* tail jmp 0x00137ED0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x13BD8;
    g_seh_ebp = ebp; sub_00137EE0(); return; /* tail jmp 0x00137EE0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1517C;
    g_seh_ebp = ebp; sub_00137EF0(); return; /* tail jmp 0x00137EF0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x15DF0;
    g_seh_ebp = ebp; sub_00137F00(); return; /* tail jmp 0x00137F00 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1771C;
    g_seh_ebp = ebp; sub_00137F10(); return; /* tail jmp 0x00137F10 */

    eax = 0x445924;
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
 * sub_00352764
 * Original: 0x00352764 - 0x003527C0 (92 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00352764(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00352764: ;
    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x9894;
    g_seh_ebp = ebp; sub_00137ED0(); return; /* tail jmp 0x00137ED0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x13BD8;
    g_seh_ebp = ebp; sub_00137EE0(); return; /* tail jmp 0x00137EE0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1517C;
    g_seh_ebp = ebp; sub_00137EF0(); return; /* tail jmp 0x00137EF0 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x15DF0;
    g_seh_ebp = ebp; sub_00137F00(); return; /* tail jmp 0x00137F00 */

    ecx = MEM32(ebp + -16);
    ecx = ecx + 0x1771C;
    g_seh_ebp = ebp; sub_00137F10(); return; /* tail jmp 0x00137F10 */

    eax = 0x445924;
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
