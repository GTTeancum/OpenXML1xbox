/**
 * X-Men Legends - Recompiled code chunk 49
 * Functions: 250 (0x00203C20 - 0x0020BBB0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00203C20
 * Original: 0x00203C20 - 0x00203F89 (873 bytes, 260 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00203C20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203C2F; /* jne: not equal / not zero */

loc_00203C2A: ;
    eax = 0x3C806C;

loc_00203C2F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1E20);
    PUSH32(esp, 0x00203C3Au); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203C3A: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203C4C; /* je: equal / zero */

loc_00203C47: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00203C4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203C4C: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203C56u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203C56: ;
    eax = MEM32(esi + 0x14);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203C65; /* jne: not equal / not zero */

loc_00203C60: ;
    eax = 0x3C806C;

loc_00203C65: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1E00);
    PUSH32(esp, 0x00203C70u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203C70: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203C82; /* je: equal / zero */

loc_00203C7D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203C82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203C82: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203C8Cu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203C8C: ;
    eax = MEM32(esi + 0x18);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203C9B; /* jne: not equal / not zero */

loc_00203C96: ;
    eax = 0x3C806C;

loc_00203C9B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1DE0);
    PUSH32(esp, 0x00203CA6u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203CA6: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203CB8; /* je: equal / zero */

loc_00203CB3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00203CB8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203CB8: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203CC2u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203CC2: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F1DC0);
    PUSH32(esp, 0x00203CD0u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203CD0: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203CE2; /* je: equal / zero */

loc_00203CDD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203CE2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203CE2: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203CECu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203CEC: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1DA0);
    PUSH32(esp, 0x00203CFAu); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203CFA: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203D0C; /* je: equal / zero */

loc_00203D07: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203D0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203D0C: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203D16u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203D16: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1D7C);
    PUSH32(esp, 0x00203D24u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203D24: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203D36; /* je: equal / zero */

loc_00203D31: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203D36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203D36: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203D40u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203D40: ;
    eax = MEM32(esi + 0x28);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203D4F; /* jne: not equal / not zero */

loc_00203D4A: ;
    eax = 0x3C806C;

loc_00203D4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1D5C);
    PUSH32(esp, 0x00203D5Au); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203D5A: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203D6C; /* je: equal / zero */

loc_00203D67: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00203D6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203D6C: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203D76u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203D76: ;
    eax = MEM32(esi + 0x2C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203D85; /* jne: not equal / not zero */

loc_00203D80: ;
    eax = 0x3C806C;

loc_00203D85: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1D3C);
    PUSH32(esp, 0x00203D90u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203D90: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203DA2; /* je: equal / zero */

loc_00203D9D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203DA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203DA2: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203DACu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203DAC: ;
    eax = MEM32(esi + 0x30);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203DBB; /* jne: not equal / not zero */

loc_00203DB6: ;
    eax = 0x3C806C;

loc_00203DBB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1D1C);
    PUSH32(esp, 0x00203DC6u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203DC6: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203DD8; /* je: equal / zero */

loc_00203DD3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00203DD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203DD8: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203DE2u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203DE2: ;
    eax = MEM32(esi + 0x34);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203DF1; /* jne: not equal / not zero */

loc_00203DEC: ;
    eax = 0x3C806C;

loc_00203DF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1CFC);
    PUSH32(esp, 0x00203DFCu); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203DFC: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203E0E; /* je: equal / zero */

loc_00203E09: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203E0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203E0E: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203E18u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203E18: ;
    eax = MEM32(esi + 0x38);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203E27; /* jne: not equal / not zero */

loc_00203E22: ;
    eax = 0x3C806C;

loc_00203E27: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1CDC);
    PUSH32(esp, 0x00203E32u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203E32: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203E44; /* je: equal / zero */

loc_00203E3F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00203E44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203E44: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203E4Eu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203E4E: ;
    eax = MEM32(esi + 0x3C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203E5D; /* jne: not equal / not zero */

loc_00203E58: ;
    eax = 0x3C806C;

loc_00203E5D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1CBC);
    PUSH32(esp, 0x00203E68u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203E68: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203E7A; /* je: equal / zero */

loc_00203E75: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203E7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203E7A: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203E84u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203E84: ;
    eax = MEM32(esi + 0x40);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203E93; /* jne: not equal / not zero */

loc_00203E8E: ;
    eax = 0x3C806C;

loc_00203E93: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1C9C);
    PUSH32(esp, 0x00203E9Eu); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203E9E: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203EB0; /* je: equal / zero */

loc_00203EAB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00203EB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203EB0: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203EBAu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203EBA: ;
    eax = MEM32(esi + 0x44);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203EC9; /* jne: not equal / not zero */

loc_00203EC4: ;
    eax = 0x3C806C;

loc_00203EC9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1C7C);
    PUSH32(esp, 0x00203ED4u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203ED4: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203EE6; /* je: equal / zero */

loc_00203EE1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203EE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203EE6: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203EF0u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203EF0: ;
    eax = MEM32(esi + 0x48);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203EFF; /* jne: not equal / not zero */

loc_00203EFA: ;
    eax = 0x3C806C;

loc_00203EFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1C5C);
    PUSH32(esp, 0x00203F0Au); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203F0A: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203F1C; /* je: equal / zero */

loc_00203F17: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00203F1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203F1C: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203F26u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203F26: ;
    eax = MEM32(esi + 0x4C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203F35; /* jne: not equal / not zero */

loc_00203F30: ;
    eax = 0x3C806C;

loc_00203F35: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1C3C);
    PUSH32(esp, 0x00203F40u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203F40: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203F52; /* je: equal / zero */

loc_00203F4D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203F52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203F52: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203F5Cu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203F5C: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1C1C);
    PUSH32(esp, 0x00203F6Au); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203F6A: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00203F7D; /* je: equal / zero */

loc_00203F78: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203F7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203F7D: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203F87u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203F87: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00203E20
 * Original: 0x00203E20 - 0x00203F89 (361 bytes, 108 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00203E20: ;
    if (_flags /* jne: not equal / not zero */) goto loc_00203E27;

loc_00203E22: ;
    eax = 0x3C806C;

loc_00203E27: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1CDC);
    PUSH32(esp, 0x00203E32u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203E32: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203E44; /* je: equal / zero */

loc_00203E3F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00203E44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203E44: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203E4Eu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203E4E: ;
    eax = MEM32(esi + 0x3C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203E5D; /* jne: not equal / not zero */

loc_00203E58: ;
    eax = 0x3C806C;

loc_00203E5D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1CBC);
    PUSH32(esp, 0x00203E68u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203E68: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203E7A; /* je: equal / zero */

loc_00203E75: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203E7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203E7A: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203E84u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203E84: ;
    eax = MEM32(esi + 0x40);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203E93; /* jne: not equal / not zero */

loc_00203E8E: ;
    eax = 0x3C806C;

loc_00203E93: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1C9C);
    PUSH32(esp, 0x00203E9Eu); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203E9E: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203EB0; /* je: equal / zero */

loc_00203EAB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00203EB0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203EB0: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203EBAu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203EBA: ;
    eax = MEM32(esi + 0x44);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203EC9; /* jne: not equal / not zero */

loc_00203EC4: ;
    eax = 0x3C806C;

loc_00203EC9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1C7C);
    PUSH32(esp, 0x00203ED4u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203ED4: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203EE6; /* je: equal / zero */

loc_00203EE1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203EE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203EE6: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203EF0u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203EF0: ;
    eax = MEM32(esi + 0x48);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203EFF; /* jne: not equal / not zero */

loc_00203EFA: ;
    eax = 0x3C806C;

loc_00203EFF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1C5C);
    PUSH32(esp, 0x00203F0Au); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203F0A: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203F1C; /* je: equal / zero */

loc_00203F17: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00203F1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203F1C: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203F26u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203F26: ;
    eax = MEM32(esi + 0x4C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00203F35; /* jne: not equal / not zero */

loc_00203F30: ;
    eax = 0x3C806C;

loc_00203F35: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1C3C);
    PUSH32(esp, 0x00203F40u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203F40: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203F52; /* je: equal / zero */

loc_00203F4D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203F52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203F52: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203F5Cu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203F5C: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1C1C);
    PUSH32(esp, 0x00203F6Au); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00203F6A: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00203F7D; /* je: equal / zero */

loc_00203F78: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00203F7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203F7D: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00203F87u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00203F87: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00203F90
 * Original: 0x00203F90 - 0x0020401D (141 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00203F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00203F90: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204019; /* je: equal / zero */

loc_00203F9A: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00203FA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00203FA4: ;
    edx = MEM32(esi + 0x38);
    ecx = ZX16(LO16(eax));
    eax = edx + ecx + -1;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = MEM32(esp + 0x10);
    edi = eax;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00203FED; /* je: equal / zero */

loc_00203FBF: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00203FED; /* je: equal / zero */

loc_00203FC4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00203FCAu); RECOMP_ABI_CALL(0x001E9B80u, sub_001E9B80); /* call 0x001E9B80 */

loc_00203FCA: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00204008; /* jne: not equal / not zero */

loc_00203FD1: ;
    ecx = ebx;
    PUSH32(esp, 0x00203FD8u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00203FD8: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00203FE7u); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_00203FE7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00203FED: ;
    eax = ZX8(MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00204001; /* jne: not equal / not zero */

loc_00203FFB: ;
    ecx = MEM32(0x5BC538);

loc_00204001: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);

loc_00204008: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00204017u); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_00204017: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00204019: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00204020
 * Original: 0x00204020 - 0x002040B4 (148 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204020: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00204029u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204029: ;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM16(esi + 0x14) = LO16(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_00204039; /* jne: not equal / not zero */

loc_00204034: ;
    ecx = ZX16(LO16(eax));
    goto loc_00204086;

loc_00204039: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020403Fu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0020403F: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x0020404Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020404D: ;
    ecx = ZX16(MEM16(esi + 0x14));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002040B1; /* jle: less or equal (signed <=) */

loc_00204055: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204082; /* je: equal / zero */

loc_0020405C: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00204070; /* jne: not equal / not zero */

loc_0020406A: ;
    edx = MEM32(0x5BC538);

loc_00204070: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00204082u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204082: ;
    ecx = ZX16(MEM16(esi + 0x14));

loc_00204086: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_0020409A; /* jne: not equal / not zero */

loc_00204094: ;
    edx = MEM32(0x5BC538);

loc_0020409A: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x002040AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002040AE: ;
    MEM32(esi + 0x20) = eax;

loc_002040B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002040C0
 * Original: 0x002040C0 - 0x002040EB (43 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002040C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002040C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x002040C9u); RECOMP_ABI_CALL(0x00204020u, sub_00204020); /* call 0x00204020 */

loc_002040C9: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002040E6; /* je: equal / zero */

loc_002040D1: ;
    ecx = ZX16(MEM16(edi + 0x14));
    edi = MEM32(edi + 0x20);
    eax = ecx;
    ecx = ecx >> 2;
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

loc_002040E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002040F0
 * Original: 0x002040F0 - 0x002040F5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002040F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002040F0: ;
    g_seh_ebp = ebp; sub_00204020(); return; /* tail jmp 0x00204020 */

}

/**
 * sub_00204100
 * Original: 0x00204100 - 0x00204183 (131 bytes, 55 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204100: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    eax = eax >> 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204126; /* je: equal / zero */

loc_0020410D: ;
    /* nop */

loc_00204110: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020412C; /* je: equal / zero */

loc_00204117: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00204119u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204119: ;
    esi = eax;
    ecx = MEM32(esi + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00204110; /* jne: not equal / not zero */

loc_00204126: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0020412C: ;
    _fa = (uint32_t)(MEM8(esi + 0x1A)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1A), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204126; /* je: equal / zero */

loc_00204132: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00204158; /* jne: not equal / not zero */

loc_0020413A: ;
    eax = MEM32(esi + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204153; /* je: equal / zero */

loc_00204141: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204153; /* je: equal / zero */

loc_00204146: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020414Cu); RECOMP_ABI_CALL(0x001E9B80u, sub_001E9B80); /* call 0x001E9B80 */

loc_0020414C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00204158; /* jne: not equal / not zero */

loc_00204153: ;
    PUSH32(esp, 0x00204158u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00204158: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x20);
    ecx = ecx + ebx;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0020416Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020416D: ;
    edi = eax;
    edi = edi + ebx;
    if ((edi == 0)) goto loc_0020417B; /* je: equal / zero */

loc_00204173: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020417Bu); RECOMP_ABI_CALL(0x001F7D30u, sub_001F7D30); /* call 0x001F7D30 */

loc_0020417B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00204190
 * Original: 0x00204190 - 0x002041A4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204190(void)
{

loc_00204190: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC508);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002041A3u); RECOMP_ABI_CALL(0x001F3680u, sub_001F3680); /* call 0x001F3680 */

loc_002041A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002041B0
 * Original: 0x002041B0 - 0x002041C1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002041B0(void)
{

loc_002041B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC508);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002041C0u); RECOMP_ABI_CALL(0x002008D0u, sub_002008D0); /* call 0x002008D0 */

loc_002041C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002041D0
 * Original: 0x002041D0 - 0x00204256 (134 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002041D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002041D0: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00204254; /* je: equal / zero */

loc_002041DC: ;
    SET_LO8(ecx, MEM8(eax));
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    ecx = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_002041F8; /* jne: not equal / not zero */

loc_002041E6: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002041E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002041E9: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x002041F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002041F0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002041F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002041F6: ;
    goto loc_0020423C;

loc_002041F8: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x002041FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002041FB: ;
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020420D; /* je: equal / zero */

loc_00204205: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0020420Du); RECOMP_ABI_CALL(0x001F19F0u, sub_001F19F0); /* call 0x001F19F0 */

loc_0020420D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00204214u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204214: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0020421Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020421B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00204222u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204222: ;
    ecx = esi;
    PUSH32(esp, 0x00204229u); RECOMP_ABI_CALL(0x001EA730u, sub_001EA730); /* call 0x001EA730 */

loc_00204229: ;
    ecx = esi;
    PUSH32(esp, 0x00204230u); RECOMP_ABI_CALL(0x001EA770u, sub_001EA770); /* call 0x001EA770 */

loc_00204230: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00204237u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204237: ;
    esi = esi - MEM32(eax + 0x20);
    if ((esi == 0)) goto loc_00204254; /* je: equal / zero */

loc_0020423C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00204242u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00204242: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204254; /* je: equal / zero */

loc_00204249: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00204254u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204254: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00204260
 * Original: 0x00204260 - 0x002043D6 (374 bytes, 127 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00204260: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0020426Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020426D: ;
    ebp = MEM32(eax + 0x28);
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x10) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0020427Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020427B: ;
    eax = MEM32(eax + 0x1C);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F1E54);
    PUSH32(esp, 0x0020428Fu); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_0020428F: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002042A1; /* je: equal / zero */

loc_0020429C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002042A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002042A1: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x002042ABu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_002042AB: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002043CD; /* je: equal / zero */

loc_002042BA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    eax = edi;
    edx = eax + 1;

loc_002042C4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002042C4; /* jne: not equal / not zero */

loc_002042CB: ;
    ecx = ZX8(MEM8(esi + 7));
    eax = eax - edx;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_002042E2; /* jne: not equal / not zero */

loc_002042DC: ;
    edx = MEM32(0x5BC538);

loc_002042E2: ;
    edx = MEM32(edx);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = eax * 4 + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x002042FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002042FA: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x3F1E50);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00204308u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00204308: ;
    edx = MEM32(esi);
    esp = esp + 0xC;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00204312u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204312: ;
    eax = MEM32(0x5BC554);
    ecx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0xC);
    ebp = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F1E48);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x0020432Fu); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_0020432F: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204341; /* je: equal / zero */

loc_0020433C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00204341u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204341: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x0020434Bu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_0020434B: ;
    edi = MEM32(esp + 0x14);
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00204374; /* jae: above or equal (unsigned >=) */

loc_00204356: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0020436Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020436F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00204356; /* jb: below (unsigned <) */

loc_00204374: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1E40);
    PUSH32(esp, 0x00204383u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00204383: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204395; /* je: equal / zero */

loc_00204390: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00204395u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204395: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x0020439Fu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_0020439F: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002043CC; /* je: equal / zero */

loc_002043A6: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_002043BA; /* jne: not equal / not zero */

loc_002043B4: ;
    ecx = MEM32(0x5BC538);

loc_002043BA: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x002043CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002043CC: ;
    POP32(esp, ebx);

loc_002043CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002043E0
 * Original: 0x002043E0 - 0x0020444C (108 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002043E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002043E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00204401; /* jle: less or equal (signed <=) */

loc_002043F2: ;
    edx = MEM32(esi + 0x10);

loc_002043F5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204404; /* je: equal / zero */

loc_002043F9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002043F5; /* jl: less (signed <) */

loc_00204401: ;
    eax = eax | 0xFFFFFFFFu;

loc_00204404: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00204446; /* jne: not equal / not zero */

loc_00204409: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00204413; /* je: equal / zero */

loc_00204410: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00204413: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00204430; /* jge: greater or equal (signed >=) */

loc_0020441B: ;
    ecx = MEM32(esi + 0x10);
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    eax = ebx;
    POP32(esp, ebx);
    MEM32(ecx + edi * 4) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00204430: ;
    PUSH32(esp, 4);
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0020443Du); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020443D: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + edi * 4) = ebp;
    eax = ebx;
    POP32(esp, ebx);

loc_00204446: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00204450
 * Original: 0x00204450 - 0x00204499 (73 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204450: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    ecx = MEM32(0x5BB964);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00204467u); RECOMP_ABI_CALL(0x001EAC30u, sub_001EAC30); /* call 0x001EAC30 */

loc_00204467: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00204472; /* jne: not equal / not zero */

loc_0020446B: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00204472: ;
    edx = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0020448C; /* jle: less or equal (signed <=) */

loc_0020447B: ;
    esi = MEM32(esi + 0x10);
    edi = edi;

loc_00204480: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204493; /* je: equal / zero */

loc_00204484: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204480; /* jl: less (signed <) */

loc_0020448C: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00204493: ;
    eax = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002044A0
 * Original: 0x002044A0 - 0x002045D3 (307 bytes, 114 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002044A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002044A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = esi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002045C5; /* jle: less or equal (signed <=) */

loc_002044B9: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    /* nop */

loc_002044C0: ;
    SET_LO8(eax, MEM8(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7B (8-bit) */
    ecx = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_002044E5; /* je: equal / zero */

loc_002044C9: ;
    /* nop */

loc_002044D0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002044E5; /* je: equal / zero */

loc_002044D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002044E5; /* je: equal / zero */

loc_002044D8: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002044D0; /* jne: not equal / not zero */

loc_002044E0: ;
    ebp = ecx + 1;
    goto loc_002044F1;

loc_002044E5: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x7B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x7B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002044EF; /* jne: not equal / not zero */

loc_002044EA: ;
    ebp = ecx + 1;
    goto loc_002044F1;

loc_002044EF: ;
    ebp = 0; /* xor self */

loc_002044F1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002045A7; /* je: equal / zero */

loc_002044F9: ;
    SET_LO8(eax, MEM8(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5B (8-bit) */
    ecx = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00204517; /* je: equal / zero */

loc_00204502: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204517; /* je: equal / zero */

loc_00204506: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204517; /* je: equal / zero */

loc_0020450A: ;
    SET_LO8(eax, MEM8(ecx + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00204502; /* jne: not equal / not zero */

loc_00204512: ;
    ebp = ecx + 1;
    goto loc_00204523;

loc_00204517: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x5B (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00204521; /* jne: not equal / not zero */

loc_0020451C: ;
    ebp = ecx + 1;
    goto loc_00204523;

loc_00204521: ;
    ebp = 0; /* xor self */

loc_00204523: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CB224);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00204533u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00204533: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020454F; /* jne: not equal / not zero */

loc_0020453A: ;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;

loc_00204542: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edx + esi * 4) = 0;
    goto loc_002045B2;

loc_0020454F: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00204542; /* jl: less (signed <) */

loc_00204557: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00204542; /* jge: greater or equal (signed >=) */

loc_0020455C: ;
    ecx = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00204584; /* je: equal / zero */

loc_00204565: ;
    edx = MEM32(ebx + 0x10);
    esi = MEM32(edx + eax * 4);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + eax * 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00204579u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204579: ;
    MEM32(esi + 0xC) = edi;
    eax = esi;
    esi = MEM32(esp + 0x10);
    goto loc_0020458A;

loc_00204584: ;
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ecx + eax * 4);

loc_0020458A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020459A; /* je: equal / zero */

loc_0020458E: ;
    edx = MEM32(eax + 0x18);
    eax = MEM32(esp + 0x1C);
    MEM32(eax + esi * 4) = edx;
    goto loc_002045B2;

loc_0020459A: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx + esi * 4) = 0;
    goto loc_002045B2;

loc_002045A7: ;
    eax = MEM32(esp + 0x1C);
    MEM32(eax + esi * 4) = 0;

loc_002045B2: ;
    eax = MEM32(esp + 0x20);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_002044C0; /* jl: less (signed <) */

loc_002045C3: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002045C5: ;
    ecx = MEM32(esp + 0x10);
    eax = ebp;
    POP32(esp, esi);
    eax = eax - ecx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002045E0
 * Original: 0x002045E0 - 0x00204610 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002045E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002045E0: ;
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020460F; /* je: equal / zero */

loc_002045E7: ;
    eax = ZX8(MEM8(ecx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_002045FB; /* jne: not equal / not zero */

loc_002045F5: ;
    ecx = MEM32(0x5BC538);

loc_002045FB: ;
    ecx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(ecx + eax * 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 0xFC); PUSH32(esp, 0x0020460Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020460E: ;
    POP32(esp, esi);

loc_0020460F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00204610
 * Original: 0x00204610 - 0x00204677 (103 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204610: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00204638; /* je: equal / zero */

loc_0020461B: ;
    eax = edx;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_00204621: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00204621; /* jne: not equal / not zero */

loc_00204628: ;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00204633u); RECOMP_ABI_CALL(0x001F84D0u, sub_001F84D0); /* call 0x001F84D0 */

loc_00204633: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00204638: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204665; /* je: equal / zero */

loc_0020463F: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00204653; /* jne: not equal / not zero */

loc_0020464D: ;
    edx = MEM32(0x5BC538);

loc_00204653: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00204665u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204665: ;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00204680
 * Original: 0x00204680 - 0x002046BA (58 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204680: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, MEM8(esp + 4));
    if (TEST_Z(_fa, _fb)) goto loc_002046A3; /* je: equal / zero */

loc_0020468C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = 0x3D258C;
    if (TEST_NZ(_fa, _fb)) goto loc_002046B1; /* jne: not equal / not zero */

loc_00204695: ;
    eax = 0x3F1E68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002046A0u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002046A0: ;
    esp += 12; return; /* ret 8 */

loc_002046A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = 0x3CB744;
    if (TEST_NZ(_fa, _fb)) goto loc_002046B1; /* jne: not equal / not zero */

loc_002046AC: ;
    eax = 0x3CC6B4;

loc_002046B1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002046B7u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002046B7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002046C0
 * Original: 0x002046C0 - 0x002046D4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002046C0(void)
{

loc_002046C0: ;
    ecx = MEM32(esp + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x002046D3u); RECOMP_ABI_CALL(0x001F86D0u, sub_001F86D0); /* call 0x001F86D0 */

loc_002046D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002046E0
 * Original: 0x002046E0 - 0x0020471C (60 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002046E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002046E0: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204711; /* je: equal / zero */

loc_002046E7: ;
    eax = MEM32(ecx + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    if ((_fa == 0)) goto loc_00204705; /* je: equal / zero */

loc_002046EE: ;
    edi = edi;

loc_002046F0: ;
    SET_LO8(ebx, MEM8(edx + eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204712; /* je: equal / zero */

loc_002046F8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204705; /* je: equal / zero */

loc_002046FD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204705; /* je: equal / zero */

loc_00204702: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002046F0; /* jne: not equal / not zero */

loc_00204705: ;
    eax = MEM32(0x46A3C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00204710u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00204710: ;
    POP32(esp, ebx);

loc_00204711: ;
    esp += 4; return; /* ret */

loc_00204712: ;
    edx = edx + eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020471Au); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0020471A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00204720
 * Original: 0x00204720 - 0x0020476B (75 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204720: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204769; /* je: equal / zero */

loc_0020472A: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    esi = eax + ecx + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00204755; /* jbe: below or equal (unsigned <=) */

loc_00204736: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204747; /* je: equal / zero */

loc_0020473C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204747; /* je: equal / zero */

loc_00204740: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00204736; /* ja: above (unsigned >) */

loc_00204745: ;
    goto loc_00204755;

loc_00204747: ;
    MEM8(esi) = 0;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00204755u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00204755: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 8) (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00204769; /* jne: not equal / not zero */

loc_0020475B: ;
    edx = MEM32(0x46A3C8);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00204769u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00204769: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00204770
 * Original: 0x00204770 - 0x002047FD (141 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204770: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002047FB; /* je: equal / zero */

loc_0020477E: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00204785u); RECOMP_ABI_CALL(0x001F8000u, sub_001F8000); /* call 0x001F8000 */

loc_00204785: ;
    edi = eax;
    edx = eax + 1;
    /* nop */

loc_00204790: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00204790; /* jne: not equal / not zero */

loc_00204797: ;
    eax = eax - edx;
    PUSH32(esp, esi);
    esi = eax + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002047BA; /* jl: less (signed <) */

loc_002047A1: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002047ABu); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_002047AB: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002047BA; /* je: equal / zero */

loc_002047B2: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + edi + 1) = 0;
    if ((_fas >= 0)) goto loc_002047A1; /* jns: not sign (positive) */

loc_002047BA: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002047D9; /* je: equal / zero */

loc_002047C1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002047CAu); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_002047CA: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002047D9; /* je: equal / zero */

loc_002047D1: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002047C1; /* jne: not equal / not zero */

loc_002047D9: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x002047E1u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002047E1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002047E7u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002047E7: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002047FA; /* je: equal / zero */

loc_002047EF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x002047FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002047FA: ;
    POP32(esp, edi);

loc_002047FB: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00204800
 * Original: 0x00204800 - 0x00204887 (135 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204800: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00204829; /* jne: not equal / not zero */

loc_0020480C: ;
    ecx = MEM32(esi + 0x10);
    edi = eax + eax;
    eax = edi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00204820u); RECOMP_ABI_CALL(0x00203450u, sub_00203450); /* call 0x00203450 */

loc_00204820: ;
    esp = esp + 8;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0xC) = edi;

loc_00204829: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 0x10);
    edx = edx - ecx;
    edi = ecx * 4;
    edx = edx << 2;
    eax = eax + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = eax + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020484Cu); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_0020484C: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x18);
    MEM32(edi + eax) = ecx;
    eax = MEM32(esi + 4);
    esp = esp + 0xC;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = eax;
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 8);
    edx = eax + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00204882; /* ja: above (unsigned >) */

loc_0020486C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020487A; /* je: equal / zero */

loc_00204870: ;
    eax = eax + eax;
    POP32(esp, edi);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020487A: ;
    eax = 1;
    MEM32(esi + 8) = eax;

loc_00204882: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00204890
 * Original: 0x00204890 - 0x002049CE (318 bytes, 135 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00204890: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00204956; /* je: equal / zero */

loc_002048A4: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00204956; /* je: equal / zero */

loc_002048AF: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x002048BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002048BB: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 8);
    ebp = eax;
    eax = MEM32(ecx + 0x10);
    edi = MEM32(eax + ebp * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0020493D; /* je: equal / zero */

loc_002048DA: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 0x14) = edx;

loc_002048E4: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x20);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    edi = edi;

loc_002048F0: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00204914; /* jne: not equal / not zero */

loc_002048F8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00204910; /* je: equal / zero */

loc_002048FC: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00204914; /* jne: not equal / not zero */

loc_00204906: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_002048F0; /* jne: not equal / not zero */

loc_00204910: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_00204919;

loc_00204914: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_00204919: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0020494A; /* je: equal / zero */

loc_0020491D: ;
    edx = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00204928; /* jl: less (signed <) */

loc_00204926: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */

loc_00204928: ;
    ecx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0020493D; /* jge: greater or equal (signed >=) */

loc_00204935: ;
    edi = MEM32(eax + ebp * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002048E4; /* jne: not equal / not zero */

loc_0020493D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0020494A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00204956: ;
    esi = MEM32(esi + 0x10);
    ebx = MEM32(esi + 0x10);
    ebp = MEM32(esi + 8);
    edi = ebx;
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(edi)) >> 32) & 1);
    ebp = ebp + edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0020493D; /* jae: above or equal (unsigned >=) */

loc_00204967: ;
    ecx = MEM32(esp + 0x20);
    esi = edi;
    /* nop */

loc_00204970: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00204994; /* jne: not equal / not zero */

loc_00204978: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00204990; /* je: equal / zero */

loc_0020497C: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00204994; /* jne: not equal / not zero */

loc_00204986: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00204970; /* jne: not equal / not zero */

loc_00204990: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00204999;

loc_00204994: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00204999: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_002049C0; /* je: equal / zero */

loc_0020499D: ;
    ecx = edi;
    edx = ecx + 1;

loc_002049A2: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_002049A2; /* jne: not equal / not zero */

loc_002049A9: ;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    edi = edi + ecx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00204967; /* jb: below (unsigned <) */

loc_002049B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_002049C0: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002049D0
 * Original: 0x002049D0 - 0x00204A49 (121 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002049D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002049D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebx = eax;
    ebp = 0; /* xor self */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204A2C; /* je: equal / zero */

loc_002049EB: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x002049F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002049F5: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204A13; /* je: equal / zero */

loc_00204A01: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204A08; /* jl: less (signed <) */

loc_00204A06: ;
    eax = 0; /* xor self */

loc_00204A08: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00204A35; /* jge: greater or equal (signed >=) */

loc_00204A0D: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00204A01; /* jne: not equal / not zero */

loc_00204A13: ;
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204A2C; /* je: equal / zero */

loc_00204A1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00204A2C; /* jl: less (signed <) */

loc_00204A1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00204A2C; /* jge: greater or equal (signed >=) */

loc_00204A22: ;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(esp + 0x18);
    MEM32(ecx + eax * 4) = edx;

loc_00204A2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00204A35: ;
    eax = MEM32(esi);
    ecx = edi + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00204A40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204A40: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00204A50
 * Original: 0x00204A50 - 0x00204B4F (255 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204A50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00204A50: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00204A66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204A66: ;
    edi = eax;
    eax = MEM32(ebp + 0x20);
    edx = MEM32(eax + 8);
    ebx = MEM32(eax + 0x10);
    eax = MEM32(ebx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    esi = edi;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00204ADD; /* je: equal / zero */

loc_00204A87: ;
    ecx = MEM32(ebp + 0x1C);
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 0x14) = edx;

loc_00204A91: ;
    edx = MEM32(esp + 0x14);
    ecx = eax;
    ecx = ecx << 4;
    ecx = ecx + edx;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    ecx = MEM32(ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_00204AAA; /* je: equal / zero */

loc_00204AA6: ;
    edx = edx + ecx;
    goto loc_00204AAD;

loc_00204AAA: ;
    edx = ecx + 1;

loc_00204AAD: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00204ABD; /* jb: below (unsigned <) */

loc_00204AB3: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00204B45; /* jbe: below or equal (unsigned <=) */

loc_00204ABD: ;
    ecx = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204AC8; /* jl: less (signed <) */

loc_00204AC6: ;
    esi = 0; /* xor self */

loc_00204AC8: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00204B42; /* jge: greater or equal (signed >=) */

loc_00204AD5: ;
    eax = MEM32(ebx + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00204A91; /* jne: not equal / not zero */

loc_00204ADD: ;
    esi = edi + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00204B42; /* jle: less or equal (signed <=) */

loc_00204AE4: ;
    eax = ebx + esi * 4;

loc_00204AE7: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00204B01; /* jne: not equal / not zero */

loc_00204AEC: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00204AE7; /* jg: greater (signed >) */

loc_00204AF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_00204B01: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00204B42; /* jle: less or equal (signed <=) */

loc_00204B05: ;
    ebx = ebx + esi * 4;

loc_00204B08: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204B42; /* je: equal / zero */

loc_00204B0F: ;
    edx = MEM32(ebp + 0x1C);
    edi = MEM32(edx + 0x10);
    ecx = eax;
    ecx = ecx << 4;
    edx = MEM32(ecx + edi + 8);
    ecx = ecx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    ecx = MEM32(ecx + 4);
    if (TEST_Z(_fa, _fb)) goto loc_00204B2B; /* je: equal / zero */

loc_00204B27: ;
    edx = edx + ecx;
    goto loc_00204B2E;

loc_00204B2B: ;
    edx = ecx + 1;

loc_00204B2E: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00204B3A; /* jb: below (unsigned <) */

loc_00204B36: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00204B45; /* jbe: below or equal (unsigned <=) */

loc_00204B3A: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00204B08; /* jg: greater (signed >) */

loc_00204B42: ;
    eax = eax | 0xFFFFFFFFu;

loc_00204B45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00204B50
 * Original: 0x00204B50 - 0x00204BC9 (121 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204B50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00204B50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebx = eax;
    ebp = 0; /* xor self */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204BAC; /* je: equal / zero */

loc_00204B6B: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00204B75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204B75: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204B93; /* je: equal / zero */

loc_00204B81: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204B88; /* jl: less (signed <) */

loc_00204B86: ;
    eax = 0; /* xor self */

loc_00204B88: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00204BB5; /* jge: greater or equal (signed >=) */

loc_00204B8D: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00204B81; /* jne: not equal / not zero */

loc_00204B93: ;
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204BAC; /* je: equal / zero */

loc_00204B9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00204BAC; /* jl: less (signed <) */

loc_00204B9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00204BAC; /* jge: greater or equal (signed >=) */

loc_00204BA2: ;
    ecx = MEM32(edx + 0x10);
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + eax * 4) = edx;

loc_00204BAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00204BB5: ;
    eax = MEM32(esi);
    ecx = edi + edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00204BC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204BC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00204BD0
 * Original: 0x00204BD0 - 0x00204E1C (588 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204BD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00204BD0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    eax = MEM32(0x5BB9AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    edx = MEM32(edi + 0xA4);
    ebp = MEM32(edi + 0x70);
    ebx = MEM32(edi + 0xA0);
    MEM32(esp + 0x14) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00204BFF; /* jne: not equal / not zero */

loc_00204BF5: ;
    MEM32(0x5BB9AC) = 0x46A72C;

loc_00204BFF: ;
    eax = ebp + 0x48;
    ecx = 0x5F;

loc_00204C07: ;
    esi = MEM32(eax);
    if (0x1F) _cf = (int)(((esi) >> ((0x1F) - 1)) & 1);
    esi = esi >> 0x1F;
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    _cf = 0; /* logical op clears CF */
    esi = esi | 4;
    MEM32(esi + eax) = eax;
    esi = MEM32(eax);
    if (0x1F) _cf = (int)(((esi) >> ((0x1F) - 1)) & 1);
    esi = esi >> 0x1F;
    if (3) _cf = (int)(((esi) >> (32 - (3))) & 1);
    esi = esi << 3;
    _cf = 0; /* logical op clears CF */
    esi = esi | 4;
    MEM32(esi + eax + 4) = eax;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x14)) >> 32) & 1);
    eax = eax + 0x14;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00204C07; /* jne: not equal / not zero */

loc_00204C2A: ;
    esi = MEM32(ebp + 0x7E0);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ebp + 0x7C8) = eax;
    MEM32(ebp + 0x7D4) = eax;
    eax = 0x40000;
    _cf = 0; /* logical op clears CF */
    esi = esi | 1;
    MEM32(ebp + 0x7CC) = eax;
    MEM32(ebp + 0x7C4) = eax;
    MEM32(ebp + 0x7E0) = esi;
    eax = MEM32(edi + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00204C68; /* ja: above (unsigned >) */

loc_00204C63: ;
    eax = 0x48;

loc_00204C68: ;
    ecx = MEM32(ebp);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    MEM32(ebp) = ecx;
    if ((eax == 0)) goto loc_00204DFD; /* je: equal / zero */

loc_00204C7D: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00204C84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204C84: ;
    ecx = MEM32(edi + 0xB8);
    esi = eax;
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00204CDB; /* jl: less (signed <) */

loc_00204C95: ;
    _fa = (uint32_t)(MEM32(edi + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xBC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00204CDB; /* jl: less (signed <) */

loc_00204C9D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00204CDB; /* jne: not equal / not zero */

loc_00204CA1: ;
    ecx = MEM32(0x5BBAB4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x00204CB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204CB1: ;
    SET_LO8(eax, MEM8(0x5BC65A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00204CDB; /* jne: not equal / not zero */

loc_00204CBA: ;
    PUSH32(esp, 0x3F1EC8);
    PUSH32(esp, 0x00204CC4u); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_00204CC4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00204CCF; /* jne: not equal / not zero */

loc_00204CCC: ;
    /* int3: debug-trap slide byte, stepped over */
    goto loc_00204CDB;

loc_00204CCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00204CDB; /* jne: not equal / not zero */

loc_00204CD4: ;
    MEM8(0x5BC65A) = 1;

loc_00204CDB: ;
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 7);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00204CFB; /* je: equal / zero */

loc_00204CE5: ;
    ecx = esi;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(7)) >> 32) & 1);
    esi = esi + 7;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFFF8u;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    eax = esi;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    { uint64_t _t = (uint64_t)(MEM32(esp + 0x14)) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esp + 0x14) = (uint32_t)_t; }  /* sbb */

loc_00204CFB: ;
    ecx = MEM32(edi + 0xB8);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00204D6A; /* jl: less (signed <) */

loc_00204D0A: ;
    _fa = (uint32_t)(MEM32(edi + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xBC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00204D6A; /* jl: less (signed <) */

loc_00204D12: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edi + 0xC8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00204D6A; /* ja: above (unsigned >) */

loc_00204D22: ;
    if (CMP_B(_fa, _fb)) goto loc_00204D28; /* jb: below (unsigned <) */

loc_00204D24: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00204D6A; /* ja: above (unsigned >) */

loc_00204D28: ;
    ecx = MEM32(0x5BBAB4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x00204D39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204D39: ;
    SET_LO8(eax, MEM8(0x5BC659));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00204D6A; /* jne: not equal / not zero */

loc_00204D42: ;
    eax = MEM32(edi + 0xC8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F1E70);
    PUSH32(esp, 0x00204D53u); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_00204D53: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00204D5E; /* jne: not equal / not zero */

loc_00204D5B: ;
    /* int3: debug-trap slide byte, stepped over */
    goto loc_00204D6A;

loc_00204D5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00204D6A; /* jne: not equal / not zero */

loc_00204D63: ;
    MEM8(0x5BC659) = 1;

loc_00204D6A: ;
    MEM32(ebp + 0x2C) = esi;
    ecx = MEM32(edi + 0xB4);
    edi = MEM32(esi);
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    if (0x18) _cf = (int)(((eax) >> (32 - (0x18))) & 1);
    eax = eax << 0x18;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x80FFFFFEu;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00204DC8; /* je: equal / zero */

loc_00204D90: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80004) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x80004 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00204DA7; /* jae: above or equal (unsigned >=) */

loc_00204D98: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00204DA7; /* jae: above or equal (unsigned >=) */

loc_00204D9D: ;
    edx = ebx + -4;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFE1;
    goto loc_00204DE2;

loc_00204DA7: ;
    edx = ebx + -12;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1FFE0;
    edi = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0xFF000000u;
    if (0x13) _cf = (int)(((edi) >> ((0x13) - 1)) & 1);
    edi = edi >> 0x13;
    if (7) _cf = (int)(((ecx) >> (32 - (7))) & 1);
    ecx = ecx << 7;
    _cf = 0; /* logical op clears CF */
    edi = edi & 0xFFF;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edi;
    goto loc_00204DD7;

loc_00204DC8: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1FFE0;
    if (7) _cf = (int)(((ecx) >> (32 - (7))) & 1);
    ecx = ecx << 7;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x80000FFFu;

loc_00204DD7: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFE5u;
    MEM32(esi + 8) = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x80000004u;

loc_00204DE2: ;
    if (5) _cf = (int)(((edx) >> (32 - (5))) & 1);
    edx = edx << 5;
    _cf = 0; /* logical op clears CF */
    edx = edx ^ eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFFFFE0;
    edi = eax;
    MEM32(esi) = eax;
    _cf = 0; /* logical op clears CF */
    edi = edi ^ edx;
    MEM32(esi) = edi;
    eax = MEM32(ebp + 0x2C);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | 1;
    goto loc_00204E03;

loc_00204DFD: ;
    eax = ebp + 0x48;
    MEM32(ebp + 0x2C) = eax;

loc_00204E03: ;
    ecx = MEM32(0x5BB9AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00204E0Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204E0E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x7DC) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00204E20
 * Original: 0x00204E20 - 0x00204F5B (315 bytes, 111 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204E20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00204E20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5BC5D8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x70);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebx + 0x7EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204EFC; /* je: equal / zero */

loc_00204E40: ;
    ecx = MEM32(ebx + 0x7E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204EE9; /* je: equal / zero */

loc_00204E4E: ;
    ecx = MEM32(ebx + 0x7E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204EE9; /* je: equal / zero */

loc_00204E5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00204ED6; /* jl: less (signed <) */

loc_00204E60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00204ED6; /* jl: less (signed <) */

loc_00204E64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00204ED6; /* jg: greater (signed >) */

loc_00204E68: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00204F4A; /* jle: less or equal (signed <=) */

loc_00204E72: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    goto loc_00204E80;

    /* nop */

loc_00204E80: ;
    ecx = MEM32(ebx + 0x7E4);
    edx = MEM32(esp + 0x1C);
    eax = ecx + esi * 4;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00204EA3u); RECOMP_ABI_CALL(0x001FA540u, sub_001FA540); /* call 0x001FA540 */

loc_00204EA3: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204EB7; /* je: equal / zero */

loc_00204EAD: ;
    edx = MEM32(0x46A728);
    MEM32(esp + 0x10) = edx;

loc_00204EB7: ;
    eax = MEM32(ebx + 0x7EC);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00204E80; /* jl: less (signed <) */

loc_00204EC4: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_00204ED6: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_00204EE9: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_00204EFC: ;
    eax = MEM32(edi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204F4A; /* je: equal / zero */

loc_00204F03: ;
    eax = MEM32(edi + 0xA0);
    eax = eax | MEM32(edi + 0xA4);
    if ((eax == 0)) goto loc_00204F4A; /* je: equal / zero */

loc_00204F11: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edi + 0x7C);
    eax = MEM32(edi + 0xA0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    eax = eax + ecx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00204F36u); RECOMP_ABI_CALL(0x001FA540u, sub_001FA540); /* call 0x001FA540 */

loc_00204F36: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00204F4A; /* je: equal / zero */

loc_00204F40: ;
    edx = MEM32(0x46A728);
    MEM32(esp + 0xC) = edx;

loc_00204F4A: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00204F60
 * Original: 0x00204F60 - 0x00204F9C (60 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204F60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1FA690);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00204F72u); RECOMP_ABI_CALL(0x00204E20u, sub_00204E20); /* call 0x00204E20 */

loc_00204F72: ;
    PUSH32(esp, 0x3C6F8C);
    PUSH32(esp, 0x00204F7Cu); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00204F7C: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204F8E; /* je: equal / zero */

loc_00204F89: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00204F8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204F8E: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00204F98u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00204F98: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00204FA0
 * Original: 0x00204FA0 - 0x00204FF8 (88 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00204FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00204FA0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00204FB9; /* je: equal / zero */

loc_00204FAD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00204FB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204FB9: ;
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1A8); PUSH32(esp, 0x00204FC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204FC8: ;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00204FE9; /* je: equal / zero */

loc_00204FD0: ;
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00204FDAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00204FDA: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp);
    MEM32(eax) = ecx;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00204FE9: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp);
    MEM32(eax) = edx;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205000
 * Original: 0x00205000 - 0x00205168 (360 bytes, 120 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205000(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205000: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(0x5BC5D8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x70);
    eax = MEM32(edi + 0x7EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020502C; /* jne: not equal / not zero */

loc_0020501E: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0020502C: ;
    eax = MEM32(edi + 0x7E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205040; /* je: equal / zero */

loc_00205036: ;
    eax = MEM32(edi + 0x7E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020508E; /* jne: not equal / not zero */

loc_00205040: ;
    _fa = (uint32_t)(MEM32(ebp + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xBC), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00205084; /* jl: less (signed <) */

loc_00205049: ;
    ecx = MEM32(0x5BBAB4);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x0020505Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020505A: ;
    SET_LO8(eax, MEM8(0x5BC65C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00205084; /* jne: not equal / not zero */

loc_00205063: ;
    PUSH32(esp, 0x3F1F4C);
    PUSH32(esp, 0x0020506Du); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_0020506D: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205078; /* jne: not equal / not zero */

loc_00205075: ;
    /* int3: debug-trap slide byte, stepped over */
    goto loc_00205084;

loc_00205078: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205084; /* jne: not equal / not zero */

loc_0020507D: ;
    MEM8(0x5BC65C) = 1;

loc_00205084: ;
    ecx = MEM32(0x46A728);
    MEM32(esp + 8) = ecx;

loc_0020508E: ;
    eax = MEM32(edi + 0x7EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0020510F; /* jl: less (signed <) */

loc_00205098: ;
    ecx = MEM32(edi + 0x7E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0020510F; /* jl: less (signed <) */

loc_002050A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020510F; /* jg: greater (signed >) */

loc_002050A6: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002050FC; /* jle: less or equal (signed <=) */

loc_002050AD: ;
    /* nop */

loc_002050B0: ;
    edx = MEM32(edi + 0x7E4);
    ecx = MEM32(edx + esi * 4);
    eax = edx + esi * 4;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x002050CEu); RECOMP_ABI_CALL(0x001FA6F0u, sub_001FA6F0); /* call 0x001FA6F0 */

loc_002050CE: ;
    ecx = MEM32(0x46A728);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002050F8; /* je: equal / zero */

loc_002050D8: ;
    eax = MEM32(edi + 0x7EC);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002050B0; /* jl: less (signed <) */

loc_002050E5: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_002050F8: ;
    MEM32(esp + 0xC) = ecx;

loc_002050FC: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0020510F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xBC), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00205154; /* jl: less (signed <) */

loc_00205118: ;
    SET_LO8(eax, MEM8(0x5BC65B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00205154; /* jne: not equal / not zero */

loc_00205121: ;
    PUSH32(esp, 0x3F1F08);
    PUSH32(esp, 0x0020512Bu); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_0020512B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205148; /* jne: not equal / not zero */

loc_00205133: ;
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00205148: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205154; /* jne: not equal / not zero */

loc_0020514D: ;
    MEM8(0x5BC65B) = 1;

loc_00205154: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205170
 * Original: 0x00205170 - 0x002053E8 (632 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205170(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205170: ;
    esp = esp - 0x14;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xB8), 3 (32-bit) */
    MEM32(esp + 4) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_002051A1; /* jl: less (signed <) */

loc_00205183: ;
    eax = MEM32(edi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1A8); PUSH32(esp, 0x00205192u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205192: ;
    edx = MEM32(edi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1A8); PUSH32(esp, 0x002051A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002051A1: ;
    ecx = MEM32(edi + 0x70);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002053CC; /* je: equal / zero */

loc_002051B2: ;
    eax = eax & 0xFFFFFFFDu;
    MEM32(ecx) = eax;
    eax = eax >> 3;
    PUSH32(esp, ebx);
    edx = ecx + eax * 4 + -4;
    PUSH32(esp, ebp);
    eax = ecx + 4;
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_002051D0: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002053AF; /* je: equal / zero */

loc_002051DA: ;
    MEM32(eax) = 0;

loc_002051E0: ;
    _fa = (uint32_t)(MEM32(edi + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xB8), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002051F1; /* jl: less (signed <) */

loc_002051E9: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002051F1u); RECOMP_ABI_CALL(0x001F9330u, sub_001F9330); /* call 0x001F9330 */

loc_002051F1: ;
    ebx = MEM32(esi);
    ecx = ebx;
    ecx = ecx >> 0x1F;
    eax = ecx * 8;
    eax = eax | 4;
    edx = MEM32(eax + esi);
    eax = ebx;
    eax = eax >> 5;
    eax = eax & 0x7FFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00205226; /* jne: not equal / not zero */

loc_00205218: ;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0xFFF;
    ecx = ecx << 0x13;
    eax = eax + ecx;

loc_00205226: ;
    eax = eax + 3;
    edx = ebx;
    edx = edx & 0x1E;
    eax = eax & 0xFFFFFFFCu;
    edi = eax + edx * 2 + 4;
    edx = MEM32(edi + esi);
    eax = edi + esi;
    ecx = edx;
    ecx = ecx >> 5;
    ebp = edx;
    ebp = ebp & 0x80000000u;
    ecx = ecx & 0x7FFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205264; /* jne: not equal / not zero */

loc_00205256: ;
    ebp = MEM32(eax + 8);
    ebp = ebp & 0xFFF;
    ebp = ebp << 0x13;
    ecx = ecx + ebp;

loc_00205264: ;
    ecx = ecx + 3;
    edx = edx & 0x1E;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    ebp = ecx + edx * 2 + 4;
    if (TEST_NZ(_fa, _fb)) goto loc_002052AD; /* jne: not equal / not zero */

loc_00205276: ;
    ecx = MEM32(esi + -4);
    esi = esi - ecx;
    edi = edi + ecx;
    ecx = MEM32(esi);
    ecx = ecx >> 0x1F;
    ecx = ecx << 3;
    ecx = ecx | 4;
    edx = ecx + esi;
    ecx = MEM32(edx);
    ebx = MEM32(ecx);
    edx = MEM32(edx + 4);
    ebx = ebx >> 0x1F;
    ebx = ebx << 3;
    ebx = ebx | 4;
    MEM32(ebx + ecx + 4) = edx;
    ebx = MEM32(edx);
    ebx = ebx >> 0x1F;
    ebx = ebx << 3;
    ebx = ebx | 4;
    MEM32(ebx + edx) = ecx;

loc_002052AD: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020538B; /* je: equal / zero */

loc_002052BA: ;
    edx = MEM32(eax + ebp);
    ecx = MEM32(eax);
    edx = edx & 1;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(eax) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002052FB; /* jne: not equal / not zero */

loc_002052CB: ;
    ecx = ecx >> 0x1F;
    ecx = ecx << 3;
    ecx = ecx | 4;
    edx = MEM32(eax + ecx);
    eax = eax + ecx;
    ecx = MEM32(edx);
    eax = MEM32(eax + 4);
    ecx = ecx >> 0x1F;
    ecx = ecx << 3;
    ecx = ecx | 4;
    MEM32(ecx + edx + 4) = eax;
    ecx = MEM32(eax);
    ecx = ecx >> 0x1F;
    ecx = ecx << 3;
    edi = edi + ebp;
    ecx = ecx | 4;
    MEM32(ecx + eax) = edx;

loc_002052FB: ;
    edx = MEM32(ebx + 0x48);
    ebx = ebx + 0x48;
    edx = edx >> 0x1F;
    edx = edx << 3;
    edx = edx | 4;
    ebp = MEM32(edx + ebx);
    eax = edx + ebx;
    MEM32(eax) = esi;
    eax = MEM32(ebp);
    eax = eax >> 0x1F;
    eax = eax << 3;
    eax = eax | 4;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(eax + ebp + 4) = esi;
    PUSH32(esp, 0x0020532Au); RECOMP_ABI_CALL(0x001E6C10u, sub_001E6C10); /* call 0x001E6C10 */

loc_0020532A: ;
    edx = MEM32(esi);
    edx = edx | 1;
    eax = edx;
    eax = eax >> 0x1F;
    MEM32(esi) = edx;
    eax = eax << 3;
    eax = eax | 4;
    MEM32(eax + esi + 4) = ebx;
    ecx = MEM32(esi);
    ecx = ecx >> 0x1F;
    ecx = ecx << 3;
    ecx = ecx | 4;
    MEM32(ecx + esi) = ebp;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx >> 5;
    edx = eax;
    edx = edx & 0x80000000u;
    ecx = ecx & 0x7FFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205379; /* jne: not equal / not zero */

loc_0020536B: ;
    edx = MEM32(esi + 8);
    edx = edx & 0xFFF;
    edx = edx << 0x13;
    ecx = ecx + edx;

loc_00205379: ;
    ecx = ecx + 3;
    eax = eax >> 1;
    eax = eax & 0xF;
    ecx = ecx & 0xFFFFFFFCu;
    ecx = ecx + esi;
    MEM32(ecx + eax * 4) = edi;
    goto loc_0020539B;

loc_0020538B: ;
    ebp = ebp + edi;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00205395u); RECOMP_ABI_CALL(0x001E6C10u, sub_001E6C10); /* call 0x001E6C10 */

loc_00205395: ;
    MEM32(esi) = MEM32(esi) | 1;
    MEM32(ebx + 0x2C) = esi;

loc_0020539B: ;
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_002051E0; /* jne: not equal / not zero */

loc_002053AB: ;
    eax = MEM32(esp + 0x14);

loc_002053AF: ;
    edx = MEM32(esp + 0x20);
    ecx = eax;
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002051D0; /* jne: not equal / not zero */

loc_002053C4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_002053CC: ;
    ecx = edi;
    PUSH32(esp, 0x002053D3u); RECOMP_ABI_CALL(0x00204BD0u, sub_00204BD0); /* call 0x00204BD0 */

loc_002053D3: ;
    _fa = (uint32_t)(MEM32(edi + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xB8), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002053E3; /* jl: less (signed <) */

loc_002053DC: ;
    ecx = edi;
    PUSH32(esp, 0x002053E3u); RECOMP_ABI_CALL(0x001F9A20u, sub_001F9A20); /* call 0x001F9A20 */

loc_002053E3: ;
    POP32(esp, edi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002053F0
 * Original: 0x002053F0 - 0x0020564C (604 bytes, 205 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002053F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002053F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00205415; /* je: equal / zero */

loc_00205405: ;
    edi = MEM32(ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x98); PUSH32(esp, 0x00205415u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205415: ;
    edi = MEM32(esi + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ecx = MEM32(0x5BC5D8);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x44);
    esi = MEM32(esi + 0x4C);
    MEM32(esp + 0x1C) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00205508; /* je: equal / zero */

loc_00205431: ;
    PUSH32(esp, 0x3F0638);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x0020543Eu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0020543E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020544A; /* je: equal / zero */

loc_00205445: ;
    ebx = 2;

loc_0020544A: ;
    PUSH32(esp, 0x36A348);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00205455u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00205455: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020545F; /* je: equal / zero */

loc_0020545C: ;
    ebx = ebx | 4;

loc_0020545F: ;
    PUSH32(esp, 0x3F1FE0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020546Au); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0020546A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205474; /* je: equal / zero */

loc_00205471: ;
    ebx = ebx | 1;

loc_00205474: ;
    PUSH32(esp, 0x3F1FD4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020547Fu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0020547F: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205489; /* je: equal / zero */

loc_00205486: ;
    ebx = ebx | 0x10;

loc_00205489: ;
    PUSH32(esp, 0x3F0620);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00205494u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00205494: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020549E; /* je: equal / zero */

loc_0020549B: ;
    ebx = ebx | 8;

loc_0020549E: ;
    PUSH32(esp, 0x3F0608);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002054A9u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_002054A9: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002054B6; /* je: equal / zero */

loc_002054B0: ;
    ebx = ebx | 0x80;

loc_002054B6: ;
    PUSH32(esp, 0x3F1FC4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002054C1u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_002054C1: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002054CB; /* je: equal / zero */

loc_002054C8: ;
    ebx = ebx | 0x40;

loc_002054CB: ;
    PUSH32(esp, 0x3F05F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002054D6u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_002054D6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002054E0; /* je: equal / zero */

loc_002054DD: ;
    ebx = ebx | 0x20;

loc_002054E0: ;
    edx = MEM32(0x5BC508);
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002054FE; /* jne: not equal / not zero */

loc_002054EF: ;
    eax = MEM32(ecx + 0xC0);
    eax = eax ^ ebx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002054FE; /* je: equal / zero */

loc_002054FB: ;
    ebx = ebx ^ 1;

loc_002054FE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00205504u); RECOMP_ABI_CALL(0x001FBAF0u, sub_001FBAF0); /* call 0x001FBAF0 */

loc_00205504: ;
    ebx = MEM32(esp + 0x10);

loc_00205508: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205577; /* je: equal / zero */

loc_0020550C: ;
    edi = MEM32(ebx + 0xB8);
    PUSH32(esp, 0x3F1FB8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0020551Du); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0020551D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205528; /* je: equal / zero */

loc_00205524: ;
    edi = 0; /* xor self */
    goto loc_00205571;

loc_00205528: ;
    PUSH32(esp, 0x3F1FA8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00205533u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00205533: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205541; /* je: equal / zero */

loc_0020553A: ;
    edi = 1;
    goto loc_00205571;

loc_00205541: ;
    PUSH32(esp, 0x3F1F94);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0020554Cu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0020554C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020555A; /* je: equal / zero */

loc_00205553: ;
    edi = 2;
    goto loc_00205571;

loc_0020555A: ;
    PUSH32(esp, 0x3F1F84);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00205565u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00205565: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205571; /* je: equal / zero */

loc_0020556C: ;
    edi = 3;

loc_00205571: ;
    MEM32(ebx + 0xB8) = edi;

loc_00205577: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0020563B; /* je: equal / zero */

loc_00205580: ;
    edi = MEM32(ebx + 0xBC);
    PUSH32(esp, 0x3EEB94);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00205591u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00205591: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002055B1; /* je: equal / zero */

loc_00205598: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edi = 0; /* xor self */
    MEM32(ebx + 0xBC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_002055B1: ;
    PUSH32(esp, 0x3EEB84);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002055BCu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_002055BC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002055DF; /* je: equal / zero */

loc_002055C3: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edi = 1;
    MEM32(ebx + 0xBC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_002055DF: ;
    PUSH32(esp, 0x3EEB74);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002055EAu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_002055EA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020560D; /* je: equal / zero */

loc_002055F1: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edi = 2;
    MEM32(ebx + 0xBC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0020560D: ;
    PUSH32(esp, 0x3EEB64);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00205618u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00205618: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205624; /* je: equal / zero */

loc_0020561F: ;
    edi = 3;

loc_00205624: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(ebx + 0xBC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0020563B: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00205650
 * Original: 0x00205650 - 0x002056CC (124 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205650: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x7C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002056C1; /* je: equal / zero */

loc_0020565F: ;
    _fa = (uint32_t)(MEM8(esi + 0x81)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x81), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002056C1; /* je: equal / zero */

loc_00205667: ;
    _fa = (uint32_t)(MEM8(esi + 0x80)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x80), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205689; /* je: equal / zero */

loc_0020566F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00205675u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00205675: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002056B2; /* je: equal / zero */

loc_0020567C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00205687u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205687: ;
    goto loc_002056B2;

loc_00205689: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18C); PUSH32(esp, 0x00205693u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205693: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002056B2; /* je: equal / zero */

loc_00205697: ;
    eax = MEM32(esi + 0xA0);
    ecx = MEM32(0x5BB9AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x7C);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x002056B2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002056B2: ;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;

loc_002056C1: ;
    POP32(esp, edi);
    MEM8(esi + 0x81) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002056D0
 * Original: 0x002056D0 - 0x00205920 (592 bytes, 187 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002056D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002056D0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA0);
    eax = eax | MEM32(esi + 0xA4);
    if ((eax != 0)) goto loc_002056EC; /* jne: not equal / not zero */

loc_002056E5: ;
    ecx = esi;
    PUSH32(esp, 0x002056ECu); RECOMP_ABI_CALL(0x00205170u, sub_00205170); /* call 0x00205170 */

loc_002056EC: ;
    SET_LO8(eax, MEM8(esi + 0x74));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002056FC; /* je: equal / zero */

loc_002056F5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x002056FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002056FC: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0020579E; /* je: equal / zero */

loc_00205706: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020571F; /* jle: less or equal (signed <=) */

loc_0020570F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020571D; /* jge: greater or equal (signed >=) */

loc_00205714: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_0020572D;

loc_0020571D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_0020571F: ;
    if (CMP_NE(_fa, _fb)) goto loc_0020572B; /* jne: not equal / not zero */

loc_00205721: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020572D; /* jne: not equal / not zero */

loc_0020572B: ;
    ecx = 0; /* xor self */

loc_0020572D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00205733u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205733: ;
    edx = MEM32(esi);
    edi = eax;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1A4); PUSH32(esp, 0x00205744u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205744: ;
    _fa = (uint32_t)(MEM32(esi + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xBC), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00205801; /* jl: less (signed <) */

loc_00205751: ;
    _fa = (uint32_t)(MEM8(0x5BC65F)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5BC65F), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205801; /* jne: not equal / not zero */

loc_0020575D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00205768; /* jne: not equal / not zero */

loc_00205763: ;
    ecx = 0x3C806C;

loc_00205768: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F20B8);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x00205785u); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_00205785: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205790; /* jne: not equal / not zero */

loc_0020578D: ;
    /* int3: debug-trap slide byte, stepped over */
    goto loc_00205801;

loc_00205790: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205801; /* jne: not equal / not zero */

loc_00205795: ;
    MEM8(0x5BC65F) = 1;
    goto loc_00205801;

loc_0020579E: ;
    eax = MEM32(esi + 0x58);
    eax = eax | MEM32(esi + 0x5C);
    if ((eax == 0)) goto loc_0020580B; /* je: equal / zero */

loc_002057A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002057ACu); RECOMP_ABI_CALL(0x001E9C10u, sub_001E9C10); /* call 0x001E9C10 */

loc_002057AC: ;
    ecx = MEM32(esi + 0xBC);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00205801; /* jl: less (signed <) */

loc_002057BA: ;
    _fa = (uint32_t)(MEM8(0x5BC65E)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5BC65E), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205801; /* jne: not equal / not zero */

loc_002057C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002057CD; /* jne: not equal / not zero */

loc_002057C8: ;
    ecx = 0x3C806C;

loc_002057CD: ;
    eax = MEM32(esi + 0x58);
    edx = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F2060);
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x002057EAu); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_002057EA: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002057F5; /* jne: not equal / not zero */

loc_002057F2: ;
    /* int3: debug-trap slide byte, stepped over */
    goto loc_00205801;

loc_002057F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205801; /* jne: not equal / not zero */

loc_002057FA: ;
    MEM8(0x5BC65E) = 1;

loc_00205801: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0020580Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020580B: ;
    eax = MEM32(esi + 0xC0);
    eax = eax >> 9;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020587E; /* jne: not equal / not zero */

loc_00205818: ;
    ecx = MEM32(esi + 0x70);
    _fa = (uint32_t)(MEM32(ecx + 0x7F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x7F0), 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020587E; /* jbe: below or equal (unsigned <=) */

loc_00205824: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020582Au); RECOMP_ABI_CALL(0x001E9C10u, sub_001E9C10); /* call 0x001E9C10 */

loc_0020582A: ;
    ecx = MEM32(esi + 0xBC);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020587E; /* jl: less (signed <) */

loc_00205838: ;
    _fa = (uint32_t)(MEM8(0x5BC65D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x5BC65D), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020587E; /* jne: not equal / not zero */

loc_00205840: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0020584B; /* jne: not equal / not zero */

loc_00205846: ;
    ecx = 0x3C806C;

loc_0020584B: ;
    edx = MEM32(esi + 0x70);
    eax = MEM32(edx + 0x7F0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F1FF0);
    PUSH32(esp, 0x00205867u); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_00205867: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00205872; /* jne: not equal / not zero */

loc_0020586F: ;
    /* int3: debug-trap slide byte, stepped over */
    goto loc_0020587E;

loc_00205872: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020587E; /* jne: not equal / not zero */

loc_00205877: ;
    MEM8(0x5BC65D) = 1;

loc_0020587E: ;
    ecx = MEM32(esi + 0x18);
    eax = MEM32(0x5BB914);
    edi = MEM32(0x5BC094);
    eax = eax + ecx;
    MEM32(0x5BB914) = eax;
    edx = MEM32(esi + 0x38);
    edi = edi + edx;
    MEM32(0x5BC094) = edi;
    ecx = MEM32(esi + 0xA4);
    eax = MEM32(esi + 0xA0);
    eax = eax | ecx;
    POP32(esp, edi);
    ecx = esi;
    if ((eax == 0)) goto loc_002058BB; /* je: equal / zero */

loc_002058B1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x188); PUSH32(esp, 0x002058B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002058B9: ;
    goto loc_002058C2;

loc_002058BB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x002058C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002058C2: ;
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020590C; /* je: equal / zero */

loc_002058C9: ;
    eax = MEM32(eax + 0x7E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002058FA; /* je: equal / zero */

loc_002058D3: ;
    ecx = MEM32(0x5BB9AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002058DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002058DF: ;
    eax = MEM32(esi + 0x70);
    MEM32(eax + 0x7E8) = ebx;
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + 0x7EC) = ebx;
    edx = MEM32(esi + 0x70);
    MEM32(edx + 0x7F0) = ebx;

loc_002058FA: ;
    ecx = MEM32(0x5BB9AC);
    edx = MEM32(esi + 0x70);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00205909u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205909: ;
    MEM32(esi + 0x70) = ebx;

loc_0020590C: ;
    MEM32(esi + 0x70) = ebx;
    eax = MEM32(0x5BC580);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x5BC580) = eax;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00205920
 * Original: 0x00205920 - 0x00205950 (48 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00205920: ;
    ecx = MEM32(ecx + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0020594B; /* jle: less or equal (signed <=) */

loc_0020592F: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);

loc_00205933: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_00205944; /* js: sign (negative) */

loc_00205939: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFFFFFF;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */

loc_00205944: ;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00205933; /* jne: not equal / not zero */

loc_0020594A: ;
    POP32(esp, edi);

loc_0020594B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00205950
 * Original: 0x00205950 - 0x0020597D (45 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00205950: ;
    ecx = MEM32(ecx + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0020597B; /* jle: less or equal (signed <=) */

loc_0020595F: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);

loc_00205963: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_00205974; /* jns: not sign (positive) */

loc_00205969: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFFFFFF;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */

loc_00205974: ;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00205963; /* jne: not equal / not zero */

loc_0020597A: ;
    POP32(esp, edi);

loc_0020597B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00205980
 * Original: 0x00205980 - 0x002059B0 (48 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00205980: ;
    ecx = MEM32(ecx + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002059AE; /* jle: less or equal (signed <=) */

loc_0020598F: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);

loc_00205993: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (((int32_t)((_fa) & (_fb)) >= 0)) goto loc_002059A7; /* jns: not sign (positive) */

loc_00205999: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x7FFFFFFF;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */

loc_002059A7: ;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00205993; /* jne: not equal / not zero */

loc_002059AD: ;
    POP32(esp, edi);

loc_002059AE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002059B0
 * Original: 0x002059B0 - 0x002059F0 (64 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002059B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002059B0: ;
    ecx = MEM32(ecx + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = 0; /* xor self */
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002059EA; /* jle: less or equal (signed <=) */

loc_002059BF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);
    ebx = esi;

loc_002059C6: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002059E2; /* js: sign (negative) */

loc_002059CC: ;
    esi = 0; /* xor self */
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002059E2; /* ja: above (unsigned >) */

loc_002059D8: ;
    if (CMP_B(_fa, _fb)) goto loc_002059DE; /* jb: below (unsigned <) */

loc_002059DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002059E2; /* jae: above or equal (unsigned >=) */

loc_002059DE: ;
    eax = ecx;
    edx = esi;

loc_002059E2: ;
    edi = edi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002059C6; /* jne: not equal / not zero */

loc_002059E8: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002059EA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002059F0
 * Original: 0x002059F0 - 0x00205A28 (56 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002059F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002059F0: ;
    edx = MEM32(ecx + 0x74);
    ecx = MEM32(ecx + 0x78);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00205A1F; /* jle: less or equal (signed <=) */

loc_00205A02: ;
    edi = MEM32(esp + 0x10);

loc_00205A06: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205A22; /* je: equal / zero */

loc_00205A0A: ;
    if (CMP_A(_fa, _fb)) goto loc_00205A1F; /* ja: above (unsigned >) */

loc_00205A0C: ;
    ebx = MEM32(ecx + 0x10);
    ebx = MEM32(ebx + eax * 4);
    ebx = ebx & 0x7FFFFFFF;
    edx = edx + ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00205A06; /* jl: less (signed <) */

loc_00205A1F: ;
    eax = eax | 0xFFFFFFFFu;

loc_00205A22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205A30
 * Original: 0x00205A30 - 0x00205B1A (234 bytes, 90 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205A30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205A30: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    edx = ecx;
    ecx = MEM32(edx + 0x78);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4);
    ecx = ecx + eax * 4;
    esi = esi & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    MEM32(ecx) = esi;
    ebp = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00205A84; /* jle: less or equal (signed <=) */

loc_00205A59: ;
    ecx = MEM32(edx + 0x78);
    ecx = MEM32(ecx + 0x10);
    ecx = ecx + eax * 4 + -4;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00205A7A; /* js: sign (negative) */

loc_00205A69: ;
    esi = MEM32(esp + 0x20);
    ecx = ecx & 0x7FFFFFFF;
    MEM32(esi) = ecx;
    ebp = eax + -1;
    goto loc_00205A84;

loc_00205A7A: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = 0;

loc_00205A84: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = ebp;
    esi = MEM32(edx + 0x78);
    eax = MEM32(esi + 0x10);
    ebx = MEM32(eax + ebp * 4);
    eax = MEM32(esi + 8);
    edi = ebp + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00205AFA; /* jge: greater or equal (signed >=) */

loc_00205A9D: ;
    /* nop */

loc_00205AA0: ;
    ecx = MEM32(esi + 0x10);
    eax = ecx + ebp * 4 + 4;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00205AFA; /* js: sign (negative) */

loc_00205AAD: ;
    eax = eax + ebx;
    eax = eax ^ ebx;
    eax = eax & 0x7FFFFFFF;
    ebx = ebx ^ eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00205AF2; /* jle: less or equal (signed <=) */

loc_00205ABF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00205AF2; /* jl: less (signed <) */

loc_00205AC3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00205AF2; /* jge: greater or equal (signed >=) */

loc_00205AC7: ;
    ecx = eax + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00205AEF; /* je: equal / zero */

loc_00205ACE: ;
    edx = MEM32(esi + 0x10);
    eax = eax - edi;
    ecx = edx + edi * 4;
    eax = eax * 4 + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = ecx + 4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00205AE8u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_00205AE8: ;
    edx = MEM32(esp + 0x1C);
    esp = esp + 0xC;

loc_00205AEF: ;
    MEM32(esi + 8) = MEM32(esi + 8) - 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00205AF2: ;
    esi = MEM32(edx + 0x78);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00205AA0; /* jl: less (signed <) */

loc_00205AFA: ;
    edx = MEM32(edx + 0x78);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205B12; /* je: equal / zero */

loc_00205B04: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00205B12; /* jl: less (signed <) */

loc_00205B08: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00205B12; /* jge: greater or equal (signed >=) */

loc_00205B0C: ;
    eax = MEM32(edx + 0x10);
    MEM32(eax + ebp * 4) = ebx;

loc_00205B12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00205B20
 * Original: 0x00205B20 - 0x00205BF6 (214 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205B20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205B50; /* je: equal / zero */

loc_00205B2A: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00205B3E; /* jne: not equal / not zero */

loc_00205B38: ;
    edx = MEM32(0x5BC538);

loc_00205B3E: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00205B50u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205B50: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205B7D; /* je: equal / zero */

loc_00205B57: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00205B6B; /* jne: not equal / not zero */

loc_00205B65: ;
    edx = MEM32(0x5BC538);

loc_00205B6B: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00205B7Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205B7D: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205BAA; /* je: equal / zero */

loc_00205B84: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00205B98; /* jne: not equal / not zero */

loc_00205B92: ;
    edx = MEM32(0x5BC538);

loc_00205B98: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00205BAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205BAA: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205BD7; /* je: equal / zero */

loc_00205BB1: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00205BC5; /* jne: not equal / not zero */

loc_00205BBF: ;
    edx = MEM32(0x5BC538);

loc_00205BC5: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00205BD7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205BD7: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00205BDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205BDF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00205BE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205BE6: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00205C00
 * Original: 0x00205C00 - 0x00205C70 (112 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F2118);
    PUSH32(esp, 0x00205C13u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00205C13: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205C25; /* je: equal / zero */

loc_00205C20: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00205C25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205C25: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00205C2Fu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00205C2F: ;
    eax = MEM32(edi + 0x4C);
    esp = esp + 4;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00205C6D; /* jle: less or equal (signed <=) */

loc_00205C3B: ;
    goto loc_00205C40;

    /* nop */

loc_00205C40: ;
    ecx = MEM32(edi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205C5A; /* je: equal / zero */

loc_00205C47: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00205C5A; /* jl: less (signed <) */

loc_00205C4B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00205C5A; /* jg: greater (signed >) */

loc_00205C4F: ;
    eax = ZX16(MEM16(edi + 0x3E));
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    eax = eax + ecx;
    goto loc_00205C5C;

loc_00205C5A: ;
    eax = 0; /* xor self */

loc_00205C5C: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00205C65u); RECOMP_ABI_CALL(0x001FC3C0u, sub_001FC3C0); /* call 0x001FC3C0 */

loc_00205C65: ;
    eax = MEM32(edi + 0x4C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00205C40; /* jl: less (signed <) */

loc_00205C6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00205C70
 * Original: 0x00205C70 - 0x00205CDE (110 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205C70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F213C);
    PUSH32(esp, 0x00205C83u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00205C83: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205C95; /* je: equal / zero */

loc_00205C90: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00205C95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205C95: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00205C9Fu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00205C9F: ;
    eax = MEM32(edi + 0x5C);
    esp = esp + 4;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00205CDB; /* jle: less or equal (signed <=) */

loc_00205CAB: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    edi = edi;

loc_00205CB0: ;
    ecx = MEM32(edi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205CC4; /* je: equal / zero */

loc_00205CB7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00205CC4; /* jl: less (signed <) */

loc_00205CBB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00205CC4; /* jg: greater (signed >) */

loc_00205CBF: ;
    eax = ebx + ecx;
    goto loc_00205CC6;

loc_00205CC4: ;
    eax = 0; /* xor self */

loc_00205CC6: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00205CCFu); RECOMP_ABI_CALL(0x001FC620u, sub_001FC620); /* call 0x001FC620 */

loc_00205CCF: ;
    eax = MEM32(edi + 0x5C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00205CB0; /* jl: less (signed <) */

loc_00205CDA: ;
    POP32(esp, ebx);

loc_00205CDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00205CE0
 * Original: 0x00205CE0 - 0x00205D10 (48 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00205CE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x8C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205D06; /* je: equal / zero */

loc_00205CEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00205CF4u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00205CF4: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00205D06; /* je: equal / zero */

loc_00205CFB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00205D06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205D06: ;
    MEM8(edi + 0x94) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00205D10
 * Original: 0x00205D10 - 0x00206247 (1335 bytes, 408 insns)
 * Category: game_debug
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00205D10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00205D10: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x9C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    if (8) _cf = (int)(((eax) >> ((8) - 1)) & 1);
    eax = eax >> 8;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x28) = edi;
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00205D8E; /* je: equal / zero */

loc_00205D51: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00205D7B; /* jl: less (signed <) */

loc_00205D5A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00205D68; /* jne: not equal / not zero */

loc_00205D5F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = 0x3F0898;
    if (CMP_EQ(_fa, _fb)) goto loc_00205D6D; /* je: equal / zero */

loc_00205D68: ;
    eax = 0x3F0888;

loc_00205D6D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F26D0);
    PUSH32(esp, 0x00205D78u); RECOMP_ABI_CALL(0x001F83B0u, sub_001F83B0); /* call 0x001F83B0 */

loc_00205D78: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_00205D7B: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00205D86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205D86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0020623B; /* je: equal / zero */

loc_00205D8E: ;
    ecx = MEM32(ebp + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00205DA1; /* je: equal / zero */

loc_00205D95: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00205DA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205DA1: ;
    edi = MEM32(esp + 0x44);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebp + 0x90));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00205DB9; /* jbe: below or equal (unsigned <=) */

loc_00205DB3: ;
    edi = eax;
    MEM32(esp + 0x44) = edi;

loc_00205DB9: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 4 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00205DC8; /* jae: above or equal (unsigned >=) */

loc_00205DBF: ;
    edi = 4;
    MEM32(esp + 0x44) = edi;

loc_00205DC8: ;
    _fa = (uint32_t)(MEM8(ebp + 0x9C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x9C), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00205DE9; /* je: equal / zero */

loc_00205DD1: ;
    eax = ZX16(LO16(edi));
    edx = eax + 4;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x14) = edx;
    goto loc_00205DF0;

loc_00205DE9: ;
    edx = MEM32(esp + 0x20);
    /* nop */

loc_00205DF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00205E8F; /* je: equal / zero */

loc_00205DF9: ;
    eax = MEM32(ebp + 0x18);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x84) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0020618C; /* jb: below (unsigned <) */

loc_00205E0C: ;
    if (CMP_A(_fa, _fb)) goto loc_00205E1A; /* ja: above (unsigned >) */

loc_00205E0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x80) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0020618C; /* jbe: below or equal (unsigned <=) */

loc_00205E1A: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00205E25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00205E25: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00205DE9; /* jne: not equal / not zero */

loc_00205E29: ;
    edx = MEM32(ebp + 0x9C);
    eax = MEM32(ebp + 0x98);
    if (6) _cf = (int)(((edx) >> ((6) - 1)) & 1);
    edx = edx >> 6;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0020615D; /* je: equal / zero */

loc_00205E41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0020617F; /* jl: less (signed <) */

loc_00205E4A: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x84);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0020617F; /* jb: below (unsigned <) */

loc_00205E5F: ;
    if (CMP_A(_fa, _fb)) goto loc_00205E6D; /* ja: above (unsigned >) */

loc_00205E61: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x80) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0020617F; /* jbe: below or equal (unsigned <=) */

loc_00205E6D: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F2668);
    PUSH32(esp, 0x00205E7Fu); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_00205E7F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM32(esp + 0x44) = 0;
    g_seh_ebp = ebp; sub_00206529(); return; /* tail jmp 0x00206529 */

loc_00205E8F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x44) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0020613D; /* je: equal / zero */

loc_00205E9F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00205F52; /* je: equal / zero */

loc_00205EA7: ;
    eax = MEM32(ebx + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAAAAAAAFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAAAAAAAFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00205F0D; /* jne: not equal / not zero */

loc_00205EB1: ;
    eax = MEM32(ebx + -8);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    ecx = eax + 4;
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0x00205EC7u); RECOMP_ABI_CALL(0x001E6AF0u, sub_001E6AF0); /* call 0x001E6AF0 */

loc_00205EC7: ;
    esi = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    ecx = esi;
    PUSH32(esp, 0x00205ED3u); RECOMP_ABI_CALL(0x001E6BD0u, sub_001E6BD0); /* call 0x001E6BD0 */

loc_00205ED3: ;
    eax = eax + esi + -4;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBBBBBBBFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBBBBBBBFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00205FF0; /* je: equal / zero */

loc_00205EE4: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00205FF0; /* jl: less (signed <) */

loc_00205EF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xBBBBBBBFu);
    edx = ebx + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F2608);
    PUSH32(esp, 0x00205F05u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_00205F05: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    goto loc_00205FF0;

loc_00205F0D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00205F2A; /* jl: less (signed <) */

loc_00205F16: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xAAAAAAAFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F25A8);
    PUSH32(esp, 0x00205F27u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_00205F27: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;

loc_00205F2A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00206529(); return; } /* jl: less (signed <) */

loc_00205F37: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(ebp + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F2568);
    PUSH32(esp, 0x00205F4Au); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_00205F4A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    g_seh_ebp = ebp; sub_00206529(); return; /* tail jmp 0x00206529 */

loc_00205F52: ;
    _fa = (uint32_t)(MEM32(ebx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAAAAAAAFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + -4), 0xAAAAAAAFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00205FE5; /* jne: not equal / not zero */

loc_00205F5F: ;
    eax = MEM32(ebx + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100010 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00205F97; /* jle: less or equal (signed <=) */

loc_00205F69: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00205F84; /* jl: less (signed <) */

loc_00205F72: ;
    PUSH32(esp, eax);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F2520);
    PUSH32(esp, 0x00205F81u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_00205F81: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;

loc_00205F84: ;
    ecx = ebp;
    PUSH32(esp, 0x00205F8Bu); RECOMP_ABI_CALL(0x001FC890u, sub_001FC890); /* call 0x001FC890 */

loc_00205F8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    esp += 16; return; /* ret 12 */

loc_00205F97: ;
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    ecx = eax + 4;
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0x00205FAAu); RECOMP_ABI_CALL(0x001E6AF0u, sub_001E6AF0); /* call 0x001E6AF0 */

loc_00205FAA: ;
    esi = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    ecx = esi;
    PUSH32(esp, 0x00205FB6u); RECOMP_ABI_CALL(0x001E6BD0u, sub_001E6BD0); /* call 0x001E6BD0 */

loc_00205FB6: ;
    eax = eax + esi + -4;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBBBBBBBFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBBBBBBBFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00205FF0; /* je: equal / zero */

loc_00205FC3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00205FF0; /* jl: less (signed <) */

loc_00205FCC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xBBBBBBBFu);
    edx = ebx + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F24C0);
    PUSH32(esp, 0x00205FE0u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_00205FE0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    goto loc_00205FF0;

loc_00205FE5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00205FEBu); RECOMP_ABI_CALL(0x001E6AF0u, sub_001E6AF0); /* call 0x001E6AF0 */

loc_00205FEB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    esi = eax;

loc_00205FF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00205F2A; /* je: equal / zero */

loc_00205FF8: ;
    ecx = esi;
    PUSH32(esp, 0x00205FFFu); RECOMP_ABI_CALL(0x001E6B10u, sub_001E6B10); /* call 0x001E6B10 */

loc_00205FFF: ;
    edx = MEM32(esp + 0x14);
    edi = eax;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    ecx = esi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x00206012u); RECOMP_ABI_CALL(0x001E6BD0u, sub_001E6BD0); /* call 0x001E6BD0 */

loc_00206012: ;
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0020601Du); RECOMP_ABI_CALL(0x001E6D10u, sub_001E6D10); /* call 0x001E6D10 */

loc_0020601D: ;
    ecx = MEM32(ebp + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00206046; /* je: equal / zero */

loc_00206024: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00206046; /* jl: less (signed <) */

loc_0020602D: ;
    eax = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00206037u); RECOMP_ABI_CALL(0x001E6D10u, sub_001E6D10); /* call 0x001E6D10 */

loc_00206037: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F2460);
    PUSH32(esp, 0x00206043u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_00206043: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;

loc_00206046: ;
    eax = MEM32(ebp + 0x9C);
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00206074; /* je: equal / zero */

loc_00206052: ;
    ecx = esi;
    PUSH32(esp, 0x00206059u); RECOMP_ABI_CALL(0x001E6B10u, sub_001E6B10); /* call 0x001E6B10 */

loc_00206059: ;
    ecx = eax;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    eax = 0xFDFDFDFDu;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(esp + 0x18);

loc_00206074: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x20000000 (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00206116; /* je: equal / zero */

loc_00206080: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00206086u); RECOMP_ABI_CALL(0x001EC6F0u, sub_001EC6F0); /* call 0x001EC6F0 */

loc_00206086: ;
    esi = eax;
    SET_LO16(eax, MEM16(esi));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00206098; /* je: equal / zero */

loc_00206093: ;
    eax = ZX16(LO16(eax));
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;

loc_00206098: ;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), 0 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002060B6; /* jne: not equal / not zero */

loc_0020609F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002060B6; /* jl: less (signed <) */

loc_002060A8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F2418);
    PUSH32(esp, 0x002060B3u); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_002060B3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_002060B6: ;
    eax = MEM32(ebp + 0x50);
    ebx = MEM32(ebp + 0x54);
    edi = MEM32(ebp + 0x58);
    edx = MEM32(ebp + 0x5C);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */
    MEM32(ebp + 0x50) = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    MEM32(ebp + 0x54) = ebx;
    MEM32(ebp + 0x58) = edi;
    MEM32(ebp + 0x5C) = edx;
    MEM16(esi + 2) = MEM16(esi + 2) - 1;
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 2), 0 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00206529(); return; } /* jne: not equal / not zero */

loc_002060EA: ;
    SET_LO8(eax, MEM8(ebp + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00206106; /* je: equal / zero */

loc_002060F1: ;
    eax = MEM32(esi + -4);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00206106u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206106: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    esi = esi + 0xFFFFFFF8u;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00206111u); RECOMP_ABI_CALL(0x001EEE40u, sub_001EEE40); /* call 0x001EEE40 */

loc_00206111: ;
    g_seh_ebp = ebp; sub_00206529(); return; /* tail jmp 0x00206529 */

loc_00206116: ;
    SET_LO8(eax, MEM8(ebp + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00206130; /* je: equal / zero */

loc_0020611D: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00206130u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206130: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00206138u); RECOMP_ABI_CALL(0x001EEE40u, sub_001EEE40); /* call 0x001EEE40 */

loc_00206138: ;
    g_seh_ebp = ebp; sub_00206529(); return; /* tail jmp 0x00206529 */

loc_0020613D: ;
    ebp = MEM32(ebp + 0x74);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00206151; /* je: equal / zero */

loc_00206144: ;
    eax = MEM32(ebp);
    ecx = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00206151u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206151: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    esp += 16; return; /* ret 12 */

loc_0020615D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0020617F; /* jl: less (signed <) */

loc_00206162: ;
    ecx = MEM32(ebp + 0x80);
    edx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F2388);
    PUSH32(esp, 0x0020617Cu); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_0020617C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;

loc_0020617F: ;
    MEM32(esp + 0x44) = 0;
    g_seh_ebp = ebp; sub_00206529(); return; /* tail jmp 0x00206529 */

loc_0020618C: ;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x24) = esi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00206313(); return; } /* je: equal / zero */

loc_0020619A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00206247(); return; } /* je: equal / zero */

loc_002061A2: ;
    _fa = (uint32_t)(MEM32(ebx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAAAAAAAFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + -4), 0xAAAAAAAFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00206203; /* jne: not equal / not zero */

loc_002061AB: ;
    edi = MEM32(ebx + -8);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    ecx = edi + 4;
    PUSH32(esp, ebx);
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0x002061C5u); RECOMP_ABI_CALL(0x001E6AF0u, sub_001E6AF0); /* call 0x001E6AF0 */

loc_002061C5: ;
    esi = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    ecx = esi;
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0x002061D5u); RECOMP_ABI_CALL(0x001E6BD0u, sub_001E6BD0); /* call 0x001E6BD0 */

loc_002061D5: ;
    eax = eax + esi + -4;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBBBBBBBFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBBBBBBBFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00206256(); return; } /* je: equal / zero */

loc_002061E2: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00206256(); return; } /* jl: less (signed <) */

loc_002061EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xBBBBBBBFu);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebx)) >> 32) & 1);
    edi = edi + ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F2328);
    PUSH32(esp, 0x002061FEu); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_002061FE: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_00206256(); return; /* tail jmp 0x00206256 */

loc_00206203: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00206209u); RECOMP_ABI_CALL(0x001E6AF0u, sub_001E6AF0); /* call 0x001E6AF0 */

loc_00206209: ;
    esi = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    ecx = esi;
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0x00206219u); RECOMP_ABI_CALL(0x001F34E0u, sub_001F34E0); /* call 0x001F34E0 */

loc_00206219: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00206256(); return; } /* je: equal / zero */

loc_0020621D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00206234; /* jl: less (signed <) */

loc_00206226: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F22D8);
    PUSH32(esp, 0x00206231u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_00206231: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_00206234: ;
    ecx = ebp;
    PUSH32(esp, 0x0020623Bu); RECOMP_ABI_CALL(0x001FC890u, sub_001FC890); /* call 0x001FC890 */

loc_0020623B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206247
 * Original: 0x00206247 - 0x00206548 (769 bytes, 256 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206247(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206247: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020624Du); RECOMP_ABI_CALL(0x001E6AF0u, sub_001E6AF0); /* call 0x001E6AF0 */

loc_0020624D: ;
    esi = eax;
    esp = esp + 4;
    MEM32(esp + 0x28) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00206268; /* js: sign (negative) */

loc_0020625C: ;
    eax = eax >> 0x18;
    eax = eax & 0x1F;
    eax = eax << 1;
    ecx = eax;
    goto loc_00206281;

loc_00206268: ;
    ecx = MEM32(esi + 8);
    ecx = ecx >> 0xC;
    ecx = ecx & 0xFFF;
    eax = eax >> 0x18;
    ecx = ecx << 5;
    eax = eax & 0x1F;
    ecx = ecx + eax;
    ecx = ecx << 1;

loc_00206281: ;
    eax = MEM32(ebp + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002062A8; /* je: equal / zero */

loc_00206288: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002062A8; /* jl: less (signed <) */

loc_00206291: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00206299u); RECOMP_ABI_CALL(0x001E6D10u, sub_001E6D10); /* call 0x001E6D10 */

loc_00206299: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F2278);
    PUSH32(esp, 0x002062A5u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_002062A5: ;
    esp = esp + 0x10;

loc_002062A8: ;
    ecx = esi;
    PUSH32(esp, 0x002062AFu); RECOMP_ABI_CALL(0x001E6B10u, sub_001E6B10); /* call 0x001E6B10 */

loc_002062AF: ;
    edi = MEM32(esp + 0x14);
    eax = eax - edi;
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002062C0u); RECOMP_ABI_CALL(0x001E6BD0u, sub_001E6BD0); /* call 0x001E6BD0 */

loc_002062C0: ;
    ecx = MEM32(esp + 0x44);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 4 (16-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_A(_fa, _fb)) goto loc_002062FC; /* ja: above (unsigned >) */

loc_002062CE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002062FC; /* jne: not equal / not zero */

loc_002062D4: ;
    edi = ZX16(LO16(ecx));
    edx = 0; /* xor self */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002062FC; /* jne: not equal / not zero */

loc_002062E1: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x40000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002062FC; /* jne: not equal / not zero */

loc_002062E9: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x002062FAu); RECOMP_ABI_CALL(0x001FCF80u, sub_001FCF80); /* call 0x001FCF80 */

loc_002062FA: ;
    goto loc_0020632E;

loc_002062FC: ;
    edx = MEM32(esp + 0x24);
    eax = ZX16(LO16(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0020630Cu); RECOMP_ABI_CALL(0x001FD1C0u, sub_001FD1C0); /* call 0x001FD1C0 */

loc_0020630C: ;
    MEM8(esp + 0x13) = 1;
    goto loc_0020632E;

    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 4 (16-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00206327; /* je: equal / zero */

loc_0020631A: ;
    ecx = ZX16(LO16(edi));
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00206325u); RECOMP_ABI_CALL(0x001FD1C0u, sub_001FD1C0); /* call 0x001FD1C0 */

loc_00206325: ;
    goto loc_0020632E;

loc_00206327: ;
    ecx = ebp;
    PUSH32(esp, 0x0020632Eu); RECOMP_ABI_CALL(0x001FCE60u, sub_001FCE60); /* call 0x001FCE60 */

loc_0020632E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002064E5; /* je: equal / zero */

loc_00206338: ;
    edx = MEM32(ebx + -4);
    esi = ebx + -4;
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00206357; /* jne: not equal / not zero */

loc_00206350: ;
    esi = ebx + -12;
    MEM32(esp + 0x14) = esi;

loc_00206357: ;
    ecx = esi;
    PUSH32(esp, 0x0020635Eu); RECOMP_ABI_CALL(0x001E6BD0u, sub_001E6BD0); /* call 0x001E6BD0 */

loc_0020635E: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    MEM32(esp + 0x34) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0020638D; /* jl: less (signed <) */

loc_0020636D: ;
    ecx = esi;
    PUSH32(esp, 0x00206374u); RECOMP_ABI_CALL(0x001E6B10u, sub_001E6B10); /* call 0x001E6B10 */

loc_00206374: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020638D; /* je: equal / zero */

loc_0020637A: ;
    PUSH32(esp, 0x3F2248);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F220C);
    PUSH32(esp, 0x0020638Au); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_0020638A: ;
    esp = esp + 0xC;

loc_0020638D: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002063BD; /* je: equal / zero */

loc_00206396: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002063BD; /* jl: less (signed <) */

loc_0020639F: ;
    eax = ZX16(LO16(eax));
    ecx = eax + -1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002063BD; /* je: equal / zero */

loc_002063A9: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F21B0);
    PUSH32(esp, 0x002063BAu); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_002063BA: ;
    esp = esp + 0x10;

loc_002063BD: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206483; /* je: equal / zero */

loc_002063C9: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206465; /* je: equal / zero */

loc_002063D5: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002063E3; /* jg: greater (signed >) */

loc_002063E1: ;
    ecx = eax;

loc_002063E3: ;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x2C);
    esi = edx + eax;
    eax = MEM32(esp + 0x30);
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebx + eax;
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
    eax = MEM32(ebp + 0x9C);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206431; /* je: equal / zero */

loc_0020640F: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x00206418u); RECOMP_ABI_CALL(0x001E6B10u, sub_001E6B10); /* call 0x001E6B10 */

loc_00206418: ;
    edi = MEM32(esp + 0x3C);
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0xFDFDFDFDu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00206431: ;
    SET_LO8(eax, MEM8(ebp + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020644F; /* je: equal / zero */

loc_00206438: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0020644Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020644F: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0020645Bu); RECOMP_ABI_CALL(0x001EEE40u, sub_001EEE40); /* call 0x001EEE40 */

loc_0020645B: ;
    edi = MEM32(esp + 0x34);
    esi = MEM32(esp + 0x14);
    goto loc_00206483;

loc_00206465: ;
    SET_LO8(eax, MEM8(ebp + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206483; /* je: equal / zero */

loc_0020646C: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00206483u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206483: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002064A5; /* je: equal / zero */

loc_0020648B: ;
    eax = MEM32(esp + 0x30);
    MEM32(ebx + eax + -4) = 0xAAAAAAAFu;
    MEM32(ebx + eax + -8) = eax;
    ebx = ebx + eax;
    MEM32(esi + edi + -4) = 0xBBBBBBBFu;

loc_002064A5: ;
    SET_LO8(eax, MEM8(ebp + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = MEM32(esp + 0x40);
    if (TEST_Z(_fa, _fb)) goto loc_002064BF; /* je: equal / zero */

loc_002064B0: ;
    edx = MEM32(ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x002064BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002064BF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x44) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00206529; /* je: equal / zero */

loc_002064C7: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00206529; /* jne: not equal / not zero */

loc_002064CF: ;
    eax = MEM32(ebp + 0x9C);
    edx = eax;
    edx = edx >> 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020650E; /* je: equal / zero */

loc_002064DE: ;
    eax = 0xCDCDCDCDu;
    goto loc_00206517;

loc_002064E5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00206504; /* jl: less (signed <) */

loc_002064EE: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(ebp + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F2158);
    PUSH32(esp, 0x00206501u); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_00206501: ;
    esp = esp + 0xC;

loc_00206504: ;
    MEM32(esp + 0x44) = 0;
    goto loc_00206529;

loc_0020650E: ;
    eax = eax >> 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206529; /* je: equal / zero */

loc_00206515: ;
    eax = 0; /* xor self */

loc_00206517: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00206529: ;
    ecx = MEM32(ebp + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020653A; /* je: equal / zero */

loc_00206530: ;
    eax = MEM32(ecx);
    edx = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0020653Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020653A: ;
    eax = MEM32(esp + 0x44);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206325
 * Original: 0x00206325 - 0x00206548 (547 bytes, 179 insns)
 * Category: game_debug
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206325(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206325: ;
    goto loc_0020632E;

    ecx = ebp;
    PUSH32(esp, 0x0020632Eu); RECOMP_ABI_CALL(0x001FCE60u, sub_001FCE60); /* call 0x001FCE60 */

loc_0020632E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002064E5; /* je: equal / zero */

loc_00206338: ;
    edx = MEM32(ebx + -4);
    esi = ebx + -4;
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00206357; /* jne: not equal / not zero */

loc_00206350: ;
    esi = ebx + -12;
    MEM32(esp + 0x14) = esi;

loc_00206357: ;
    ecx = esi;
    PUSH32(esp, 0x0020635Eu); RECOMP_ABI_CALL(0x001E6BD0u, sub_001E6BD0); /* call 0x001E6BD0 */

loc_0020635E: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    MEM32(esp + 0x34) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0020638D; /* jl: less (signed <) */

loc_0020636D: ;
    ecx = esi;
    PUSH32(esp, 0x00206374u); RECOMP_ABI_CALL(0x001E6B10u, sub_001E6B10); /* call 0x001E6B10 */

loc_00206374: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020638D; /* je: equal / zero */

loc_0020637A: ;
    PUSH32(esp, 0x3F2248);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3F220C);
    PUSH32(esp, 0x0020638Au); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_0020638A: ;
    esp = esp + 0xC;

loc_0020638D: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002063BD; /* je: equal / zero */

loc_00206396: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002063BD; /* jl: less (signed <) */

loc_0020639F: ;
    eax = ZX16(LO16(eax));
    ecx = eax + -1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002063BD; /* je: equal / zero */

loc_002063A9: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F21B0);
    PUSH32(esp, 0x002063BAu); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_002063BA: ;
    esp = esp + 0x10;

loc_002063BD: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206483; /* je: equal / zero */

loc_002063C9: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206465; /* je: equal / zero */

loc_002063D5: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002063E3; /* jg: greater (signed >) */

loc_002063E1: ;
    ecx = eax;

loc_002063E3: ;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x2C);
    esi = edx + eax;
    eax = MEM32(esp + 0x30);
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebx + eax;
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
    eax = MEM32(ebp + 0x9C);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206431; /* je: equal / zero */

loc_0020640F: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x00206418u); RECOMP_ABI_CALL(0x001E6B10u, sub_001E6B10); /* call 0x001E6B10 */

loc_00206418: ;
    edi = MEM32(esp + 0x3C);
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0xFDFDFDFDu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00206431: ;
    SET_LO8(eax, MEM8(ebp + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020644F; /* je: equal / zero */

loc_00206438: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0020644Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020644F: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0020645Bu); RECOMP_ABI_CALL(0x001EEE40u, sub_001EEE40); /* call 0x001EEE40 */

loc_0020645B: ;
    edi = MEM32(esp + 0x34);
    esi = MEM32(esp + 0x14);
    goto loc_00206483;

loc_00206465: ;
    SET_LO8(eax, MEM8(ebp + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206483; /* je: equal / zero */

loc_0020646C: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00206483u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206483: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002064A5; /* je: equal / zero */

loc_0020648B: ;
    eax = MEM32(esp + 0x30);
    MEM32(ebx + eax + -4) = 0xAAAAAAAFu;
    MEM32(ebx + eax + -8) = eax;
    ebx = ebx + eax;
    MEM32(esi + edi + -4) = 0xBBBBBBBFu;

loc_002064A5: ;
    SET_LO8(eax, MEM8(ebp + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = MEM32(esp + 0x40);
    if (TEST_Z(_fa, _fb)) goto loc_002064BF; /* je: equal / zero */

loc_002064B0: ;
    edx = MEM32(ebp);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x002064BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002064BF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x44) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00206529; /* je: equal / zero */

loc_002064C7: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00206529; /* jne: not equal / not zero */

loc_002064CF: ;
    eax = MEM32(ebp + 0x9C);
    edx = eax;
    edx = edx >> 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020650E; /* je: equal / zero */

loc_002064DE: ;
    eax = 0xCDCDCDCDu;
    goto loc_00206517;

loc_002064E5: ;
    _fa = (uint32_t)(MEM32(ebp + 0x98)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x98), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00206504; /* jl: less (signed <) */

loc_002064EE: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(ebp + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F2158);
    PUSH32(esp, 0x00206501u); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_00206501: ;
    esp = esp + 0xC;

loc_00206504: ;
    MEM32(esp + 0x44) = 0;
    goto loc_00206529;

loc_0020650E: ;
    eax = eax >> 2;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206529; /* je: equal / zero */

loc_00206515: ;
    eax = 0; /* xor self */

loc_00206517: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00206529: ;
    ecx = MEM32(ebp + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020653A; /* je: equal / zero */

loc_00206530: ;
    eax = MEM32(ecx);
    edx = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0020653Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020653A: ;
    eax = MEM32(esp + 0x44);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00206550
 * Original: 0x00206550 - 0x00206555 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206550(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206550: ;
    g_seh_ebp = ebp; sub_00203700(); return; /* tail jmp 0x00203700 */

}

/**
 * sub_00206560
 * Original: 0x00206560 - 0x002065B1 (81 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206560: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0020656Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020656D: ;
    ecx = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    edx = MEM32(esi + 0x24);
    edi = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00206585; /* jne: not equal / not zero */

loc_0020657F: ;
    edi = MEM32(0x5BC538);

loc_00206585: ;
    edi = MEM32(edi);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    ecx = MEM32(edi + ecx * 4);
    edi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0xD0); PUSH32(esp, 0x00206596u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206596: ;
    ecx = MEM32(esi + 0x30);
    MEM32(esi + 0x20) = eax;
    eax = esp + 8;
    MEM32(esi + 0x40) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x002065ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002065AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002065C0
 * Original: 0x002065C0 - 0x002065F7 (55 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002065C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002065C0: ;
    SET_LO8(eax, MEM8(ecx + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002065F6; /* jne: not equal / not zero */

loc_002065C7: ;
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002065F6; /* je: equal / zero */

loc_002065CE: ;
    eax = ZX8(MEM8(ecx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_002065E2; /* jne: not equal / not zero */

loc_002065DC: ;
    ecx = MEM32(0x5BC538);

loc_002065E2: ;
    ecx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(ecx + eax * 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 0xFC); PUSH32(esp, 0x002065F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002065F5: ;
    POP32(esp, esi);

loc_002065F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00206600
 * Original: 0x00206600 - 0x00206664 (100 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206600(void)
{

loc_00206600: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x00206612u); RECOMP_ABI_CALL(0x00300FB0u, sub_00300FB0); /* call 0x00300FB0 */

loc_00206612: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    esp = esp + 8;
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00206625u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206625: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00206641u); RECOMP_ABI_CALL(0x001B76A0u, sub_001B76A0); /* call 0x001B76A0 */

loc_00206641: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0020664Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020664E: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020665Au); RECOMP_ABI_CALL(0x00300FB0u, sub_00300FB0); /* call 0x00300FB0 */

loc_0020665A: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206670
 * Original: 0x00206670 - 0x00206794 (292 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206670: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00206679u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206679: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebx = MEM32(esp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_00206695; /* je: equal / zero */

loc_00206681: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00206688u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206688: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00206695; /* jbe: below or equal (unsigned <=) */

loc_0020668D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206711; /* je: equal / zero */

loc_00206695: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0020669Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020669C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002066D6; /* je: equal / zero */

loc_002066A0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x002066A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002066A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x28) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002066D6; /* jbe: below or equal (unsigned <=) */

loc_002066AC: ;
    ecx = MEM32(0x5BC564);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F5E100);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002066CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002066CB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002066D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002066D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002066A0; /* jne: not equal / not zero */

loc_002066D6: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x002066E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002066E4: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00206711; /* jne: not equal / not zero */

loc_002066EE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x002066F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002066F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206750; /* je: equal / zero */

loc_002066F9: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00206707u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206707: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206722; /* je: equal / zero */

loc_00206711: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00206722: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00206729u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206729: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206743; /* je: equal / zero */

loc_0020672D: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x28);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020673B; /* jbe: below or equal (unsigned <=) */

loc_00206739: ;
    eax = ecx;

loc_0020673B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00206743u); RECOMP_ABI_CALL(0x001FE2F0u, sub_001FE2F0); /* call 0x001FE2F0 */

loc_00206743: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00206750u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206750: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esp + 0x10);
    MEM32(ecx + eax * 4) = edx;
    eax = MEM32(esi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x18));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x18)); }
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00206776u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206776: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00206783u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206783: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002067A0
 * Original: 0x002067A0 - 0x002067F2 (82 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002067A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002067A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_002067EC; /* jl: less (signed <) */

loc_002067B3: ;
    if (TEST_Z(_fa, _fb)) goto loc_002067EC; /* je: equal / zero */

loc_002067B5: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 8);
    eax = ebx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002067D7; /* jg: greater (signed >) */

loc_002067C3: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(edi + 0x10);
    ecx = ebx;
    edi = eax + ebp * 4;
    POP32(esp, ebp);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002067D7: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002067E1u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002067E1: ;
    eax = MEM32(edi + 0x10);
    edi = eax + ebp * 4;
    ecx = ebx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, ebp);

loc_002067EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206800
 * Original: 0x00206800 - 0x0020684A (74 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206800: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_00206845; /* jl: less (signed <) */

loc_0020680C: ;
    if (TEST_Z(_fa, _fb)) goto loc_00206845; /* je: equal / zero */

loc_0020680E: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    eax = ebx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00206821; /* jg: greater (signed >) */

loc_0020681C: ;
    MEM32(edi + 8) = eax;
    goto loc_0020682B;

loc_00206821: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020682Bu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020682B: ;
    edi = MEM32(edi + 0x10);
    ecx = esi;
    esi = MEM32(esp + 0x14);
    eax = ecx;
    edi = edi + ebx;
    ecx = ecx >> 2;
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
    POP32(esp, ebx);

loc_00206845: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206850
 * Original: 0x00206850 - 0x002068A1 (81 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206850: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0020689C; /* jl: less (signed <) */

loc_0020685C: ;
    if (TEST_Z(_fa, _fb)) goto loc_0020689C; /* je: equal / zero */

loc_0020685E: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    eax = ebx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00206883; /* jg: greater (signed >) */

loc_0020686C: ;
    MEM32(edi + 8) = eax;
    eax = MEM32(edi + 0x10);
    ecx = esi;
    esi = MEM32(esp + 0x14);
    edi = eax + ebx * 4;
    POP32(esp, ebx);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00206883: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020688Du); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020688D: ;
    eax = MEM32(edi + 0x10);
    ecx = esi;
    esi = MEM32(esp + 0x14);
    edi = eax + ebx * 4;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, ebx);

loc_0020689C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002068B0
 * Original: 0x002068B0 - 0x002068F3 (67 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002068B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002068B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002068C0; /* je: equal / zero */

loc_002068BD: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002068C0: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002068DA; /* jge: greater or equal (signed >=) */

loc_002068C8: ;
    ecx = MEM32(esi + 0x10);
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    MEM32(ecx + edi * 4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002068DA: ;
    PUSH32(esp, 4);
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002068E7u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002068E7: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + edi * 4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206900
 * Original: 0x00206900 - 0x00206924 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206900(void)
{

loc_00206900: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F0D98;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206930
 * Original: 0x00206930 - 0x00206936 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206930(void)
{

loc_00206930: ;
    eax = MEM32(0x5BC1CC);
    esp += 4; return; /* ret */

}

/**
 * sub_00206940
 * Original: 0x00206940 - 0x00206946 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206940(void)
{

loc_00206940: ;
    eax = MEM32(0x5BC20C);
    esp += 4; return; /* ret */

}

/**
 * sub_00206950
 * Original: 0x00206950 - 0x00206956 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206950(void)
{

loc_00206950: ;
    eax = MEM32(0x5BC234);
    esp += 4; return; /* ret */

}

/**
 * sub_00206960
 * Original: 0x00206960 - 0x00206984 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206960(void)
{

loc_00206960: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3E2FC0;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206990
 * Original: 0x00206990 - 0x00206996 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206990(void)
{

loc_00206990: ;
    eax = MEM32(0x5BC268);
    esp += 4; return; /* ret */

}

/**
 * sub_002069A0
 * Original: 0x002069A0 - 0x002069A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002069A0(void)
{

loc_002069A0: ;
    eax = MEM32(0x5BC2A4);
    esp += 4; return; /* ret */

}

/**
 * sub_002069B0
 * Original: 0x002069B0 - 0x002069B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002069B0(void)
{

loc_002069B0: ;
    eax = MEM32(0x5BC2BC);
    esp += 4; return; /* ret */

}

/**
 * sub_002069C0
 * Original: 0x002069C0 - 0x002069C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002069C0(void)
{

loc_002069C0: ;
    eax = MEM32(0x5BC2D0);
    esp += 4; return; /* ret */

}

/**
 * sub_002069D0
 * Original: 0x002069D0 - 0x002069D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002069D0(void)
{

loc_002069D0: ;
    eax = MEM32(0x5BC2F4);
    esp += 4; return; /* ret */

}

/**
 * sub_002069E0
 * Original: 0x002069E0 - 0x002069E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002069E0(void)
{

loc_002069E0: ;
    eax = MEM32(0x5BC314);
    esp += 4; return; /* ret */

}

/**
 * sub_002069F0
 * Original: 0x002069F0 - 0x002069F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002069F0(void)
{

loc_002069F0: ;
    eax = MEM32(0x5BC3A4);
    esp += 4; return; /* ret */

}

/**
 * sub_00206A00
 * Original: 0x00206A00 - 0x00206A24 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206A00(void)
{

loc_00206A00: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F0DF0;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206A30
 * Original: 0x00206A30 - 0x00206A36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206A30(void)
{

loc_00206A30: ;
    eax = MEM32(0x5BC3CC);
    esp += 4; return; /* ret */

}

/**
 * sub_00206A40
 * Original: 0x00206A40 - 0x00206A46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206A40(void)
{

loc_00206A40: ;
    eax = MEM32(0x5BC3D0);
    esp += 4; return; /* ret */

}

/**
 * sub_00206A50
 * Original: 0x00206A50 - 0x00206A56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206A50(void)
{

loc_00206A50: ;
    eax = MEM32(0x5BC3D4);
    esp += 4; return; /* ret */

}

/**
 * sub_00206A60
 * Original: 0x00206A60 - 0x00206A66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206A60(void)
{

loc_00206A60: ;
    eax = MEM32(0x5BC3D8);
    esp += 4; return; /* ret */

}

/**
 * sub_00206A70
 * Original: 0x00206A70 - 0x00206A76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206A70(void)
{

loc_00206A70: ;
    eax = MEM32(0x5BC3DC);
    esp += 4; return; /* ret */

}

/**
 * sub_00206A80
 * Original: 0x00206A80 - 0x00206A86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206A80(void)
{

loc_00206A80: ;
    eax = MEM32(0x5BC3E0);
    esp += 4; return; /* ret */

}

/**
 * sub_00206A90
 * Original: 0x00206A90 - 0x00206A96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206A90(void)
{

loc_00206A90: ;
    eax = MEM32(0x5BC3E4);
    esp += 4; return; /* ret */

}

/**
 * sub_00206AA0
 * Original: 0x00206AA0 - 0x00206AC4 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206AA0(void)
{

loc_00206AA0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F0E48;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206AD0
 * Original: 0x00206AD0 - 0x00206AF4 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206AD0(void)
{

loc_00206AD0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F0EA0;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206B00
 * Original: 0x00206B00 - 0x00206B06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206B00(void)
{

loc_00206B00: ;
    eax = MEM32(0x5BC3F0);
    esp += 4; return; /* ret */

}

/**
 * sub_00206B10
 * Original: 0x00206B10 - 0x00206B34 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206B10(void)
{

loc_00206B10: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F0EF8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206B40
 * Original: 0x00206B40 - 0x00206B64 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206B40(void)
{

loc_00206B40: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F0F50;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206B70
 * Original: 0x00206B70 - 0x00206B76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206B70(void)
{

loc_00206B70: ;
    eax = MEM32(0x5BC3FC);
    esp += 4; return; /* ret */

}

/**
 * sub_00206B80
 * Original: 0x00206B80 - 0x00206BA4 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206B80(void)
{

loc_00206B80: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F0FA8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206BB0
 * Original: 0x00206BB0 - 0x00206BB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206BB0(void)
{

loc_00206BB0: ;
    eax = MEM32(0x5BC404);
    esp += 4; return; /* ret */

}

/**
 * sub_00206BC0
 * Original: 0x00206BC0 - 0x00206BE4 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206BC0(void)
{

loc_00206BC0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F1000;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206BF0
 * Original: 0x00206BF0 - 0x00206BF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206BF0(void)
{

loc_00206BF0: ;
    eax = MEM32(0x5BC40C);
    esp += 4; return; /* ret */

}

/**
 * sub_00206C00
 * Original: 0x00206C00 - 0x00206C24 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206C00(void)
{

loc_00206C00: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F10B0;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206C30
 * Original: 0x00206C30 - 0x00206C54 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206C30(void)
{

loc_00206C30: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F1108;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206C60
 * Original: 0x00206C60 - 0x00206C66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206C60(void)
{

loc_00206C60: ;
    eax = MEM32(0x5BC41C);
    esp += 4; return; /* ret */

}

/**
 * sub_00206C70
 * Original: 0x00206C70 - 0x00206C76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206C70(void)
{

loc_00206C70: ;
    eax = MEM32(0x5BC424);
    esp += 4; return; /* ret */

}

/**
 * sub_00206C80
 * Original: 0x00206C80 - 0x00206CA4 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206C80(void)
{

loc_00206C80: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F1210;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206CB0
 * Original: 0x00206CB0 - 0x00206CB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206CB0(void)
{

loc_00206CB0: ;
    eax = MEM32(0x5BC430);
    esp += 4; return; /* ret */

}

/**
 * sub_00206CC0
 * Original: 0x00206CC0 - 0x00206CC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206CC0(void)
{

loc_00206CC0: ;
    eax = MEM32(0x5BC434);
    esp += 4; return; /* ret */

}

/**
 * sub_00206CD0
 * Original: 0x00206CD0 - 0x00206CD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206CD0(void)
{

loc_00206CD0: ;
    eax = MEM32(0x5BC460);
    esp += 4; return; /* ret */

}

/**
 * sub_00206CE0
 * Original: 0x00206CE0 - 0x00206D04 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206CE0(void)
{

loc_00206CE0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F1268;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00206D10
 * Original: 0x00206D10 - 0x00206D34 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206D10(void)
{

loc_00206D10: ;
    esp = esp - 0x10;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F12C0;
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00206D40
 * Original: 0x00206D40 - 0x00206D46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206D40(void)
{

loc_00206D40: ;
    eax = MEM32(0x5BC4F4);
    esp += 4; return; /* ret */

}

/**
 * sub_00206D50
 * Original: 0x00206D50 - 0x00206D74 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206D50(void)
{

loc_00206D50: ;
    esp = esp - 0x10;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F1320;
    eax = MEM32(esp + ecx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00206D80
 * Original: 0x00206D80 - 0x00206D86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206D80(void)
{

loc_00206D80: ;
    eax = MEM32(0x5BC504);
    esp += 4; return; /* ret */

}

/**
 * sub_00206D90
 * Original: 0x00206D90 - 0x00206DBD (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206D90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206D90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206DB2; /* je: equal / zero */

loc_00206D9D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00206DB2; /* jne: not equal / not zero */

loc_00206DAD: ;
    PUSH32(esp, 0x00206DB2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00206DB2: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x17C)); return; /* indirect tail jmp */

}

/**
 * sub_00206DC0
 * Original: 0x00206DC0 - 0x00206E86 (198 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206DC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00206DD6; /* jl: less (signed <) */

loc_00206DD1: ;
    MEM32(ecx + 8) = ebx;
    goto loc_00206DDE;

loc_00206DD6: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00206DDEu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00206DDE: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00206E19; /* jg: greater (signed >) */

loc_00206DE6: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E13; /* je: equal / zero */

loc_00206DED: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00206E01; /* jne: not equal / not zero */

loc_00206DFB: ;
    edx = MEM32(0x5BC538);

loc_00206E01: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00206E13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206E13: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;

loc_00206E19: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00206E26; /* jl: less (signed <) */

loc_00206E21: ;
    MEM32(ecx + 8) = ebx;
    goto loc_00206E2E;

loc_00206E26: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00206E2Eu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00206E2E: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E82; /* je: equal / zero */

loc_00206E35: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00206E3F; /* jl: less (signed <) */

loc_00206E3A: ;
    MEM32(ecx + 8) = ebx;
    goto loc_00206E47;

loc_00206E3F: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00206E47u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00206E47: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00206E82; /* jg: greater (signed >) */

loc_00206E4F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206E7C; /* je: equal / zero */

loc_00206E56: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00206E6A; /* jne: not equal / not zero */

loc_00206E64: ;
    edx = MEM32(0x5BC538);

loc_00206E6A: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00206E7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206E7C: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;

loc_00206E82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00206E90
 * Original: 0x00206E90 - 0x00206F3C (172 bytes, 72 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206E90: ;
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_00206EDD; /* jne: not equal / not zero */

loc_00206EA6: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00206EC2; /* jl: less (signed <) */

loc_00206EAD: ;
    eax = MEM32(esp + 0x10);
    MEM32(ecx + 8) = ebx;
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00206EC2: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00206ECBu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00206ECB: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00206EDD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00206EF3; /* jle: less or equal (signed <=) */

loc_00206EE3: ;
    edi = MEM32(edi);

loc_00206EE5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00206EEE; /* jne: not equal / not zero */

loc_00206EE9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00206F05; /* je: equal / zero */

loc_00206EEE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00206EE5; /* jl: less (signed <) */

loc_00206EF3: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00206F05: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00206F2A; /* js: sign (negative) */

loc_00206F08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00206F22; /* jg: greater (signed >) */

loc_00206F0D: ;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00206F22: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00206F2Au); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00206F2A: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00206F40
 * Original: 0x00206F40 - 0x00206FBD (125 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00206F40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    edx = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, edi);
    eax = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00206F5F; /* je: equal / zero */

loc_00206F54: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00206F54; /* jne: not equal / not zero */

loc_00206F5F: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(eax + 0xC);
    ebp = MEM32(eax + 8);
    edi = ecx + 1;
    ecx = MEM32(eax + 8);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00206F8A; /* jle: less or equal (signed <=) */

loc_00206F74: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00206F8A; /* jl: less (signed <) */

loc_00206F82: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00206F8Au); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00206F8A: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00206F94u); RECOMP_ABI_CALL(0x00206850u, sub_00206850); /* call 0x00206850 */

loc_00206F94: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206FB4; /* je: equal / zero */

loc_00206F9B: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00206FB4; /* je: equal / zero */

loc_00206FA2: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esi);
    eax = ecx + ebp * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00206FB4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00206FB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00206FC0
 * Original: 0x00206FC0 - 0x00206FF7 (55 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00206FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00206FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00206FD4; /* jl: less (signed <) */

loc_00206FCF: ;
    MEM32(esi + 8) = eax;
    goto loc_00206FDE;

loc_00206FD4: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00206FDEu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00206FDE: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esi + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00206FF3; /* je: equal / zero */

loc_00206FE8: ;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00206FF3; /* jle: less or equal (signed <=) */

loc_00206FEA: ;
    MEM32(eax) = 0;
    eax = MEM32(esi + 0x10);

loc_00206FF3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00207000
 * Original: 0x00207000 - 0x0020705F (95 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207000: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207047; /* je: equal / zero */

loc_0020700B: ;
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00207018u); RECOMP_ABI_CALL(0x001F1920u, sub_001F1920); /* call 0x001F1920 */

loc_00207018: ;
    ecx = MEM32(esi + 0x10);
    edi = eax;
    eax = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020703F; /* jne: not equal / not zero */

loc_00207026: ;
    edx = MEM32(ebx + 0x10);
    esi = MEM32(edx + edi * 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00207034u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00207034: ;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0020703F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00207047: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BB928);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0020705Au); RECOMP_ABI_CALL(0x001F8070u, sub_001F8070); /* call 0x001F8070 */

loc_0020705A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207060
 * Original: 0x00207060 - 0x002070AF (79 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207060(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207060: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00207074; /* je: equal / zero */

loc_00207071: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00207074: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00207092; /* jge: greater or equal (signed >=) */

loc_0020707C: ;
    ecx = MEM32(esi + 0x10);
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    MEM32(ecx + edi * 4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xC) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00207092: ;
    PUSH32(esp, 4);
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0020709Fu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020709F: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + edi * 4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xC) = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002070B0
 * Original: 0x002070B0 - 0x00207130 (128 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002070B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002070B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002070C8; /* je: equal / zero */

loc_002070BC: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x002070C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002070C8: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esi + 0x34) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0020711C; /* jge: greater or equal (signed >=) */

loc_002070D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002070E7; /* je: equal / zero */

loc_002070DD: ;
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x002070E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002070E7: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020712A; /* je: equal / zero */

loc_002070EE: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0020710C; /* jle: less or equal (signed <=) */

loc_002070FB: ;
    edi = MEM32(ecx + 0x10);
    edi = edi;

loc_00207100: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020710F; /* je: equal / zero */

loc_00207104: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207100; /* jl: less (signed <) */

loc_0020710C: ;
    eax = eax | 0xFFFFFFFFu;

loc_0020710F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207115u); RECOMP_ABI_CALL(0x00117E70u, sub_00117E70); /* call 0x00117E70 */

loc_00207115: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0020711C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020712A; /* je: equal / zero */

loc_00207120: ;
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0020712Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020712A: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00207130
 * Original: 0x00207130 - 0x00207172 (66 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207130: ;
    SET_LO8(eax, MEM8(esp + 8));
    edx = ZX16(MEM16(ecx + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = ZX16(MEM16(ecx + 0xE));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ecx + 0xA));
    ecx = ZX16(MEM16(ecx + 8));
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00207161; /* je: equal / zero */

loc_00207150: ;
    PUSH32(esp, 0x3F3204);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020715Bu); RECOMP_ABI_CALL(0x002046C0u, sub_002046C0); /* call 0x002046C0 */

loc_0020715B: ;
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

loc_00207161: ;
    PUSH32(esp, 0x3F31EC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020716Cu); RECOMP_ABI_CALL(0x002046C0u, sub_002046C0); /* call 0x002046C0 */

loc_0020716C: ;
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00207180
 * Original: 0x00207180 - 0x002071BD (61 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207180: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x28);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002071B4; /* je: equal / zero */

loc_0020718E: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_002071A2; /* jne: not equal / not zero */

loc_0020719C: ;
    edx = MEM32(0x5BC538);

loc_002071A2: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x002071B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002071B4: ;
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002071C0
 * Original: 0x002071C0 - 0x002071DA (26 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071C0(void)
{

loc_002071C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    ecx = MEM32(edx + eax * 4);
    PUSH32(esp, 0x002071D7u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002071D7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002071E0
 * Original: 0x002071E0 - 0x0020720F (47 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002071E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002071E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002071F3; /* jne: not equal / not zero */

loc_002071EC: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002071F3: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207200u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00207200: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00207208u); RECOMP_ABI_CALL(0x00201200u, sub_00201200); /* call 0x00201200 */

loc_00207208: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00207210
 * Original: 0x00207210 - 0x0020726D (93 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207210: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00207251; /* jle: less or equal (signed <=) */

loc_0020721F: ;
    /* nop */

loc_00207220: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207230; /* je: equal / zero */

loc_0020722A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00207230u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00207230: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207249; /* je: equal / zero */

loc_00207237: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00207249; /* jl: less (signed <) */

loc_0020723B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00207249; /* jge: greater or equal (signed >=) */

loc_0020723F: ;
    eax = MEM32(edi + 0x10);
    MEM32(eax + esi * 4) = 0;

loc_00207249: ;
    eax = MEM32(edi + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207220; /* jl: less (signed <) */

loc_00207251: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00207268; /* jne: not equal / not zero */

loc_00207261: ;
    ecx = edi;
    PUSH32(esp, 0x00207268u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00207268: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207270
 * Original: 0x00207270 - 0x002072DC (108 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207270: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00207277u); RECOMP_ABI_CALL(0x001FF070u, sub_001FF070); /* call 0x001FF070 */

loc_00207277: ;
    esp = esp + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002072CB; /* ja: above (unsigned >) */

loc_00207280: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2072DC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00207287u) goto loc_00207287;
    if (_jt == 0x00207298u) goto loc_00207298;
    if (_jt == 0x002072A9u) goto loc_002072A9;
    if (_jt == 0x002072BAu) goto loc_002072BA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00207287: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F323C);
    PUSH32(esp, 0x00207295u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00207295: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00207298: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F3234);
    PUSH32(esp, 0x002072A6u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002072A6: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002072A9: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F322C);
    PUSH32(esp, 0x002072B7u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002072B7: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002072BA: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F3224);
    PUSH32(esp, 0x002072C8u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002072C8: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002072CB: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F321C);
    PUSH32(esp, 0x002072D9u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002072D9: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002072F0
 * Original: 0x002072F0 - 0x00207400 (272 bytes, 77 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002072F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002072F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002072F7u); RECOMP_ABI_CALL(0x001FF070u, sub_001FF070); /* call 0x001FF070 */

loc_002072F7: ;
    esp = esp + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00207381; /* je: equal / zero */

loc_00207301: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002073EF; /* jne: not equal / not zero */

loc_00207308: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0020730Fu); RECOMP_ABI_CALL(0x001FF070u, sub_001FF070); /* call 0x001FF070 */

loc_0020730F: ;
    eax = eax + 0xFFFFFFF7u;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002073EF; /* ja: above (unsigned >) */

loc_0020731E: ;
    eax = ZX8(MEM8(eax + 0x207414));
    { uint32_t _jt = MEM32(eax * 4 + 0x207400); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0020732Cu) goto loc_0020732C;
    if (_jt == 0x0020733Du) goto loc_0020733D;
    if (_jt == 0x0020734Eu) goto loc_0020734E;
    if (_jt == 0x0020735Fu) goto loc_0020735F;
    if (_jt == 0x00207370u) goto loc_00207370;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020732C: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F32A0);
    PUSH32(esp, 0x0020733Au); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0020733A: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0020733D: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F3294);
    PUSH32(esp, 0x0020734Bu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0020734B: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0020734E: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F3288);
    PUSH32(esp, 0x0020735Cu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0020735C: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0020735F: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F327C);
    PUSH32(esp, 0x0020736Du); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0020736D: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00207370: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F3270);
    PUSH32(esp, 0x0020737Eu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0020737E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_00207381: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00207388u); RECOMP_ABI_CALL(0x001FF070u, sub_001FF070); /* call 0x001FF070 */

loc_00207388: ;
    eax = eax + 0xFFFFFFFEu;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002073EF; /* ja: above (unsigned >) */

loc_00207393: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x207424); /* switch: 7 entries, 5 targets */
    if (_jt == 0x0020739Au) goto loc_0020739A;
    if (_jt == 0x002073ABu) goto loc_002073AB;
    if (_jt == 0x002073BCu) goto loc_002073BC;
    if (_jt == 0x002073CDu) goto loc_002073CD;
    if (_jt == 0x002073DEu) goto loc_002073DE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020739A: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F326C);
    PUSH32(esp, 0x002073A8u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002073A8: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002073AB: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F3268);
    PUSH32(esp, 0x002073B9u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002073B9: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002073BC: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F3260);
    PUSH32(esp, 0x002073CAu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002073CA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002073CD: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F3254);
    PUSH32(esp, 0x002073DBu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002073DB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002073DE: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F3240);
    PUSH32(esp, 0x002073ECu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002073EC: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002073EF: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x3F321C);
    PUSH32(esp, 0x002073FDu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_002073FD: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00207440
 * Original: 0x00207440 - 0x002074D7 (151 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00207440: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    MEM32(esi) = 0x3F32A8;
    ecx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00207490; /* jle: less or equal (signed <=) */

loc_00207456: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207469; /* je: equal / zero */

loc_00207463: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00207469u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00207469: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207485; /* je: equal / zero */

loc_00207473: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00207485; /* jl: less (signed <) */

loc_00207477: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00207485; /* jge: greater or equal (signed >=) */

loc_0020747B: ;
    ecx = MEM32(eax + 0x10);
    MEM32(ecx + edi * 4) = 0;

loc_00207485: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207456; /* jl: less (signed <) */

loc_00207490: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_002074A8; /* jne: not equal / not zero */

loc_002074A3: ;
    PUSH32(esp, 0x002074A8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002074A8: ;
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 8) = 0;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002074C7; /* jne: not equal / not zero */

loc_002074C2: ;
    PUSH32(esp, 0x002074C7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002074C7: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = 0;
    MEM32(esi) = 0x3EEA6C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002074E0
 * Original: 0x002074E0 - 0x0020758E (174 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002074E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002074E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    MEM32(esi) = 0x3F32AC;
    edi = MEM32(ecx + 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00207503; /* jne: not equal / not zero */

loc_002074FE: ;
    PUSH32(esp, 0x00207503u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00207503: ;
    ecx = MEM32(esi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0xC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00207527; /* je: equal / zero */

loc_0020750F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00207524; /* jne: not equal / not zero */

loc_0020751F: ;
    PUSH32(esp, 0x00207524u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00207524: ;
    MEM32(esi + 0x18) = ebx;

loc_00207527: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00207569; /* jle: less or equal (signed <=) */

loc_00207533: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207546; /* je: equal / zero */

loc_00207540: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00207546u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00207546: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020755E; /* je: equal / zero */

loc_00207550: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020755E; /* jl: less (signed <) */

loc_00207554: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020755E; /* jge: greater or equal (signed >=) */

loc_00207558: ;
    ecx = MEM32(eax + 0x10);
    MEM32(ecx + edi * 4) = ebx;

loc_0020755E: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00207533; /* jl: less (signed <) */

loc_00207569: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00207581; /* jne: not equal / not zero */

loc_0020757C: ;
    PUSH32(esp, 0x00207581u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00207581: ;
    POP32(esp, edi);
    MEM32(esi + 0x10) = ebx;
    MEM32(esi) = 0x3EEA6C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00207590
 * Original: 0x00207590 - 0x00207642 (178 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207590(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207590: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebx = ecx;
    ecx = MEM32(ebx + 0x54);
    MEM32(ebx + 0x24) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_002075B0; /* jl: less (signed <) */

loc_002075A8: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002075B0u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_002075B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = MEM32(ebx + 0x54);
    if (TEST_S(_fas, _fbs)) goto loc_002075C9; /* jl: less (signed <) */

loc_002075B7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002075C1; /* jg: greater (signed >) */

loc_002075BC: ;
    MEM32(ecx + 8) = esi;
    goto loc_002075C9;

loc_002075C1: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002075C9u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002075C9: ;
    eax = MEM32(ebx + 0x54);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = MEM32(eax + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002075DB; /* jle: less or equal (signed <=) */

loc_002075D6: ;
    eax = eax | 0xFFFFFFFFu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_002075DB: ;
    eax = MEM32(ebx + 0x50);
    ebp = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    eax = eax + ebp;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    esi = ebp;
    if (CMP_AE(_fa, _fb)) goto loc_00207638; /* jae: above or equal (unsigned >=) */

loc_002075F0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 1);
    edx = MEM32(ebx);
    edi = esi;
    edi = edi - ebp;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00207610u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00207610: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020762A; /* jne: not equal / not zero */

loc_0020761A: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x0020762Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020762A: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002075F0; /* jb: below (unsigned <) */

loc_00207638: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00207650
 * Original: 0x00207650 - 0x0020840B (3515 bytes, 1026 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00207650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00207650: ;
    esp = esp - 0x4D4;
    eax = MEM32(esp + 0x4D8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = 0x25;
    esi = eax;
    edi = esp + 0x20;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x4F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ecx = MEM32(esp + 0x4EC);
    MEM32(esp + 0x14) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0020768D; /* je: equal / zero */

loc_00207686: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020768D; /* je: equal / zero */

loc_0020768A: ;
    MEM8(ecx) = 0;

loc_0020768D: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002076D5; /* jl: less (signed <) */

loc_00207693: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002076D5; /* jge: greater or equal (signed >=) */

loc_00207698: ;
    eax = MEM32(ebx + edx * 4 + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002076D5; /* je: equal / zero */

loc_002076A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(ebx + 0x30);
    if (TEST_S(_fas, _fbs)) goto loc_002076C8; /* jl: less (signed <) */

loc_002076A8: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002076C8; /* jge: greater or equal (signed >=) */

loc_002076B0: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002076C8; /* je: equal / zero */

loc_002076B7: ;
    ecx = ecx + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002076C4; /* jle: less or equal (signed <=) */

loc_002076BD: ;
    SET_LO8(eax, MEM8(ecx + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002076C8; /* jne: not equal / not zero */

loc_002076C4: ;
    eax = ecx;
    goto loc_002076CA;

loc_002076C8: ;
    eax = 0; /* xor self */

loc_002076CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002076D5; /* je: equal / zero */

loc_002076D0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020771C; /* jne: not equal / not zero */

loc_002076D5: ;
    eax = edx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00207716; /* ja: above (unsigned >) */

loc_002076DD: ;
    eax = ZX8(MEM8(eax + 0x208418));
    { uint32_t _jt = MEM32(eax * 4 + 0x20840C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x002076EBu) goto loc_002076EB;
    if (_jt == 0x00207706u) goto loc_00207706;
    if (_jt == 0x0020770Eu) goto loc_0020770E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002076EB: ;
    eax = MEM32(ebx + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002076FE; /* je: equal / zero */

loc_002076F5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002076FE; /* je: equal / zero */

loc_002076FA: ;
    ebp = eax;
    goto loc_0020771C;

loc_002076FE: ;
    ebp = MEM32(0x46A020);
    goto loc_0020771C;

loc_00207706: ;
    ebp = MEM32(0x46A024);
    goto loc_0020771C;

loc_0020770E: ;
    ebp = MEM32(0x46A028);
    goto loc_0020771C;

loc_00207716: ;
    ebp = MEM32(0x46A02C);

loc_0020771C: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002077FB; /* jne: not equal / not zero */

loc_00207727: ;
    eax = MEM32(esp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207738; /* je: equal / zero */

loc_0020772F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002077FB; /* jne: not equal / not zero */

loc_00207738: ;
    esi = MEM32(esp + 0x6C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002077FB; /* je: equal / zero */

loc_00207744: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002077FB; /* je: equal / zero */

loc_0020774D: ;
    /* nop */

loc_00207750: ;
    edx = MEM32(ebx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    ecx = esp + 0x3EC;
    PUSH32(esp, ecx);
    eax = esp + 0x140;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, 0xFF);
    ecx = esp + 0x2F8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x00207789u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00207789: ;
    edx = esp + 0x2E4;
    PUSH32(esp, 0x3F32FC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020779Bu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0020779B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002077D4; /* jne: not equal / not zero */

loc_002077A2: ;
    eax = esp + 0x2E4;
    PUSH32(esp, 0x3F32E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002077B4u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_002077B4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002077D4; /* jne: not equal / not zero */

loc_002077BB: ;
    ecx = esp + 0x2E4;
    PUSH32(esp, 0x3F32D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002077CDu); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_002077CD: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002077E4; /* je: equal / zero */

loc_002077D4: ;
    eax = MEM32(esi + 4);
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00207750; /* jne: not equal / not zero */

loc_002077E2: ;
    goto loc_002077FB;

loc_002077E4: ;
    eax = MEM32(esp + 0x1C);
    edx = esp + 0x3E4;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x6C) = esi;

loc_002077FB: ;
    SET_LO8(eax, MEM8(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083CC; /* je: equal / zero */

loc_00207806: ;
    edi = MEM32(esp + 0x14);
    /* nop */

loc_00207810: ;
    SET_LO8(ebx, 0); /* xor self */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(eax));
    MEM8(esp + 0xB4) = LO8(ebx);
    MEM8(esp + 0x264) = LO8(ebx);
    SET_LO8(eax, MEM8(ebp));
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0020785E; /* jl: less (signed <) */

loc_00207835: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020785E; /* jg: greater (signed >) */

loc_00207839: ;
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = esi;
    /* nop */

loc_00207840: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00207856; /* jg: greater (signed >) */

loc_00207844: ;
    eax = SX8(LO8(eax));
    ecx = esi + esi * 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax + ecx * 2 + -48;
    SET_LO8(eax, MEM8(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00207840; /* jge: greater or equal (signed >=) */

loc_00207856: ;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x10) = esi;

loc_0020785E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x22 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207876; /* je: equal / zero */

loc_00207863: ;
    SET_LO8(eax, MEM8(ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x27) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x27 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020789B; /* je: equal / zero */

loc_0020786A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020790A; /* je: equal / zero */

loc_00207872: ;
    MEM32(esp + 0x18) = ebp;

loc_00207876: ;
    eax = SX8(LO8(edx));
    ecx = eax + -34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x58 (32-bit) */
    MEM8(esp + 0x140) = 0;
    if (CMP_A(_fa, _fb)) goto loc_0020838B; /* ja: above (unsigned >) */

loc_0020788D: ;
    ecx = ZX8(MEM8(ecx + 0x208494));
    { uint32_t _jt = MEM32(ecx * 4 + 0x208428); /* switch: 27 entries, 27 targets */
    if (_jt == 0x00207987u) goto loc_00207987;
    if (_jt == 0x002079A2u) goto loc_002079A2;
    if (_jt == 0x00207A9Eu) goto loc_00207A9E;
    if (_jt == 0x00207C35u) goto loc_00207C35;
    if (_jt == 0x00207C50u) goto loc_00207C50;
    if (_jt == 0x00207CCCu) goto loc_00207CCC;
    if (_jt == 0x00207D04u) goto loc_00207D04;
    if (_jt == 0x00207D27u) goto loc_00207D27;
    if (_jt == 0x00207DAAu) goto loc_00207DAA;
    if (_jt == 0x00207E07u) goto loc_00207E07;
    if (_jt == 0x00207E2Au) goto loc_00207E2A;
    if (_jt == 0x00207E62u) goto loc_00207E62;
    if (_jt == 0x00207E9Au) goto loc_00207E9A;
    if (_jt == 0x00207ED2u) goto loc_00207ED2;
    if (_jt == 0x00207F0Au) goto loc_00207F0A;
    if (_jt == 0x00207F42u) goto loc_00207F42;
    if (_jt == 0x0020806Eu) goto loc_0020806E;
    if (_jt == 0x00208091u) goto loc_00208091;
    if (_jt == 0x002080A2u) goto loc_002080A2;
    if (_jt == 0x002080CAu) goto loc_002080CA;
    if (_jt == 0x00208140u) goto loc_00208140;
    if (_jt == 0x002081B6u) goto loc_002081B6;
    if (_jt == 0x002081F2u) goto loc_002081F2;
    if (_jt == 0x00208246u) goto loc_00208246;
    if (_jt == 0x00208275u) goto loc_00208275;
    if (_jt == 0x002082BAu) goto loc_002082BA;
    if (_jt == 0x0020838Bu) goto loc_0020838B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0020789B: ;
    SET_LO8(eax, MEM8(ebp + 1));
    ecx = 0; /* xor self */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002078F4; /* je: equal / zero */

loc_002078A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x27) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x27 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002078F4; /* je: equal / zero */

loc_002078A9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002078F4; /* jge: greater or equal (signed >=) */

loc_002078AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002078E4; /* jne: not equal / not zero */

loc_002078B2: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 1);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax - 0x6E;
    if ((eax == 0)) goto loc_002078DA; /* je: equal / zero */

loc_002078BC: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_002078D0; /* je: equal / zero */

loc_002078C1: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_002078EC; /* jne: not equal / not zero */

loc_002078C6: ;
    MEM8(esp + ecx + 0xB4) = 9;
    goto loc_002078EB;

loc_002078D0: ;
    MEM8(esp + ecx + 0xB4) = 0xD;
    goto loc_002078EB;

loc_002078DA: ;
    MEM8(esp + ecx + 0xB4) = 0xA;
    goto loc_002078EB;

loc_002078E4: ;
    MEM8(esp + ecx + 0xB4) = LO8(eax);

loc_002078EB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002078EC: ;
    SET_LO8(eax, MEM8(ebp + 1));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002078A5; /* jne: not equal / not zero */

loc_002078F4: ;
    MEM8(esp + ecx + 0xB4) = 0;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0x27) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0x27 (8-bit) */
    SET_LO8(ebx, MEM8(esp + 0xB4));
    if (CMP_NE(_fa, _fb)) goto loc_0020790A; /* jne: not equal / not zero */

loc_00207909: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020790A: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00207863; /* jne: not equal / not zero */

loc_00207914: ;
    SET_LO8(eax, MEM8(ebp + 1));
    ecx = 0; /* xor self */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020796F; /* je: equal / zero */

loc_0020791E: ;
    edi = edi;

loc_00207920: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020796F; /* je: equal / zero */

loc_00207924: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020796F; /* jge: greater or equal (signed >=) */

loc_00207929: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020795F; /* jne: not equal / not zero */

loc_0020792D: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 1);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax - 0x6E;
    if ((eax == 0)) goto loc_00207955; /* je: equal / zero */

loc_00207937: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_0020794B; /* je: equal / zero */

loc_0020793C: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_00207967; /* jne: not equal / not zero */

loc_00207941: ;
    MEM8(esp + ecx + 0x264) = 9;
    goto loc_00207966;

loc_0020794B: ;
    MEM8(esp + ecx + 0x264) = 0xD;
    goto loc_00207966;

loc_00207955: ;
    MEM8(esp + ecx + 0x264) = 0xA;
    goto loc_00207966;

loc_0020795F: ;
    MEM8(esp + ecx + 0x264) = LO8(eax);

loc_00207966: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00207967: ;
    SET_LO8(eax, MEM8(ebp + 1));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00207920; /* jne: not equal / not zero */

loc_0020796F: ;
    MEM8(esp + ecx + 0x264) = 0;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0x5E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00207863; /* jne: not equal / not zero */

loc_00207981: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00207863;

loc_00207987: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207997; /* jne: not equal / not zero */

loc_00207992: ;
    eax = 0x3EEA78;

loc_00207997: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_00208391;

loc_002079A2: ;
    eax = MEM32(esp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_002079AE: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_002079B9: ;
    /* nop */

loc_002079C0: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    eax = esp + 0x2E8;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esp + 0x26C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x148;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x002079EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002079EA: ;
    SET_LO8(eax, MEM8(esp + 0xB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207A01; /* jne: not equal / not zero */

loc_002079FC: ;
    eax = 0x3F32D0;

loc_00207A01: ;
    edx = esp + 0x2E4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x148;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00207A17u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00207A17: ;
    ebx = MEM32(esp + 0x4FC);
    edx = MEM32(esp + 0x4F8);
    PUSH32(esp, ebx);
    ecx = esp + 0x150;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00207A34u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_00207A34: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207A47; /* je: equal / zero */

loc_00207A3B: ;
    eax = MEM32(esp + 0x4EC);
    MEM8(eax + ebx + -1) = 0;

loc_00207A47: ;
    PUSH32(esp, 4);
    ecx = esp + 0x2E8;
    PUSH32(esp, 0x3C6EAC);
    PUSH32(esp, ecx);
    MEM8(esp + 0x14C) = 0;
    PUSH32(esp, 0x00207A63u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_00207A63: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207A6E: ;
    edx = esp + 0x2E4;
    PUSH32(esp, 0x3F32C8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00207A80u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00207A80: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002083A1; /* jne: not equal / not zero */

loc_00207A8B: ;
    eax = MEM32(esi + 4);
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002079C0; /* jne: not equal / not zero */

loc_00207A99: ;
    goto loc_002083A1;

loc_00207A9E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207AA8; /* je: equal / zero */

loc_00207AA3: ;
    ebx = esi + 1;
    goto loc_00207AB9;

loc_00207AA8: ;
    esi = 0; /* xor self */
    ecx = esp + 0x20;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00207AB7u); RECOMP_ABI_CALL(0x001E83A0u, sub_001E83A0); /* call 0x001E83A0 */

loc_00207AB7: ;
    ebx = eax;

loc_00207AB9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x140) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_002083A1; /* jge: greater or equal (signed >=) */

loc_00207AC9: ;
    ebp = MEM32(esp + 0x10);
    ebp = ebp + ebp;
    /* nop */

loc_00207AD0: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00207AE4; /* jge: greater or equal (signed >=) */

loc_00207AD7: ;
    eax = MEM32(esp + 0x70);
    ecx = ebp;
    eax = eax >> LO8(ecx);
    eax = eax & 3;
    goto loc_00207AE6;

loc_00207AE4: ;
    eax = 0; /* xor self */

loc_00207AE6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00207BA1; /* je: equal / zero */

loc_00207AED: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00207B48; /* je: equal / zero */

loc_00207AF0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00207C14; /* jne: not equal / not zero */

loc_00207AF7: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00207B0A; /* jge: greater or equal (signed >=) */

loc_00207B00: ;
    eax = MEM32(esp + eax * 4 + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00207B0F; /* jne: not equal / not zero */

loc_00207B0A: ;
    edi = 0x3C806C;

loc_00207B0F: ;
    SET_LO8(eax, MEM8(esp + 0xB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207B26; /* jne: not equal / not zero */

loc_00207B21: ;
    esi = 0x3D2C44;

loc_00207B26: ;
    eax = esp + 0x140;
    edx = eax + 1;

loc_00207B30: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00207B30; /* jne: not equal / not zero */

loc_00207B37: ;
    PUSH32(esp, edi);
    eax = eax - edx;
    PUSH32(esp, esi);
    eax = esp + eax + 0x148;
    PUSH32(esp, eax);
    goto loc_00207BE7;

loc_00207B48: ;
    SET_LO8(eax, MEM8(esp + 0xB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207B5F; /* jne: not equal / not zero */

loc_00207B5A: ;
    esi = 0x3F32C4;

loc_00207B5F: ;
    eax = esp + 0x140;
    edx = eax + 1;
    /* nop */

loc_00207B70: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00207B70; /* jne: not equal / not zero */

loc_00207B77: ;
    ecx = MEM32(esp + 0x10);
    eax = eax - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00207B92; /* jge: greater or equal (signed >=) */

loc_00207B82: ;
    ecx = MEM32(esp + ecx * 4 + 0x74);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + eax + 0x148;
    PUSH32(esp, ecx);
    goto loc_00207BE7;

loc_00207B92: ;
    ecx = ecx | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esp + eax + 0x148;
    PUSH32(esp, ecx);
    goto loc_00207BE7;

loc_00207BA1: ;
    SET_LO8(eax, MEM8(esp + 0xB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207BB8; /* jne: not equal / not zero */

loc_00207BB3: ;
    esi = 0x3CB224;

loc_00207BB8: ;
    eax = esp + 0x140;
    edx = eax + 1;

loc_00207BC2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00207BC2; /* jne: not equal / not zero */

loc_00207BC9: ;
    ecx = MEM32(esp + 0x10);
    eax = eax - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00207BDA; /* jge: greater or equal (signed >=) */

loc_00207BD4: ;
    ecx = MEM32(esp + ecx * 4 + 0x74);
    goto loc_00207BDD;

loc_00207BDA: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_00207BDD: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + eax + 0x148;
    PUSH32(esp, edx);

loc_00207BE7: ;
    PUSH32(esp, 0x00207BECu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00207BEC: ;
    ecx = MEM32(esp + 0x1C);
    eax = ebx + -1;
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00207C14; /* jge: greater or equal (signed >=) */

loc_00207BFA: ;
    edi = esp + 0x140;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00207C02: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00207C02; /* jne: not equal / not zero */

loc_00207C0A: ;
    SET_LO16(ecx, MEM16(0x3CB044));
    MEM16(edi) = LO16(ecx);

loc_00207C14: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00207AD0; /* jl: less (signed <) */

loc_00207C28: ;
    ebp = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    goto loc_002083A1;

loc_00207C35: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207C45; /* jne: not equal / not zero */

loc_00207C40: ;
    eax = 0x3CB224;

loc_00207C45: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_00208391;

loc_00207C50: ;
    eax = MEM32(esp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207C5C: ;
    ecx = eax;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207C67: ;
    ebx = ecx;
    PUSH32(esp, 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00207C71u); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00207C71: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0x00207C7Bu); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_00207C7B: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207C8C; /* je: equal / zero */

loc_00207C82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207C8A; /* je: equal / zero */

loc_00207C86: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00207C8C; /* jbe: below or equal (unsigned <=) */

loc_00207C8A: ;
    eax = esi;

loc_00207C8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207C93; /* je: equal / zero */

loc_00207C90: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00207C95;

loc_00207C93: ;
    eax = ebx;

loc_00207C95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207C9D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207CA6: ;
    SET_LO8(ecx, MEM8(esp + 0xB4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    ecx = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207CBD; /* jne: not equal / not zero */

loc_00207CB8: ;
    ecx = 0x3D2C44;

loc_00207CBD: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00207CCC: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207CD8: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207CE1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207CF1; /* jne: not equal / not zero */

loc_00207CEC: ;
    eax = 0x3D2C44;

loc_00207CF1: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00207D04: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207D14; /* jne: not equal / not zero */

loc_00207D0F: ;
    eax = 0x3CB224;

loc_00207D14: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00207D27: ;
    eax = MEM32(esp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207D57; /* je: equal / zero */

loc_00207D2F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00207D57; /* je: equal / zero */

loc_00207D34: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207D44; /* jne: not equal / not zero */

loc_00207D3F: ;
    eax = 0x3D2C44;

loc_00207D44: ;
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00207D57: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00207D60u); RECOMP_ABI_CALL(0x001E83A0u, sub_001E83A0); /* call 0x001E83A0 */

loc_00207D60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002083A1; /* jne: not equal / not zero */

loc_00207D69: ;
    eax = esp + 0x240;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00207D7Cu); RECOMP_ABI_CALL(0x001E8490u, sub_001E8490); /* call 0x001E8490 */

loc_00207D7C: ;
    ecx = MEM32(esp + 0x248);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207D8B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207D9B; /* jne: not equal / not zero */

loc_00207D96: ;
    eax = 0x3CB224;

loc_00207D9B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 0x148;
    PUSH32(esp, ecx);
    goto loc_00208399;

loc_00207DAA: ;
    eax = MEM32(esp + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00207DEB; /* ja: above (unsigned >) */

loc_00207DB4: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2084F0); /* switch: 14 entries, 12 targets */
    if (_jt == 0x00207DBBu) goto loc_00207DBB;
    if (_jt == 0x00207DBFu) goto loc_00207DBF;
    if (_jt == 0x00207DC3u) goto loc_00207DC3;
    if (_jt == 0x00207DC7u) goto loc_00207DC7;
    if (_jt == 0x00207DCBu) goto loc_00207DCB;
    if (_jt == 0x00207DCFu) goto loc_00207DCF;
    if (_jt == 0x00207DD3u) goto loc_00207DD3;
    if (_jt == 0x00207DD7u) goto loc_00207DD7;
    if (_jt == 0x00207DDBu) goto loc_00207DDB;
    if (_jt == 0x00207DDFu) goto loc_00207DDF;
    if (_jt == 0x00207DE3u) goto loc_00207DE3;
    if (_jt == 0x00207DE7u) goto loc_00207DE7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00207DBB: ;
    SET_LO8(eax, 0x2B);
    goto loc_00207DED;

loc_00207DBF: ;
    SET_LO8(eax, 0x2A);
    goto loc_00207DED;

loc_00207DC3: ;
    SET_LO8(eax, 0x2D);
    goto loc_00207DED;

loc_00207DC7: ;
    SET_LO8(eax, 0x3C);
    goto loc_00207DED;

loc_00207DCB: ;
    SET_LO8(eax, 0x3E);
    goto loc_00207DED;

loc_00207DCF: ;
    SET_LO8(eax, 0x6F);
    goto loc_00207DED;

loc_00207DD3: ;
    SET_LO8(eax, 0x74);
    goto loc_00207DED;

loc_00207DD7: ;
    SET_LO8(eax, 0x64);
    goto loc_00207DED;

loc_00207DDB: ;
    SET_LO8(eax, 0x72);
    goto loc_00207DED;

loc_00207DDF: ;
    SET_LO8(eax, 0x77);
    goto loc_00207DED;

loc_00207DE3: ;
    SET_LO8(eax, 0x6D);
    goto loc_00207DED;

loc_00207DE7: ;
    SET_LO8(eax, 0x6E);
    goto loc_00207DED;

loc_00207DEB: ;
    SET_LO8(eax, 0x63);

loc_00207DED: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    ecx = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207DFD; /* jne: not equal / not zero */

loc_00207DF8: ;
    ecx = 0x3DB1F4;

loc_00207DFD: ;
    edx = SX8(LO8(eax));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    goto loc_00208391;

loc_00207E07: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207E17; /* jne: not equal / not zero */

loc_00207E12: ;
    eax = 0x3CB224;

loc_00207E17: ;
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00207E2A: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207E36: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207E3F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207E4F; /* jne: not equal / not zero */

loc_00207E4A: ;
    eax = 0x3D2C44;

loc_00207E4F: ;
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00207E62: ;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207E6E: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207E77: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207E87; /* jne: not equal / not zero */

loc_00207E82: ;
    eax = 0x3D2C44;

loc_00207E87: ;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00207E9A: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207EA6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207EAF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207EBF; /* jne: not equal / not zero */

loc_00207EBA: ;
    eax = 0x3D2C44;

loc_00207EBF: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00207ED2: ;
    eax = MEM32(esp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207EDE: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207EE7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207EF7; /* jne: not equal / not zero */

loc_00207EF2: ;
    eax = 0x3D2C44;

loc_00207EF7: ;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00207F0A: ;
    eax = MEM32(esp + 0x60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207F16: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207F1F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207F2F; /* jne: not equal / not zero */

loc_00207F2A: ;
    eax = 0x3D2C44;

loc_00207F2F: ;
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00207F42: ;
    eax = MEM32(esp + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207F4E: ;
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00207F59: ;
    /* nop */

loc_00207F60: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    ecx = esp + 0x2E8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    edx = esp + 0x26C;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x14C;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00207F8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00207F8A: ;
    SET_LO8(eax, MEM8(esp + 0xB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00207FA1; /* jne: not equal / not zero */

loc_00207F9C: ;
    eax = 0x3D2C44;

loc_00207FA1: ;
    ecx = esp + 0x2E4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00207FB7u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00207FB7: ;
    eax = MEM32(esi + 4);
    esi = esi + 4;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00207FEC; /* je: equal / zero */

loc_00207FC4: ;
    SET_LO8(eax, MEM8(esp + 0xB4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00207FEC; /* jne: not equal / not zero */

loc_00207FCF: ;
    edi = esp + 0x140;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00207FD7: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00207FD7; /* jne: not equal / not zero */

loc_00207FDF: ;
    SET_LO16(eax, MEM16(0x3CB044));
    MEM16(edi) = LO16(eax);
    edi = MEM32(esp + 0x14);

loc_00207FEC: ;
    ebx = MEM32(esp + 0x4F0);
    edx = MEM32(esp + 0x4EC);
    PUSH32(esp, ebx);
    ecx = esp + 0x144;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00208009u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_00208009: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020801C; /* je: equal / zero */

loc_00208010: ;
    eax = MEM32(esp + 0x4EC);
    MEM8(eax + ebx + -1) = 0;

loc_0020801C: ;
    PUSH32(esp, 4);
    ecx = esp + 0x2E8;
    PUSH32(esp, 0x3C6EAC);
    PUSH32(esp, ecx);
    MEM8(esp + 0x14C) = 0;
    PUSH32(esp, 0x00208038u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_00208038: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00208043: ;
    edx = esp + 0x2E4;
    PUSH32(esp, 0x3F32C8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00208055u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_00208055: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002083A1; /* jne: not equal / not zero */

loc_00208060: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00207F60; /* jne: not equal / not zero */

loc_00208069: ;
    goto loc_002083A1;

loc_0020806E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_0020807E; /* jne: not equal / not zero */

loc_00208079: ;
    eax = 0x3F32BC;

loc_0020807E: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00208091: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020809Du); RECOMP_ABI_CALL(0x00201ED0u, sub_00201ED0); /* call 0x00201ED0 */

loc_0020809D: ;
    goto loc_002081CA;

loc_002080A2: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_002080AE: ;
    edx = eax;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x002080B8u); RECOMP_ABI_CALL(0x00201F20u, sub_00201F20); /* call 0x00201F20 */

loc_002080B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020820C; /* jne: not equal / not zero */

loc_002080C0: ;
    eax = 0x3F32B0;
    goto loc_0020820C;

loc_002080CA: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002080F5; /* je: equal / zero */

loc_002080D2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_002080E2; /* jne: not equal / not zero */

loc_002080DD: ;
    eax = 0x3CB224;

loc_002080E2: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_002080F5: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x002080FEu); RECOMP_ABI_CALL(0x001E83A0u, sub_001E83A0); /* call 0x001E83A0 */

loc_002080FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002083A1; /* jne: not equal / not zero */

loc_00208107: ;
    eax = esp + 0x24C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0020811Au); RECOMP_ABI_CALL(0x001E8490u, sub_001E8490); /* call 0x001E8490 */

loc_0020811A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_0020812A; /* jne: not equal / not zero */

loc_00208125: ;
    eax = 0x3CB224;

loc_0020812A: ;
    ecx = MEM32(esp + 0x250);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00208140: ;
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020816B; /* je: equal / zero */

loc_00208148: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00208158; /* jne: not equal / not zero */

loc_00208153: ;
    eax = 0x3D2C44;

loc_00208158: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_0020816B: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x00208174u); RECOMP_ABI_CALL(0x001E83A0u, sub_001E83A0); /* call 0x001E83A0 */

loc_00208174: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002083A1; /* jne: not equal / not zero */

loc_0020817D: ;
    eax = esp + 0x258;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00208190u); RECOMP_ABI_CALL(0x001E8490u, sub_001E8490); /* call 0x001E8490 */

loc_00208190: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_002081A0; /* jne: not equal / not zero */

loc_0020819B: ;
    eax = 0x3F32C4;

loc_002081A0: ;
    ecx = MEM32(esp + 0x258);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_002081B6: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_002081C2: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002081CAu); RECOMP_ABI_CALL(0x00201F70u, sub_00201F70); /* call 0x00201F70 */

loc_002081CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002081D3; /* jne: not equal / not zero */

loc_002081CE: ;
    eax = 0x3F32B0;

loc_002081D3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    ecx = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_002081E3; /* jne: not equal / not zero */

loc_002081DE: ;
    ecx = 0x3D2C44;

loc_002081E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x148;
    PUSH32(esp, ecx);
    goto loc_00208399;

loc_002081F2: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_002081FE: ;
    edx = eax;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00208208u); RECOMP_ABI_CALL(0x00201FC0u, sub_00201FC0); /* call 0x00201FC0 */

loc_00208208: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208223; /* je: equal / zero */

loc_0020820C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    ecx = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_0020821C; /* jne: not equal / not zero */

loc_00208217: ;
    ecx = 0x3D2C44;

loc_0020821C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_00208391;

loc_00208223: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00208233; /* jne: not equal / not zero */

loc_0020822E: ;
    eax = 0x3CB224;

loc_00208233: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00208246: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002083A1; /* je: equal / zero */

loc_00208252: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = esp + 0xB4;
    if (TEST_NZ(_fa, _fb)) goto loc_00208262; /* jne: not equal / not zero */

loc_0020825D: ;
    eax = 0x3D2C44;

loc_00208262: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x148;
    PUSH32(esp, edx);
    goto loc_00208399;

loc_00208275: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax - 0x6E;
    if ((eax == 0)) goto loc_002082AB; /* je: equal / zero */

loc_0020827F: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_0020829C; /* je: equal / zero */

loc_00208284: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_002083A1; /* jne: not equal / not zero */

loc_0020828D: ;
    MEM16(esp + 0x140) = 9;
    goto loc_002083A1;

loc_0020829C: ;
    MEM16(esp + 0x140) = 0xD;
    goto loc_002083A1;

loc_002082AB: ;
    MEM16(esp + 0x140) = 0xA;
    goto loc_002083A1;

loc_002082BA: ;
    SET_LO8(ecx, MEM8(ebp));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208382; /* je: equal / zero */

loc_002082C5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x22 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208388; /* je: equal / zero */

loc_002082CE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020834A; /* jne: not equal / not zero */

loc_002082D3: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 1);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax - 0x6E;
    if ((eax == 0)) goto loc_0020832A; /* je: equal / zero */

loc_002082DD: ;
    eax = eax - 4;
    if ((eax == 0)) goto loc_0020830A; /* je: equal / zero */

loc_002082E2: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_00208376; /* jne: not equal / not zero */

loc_002082EB: ;
    edi = esp + 0x140;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002082F3: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002082F3; /* jne: not equal / not zero */

loc_002082FB: ;
    SET_LO16(eax, MEM16(0x3EEA84));
    MEM16(edi) = LO16(eax);
    edi = MEM32(esp + 0x14);
    goto loc_00208376;

loc_0020830A: ;
    edi = esp + 0x140;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00208312: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00208312; /* jne: not equal / not zero */

loc_0020831A: ;
    SET_LO16(ecx, MEM16(0x3EEA80));
    MEM16(edi) = LO16(ecx);
    edi = MEM32(esp + 0x14);
    goto loc_00208376;

loc_0020832A: ;
    edi = esp + 0x140;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00208332: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00208332; /* jne: not equal / not zero */

loc_0020833A: ;
    SET_LO16(edx, MEM16(0x3C6F8C));
    MEM16(edi) = LO16(edx);
    edi = MEM32(esp + 0x14);
    goto loc_00208376;

loc_0020834A: ;
    eax = esp + 0x140;
    esi = eax + 1;

loc_00208354: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00208354; /* jne: not equal / not zero */

loc_0020835B: ;
    ecx = SX8(LO8(ecx));
    PUSH32(esp, ecx);
    eax = eax - esi;
    edx = esp + eax + 0x144;
    PUSH32(esp, 0x3DB1F4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00208373u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00208373: ;
    esp = esp + 0xC;

loc_00208376: ;
    SET_LO8(ecx, MEM8(ebp + 1));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002082C5; /* jne: not equal / not zero */

loc_00208382: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0x22) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0x22 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002083A1; /* jne: not equal / not zero */

loc_00208388: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002083A1;

loc_0020838B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DB1F4);

loc_00208391: ;
    eax = esp + 0x148;
    PUSH32(esp, eax);

loc_00208399: ;
    PUSH32(esp, 0x0020839Eu); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_0020839E: ;
    esp = esp + 0xC;

loc_002083A1: ;
    ecx = MEM32(esp + 0x4F0);
    eax = MEM32(esp + 0x4EC);
    PUSH32(esp, ecx);
    edx = esp + 0x144;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002083BEu); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_002083BE: ;
    SET_LO8(eax, MEM8(ebp));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00207810; /* jne: not equal / not zero */

loc_002083CC: ;
    esi = MEM32(esp + 0x4F0);
    edi = MEM32(esp + 0x4EC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C6F8C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002083E6u); RECOMP_ABI_CALL(0x00341DC0u, sub_00341DC0); /* call 0x00341DC0 */

loc_002083E6: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002083F3; /* jle: less or equal (signed <=) */

loc_002083EE: ;
    MEM8(edi + esi + -2) = 0xA;

loc_002083F3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = edi;
    if (TEST_Z(_fa, _fb)) goto loc_002083FE; /* je: equal / zero */

loc_002083F9: ;
    MEM8(edi + esi + -1) = 0;

loc_002083FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4D4;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00208530
 * Original: 0x00208530 - 0x00208599 (105 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208530: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00208543; /* jne: not equal / not zero */

loc_0020853F: ;
    eax = 0; /* xor self */
    goto loc_0020855A;

loc_00208543: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208549u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00208549: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x00208557u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208557: ;
    eax = eax >> 2;

loc_0020855A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208566; /* jl: less (signed <) */

loc_0020855E: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00208566u); RECOMP_ABI_CALL(0x00202B60u, sub_00202B60); /* call 0x00202B60 */

loc_00208566: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00208582; /* jle: less or equal (signed <=) */

loc_00208571: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + eax * 4 + -4);
    ecx = ecx + eax * 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_00208571; /* jg: greater (signed >) */

loc_00208582: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x14);
    MEM32(eax + edx * 4) = ecx;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002085A0
 * Original: 0x002085A0 - 0x002085F2 (82 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002085A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002085A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002085B3; /* jne: not equal / not zero */

loc_002085AF: ;
    eax = 0; /* xor self */
    goto loc_002085CA;

loc_002085B3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002085B9u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002085B9: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x002085C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002085C7: ;
    eax = eax >> 2;

loc_002085CA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002085D6; /* jl: less (signed <) */

loc_002085CE: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002085D6u); RECOMP_ABI_CALL(0x00202B60u, sub_00202B60); /* call 0x00202B60 */

loc_002085D6: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0x10);
    MEM32(ecx + eax * 4) = edx;
    eax = MEM32(esi + 0xC);
    ecx = eax + 1;
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208600
 * Original: 0x00208600 - 0x00208654 (84 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208600: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020860F; /* jne: not equal / not zero */

loc_0020860B: ;
    eax = 0; /* xor self */
    goto loc_00208626;

loc_0020860F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00208615u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00208615: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x00208623u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208623: ;
    eax = eax >> 2;

loc_00208626: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208645; /* jl: less (signed <) */

loc_0020862E: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00208636u); RECOMP_ABI_CALL(0x00202B60u, sub_00202B60); /* call 0x00202B60 */

loc_00208636: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax + esi * 4) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00208645: ;
    edx = MEM32(edi + 8);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(edx + esi * 4) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208660
 * Original: 0x00208660 - 0x002086D2 (114 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208660: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020869B; /* jle: less or equal (signed <=) */

loc_00208670: ;
    esi = eax + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020869B; /* jl: less (signed <) */

loc_00208677: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208696; /* je: equal / zero */

loc_00208681: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00208696; /* jne: not equal / not zero */

loc_00208691: ;
    PUSH32(esp, 0x00208696u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00208696: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00208677; /* jge: greater or equal (signed >=) */

loc_0020869B: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002086A6; /* jne: not equal / not zero */

loc_002086A2: ;
    eax = 0; /* xor self */
    goto loc_002086BD;

loc_002086A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002086ACu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002086AC: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x002086BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002086BA: ;
    eax = eax >> 2;

loc_002086BD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002086C9; /* jl: less (signed <) */

loc_002086C1: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x002086C9u); RECOMP_ABI_CALL(0x00202B60u, sub_00202B60); /* call 0x00202B60 */

loc_002086C9: ;
    MEM32(edi + 0xC) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002086E0
 * Original: 0x002086E0 - 0x002086F4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002086E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002086E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002086EB; /* je: equal / zero */

loc_002086E8: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002086EB: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002085A0(); return; /* tail jmp 0x002085A0 */

}

/**
 * sub_00208700
 * Original: 0x00208700 - 0x0020873C (60 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208700: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x10);
    eax = eax + eax * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00208716; /* jl: less (signed <) */

loc_0020870E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00208725; /* jg: greater (signed >) */

loc_00208713: ;
    MEM32(ecx + 8) = eax;

loc_00208716: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_00208725: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020872Du); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020872D: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00208740
 * Original: 0x00208740 - 0x002087E9 (169 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00208740(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208740: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esi + 0xC) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020875C; /* jl: less (signed <) */

loc_00208754: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020875Cu); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0020875C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ecx = MEM32(esi + 0x14);
    if (TEST_S(_fas, _fbs)) goto loc_00208775; /* jl: less (signed <) */

loc_00208763: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020876D; /* jg: greater (signed >) */

loc_00208768: ;
    MEM32(ecx + 8) = edi;
    goto loc_00208775;

loc_0020876D: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208775u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00208775: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = MEM32(eax + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00208787; /* jle: less or equal (signed <=) */

loc_00208782: ;
    eax = eax | 0xFFFFFFFFu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_00208787: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 8);
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = eax + eax * 4;
    ebp = ecx + eax * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    edi = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_002087E3; /* jae: above or equal (unsigned >=) */

loc_002087AC: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    /* nop */

loc_002087B0: ;
    eax = MEM32(esi);
    MEM32(esp + 0x14) = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ebx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esp + 0x14);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x002087D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002087D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002087E2; /* je: equal / zero */

loc_002087D8: ;
    edi = edi + 0x14;
    ebx = ebx + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002087B0; /* jb: below (unsigned <) */

loc_002087E2: ;
    POP32(esp, ebx);

loc_002087E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002087F0
 * Original: 0x002087F0 - 0x00208830 (64 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002087F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002087F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esi + 8);
    edx = MEM32(ecx + 8);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020880A; /* jl: less (signed <) */

loc_00208802: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020880Au); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0020880A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00208828; /* jl: less (signed <) */

loc_00208816: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00208820; /* jg: greater (signed >) */

loc_0020881B: ;
    MEM32(ecx + 8) = eax;
    goto loc_00208828;

loc_00208820: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00208828u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00208828: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x64)); return; /* indirect tail jmp */

}

/**
 * sub_00208830
 * Original: 0x00208830 - 0x002088A0 (112 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208846; /* jl: less (signed <) */

loc_00208841: ;
    MEM32(ecx + 8) = ebx;
    goto loc_0020884E;

loc_00208846: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020884Eu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020884E: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00208889; /* jg: greater (signed >) */

loc_00208856: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208883; /* je: equal / zero */

loc_0020885D: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00208871; /* jne: not equal / not zero */

loc_0020886B: ;
    edx = MEM32(0x5BC538);

loc_00208871: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00208883u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208883: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;

loc_00208889: ;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x14) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002088A0
 * Original: 0x002088A0 - 0x002088E5 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002088A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002088A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC540);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002088E2; /* je: equal / zero */

loc_002088B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002088DC; /* je: equal / zero */

loc_002088B4: ;
    MEM32(0x5BC540) = 0;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x002088C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002088C5: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002088DC; /* jne: not equal / not zero */

loc_002088D5: ;
    ecx = esi;
    PUSH32(esp, 0x002088DCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002088DC: ;
    MEM32(0x5BC540) = edi;

loc_002088E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002088F0
 * Original: 0x002088F0 - 0x002089A1 (177 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002088F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002088F0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x002088FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002088FE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BBAB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(0x5BBAB4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208942; /* jne: not equal / not zero */

loc_00208906: ;
    esi = MEM32(0x5BC540);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208942; /* je: equal / zero */

loc_00208910: ;
    MEM32(0x5BC540) = 0;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00208921u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208921: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00208938; /* jne: not equal / not zero */

loc_00208931: ;
    ecx = esi;
    PUSH32(esp, 0x00208938u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00208938: ;
    MEM32(0x5BC540) = 0;

loc_00208942: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x0020894Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020894D: ;
    ecx = MEM32(0x5BC508);
    SET_LO8(eax, MEM8(ecx + 0x77));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208967; /* je: equal / zero */

loc_0020895A: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00208967u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208967: ;
    esi = 0x2E;
    edi = ebp + 0x19F4;

loc_00208972: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = MEM32(edi);
    if (TEST_Z(_fa, _fb)) goto loc_00208992; /* je: equal / zero */

loc_00208978: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00208982; /* jle: less or equal (signed <=) */

loc_0020897D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00208992; /* jle: less or equal (signed <=) */

loc_00208982: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208992; /* je: equal / zero */

loc_00208986: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x00208992u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208992: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi - 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00208972; /* jge: greater or equal (signed >=) */

loc_0020899D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002089B0
 * Original: 0x002089B0 - 0x00208AF1 (321 bytes, 116 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002089B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002089B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = ecx;
    MEM32(esp + 8) = ebx;
    if (TEST_S(_fas, _fbs)) goto loc_00208AEB; /* jl: less (signed <) */

loc_002089C5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00208AEB; /* jge: greater or equal (signed >=) */

loc_002089CE: ;
    PUSH32(esp, esi);
    eax = ebp + ebp * 8;
    eax = eax << 4;
    esi = MEM32(eax + ebx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = eax + ebx + 0x14;
    if (TEST_Z(_fa, _fb)) goto loc_00208AE9; /* je: equal / zero */

loc_002089E7: ;
    MEM32(edi) = 0;
    ecx = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208AC7; /* jne: not equal / not zero */

loc_002089FF: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00208A09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208A09: ;
    eax = eax | edx;
    if ((eax == 0)) goto loc_00208A19; /* je: equal / zero */

loc_00208A0D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x00208A19u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208A19: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00208A20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208A20: ;
    eax = MEM32(edi + 0x88);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208A77; /* je: equal / zero */

loc_00208A2A: ;
    eax = eax & 0xFFFFFFFEu;
    MEM32(edi + 0x88) = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00208A3Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208A3A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208AC7; /* je: equal / zero */

loc_00208A44: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00208A58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208A58: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208A5Eu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00208A5E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208AC7; /* je: equal / zero */

loc_00208A65: ;
    ecx = eax;
    PUSH32(esp, 0x00208A6Cu); RECOMP_ABI_CALL(0x00011A20u, sub_00011A20); /* call 0x00011A20 */

loc_00208A6C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00208A72u); RECOMP_ABI_CALL(0x00138810u, sub_00138810); /* call 0x00138810 */

loc_00208A72: ;
    esp = esp + 4;
    goto loc_00208AC7;

loc_00208A77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208AC7; /* je: equal / zero */

loc_00208A7B: ;
    eax = eax & 0xFFFFFFFDu;
    MEM32(edi + 0x88) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00208A8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208A8B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208AC7; /* je: equal / zero */

loc_00208A91: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00208A9Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208A9B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = eax;
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00208AB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208AB1: ;
    ecx = MEM32(0x5BB9AC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00208AC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208AC3: ;
    ebx = MEM32(esp + 0x10);

loc_00208AC7: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00208ADE; /* jne: not equal / not zero */

loc_00208AD7: ;
    ecx = esi;
    PUSH32(esp, 0x00208ADEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00208ADE: ;
    ecx = MEM32(ebx + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00208AE9; /* jne: not equal / not zero */

loc_00208AE6: ;
    MEM32(ebx + 8) = ebp;

loc_00208AE9: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00208AEB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208B00
 * Original: 0x00208B00 - 0x00208F04 (1028 bytes, 350 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208B00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00208B00: ;
    esp = esp - 0xF8;
    eax = MEM32(0x5BC508);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x54);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00208E03; /* je: equal / zero */

loc_00208B24: ;
    SET_LO8(ecx, MEM8(eax + 0x78));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208C93; /* je: equal / zero */

loc_00208B2F: ;
    ecx = MEM32(ebx + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00208C93; /* je: equal / zero */

loc_00208B3E: ;
    PUSH32(esp, 0x00208B43u); RECOMP_ABI_CALL(0x001F8990u, sub_001F8990); /* call 0x001F8990 */

loc_00208B43: ;
    ecx = MEM32(0x5BB9AC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = eax;
    edi = ebx * 4;
    if (TEST_NZ(_fa, _fb)) goto loc_00208B61; /* jne: not equal / not zero */

loc_00208B56: ;
    ecx = 0x46A72C;
    MEM32(0x5BB9AC) = ecx;

loc_00208B61: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00208B67u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208B67: ;
    ecx = edi;
    edx = ecx;
    ebp = eax;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    PUSH32(esp, 0x3F3488);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    PUSH32(esp, 0x00208B87u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00208B87: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208B99; /* je: equal / zero */

loc_00208B94: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00208B99u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208B99: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00208BA3u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00208BA3: ;
    esp = esp + 4;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00208BF0; /* jle: less or equal (signed <=) */

loc_00208BAC: ;
    /* nop */

loc_00208BB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208BF0; /* je: equal / zero */

loc_00208BB5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00208BD9; /* jl: less (signed <) */

loc_00208BB9: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00208BD9; /* jge: greater or equal (signed >=) */

loc_00208BC5: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208BD9; /* je: equal / zero */

loc_00208BCC: ;
    eax = eax + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00208BDB; /* jle: less or equal (signed <=) */

loc_00208BD2: ;
    SET_LO8(ecx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208BDB; /* je: equal / zero */

loc_00208BD9: ;
    eax = 0; /* xor self */

loc_00208BDB: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(ebp + edi * 4) = eax;
    PUSH32(esp, 0x00208BE9u); RECOMP_ABI_CALL(0x001F89F0u, sub_001F89F0); /* call 0x001F89F0 */

loc_00208BE9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    esi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00208BB0; /* jl: less (signed <) */

loc_00208BF0: ;
    PUSH32(esp, 0x1E9890);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00208BFEu); RECOMP_ABI_CALL(0x00342FD0u, sub_00342FD0); /* call 0x00342FD0 */

loc_00208BFE: ;
    esp = esp + 0x10;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00208C8D; /* jle: less or equal (signed <=) */

loc_00208C0B: ;
    goto loc_00208C10;

    /* nop */

loc_00208C10: ;
    esi = MEM32(ebp + edi * 4);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00208C36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208C36: ;
    PUSH32(esp, esi);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x3F3480);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00208C46u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00208C46: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F3460);
    PUSH32(esp, 0x00208C69u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00208C69: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208C7B; /* je: equal / zero */

loc_00208C76: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00208C7Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208C7B: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00208C85u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00208C85: ;
    esp = esp + 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208C10; /* jl: less (signed <) */

loc_00208C8D: ;
    ebx = MEM32(esp + 0x10);
    esi = 0; /* xor self */

loc_00208C93: ;
    eax = MEM32(0x5BC508);
    SET_LO8(ecx, MEM8(eax + 0x77));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208E03; /* je: equal / zero */

loc_00208CA3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    edx = MEM32(ebx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x60) = esi;
    MEM32(esp + 0x64) = esi;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x6C) = esi;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x68) = esi;
    MEM32(esp + 0x70) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00208D0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208D0B: ;
    edi = 0; /* xor self */
    ebp = ebx + 0xE4;

loc_00208D13: ;
    _fa = (uint32_t)(MEM32(esp + edi * 4 + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + edi * 4 + 0x38), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208DA0; /* je: equal / zero */

loc_00208D1D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208D55; /* jl: less (signed <) */

loc_00208D21: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00208D55; /* jge: greater or equal (signed >=) */

loc_00208D26: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208D55; /* je: equal / zero */

loc_00208D2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = MEM32(ebx + 0x30);
    if (CMP_L(_fas, _fbs)) goto loc_00208D55; /* jl: less (signed <) */

loc_00208D35: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00208D55; /* jge: greater or equal (signed >=) */

loc_00208D3D: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208D55; /* je: equal / zero */

loc_00208D44: ;
    ecx = ecx + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00208D51; /* jle: less or equal (signed <=) */

loc_00208D4A: ;
    SET_LO8(eax, MEM8(ecx + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00208D55; /* jne: not equal / not zero */

loc_00208D51: ;
    eax = ecx;
    goto loc_00208D57;

loc_00208D55: ;
    eax = 0; /* xor self */

loc_00208D57: ;
    PUSH32(esp, eax);
    edx = esp + 0xBC;
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00208D6Au); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_00208D6A: ;
    eax = MEM32(esp + edi * 4 + 0x44);
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F344C);
    PUSH32(esp, 0x00208D81u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00208D81: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208D93; /* je: equal / zero */

loc_00208D8E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00208D93u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208D93: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00208D9Du); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00208D9D: ;
    esp = esp + 4;

loc_00208DA0: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208D13; /* jl: less (signed <) */

loc_00208DAD: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F3318);
    PUSH32(esp, 0x00208DE4u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_00208DE4: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208DF6; /* je: equal / zero */

loc_00208DF1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00208DF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208DF6: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x00208E00u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_00208E00: ;
    esp = esp + 4;

loc_00208E03: ;
    eax = MEM32(esp + 0x34);
    ebp = 0; /* xor self */
    eax = eax + 0x14;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;

loc_00208E14: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208E81; /* je: equal / zero */

loc_00208E1E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x00208E26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208E26: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208E7F; /* je: equal / zero */

loc_00208E2C: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00208E53; /* jle: less or equal (signed <=) */

loc_00208E32: ;
    esi = MEM32(esp + 0x14);

loc_00208E36: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208E48; /* je: equal / zero */

loc_00208E3C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x00208E44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208E44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208E7F; /* je: equal / zero */

loc_00208E48: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0x90;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00208E36; /* jl: less (signed <) */

loc_00208E53: ;
    ecx = MEM32(0x5BC508);
    SET_LO8(eax, MEM8(ecx + 0x76));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208E78; /* je: equal / zero */

loc_00208E60: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00208E6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208E6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00208E78; /* jle: less or equal (signed <=) */

loc_00208E6E: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA4); PUSH32(esp, 0x00208E78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208E78: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00208E7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208E7F: ;
    esi = 0; /* xor self */

loc_00208E81: ;
    ecx = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00208E14; /* jl: less (signed <) */

loc_00208E99: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208EC3; /* je: equal / zero */

loc_00208EA5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00208EBA; /* jne: not equal / not zero */

loc_00208EB5: ;
    PUSH32(esp, 0x00208EBAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00208EBA: ;
    ecx = MEM32(0x5BC508);
    MEM32(ecx + 0x54) = esi;

loc_00208EC3: ;
    edi = MEM32(esp + 0x14);
    ebx = 0x2F;
    /* nop */

loc_00208ED0: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208EF0; /* je: equal / zero */

loc_00208ED6: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x00208EE0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208EE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208EF0; /* je: equal / zero */

loc_00208EE4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x00208EF0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208EF0: ;
    edi = edi + 0x90;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00208ED0; /* jne: not equal / not zero */

loc_00208EF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xF8;
    esp += 4; return; /* ret */

}

/**
 * sub_00208F10
 * Original: 0x00208F10 - 0x00208F67 (87 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208F10: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00208F63; /* je: equal / zero */

loc_00208F19: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(esi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00208F37; /* jge: greater or equal (signed >=) */

loc_00208F29: ;
    ecx = MEM32(esi + 0x10);
    eax = ebx + 1;
    MEM32(esi + 8) = eax;
    MEM32(ecx + ebx * 4) = edi;
    goto loc_00208F4A;

loc_00208F37: ;
    PUSH32(esp, 4);
    edx = ebx + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00208F44u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00208F44: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + ebx * 4) = edi;

loc_00208F4A: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    POP32(esp, esi);
    MEM32(edi + 4) = ecx;
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00208F63; /* jne: not equal / not zero */

loc_00208F5C: ;
    ecx = edi;
    PUSH32(esp, 0x00208F63u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00208F63: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208F70
 * Original: 0x00208F70 - 0x00208FB4 (68 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208F70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00208F81; /* je: equal / zero */

loc_00208F7E: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00208F81: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00208F9B; /* jge: greater or equal (signed >=) */

loc_00208F89: ;
    ecx = MEM32(esi + 0x10);
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    MEM32(ecx + edi * 4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00208F9B: ;
    PUSH32(esp, 4);
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00208FA8u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00208FA8: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + edi * 4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00208FC0
 * Original: 0x00208FC0 - 0x00209047 (135 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00208FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00208FC0: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x42));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209043; /* je: equal / zero */

loc_00208FCA: ;
    ecx = MEM32(edi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209043; /* je: equal / zero */

loc_00208FD1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC248);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00208FDDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00208FDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209042; /* je: equal / zero */

loc_00208FE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00208FF1; /* je: equal / zero */

loc_00208FE5: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00208FE1; /* jne: not equal / not zero */

loc_00208FEC: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00208FF1: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx + ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209042; /* je: equal / zero */

loc_00208FFF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00209006u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00209006: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x00209014u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209014: ;
    ebx = eax;
    ebx = ebx >> 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00209041; /* jle: less or equal (signed <=) */

loc_0020901F: ;
    /* nop */

loc_00209020: ;
    ecx = MEM32(esi + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020903C; /* je: equal / zero */

loc_00209027: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020903C; /* jne: not equal / not zero */

loc_00209037: ;
    PUSH32(esp, 0x0020903Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020903C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209020; /* jl: less (signed <) */

loc_00209041: ;
    POP32(esp, ebx);

loc_00209042: ;
    POP32(esp, esi);

loc_00209043: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209050
 * Original: 0x00209050 - 0x002090BB (107 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209050: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0020905Eu); RECOMP_ABI_CALL(0x00208FC0u, sub_00208FC0); /* call 0x00208FC0 */

loc_0020905E: ;
    SET_LO8(eax, MEM8(esi + 0x41));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209085; /* je: equal / zero */

loc_00209065: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebx + eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209084; /* je: equal / zero */

loc_00209070: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00209076u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00209076: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00209084u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209084: ;
    POP32(esp, edi);

loc_00209085: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002090A6; /* je: equal / zero */

loc_0020908E: ;
    PUSH32(esp, 0x00209093u); RECOMP_ABI_CALL(0x001F5250u, sub_001F5250); /* call 0x001F5250 */

loc_00209093: ;
    ecx = MEM32(esi + 8);
    MEM32(ebx + ecx) = eax;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002090A1u); RECOMP_ABI_CALL(0x001F7450u, sub_001F7450); /* call 0x001F7450 */

loc_002090A1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002090A6: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    MEM32(ebx + ecx) = eax;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002090B6u); RECOMP_ABI_CALL(0x001F7450u, sub_001F7450); /* call 0x001F7450 */

loc_002090B6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002090C0
 * Original: 0x002090C0 - 0x00209206 (326 bytes, 129 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002090C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002090C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x002090D0u); RECOMP_ABI_CALL(0x00208FC0u, sub_00208FC0); /* call 0x00208FC0 */

loc_002090D0: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002090F5; /* je: equal / zero */

loc_002090D7: ;
    eax = MEM32(esi + 8);
    edi = MEM32(ebx + eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002090F5; /* je: equal / zero */

loc_002090E1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002090E7u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002090E7: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x002090F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002090F5: ;
    eax = MEM32(esi + 8);
    ebp = MEM32(esp + 0x18);
    ecx = MEM32(eax + ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020910A; /* je: equal / zero */

loc_00209103: ;
    PUSH32(esp, 0x00209108u); RECOMP_ABI_CALL(0x001F5250u, sub_001F5250); /* call 0x001F5250 */

loc_00209108: ;
    goto loc_0020910C;

loc_0020910A: ;
    eax = 0; /* xor self */

loc_0020910C: ;
    ecx = MEM32(esi + 8);
    MEM32(ebx + ecx) = eax;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002091FF; /* je: equal / zero */

loc_0020911D: ;
    edx = MEM32(ecx);
    edi = MEM32(0x5BC248);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00209128u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209128: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020913B; /* je: equal / zero */

loc_0020912C: ;
    /* nop */

loc_00209130: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209163; /* je: equal / zero */

loc_00209134: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00209130; /* jne: not equal / not zero */

loc_0020913B: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    edi = MEM32(0x5BC294);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00209149u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209149: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002091FF; /* je: equal / zero */

loc_00209151: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002091BF; /* je: equal / zero */

loc_00209155: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00209151; /* jne: not equal / not zero */

loc_0020915C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00209163: ;
    esi = MEM32(esi + 8);
    edi = MEM32(esi + ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = MEM32(esi + ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002091FF; /* je: equal / zero */

loc_00209174: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002091FF; /* je: equal / zero */

loc_0020917C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00209182u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00209182: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x00209190u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209190: ;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002091FF; /* jle: less or equal (signed <=) */

loc_00209197: ;
    edi = edi - esi;
    ebx = eax;
    goto loc_002091A0;

    /* nop */

loc_002091A0: ;
    ecx = MEM32(edi + esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002091B0; /* je: equal / zero */

loc_002091A9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x002091B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002091B0: ;
    MEM32(esi) = eax;
    esi = esi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002091A0; /* jne: not equal / not zero */

loc_002091B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002091BF: ;
    esi = MEM32(esi + 8);
    edi = MEM32(esi + ebp);
    esi = MEM32(esi + ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002091CEu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002091CE: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x002091DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002091DC: ;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002091FF; /* jle: less or equal (signed <=) */

loc_002091E3: ;
    edi = edi - esi;
    ebx = eax;

loc_002091E7: ;
    ecx = MEM32(edi + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002091F5; /* je: equal / zero */

loc_002091EE: ;
    PUSH32(esp, 0x002091F3u); RECOMP_ABI_CALL(0x001F5250u, sub_001F5250); /* call 0x001F5250 */

loc_002091F3: ;
    goto loc_002091F7;

loc_002091F5: ;
    eax = 0; /* xor self */

loc_002091F7: ;
    MEM32(esi) = eax;
    esi = esi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002091E7; /* jne: not equal / not zero */

loc_002091FF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209210
 * Original: 0x00209210 - 0x00209280 (112 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209210: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0020921Eu); RECOMP_ABI_CALL(0x00208FC0u, sub_00208FC0); /* call 0x00208FC0 */

loc_0020921E: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209245; /* je: equal / zero */

loc_00209225: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebx + eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209244; /* je: equal / zero */

loc_00209230: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00209236u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00209236: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00209244u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209244: ;
    POP32(esp, edi);

loc_00209245: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020926B; /* je: equal / zero */

loc_00209253: ;
    PUSH32(esp, 0x00209258u); RECOMP_ABI_CALL(0x001F5250u, sub_001F5250); /* call 0x001F5250 */

loc_00209258: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(ebx + edx) = eax;
    PUSH32(esp, 0x00209266u); RECOMP_ABI_CALL(0x001F7450u, sub_001F7450); /* call 0x001F7450 */

loc_00209266: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020926B: ;
    edx = MEM32(esi + 8);
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(ebx + edx) = eax;
    PUSH32(esp, 0x0020927Bu); RECOMP_ABI_CALL(0x001F7450u, sub_001F7450); /* call 0x001F7450 */

loc_0020927B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209280
 * Original: 0x00209280 - 0x0020934A (202 bytes, 83 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0xC);
    ebx = MEM32(ecx + eax);
    edx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3EEF7C);
    PUSH32(esp, 0x002092A2u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_002092A2: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002092B4; /* je: equal / zero */

loc_002092AF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002092B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002092B4: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x002092BEu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_002092BE: ;
    eax = MEM32(esp + 0x14);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209345; /* je: equal / zero */

loc_002092C9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209345; /* je: equal / zero */

loc_002092CD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002092D5u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002092D5: ;
    edx = MEM32(eax);
    edi = MEM32(esi + 0x3C);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x002092E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002092E6: ;
    ebp = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x002092EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002092EF: ;
    ecx = eax;
    edx = 0; /* xor self */
    eax = ebp;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    edi = MEM32(0x5BC248);
    ebp = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00209307u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209307: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209343; /* je: equal / zero */

loc_0020930B: ;
    goto loc_00209310;

    /* nop */

loc_00209310: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209322; /* je: equal / zero */

loc_00209314: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00209310; /* jne: not equal / not zero */

loc_0020931B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00209322: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00209343; /* jle: less or equal (signed <=) */

loc_00209328: ;
    ecx = MEM32(ebx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020933E; /* je: equal / zero */

loc_0020932F: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020933Eu); RECOMP_ABI_CALL(0x00204260u, sub_00204260); /* call 0x00204260 */

loc_0020933E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209328; /* jl: less (signed <) */

loc_00209343: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00209345: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00209350
 * Original: 0x00209350 - 0x0020938D (61 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209350: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020936F; /* je: equal / zero */

loc_0020935A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020936F; /* jne: not equal / not zero */

loc_0020936A: ;
    PUSH32(esp, 0x0020936Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020936F: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0020938C; /* je: equal / zero */

loc_00209377: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020938C; /* jne: not equal / not zero */

loc_00209387: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0020938C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00209390
 * Original: 0x00209390 - 0x002093E8 (88 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209390: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0020939Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020939F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002093AD; /* je: equal / zero */

loc_002093A3: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    MEM16(esi + 0x10) = LO16(ecx);
    goto loc_002093B3;

loc_002093AD: ;
    MEM16(esi + 0x10) = 0xFFFF;

loc_002093B3: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002093BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002093BA: ;
    MEM16(esi + 0x14) = LO16(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002093CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002093CA: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002093D3; /* je: equal / zero */

loc_002093D1: ;
    MEM32(eax) = esi;

loc_002093D3: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(edi + 0x28);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x002093E3u); RECOMP_ABI_CALL(0x002085A0u, sub_002085A0); /* call 0x002085A0 */

loc_002093E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002093F0
 * Original: 0x002093F0 - 0x00209470 (128 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002093F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002093F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00209400u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209400: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020940E; /* je: equal / zero */

loc_00209404: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    MEM16(esi + 0x10) = LO16(ecx);
    goto loc_00209414;

loc_0020940E: ;
    MEM16(esi + 0x10) = 0xFFFF;

loc_00209414: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0020941Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020941B: ;
    MEM16(esi + 0x14) = LO16(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0020942Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020942B: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209434; /* je: equal / zero */

loc_00209432: ;
    MEM32(eax) = esi;

loc_00209434: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(edi + 0x28);
    ebx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209461; /* je: equal / zero */

loc_0020944C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209461; /* jne: not equal / not zero */

loc_0020945C: ;
    PUSH32(esp, 0x00209461u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209461: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0020946Au); RECOMP_ABI_CALL(0x00208600u, sub_00208600); /* call 0x00208600 */

loc_0020946A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209470
 * Original: 0x00209470 - 0x00209555 (229 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209470(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209470: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 4) = ecx;
    MEM32(esp) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0020954F; /* jle: less or equal (signed <=) */

loc_0020948A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi;

loc_00209490: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002094A9; /* jle: less or equal (signed <=) */

loc_00209499: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002094A7; /* jge: greater or equal (signed >=) */

loc_0020949E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002094B7;

loc_002094A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002094A9: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002094B5; /* jne: not equal / not zero */

loc_002094AB: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002094B7; /* jne: not equal / not zero */

loc_002094B5: ;
    ecx = 0; /* xor self */

loc_002094B7: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002094C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002094C3: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    { uint32_t _icall_target = MEM32(eax + ecx * 4); PUSH32(esp, 0x002094CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002094CF: ;
    edx = MEM32(esp + 0x18);
    esi = MEM32(edx + 0x28);
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002094E2; /* je: equal / zero */

loc_002094DF: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002094E2: ;
    ebx = MEM32(esi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ebp = MEM32(esi + 0xC);
    if (TEST_NZ(_fa, _fb)) goto loc_002094F0; /* jne: not equal / not zero */

loc_002094EC: ;
    eax = 0; /* xor self */
    goto loc_00209507;

loc_002094F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002094F6u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002094F6: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x00209504u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209504: ;
    eax = eax >> 2;

loc_00209507: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209513; /* jl: less (signed <) */

loc_0020950B: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00209513u); RECOMP_ABI_CALL(0x00202B60u, sub_00202B60); /* call 0x00202B60 */

loc_00209513: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    MEM32(ecx + eax * 4) = edi;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209536; /* jne: not equal / not zero */

loc_0020952F: ;
    ecx = edi;
    PUSH32(esp, 0x00209536u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209536: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00209490; /* jl: less (signed <) */

loc_0020954B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0020954F: ;
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209560
 * Original: 0x00209560 - 0x0020960F (175 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209560: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = MEM32(ebx + 0x24);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = edx & 0xFFFFFFFBu;
    MEM32(ebx + 0x24) = edx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esi + 0x25) = 1;
    MEM32(esi + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00209581u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209581: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020958F; /* je: equal / zero */

loc_00209585: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    MEM16(esi + 0x10) = LO16(ecx);
    goto loc_00209595;

loc_0020958F: ;
    MEM16(esi + 0x10) = 0xFFFF;

loc_00209595: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0020959Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020959C: ;
    MEM16(esi + 0x14) = LO16(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002095ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002095AC: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002095B5; /* je: equal / zero */

loc_002095B3: ;
    MEM32(eax) = esi;

loc_002095B5: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(ebx + 0x28);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x002095C5u); RECOMP_ABI_CALL(0x002085A0u, sub_002085A0); /* call 0x002085A0 */

loc_002095C5: ;
    ecx = ebx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002095D0u); RECOMP_ABI_CALL(0x001EA500u, sub_001EA500); /* call 0x001EA500 */

loc_002095D0: ;
    ebp = eax;
    edi = 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00209608; /* jle: less or equal (signed <=) */

loc_002095DB: ;
    goto loc_002095E0;

    /* nop */

loc_002095E0: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x002095E8u); RECOMP_ABI_CALL(0x001F7A50u, sub_001F7A50); /* call 0x001F7A50 */

loc_002095E8: ;
    MEM32(eax + 0x24) = MEM32(eax + 0x24) & 0xFFFFFFFBu;
    edx = MEM32(esi + 4);
    eax = MEM32(eax + 0x28);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x00209603u); RECOMP_ABI_CALL(0x00208530u, sub_00208530); /* call 0x00208530 */

loc_00209603: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002095E0; /* jl: less (signed <) */

loc_00209608: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209610
 * Original: 0x00209610 - 0x0020964A (58 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209610: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x0020961Fu); RECOMP_ABI_CALL(0x00209560u, sub_00209560); /* call 0x00209560 */

loc_0020961F: ;
    ecx = edi;
    PUSH32(esp, 0x00209626u); RECOMP_ABI_CALL(0x001EA500u, sub_001EA500); /* call 0x001EA500 */

loc_00209626: ;
    ebx = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00209644; /* jle: less or equal (signed <=) */

loc_0020962E: ;
    edi = edi;

loc_00209630: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00209638u); RECOMP_ABI_CALL(0x001F7A50u, sub_001F7A50); /* call 0x001F7A50 */

loc_00209638: ;
    ecx = eax;
    PUSH32(esp, 0x0020963Fu); RECOMP_ABI_CALL(0x001F7930u, sub_001F7930); /* call 0x001F7930 */

loc_0020963F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209630; /* jl: less (signed <) */

loc_00209644: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209650
 * Original: 0x00209650 - 0x002096AA (90 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209650: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(esp + 8); PUSH32(esp, 0x00209655u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209655: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002096A8; /* je: equal / zero */

loc_0020965B: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00209670; /* jle: less or equal (signed <=) */

loc_00209666: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + esi * 4); PUSH32(esp, 0x0020966Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020966B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209666; /* jl: less (signed <) */

loc_00209670: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020968E; /* je: equal / zero */

loc_00209676: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020967Cu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_0020967C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020968E; /* je: equal / zero */

loc_00209683: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0020968Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020968E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00209694u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00209694: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002096A8; /* je: equal / zero */

loc_0020969D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x002096A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002096A8: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002096B0
 * Original: 0x002096B0 - 0x00209743 (147 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002096B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002096B0: ;
    eax = MEM32(0x5BC508);
    edx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(edx + 0x5C);
    MEM32(esi + ecx) = eax;
    edx = MEM32(esi);
    ecx = esi;
    MEM32(esi + 4) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x002096D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002096D6: ;
    eax = MEM32(eax + 0x20);
    ecx = esi;
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002096E3u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002096E3: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002096F9; /* je: equal / zero */

loc_002096EA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x160); PUSH32(esp, 0x002096F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002096F4: ;
    MEM8(esi + 7) = LO8(eax);
    goto loc_002096FD;

loc_002096F9: ;
    MEM8(esi + 7) = 0;

loc_002096FD: ;
    ecx = esi;
    PUSH32(esp, 0x00209704u); RECOMP_ABI_CALL(0x001EA5A0u, sub_001EA5A0); /* call 0x001EA5A0 */

loc_00209704: ;
    ecx = esi;
    PUSH32(esp, 0x0020970Bu); RECOMP_ABI_CALL(0x001EA600u, sub_001EA600); /* call 0x001EA600 */

loc_0020970B: ;
    ecx = esi;
    PUSH32(esp, 0x00209712u); RECOMP_ABI_CALL(0x001EA6B0u, sub_001EA6B0); /* call 0x001EA6B0 */

loc_00209712: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00209719u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209719: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00209722u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209722: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00209729u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209729: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020973F; /* je: equal / zero */

loc_0020972D: ;
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020973F; /* je: equal / zero */

loc_00209737: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0020973Fu); RECOMP_ABI_CALL(0x002085A0u, sub_002085A0); /* call 0x002085A0 */

loc_0020973F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209750
 * Original: 0x00209750 - 0x002097A6 (86 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209750: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0020976A; /* je: equal / zero */

loc_0020975B: ;
    ecx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020976A; /* je: equal / zero */

loc_00209762: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0020976Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020976A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00209773u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209773: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0020977Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020977C: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00209785u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209785: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0020978Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020978C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002097A2; /* je: equal / zero */

loc_00209790: ;
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002097A2; /* je: equal / zero */

loc_0020979A: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x002097A2u); RECOMP_ABI_CALL(0x002085A0u, sub_002085A0); /* call 0x002085A0 */

loc_002097A2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002097B0
 * Original: 0x002097B0 - 0x002097BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002097B0(void)
{

loc_002097B0: ;
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x002097BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002097BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002097C0
 * Original: 0x002097C0 - 0x002097E0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002097C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002097C0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002097DD; /* je: equal / zero */

loc_002097C8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002097DD; /* jne: not equal / not zero */

loc_002097D8: ;
    PUSH32(esp, 0x002097DDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002097DD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002097E0
 * Original: 0x002097E0 - 0x00209813 (51 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002097E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002097E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002097EF; /* je: equal / zero */

loc_002097EC: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002097EF: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020980B; /* je: equal / zero */

loc_002097F6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020980B; /* jne: not equal / not zero */

loc_00209806: ;
    PUSH32(esp, 0x0020980Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020980B: ;
    MEM32(esi + 0x18) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209820
 * Original: 0x00209820 - 0x0020987B (91 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209820: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209877; /* je: equal / zero */

loc_00209828: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020983F; /* je: equal / zero */

loc_00209830: ;
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020983Bu); RECOMP_ABI_CALL(0x00209750u, sub_00209750); /* call 0x00209750 */

loc_0020983B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0020983F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00209848u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209848: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x00209851u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209851: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0020985Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020985A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00209861u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209861: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209877; /* je: equal / zero */

loc_00209865: ;
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209877; /* je: equal / zero */

loc_0020986F: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x00209877u); RECOMP_ABI_CALL(0x002085A0u, sub_002085A0); /* call 0x002085A0 */

loc_00209877: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209880
 * Original: 0x00209880 - 0x002098A0 (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209880: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0020988Eu); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_0020988E: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020989E; /* je: equal / zero */

loc_00209895: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_0020989E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002098A0
 * Original: 0x002098A0 - 0x002098CE (46 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002098A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002098A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002098C2; /* jle: less or equal (signed <=) */

loc_002098B3: ;
    edx = MEM32(esi + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002098BD; /* je: equal / zero */

loc_002098BA: ;
    MEM32(edx + 4) = MEM32(edx + 4) + 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002098BD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002098B3; /* jl: less (signed <) */

loc_002098C2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002098C8u); RECOMP_ABI_CALL(0x002067A0u, sub_002067A0); /* call 0x002067A0 */

loc_002098C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002098D0
 * Original: 0x002098D0 - 0x00209944 (116 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002098D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002098D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00209909; /* jg: greater (signed >) */

loc_002098E0: ;
    eax = ebx;
    eax = eax - edi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002098EBu); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_002098EB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_00209900; /* jge: greater or equal (signed >=) */

loc_002098F1: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002098F1; /* jl: less (signed <) */

loc_00209900: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00209909: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00209921; /* jl: less (signed <) */

loc_0020990D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00209917; /* jg: greater (signed >) */

loc_00209912: ;
    MEM32(esi + 8) = edi;
    goto loc_00209921;

loc_00209917: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00209921u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00209921: ;
    edx = MEM32(esi + 0x10);
    ecx = edi;
    ecx = ecx - ebx;
    ecx = ecx << 2;
    edi = edx + ebx * 4;
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
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209950
 * Original: 0x00209950 - 0x0020999F (79 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209950: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00209973; /* jge: greater or equal (signed >=) */

loc_0020995D: ;
    edx = MEM32(ecx + 0x10);
    edi = MEM32(esp + 0x10);
    edx = edx + eax * 4;

loc_00209967: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00209984; /* je: equal / zero */

loc_0020996B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209967; /* jl: less (signed <) */

loc_00209973: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_00209984: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00209973; /* jl: less (signed <) */

loc_00209988: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020998Eu); RECOMP_ABI_CALL(0x00117E70u, sub_00117E70); /* call 0x00117E70 */

loc_0020998E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002099A0
 * Original: 0x002099A0 - 0x00209A0E (110 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002099A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002099A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002099CC; /* jge: greater or equal (signed >=) */

loc_002099B7: ;
    edx = MEM32(edi + 0x10);
    edx = edx + eax * 4;
    /* nop */

loc_002099C0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002099CF; /* je: equal / zero */

loc_002099C4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002099C0; /* jl: less (signed <) */

loc_002099CC: ;
    eax = eax | 0xFFFFFFFFu;

loc_002099CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = eax;
    if (TEST_S(_fas, _fbs)) goto loc_00209A05; /* jl: less (signed <) */

loc_002099D5: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002099DDu); RECOMP_ABI_CALL(0x00117E70u, sub_00117E70); /* call 0x00117E70 */

loc_002099DD: ;
    edx = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    eax = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_002099FC; /* jge: greater or equal (signed >=) */

loc_002099E7: ;
    ecx = MEM32(edi + 0x10);
    ecx = ecx + esi * 4;
    /* nop */

loc_002099F0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002099FF; /* je: equal / zero */

loc_002099F4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002099F0; /* jl: less (signed <) */

loc_002099FC: ;
    eax = eax | 0xFFFFFFFFu;

loc_002099FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002099D5; /* jge: greater or equal (signed >=) */

loc_00209A05: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209A10
 * Original: 0x00209A10 - 0x00209B1A (266 bytes, 94 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209A10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209A10: ;
    eax = MEM32(esp + 4);
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00209B13; /* je: equal / zero */

loc_00209A22: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00209B13; /* jl: less (signed <) */

loc_00209A32: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);

loc_00209A35: ;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(esp + 0x1C);
    esi = MEM32(esi + 8);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + esi);
    esi = 1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00209B10; /* jle: less or equal (signed <=) */

loc_00209A53: ;
    eax = MEM32(edi + 0x10);
    ebx = MEM32(esp + 0x1C);
    ebp = MEM32(eax + esi * 4);
    ebx = MEM32(ebx + 8);
    ebx = MEM32(ebx + ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    eax = eax + esi * 4;
    MEM32(esp + 0x10) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_00209AF9; /* jbe: below or equal (unsigned <=) */

loc_00209A72: ;
    ebx = MEM32(eax + -4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209A7C; /* je: equal / zero */

loc_00209A79: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00209A7C: ;
    ecx = MEM32(edi + 0x10);
    ecx = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209A9B; /* je: equal / zero */

loc_00209A86: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209A9B; /* jne: not equal / not zero */

loc_00209A96: ;
    PUSH32(esp, 0x00209A9Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209A9B: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209AB0; /* je: equal / zero */

loc_00209AA2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00209AB0; /* jl: less (signed <) */

loc_00209AA6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00209AB0; /* jge: greater or equal (signed >=) */

loc_00209AAA: ;
    edx = MEM32(edi + 0x10);
    MEM32(edx + esi * 4) = ebx;

loc_00209AB0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209AB7; /* je: equal / zero */

loc_00209AB4: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00209AB7: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + esi * 4 + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209AD7; /* je: equal / zero */

loc_00209AC2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209AD7; /* jne: not equal / not zero */

loc_00209AD2: ;
    PUSH32(esp, 0x00209AD7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209AD7: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209AF0; /* je: equal / zero */

loc_00209ADE: ;
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00209AF0; /* jl: less (signed <) */

loc_00209AE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00209AF0; /* jge: greater or equal (signed >=) */

loc_00209AE9: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + esi * 4 + -4) = ebp;

loc_00209AF0: ;
    ebx = MEM32(esp + 0x10);
    edx = 1;

loc_00209AF9: ;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    ecx = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00209A53; /* jl: less (signed <) */

loc_00209B08: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00209A35; /* jg: greater (signed >) */

loc_00209B10: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00209B13: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209B20
 * Original: 0x00209B20 - 0x00209B70 (80 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209B20: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209B6C; /* je: equal / zero */

loc_00209B2A: ;
    eax = MEM32(edi + 0x44);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00209B6B; /* jle: less or equal (signed <=) */

loc_00209B34: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_00209B40: ;
    eax = MEM32(edi + 8);
    ecx = eax + esi * 4;
    ecx = MEM32(ecx + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209B62; /* je: equal / zero */

loc_00209B4D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209B62; /* jne: not equal / not zero */

loc_00209B5D: ;
    PUSH32(esp, 0x00209B62u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209B62: ;
    eax = MEM32(edi + 0x44);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209B40; /* jl: less (signed <) */

loc_00209B6A: ;
    POP32(esp, ebx);

loc_00209B6B: ;
    POP32(esp, esi);

loc_00209B6C: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209B70
 * Original: 0x00209B70 - 0x00209BDF (111 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209BDB; /* je: equal / zero */

loc_00209B7A: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00209BBA; /* je: equal / zero */

loc_00209B87: ;
    eax = MEM32(esi + 0x44);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00209BBA; /* jle: less or equal (signed <=) */

loc_00209B90: ;
    eax = MEM32(esi + 8);
    ecx = eax + edi * 4;
    ecx = MEM32(ecx + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209BB2; /* je: equal / zero */

loc_00209B9D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209BB2; /* jne: not equal / not zero */

loc_00209BAD: ;
    PUSH32(esp, 0x00209BB2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209BB2: ;
    eax = MEM32(esi + 0x44);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209B90; /* jl: less (signed <) */

loc_00209BBA: ;
    edi = MEM32(esi + 8);
    edx = MEM32(esi);
    ecx = esi;
    edi = edi + ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00209BC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209BC6: ;
    ecx = ZX16(LO16(eax));
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
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00209BDB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209BE0
 * Original: 0x00209BE0 - 0x00209C4B (107 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209BE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209BE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00209C46; /* jle: less or equal (signed <=) */

loc_00209BED: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_00209BF0: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0x14);
    edi = ebx * 4;
    ebp = MEM32(edi + eax);
    SET_LO8(eax, MEM8(esi + 0x3C));
    ecx = ecx + edi;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(ecx + edx);
    if (TEST_Z(_fa, _fb)) goto loc_00209C30; /* je: equal / zero */

loc_00209C10: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209C17; /* je: equal / zero */

loc_00209C14: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00209C17: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209C30; /* je: equal / zero */

loc_00209C1B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209C30; /* jne: not equal / not zero */

loc_00209C2B: ;
    PUSH32(esp, 0x00209C30u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209C30: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x14);
    eax = eax + edi;
    MEM32(eax + ecx) = ebp;
    eax = MEM32(esi + 0x44);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209BF0; /* jl: less (signed <) */

loc_00209C44: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00209C46: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209C50
 * Original: 0x00209C50 - 0x00209CBF (111 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209C50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209C50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00209CBA; /* jle: less or equal (signed <=) */

loc_00209C5D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    /* nop */

loc_00209C60: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    edi = ebx * 4;
    eax = eax + edi;
    ebp = MEM32(eax + ecx);
    SET_LO8(ecx, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    eax = MEM32(eax + edx);
    if (TEST_Z(_fa, _fb)) goto loc_00209CA4; /* je: equal / zero */

loc_00209C81: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209C88; /* je: equal / zero */

loc_00209C85: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00209C88: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209CA4; /* je: equal / zero */

loc_00209C8C: ;
    edx = MEM32(eax + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x7FFFFF (32-bit) */
    MEM32(eax + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209CA4; /* jne: not equal / not zero */

loc_00209C9D: ;
    ecx = eax;
    PUSH32(esp, 0x00209CA4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209CA4: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x14);
    eax = eax + edi;
    MEM32(eax + ecx) = ebp;
    eax = MEM32(esi + 0x44);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00209C60; /* jl: less (signed <) */

loc_00209CB8: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00209CBA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209CC0
 * Original: 0x00209CC0 - 0x00209DB7 (247 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209CC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209CC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = ebp;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00209DB1; /* jle: less or equal (signed <=) */

loc_00209CD6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    /* nop */

loc_00209CE0: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esp + 0x1C);
    edi = ebp * 4;
    eax = eax + edi;
    ecx = MEM32(eax + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(eax + edx);
    if (TEST_NZ(_fa, _fb)) goto loc_00209D4A; /* jne: not equal / not zero */

loc_00209CFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209DAF; /* je: equal / zero */

loc_00209D02: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00209D0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209D0B: ;
    ebp = eax;
    eax = MEM32(esi + 8);
    eax = eax + edi;
    ecx = MEM32(eax + ebx);
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209D3C; /* je: equal / zero */

loc_00209D1C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209D23; /* je: equal / zero */

loc_00209D20: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00209D23: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209D3C; /* je: equal / zero */

loc_00209D27: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209D3C; /* jne: not equal / not zero */

loc_00209D37: ;
    PUSH32(esp, 0x00209D3Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209D3C: ;
    ecx = MEM32(esi + 8);
    ecx = ecx + edi;
    MEM32(ecx + ebx) = ebp;
    ebp = MEM32(esp + 0x10);
    goto loc_00209D9F;

loc_00209D4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209D56; /* je: equal / zero */

loc_00209D4E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00209D54u); RECOMP_ABI_CALL(0x001EA870u, sub_001EA870); /* call 0x001EA870 */

loc_00209D54: ;
    goto loc_00209D9F;

loc_00209D56: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209D6B; /* jne: not equal / not zero */

loc_00209D66: ;
    PUSH32(esp, 0x00209D6Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209D6B: ;
    edx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(esi + 0x3C));
    edx = edx + edi;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(edx + ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00209D93; /* je: equal / zero */

loc_00209D7A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209D93; /* je: equal / zero */

loc_00209D7E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209D93; /* jne: not equal / not zero */

loc_00209D8E: ;
    PUSH32(esp, 0x00209D93u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209D93: ;
    eax = MEM32(esi + 8);
    eax = eax + edi;
    MEM32(eax + ebx) = 0;

loc_00209D9F: ;
    eax = MEM32(esi + 0x44);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00209CE0; /* jl: less (signed <) */

loc_00209DAF: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00209DB1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209DC0
 * Original: 0x00209DC0 - 0x00209EB7 (247 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209DC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209DC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = ebp;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00209EB1; /* jle: less or equal (signed <=) */

loc_00209DD6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    /* nop */

loc_00209DE0: ;
    eax = MEM32(esi + 8);
    edx = MEM32(esp + 0x1C);
    edi = ebp * 4;
    eax = eax + edi;
    ecx = MEM32(eax + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(eax + edx);
    if (TEST_NZ(_fa, _fb)) goto loc_00209E4A; /* jne: not equal / not zero */

loc_00209DFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209EAF; /* je: equal / zero */

loc_00209E02: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00209E0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209E0B: ;
    ebp = eax;
    eax = MEM32(esi + 8);
    eax = eax + edi;
    ecx = MEM32(eax + ebx);
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209E3C; /* je: equal / zero */

loc_00209E1C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209E23; /* je: equal / zero */

loc_00209E20: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00209E23: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209E3C; /* je: equal / zero */

loc_00209E27: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209E3C; /* jne: not equal / not zero */

loc_00209E37: ;
    PUSH32(esp, 0x00209E3Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209E3C: ;
    ecx = MEM32(esi + 8);
    ecx = ecx + edi;
    MEM32(ecx + ebx) = ebp;
    ebp = MEM32(esp + 0x10);
    goto loc_00209E9F;

loc_00209E4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209E56; /* je: equal / zero */

loc_00209E4E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00209E54u); RECOMP_ABI_CALL(0x001EA8E0u, sub_001EA8E0); /* call 0x001EA8E0 */

loc_00209E54: ;
    goto loc_00209E9F;

loc_00209E56: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209E6B; /* jne: not equal / not zero */

loc_00209E66: ;
    PUSH32(esp, 0x00209E6Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209E6B: ;
    edx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(esi + 0x3C));
    edx = edx + edi;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(edx + ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00209E93; /* je: equal / zero */

loc_00209E7A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209E93; /* je: equal / zero */

loc_00209E7E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209E93; /* jne: not equal / not zero */

loc_00209E8E: ;
    PUSH32(esp, 0x00209E93u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209E93: ;
    eax = MEM32(esi + 8);
    eax = eax + edi;
    MEM32(eax + ebx) = 0;

loc_00209E9F: ;
    eax = MEM32(esi + 0x44);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_00209DE0; /* jl: less (signed <) */

loc_00209EAF: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00209EB1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209EC0
 * Original: 0x00209EC0 - 0x00209F34 (116 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209EC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebx + eax);
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00209EDC; /* jne: not equal / not zero */

loc_00209ED5: ;
    SET_LO8(eax, MEM8(esi + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209F25; /* je: equal / zero */

loc_00209EDC: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209EE8; /* je: equal / zero */

loc_00209EE5: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00209EE8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209F19; /* je: equal / zero */

loc_00209EEC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209F0D; /* jne: not equal / not zero */

loc_00209EFC: ;
    PUSH32(esp, 0x00209F01u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209F01: ;
    ecx = MEM32(esi + 8);
    MEM32(ebx + ecx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00209F0D: ;
    edx = MEM32(esi + 8);
    MEM32(ebx + edx) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00209F19: ;
    eax = MEM32(esi + 8);
    MEM32(ebx + eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00209F25: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(ebx + ecx) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00209F40
 * Original: 0x00209F40 - 0x00209F4F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00209F40: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; sub_00209EC0(); return; /* tail jmp 0x00209EC0 */

}

/**
 * sub_00209F50
 * Original: 0x00209F50 - 0x00209F7D (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209F50: ;
    SET_LO8(eax, MEM8(ecx + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209F7A; /* je: equal / zero */

loc_00209F57: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209F7A; /* je: equal / zero */

loc_00209F65: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209F7A; /* jne: not equal / not zero */

loc_00209F75: ;
    PUSH32(esp, 0x00209F7Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209F7A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209F80
 * Original: 0x00209F80 - 0x00209FD4 (84 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00209F80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00209FAF; /* je: equal / zero */

loc_00209F90: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebx + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00209FAF; /* je: equal / zero */

loc_00209F9A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00209FAF; /* jne: not equal / not zero */

loc_00209FAA: ;
    PUSH32(esp, 0x00209FAFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00209FAF: ;
    edi = MEM32(esi + 8);
    edx = MEM32(esi);
    ecx = esi;
    edi = edi + ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00209FBBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00209FBB: ;
    ecx = ZX16(LO16(eax));
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
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00209FE0
 * Original: 0x00209FE0 - 0x00209FF3 (19 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00209FE0(void)
{

loc_00209FE0: ;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(eax);
    eax = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00209FF0u); RECOMP_ABI_CALL(0x00209EC0u, sub_00209EC0); /* call 0x00209EC0 */

loc_00209FF0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020A000
 * Original: 0x0020A000 - 0x0020A013 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A000(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A000: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + edx);
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_00209EC0(); return; /* tail jmp 0x00209EC0 */

}

/**
 * sub_0020A020
 * Original: 0x0020A020 - 0x0020A0AE (142 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A020(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A020: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ebx = MEM32(eax + ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ecx = MEM32(esp + 0x18);
    esi = MEM32(eax + ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_0020A083; /* jne: not equal / not zero */

loc_0020A03B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A0A7; /* je: equal / zero */

loc_0020A03F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0020A046u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A046: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0020A04Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A04F: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0020A05Au); RECOMP_ABI_CALL(0x00209EC0u, sub_00209EC0); /* call 0x00209EC0 */

loc_0020A05A: ;
    SET_LO8(eax, MEM8(edi + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020A0A7; /* jne: not equal / not zero */

loc_0020A061: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A0A7; /* je: equal / zero */

loc_0020A065: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020A0A7; /* jne: not equal / not zero */

loc_0020A075: ;
    ecx = esi;
    PUSH32(esp, 0x0020A07Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020A07C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A083: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A09D; /* je: equal / zero */

loc_0020A087: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0020A08Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A08E: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0020A096u); RECOMP_ABI_CALL(0x001EA870u, sub_001EA870); /* call 0x001EA870 */

loc_0020A096: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A09D: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0020A0A7u); RECOMP_ABI_CALL(0x00209EC0u, sub_00209EC0); /* call 0x00209EC0 */

loc_0020A0A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A0B0
 * Original: 0x0020A0B0 - 0x0020A127 (119 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A0B0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(eax + edx);
    if (TEST_NZ(_fa, _fb)) goto loc_0020A109; /* jne: not equal / not zero */

loc_0020A0C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A104; /* je: equal / zero */

loc_0020A0CD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0020A0D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A0D6: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0020A0E1u); RECOMP_ABI_CALL(0x00209EC0u, sub_00209EC0); /* call 0x00209EC0 */

loc_0020A0E1: ;
    SET_LO8(eax, MEM8(esi + 0x35));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020A103; /* jne: not equal / not zero */

loc_0020A0E8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A103; /* je: equal / zero */

loc_0020A0EC: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020A103; /* jne: not equal / not zero */

loc_0020A0FC: ;
    ecx = edi;
    PUSH32(esp, 0x0020A103u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020A103: ;
    POP32(esp, edi);

loc_0020A104: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A109: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A118; /* je: equal / zero */

loc_0020A10D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A113u); RECOMP_ABI_CALL(0x001EA8E0u, sub_001EA8E0); /* call 0x001EA8E0 */

loc_0020A113: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0020A118: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0020A122u); RECOMP_ABI_CALL(0x00209EC0u, sub_00209EC0); /* call 0x00209EC0 */

loc_0020A122: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A130
 * Original: 0x0020A130 - 0x0020A191 (97 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A130: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + eax);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3EEF7C);
    PUSH32(esp, 0x0020A153u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_0020A153: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A165; /* je: equal / zero */

loc_0020A160: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0020A165u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A165: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x0020A16Fu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_0020A16F: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A18B; /* je: equal / zero */

loc_0020A17A: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(edi + ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A18B; /* je: equal / zero */

loc_0020A184: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A18Bu); RECOMP_ABI_CALL(0x00204260u, sub_00204260); /* call 0x00204260 */

loc_0020A18B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020A1A0
 * Original: 0x0020A1A0 - 0x0020A1C5 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A1A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0020A1ADu); RECOMP_ABI_CALL(0x00204450u, sub_00204450); /* call 0x00204450 */

loc_0020A1AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A1B8; /* jne: not equal / not zero */

loc_0020A1B2: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0020A1B8: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020A1D0
 * Original: 0x0020A1D0 - 0x0020A2BD (237 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A1D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0020A23C; /* je: equal / zero */

loc_0020A1DC: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A23C; /* je: equal / zero */

loc_0020A1E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A1ECu); RECOMP_ABI_CALL(0x00207000u, sub_00207000); /* call 0x00207000 */

loc_0020A1EC: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A2AE; /* je: equal / zero */

loc_0020A1F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020A2B2; /* jne: not equal / not zero */

loc_0020A1FD: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A273; /* je: equal / zero */

loc_0020A204: ;
    SET_LO8(eax, MEM8(0x5BC661));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020A23C; /* jne: not equal / not zero */

loc_0020A20D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0020A215u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A215: ;
    ebp = MEM32(edi);
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x18);
    edx = MEM32(edx + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F3558);
    PUSH32(esp, 0x0020A232u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_0020A232: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0020A265; /* jne: not equal / not zero */

loc_0020A23B: ;
    /* int3: debug-trap slide byte, stepped over */

loc_0020A23C: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0xFFFFFFFFu;

loc_0020A246: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A25B; /* je: equal / zero */

loc_0020A24E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x0020A25Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A25B: ;
    POP32(esp, edi);
    eax = 4;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_0020A265: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A23C; /* jne: not equal / not zero */

loc_0020A26A: ;
    MEM8(0x5BC661) = 1;
    goto loc_0020A23C;

loc_0020A273: ;
    SET_LO8(eax, MEM8(0x5BC660));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020A23C; /* jne: not equal / not zero */

loc_0020A27C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0020A283u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A283: ;
    ecx = MEM32(edi);
    eax = MEM32(eax + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F34E0);
    PUSH32(esp, 0x0020A295u); RECOMP_ABI_CALL(0x001F8390u, sub_001F8390); /* call 0x001F8390 */

loc_0020A295: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A2A0; /* jne: not equal / not zero */

loc_0020A29D: ;
    /* int3: debug-trap slide byte, stepped over */
    goto loc_0020A23C;

loc_0020A2A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A23C; /* jne: not equal / not zero */

loc_0020A2A5: ;
    MEM8(0x5BC660) = 1;
    goto loc_0020A23C;

loc_0020A2AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A23C; /* je: equal / zero */

loc_0020A2B2: ;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    goto loc_0020A246;

}

/**
 * sub_0020A2C0
 * Original: 0x0020A2C0 - 0x0020A2CE (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A2C0(void)
{

loc_0020A2C0: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x0020A2CDu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0020A2CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020A2D0
 * Original: 0x0020A2D0 - 0x0020A315 (69 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A2D0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0020A312; /* js: sign (negative) */

loc_0020A2DD: ;
    PUSH32(esp, esi);
    edi = edi;

loc_0020A2E0: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    esi = MEM32(0x5BC31C);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0020A2F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A2F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A30E; /* je: equal / zero */

loc_0020A2F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A305; /* je: equal / zero */

loc_0020A2FC: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020A2F8; /* jne: not equal / not zero */

loc_0020A303: ;
    goto loc_0020A30E;

loc_0020A305: ;
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020A30Eu); RECOMP_ABI_CALL(0x00117E70u, sub_00117E70); /* call 0x00117E70 */

loc_0020A30E: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0020A2E0; /* jns: not sign (positive) */

loc_0020A311: ;
    POP32(esp, esi);

loc_0020A312: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020A320
 * Original: 0x0020A320 - 0x0020A336 (22 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A320(void)
{

loc_0020A320: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020A330u); RECOMP_ABI_CALL(0x002046C0u, sub_002046C0); /* call 0x002046C0 */

loc_0020A330: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A340
 * Original: 0x0020A340 - 0x0020A35B (27 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A340(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020A340: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(esp + 8);
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020A355u); RECOMP_ABI_CALL(0x002046C0u, sub_002046C0); /* call 0x002046C0 */

loc_0020A355: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020A360
 * Original: 0x0020A360 - 0x0020A3D3 (115 bytes, 42 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A360: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x5BB7E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A37B; /* je: equal / zero */

loc_0020A36F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0020A37Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A37B: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 4) = 1;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0020A3AAu); RECOMP_ABI_CALL(0x001EB890u, sub_001EB890); /* call 0x001EB890 */

loc_0020A3AA: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0020A3B7u); RECOMP_ABI_CALL(0x00204800u, sub_00204800); /* call 0x00204800 */

loc_0020A3B7: ;
    ecx = MEM32(0x5BB7E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A3CB; /* je: equal / zero */

loc_0020A3C1: ;
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0020A3CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A3CB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020A3E0
 * Original: 0x0020A3E0 - 0x0020A491 (177 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A3E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A3F6; /* jl: less (signed <) */

loc_0020A3F1: ;
    MEM32(ecx + 8) = ebx;
    goto loc_0020A3FE;

loc_0020A3F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020A3FEu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020A3FE: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020A439; /* jg: greater (signed >) */

loc_0020A406: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A433; /* je: equal / zero */

loc_0020A40D: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_0020A421; /* jne: not equal / not zero */

loc_0020A41B: ;
    edx = MEM32(0x5BC538);

loc_0020A421: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0020A433u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A433: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;

loc_0020A439: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A48D; /* je: equal / zero */

loc_0020A440: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A44A; /* jl: less (signed <) */

loc_0020A445: ;
    MEM32(ecx + 8) = ebx;
    goto loc_0020A452;

loc_0020A44A: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020A452u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020A452: ;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020A48D; /* jg: greater (signed >) */

loc_0020A45A: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A487; /* je: equal / zero */

loc_0020A461: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_0020A475; /* jne: not equal / not zero */

loc_0020A46F: ;
    edx = MEM32(0x5BC538);

loc_0020A475: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x0020A487u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A487: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;

loc_0020A48D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020A4A0
 * Original: 0x0020A4A0 - 0x0020A55E (190 bytes, 81 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A4A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A4A0: ;
    eax = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    edx = eax + 1;
    edi = edi;

loc_0020A4B0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020A4B0; /* jne: not equal / not zero */

loc_0020A4B7: ;
    eax = eax - edx;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax + 1;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    esi = MEM32(eax + 8);
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x14) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0020A4EA; /* jle: less or equal (signed <=) */

loc_0020A4D4: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A4EA; /* jl: less (signed <) */

loc_0020A4E2: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A4EAu); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0020A4EA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = MEM32(ebx + 0x10);
    if (TEST_S(_fas, _fbs)) goto loc_0020A533; /* jl: less (signed <) */

loc_0020A4F1: ;
    if (TEST_Z(_fa, _fb)) goto loc_0020A533; /* je: equal / zero */

loc_0020A4F3: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x10) = eax;
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020A508; /* jg: greater (signed >) */

loc_0020A503: ;
    MEM32(ebp + 8) = eax;
    goto loc_0020A512;

loc_0020A508: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0020A512u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020A512: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x1C);
    ecx = edi;
    edi = MEM32(ebp + 0x10);
    edx = ecx;
    ecx = ecx >> 2;
    edi = edi + eax;
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
    esi = MEM32(esp + 0x14);

loc_0020A533: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0020A554; /* je: equal / zero */

loc_0020A53C: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A554; /* je: equal / zero */

loc_0020A543: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edx = edx + esi;
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0020A554u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A554: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020A560
 * Original: 0x0020A560 - 0x0020A580 (32 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0020A56Eu); RECOMP_ABI_CALL(0x00204890u, sub_00204890); /* call 0x00204890 */

loc_0020A56E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A57B; /* jne: not equal / not zero */

loc_0020A573: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0020A57Bu); RECOMP_ABI_CALL(0x0020A4A0u, sub_0020A4A0); /* call 0x0020A4A0 */

loc_0020A57B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020A580
 * Original: 0x0020A580 - 0x0020A615 (149 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A580: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 8);
    edx = MEM32(ecx + 8);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A59B; /* jl: less (signed <) */

loc_0020A593: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A59Bu); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0020A59B: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0020A5A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A5A7: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0x24);
    edx = edx << 2;
    MEM32(eax + 8) = edx;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 8);
    MEM32(ecx + 0xC) = edx;
    edi = MEM32(esi + 0x24);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A5D2; /* jl: less (signed <) */

loc_0020A5CA: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A5D2u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0020A5D2: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0020A5DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A5DD: ;
    edx = MEM32(esi + 0x28);
    MEM32(edx + 8) = 0x1000;
    eax = MEM32(esi + 0x28);
    MEM32(eax + 0xC) = 0x100;
    esi = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0020A608; /* jl: less (signed <) */

loc_0020A600: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A608u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0020A608: ;
    eax = MEM32(esi + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0020A613u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A613: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020A620
 * Original: 0x0020A620 - 0x0020A65C (60 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A620: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x1C);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0020A636; /* jl: less (signed <) */

loc_0020A62E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020A645; /* jg: greater (signed >) */

loc_0020A633: ;
    MEM32(ecx + 8) = eax;

loc_0020A636: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

loc_0020A645: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A64Du); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020A64D: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020A660
 * Original: 0x0020A660 - 0x0020A756 (246 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A660: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A6AE; /* je: equal / zero */

loc_0020A68D: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A6AE; /* je: equal / zero */

loc_0020A692: ;
    ebp = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0020A69Du); RECOMP_ABI_CALL(0x00204890u, sub_00204890); /* call 0x00204890 */

loc_0020A69D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A6AA; /* jne: not equal / not zero */

loc_0020A6A2: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0020A6AAu); RECOMP_ABI_CALL(0x0020A4A0u, sub_0020A4A0); /* call 0x0020A4A0 */

loc_0020A6AA: ;
    MEM32(esp + 0x10) = eax;

loc_0020A6AE: ;
    ebp = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A6D8; /* je: equal / zero */

loc_0020A6B6: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020A6D8; /* je: equal / zero */

loc_0020A6BC: ;
    edi = MEM32(esi + 0x28);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0020A6C7u); RECOMP_ABI_CALL(0x00204890u, sub_00204890); /* call 0x00204890 */

loc_0020A6C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A6D4; /* jne: not equal / not zero */

loc_0020A6CC: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0020A6D4u); RECOMP_ABI_CALL(0x0020A4A0u, sub_0020A4A0); /* call 0x0020A4A0 */

loc_0020A6D4: ;
    MEM32(esp + 0x14) = eax;

loc_0020A6D8: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020A6FE; /* jle: less or equal (signed <=) */

loc_0020A6E8: ;
    ecx = eax;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A6FE; /* jl: less (signed <) */

loc_0020A6F6: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020A6FEu); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0020A6FE: ;
    edi = MEM32(esi + 0x1C);
    ebp = MEM32(edi + 8);
    ecx = MEM32(edi + 0xC);
    eax = ebp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020A713; /* jg: greater (signed >) */

loc_0020A70E: ;
    MEM32(edi + 8) = eax;
    goto loc_0020A71D;

loc_0020A713: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020A71Du); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020A71D: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(esp + 0x24);
    edi = MEM32(esp + 0x14);
    eax = edx + ebp * 4;
    edx = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(edx + 4) = eax;
    MEM32(edx + 8) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(edx + 0xC) = edi;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0020A74Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A74A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020A760
 * Original: 0x0020A760 - 0x0020A820 (192 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A760(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A760: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM32(esi + 0xC) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020A77C; /* jl: less (signed <) */

loc_0020A774: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020A77Cu); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0020A77C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ecx = MEM32(esi + 0x20);
    if (TEST_S(_fas, _fbs)) goto loc_0020A795; /* jl: less (signed <) */

loc_0020A783: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020A78D; /* jg: greater (signed >) */

loc_0020A788: ;
    MEM32(ecx + 8) = edi;
    goto loc_0020A795;

loc_0020A78D: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020A795u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020A795: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = MEM32(eax + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0020A7A7; /* jle: less or equal (signed <=) */

loc_0020A7A2: ;
    eax = eax | 0xFFFFFFFFu;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0020A7A7: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A7C7; /* je: equal / zero */

loc_0020A7AE: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x14);
    eax = eax - edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0020A7CE; /* je: equal / zero */

loc_0020A7C1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = eax;
    goto loc_0020A7CE;

loc_0020A7C7: ;
    MEM32(esi + 0x18) = 1;

loc_0020A7CE: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    ebx = ebx << 4;
    ebx = ebx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020A81A; /* jae: above or equal (unsigned >=) */

loc_0020A7EB: ;
    PUSH32(esp, ebp);
    ebp = 0xFFFFFFF8u;
    edi = ecx + 8;
    ebp = ebp - ecx;

loc_0020A7F6: ;
    edx = MEM32(edi);
    eax = MEM32(esi);
    ecx = edi + ebp;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((4) & 31u));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + -4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0020A80Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A80B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020A819; /* je: equal / zero */

loc_0020A80F: ;
    edi = edi + 0x10;
    edx = edi + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020A7F6; /* jb: below (unsigned <) */

loc_0020A819: ;
    POP32(esp, ebp);

loc_0020A81A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020A820
 * Original: 0x0020A820 - 0x0020A87C (92 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020A820: ;
    ecx = MEM32(0x5BC564);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0020A82Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A82C: ;
    ecx = MEM32(0x5BC564);
    edx = MEM32(ecx);
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0020A83Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020A83A: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020A851; /* jne: not equal / not zero */

loc_0020A84A: ;
    ecx = esi;
    PUSH32(esp, 0x0020A851u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020A851: ;
    eax = MEM32(0x5BC564);
    esi = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    POP32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_0020A871; /* jne: not equal / not zero */

loc_0020A86C: ;
    PUSH32(esp, 0x0020A871u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020A871: ;
    MEM32(0x5BC564) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0020A880
 * Original: 0x0020A880 - 0x0020A8A4 (36 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A880(void)
{

loc_0020A880: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0020A88Eu); RECOMP_ABI_CALL(0x00205000u, sub_00205000); /* call 0x00205000 */

loc_0020A88E: ;
    ecx = esi;
    PUSH32(esp, 0x0020A895u); RECOMP_ABI_CALL(0x001F9A20u, sub_001F9A20); /* call 0x001F9A20 */

loc_0020A895: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020A8B0
 * Original: 0x0020A8B0 - 0x0020AA89 (473 bytes, 150 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020A8B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020A8B0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = MEM32(esi + 0x70);
    MEM32(esp + 0xC) = esi;
    MEM8(esp + 0xB) = 0;
    PUSH32(esp, 0x0020A8C8u); RECOMP_ABI_CALL(0x00205170u, sub_00205170); /* call 0x00205170 */

loc_0020A8C8: ;
    eax = MEM32(esi + 0xA0);
    eax = eax | MEM32(esi + 0xA4);
    if ((eax == 0)) goto loc_0020A8E0; /* je: equal / zero */

loc_0020A8D6: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0020A8E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x7EC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0020AA42; /* jl: less (signed <) */

loc_0020A8EF: ;
    eax = MEM32(ebp + 0x7E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0020AA42; /* jl: less (signed <) */

loc_0020A8FD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020AA42; /* jg: greater (signed >) */

loc_0020A905: ;
    ebx = ebx + 0xFFFFFFFEu;
    PUSH32(esp, edi);
    if (((int32_t)ebx < 0)) goto loc_0020A9D3; /* js: sign (negative) */

loc_0020A90F: ;
    /* nop */

loc_0020A910: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020A93E; /* jne: not equal / not zero */

loc_0020A918: ;
    edi = MEM32(esi + 0x8C);
    edx = MEM32(esi + 0xA8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020A9D7; /* jb: below (unsigned <) */

loc_0020A92E: ;
    if (CMP_A(_fa, _fb)) goto loc_0020A93E; /* ja: above (unsigned >) */

loc_0020A930: ;
    eax = MEM32(esi + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020A9D7; /* jbe: below or equal (unsigned <=) */

loc_0020A93E: ;
    edx = MEM32(ebp + 0x7E4);
    edi = MEM32(edx + ebx * 4 + 4);
    eax = edx + ebx * 4;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020A95Du); RECOMP_ABI_CALL(0x001FAB40u, sub_001FAB40); /* call 0x001FAB40 */

loc_0020A95D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020A9CA; /* jne: not equal / not zero */

loc_0020A967: ;
    eax = MEM32(ebp + 0x7EC);
    edx = eax + -2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020A99C; /* jge: greater or equal (signed >=) */

loc_0020A974: ;
    edx = MEM32(ebp + 0x7E4);
    eax = eax - ebx;
    ecx = eax * 4 + -8;
    eax = ecx;
    ecx = ecx >> 2;
    esi = edx + ebx * 4 + 8;
    edi = edx + ebx * 4;
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
    esi = MEM32(esp + 0x14);

loc_0020A99C: ;
    ecx = MEM32(ebp + 0x7EC);
    edx = MEM32(ebp + 0x7E4);
    eax = 0; /* xor self */
    MEM32(edx + ecx * 4 + -4) = eax;
    ecx = MEM32(ebp + 0x7EC);
    edx = MEM32(ebp + 0x7E4);
    MEM32(edx + ecx * 4 + -8) = eax;
    MEM32(ebp + 0x7EC) = MEM32(ebp + 0x7EC) + 0xFFFFFFFEu;
    MEM8(esp + 0x13) = 1;

loc_0020A9CA: ;
    ebx = ebx - 2;
    if (((int32_t)ebx >= 0)) goto loc_0020A910; /* jns: not sign (positive) */

loc_0020A9D3: ;
    ecx = MEM32(esp + 0x20);

loc_0020A9D7: ;
    eax = MEM32(ebp + 0x7EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020AA25; /* je: equal / zero */

loc_0020A9E1: ;
    eax = MEM32(esi + 0x70);
    edi = MEM32(ebp + 0x2C);
    edx = eax + 0x48;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AA25; /* jne: not equal / not zero */

loc_0020A9EE: ;
    eax = MEM32(eax + 0x7EC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AA25; /* jne: not equal / not zero */

loc_0020A9FE: ;
    eax = MEM32(esi + 0x38);
    eax = eax | MEM32(esi + 0x3C);
    if ((eax != 0)) goto loc_0020AA25; /* jne: not equal / not zero */

loc_0020AA06: ;
    eax = MEM32(ebp + 0x7E4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    edx = edx - ecx;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020AA21u); RECOMP_ABI_CALL(0x001EBFE0u, sub_001EBFE0); /* call 0x001EBFE0 */

loc_0020AA21: ;
    ecx = MEM32(esp + 0x20);

loc_0020AA25: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x7C8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020AA34u); RECOMP_ABI_CALL(0x001FA9E0u, sub_001FA9E0); /* call 0x001FA9E0 */

loc_0020AA34: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0020AA42: ;
    _fa = (uint32_t)(MEM32(esi + 0xBC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xBC), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020AA7E; /* jl: less (signed <) */

loc_0020AA4B: ;
    SET_LO8(eax, MEM8(0x5BC662));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020AA7E; /* jne: not equal / not zero */

loc_0020AA54: ;
    PUSH32(esp, 0x3F35D4);
    PUSH32(esp, 0x0020AA5Eu); RECOMP_ABI_CALL(0x001F8350u, sub_001F8350); /* call 0x001F8350 */

loc_0020AA5E: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AA72; /* jne: not equal / not zero */

loc_0020AA66: ;
    /* int3: debug-trap slide byte, stepped over */
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0020AA72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AA7E; /* jne: not equal / not zero */

loc_0020AA77: ;
    MEM8(0x5BC662) = 1;

loc_0020AA7E: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020AA90
 * Original: 0x0020AA90 - 0x0020AD48 (696 bytes, 240 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AA90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AA90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xB8), 3 (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_L(_fas, _fbs)) goto loc_0020AABC; /* jl: less (signed <) */

loc_0020AA9E: ;
    eax = MEM32(ebx);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x1A8); PUSH32(esp, 0x0020AAADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020AAAD: ;
    edx = MEM32(ebx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1A8); PUSH32(esp, 0x0020AABCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020AABC: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebp = MEM32(ebx + 0x70);
    MEM32(esp + 8) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0020AD42; /* je: equal / zero */

loc_0020AACF: ;
    ecx = MEM32(eax + -4);
    PUSH32(esp, esi);
    esi = eax + -4;
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AAE7; /* jne: not equal / not zero */

loc_0020AAE4: ;
    esi = eax + -12;

loc_0020AAE7: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx >> 5;
    edx = eax;
    edx = edx & 0x80000000u;
    ecx = ecx & 0x7FFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AB12; /* jne: not equal / not zero */

loc_0020AB04: ;
    edx = MEM32(esi + 8);
    edx = edx & 0xFFF;
    edx = edx << 0x13;
    ecx = ecx + edx;

loc_0020AB12: ;
    ecx = ecx + 3;
    eax = eax & 0x1E;
    ecx = ecx & 0xFFFFFFFCu;
    PUSH32(esp, edi);
    edi = ecx + eax * 2 + 4;
    _fa = (uint32_t)(MEM32(ebx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xB8), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020AB31; /* jl: less (signed <) */

loc_0020AB29: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0020AB31u); RECOMP_ABI_CALL(0x001F9330u, sub_001F9330); /* call 0x001F9330 */

loc_0020AB31: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0020AB61; /* ja: above (unsigned >) */

loc_0020AB38: ;
    eax = eax | 3;
    MEM32(ebp) = eax;
    eax = MEM32(esi);
    edi = edi >> 3;
    ecx = MEM32(ebp + edi * 4 + -4);
    edi = ebp + edi * 4 + -4;
    eax = eax >> 0x1F;
    eax = eax << 3;
    eax = eax | 4;
    MEM32(eax + esi) = ecx;
    MEM32(edi) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0020AB61: ;
    edx = MEM32(esi);
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AB81; /* jne: not equal / not zero */

loc_0020AB71: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0xB));
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020AD40; /* jne: not equal / not zero */

loc_0020AB81: ;
    eax = eax | 1;
    MEM32(ebp) = eax;
    ebp = esi + edi;
    ecx = ebp;
    PUSH32(esp, 0x0020AB91u); RECOMP_ABI_CALL(0x001E6BD0u, sub_001E6BD0); /* call 0x001E6BD0 */

loc_0020AB91: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    MEM32(esp + 0x18) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0020ABD5; /* jne: not equal / not zero */

loc_0020AB9A: ;
    eax = MEM32(esi + -4);
    esi = esi - eax;
    edi = edi + eax;
    eax = MEM32(esi);
    eax = eax >> 0x1F;
    eax = eax << 3;
    eax = eax | 4;
    ecx = eax + esi;
    eax = MEM32(ecx);
    edx = MEM32(eax);
    ecx = MEM32(ecx + 4);
    edx = edx >> 0x1F;
    edx = edx << 3;
    edx = edx | 4;
    MEM32(edx + eax + 4) = ecx;
    edx = MEM32(ecx);
    edx = edx >> 0x1F;
    edx = edx << 3;
    edx = edx | 4;
    MEM32(edx + ecx) = eax;
    eax = MEM32(esp + 0x18);

loc_0020ABD5: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020ACB0; /* je: equal / zero */

loc_0020ABE2: ;
    edx = MEM32(eax + ebp);
    ecx = MEM32(ebp);
    edx = edx & 1;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(ebp) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020AC25; /* jne: not equal / not zero */

loc_0020ABF5: ;
    ecx = ecx >> 0x1F;
    ecx = ecx << 3;
    ecx = ecx | 4;
    edx = MEM32(ecx + ebp);
    ecx = ecx + ebp;
    ebp = MEM32(edx);
    ecx = MEM32(ecx + 4);
    ebp = ebp >> 0x1F;
    ebp = ebp << 3;
    ebp = ebp | 4;
    MEM32(edx + ebp + 4) = ecx;
    ebp = MEM32(ecx);
    ebp = ebp >> 0x1F;
    ebp = ebp << 3;
    ebp = ebp | 4;
    MEM32(ecx + ebp) = edx;
    edi = edi + eax;

loc_0020AC25: ;
    edx = MEM32(ebx + 0xB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0020AC3Eu); RECOMP_ABI_CALL(0x001E6DB0u, sub_001E6DB0); /* call 0x001E6DB0 */

loc_0020AC3E: ;
    eax = MEM32(esi);
    eax = eax | 1;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi) = eax;
    PUSH32(esp, 0x0020AC4Du); RECOMP_ABI_CALL(0x001F8BE0u, sub_001F8BE0); /* call 0x001F8BE0 */

loc_0020AC4D: ;
    ebp = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0x48);
    edx = MEM32(esi);
    eax = ebp + 0x48;
    edx = edx >> 0x1F;
    edx = edx << 3;
    edx = edx | 4;
    ecx = ecx >> 0x1F;
    ecx = ecx << 3;
    ecx = ecx | 4;
    ecx = MEM32(ecx + eax);
    MEM32(edx + esi + 4) = eax;
    edx = MEM32(esi);
    edx = edx >> 0x1F;
    edx = edx << 3;
    edx = edx | 4;
    MEM32(edx + esi) = ecx;
    edx = MEM32(eax);
    edx = edx >> 0x1F;
    edx = edx << 3;
    edx = edx | 4;
    MEM32(edx + eax) = esi;
    eax = MEM32(ecx);
    eax = eax >> 0x1F;
    eax = eax << 3;
    eax = eax | 4;
    MEM32(eax + ecx + 4) = esi;
    _fa = (uint32_t)(MEM32(ebx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xB8), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020ACEE; /* jl: less (signed <) */

loc_0020ACA6: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0020ACAEu); RECOMP_ABI_CALL(0x001F8EF0u, sub_001F8EF0); /* call 0x001F8EF0 */

loc_0020ACAE: ;
    goto loc_0020ACEE;

loc_0020ACB0: ;
    ecx = MEM32(ebx + 0xB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = edi + eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020ACCBu); RECOMP_ABI_CALL(0x001E6DB0u, sub_001E6DB0); /* call 0x001E6DB0 */

loc_0020ACCB: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x10);
    ecx = ecx | 1;
    MEM32(esi) = ecx;
    MEM32(edx + 0x2C) = esi;
    _fa = (uint32_t)(MEM32(ebx + 0xB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xB8), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020ACEA; /* jl: less (signed <) */

loc_0020ACE2: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0020ACEAu); RECOMP_ABI_CALL(0x001F8C30u, sub_001F8C30); /* call 0x001F8C30 */

loc_0020ACEA: ;
    ebp = MEM32(esp + 0x10);

loc_0020ACEE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020AD2B; /* jb: below (unsigned <) */

loc_0020ACF6: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020AD03; /* je: equal / zero */

loc_0020ACFC: ;
    ecx = ebx;
    PUSH32(esp, 0x0020AD03u); RECOMP_ABI_CALL(0x00205170u, sub_00205170); /* call 0x00205170 */

loc_0020AD03: ;
    ecx = MEM32(ebp + 0x2C);
    PUSH32(esp, 0x0020AD0Bu); RECOMP_ABI_CALL(0x001E6BD0u, sub_001E6BD0); /* call 0x001E6BD0 */

loc_0020AD0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x7C4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x7C4) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0020AD40; /* jb: below (unsigned <) */

loc_0020AD13: ;
    eax = MEM32(ebp + 0x7C8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0020AD23u); RECOMP_ABI_CALL(0x001FA9E0u, sub_001FA9E0); /* call 0x001FA9E0 */

loc_0020AD23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0020AD2B: ;
    ecx = MEM32(ebx + 0x18);
    ecx = ecx | MEM32(ebx + 0x1C);
    if ((ecx != 0)) goto loc_0020AD40; /* jne: not equal / not zero */

loc_0020AD33: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020AD40; /* je: equal / zero */

loc_0020AD39: ;
    ecx = ebx;
    PUSH32(esp, 0x0020AD40u); RECOMP_ABI_CALL(0x00205170u, sub_00205170); /* call 0x00205170 */

loc_0020AD40: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0020AD42: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020AD50
 * Original: 0x0020AD50 - 0x0020AD9D (77 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AD50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AD50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = MEM32(ebx + 0x70);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x78);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    ebp = ebp & 0x7FFFFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020AD81; /* jge: greater or equal (signed >=) */

loc_0020AD6C: ;
    edx = MEM32(esi + 0x10);
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    MEM32(edx + edi * 4) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x7F) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0020AD81: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020AD8Eu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020AD8E: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + edi * 4) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x7F) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020ADA0
 * Original: 0x0020ADA0 - 0x0020ADCB (43 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ADA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020ADA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0020ADC6; /* je: equal / zero */

loc_0020ADAC: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020ADBEu); RECOMP_ABI_CALL(0x002059F0u, sub_002059F0); /* call 0x002059F0 */

loc_0020ADBE: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020ADC6u); RECOMP_ABI_CALL(0x00205A30u, sub_00205A30); /* call 0x00205A30 */

loc_0020ADC6: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020ADD0
 * Original: 0x0020ADD0 - 0x0020ADEF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ADD0(void)
{

loc_0020ADD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0020ADDDu); RECOMP_ABI_CALL(0x002059F0u, sub_002059F0); /* call 0x002059F0 */

loc_0020ADDD: ;
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    eax = eax & 0x7FFFFFFF;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020ADF0
 * Original: 0x0020ADF0 - 0x0020AE06 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020ADF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020ADF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020ADFAu); RECOMP_ABI_CALL(0x002059F0u, sub_002059F0); /* call 0x002059F0 */

loc_0020ADFA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas & _fbs, 0)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020AE10
 * Original: 0x0020AE10 - 0x0020B034 (548 bytes, 191 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020AE10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020AE10: ;
    esp = esp - 0x10C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x5C);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0020AE4C; /* jne: not equal / not zero */

loc_0020AE32: ;
    eax = MEM32(ebx);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0020AE3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020AE3E: ;
    ecx = MEM32(0x46A728);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B01F; /* je: equal / zero */

loc_0020AE4C: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x5C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AE9D; /* jne: not equal / not zero */

loc_0020AE54: ;
    edx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F3614);
    PUSH32(esp, 0x0020AE62u); RECOMP_ABI_CALL(0x001F8250u, sub_001F8250); /* call 0x001F8250 */

loc_0020AE62: ;
    ecx = MEM32(0x5BC558);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AE74; /* je: equal / zero */

loc_0020AE6F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0020AE74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020AE74: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x0020AE7Eu); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_0020AE7E: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 0x124);
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x10C;
    esp += 16; return; /* ret 12 */

loc_0020AE9D: ;
    SET_LO8(eax, MEM8(esp + 0x128));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020AEAC; /* jne: not equal / not zero */

loc_0020AEA8: ;
    MEM32(esp + 0x18) = ebp;

loc_0020AEAC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0020AF1F; /* jle: less or equal (signed <=) */

loc_0020AEB0: ;
    eax = MEM32(ebx + 0x60);
    MEM32(esp + 0x10) = eax;

loc_0020AEB7: ;
    ecx = MEM32(ebx + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020AEC6; /* je: equal / zero */

loc_0020AEBE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0020AEC6; /* jl: less (signed <) */

loc_0020AEC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020AEC8; /* jle: less or equal (signed <=) */

loc_0020AEC6: ;
    eax = 0; /* xor self */

loc_0020AEC8: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020AF0F; /* je: equal / zero */

loc_0020AECF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AF0F; /* je: equal / zero */

loc_0020AED4: ;
    SET_LO8(ecx, MEM8(esp + 0x128));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020AEFF; /* je: equal / zero */

loc_0020AEDF: ;
    SET_LO8(ecx, MEM8(eax + 0xC));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AEF3; /* je: equal / zero */

loc_0020AEEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AEF3; /* je: equal / zero */

loc_0020AEEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020AF0F; /* jne: not equal / not zero */

loc_0020AEF3: ;
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020AF0F; /* jne: not equal / not zero */

loc_0020AEFB: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020AEFF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020AF09; /* jae: above or equal (unsigned >=) */

loc_0020AF05: ;
    MEM32(esp + 0x14) = edx;

loc_0020AF09: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0020AF0F; /* jbe: below or equal (unsigned <=) */

loc_0020AF0D: ;
    edi = edx;

loc_0020AF0F: ;
    eax = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0020AEB7; /* jl: less (signed <) */

loc_0020AF1F: ;
    esi = MEM32(esp + 0x124);
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    ecx = eax * 4;
    edi = edi & 0xFFFFFC00u;
    MEM32(esi + 8) = eax;
    edx = edx & 0xFFFFFC00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = edi + 0x400;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0020AF6A; /* je: equal / zero */

loc_0020AF57: ;
    eax = eax - edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esi + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0020AF71; /* je: equal / zero */

loc_0020AF64: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x18) = eax;
    goto loc_0020AF71;

loc_0020AF6A: ;
    MEM32(esi + 0x18) = 1;

loc_0020AF71: ;
    ecx = esi;
    PUSH32(esp, 0x0020AF78u); RECOMP_ABI_CALL(0x0020A580u, sub_0020A580); /* call 0x0020A580 */

loc_0020AF78: ;
    eax = MEM32(ebx + 0x5C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0020B018; /* jle: less or equal (signed <=) */

loc_0020AF85: ;
    edx = 0; /* xor self */
    MEM32(esp + 0x10) = edx;
    goto loc_0020AF90;

    /* nop */

loc_0020AF90: ;
    ecx = MEM32(ebx + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020AFA4; /* je: equal / zero */

loc_0020AF97: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0020AFA4; /* jl: less (signed <) */

loc_0020AF9B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020AFA4; /* jg: greater (signed >) */

loc_0020AF9F: ;
    edi = edx + ecx;
    goto loc_0020AFA6;

loc_0020AFA4: ;
    edi = 0; /* xor self */

loc_0020AFA6: ;
    SET_LO8(eax, MEM8(esp + 0x128));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020AFCD; /* je: equal / zero */

loc_0020AFB1: ;
    SET_LO8(ecx, MEM8(edi + 0xC));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) >> 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AFC5; /* je: equal / zero */

loc_0020AFBD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020AFC5; /* je: equal / zero */

loc_0020AFC1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020B005; /* jne: not equal / not zero */

loc_0020AFC5: ;
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020B005; /* jne: not equal / not zero */

loc_0020AFCD: ;
    ecx = MEM32(ebx + 0x58);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ecx + MEM32(edi);
    PUSH32(esp, ecx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0020AFEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020AFEB: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0020B001u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B001: ;
    edx = MEM32(esp + 0x10);

loc_0020B005: ;
    eax = MEM32(ebx + 0x5C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0020AF90; /* jl: less (signed <) */

loc_0020B018: ;
    ecx = MEM32(0x5BC5D8);
    POP32(esp, ebp);

loc_0020B01F: ;
    eax = MEM32(esp + 0x11C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x10C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020B040
 * Original: 0x0020B040 - 0x0020B07C (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B040(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B040: ;
    ecx = MEM32(0x5BC564);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0020B051u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B051: ;
    ecx = MEM32(esi + 0x34);
    eax = esp + 8;
    MEM8(esi + 0x3C) = 0;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0020B062u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B062: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B07A; /* jne: not equal / not zero */

loc_0020B072: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0020B07A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B080
 * Original: 0x0020B080 - 0x0020B0EE (110 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020B080(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_0020B080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3F3628);
    PUSH32(esp, 0x3432FC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -36) = 0x20B040;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B0BFu); RECOMP_ABI_CALL(0x003011D0u, sub_003011D0); /* call 0x003011D0 */

loc_0020B0BF: ;
    MEM32(esi + 0x40) = eax;
    eax = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x28); PUSH32(esp, 0x0020B0C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B0C9: ;
    esp = esp + 4;
    MEM32(esi + 0x38) = eax;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020B0DBu); RECOMP_ABI_CALL(0x0020B0EEu, sub_0020B0EE); /* call 0x0020B0EE */

loc_0020B0DB: ;
    eax = 0; /* xor self */
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B0EE
 * Original: 0x0020B0EE - 0x0020B0F9 (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B0EE(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B0EE: ;
    ecx = MEM32(ebp + -32);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + -36); PUSH32(esp, 0x0020B0F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B0F5: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B100
 * Original: 0x0020B100 - 0x0020B22A (298 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B100: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020B120; /* jne: not equal / not zero */

loc_0020B10D: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0020B120: ;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B13A; /* je: equal / zero */

loc_0020B127: ;
    edx = MEM32(0x46A728);
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0020B13A: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B144u); RECOMP_ABI_CALL(0x003019D0u, sub_003019D0); /* call 0x003019D0 */

loc_0020B144: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020B152u); RECOMP_ABI_CALL(0x00301990u, sub_00301990); /* call 0x00301990 */

loc_0020B152: ;
    eax = MEM32(esi + 0x20);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B16A; /* je: equal / zero */

loc_0020B15C: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B167u); RECOMP_ABI_CALL(0x003019C0u, sub_003019C0); /* call 0x003019C0 */

loc_0020B167: ;
    esp = esp + 8;

loc_0020B16A: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0020B172u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B172: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B183; /* je: equal / zero */

loc_0020B176: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0020B183u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B183: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0020B192u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B192: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0020B19Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B19F: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B1B1; /* je: equal / zero */

loc_0020B1A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B1AEu); RECOMP_ABI_CALL(0x00301910u, sub_00301910); /* call 0x00301910 */

loc_0020B1AE: ;
    esp = esp + 8;

loc_0020B1B1: ;
    ecx = MEM32(0x5BC564);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0020B1BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B1BE: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0020B1CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B1CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20B080);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM8(esi + 0x3C) = 1;
    PUSH32(esp, 0x0020B1E6u); RECOMP_ABI_CALL(0x00301A60u, sub_00301A60); /* call 0x00301A60 */

loc_0020B1E6: ;
    ecx = MEM32(esi + 0x30);
    edi = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi + 0x40) = eax;
    edx = MEM32(ecx);
    esp = esp + 0x10;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0020B1FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B1FF: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020B209u); RECOMP_ABI_CALL(0x00301A20u, sub_00301A20); /* call 0x00301A20 */

loc_0020B209: ;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    POP32(esp, edi);
    eax = 0x5BC5D8;
    if (TEST_Z(_fa, _fb)) goto loc_0020B21B; /* je: equal / zero */

loc_0020B216: ;
    eax = 0x46A728;

loc_0020B21B: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020B230
 * Original: 0x0020B230 - 0x0020B2AB (123 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B230(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B230: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    edx = MEM32(ebp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    ebx = ecx;
    MEM32(ebp + 4) = edx;
    PUSH32(esp, 0x0020B24Eu); RECOMP_ABI_CALL(0x00300FB0u, sub_00300FB0); /* call 0x00300FB0 */

loc_0020B24E: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx);
    esp = esp + 8;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0020B261u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B261: ;
    esi = MEM32(ebx + 8);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020B274; /* jge: greater or equal (signed >=) */

loc_0020B26C: ;
    ecx = edi + 1;
    MEM32(esi + 8) = ecx;
    goto loc_0020B281;

loc_0020B274: ;
    PUSH32(esp, 4);
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0020B281u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020B281: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + edi * 4) = ebp;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0020B294u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B294: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0020B2A0u); RECOMP_ABI_CALL(0x00300FB0u, sub_00300FB0); /* call 0x00300FB0 */

loc_0020B2A0: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020B2B0
 * Original: 0x0020B2B0 - 0x0020B319 (105 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B2B0: ;
    SET_LO8(eax, MEM8(0x5BC590));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B312; /* jne: not equal / not zero */

loc_0020B2BC: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0020B2CC; /* jl: less (signed <) */

loc_0020B2C3: ;
    MEM32(esi + 8) = 0;
    goto loc_0020B2D7;

loc_0020B2CC: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0020B2D7u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020B2D7: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020B2FA; /* jge: greater or equal (signed >=) */

loc_0020B2E2: ;
    edx = MEM32(esi + 0x10);
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    MEM32(edx + edi * 4) = 0;
    eax = MEM32(esi + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020B2FA: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020B307u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020B307: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + edi * 4) = 0;
    POP32(esp, edi);

loc_0020B312: ;
    eax = MEM32(esi + 0x10);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020B320
 * Original: 0x0020B320 - 0x0020B331 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B320: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020B330; /* jle: less or equal (signed <=) */

loc_0020B328: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B330u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0020B330: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B340
 * Original: 0x0020B340 - 0x0020B38E (78 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B340: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0020B350; /* je: equal / zero */

loc_0020B34D: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020B350: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B373; /* je: equal / zero */

loc_0020B35E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B373; /* jne: not equal / not zero */

loc_0020B36E: ;
    PUSH32(esp, 0x0020B373u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B373: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B388; /* je: equal / zero */

loc_0020B37A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0020B388; /* jl: less (signed <) */

loc_0020B37E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020B388; /* jge: greater or equal (signed >=) */

loc_0020B382: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edi * 4) = ebx;

loc_0020B388: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020B390
 * Original: 0x0020B390 - 0x0020B3A1 (17 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B390: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020B3A0; /* jle: less or equal (signed <=) */

loc_0020B398: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020B3A0u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_0020B3A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B3B0
 * Original: 0x0020B3B0 - 0x0020B40A (90 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B3B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_0020B405; /* jl: less (signed <) */

loc_0020B3BC: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020B404; /* jg: greater (signed >) */

loc_0020B3C4: ;
    ecx = MEM32(edi + 0xC);
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0020B3D3; /* jg: greater (signed >) */

loc_0020B3CE: ;
    MEM32(edi + 8) = eax;
    goto loc_0020B3DD;

loc_0020B3D3: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020B3DDu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0020B3DD: ;
    esi = esi - ebx;
    eax = MEM32(edi + 0x10);
    edi = eax + ebx * 4;
    if ((esi == 0)) goto loc_0020B3FC; /* je: equal / zero */

loc_0020B3E7: ;
    ecx = esi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = edi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020B3F9u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_0020B3F9: ;
    esp = esp + 0xC;

loc_0020B3FC: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    MEM32(edi) = ecx;

loc_0020B404: ;
    POP32(esp, esi);

loc_0020B405: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020B410
 * Original: 0x0020B410 - 0x0020B449 (57 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B410: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0020B41F; /* je: equal / zero */

loc_0020B41C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020B41F: ;
    ecx = MEM32(esi + 0x11C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B43E; /* je: equal / zero */

loc_0020B429: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B43E; /* jne: not equal / not zero */

loc_0020B439: ;
    PUSH32(esp, 0x0020B43Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B43E: ;
    MEM32(esi + 0x11C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020B450
 * Original: 0x0020B450 - 0x0020B489 (57 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B450: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0020B45F; /* je: equal / zero */

loc_0020B45C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020B45F: ;
    ecx = MEM32(esi + 0x120);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B47E; /* je: equal / zero */

loc_0020B469: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B47E; /* jne: not equal / not zero */

loc_0020B479: ;
    PUSH32(esp, 0x0020B47Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B47E: ;
    MEM32(esi + 0x120) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020B490
 * Original: 0x0020B490 - 0x0020B4C9 (57 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B490: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0020B49F; /* je: equal / zero */

loc_0020B49C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020B49F: ;
    ecx = MEM32(esi + 0x124);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B4BE; /* je: equal / zero */

loc_0020B4A9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B4BE; /* jne: not equal / not zero */

loc_0020B4B9: ;
    PUSH32(esp, 0x0020B4BEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B4BE: ;
    MEM32(esi + 0x124) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020B4D0
 * Original: 0x0020B4D0 - 0x0020B4D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B4D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B4D0: ;
    g_seh_ebp = ebp; sub_0020A820(); return; /* tail jmp 0x0020A820 */

}

/**
 * sub_0020B4E0
 * Original: 0x0020B4E0 - 0x0020B4E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B4E0(void)
{

loc_0020B4E0: ;
    eax = MEM32(0x5BC1A8);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B4F0
 * Original: 0x0020B4F0 - 0x0020B4F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B4F0(void)
{

loc_0020B4F0: ;
    eax = MEM32(0x5BC1B0);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B500
 * Original: 0x0020B500 - 0x0020B506 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B500(void)
{

loc_0020B500: ;
    eax = MEM32(0x5BC1B4);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B510
 * Original: 0x0020B510 - 0x0020B585 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B510(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B510: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B52F; /* je: equal / zero */

loc_0020B51A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B52F; /* jne: not equal / not zero */

loc_0020B52A: ;
    PUSH32(esp, 0x0020B52Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B52F: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B54B; /* je: equal / zero */

loc_0020B536: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B54B; /* jne: not equal / not zero */

loc_0020B546: ;
    PUSH32(esp, 0x0020B54Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B54B: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B567; /* je: equal / zero */

loc_0020B552: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B567; /* jne: not equal / not zero */

loc_0020B562: ;
    PUSH32(esp, 0x0020B567u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B567: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0020B584; /* je: equal / zero */

loc_0020B56F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B584; /* jne: not equal / not zero */

loc_0020B57F: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0020B584: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B590
 * Original: 0x0020B590 - 0x0020B596 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B590(void)
{

loc_0020B590: ;
    eax = MEM32(0x5BC1C0);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B5A0
 * Original: 0x0020B5A0 - 0x0020B5C4 (36 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B5A0(void)
{

loc_0020B5A0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2728;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B5D0
 * Original: 0x0020B5D0 - 0x0020B5D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B5D0(void)
{

loc_0020B5D0: ;
    eax = MEM32(0x5BC208);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B5E0
 * Original: 0x0020B5E0 - 0x0020B604 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B5E0(void)
{

loc_0020B5E0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2788;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B610
 * Original: 0x0020B610 - 0x0020B616 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B610(void)
{

loc_0020B610: ;
    eax = MEM32(0x5BC210);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B620
 * Original: 0x0020B620 - 0x0020B644 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B620(void)
{

loc_0020B620: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F27E8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B650
 * Original: 0x0020B650 - 0x0020B656 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B650(void)
{

loc_0020B650: ;
    eax = MEM32(0x5BC244);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B660
 * Original: 0x0020B660 - 0x0020B66C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B660(void)
{

loc_0020B660: ;
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x0020B66Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0020B66A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B670
 * Original: 0x0020B670 - 0x0020B694 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B670(void)
{

loc_0020B670: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2848;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B6A0
 * Original: 0x0020B6A0 - 0x0020B6AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B6A0(void)
{

loc_0020B6A0: ;
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x0020B6AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0020B6AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B6B0
 * Original: 0x0020B6B0 - 0x0020B6BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B6B0(void)
{

loc_0020B6B0: ;
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x0020B6BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0020B6BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B6C0
 * Original: 0x0020B6C0 - 0x0020B6E4 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B6C0(void)
{

loc_0020B6C0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F28A8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B6F0
 * Original: 0x0020B6F0 - 0x0020B718 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B6F0: ;
    eax = MEM32(0x5BC534);
    edx = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B70D; /* jne: not equal / not zero */

loc_0020B708: ;
    PUSH32(esp, 0x0020B70Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B70D: ;
    MEM32(0x5BC534) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B720
 * Original: 0x0020B720 - 0x0020B744 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B720(void)
{

loc_0020B720: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2908;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B750
 * Original: 0x0020B750 - 0x0020B756 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B750(void)
{

loc_0020B750: ;
    eax = MEM32(0x5BC2C8);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B760
 * Original: 0x0020B760 - 0x0020B784 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B760(void)
{

loc_0020B760: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2968;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B790
 * Original: 0x0020B790 - 0x0020B796 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B790(void)
{

loc_0020B790: ;
    eax = MEM32(0x5BC2EC);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B7A0
 * Original: 0x0020B7A0 - 0x0020B815 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B7A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B7A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B7BF; /* je: equal / zero */

loc_0020B7AA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B7BF; /* jne: not equal / not zero */

loc_0020B7BA: ;
    PUSH32(esp, 0x0020B7BFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B7BF: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B7DB; /* je: equal / zero */

loc_0020B7C6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B7DB; /* jne: not equal / not zero */

loc_0020B7D6: ;
    PUSH32(esp, 0x0020B7DBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B7DB: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B7F7; /* je: equal / zero */

loc_0020B7E2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B7F7; /* jne: not equal / not zero */

loc_0020B7F2: ;
    PUSH32(esp, 0x0020B7F7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B7F7: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0020B814; /* je: equal / zero */

loc_0020B7FF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B814; /* jne: not equal / not zero */

loc_0020B80F: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0020B814: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B820
 * Original: 0x0020B820 - 0x0020B844 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B820(void)
{

loc_0020B820: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F29C8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B850
 * Original: 0x0020B850 - 0x0020B8CD (125 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B850(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B850: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC2FC);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0020B86Eu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0020B86E: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0020B88A; /* jle: less or equal (signed <=) */

loc_0020B87A: ;
    /* nop */

loc_0020B880: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020B8C6; /* je: equal / zero */

loc_0020B885: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020B880; /* jl: less (signed <) */

loc_0020B88A: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0020B88D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0020B896u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0020B896: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM8(esi + 0x42) = 1;
    MEM32(esi + 0x1C) = 0x5BB6A0;
    PUSH32(esp, 0x0020B8ACu); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0020B8AC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0020B8CA; /* jne: not equal / not zero */

loc_0020B8BD: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0020B8C6: ;
    ebx = edx;
    goto loc_0020B88D;

loc_0020B8CA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B8D0
 * Original: 0x0020B8D0 - 0x0020B8DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B8D0(void)
{

loc_0020B8D0: ;
    PUSH32(esp, 0x222570);
    PUSH32(esp, 0x0020B8DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0020B8DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B8E0
 * Original: 0x0020B8E0 - 0x0020B904 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B8E0(void)
{

loc_0020B8E0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2A28;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B910
 * Original: 0x0020B910 - 0x0020B91C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B910(void)
{

loc_0020B910: ;
    PUSH32(esp, 0x2371D0);
    PUSH32(esp, 0x0020B91Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0020B91A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B920
 * Original: 0x0020B920 - 0x0020B953 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020B920: ;
    eax = MEM32(0x5BC520);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0020B941; /* je: equal / zero */

loc_0020B92B: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B941; /* jne: not equal / not zero */

loc_0020B93C: ;
    PUSH32(esp, 0x0020B941u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B941: ;
    MEM32(0x5BC520) = 0;
    MEM8(0x5BC524) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0020B960
 * Original: 0x0020B960 - 0x0020B966 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B960(void)
{

loc_0020B960: ;
    eax = MEM32(0x5BC38C);
    esp += 4; return; /* ret */

}

/**
 * sub_0020B970
 * Original: 0x0020B970 - 0x0020BA39 (201 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020B970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020B970: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B98F; /* je: equal / zero */

loc_0020B97A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B98F; /* jne: not equal / not zero */

loc_0020B98A: ;
    PUSH32(esp, 0x0020B98Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B98F: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B9AB; /* je: equal / zero */

loc_0020B996: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B9AB; /* jne: not equal / not zero */

loc_0020B9A6: ;
    PUSH32(esp, 0x0020B9ABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B9AB: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B9C7; /* je: equal / zero */

loc_0020B9B2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B9C7; /* jne: not equal / not zero */

loc_0020B9C2: ;
    PUSH32(esp, 0x0020B9C7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B9C7: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B9E3; /* je: equal / zero */

loc_0020B9CE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B9E3; /* jne: not equal / not zero */

loc_0020B9DE: ;
    PUSH32(esp, 0x0020B9E3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B9E3: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020B9FF; /* je: equal / zero */

loc_0020B9EA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020B9FF; /* jne: not equal / not zero */

loc_0020B9FA: ;
    PUSH32(esp, 0x0020B9FFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020B9FF: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020BA1B; /* je: equal / zero */

loc_0020BA06: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020BA1B; /* jne: not equal / not zero */

loc_0020BA16: ;
    PUSH32(esp, 0x0020BA1Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0020BA1B: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0020BA38; /* je: equal / zero */

loc_0020BA23: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0020BA38; /* jne: not equal / not zero */

loc_0020BA33: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0020BA38: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020BA40
 * Original: 0x0020BA40 - 0x0020BA64 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA40(void)
{

loc_0020BA40: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2A88;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020BA70
 * Original: 0x0020BA70 - 0x0020BA76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA70(void)
{

loc_0020BA70: ;
    eax = MEM32(0x5BC3B8);
    esp += 4; return; /* ret */

}

/**
 * sub_0020BA80
 * Original: 0x0020BA80 - 0x0020BA8C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA80(void)
{

loc_0020BA80: ;
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x0020BA8Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0020BA8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020BA90
 * Original: 0x0020BA90 - 0x0020BAB4 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BA90(void)
{

loc_0020BA90: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2AE8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020BAC0
 * Original: 0x0020BAC0 - 0x0020BAE4 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BAC0(void)
{

loc_0020BAC0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2B48;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020BAF0
 * Original: 0x0020BAF0 - 0x0020BB14 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BAF0(void)
{

loc_0020BAF0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2BA8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020BB20
 * Original: 0x0020BB20 - 0x0020BB44 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BB20(void)
{

loc_0020BB20: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2C08;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020BB50
 * Original: 0x0020BB50 - 0x0020BB74 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BB50(void)
{

loc_0020BB50: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2C68;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020BB80
 * Original: 0x0020BB80 - 0x0020BBA4 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BB80(void)
{

loc_0020BB80: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2CC8;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0020BBB0
 * Original: 0x0020BBB0 - 0x0020BBD4 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020BBB0(void)
{

loc_0020BBB0: ;
    esp = esp - 0x14;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp + 4) = 1;
    MEM32(esp) = 0x3F2D28;
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
