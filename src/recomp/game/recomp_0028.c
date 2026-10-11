#include "ui/pc_menu.h"
/**
 * X-Men Legends - Recompiled code chunk 28
 * Functions: 250 (0x00142EA0 - 0x001494D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00142EA0
 * Original: 0x00142EA0 - 0x00142EFC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142EA0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548630));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352D9E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00142EE9; /* jne: not equal / not zero */

loc_00142EC4: ;
    MEM32(0x548630) = MEM32(0x548630) | eax;
    ecx = 0x548520;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00142EDCu); RECOMP_ABI_CALL(0x00142480u, sub_00142480); /* call 0x00142480 */

loc_00142EDC: ;
    PUSH32(esp, 0x35A420);
    PUSH32(esp, 0x00142EE6u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00142EE6: ;
    esp = esp + 4;

loc_00142EE9: ;
    ecx = MEM32(esp);
    eax = 0x548520;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00142F00
 * Original: 0x00142F00 - 0x00142F5C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142F00: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548748));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352DBE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00142F49; /* jne: not equal / not zero */

loc_00142F24: ;
    MEM32(0x548748) = MEM32(0x548748) | eax;
    ecx = 0x548638;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00142F3Cu); RECOMP_ABI_CALL(0x00142520u, sub_00142520); /* call 0x00142520 */

loc_00142F3C: ;
    PUSH32(esp, 0x35A430);
    PUSH32(esp, 0x00142F46u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00142F46: ;
    esp = esp + 4;

loc_00142F49: ;
    ecx = MEM32(esp);
    eax = 0x548638;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00142F60
 * Original: 0x00142F60 - 0x00142FBC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142F60: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548860));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352DDE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00142FA9; /* jne: not equal / not zero */

loc_00142F84: ;
    MEM32(0x548860) = MEM32(0x548860) | eax;
    ecx = 0x548750;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00142F9Cu); RECOMP_ABI_CALL(0x001425C0u, sub_001425C0); /* call 0x001425C0 */

loc_00142F9C: ;
    PUSH32(esp, 0x35A440);
    PUSH32(esp, 0x00142FA6u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00142FA6: ;
    esp = esp + 4;

loc_00142FA9: ;
    ecx = MEM32(esp);
    eax = 0x548750;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00142FC0
 * Original: 0x00142FC0 - 0x0014301C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142FC0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548978));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352DFE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00143009; /* jne: not equal / not zero */

loc_00142FE4: ;
    MEM32(0x548978) = MEM32(0x548978) | eax;
    ecx = 0x548868;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00142FFCu); RECOMP_ABI_CALL(0x00142660u, sub_00142660); /* call 0x00142660 */

loc_00142FFC: ;
    PUSH32(esp, 0x35A450);
    PUSH32(esp, 0x00143006u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00143006: ;
    esp = esp + 4;

loc_00143009: ;
    ecx = MEM32(esp);
    eax = 0x548868;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00143020
 * Original: 0x00143020 - 0x0014307C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143020: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548A0C));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352E1E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00143069; /* jne: not equal / not zero */

loc_00143044: ;
    MEM32(0x548A0C) = MEM32(0x548A0C) | eax;
    ecx = 0x548980;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014305Cu); RECOMP_ABI_CALL(0x00142700u, sub_00142700); /* call 0x00142700 */

loc_0014305C: ;
    PUSH32(esp, 0x35A460);
    PUSH32(esp, 0x00143066u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00143066: ;
    esp = esp + 4;

loc_00143069: ;
    ecx = MEM32(esp);
    eax = 0x548980;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00143080
 * Original: 0x00143080 - 0x001430DC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143080: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548A9C));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352E3E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_001430C9; /* jne: not equal / not zero */

loc_001430A4: ;
    MEM32(0x548A9C) = MEM32(0x548A9C) | eax;
    ecx = 0x548A10;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001430BCu); RECOMP_ABI_CALL(0x001427A0u, sub_001427A0); /* call 0x001427A0 */

loc_001430BC: ;
    PUSH32(esp, 0x35A470);
    PUSH32(esp, 0x001430C6u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_001430C6: ;
    esp = esp + 4;

loc_001430C9: ;
    ecx = MEM32(esp);
    eax = 0x548A10;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001430E0
 * Original: 0x001430E0 - 0x0014313C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001430E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001430E0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548B2C));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352E5E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00143129; /* jne: not equal / not zero */

loc_00143104: ;
    MEM32(0x548B2C) = MEM32(0x548B2C) | eax;
    ecx = 0x548AA0;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014311Cu); RECOMP_ABI_CALL(0x00142840u, sub_00142840); /* call 0x00142840 */

loc_0014311C: ;
    PUSH32(esp, 0x35A480);
    PUSH32(esp, 0x00143126u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00143126: ;
    esp = esp + 4;

loc_00143129: ;
    ecx = MEM32(esp);
    eax = 0x548AA0;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00143140
 * Original: 0x00143140 - 0x0014319C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143140: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548BBC));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352E7E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00143189; /* jne: not equal / not zero */

loc_00143164: ;
    MEM32(0x548BBC) = MEM32(0x548BBC) | eax;
    ecx = 0x548B30;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014317Cu); RECOMP_ABI_CALL(0x001428E0u, sub_001428E0); /* call 0x001428E0 */

loc_0014317C: ;
    PUSH32(esp, 0x35A490);
    PUSH32(esp, 0x00143186u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00143186: ;
    esp = esp + 4;

loc_00143189: ;
    ecx = MEM32(esp);
    eax = 0x548B30;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001431A0
 * Original: 0x001431A0 - 0x001431FC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001431A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001431A0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548C4C));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352E9E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_001431E9; /* jne: not equal / not zero */

loc_001431C4: ;
    MEM32(0x548C4C) = MEM32(0x548C4C) | eax;
    ecx = 0x548BC0;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001431DCu); RECOMP_ABI_CALL(0x00142980u, sub_00142980); /* call 0x00142980 */

loc_001431DC: ;
    PUSH32(esp, 0x35A4A0);
    PUSH32(esp, 0x001431E6u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_001431E6: ;
    esp = esp + 4;

loc_001431E9: ;
    ecx = MEM32(esp);
    eax = 0x548BC0;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00143200
 * Original: 0x00143200 - 0x0014325C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143200: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548CDC));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352EBE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00143249; /* jne: not equal / not zero */

loc_00143224: ;
    MEM32(0x548CDC) = MEM32(0x548CDC) | eax;
    ecx = 0x548C50;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014323Cu); RECOMP_ABI_CALL(0x00142A20u, sub_00142A20); /* call 0x00142A20 */

loc_0014323C: ;
    PUSH32(esp, 0x35A4B0);
    PUSH32(esp, 0x00143246u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00143246: ;
    esp = esp + 4;

loc_00143249: ;
    ecx = MEM32(esp);
    eax = 0x548C50;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00143260
 * Original: 0x00143260 - 0x001432BC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143260: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548D6C));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352EDE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_001432A9; /* jne: not equal / not zero */

loc_00143284: ;
    MEM32(0x548D6C) = MEM32(0x548D6C) | eax;
    ecx = 0x548CE0;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014329Cu); RECOMP_ABI_CALL(0x00142AC0u, sub_00142AC0); /* call 0x00142AC0 */

loc_0014329C: ;
    PUSH32(esp, 0x35A4C0);
    PUSH32(esp, 0x001432A6u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_001432A6: ;
    esp = esp + 4;

loc_001432A9: ;
    ecx = MEM32(esp);
    eax = 0x548CE0;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001432C0
 * Original: 0x001432C0 - 0x0014331C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001432C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001432C0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548DFC));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352EFE);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00143309; /* jne: not equal / not zero */

loc_001432E4: ;
    MEM32(0x548DFC) = MEM32(0x548DFC) | eax;
    ecx = 0x548D70;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001432FCu); RECOMP_ABI_CALL(0x00142B60u, sub_00142B60); /* call 0x00142B60 */

loc_001432FC: ;
    PUSH32(esp, 0x35A4D0);
    PUSH32(esp, 0x00143306u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00143306: ;
    esp = esp + 4;

loc_00143309: ;
    ecx = MEM32(esp);
    eax = 0x548D70;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00143320
 * Original: 0x00143320 - 0x0014337C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143320: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548E8C));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352F1E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00143369; /* jne: not equal / not zero */

loc_00143344: ;
    MEM32(0x548E8C) = MEM32(0x548E8C) | eax;
    ecx = 0x548E00;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014335Cu); RECOMP_ABI_CALL(0x00142C00u, sub_00142C00); /* call 0x00142C00 */

loc_0014335C: ;
    PUSH32(esp, 0x35A4E0);
    PUSH32(esp, 0x00143366u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00143366: ;
    esp = esp + 4;

loc_00143369: ;
    ecx = MEM32(esp);
    eax = 0x548E00;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00143380
 * Original: 0x00143380 - 0x001433DC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143380: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548F1C));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352F3E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_001433C9; /* jne: not equal / not zero */

loc_001433A4: ;
    MEM32(0x548F1C) = MEM32(0x548F1C) | eax;
    ecx = 0x548E90;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001433BCu); RECOMP_ABI_CALL(0x00142CA0u, sub_00142CA0); /* call 0x00142CA0 */

loc_001433BC: ;
    PUSH32(esp, 0x35A4F0);
    PUSH32(esp, 0x001433C6u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_001433C6: ;
    esp = esp + 4;

loc_001433C9: ;
    ecx = MEM32(esp);
    eax = 0x548E90;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001433E0
 * Original: 0x001433E0 - 0x0014343C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001433E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001433E0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548FAC));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352F5E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00143429; /* jne: not equal / not zero */

loc_00143404: ;
    MEM32(0x548FAC) = MEM32(0x548FAC) | eax;
    ecx = 0x548F20;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014341Cu); RECOMP_ABI_CALL(0x00142D40u, sub_00142D40); /* call 0x00142D40 */

loc_0014341C: ;
    PUSH32(esp, 0x35A500);
    PUSH32(esp, 0x00143426u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00143426: ;
    esp = esp + 4;

loc_00143429: ;
    ecx = MEM32(esp);
    eax = 0x548F20;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00143440
 * Original: 0x00143440 - 0x0014344D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143440(void)
{

loc_00143440: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x158) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143450
 * Original: 0x00143450 - 0x0014345B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143450(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143450: ;
    ecx = ecx + 0xAC;
    g_seh_ebp = ebp; sub_001302B0(); return; /* tail jmp 0x001302B0 */

}

/**
 * sub_00143460
 * Original: 0x00143460 - 0x00143467 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143460(void)
{

loc_00143460: ;
    MEM32(ecx) = 0x3DC9AC;
    esp += 4; return; /* ret */

}

/**
 * sub_00143470
 * Original: 0x00143470 - 0x0014348F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143470: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DC9AC;
    if (TEST_Z(_fa, _fb)) goto loc_00143489; /* je: equal / zero */

loc_00143480: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00143486u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00143486: ;
    esp = esp + 4;

loc_00143489: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143490
 * Original: 0x00143490 - 0x00143547 (183 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143490: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352F91);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_001434D1; /* je: equal / zero */

loc_001434BC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001434D1; /* jne: not equal / not zero */

loc_001434CC: ;
    PUSH32(esp, 0x001434D1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001434D1: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_001434F2; /* je: equal / zero */

loc_001434DD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001434F2; /* jne: not equal / not zero */

loc_001434ED: ;
    PUSH32(esp, 0x001434F2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001434F2: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00143513; /* je: equal / zero */

loc_001434FE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143513; /* jne: not equal / not zero */

loc_0014350E: ;
    PUSH32(esp, 0x00143513u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143513: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00143538; /* je: equal / zero */

loc_00143523: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143538; /* jne: not equal / not zero */

loc_00143533: ;
    PUSH32(esp, 0x00143538u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143538: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00143550
 * Original: 0x00143550 - 0x00143557 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143550(void)
{

loc_00143550: ;
    MEM32(ecx) = 0x3DC94C;
    esp += 4; return; /* ret */

}

/**
 * sub_00143560
 * Original: 0x00143560 - 0x0014357F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143560: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DC94C;
    if (TEST_Z(_fa, _fb)) goto loc_00143579; /* je: equal / zero */

loc_00143570: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00143576u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00143576: ;
    esp = esp + 4;

loc_00143579: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143580
 * Original: 0x00143580 - 0x0014358B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143580(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143580: ;
    ecx = MEM32(ecx + 0x130);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x78)); return; /* indirect tail jmp */

}

/**
 * sub_00143590
 * Original: 0x00143590 - 0x001435BB (43 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143590(void)
{

loc_00143590: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x12C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001435A7u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_001435A7: ;
    ecx = MEM32(esi + 0x130);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, 0x001435B6u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_001435B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001435C0
 * Original: 0x001435C0 - 0x001435DB (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001435C0(void)
{

loc_001435C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x148);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001435D0u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_001435D0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x001435D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001435D9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001435E0
 * Original: 0x001435E0 - 0x001435FA (26 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001435E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001435E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001435F7; /* je: equal / zero */

loc_001435E8: ;
    ecx = MEM32(ecx + 0x148);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002098A0(); return; /* tail jmp 0x002098A0 */

loc_001435F7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143600
 * Original: 0x00143600 - 0x00143675 (117 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143600: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352FAB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00143641; /* je: equal / zero */

loc_0014362C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143641; /* jne: not equal / not zero */

loc_0014363C: ;
    PUSH32(esp, 0x00143641u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143641: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00143666; /* je: equal / zero */

loc_00143651: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143666; /* jne: not equal / not zero */

loc_00143661: ;
    PUSH32(esp, 0x00143666u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143666: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00143680
 * Original: 0x00143680 - 0x00143694 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143680: ;
    eax = MEM32(ecx + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014368D; /* jne: not equal / not zero */

loc_0014368A: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0014368D: ;
    eax = ecx + 0x14C;
    esp += 4; return; /* ret */

}

/**
 * sub_001436A0
 * Original: 0x001436A0 - 0x001436DC (60 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001436A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001436A0: ;
    eax = MEM32(esp + 4);
    ecx = ecx + 0xAC;
    eax = eax - 0;
    if ((eax == 0)) goto loc_001436CF; /* je: equal / zero */

loc_001436AF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001436C2; /* je: equal / zero */

loc_001436B2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001436CF; /* jne: not equal / not zero */

loc_001436B5: ;
    MEM32(esp + 4) = 4;
    g_seh_ebp = ebp; sub_001300E0(); return; /* tail jmp 0x001300E0 */

loc_001436C2: ;
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_001300E0(); return; /* tail jmp 0x001300E0 */

loc_001436CF: ;
    MEM32(esp + 4) = 2;
    g_seh_ebp = ebp; sub_001300E0(); return; /* tail jmp 0x001300E0 */

}

/**
 * sub_001436E0
 * Original: 0x001436E0 - 0x001436EA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001436E0(void)
{

loc_001436E0: ;
    eax = MEM32(ecx + 0x148);
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001436F0
 * Original: 0x001436F0 - 0x00143711 (33 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001436F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001436F0: ;
    eax = MEM32(ecx + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014370E; /* je: equal / zero */

loc_001436FA: ;
    edx = MEM32(esp + 4);
    MEM32(eax + 0x30) = edx;
    eax = MEM32(ecx + 0x154);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x34) = ecx;

loc_0014370E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00143720
 * Original: 0x00143720 - 0x00143745 (37 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143720: ;
    eax = MEM32(ecx + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143742; /* je: equal / zero */

loc_0014372A: ;
    edx = MEM32(eax + 0x30);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0x154);
    edx = MEM32(ecx + 0x34);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;

loc_00143742: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00143750
 * Original: 0x00143750 - 0x00143764 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143750: ;
    eax = MEM32(ecx + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143761; /* je: equal / zero */

loc_0014375A: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x2C) = ecx;

loc_00143761: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143770
 * Original: 0x00143770 - 0x00143785 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143770(void)
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

loc_00143770: ;
    eax = MEM32(ecx + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143781; /* jne: not equal / not zero */

loc_0014377A: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    esp += 4; return; /* ret */

loc_00143781: ;
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00143790
 * Original: 0x00143790 - 0x001437CD (61 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143790: ;
    ecx = MEM32(ecx + 0x154);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001437CA; /* je: equal / zero */

loc_0014379A: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001437A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001437A2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001437C9; /* je: equal / zero */

loc_001437A8: ;
    ecx = MEM32(0x5BD8C8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001437B6u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001437B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001437C9; /* je: equal / zero */

loc_001437BA: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001437C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001437C9: ;
    POP32(esp, esi);

loc_001437CA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001437D0
 * Original: 0x001437D0 - 0x0014380F (63 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001437D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001437D0: ;
    ecx = MEM32(ecx + 0x154);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014380C; /* je: equal / zero */

loc_001437DA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001437E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001437E2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014380B; /* je: equal / zero */

loc_001437E8: ;
    ecx = MEM32(0x5BD8C8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001437F6u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001437F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014380B; /* je: equal / zero */

loc_001437FA: ;
    edx = MEM32(esp + 8);
    esi = esi + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00143808u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00143808: ;
    esp = esp + 8;

loc_0014380B: ;
    POP32(esp, esi);

loc_0014380C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143810
 * Original: 0x00143810 - 0x00143825 (21 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143810: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    MEM32(esp + 4) = eax;
    ecx = ecx + 0xAC;
    g_seh_ebp = ebp; sub_00130490(); return; /* tail jmp 0x00130490 */

}

/**
 * sub_00143830
 * Original: 0x00143830 - 0x00143965 (309 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143830(void)
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

loc_00143830: ;
    esp = esp - 0x48;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00143840u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00143840: ;
    eax = MEM32(esi + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x14);
    if (TEST_NZ(_fa, _fb)) goto loc_00143854; /* jne: not equal / not zero */

loc_00143850: ;
    eax = 0; /* xor self */
    goto loc_0014385A;

loc_00143854: ;
    eax = esi + 0x14C;

loc_0014385A: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x00143869u); RECOMP_ABI_CALL(0x00259CA0u, sub_00259CA0); /* call 0x00259CA0 */

loc_00143869: ;
    edx = esp + 0x10;
    ebp = esi + 0xAC;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0014387Bu); RECOMP_ABI_CALL(0x001300C0u, sub_001300C0); /* call 0x001300C0 */

loc_0014387B: ;
    eax = MEM32(esi + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143889; /* jne: not equal / not zero */

loc_00143885: ;
    ecx = 0; /* xor self */
    goto loc_0014388F;

loc_00143889: ;
    ecx = esi + 0x14C;

loc_0014388F: ;
    ecx = MEM32(ecx + 0xC);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0014390D; /* je: equal / zero */

loc_00143897: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0014395F; /* jne: not equal / not zero */

loc_0014389E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001438A5u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_001438A5: ;
    edi = eax;
    PUSH32(esp, 0x001438ACu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_001438AC: ;
    ebx = eax;
    eax = MEM32(esi + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001438BC; /* jne: not equal / not zero */

loc_001438B8: ;
    ecx = 0; /* xor self */
    goto loc_001438C2;

loc_001438BC: ;
    ecx = esi + 0x14C;

loc_001438C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x34);
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_001438D6; /* je: equal / zero */

loc_001438D0: ;
    eax = esi + 0x14C;

loc_001438D6: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(edi);
    eax = ecx;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001438EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001438EF: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001438FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001438FA: ;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00143905u); RECOMP_ABI_CALL(0x00130150u, sub_00130150); /* call 0x00130150 */

loc_00143905: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_0014390D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143915; /* jne: not equal / not zero */

loc_00143911: ;
    ecx = 0; /* xor self */
    goto loc_0014391B;

loc_00143915: ;
    ecx = esi + 0x14C;

loc_0014391B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x2C);
    MEM32(esp + 0xC) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014392D; /* jne: not equal / not zero */

loc_00143929: ;
    ecx = 0; /* xor self */
    goto loc_00143933;

loc_0014392D: ;
    ecx = esi + 0x14C;

loc_00143933: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x34);
    MEM32(esp + 8) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00143947; /* je: equal / zero */

loc_00143941: ;
    eax = esi + 0x14C;

loc_00143947: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0014395Fu); RECOMP_ABI_CALL(0x00130110u, sub_00130110); /* call 0x00130110 */

loc_0014395F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00143970
 * Original: 0x00143970 - 0x001439AC (60 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143970: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001439A7; /* je: equal / zero */

loc_0014397C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001439A5; /* jle: less or equal (signed <=) */

loc_00143987: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x148);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001439A0u); RECOMP_ABI_CALL(0x00209950u, sub_00209950); /* call 0x00209950 */

loc_001439A0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00143987; /* jl: less (signed <) */

loc_001439A5: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001439A7: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001439B0
 * Original: 0x001439B0 - 0x001439CF (31 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001439B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001439B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001439CB; /* je: equal / zero */

loc_001439B9: ;
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001439C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001439C3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001439CBu); RECOMP_ABI_CALL(0x00133E30u, sub_00133E30); /* call 0x00133E30 */

loc_001439CB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001439D0
 * Original: 0x001439D0 - 0x001439E0 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001439D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001439D0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001439DD; /* je: equal / zero */

loc_001439D8: ;
    PUSH32(esp, 0x001439DDu); RECOMP_ABI_CALL(0x00133EC0u, sub_00133EC0); /* call 0x00133EC0 */

loc_001439DD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001439E0
 * Original: 0x001439E0 - 0x00143B03 (291 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001439E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001439E0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352FC8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x148);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00143AEF; /* jge: greater or equal (signed >=) */

loc_00143A0F: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ebx * 4);
    PUSH32(esp, 0x00143A1Au); RECOMP_ABI_CALL(0x00259BD0u, sub_00259BD0); /* call 0x00259BD0 */

loc_00143A1A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00143A27; /* je: equal / zero */

loc_00143A24: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00143A27: ;
    ecx = MEM32(0x5BDB04);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00143A3Du); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00143A3D: ;
    ecx = MEM32(esi + 0x154);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143A4F; /* je: equal / zero */

loc_00143A47: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00143A4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00143A4F: ;
    eax = MEM32(esi + 0x148);
    MEM32(esi + 0x14C) = ebx;
    eax = MEM32(eax + 0x10);
    ebx = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143A68; /* je: equal / zero */

loc_00143A65: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00143A68: ;
    ecx = MEM32(esi + 0x150);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143A87; /* je: equal / zero */

loc_00143A72: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143A87; /* jne: not equal / not zero */

loc_00143A82: ;
    PUSH32(esp, 0x00143A87u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143A87: ;
    ecx = ebx;
    MEM32(esi + 0x150) = ebx;
    PUSH32(esp, 0x00143A94u); RECOMP_ABI_CALL(0x00259BD0u, sub_00259BD0); /* call 0x00259BD0 */

loc_00143A94: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143A9D; /* je: equal / zero */

loc_00143A9A: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00143A9D: ;
    ecx = MEM32(esi + 0x154);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143ABC; /* je: equal / zero */

loc_00143AA7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143ABC; /* jne: not equal / not zero */

loc_00143AB7: ;
    PUSH32(esp, 0x00143ABCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143ABC: ;
    ecx = ebx;
    MEM32(esi + 0x154) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00143ACCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00143ACC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00143AEF; /* je: equal / zero */

loc_00143AD8: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143AEF; /* jne: not equal / not zero */

loc_00143AE8: ;
    ecx = edi;
    PUSH32(esp, 0x00143AEFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143AEF: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143B10
 * Original: 0x00143B10 - 0x00143C0D (253 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143B10: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143B3B; /* jne: not equal / not zero */

loc_00143B20: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00143C04; /* jge: greater or equal (signed >=) */

loc_00143B2F: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143B20; /* je: equal / zero */

loc_00143B3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143B48; /* jne: not equal / not zero */

loc_00143B42: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_00143B48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143B52; /* jne: not equal / not zero */

loc_00143B4C: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_00143B52: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143B5C; /* jne: not equal / not zero */

loc_00143B56: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_00143B5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143B67; /* jne: not equal / not zero */

loc_00143B60: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143B60; /* je: equal / zero */

loc_00143B67: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00143C04; /* jge: greater or equal (signed >=) */

loc_00143B70: ;
    PUSH32(esp, esi);
    esi = ecx;

loc_00143B73: ;
    ecx = MEM32(ebx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143B8F; /* je: equal / zero */

loc_00143B7A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143B8F; /* jne: not equal / not zero */

loc_00143B8A: ;
    PUSH32(esp, 0x00143B8Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143B8F: ;
    edx = esi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00143C03; /* jge: greater or equal (signed >=) */

loc_00143B97: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143BC7; /* jne: not equal / not zero */

loc_00143BAA: ;
    /* nop */

loc_00143BB0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00143C03; /* jge: greater or equal (signed >=) */

loc_00143BBB: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143BB0; /* je: equal / zero */

loc_00143BC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143BD4; /* jne: not equal / not zero */

loc_00143BCE: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00143BD4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143BDE; /* jne: not equal / not zero */

loc_00143BD8: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00143BDE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143BE8; /* jne: not equal / not zero */

loc_00143BE2: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00143BE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00143BF7; /* jne: not equal / not zero */

loc_00143BEC: ;
    /* nop */

loc_00143BF0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00143BF0; /* je: equal / zero */

loc_00143BF7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00143C03; /* jge: greater or equal (signed >=) */

loc_00143BFC: ;
    esi = edx;
    goto loc_00143B73;

loc_00143C03: ;
    POP32(esp, esi);

loc_00143C04: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00143C10
 * Original: 0x00143C10 - 0x00143CB6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143C10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353001);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00143C35u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00143C35: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00143C41u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00143C41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00143C49u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00143C49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00143C4Fu); RECOMP_ABI_CALL(0x00287860u, sub_00287860); /* call 0x00287860 */

loc_00143C4F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00143C63u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00143C63: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00143C6Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00143C6B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00143C7B; /* je: equal / zero */

loc_00143C78: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00143C7B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00143CA3; /* je: equal / zero */

loc_00143C8C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143CA3; /* jne: not equal / not zero */

loc_00143C9C: ;
    ecx = esi;
    PUSH32(esp, 0x00143CA3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143CA3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00143CC0
 * Original: 0x00143CC0 - 0x00143D66 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143CC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353001);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00143CE5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00143CE5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00143CF1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00143CF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00143CF9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00143CF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00143CFFu); RECOMP_ABI_CALL(0x00286270u, sub_00286270); /* call 0x00286270 */

loc_00143CFF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00143D13u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00143D13: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00143D1Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00143D1B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00143D2B; /* je: equal / zero */

loc_00143D28: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00143D2B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00143D53; /* je: equal / zero */

loc_00143D3C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143D53; /* jne: not equal / not zero */

loc_00143D4C: ;
    ecx = esi;
    PUSH32(esp, 0x00143D53u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143D53: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00143D70
 * Original: 0x00143D70 - 0x00143E16 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143D70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353001);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00143D95u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00143D95: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00143DA1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00143DA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00143DA9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00143DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00143DAFu); RECOMP_ABI_CALL(0x00281470u, sub_00281470); /* call 0x00281470 */

loc_00143DAF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00143DC3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00143DC3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00143DCBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00143DCB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00143DDB; /* je: equal / zero */

loc_00143DD8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00143DDB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00143E03; /* je: equal / zero */

loc_00143DEC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143E03; /* jne: not equal / not zero */

loc_00143DFC: ;
    ecx = esi;
    PUSH32(esp, 0x00143E03u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143E03: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00143E20
 * Original: 0x00143E20 - 0x00143EC6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143E20: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353001);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00143E45u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00143E45: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00143E51u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00143E51: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00143E59u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00143E59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00143E5Fu); RECOMP_ABI_CALL(0x00297570u, sub_00297570); /* call 0x00297570 */

loc_00143E5F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00143E73u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00143E73: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00143E7Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00143E7B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00143E8B; /* je: equal / zero */

loc_00143E88: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00143E8B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00143EB3; /* je: equal / zero */

loc_00143E9C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143EB3; /* jne: not equal / not zero */

loc_00143EAC: ;
    ecx = esi;
    PUSH32(esp, 0x00143EB3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143EB3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00143ED0
 * Original: 0x00143ED0 - 0x00143EE0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143ED0(void)
{

loc_00143ED0: ;
    PUSH32(esp, 0x1A59F0);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00143EDFu); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00143EDF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00143EE0
 * Original: 0x00143EE0 - 0x001440F8 (536 bytes, 169 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143EE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143EE0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x144);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00143F34; /* jle: less or equal (signed <=) */

loc_00143EF5: ;
    edi = esi + 0x134;
    ebx = 1;

loc_00143F00: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00143F0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00143F0A: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x20);
    MEM32(ecx + 0xC) = 0;
    edx = MEM32(edi);
    eax = MEM32(edx + 0x20);
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | ebx;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x20);
    MEM32(ecx + 0x4C) = ebx;
    eax = MEM32(esi + 0x144);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00143F00; /* jl: less (signed <) */

loc_00143F34: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00143F41; /* je: equal / zero */

loc_00143F3C: ;
    edx = esi + 0x1C;
    goto loc_00143F43;

loc_00143F41: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */

loc_00143F43: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    ecx = MEM32(esi + 0x14);
    MEM8(esp + 0x24) = LO8(eax);
    ebx = MEM32(esp + 0x24);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    edi = esi + 0xAC;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00143F6Au); RECOMP_ABI_CALL(0x001302D0u, sub_001302D0); /* call 0x001302D0 */

loc_00143F6A: ;
    ebx = MEM32(esi + 0x118);
    ecx = MEM32(esi + 0x11C);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(eax)) >> 32) & 1);
    ebx = ebx + eax;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x11C) = ecx;
    ecx = edi;
    MEM32(esi + 0x118) = ebx;
    PUSH32(esp, 0x00143F8Du); RECOMP_ABI_CALL(0x00130100u, sub_00130100); /* call 0x00130100 */

loc_00143F8D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00144017; /* je: equal / zero */

loc_00143F97: ;
    ecx = MEM32(esi + 0x128);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00143FA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00143FA2: ;
    ebp = eax;
    ebx = edx;
    PUSH32(esp, 0x00143FABu); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00143FAB: ;
    edx = MEM32(eax);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00143FBAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00143FBA: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x20) = edx;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00143FE0; /* je: equal / zero */

loc_00143FCA: ;
    edx = MEM32(eax + 4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00143FE0; /* jne: not equal / not zero */

loc_00143FDB: ;
    PUSH32(esp, 0x00143FE0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00143FE0: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00143FECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00143FEC: ;
    ecx = MEM32(esi + 0x128);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00143FF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00143FF7: ;
    ecx = MEM32(esi + 0x120);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebp));
    eax = eax - ebp;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x124);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x120) = ecx;
    MEM32(esi + 0x124) = eax;

loc_00144017: ;
    eax = MEM32(esi + 0x144);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x24) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001440EE; /* jle: less or equal (signed <=) */

loc_0014402D: ;
    ebp = esi + 0x134;

loc_00144033: ;
    eax = MEM32(ebp);
    edi = MEM32(eax + 0x20);
    ebx = MEM32(edi);
    ecx = esi + 0xAC;
    PUSH32(esp, 0x00144046u); RECOMP_ABI_CALL(0x00130460u, sub_00130460); /* call 0x00130460 */

loc_00144046: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x54); PUSH32(esp, 0x0014404Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014404C: ;
    ecx = MEM32(esi + 0x128);
    edx = MEM32(ecx);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00144059u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144059: ;
    ebx = eax;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x00144064u); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00144064: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00144073u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144073: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00144099; /* je: equal / zero */

loc_00144081: ;
    edx = MEM32(eax + 4);
    ecx = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144099; /* jne: not equal / not zero */

loc_00144092: ;
    ecx = eax;
    PUSH32(esp, 0x00144099u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144099: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001440A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001440A5: ;
    ecx = MEM32(esi + 0x128);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001440B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001440B0: ;
    edi = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x120);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    ebx = MEM32(esi + 0x124);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(esp + 0x24);
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x120) = ecx;
    MEM32(esi + 0x124) = ebx;
    ecx = MEM32(esi + 0x144);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00144033; /* jl: less (signed <) */

loc_001440EE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00144100
 * Original: 0x00144100 - 0x0014410C (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144100(void)
{

loc_00144100: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014410Bu); RECOMP_ABI_CALL(0x00143EE0u, sub_00143EE0); /* call 0x00143EE0 */

loc_0014410B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00144110
 * Original: 0x00144110 - 0x00144176 (102 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144110(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144110: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x118) = edi;
    MEM32(esi + 0x11C) = edi;
    MEM32(esi + 0x120) = edi;
    MEM32(esi + 0x124) = edi;
    PUSH32(esp, 0x00144133u); RECOMP_ABI_CALL(0x00143830u, sub_00143830); /* call 0x00143830 */

loc_00144133: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0014413Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014413A: ;
    _fa = (uint32_t)(MEM32(esi + 0x144)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x144), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00144169; /* jle: less or equal (signed <=) */

loc_00144142: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x134;
    /* nop */

loc_00144150: ;
    ecx = MEM32(ebx);
    ecx = MEM32(ecx + 0x20);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0014415Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014415A: ;
    eax = MEM32(esi + 0x144);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00144150; /* jl: less (signed <) */

loc_00144168: ;
    POP32(esp, ebx);

loc_00144169: ;
    POP32(esp, edi);
    ecx = esi + 0xAC;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00130470(); return; /* tail jmp 0x00130470 */

}

/**
 * sub_00144180
 * Original: 0x00144180 - 0x001441C7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144180(void)
{

loc_00144180: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014418Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014418F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001441A2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_001441A2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001441B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001441B4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001441BFu); RECOMP_ABI_CALL(0x00143C10u, sub_00143C10); /* call 0x00143C10 */

loc_001441BF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001441D0
 * Original: 0x001441D0 - 0x00144217 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001441D0(void)
{

loc_001441D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x001441DFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_001441DF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001441F2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_001441F2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00144204u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144204: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014420Fu); RECOMP_ABI_CALL(0x00143CC0u, sub_00143CC0); /* call 0x00143CC0 */

loc_0014420F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00144220
 * Original: 0x00144220 - 0x00144267 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144220(void)
{

loc_00144220: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014422Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014422F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00144242u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00144242: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00144254u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144254: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014425Fu); RECOMP_ABI_CALL(0x00143D70u, sub_00143D70); /* call 0x00143D70 */

loc_0014425F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00144270
 * Original: 0x00144270 - 0x001442B7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144270(void)
{

loc_00144270: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014427Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014427F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00144292u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00144292: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001442A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001442A4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001442AFu); RECOMP_ABI_CALL(0x00143E20u, sub_00143E20); /* call 0x00143E20 */

loc_001442AF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001442C0
 * Original: 0x001442C0 - 0x00144313 (83 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001442C0(void)
{

loc_001442C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353018);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DC9C0;
    PUSH32(esp, 0x1A59F0);
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x001442FDu); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_001442FD: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DC9AC;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00144320
 * Original: 0x00144320 - 0x0014433E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144320: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00144328u); RECOMP_ABI_CALL(0x001442C0u, sub_001442C0); /* call 0x001442C0 */

loc_00144328: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00144338; /* je: equal / zero */

loc_0014432F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00144335u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00144335: ;
    esp = esp + 4;

loc_00144338: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144340
 * Original: 0x00144340 - 0x001444D0 (400 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144340: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353050);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00144367u); RECOMP_ABI_CALL(0x0013AC10u, sub_0013AC10); /* call 0x0013AC10 */

loc_00144367: ;
    esp = esp + 8;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x0014437Fu); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014437F: ;
    eax = esp + 4;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014438Bu); RECOMP_ABI_CALL(0x00144180u, sub_00144180); /* call 0x00144180 */

loc_0014438B: ;
    esp = esp + 8;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x30) = 0x42800000;
    edx = MEM32(esp + 4);
    MEM32(edx + 0x34) = 0x45800000;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x2C) = 0x42700000;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    MEM8(esp + 0x20) = 1;
    PUSH32(esp, 0x001443C2u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_001443C2: ;
    edx = esp + 0x10;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001443CEu); RECOMP_ABI_CALL(0x001441D0u, sub_001441D0); /* call 0x001441D0 */

loc_001443CE: ;
    eax = esp + 0x10;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEM8(esp + 0x2C) = 2;
    PUSH32(esp, 0x001443DFu); RECOMP_ABI_CALL(0x00144220u, sub_00144220); /* call 0x00144220 */

loc_001443DF: ;
    esp = esp + 0x10;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    MEM8(esp + 0x20) = 3;
    PUSH32(esp, 0x001443F5u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_001443F5: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00144403u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00144403: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00144411u); RECOMP_ABI_CALL(0x00259B80u, sub_00259B80); /* call 0x00259B80 */

loc_00144411: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x148);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00144421u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00144421: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x1C) = 2;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00144448; /* je: equal / zero */

loc_00144430: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00144448; /* jne: not equal / not zero */

loc_00144443: ;
    PUSH32(esp, 0x00144448u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144448: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x1C) = 1;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0014446F; /* je: equal / zero */

loc_00144457: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014446F; /* jne: not equal / not zero */

loc_0014446A: ;
    PUSH32(esp, 0x0014446Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014446F: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x1C) = 0;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00144496; /* je: equal / zero */

loc_0014447E: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00144496; /* jne: not equal / not zero */

loc_00144491: ;
    PUSH32(esp, 0x00144496u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144496: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001444C0; /* je: equal / zero */

loc_001444A8: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_001444C0; /* jne: not equal / not zero */

loc_001444BB: ;
    PUSH32(esp, 0x001444C0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001444C0: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001444E0
 * Original: 0x001444E0 - 0x001446C4 (484 bytes, 142 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001444E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001444E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3530EE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x3DC9D4;
    ecx = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x14) = 0xA;
    if (CMP_EQ(_fa, _fb)) goto loc_0014452A; /* je: equal / zero */

loc_00144515: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014452A; /* jne: not equal / not zero */

loc_00144525: ;
    PUSH32(esp, 0x0014452Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014452A: ;
    MEM32(esi + 4) = ebx;
    ecx = MEM32(esi + 0x148);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014454C; /* je: equal / zero */

loc_00144537: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014454C; /* jne: not equal / not zero */

loc_00144547: ;
    PUSH32(esp, 0x0014454Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014454C: ;
    MEM32(esi + 0x148) = ebx;
    ecx = MEM32(esi + 0x154);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144571; /* je: equal / zero */

loc_0014455C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144571; /* jne: not equal / not zero */

loc_0014456C: ;
    PUSH32(esp, 0x00144571u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144571: ;
    MEM32(esi + 0x154) = ebx;
    ecx = MEM32(esi + 0x150);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144596; /* je: equal / zero */

loc_00144581: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144596; /* jne: not equal / not zero */

loc_00144591: ;
    PUSH32(esp, 0x00144596u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144596: ;
    ecx = esi + 0x14C;
    MEM32(esi + 0x150) = ebx;
    MEM8(esp + 0x14) = 9;
    PUSH32(esp, 0x001445ACu); RECOMP_ABI_CALL(0x00143600u, sub_00143600); /* call 0x00143600 */

loc_001445AC: ;
    ecx = MEM32(esi + 0x148);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x14) = 8;
    if (CMP_EQ(_fa, _fb)) goto loc_001445D0; /* je: equal / zero */

loc_001445BB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001445D0; /* jne: not equal / not zero */

loc_001445CB: ;
    PUSH32(esp, 0x001445D0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001445D0: ;
    ecx = esi + 0x134;
    MEM8(esp + 0x14) = 7;
    PUSH32(esp, 0x001445E0u); RECOMP_ABI_CALL(0x00143B10u, sub_00143B10); /* call 0x00143B10 */

loc_001445E0: ;
    ecx = MEM32(esi + 0x130);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x14) = 6;
    if (CMP_EQ(_fa, _fb)) goto loc_00144604; /* je: equal / zero */

loc_001445EF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144604; /* jne: not equal / not zero */

loc_001445FF: ;
    PUSH32(esp, 0x00144604u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144604: ;
    ecx = MEM32(esi + 0x12C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x14) = 5;
    if (CMP_EQ(_fa, _fb)) goto loc_00144628; /* je: equal / zero */

loc_00144613: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144628; /* jne: not equal / not zero */

loc_00144623: ;
    PUSH32(esp, 0x00144628u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144628: ;
    ecx = MEM32(esi + 0x128);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x14) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0014464C; /* je: equal / zero */

loc_00144637: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014464C; /* jne: not equal / not zero */

loc_00144647: ;
    PUSH32(esp, 0x0014464Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014464C: ;
    ecx = esi + 0xAC;
    MEM8(esp + 0x14) = 3;
    PUSH32(esp, 0x0014465Cu); RECOMP_ABI_CALL(0x00143490u, sub_00143490); /* call 0x00143490 */

loc_0014465C: ;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x14) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00144680; /* je: equal / zero */

loc_0014466B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144680; /* jne: not equal / not zero */

loc_0014467B: ;
    PUSH32(esp, 0x00144680u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144680: ;
    ecx = esi + 0x1C;
    MEM8(esp + 0x14) = 1;
    PUSH32(esp, 0x0014468Du); RECOMP_ABI_CALL(0x001442C0u, sub_001442C0); /* call 0x001442C0 */

loc_0014468D: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM8(esp + 0x14) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001446AD; /* je: equal / zero */

loc_00144698: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001446AD; /* jne: not equal / not zero */

loc_001446A8: ;
    PUSH32(esp, 0x001446ADu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001446AD: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x3DC94C;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001446D0
 * Original: 0x001446D0 - 0x001446D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001446D0(void)
{

loc_001446D0: ;
    eax = MEM32(ecx + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001446E0
 * Original: 0x001446E0 - 0x001446E4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001446E0(void)
{

loc_001446E0: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_001446F0
 * Original: 0x001446F0 - 0x001446FA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001446F0(void)
{

loc_001446F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144700
 * Original: 0x00144700 - 0x0014471C (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144700(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00144700: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    esi = ecx;
    PUSH32(esp, 0x00144712u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00144712: ;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00144720
 * Original: 0x00144720 - 0x00144725 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144720(void)
{

loc_00144720: ;
    MEM8(ecx + 0x18) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00144730
 * Original: 0x00144730 - 0x00144893 (355 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144730: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3530EE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    eax = esi + 4;
    PUSH32(esp, 3);
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ebx;
    MEM32(esi) = 0x3DC9D4;
    PUSH32(esp, 0x00144767u); RECOMP_ABI_CALL(0x0013E170u, sub_0013E170); /* call 0x0013E170 */

loc_00144767: ;
    esp = esp + 8;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    MEM8(esp + 0x20) = 1;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 0x18) = 1;
    MEM8(esi + 0x19) = 1;
    PUSH32(esp, 0x0014478Du); RECOMP_ABI_CALL(0x00144C60u, sub_00144C60); /* call 0x00144C60 */

loc_0014478D: ;
    ecx = esi + 0xA8;
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    MEM8(esp + 0x24) = 2;
    PUSH32(esp, 0x001447A0u); RECOMP_ABI_CALL(0x00132410u, sub_00132410); /* call 0x00132410 */

loc_001447A0: ;
    esp = esp + 8;
    ecx = esi + 0xAC;
    MEM8(esp + 0x1C) = 3;
    PUSH32(esp, 0x001447B3u); RECOMP_ABI_CALL(0x00130710u, sub_00130710); /* call 0x00130710 */

loc_001447B3: ;
    eax = esi + 0x128;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    MEM8(esp + 0x24) = 4;
    PUSH32(esp, 0x001447C6u); RECOMP_ABI_CALL(0x0011BE90u, sub_0011BE90); /* call 0x0011BE90 */

loc_001447C6: ;
    edi = esi + 0x12C;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    MEM8(esp + 0x2C) = 5;
    PUSH32(esp, 0x001447D9u); RECOMP_ABI_CALL(0x00144270u, sub_00144270); /* call 0x00144270 */

loc_001447D9: ;
    ebp = esi + 0x130;
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    MEM8(esp + 0x34) = 6;
    PUSH32(esp, 0x001447ECu); RECOMP_ABI_CALL(0x0013DFE0u, sub_0013DFE0); /* call 0x0013DFE0 */

loc_001447EC: ;
    MEM32(esi + 0x140) = ebx;
    MEM32(esi + 0x144) = ebx;
    edx = esi + 0x148;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    MEM8(esp + 0x3C) = 8;
    PUSH32(esp, 0x0014480Bu); RECOMP_ABI_CALL(0x00131030u, sub_00131030); /* call 0x00131030 */

loc_0014480B: ;
    esp = esp + 0x20;
    MEM32(esi + 0x150) = ebx;
    MEM32(esi + 0x154) = ebx;
    ecx = MEM32(edi);
    eax = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x20);
    MEM8(esp + 0x20) = 0xA;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x00144831u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00144831: ;
    edx = MEM32(ebp);
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00144841u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00144841: ;
    edi = MEM32(edi);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0014484Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014484C: ;
    ebp = MEM32(ebp);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00144858u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144858: ;
    ecx = esi;
    MEM8(esi + 0x19) = 1;
    PUSH32(esp, 0x00144863u); RECOMP_ABI_CALL(0x00144340u, sub_00144340); /* call 0x00144340 */

loc_00144863: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0014486Bu); RECOMP_ABI_CALL(0x001439E0u, sub_001439E0); /* call 0x001439E0 */

loc_0014486B: ;
    ecx = MEM32(esi + 0x128);
    MEM32(esi + 0x158) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0014487Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014487C: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001448A0
 * Original: 0x001448A0 - 0x001448BE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001448A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001448A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001448A8u); RECOMP_ABI_CALL(0x001444E0u, sub_001444E0); /* call 0x001444E0 */

loc_001448A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001448B8; /* je: equal / zero */

loc_001448AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001448B5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001448B5: ;
    esp = esp + 4;

loc_001448B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001448C0
 * Original: 0x001448C0 - 0x00144903 (67 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001448C0(void)
{

loc_001448C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x48);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ecx + 0x18);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, esi);
    edx = edx + MEM32(ecx + 0x44);
    esi = MEM32(ecx + 0x60);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(ecx + 0x64);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx + esi;
    MEM32(ecx + 0x2C) = edx;
    edx = MEM32(ecx + 0x80);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx + MEM32(ecx + 0x7C);
    MEM8(ecx + 0x20) = 1;
    MEM32(ecx + 0x24) = 0;
    MEM32(ecx + 0x30) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144910
 * Original: 0x00144910 - 0x0014497F (111 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144910: ;
    eax = MEM32(ecx + 0x24);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    edx = edx + eax + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014497B; /* jge: greater or equal (signed >=) */

loc_00144922: ;
    xml1_graphics_menu_vertex_owner(MEM32(ecx + 0x28));
    edx = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x24) = eax;
    esi = MEM32(edx);
    eax = MEM32(ecx + 0x28);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 0x30);
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    edx = MEM32(edx + 4);
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x2C);
    edx = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    eax = MEM32(ecx + 0x48);
    edx = MEM32(ecx + 0x28);
    esi = MEM32(ecx + 0x2C);
    edx = edx + eax;
    eax = MEM32(ecx + 0x80);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(ecx + 0x64);
    esi = esi + edx;
    edx = MEM32(ecx + 0x30);
    edx = edx + eax;
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = edx;

loc_0014497B: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00144980
 * Original: 0x00144980 - 0x001449F3 (115 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144980(void)
{

loc_00144980: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x34;
    edi = 0; /* xor self */
    MEM32(eax + 4) = edi;
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x14);
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = ecx;
    ecx = MEM32(esi + edx * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001449A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001449A6: ;
    MEM32(esi + 0x54) = 2;
    MEM32(esi + 0x50) = edi;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x14);
    eax = esi + 0x50;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x5C) = ecx;
    ecx = MEM32(esi + edx * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001449CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001449CB: ;
    MEM32(esi + 0x70) = 3;
    MEM32(esi + 0x6C) = edi;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x14);
    eax = esi + 0x6C;
    MEM32(esi + 0x74) = edi;
    MEM32(esi + 0x78) = ecx;
    ecx = MEM32(esi + edx * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001449F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001449F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00144A00
 * Original: 0x00144A00 - 0x00144A3B (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144A00(void)
{

loc_00144A00: ;
    { unsigned pc_array=MEM32(ecx+MEM32(ecx+0x14)*4+4);
      xml1_graphics_menu_writer(pc_array,MEM32(MEM32(pc_array)+0x68),(const unsigned *)((uintptr_t)g_xbox_mem_offset+pc_array)); }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + eax * 4 + 4);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00144A15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144A15: ;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(esi + ecx * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x50;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00144A27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144A27: ;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(esi + ecx * 4 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = esi + 0x6C;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00144A39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144A39: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00144A40
 * Original: 0x00144A40 - 0x00144AE6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144A40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353121);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00144A65u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00144A65: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00144A71u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00144A71: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00144A79u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00144A79: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00144A7Fu); RECOMP_ABI_CALL(0x00297A00u, sub_00297A00); /* call 0x00297A00 */

loc_00144A7F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00144A93u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00144A93: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00144A9Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00144A9B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00144AAB; /* je: equal / zero */

loc_00144AA8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00144AAB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00144AD3; /* je: equal / zero */

loc_00144ABC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144AD3; /* jne: not equal / not zero */

loc_00144ACC: ;
    ecx = esi;
    PUSH32(esp, 0x00144AD3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144AD3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00144AF0
 * Original: 0x00144AF0 - 0x00144B00 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144AF0(void)
{

loc_00144AF0: ;
    PUSH32(esp, 0x1A59F0);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00144AFFu); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00144AFF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00144B00
 * Original: 0x00144B00 - 0x00144B47 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144B00(void)
{

loc_00144B00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x00144B0Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_00144B0F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00144B22u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00144B22: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00144B34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144B34: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00144B3Fu); RECOMP_ABI_CALL(0x00144A40u, sub_00144A40); /* call 0x00144A40 */

loc_00144B3F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00144B50
 * Original: 0x00144B50 - 0x00144C55 (261 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144B50: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353140);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00144C43; /* jne: not equal / not zero */

loc_00144B76: ;
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x00144B91u); RECOMP_ABI_CALL(0x00144B00u, sub_00144B00); /* call 0x00144B00 */

loc_00144B91: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00144BA5; /* je: equal / zero */

loc_00144BA2: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00144BA5: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00144BC0; /* je: equal / zero */

loc_00144BAB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144BC0; /* jne: not equal / not zero */

loc_00144BBB: ;
    PUSH32(esp, 0x00144BC0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144BC0: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi) = edi;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = edi;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00144BE9; /* je: equal / zero */

loc_00144BD3: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144BE9; /* jne: not equal / not zero */

loc_00144BE4: ;
    PUSH32(esp, 0x00144BE9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144BE9: ;
    MEM32(esp + 0xC) = 0x200;

loc_00144BF1: ;
    ecx = esp + 8;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00144BFDu); RECOMP_ABI_CALL(0x0013E120u, sub_0013E120); /* call 0x0013E120 */

loc_00144BFD: ;
    esp = esp + 8;
    edx = MEM32(esp + 8);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 1;
    PUSH32(esp, 0x00144C14u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00144C14: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = edi;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00144C38; /* je: equal / zero */

loc_00144C22: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144C38; /* jne: not equal / not zero */

loc_00144C33: ;
    PUSH32(esp, 0x00144C38u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144C38: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00144BF1; /* jne: not equal / not zero */

loc_00144C3E: ;
    MEM8(esi + 0x10) = 1;
    POP32(esp, edi);

loc_00144C43: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00144C60
 * Original: 0x00144C60 - 0x00144D85 (293 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144C60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144C60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35316B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x1A59F0);
    PUSH32(esp, 0x27080);
    ebp = 2;
    PUSH32(esp, ebp);
    PUSH32(esp, 4);
    edi = esi + 4;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = ebx;
    MEM32(esi) = 0x3DC9C0;
    PUSH32(esp, 0x00144CA9u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_00144CA9: ;
    eax = MEM32(esp + 0x2C);
    ecx = esi + 0x34;
    MEM8(esp + 0x24) = 1;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebp;
    MEM8(esi + 0x20) = LO8(ebx);
    MEM32(esi + 0x24) = ebx;
    PUSH32(esp, 0x00144CCCu); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_00144CCC: ;
    ecx = esi + 0x50;
    PUSH32(esp, 0x00144CD4u); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_00144CD4: ;
    ecx = esi + 0x6C;
    PUSH32(esp, 0x00144CDCu); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_00144CDC: ;
    MEM32(esp + 0x14) = 0x10005;
    MEM32(esp + 0x2C) = ebp;

loc_00144CE8: ;
    ecx = esp + 0x10;
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00144CF4u); RECOMP_ABI_CALL(0x0013E0D0u, sub_0013E0D0); /* call 0x0013E0D0 */

loc_00144CF4: ;
    esp = esp + 8;
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM8(esp + 0x24) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00144D05; /* je: equal / zero */

loc_00144D02: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00144D05: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144D20; /* je: equal / zero */

loc_00144D0B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144D20; /* jne: not equal / not zero */

loc_00144D1B: ;
    PUSH32(esp, 0x00144D20u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144D20: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi) = ebp;
    MEM8(esp + 0x24) = 1;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00144D49; /* je: equal / zero */

loc_00144D31: ;
    ebp = MEM32(eax + 4);
    eax = eax + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_00144D49; /* jne: not equal / not zero */

loc_00144D44: ;
    PUSH32(esp, 0x00144D49u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144D49: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00144D5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144D5C: ;
    eax = MEM32(esp + 0x2C);
    edi = edi + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) goto loc_00144CE8; /* jne: not equal / not zero */

loc_00144D6E: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144D90
 * Original: 0x00144D90 - 0x00144E0C (124 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144D90: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x548FC4));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35318E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00144DF7; /* jne: not equal / not zero */

loc_00144DB5: ;
    MEM32(0x548FC4) = MEM32(0x548FC4) | eax;
    PUSH32(esp, 0x1A59F0);
    PUSH32(esp, 0x27080);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x548FB0);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x00144DD8u); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_00144DD8: ;
    PUSH32(esp, 0x35A510);
    MEM32(0x548FB8) = ebx;
    MEM32(0x548FBC) = ebx;
    MEM8(0x548FC0) = LO8(ebx);
    PUSH32(esp, 0x00144DF4u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00144DF4: ;
    esp = esp + 4;

loc_00144DF7: ;
    ecx = MEM32(esp + 4);
    eax = 0x548FB0;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00144E10
 * Original: 0x00144E10 - 0x00144F42 (306 bytes, 104 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144E10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144E10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3531A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x24), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00144F20; /* jl: less (signed <) */

loc_00144E33: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00144E39u); RECOMP_ABI_CALL(0x00144D90u, sub_00144D90); /* call 0x00144D90 */

loc_00144E39: ;
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00144E49; /* jne: not equal / not zero */

loc_00144E42: ;
    ecx = esi;
    PUSH32(esp, 0x00144E49u); RECOMP_ABI_CALL(0x00144B50u, sub_00144B50); /* call 0x00144B50 */

loc_00144E49: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00144E57; /* jb: below (unsigned <) */

loc_00144E53: ;
    esi = 0; /* xor self */
    goto loc_00144E68;

loc_00144E57: ;
    ecx = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    esi = MEM32(esi + ecx * 4);
    edx = MEM32(esi + 0x10);
    esi = MEM32(edx + eax * 4 + -4);

loc_00144E68: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00144E73; /* je: equal / zero */

loc_00144E70: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00144E73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00144EFC; /* je: equal / zero */

loc_00144E7F: ;
    ecx = MEM32(edi + 0x88);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00144E8Cu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00144E8C: ;
    eax = MEM32(edi + 0x14);
    ebp = MEM32(edi + eax * 4 + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00144E9A; /* je: equal / zero */

loc_00144E97: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00144E9A: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00144EB6; /* je: equal / zero */

loc_00144EA1: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144EB6; /* jne: not equal / not zero */

loc_00144EB1: ;
    PUSH32(esp, 0x00144EB6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144EB6: ;
    MEM32(esi + 0xC) = ebp;
    eax = MEM32(edi + 0x1C);
    eax = eax - 0;
    POP32(esp, ebp);
    if ((eax == 0)) goto loc_00144ECF; /* je: equal / zero */

loc_00144EC2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00144EF1; /* jne: not equal / not zero */

loc_00144EC5: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    goto loc_00144ED7;

loc_00144ECF: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 5);

loc_00144ED7: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00144EE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144EE1: ;
    eax = MEM32(edi + 0x24);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x00144EF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00144EF1: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(edi + 0x24);
    eax = eax + ecx;
    MEM32(edi + 0x18) = eax;

loc_00144EFC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00144F1F; /* je: equal / zero */

loc_00144F08: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144F1F; /* jne: not equal / not zero */

loc_00144F18: ;
    ecx = esi;
    PUSH32(esp, 0x00144F1Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144F1F: ;
    POP32(esp, esi);

loc_00144F20: ;
    ecx = MEM32(esp + 8);
    MEM32(edi + 0x1C) = 2;
    MEM8(edi + 0x20) = 0;
    MEM32(edi + 0x24) = 0;
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00144F50
 * Original: 0x00144F50 - 0x00144F8E (62 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144F50: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00144F88; /* jge: greater or equal (signed >=) */

loc_00144F64: ;
    ecx = MEM32(edi + 0x10);
    ecx = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00144F83; /* je: equal / zero */

loc_00144F6E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00144F83; /* jne: not equal / not zero */

loc_00144F7E: ;
    PUSH32(esp, 0x00144F83u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00144F83: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00144F64; /* jl: less (signed <) */

loc_00144F88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00144F90
 * Original: 0x00144F90 - 0x00144F97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144F90(void)
{

loc_00144F90: ;
    MEM32(ecx) = 0x3DCA64;
    esp += 4; return; /* ret */

}

/**
 * sub_00144FA0
 * Original: 0x00144FA0 - 0x00144FA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144FA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144FA0: ;
    g_seh_ebp = ebp; sub_0019B8A0(); return; /* tail jmp 0x0019B8A0 */

}

/**
 * sub_00144FB0
 * Original: 0x00144FB0 - 0x00144FB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144FB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144FB0: ;
    g_seh_ebp = ebp; sub_0019BC30(); return; /* tail jmp 0x0019BC30 */

}

/**
 * sub_00144FC0
 * Original: 0x00144FC0 - 0x00144FC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144FC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144FC0: ;
    g_seh_ebp = ebp; sub_0019BC80(); return; /* tail jmp 0x0019BC80 */

}

/**
 * sub_00144FD0
 * Original: 0x00144FD0 - 0x00144FD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144FD0: ;
    g_seh_ebp = ebp; sub_0019BCD0(); return; /* tail jmp 0x0019BCD0 */

}

/**
 * sub_00144FE0
 * Original: 0x00144FE0 - 0x00144FE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144FE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144FE0: ;
    g_seh_ebp = ebp; sub_0019BD20(); return; /* tail jmp 0x0019BD20 */

}

/**
 * sub_00144FF0
 * Original: 0x00144FF0 - 0x00144FF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144FF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144FF0: ;
    g_seh_ebp = ebp; sub_0019BDC0(); return; /* tail jmp 0x0019BDC0 */

}

/**
 * sub_00145000
 * Original: 0x00145000 - 0x00145005 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145000(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145000: ;
    g_seh_ebp = ebp; sub_0019BD70(); return; /* tail jmp 0x0019BD70 */

}

/**
 * sub_00145010
 * Original: 0x00145010 - 0x00145017 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145010(void)
{

loc_00145010: ;
    MEM32(ecx) = 0x3DCA44;
    esp += 4; return; /* ret */

}

/**
 * sub_00145020
 * Original: 0x00145020 - 0x0014503F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145020: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DCA44;
    if (TEST_Z(_fa, _fb)) goto loc_00145039; /* je: equal / zero */

loc_00145030: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00145036u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00145036: ;
    esp = esp + 4;

loc_00145039: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145040
 * Original: 0x00145040 - 0x0014505F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145040: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DCA64;
    if (TEST_Z(_fa, _fb)) goto loc_00145059; /* je: equal / zero */

loc_00145050: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00145056u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00145056: ;
    esp = esp + 4;

loc_00145059: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145060
 * Original: 0x00145060 - 0x00145098 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145060: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014506Eu); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_0014506E: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014508F; /* jle: less or equal (signed <=) */

loc_00145077: ;
    goto loc_00145080;

    /* nop */

loc_00145080: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145080; /* jl: less (signed <) */

loc_0014508F: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001450A0
 * Original: 0x001450A0 - 0x00145148 (168 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001450A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001450A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00145146; /* je: equal / zero */

loc_001450AD: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00145145; /* jle: less or equal (signed <=) */

loc_001450BE: ;
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);

loc_001450C6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001450D6; /* je: equal / zero */

loc_001450CA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001450C6; /* jl: less (signed <) */

loc_001450D2: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001450D6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145144; /* je: equal / zero */

loc_001450DB: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DCA7C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001450E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001450E8: ;
    ecx = eax;
    PUSH32(esp, 0x001450EFu); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001450EF: ;
    ecx = MEM32(eax + 8);
    ebx = MEM32(esi + ecx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DCA98);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00145101u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145101: ;
    ecx = eax;
    PUSH32(esp, 0x00145108u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_00145108: ;
    eax = MEM32(ebx + 0x10);
    ebx = MEM32(eax + edi * 4);
    ebp = MEM32(ebx + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014513C; /* jle: less or equal (signed <=) */

loc_00145117: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + edi * 4);
    ecx = esi;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00145128u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00145128: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00145137u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145137: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145117; /* jl: less (signed <) */

loc_0014513C: ;
    MEM32(ebx + 8) = 0;
    POP32(esp, ebp);

loc_00145144: ;
    POP32(esp, ebx);

loc_00145145: ;
    POP32(esp, edi);

loc_00145146: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00145150
 * Original: 0x00145150 - 0x0014523C (236 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145150(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145150: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DCA88);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00145164u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145164: ;
    ecx = eax;
    PUSH32(esp, 0x0014516Bu); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_0014516B: ;
    ecx = MEM32(eax + 8);
    ebx = MEM32(esi + ecx);
    ebp = MEM32(ebx + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00145195; /* jle: less or equal (signed <=) */

loc_0014517A: ;
    /* nop */

loc_00145180: ;
    edx = MEM32(ebx + 0x10);
    eax = MEM32(edx + edi * 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014518Du); RECOMP_ABI_CALL(0x001450A0u, sub_001450A0); /* call 0x001450A0 */

loc_0014518D: ;
    esp = esp + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145180; /* jl: less (signed <) */

loc_00145195: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DCA7C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001451A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001451A1: ;
    ecx = eax;
    PUSH32(esp, 0x001451A8u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001451A8: ;
    eax = MEM32(eax + 8);
    edx = MEM32(esi);
    edi = MEM32(esi + eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DCA98);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001451BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001451BA: ;
    ecx = eax;
    PUSH32(esp, 0x001451C1u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_001451C1: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(esi + eax);
    esi = 0; /* xor self */
    PUSH32(esp, 4);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(ebx + 8) = esi;
    PUSH32(esp, 0x001451DAu); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_001451DA: ;
    ebp = MEM32(edi + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00145207; /* jle: less or equal (signed <=) */

loc_001451E3: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx + ebx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145202; /* je: equal / zero */

loc_001451ED: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00145202; /* jne: not equal / not zero */

loc_001451FD: ;
    PUSH32(esp, 0x00145202u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00145202: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001451E3; /* jl: less (signed <) */

loc_00145207: ;
    ecx = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014521B; /* jle: less or equal (signed <=) */

loc_00145210: ;
    edx = MEM32(edi + 0x10);
    MEM32(edx + eax * 4) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145210; /* jl: less (signed <) */

loc_0014521B: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x00145228u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00145228: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEM32(ecx + 8) = esi;
    PUSH32(esp, 0x00145237u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00145237: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00145240
 * Original: 0x00145240 - 0x0014533E (254 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145240: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xD818);
    PUSH32(esp, edi);
    edi = ebx + 0xD818;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00145271; /* jne: not equal / not zero */

loc_00145256: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00145335; /* jge: greater or equal (signed >=) */

loc_00145265: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00145256; /* je: equal / zero */

loc_00145271: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014527E; /* jne: not equal / not zero */

loc_00145278: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_0014527E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00145288; /* jne: not equal / not zero */

loc_00145282: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_00145288: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00145292; /* jne: not equal / not zero */

loc_0014528C: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_00145292: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014529D; /* jne: not equal / not zero */

loc_00145296: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00145296; /* je: equal / zero */

loc_0014529D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00145335; /* jge: greater or equal (signed >=) */

loc_001452A6: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_001452B0: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B38);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001452C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001452C1: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00145334; /* jge: greater or equal (signed >=) */

loc_001452C9: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001452F7; /* jne: not equal / not zero */

loc_001452DC: ;
    /* nop */

loc_001452E0: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00145334; /* jge: greater or equal (signed >=) */

loc_001452EB: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001452E0; /* je: equal / zero */

loc_001452F7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00145305; /* jne: not equal / not zero */

loc_001452FF: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00145305: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014530F; /* jne: not equal / not zero */

loc_00145309: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0014530F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014531A; /* jne: not equal / not zero */

loc_00145314: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0014531A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00145328; /* jne: not equal / not zero */

loc_0014531F: ;
    /* nop */

loc_00145320: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00145320; /* je: equal / zero */

loc_00145328: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00145334; /* jge: greater or equal (signed >=) */

loc_0014532D: ;
    esi = eax;
    goto loc_001452B0;

loc_00145334: ;
    POP32(esp, esi);

loc_00145335: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00145340
 * Original: 0x00145340 - 0x0014546C (300 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145340: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3531C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014535Cu); RECOMP_ABI_CALL(0x0019C9F0u, sub_0019C9F0); /* call 0x0019C9F0 */

loc_0014535C: ;
    PUSH32(esp, 0x00145361u); RECOMP_ABI_CALL(0x0019B940u, sub_0019B940); /* call 0x0019B940 */

loc_00145361: ;
    PUSH32(esp, 0x00145366u); RECOMP_ABI_CALL(0x0019B950u, sub_0019B950); /* call 0x0019B950 */

loc_00145366: ;
    PUSH32(esp, 0x0014536Bu); RECOMP_ABI_CALL(0x0019B960u, sub_0019B960); /* call 0x0019B960 */

loc_0014536B: ;
    PUSH32(esp, 0x00145370u); RECOMP_ABI_CALL(0x0019BA20u, sub_0019BA20); /* call 0x0019BA20 */

loc_00145370: ;
    PUSH32(esp, 0x00145375u); RECOMP_ABI_CALL(0x0019BAD0u, sub_0019BAD0); /* call 0x0019BAD0 */

loc_00145375: ;
    PUSH32(esp, 0x0014537Au); RECOMP_ABI_CALL(0x0019BB30u, sub_0019BB30); /* call 0x0019BB30 */

loc_0014537A: ;
    PUSH32(esp, 0x0014537Fu); RECOMP_ABI_CALL(0x0019BBA0u, sub_0019BBA0); /* call 0x0019BBA0 */

loc_0014537F: ;
    PUSH32(esp, 0x00145384u); RECOMP_ABI_CALL(0x0019BBC0u, sub_0019BBC0); /* call 0x0019BBC0 */

loc_00145384: ;
    PUSH32(esp, 0x00145389u); RECOMP_ABI_CALL(0x00301E60u, sub_00301E60); /* call 0x00301E60 */

loc_00145389: ;
    eax = esp + 4;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00145395u); RECOMP_ABI_CALL(0x001306C0u, sub_001306C0); /* call 0x001306C0 */

loc_00145395: ;
    esp = esp + 8;
    esi = MEM32(esp + 4);
    PUSH32(esp, 0x19A1D0);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x001453AEu); RECOMP_ABI_CALL(0x0019B8A0u, sub_0019B8A0); /* call 0x0019B8A0 */

loc_001453AE: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001453B6u); RECOMP_ABI_CALL(0x0027A510u, sub_0027A510); /* call 0x0027A510 */

loc_001453B6: ;
    esi = MEM32(esp + 4);
    PUSH32(esp, 0x19A3C0);
    PUSH32(esp, 0x001453C4u); RECOMP_ABI_CALL(0x0019BC30u, sub_0019BC30); /* call 0x0019BC30 */

loc_001453C4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001453CCu); RECOMP_ABI_CALL(0x0027A510u, sub_0027A510); /* call 0x0027A510 */

loc_001453CC: ;
    esi = MEM32(esp + 4);
    PUSH32(esp, 0x19A500);
    PUSH32(esp, 0x001453DAu); RECOMP_ABI_CALL(0x0019BC80u, sub_0019BC80); /* call 0x0019BC80 */

loc_001453DA: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001453E2u); RECOMP_ABI_CALL(0x0027A510u, sub_0027A510); /* call 0x0027A510 */

loc_001453E2: ;
    esi = MEM32(esp + 4);
    PUSH32(esp, 0x19B760);
    PUSH32(esp, 0x001453F0u); RECOMP_ABI_CALL(0x0019BDC0u, sub_0019BDC0); /* call 0x0019BDC0 */

loc_001453F0: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001453F8u); RECOMP_ABI_CALL(0x0027A510u, sub_0027A510); /* call 0x0027A510 */

loc_001453F8: ;
    esi = MEM32(esp + 4);
    PUSH32(esp, 0x19A9A0);
    PUSH32(esp, 0x00145406u); RECOMP_ABI_CALL(0x0019BD20u, sub_0019BD20); /* call 0x0019BD20 */

loc_00145406: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014540Eu); RECOMP_ABI_CALL(0x0027A510u, sub_0027A510); /* call 0x0027A510 */

loc_0014540E: ;
    esi = MEM32(esp + 4);
    PUSH32(esp, 0x19A940);
    PUSH32(esp, 0x0014541Cu); RECOMP_ABI_CALL(0x0019BCD0u, sub_0019BCD0); /* call 0x0019BCD0 */

loc_0014541C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00145424u); RECOMP_ABI_CALL(0x0027A510u, sub_0027A510); /* call 0x0027A510 */

loc_00145424: ;
    esi = MEM32(esp + 4);
    PUSH32(esp, 0x19B800);
    PUSH32(esp, 0x00145432u); RECOMP_ABI_CALL(0x0019BD70u, sub_0019BD70); /* call 0x0019BD70 */

loc_00145432: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014543Au); RECOMP_ABI_CALL(0x0027A510u, sub_0027A510); /* call 0x0027A510 */

loc_0014543A: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0014545C; /* je: equal / zero */

loc_00145444: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014545C; /* jne: not equal / not zero */

loc_00145457: ;
    PUSH32(esp, 0x0014545Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014545C: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00145470
 * Original: 0x00145470 - 0x001454CD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145470: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0xD834) = esi;
    MEM32(ecx + 0xD838) = esi;
    MEM32(ecx + 0xD83C) = esi;
    edx = 0; /* xor self */
    goto loc_00145490;

    /* nop */

loc_00145490: ;
    eax = MEM32(ecx + 0xD834);
    edi = MEM32(ecx + 0xD83C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(ecx + 0xD834) = eax;
    MEM32(ecx + 0xD83C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001454BC; /* jl: less (signed <) */

loc_001454AF: ;
    MEM32(ecx + 0xD834) = esi;
    eax = 4;
    goto loc_001454BD;

loc_001454BC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001454BD: ;
    MEM32(ecx + eax * 4 + 0xD81C) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145490; /* jl: less (signed <) */

loc_001454CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001454D0
 * Original: 0x001454D0 - 0x00145562 (146 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001454D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001454D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0xD818) = edi;
    MEM32(esi + 0xD834) = edi;
    MEM32(esi + 0xD838) = edi;
    MEM32(esi + 0xD83C) = edi;
    MEM32(esi + 0xD840) = edi;
    MEM32(esi + 0xD844) = edi;
    PUSH32(esp, 0x001454FFu); RECOMP_ABI_CALL(0x00145470u, sub_00145470); /* call 0x00145470 */

loc_001454FF: ;
    eax = 0; /* xor self */
    MEM32(esi + 0xD85C) = edi;
    MEM32(esi + 0xD860) = edi;
    ecx = 4;
    edx = 0; /* xor self */

loc_00145514: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145514; /* jne: not equal / not zero */

loc_00145520: ;
    MEM32(esi + 0xD85C) = eax;
    MEM32(esi + 0xD860) = edx;
    eax = 0; /* xor self */
    edx = esi + 0xD848;
    goto loc_00145540;

    /* nop */
    /* nop */

loc_00145540: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0xD860);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145540; /* jl: less (signed <) */

loc_0014555D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00145570
 * Original: 0x00145570 - 0x00145575 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145570: ;
    g_seh_ebp = ebp; sub_00145240(); return; /* tail jmp 0x00145240 */

}

/**
 * sub_00145580
 * Original: 0x00145580 - 0x001455D4 (84 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145580(void)
{

loc_00145580: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3531F3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DCAAC;
    MEM32(esp + 0x10) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3DCABC); PUSH32(esp, 0x001455B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001455B1: ;
    ecx = esi + 4;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x001455BEu); RECOMP_ABI_CALL(0x00145240u, sub_00145240); /* call 0x00145240 */

loc_001455BE: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DCA64;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001455E0
 * Original: 0x001455E0 - 0x001455E7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001455E0(void)
{

loc_001455E0: ;
    eax = MEM32(ecx + 0xD848);
    esp += 4; return; /* ret */

}

/**
 * sub_001455F0
 * Original: 0x001455F0 - 0x001455FF (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001455F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001455F0: ;
    edx = MEM32(ecx + 0xD848);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00145600
 * Original: 0x00145600 - 0x00145608 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145600: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00145610(); return; /* tail jmp 0x00145610 */

}

/**
 * sub_00145610
 * Original: 0x00145610 - 0x00145662 (82 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00145610: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0014565B; /* je: equal / zero */

loc_0014561C: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    ecx = eax;
    eax = 0x17B183FB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (((0xA) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xA) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    esi = edx;
    if (0x1F) _cf = (int)(((esi) >> ((0x1F) - 1)) & 1);
    esi = esi >> 0x1F;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    if (((int32_t)esi < 0)) goto loc_0014565B; /* js: sign (negative) */

loc_00145633: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0014565B; /* jge: greater or equal (signed >=) */

loc_00145638: ;
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((5) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    ecx = MEM32(edi + esi * 4 + 0xD840);
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014565B: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145670
 * Original: 0x00145670 - 0x00145691 (33 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145670: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 4;
    ecx = edi;
    PUSH32(esp, 0x0014567Cu); RECOMP_ABI_CALL(0x001456E0u, sub_001456E0); /* call 0x001456E0 */

loc_0014567C: ;
    esi = 0; /* xor self */
    edi = edi;

loc_00145680: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00145688u); RECOMP_ABI_CALL(0x001456A0u, sub_001456A0); /* call 0x001456A0 */

loc_00145688: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145680; /* jl: less (signed <) */

loc_0014568E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001456A0
 * Original: 0x001456A0 - 0x001456DE (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001456A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001456A0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0xD860);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0xD848) = MEM32(eax + edx * 4 + 0xD848) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0xD848) >= 0)) goto loc_001456DA; /* jns: not sign (positive) */

loc_001456BD: ;
    MEM32(eax + edx * 4 + 0xD848) = edx;
    ecx = MEM32(eax + 0xD860);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0xD848) = esi;

loc_001456DA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001456E0
 * Original: 0x001456E0 - 0x001456FE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001456E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001456E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    MEM32(esi + 0xD844) = eax;
    MEM32(esi + 0xD840) = eax;
    PUSH32(esp, 0x001456F6u); RECOMP_ABI_CALL(0x00145240u, sub_00145240); /* call 0x00145240 */

loc_001456F6: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00145470(); return; /* tail jmp 0x00145470 */

}

/**
 * sub_00145700
 * Original: 0x00145700 - 0x0014576D (109 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145700: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353213);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DCAC8;
    ecx = MEM32(esi + 0xD870);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0014574A; /* je: equal / zero */

loc_00145735: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014574A; /* jne: not equal / not zero */

loc_00145745: ;
    PUSH32(esp, 0x0014574Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014574A: ;
    ecx = esi + 4;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00145757u); RECOMP_ABI_CALL(0x00145580u, sub_00145580); /* call 0x00145580 */

loc_00145757: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DCA44;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00145770
 * Original: 0x00145770 - 0x00145845 (213 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145770: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353264);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = ecx + 4;
    PUSH32(esp, 0x00145794u); RECOMP_ABI_CALL(0x00145860u, sub_00145860); /* call 0x00145860 */

loc_00145794: ;
    esi = MEM32(eax);
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0014582D; /* ja: above (unsigned >) */

loc_001457A3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x145848); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001457AAu) goto loc_001457AA;
    if (_jt == 0x001457CCu) goto loc_001457CC;
    if (_jt == 0x001457EBu) goto loc_001457EB;
    if (_jt == 0x0014580Du) goto loc_0014580D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001457AA: ;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0014582D; /* je: equal / zero */

loc_001457BE: ;
    PUSH32(esp, 0x1E00); /* PC menu font capacity: 7680 vertices */
    ecx = esi;
    PUSH32(esp, 0x001457CAu); RECOMP_ABI_CALL(0x001495B0u, sub_001495B0); /* call 0x001495B0 */

loc_001457CA: ;
    goto loc_0014582D;

loc_001457CC: ;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0014582D; /* je: equal / zero */

loc_001457E0: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001457E9u); RECOMP_ABI_CALL(0x00149660u, sub_00149660); /* call 0x00149660 */

loc_001457E9: ;
    goto loc_0014582D;

loc_001457EB: ;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_0014582D; /* je: equal / zero */

loc_001457FF: ;
    PUSH32(esp, 0xE80);
    ecx = esi;
    PUSH32(esp, 0x0014580Bu); RECOMP_ABI_CALL(0x001496F0u, sub_001496F0); /* call 0x001496F0 */

loc_0014580B: ;
    goto loc_0014582D;

loc_0014580D: ;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_0014582D; /* je: equal / zero */

loc_00145821: ;
    PUSH32(esp, 0x1400);
    ecx = esi;
    PUSH32(esp, 0x0014582Du); RECOMP_ABI_CALL(0x0014DC10u, sub_0014DC10); /* call 0x0014DC10 */

loc_0014582D: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 8);
    MEM32(eax) = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00145860
 * Original: 0x00145860 - 0x00145873 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145860(void)
{

loc_00145860: ;
    ecx = ecx + 4;
    PUSH32(esp, 0x00145868u); RECOMP_ABI_CALL(0x00145880u, sub_00145880); /* call 0x00145880 */

loc_00145868: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145880
 * Original: 0x00145880 - 0x001458B2 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145880(void)
{

loc_00145880: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00145889u); RECOMP_ABI_CALL(0x001458C0u, sub_001458C0); /* call 0x001458C0 */

loc_00145889: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0xD818;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B38);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    eax = eax + esi;
    ecx = ecx | edi;
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001458C0
 * Original: 0x001458C0 - 0x0014590A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001458C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001458C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xD838);
    eax = esi + 0xD81C;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0xD840);
    edx = esi + edx * 4 + 0xD840;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x001458FEu); RECOMP_ABI_CALL(0x000F4460u, sub_000F4460); /* call 0x000F4460 */

loc_001458FE: ;
    MEM32(esi + 0xD844) = MEM32(esi + 0xD844) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xD844)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00145910
 * Original: 0x00145910 - 0x0014592E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145910(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145910: ;
    eax = MEM32(ecx + 0xD864);
    edx = ecx + 8;
    eax = eax & MEM32(ecx + 0xD850);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B38);
    eax = eax + edx;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x58)); return; /* indirect tail jmp */

}

/**
 * sub_00145930
 * Original: 0x00145930 - 0x0014599C (108 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145930: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD870);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014593Fu); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_0014593F: ;
    esp = esp + 4;
    MEM32(esi + 0xD870) = 0;
    PUSH32(esp, 0x00145951u); RECOMP_ABI_CALL(0x0013B220u, sub_0013B220); /* call 0x0013B220 */

loc_00145951: ;
    ecx = eax + 0x108;
    MEM32(eax + 0x104) = 0;
    PUSH32(esp, 0x00145966u); RECOMP_ABI_CALL(0x0013AAC0u, sub_0013AAC0); /* call 0x0013AAC0 */

loc_00145966: ;
    PUSH32(esp, 0x0014596Bu); RECOMP_ABI_CALL(0x0013ADF0u, sub_0013ADF0); /* call 0x0013ADF0 */

loc_0014596B: ;
    esi = eax;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00145975u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00145975: ;
    esp = esp + 4;
    MEM32(esi) = 0;
    PUSH32(esp, 0x00145983u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00145983: ;
    ecx = eax;
    PUSH32(esp, 0x0014598Au); RECOMP_ABI_CALL(0x001459C0u, sub_001459C0); /* call 0x001459C0 */

loc_0014598A: ;
    PUSH32(esp, 0x0014598Fu); RECOMP_ABI_CALL(0x00144D90u, sub_00144D90); /* call 0x00144D90 */

loc_0014598F: ;
    ecx = eax;
    PUSH32(esp, 0x00145996u); RECOMP_ABI_CALL(0x001459A0u, sub_001459A0); /* call 0x001459A0 */

loc_00145996: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019B250(); return; /* tail jmp 0x0019B250 */

}

/**
 * sub_001459A0
 * Original: 0x001459A0 - 0x001459BA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001459A0(void)
{

loc_001459A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001459ABu); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_001459AB: ;
    MEM32(esi) = 0;
    esp = esp + 4;
    MEM8(esi + 0x10) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001459C0
 * Original: 0x001459C0 - 0x001459E6 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001459C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001459C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x17750);
    ecx = esi + 0x17750;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001459D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001459D2: ;
    ecx = esi;
    PUSH32(esp, 0x001459D9u); RECOMP_ABI_CALL(0x001459F0u, sub_001459F0); /* call 0x001459F0 */

loc_001459D9: ;
    PUSH32(esp, 0x001459DEu); RECOMP_ABI_CALL(0x001422F0u, sub_001422F0); /* call 0x001422F0 */

loc_001459DE: ;
    edx = MEM32(eax);
    ecx = eax;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

}

/**
 * sub_001459F0
 * Original: 0x001459F0 - 0x00145B05 (277 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001459F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001459F0: ;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x17750);
    ecx = esi + 0x17750;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00145A04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145A04: ;
    edi = esi + 0x1771C;
    ecx = edi;
    PUSH32(esp, 0x00145A11u); RECOMP_ABI_CALL(0x00145B40u, sub_00145B40); /* call 0x00145B40 */

loc_00145A11: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00145A1Au); RECOMP_ABI_CALL(0x00132D10u, sub_00132D10); /* call 0x00132D10 */

loc_00145A1A: ;
    ebx = esi + 0x15DF0;
    ecx = ebx;
    PUSH32(esp, 0x00145A27u); RECOMP_ABI_CALL(0x00145B10u, sub_00145B10); /* call 0x00145B10 */

loc_00145A27: ;
    edi = 0; /* xor self */
    /* nop */

loc_00145A30: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00145A38u); RECOMP_ABI_CALL(0x00132CD0u, sub_00132CD0); /* call 0x00132CD0 */

loc_00145A38: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145A30; /* jl: less (signed <) */

loc_00145A3E: ;
    ebx = esi + 0x1517C;
    ecx = ebx;
    PUSH32(esp, 0x00145A4Bu); RECOMP_ABI_CALL(0x00145C60u, sub_00145C60); /* call 0x00145C60 */

loc_00145A4B: ;
    edi = 0; /* xor self */
    /* nop */

loc_00145A50: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00145A58u); RECOMP_ABI_CALL(0x00132C90u, sub_00132C90); /* call 0x00132C90 */

loc_00145A58: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x82 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145A50; /* jl: less (signed <) */

loc_00145A61: ;
    ebx = esi + 0x13BD8;
    ecx = ebx;
    PUSH32(esp, 0x00145A6Eu); RECOMP_ABI_CALL(0x00145C30u, sub_00145C30); /* call 0x00145C30 */

loc_00145A6E: ;
    edi = 0; /* xor self */

loc_00145A70: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00145A78u); RECOMP_ABI_CALL(0x00132C50u, sub_00132C50); /* call 0x00132C50 */

loc_00145A78: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145A70; /* jl: less (signed <) */

loc_00145A7E: ;
    ebx = esi + 0x9894;
    ecx = ebx;
    PUSH32(esp, 0x00145A8Bu); RECOMP_ABI_CALL(0x00145C00u, sub_00145C00); /* call 0x00145C00 */

loc_00145A8B: ;
    edi = 0; /* xor self */
    /* nop */

loc_00145A90: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00145A98u); RECOMP_ABI_CALL(0x00132B70u, sub_00132B70); /* call 0x00132B70 */

loc_00145A98: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x28A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145A90; /* jl: less (signed <) */

loc_00145AA1: ;
    ebx = esi + 0x456C;
    ecx = ebx;
    PUSH32(esp, 0x00145AAEu); RECOMP_ABI_CALL(0x00145BA0u, sub_00145BA0); /* call 0x00145BA0 */

loc_00145AAE: ;
    edi = 0; /* xor self */

loc_00145AB0: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00145AB8u); RECOMP_ABI_CALL(0x001329B0u, sub_001329B0); /* call 0x001329B0 */

loc_00145AB8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145AB0; /* jl: less (signed <) */

loc_00145AC1: ;
    ecx = esi;
    PUSH32(esp, 0x00145AC8u); RECOMP_ABI_CALL(0x00145B70u, sub_00145B70); /* call 0x00145B70 */

loc_00145AC8: ;
    edi = 0; /* xor self */
    /* nop */

loc_00145AD0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00145AD8u); RECOMP_ABI_CALL(0x001328D0u, sub_001328D0); /* call 0x001328D0 */

loc_00145AD8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x36C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145AD0; /* jl: less (signed <) */

loc_00145AE1: ;
    edi = esi + 0x6D28;
    ecx = edi;
    PUSH32(esp, 0x00145AEEu); RECOMP_ABI_CALL(0x00145BD0u, sub_00145BD0); /* call 0x00145BD0 */

loc_00145AEE: ;
    esi = 0; /* xor self */

loc_00145AF0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00145AF8u); RECOMP_ABI_CALL(0x00132A90u, sub_00132A90); /* call 0x00132A90 */

loc_00145AF8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2AA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145AF0; /* jl: less (signed <) */

loc_00145B01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00145B10
 * Original: 0x00145B10 - 0x00145B3D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145B10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145B10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x1818;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    MEM32(esi + 0x1820) = 0;
    PUSH32(esp, 0x00145B2Bu); RECOMP_ABI_CALL(0x00011F30u, sub_00011F30); /* call 0x00011F30 */

loc_00145B2B: ;
    esp = esp + 8;
    ecx = esi;
    PUSH32(esp, 0x00145B35u); RECOMP_ABI_CALL(0x001335A0u, sub_001335A0); /* call 0x001335A0 */

loc_00145B35: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00134AB0(); return; /* tail jmp 0x00134AB0 */

}

/**
 * sub_00145B40
 * Original: 0x00145B40 - 0x00145B67 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145B40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x20;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = 0;
    PUSH32(esp, 0x00145B55u); RECOMP_ABI_CALL(0x00011F30u, sub_00011F30); /* call 0x00011F30 */

loc_00145B55: ;
    esp = esp + 8;
    ecx = esi;
    PUSH32(esp, 0x00145B5Fu); RECOMP_ABI_CALL(0x001336A0u, sub_001336A0); /* call 0x001336A0 */

loc_00145B5F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001363E0(); return; /* tail jmp 0x001363E0 */

}

/**
 * sub_00145B70
 * Original: 0x00145B70 - 0x00145B9D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145B70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x3740;
    PUSH32(esp, 0x70);
    PUSH32(esp, eax);
    MEM32(esi + 0x37B0) = 0;
    PUSH32(esp, 0x00145B8Bu); RECOMP_ABI_CALL(0x00011F30u, sub_00011F30); /* call 0x00011F30 */

loc_00145B8B: ;
    esp = esp + 8;
    ecx = esi;
    PUSH32(esp, 0x00145B95u); RECOMP_ABI_CALL(0x00133160u, sub_00133160); /* call 0x00133160 */

loc_00145B95: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00135E40(); return; /* tail jmp 0x00135E40 */

}

/**
 * sub_00145BA0
 * Original: 0x00145BA0 - 0x00145BCD (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145BA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x248C;
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    MEM32(esi + 0x24A8) = 0;
    PUSH32(esp, 0x00145BBBu); RECOMP_ABI_CALL(0x00011F30u, sub_00011F30); /* call 0x00011F30 */

loc_00145BBB: ;
    esp = esp + 8;
    ecx = esi;
    PUSH32(esp, 0x00145BC5u); RECOMP_ABI_CALL(0x00133200u, sub_00133200); /* call 0x00133200 */

loc_00145BC5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00135F40(); return; /* tail jmp 0x00135F40 */

}

/**
 * sub_00145BD0
 * Original: 0x00145BD0 - 0x00145BFD (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145BD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x2060;
    PUSH32(esp, 0x58);
    PUSH32(esp, eax);
    MEM32(esi + 0x20B8) = 0;
    PUSH32(esp, 0x00145BEBu); RECOMP_ABI_CALL(0x00011F30u, sub_00011F30); /* call 0x00011F30 */

loc_00145BEB: ;
    esp = esp + 8;
    ecx = esi;
    PUSH32(esp, 0x00145BF5u); RECOMP_ABI_CALL(0x001332B0u, sub_001332B0); /* call 0x001332B0 */

loc_00145BF5: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00136040(); return; /* tail jmp 0x00136040 */

}

/**
 * sub_00145C00
 * Original: 0x00145C00 - 0x00145C2D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145C00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145C00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x98BC;
    PUSH32(esp, 0x54);
    PUSH32(esp, eax);
    MEM32(esi + 0x9910) = 0;
    PUSH32(esp, 0x00145C1Bu); RECOMP_ABI_CALL(0x00011F30u, sub_00011F30); /* call 0x00011F30 */

loc_00145C1B: ;
    esp = esp + 8;
    ecx = esi;
    PUSH32(esp, 0x00145C25u); RECOMP_ABI_CALL(0x00133350u, sub_00133350); /* call 0x00133350 */

loc_00145C25: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00136140(); return; /* tail jmp 0x00136140 */

}

/**
 * sub_00145C30
 * Original: 0x00145C30 - 0x00145C5D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145C30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x1514;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    MEM32(esi + 0x1518) = 0;
    PUSH32(esp, 0x00145C4Bu); RECOMP_ABI_CALL(0x00011F30u, sub_00011F30); /* call 0x00011F30 */

loc_00145C4B: ;
    esp = esp + 8;
    ecx = esi;
    PUSH32(esp, 0x00145C55u); RECOMP_ABI_CALL(0x001333F0u, sub_001333F0); /* call 0x001333F0 */

loc_00145C55: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000B1A50(); return; /* tail jmp 0x000B1A50 */

}

/**
 * sub_00145C60
 * Original: 0x00145C60 - 0x00145C8D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145C60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145C60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xA4C;
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    MEM32(esi + 0xA60) = 0;
    PUSH32(esp, 0x00145C7Bu); RECOMP_ABI_CALL(0x00011F30u, sub_00011F30); /* call 0x00011F30 */

loc_00145C7B: ;
    esp = esp + 8;
    ecx = esi;
    PUSH32(esp, 0x00145C85u); RECOMP_ABI_CALL(0x001334F0u, sub_001334F0); /* call 0x001334F0 */

loc_00145C85: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001362E0(); return; /* tail jmp 0x001362E0 */

}

/**
 * sub_00145C90
 * Original: 0x00145C90 - 0x00145CE4 (84 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145C90(void)
{

loc_00145C90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00145C96u); RECOMP_ABI_CALL(0x001380A0u, sub_001380A0); /* call 0x001380A0 */

loc_00145C96: ;
    esi = eax;
    eax = MEM32(esi + 0x17750);
    ecx = esi + 0x17750;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00145CA7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145CA7: ;
    ecx = esi;
    PUSH32(esp, 0x00145CAEu); RECOMP_ABI_CALL(0x001459F0u, sub_001459F0); /* call 0x001459F0 */

loc_00145CAE: ;
    PUSH32(esp, 0x00145CB3u); RECOMP_ABI_CALL(0x001422F0u, sub_001422F0); /* call 0x001422F0 */

loc_00145CB3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00145CBAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145CBA: ;
    PUSH32(esp, 0x00145CBFu); RECOMP_ABI_CALL(0x00144D90u, sub_00144D90); /* call 0x00144D90 */

loc_00145CBF: ;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00145CC9u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00145CC9: ;
    MEM32(esi) = 0;
    MEM8(esi + 0x10) = 0;
    ecx = MEM32(0x5BDF64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00145CDFu); RECOMP_ABI_CALL(0x00145150u, sub_00145150); /* call 0x00145150 */

loc_00145CDF: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00145CF0
 * Original: 0x00145CF0 - 0x00145CF8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145CF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145CF0: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00145D00(); return; /* tail jmp 0x00145D00 */

}

/**
 * sub_00145D00
 * Original: 0x00145D00 - 0x00145D41 (65 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145D00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00145D37; /* je: equal / zero */

loc_00145D0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 4;
    eax = eax - edi;
    ecx = eax;
    eax = 0x17B183FB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    esi = edx;
    esi = esi >> 0x1F;
    esi = esi + edx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00145D2Du); RECOMP_ABI_CALL(0x00145D50u, sub_00145D50); /* call 0x00145D50 */

loc_00145D2D: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00145D35u); RECOMP_ABI_CALL(0x001456A0u, sub_001456A0); /* call 0x001456A0 */

loc_00145D35: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00145D37: ;
    MEM32(ebx) = 0;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145D50
 * Original: 0x00145D50 - 0x00145DCD (125 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145D50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00145D5Eu); RECOMP_ABI_CALL(0x00145DD0u, sub_00145DD0); /* call 0x00145DD0 */

loc_00145D5E: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0xD840);
    eax = esi + eax * 4 + 0xD840;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0xD834);
    edx = MEM32(esi + 0xD83C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(esi + 0xD834) = eax;
    MEM32(esi + 0xD83C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00145DB3; /* jl: less (signed <) */

loc_00145DA2: ;
    MEM32(esi + 0xD834) = 0;
    eax = 4;
    goto loc_00145DB4;

loc_00145DB3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00145DB4: ;
    MEM32(esi + eax * 4 + 0xD81C) = edi;
    eax = MEM32(esi + 0xD844);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0xD844) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145DD0
 * Original: 0x00145DD0 - 0x00145E14 (68 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145DD0(void)
{

loc_00145DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B38);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00145DEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145DEA: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    eax = edi;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0xD818);
    eax = esi + eax * 4 + 0xD818;
    edx = ~edx;
    ecx = ecx & edx;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145E20
 * Original: 0x00145E20 - 0x00145E3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00145E28u); RECOMP_ABI_CALL(0x00145700u, sub_00145700); /* call 0x00145700 */

loc_00145E28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00145E38; /* je: equal / zero */

loc_00145E2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00145E35u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00145E35: ;
    esp = esp + 4;

loc_00145E38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145E40
 * Original: 0x00145E40 - 0x00145E5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00145E48u); RECOMP_ABI_CALL(0x00145580u, sub_00145580); /* call 0x00145580 */

loc_00145E48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00145E58; /* je: equal / zero */

loc_00145E4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00145E55u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00145E55: ;
    esp = esp + 4;

loc_00145E58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145E60
 * Original: 0x00145E60 - 0x00145F32 (210 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145E60(void)
{

loc_00145E60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353291);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    ebx = 0; /* xor self */
    MEM32(esi) = 0x3DCAC8;
    ecx = esi + 8;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esi + 4) = 0x3DCAAC;
    PUSH32(esp, 0x00145E9Cu); RECOMP_ABI_CALL(0x001454D0u, sub_001454D0); /* call 0x001454D0 */

loc_00145E9C: ;
    edi = esi + 0xD870;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    MEM8(esp + 0x24) = 1;
    MEM32(esi + 0xD86C) = ebx;
    PUSH32(esp, 0x00145EB5u); RECOMP_ABI_CALL(0x0011BE90u, sub_0011BE90); /* call 0x0011BE90 */

loc_00145EB5: ;
    esp = esp + 8;
    ecx = MEM32(edi);
    MEM32(esi + 0xD878) = ebx;
    MEM32(esi + 0xD87C) = ebx;
    MEM8(esi + 0xD880) = LO8(ebx);
    eax = MEM32(ecx);
    MEM8(esp + 0x1C) = 2;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00145ED6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145ED6: ;
    ecx = MEM32(edi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00145EDDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145EDD: ;
    MEM32(esi + 0xD878) = eax;
    MEM32(esi + 0xD87C) = edx;
    PUSH32(esp, 0x00145EEEu); RECOMP_ABI_CALL(0x0013BF60u, sub_0013BF60); /* call 0x0013BF60 */

loc_00145EEE: ;
    PUSH32(esp, 0x00145EF3u); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_00145EF3: ;
    edi = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = edi;
    PUSH32(esp, 0x00145F03u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00145F03: ;
    ecx = MEM32(esp + 0xC);
    ecx = ecx << 4;
    edx = MEM32(ecx + edi + 4);
    ecx = ecx + edi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00145F15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145F15: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00145F1Bu); RECOMP_ABI_CALL(0x0019ABB0u, sub_0019ABB0); /* call 0x0019ABB0 */

loc_00145F1B: ;
    ecx = MEM32(esp + 0x18);
    esp = esp + 4;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00145F40
 * Original: 0x00145F40 - 0x0014623C (764 bytes, 212 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145F40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3532EF);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xB8));
    esp = esp - 0xB8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    edi = ecx;
    MEM32(esp + 0x10) = ebp;
    PUSH32(esp, 0x00145F6Bu); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00145F6B: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00145F7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145F7A: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    ebx = 1;
    MEM32(esp + 0xCC) = ebp;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00145FC5; /* je: equal / zero */

loc_00145F8E: ;
    PUSH32(esp, 0x00145F93u); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00145F93: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00145FA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145FA2: ;
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    MEM32(esp + 0xCC) = ebx;
    ebx = 3;
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00145FBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00145FBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esp + 0xF) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_00145FCA; /* jne: not equal / not zero */

loc_00145FC5: ;
    MEM8(esp + 0xF) = 1;

loc_00145FCA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0xCC) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00145FEA; /* je: equal / zero */

loc_00145FD6: ;
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFFFDu;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00145FE7u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00145FE7: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_00145FEA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0xCC) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00146007; /* je: equal / zero */

loc_00145FFA: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00146004u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00146004: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_00146007: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00146222; /* jne: not equal / not zero */

loc_00146013: ;
    PUSH32(esp, 0x00146018u); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00146018: ;
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00146027u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146027: ;
    edx = MEM32(esp + 0x18);
    ebx = MEM32(eax);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x00146037u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00146037: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00146222; /* je: equal / zero */

loc_00146042: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2B8); PUSH32(esp, 0x0014604Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014604C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00146222; /* je: equal / zero */

loc_00146054: ;
    ecx = MEM32(edi + 0xD870);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00146060u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146060: ;
    PUSH32(esp, 0x00146065u); RECOMP_ABI_CALL(0x0013F8A0u, sub_0013F8A0); /* call 0x0013F8A0 */

loc_00146065: ;
    ecx = eax;
    PUSH32(esp, 0x0014606Cu); RECOMP_ABI_CALL(0x0013D450u, sub_0013D450); /* call 0x0013D450 */

loc_0014606C: ;
    ecx = MEM32(edi + 0xD870);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00146077u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146077: ;
    ecx = MEM32(0x5BA6EC);
    MEM32(ecx + 0x14) = ebp;
    edx = MEM32(0x5BA700);
    MEM32(edx + 0x14) = ebp;
    PUSH32(esp, 0x0014608Eu); RECOMP_ABI_CALL(0x00144D90u, sub_00144D90); /* call 0x00144D90 */

loc_0014608E: ;
    edx = MEM32(eax + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 8) = ecx;
    ecx = esp + 0x24;
    MEM32(eax + 0xC) = ebp;
    PUSH32(esp, 0x001460ABu); RECOMP_ABI_CALL(0x001463A0u, sub_001463A0); /* call 0x001463A0 */

loc_001460AB: ;
    MEM32(esp + 0x24) = 0x3DCAE8;
    ecx = esp + 0x30;
    MEM32(esp + 0xD0) = 2;
    MEM32(esp + 0x28) = 0x3FFFFFFF;
    PUSH32(esp, 0x001460CFu); RECOMP_ABI_CALL(0x00146240u, sub_00146240); /* call 0x00146240 */

loc_001460CF: ;
    ecx = esp + 0xB0;
    PUSH32(esp, 0x001460DBu); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_001460DB: ;
    eax = MEM32(edi + 4);
    esi = edi + 4;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001460E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001460E6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00146170; /* jle: less or equal (signed <=) */

loc_001460EE: ;
    ebx = 0xD84C;

loc_001460F3: ;
    edx = MEM32(ebx + esi);
    ecx = MEM32(esi + 0xD860);
    eax = esi + 4;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B38);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    MEM32(esp + 0x14) = ecx;
    if ((ecx == 0)) goto loc_0014615D; /* je: equal / zero */

loc_0014610F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00146114u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146114: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0014615D; /* je: equal / zero */

loc_00146118: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x00146121u); RECOMP_ABI_CALL(0x00143680u, sub_00143680); /* call 0x00143680 */

loc_00146121: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0014615D; /* je: equal / zero */

loc_00146125: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 8);
    edx = esp + 0x18;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0014613Eu); RECOMP_ABI_CALL(0x00146290u, sub_00146290); /* call 0x00146290 */

loc_0014613E: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00146147u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_00146147: ;
    ecx = MEM32(esp + 0x2C);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xB8;
    PUSH32(esp, 0x0014615Du); RECOMP_ABI_CALL(0x00068FC0u, sub_00068FC0); /* call 0x00068FC0 */

loc_0014615D: ;
    edx = MEM32(esi);
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00146168u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146168: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001460F3; /* jl: less (signed <) */

loc_0014616C: ;
    ebx = MEM32(esp + 0x20);

loc_00146170: ;
    SET_LO8(eax, MEM8(esp + 0xD8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0014619D; /* je: equal / zero */

loc_0014617B: ;
    ecx = MEM32(edi + 0xD870);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00146186u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146186: ;
    PUSH32(esp, 0x0014618Bu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0014618B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00146192u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146192: ;
    ecx = MEM32(edi + 0xD870);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0014619Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014619D: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x001461ABu); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_001461AB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001461EF; /* je: equal / zero */

loc_001461B5: ;
    ecx = MEM32(edi + 0xD870);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001461C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001461C0: ;
    PUSH32(esp, 0x001461C5u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_001461C5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001461CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001461CC: ;
    ecx = MEM32(edi + 0xD870);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001461D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001461D7: ;
    ecx = MEM32(esp + esi * 4 + 0xB0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001461E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001461E3: ;
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x001461EDu); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_001461ED: ;
    goto loc_001461AB;

loc_001461EF: ;
    SET_LO8(eax, MEM8(edi + 0xD880));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00146204; /* je: equal / zero */

loc_001461FA: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2C0); PUSH32(esp, 0x00146204u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146204: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2BC); PUSH32(esp, 0x0014620Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014620E: ;
    ecx = esp + 0x20;
    MEM32(esp + 0xCC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00146222u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00146222: ;
    ecx = MEM32(esp + 0xC4);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC4)) >> 32) & 1);
    esp = esp + 0xC4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146240
 * Original: 0x00146240 - 0x0014624D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146240: ;
    eax = 0; /* xor self */
    MEM32(ecx + 0x7C) = eax;
    MEM32(ecx + 0x78) = eax;
    g_seh_ebp = ebp; sub_00146250(); return; /* tail jmp 0x00146250 */

}

/**
 * sub_00146250
 * Original: 0x00146250 - 0x0014628B (59 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146250: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x6C) = esi;
    MEM32(ecx + 0x70) = esi;
    MEM32(ecx + 0x74) = esi;
    edx = 0; /* xor self */
    /* nop */

loc_00146260: ;
    eax = MEM32(ecx + 0x6C);
    edi = MEM32(ecx + 0x74);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(ecx + 0x6C) = eax;
    MEM32(ecx + 0x74) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0014627D; /* jl: less (signed <) */

loc_00146273: ;
    MEM32(ecx + 0x6C) = esi;
    eax = 4;
    goto loc_0014627E;

loc_0014627D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0014627E: ;
    MEM32(ecx + eax * 4 + 0x54) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146260; /* jl: less (signed <) */

loc_00146288: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146290
 * Original: 0x00146290 - 0x001462CA (58 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146290(void)
{

loc_00146290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0014629Eu); RECOMP_ABI_CALL(0x001462D0u, sub_001462D0); /* call 0x001462D0 */

loc_0014629E: ;
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
 * sub_001462D0
 * Original: 0x001462D0 - 0x00146314 (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001462D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001462D0: ;
    edx = ecx;
    eax = MEM32(edx + 0x70);
    eax = MEM32(edx + eax * 4 + 0x54);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x78;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x70);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    MEM32(edx + 0x70) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00146307; /* jl: less (signed <) */

loc_00146300: ;
    MEM32(edx + 0x70) = 0;

loc_00146307: ;
    MEM32(edx + 0x74) = MEM32(edx + 0x74) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x7C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x7C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146320
 * Original: 0x00146320 - 0x00146328 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146320(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146320: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_00146330(); return; /* tail jmp 0x00146330 */

}

/**
 * sub_00146330
 * Original: 0x00146330 - 0x00146395 (101 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146330: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x78;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x6C);
    edi = MEM32(eax + 0x74);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x74) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00146384; /* jl: less (signed <) */

loc_00146368: ;
    MEM32(eax + 0x6C) = 0;
    ecx = 4;
    MEM32(eax + ecx * 4 + 0x54) = esi;
    ecx = MEM32(eax + 0x7C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x7C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00146384: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + ecx * 4 + 0x54) = esi;
    ecx = MEM32(eax + 0x7C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x7C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001463A0
 * Original: 0x001463A0 - 0x001463C9 (41 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001463A0(void)
{

loc_001463A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3DCB18;
    PUSH32(esp, 0x001463BFu); RECOMP_ABI_CALL(0x001463D0u, sub_001463D0); /* call 0x001463D0 */

loc_001463BF: ;
    MEM32(esi) = 0x3DCB00;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001463D0
 * Original: 0x001463D0 - 0x001463ED (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001463D0(void)
{

loc_001463D0: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x7C) = eax;
    PUSH32(esp, 0x001463E9u); RECOMP_ABI_CALL(0x00146250u, sub_00146250); /* call 0x00146250 */

loc_001463E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001463F0
 * Original: 0x001463F0 - 0x0014644C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001463F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001463F0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x556850));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35330E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00146439; /* jne: not equal / not zero */

loc_00146414: ;
    MEM32(0x556850) = MEM32(0x556850) | eax;
    ecx = 0x548FC8;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0014642Cu); RECOMP_ABI_CALL(0x00145E60u, sub_00145E60); /* call 0x00145E60 */

loc_0014642C: ;
    PUSH32(esp, 0x35A520);
    PUSH32(esp, 0x00146436u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00146436: ;
    esp = esp + 4;

loc_00146439: ;
    ecx = MEM32(esp);
    eax = 0x548FC8;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00146450
 * Original: 0x00146450 - 0x00146457 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146450(void)
{

loc_00146450: ;
    MEM32(ecx) = 0x3DCB38;
    esp += 4; return; /* ret */

}

/**
 * sub_00146460
 * Original: 0x00146460 - 0x0014647F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146460: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DCB38;
    if (TEST_Z(_fa, _fb)) goto loc_00146479; /* je: equal / zero */

loc_00146470: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00146476u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00146476: ;
    esp = esp + 4;

loc_00146479: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146480
 * Original: 0x00146480 - 0x00146526 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146480: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353341);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001464A5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_001464A5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001464B1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001464B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001464B9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001464B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001464BFu); RECOMP_ABI_CALL(0x002A0740u, sub_002A0740); /* call 0x002A0740 */

loc_001464BF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x001464D3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001464D3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001464DBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001464DB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001464EB; /* je: equal / zero */

loc_001464E8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001464EB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00146513; /* je: equal / zero */

loc_001464FC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00146513; /* jne: not equal / not zero */

loc_0014650C: ;
    ecx = esi;
    PUSH32(esp, 0x00146513u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00146513: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00146530
 * Original: 0x00146530 - 0x00146645 (277 bytes, 93 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146530(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146530: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353373);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = eax;
    MEM32(esi) = 0x3DCB50;
    MEM32(esi + 4) = eax;
    ebp = MEM32(esp + 0x24);
    ecx = ebp;
    MEM8(esp + 0x1C) = 2;
    PUSH32(esp, 0x00146570u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00146570: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014657Bu); RECOMP_ABI_CALL(0x00146480u, sub_00146480); /* call 0x00146480 */

loc_0014657B: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x1C) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_0014658C; /* je: equal / zero */

loc_00146589: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014658C: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001465A8; /* je: equal / zero */

loc_00146593: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001465A8; /* jne: not equal / not zero */

loc_001465A3: ;
    PUSH32(esp, 0x001465A8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001465A8: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 4) = edi;
    MEM8(esp + 0x1C) = 2;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001465D2; /* je: equal / zero */

loc_001465BA: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_001465D2; /* jne: not equal / not zero */

loc_001465CD: ;
    PUSH32(esp, 0x001465D2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001465D2: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 0x2C) = 0;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_001465F2; /* jne: not equal / not zero */

loc_001465E9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001465EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001465EE: ;
    PUSH32(esp, 0);
    goto loc_001465F9;

loc_001465F2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001465F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001465F7: ;
    PUSH32(esp, 1);

loc_001465F9: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00146601u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146601: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0014660Cu); RECOMP_ABI_CALL(0x0029D060u, sub_0029D060); /* call 0x0029D060 */

loc_0014660C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0014662F; /* je: equal / zero */

loc_00146618: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0014662F; /* jne: not equal / not zero */

loc_00146628: ;
    ecx = ebp;
    PUSH32(esp, 0x0014662Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014662F: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00146650
 * Original: 0x00146650 - 0x0014665E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146650(void)
{

loc_00146650: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014665Au); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_0014665A: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00146660
 * Original: 0x00146660 - 0x0014666E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146660(void)
{

loc_00146660: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0014666Au); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_0014666A: ;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00146670
 * Original: 0x00146670 - 0x001466B8 (72 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146670(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146670: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_0014669C; /* je: equal / zero */

loc_00146680: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00146688u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146688: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x84)); return; /* indirect tail jmp */

loc_0014669C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x001466A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001466A4: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    POP32(esp, esi);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x84)); return; /* indirect tail jmp */

}

/**
 * sub_001466C0
 * Original: 0x001466C0 - 0x001466DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001466C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001466C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001466C8u); RECOMP_ABI_CALL(0x001466E0u, sub_001466E0); /* call 0x001466E0 */

loc_001466C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001466D8; /* je: equal / zero */

loc_001466CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001466D5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001466D5: ;
    esp = esp + 4;

loc_001466D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001466E0
 * Original: 0x001466E0 - 0x00146769 (137 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001466E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001466E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353393);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DCB50;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = 1;
    PUSH32(esp, 0x00146717u); RECOMP_ABI_CALL(0x0029D060u, sub_0029D060); /* call 0x0029D060 */

loc_00146717: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0014671Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014671F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00146728u); RECOMP_ABI_CALL(0x00011A40u, sub_00011A40); /* call 0x00011A40 */

loc_00146728: ;
    MEM32(esi + 4) = 0;
    ecx = MEM32(esi + 4);
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00146753; /* je: equal / zero */

loc_0014673E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00146753; /* jne: not equal / not zero */

loc_0014674E: ;
    PUSH32(esp, 0x00146753u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00146753: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DCB38;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00146770
 * Original: 0x00146770 - 0x00146775 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00146770: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x10)); return; /* indirect tail jmp */

}

/**
 * sub_00146780
 * Original: 0x00146780 - 0x00146787 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146780(void)
{

loc_00146780: ;
    MEM32(ecx) = 0x3DCB84;
    esp += 4; return; /* ret */

}

/**
 * sub_00146790
 * Original: 0x00146790 - 0x00146829 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146790: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001467A7; /* jl: less (signed <) */

loc_0014679E: ;
    eax = 0xC0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001467A7: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_001467BA; /* jne: not equal / not zero */

loc_001467B8: ;
    edx = ~edx;

loc_001467BA: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001467E4; /* jne: not equal / not zero */

loc_001467C5: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014681F; /* jge: greater or equal (signed >=) */

loc_001467D2: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_001467E0; /* jne: not equal / not zero */

loc_001467DE: ;
    edx = ~edx;

loc_001467E0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001467C5; /* je: equal / zero */

loc_001467E4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001467F2; /* jne: not equal / not zero */

loc_001467EC: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_001467F2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001467FC; /* jne: not equal / not zero */

loc_001467F6: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_001467FC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146807; /* jne: not equal / not zero */

loc_00146801: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_00146807: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146818; /* jne: not equal / not zero */

loc_0014680C: ;
    /* nop */

loc_00146810: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00146810; /* je: equal / zero */

loc_00146818: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146824; /* jl: less (signed <) */

loc_0014681F: ;
    eax = 0xC0;

loc_00146824: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00146830
 * Original: 0x00146830 - 0x0014684E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146830: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00146838u); RECOMP_ABI_CALL(0x00149820u, sub_00149820); /* call 0x00149820 */

loc_00146838: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00146848; /* je: equal / zero */

loc_0014683F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00146845u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00146845: ;
    esp = esp + 4;

loc_00146848: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146850
 * Original: 0x00146850 - 0x0014686F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146850: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DCB84;
    if (TEST_Z(_fa, _fb)) goto loc_00146869; /* je: equal / zero */

loc_00146860: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00146866u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00146866: ;
    esp = esp + 4;

loc_00146869: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146870
 * Original: 0x00146870 - 0x00146916 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146870: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3533C1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00146895u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00146895: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001468A1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001468A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001468A9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001468A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001468AFu); RECOMP_ABI_CALL(0x001E1C50u, sub_001E1C50); /* call 0x001E1C50 */

loc_001468AF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x001468C3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001468C3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001468CBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001468CB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001468DB; /* je: equal / zero */

loc_001468D8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001468DB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00146903; /* je: equal / zero */

loc_001468EC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00146903; /* jne: not equal / not zero */

loc_001468FC: ;
    ecx = esi;
    PUSH32(esp, 0x00146903u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00146903: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00146920
 * Original: 0x00146920 - 0x001469C6 (166 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146920: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x600);
    PUSH32(esp, edi);
    edi = ebx + 0x600;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014695A; /* jne: not equal / not zero */

loc_00146937: ;
    goto loc_00146940;

    /* nop */

loc_00146940: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001469AF; /* jge: greater or equal (signed >=) */

loc_0014694E: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00146940; /* je: equal / zero */

loc_0014695A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146967; /* jne: not equal / not zero */

loc_00146961: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_00146967: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146971; /* jne: not equal / not zero */

loc_0014696B: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_00146971: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014697B; /* jne: not equal / not zero */

loc_00146975: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_0014697B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146987; /* jne: not equal / not zero */

loc_0014697F: ;
    /* nop */

loc_00146980: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00146980; /* je: equal / zero */

loc_00146987: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001469AF; /* jge: greater or equal (signed >=) */

loc_0014698F: ;
    /* nop */

loc_00146990: ;
    edx = MEM32(ebx + esi * 8);
    ecx = ebx + esi * 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0014699Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014699A: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001469A5u); RECOMP_ABI_CALL(0x00146790u, sub_00146790); /* call 0x00146790 */

loc_001469A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146990; /* jl: less (signed <) */

loc_001469AF: ;
    eax = 0; /* xor self */
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001469D0
 * Original: 0x001469D0 - 0x00146A5A (138 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001469D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001469D0: ;
    eax = MEM32(ecx + 0x300);
    PUSH32(esp, esi);
    esi = ecx + 0x300;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001469FD; /* jne: not equal / not zero */

loc_001469E3: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00146A45; /* jge: greater or equal (signed >=) */

loc_001469F1: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001469E3; /* je: equal / zero */

loc_001469FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146A0A; /* jne: not equal / not zero */

loc_00146A04: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00146A0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146A14; /* jne: not equal / not zero */

loc_00146A0E: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00146A14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146A1E; /* jne: not equal / not zero */

loc_00146A18: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00146A1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146A29; /* jne: not equal / not zero */

loc_00146A22: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00146A22; /* je: equal / zero */

loc_00146A29: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00146A45; /* jge: greater or equal (signed >=) */

loc_00146A31: ;
    eax = edx;

loc_00146A33: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00146A3Eu); RECOMP_ABI_CALL(0x00146790u, sub_00146790); /* call 0x00146790 */

loc_00146A3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146A33; /* jl: less (signed <) */

loc_00146A45: ;
    ecx = 0; /* xor self */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146A60
 * Original: 0x00146A60 - 0x00146AA7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146A60(void)
{

loc_00146A60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x00146A6Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_00146A6F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00146A82u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00146A82: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00146A94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146A94: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00146A9Fu); RECOMP_ABI_CALL(0x00146870u, sub_00146870); /* call 0x00146870 */

loc_00146A9F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00146AB0
 * Original: 0x00146AB0 - 0x00146B12 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146AB0: ;
    edx = ecx;
    eax = MEM32(edx + 0x620);
    eax = MEM32(edx + eax * 4 + 0x318);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x628;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x620);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0 (32-bit) */
    MEM32(edx + 0x620) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00146AFC; /* jl: less (signed <) */

loc_00146AF2: ;
    MEM32(edx + 0x620) = 0;

loc_00146AFC: ;
    MEM32(edx + 0x624) = MEM32(edx + 0x624) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x624)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x640);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x640) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146B20
 * Original: 0x00146B20 - 0x00146B82 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146B20: ;
    edx = ecx;
    eax = MEM32(edx + 0x920);
    eax = MEM32(edx + eax * 4 + 0x618);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x928;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x920);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC0 (32-bit) */
    MEM32(edx + 0x920) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00146B6C; /* jl: less (signed <) */

loc_00146B62: ;
    MEM32(edx + 0x920) = 0;

loc_00146B6C: ;
    MEM32(edx + 0x924) = MEM32(edx + 0x924) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x924)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x940);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x940) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146B90
 * Original: 0x00146B90 - 0x00146BF2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146B90: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x61C) = esi;
    MEM32(ecx + 0x620) = esi;
    MEM32(ecx + 0x624) = esi;
    edx = 0; /* xor self */
    goto loc_00146BB0;

    /* nop */

loc_00146BB0: ;
    eax = MEM32(ecx + 0x61C);
    edi = MEM32(ecx + 0x624);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    MEM32(ecx + 0x61C) = eax;
    MEM32(ecx + 0x624) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00146BDE; /* jl: less (signed <) */

loc_00146BD1: ;
    MEM32(ecx + 0x61C) = esi;
    eax = 0xBF;
    goto loc_00146BDF;

loc_00146BDE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00146BDF: ;
    MEM32(ecx + eax * 4 + 0x318) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146BB0; /* jl: less (signed <) */

loc_00146BEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146C00
 * Original: 0x00146C00 - 0x00146C2D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146C00(void)
{

loc_00146C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00146C09u); RECOMP_ABI_CALL(0x00146AB0u, sub_00146AB0); /* call 0x00146AB0 */

loc_00146C09: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x300;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    eax = esi + eax * 4;
    ecx = ecx | edi;
    POP32(esp, edi);
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146C30
 * Original: 0x00146C30 - 0x00146C88 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146C30(void)
{

loc_00146C30: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x300;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(esi + 0x61C) = eax;
    MEM32(esi + 0x620) = eax;
    MEM32(esi + 0x624) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0x628;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    ecx = esi;
    MEM32(esi + 0x640) = eax;
    PUSH32(esp, 0x00146C84u); RECOMP_ABI_CALL(0x00146B90u, sub_00146B90); /* call 0x00146B90 */

loc_00146C84: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146C90
 * Original: 0x00146C90 - 0x00146CF2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146C90: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x91C) = esi;
    MEM32(ecx + 0x920) = esi;
    MEM32(ecx + 0x924) = esi;
    edx = 0; /* xor self */
    goto loc_00146CB0;

    /* nop */

loc_00146CB0: ;
    eax = MEM32(ecx + 0x91C);
    edi = MEM32(ecx + 0x924);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    MEM32(ecx + 0x91C) = eax;
    MEM32(ecx + 0x924) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00146CDE; /* jl: less (signed <) */

loc_00146CD1: ;
    MEM32(ecx + 0x91C) = esi;
    eax = 0xBF;
    goto loc_00146CDF;

loc_00146CDE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00146CDF: ;
    MEM32(ecx + eax * 4 + 0x618) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146CB0; /* jl: less (signed <) */

loc_00146CEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146D00
 * Original: 0x00146D00 - 0x00146D34 (52 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146D00(void)
{

loc_00146D00: ;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00146D0Cu); RECOMP_ABI_CALL(0x00146B20u, sub_00146B20); /* call 0x00146B20 */

loc_00146D0C: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x600;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(edx) = MEM32(edx) | edi;
    edx = esi + eax * 8;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146D40
 * Original: 0x00146D40 - 0x00146DA4 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146D40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00146D49u); RECOMP_ABI_CALL(0x00146C30u, sub_00146C30); /* call 0x00146C30 */

loc_00146D49: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x944) = eax;
    MEM32(esi + 0x948) = eax;
    edx = 0xBF;
    edi = 0; /* xor self */

loc_00146D60: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146D60; /* jne: not equal / not zero */

loc_00146D6C: ;
    MEM32(esi + 0x944) = ecx;
    MEM32(esi + 0x948) = edi;
    edx = esi + 0x644;
    edi = edi;

loc_00146D80: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x948);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146D80; /* jl: less (signed <) */

loc_00146D9F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146DB0
 * Original: 0x00146DB0 - 0x00146E08 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146DB0(void)
{

loc_00146DB0: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x600;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(esi + 0x91C) = eax;
    MEM32(esi + 0x920) = eax;
    MEM32(esi + 0x924) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0x928;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    ecx = esi;
    MEM32(esi + 0x940) = eax;
    PUSH32(esp, 0x00146E04u); RECOMP_ABI_CALL(0x00146C90u, sub_00146C90); /* call 0x00146C90 */

loc_00146E04: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00146E10
 * Original: 0x00146E10 - 0x001471DA (970 bytes, 272 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00146E10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353413);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x440;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x444) = eax;
    eax = MEM32(ebp + 0xC);
    esi = ecx;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x148;
    ebx = 0; /* xor self */
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x2C) = ebx;
    MEM8(esp + 0x14C) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146E69u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00146E69: ;
    eax = esp + 0x14C;
    esp = esp + 0xC;
    MEM8(esp + 0x23F) = LO8(ebx);
    edx = eax + 1;
    /* nop */

loc_00146E80: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146E80; /* jne: not equal / not zero */

loc_00146E87: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146EA4; /* jl: less (signed <) */

loc_00146E8E: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x13C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    eax = esp + eax + 0x13C;
    if (CMP_NE(_fa, _fb)) goto loc_00146EA4; /* jne: not equal / not zero */

loc_00146EA1: ;
    MEM8(eax) = 0;

loc_00146EA4: ;
    ecx = MEM32(ebp + 0x10);
    edx = esp + 0x240;
    PUSH32(esp, edx);
    eax = esp + 0x144;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM8(esp + 0x24C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146EC5u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00146EC5: ;
    edx = esp + 0x24C;
    esp = esp + 0xC;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146ED5u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00146ED5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146EDCu); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00146EDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00146F1A; /* jne: not equal / not zero */

loc_00146EE0: ;
    eax = esp + 0x340;
    PUSH32(esp, eax);
    ecx = esp + 0x144;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    MEM8(esp + 0x34C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146EFFu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00146EFF: ;
    edx = esp + 0x34C;
    esp = esp + 0xC;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146F0Fu); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00146F0F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146F16u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00146F16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146F36; /* je: equal / zero */

loc_00146F1A: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(esi + 0x1598);
    eax = MEM32(ebp + 8);
    ecx = ecx & edx;
    edx = MEM32(esi + ecx * 4 + 0xC54);
    MEM32(eax) = edx;
    goto loc_001471B7;

loc_00146F36: ;
    _fa = (uint32_t)(MEM32(esi + 0x1294)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1294), 0xC0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00146F52; /* jge: greater or equal (signed >=) */

loc_00146F42: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146F47u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00146F47: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146F4Eu); RECOMP_ABI_CALL(0x0011B290u, sub_0011B290); /* call 0x0011B290 */

loc_00146F4E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00146F5C; /* je: equal / zero */

loc_00146F52: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ebx;
    goto loc_001471B7;

loc_00146F5C: ;
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x14) = ebx;
    ecx = 0x40;
    esi = esp + 0x140;
    edi = esp + 0x40;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, 0x3DAEBC);
    ecx = esp + 0x44;
    MEM32(esp + 0x458) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146F8Cu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_00146F8C: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146F93u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00146F93: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00146FA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00146FA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014705C; /* je: equal / zero */

loc_00146FAA: ;
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146FBCu); RECOMP_ABI_CALL(0x0012CC90u, sub_0012CC90); /* call 0x0012CC90 */

loc_00146FBC: ;
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    MEM8(esp + 0x458) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146FCFu); RECOMP_ABI_CALL(0x001322F0u, sub_001322F0); /* call 0x001322F0 */

loc_00146FCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00146FDA; /* je: equal / zero */

loc_00146FD7: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00146FDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x454) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_0014701F; /* je: equal / zero */

loc_00146FE6: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014701F; /* je: equal / zero */

loc_00146FED: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146FF4u); RECOMP_ABI_CALL(0x00131660u, sub_00131660); /* call 0x00131660 */

loc_00146FF4: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00146FFBu); RECOMP_ABI_CALL(0x00131500u, sub_00131500); /* call 0x00131500 */

loc_00146FFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014701F; /* je: equal / zero */

loc_00146FFF: ;
    PUSH32(esp, 0);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147008u); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_00147008: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147012u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_00147012: ;
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014701F; /* je: equal / zero */

loc_0014701A: ;
    MEM8(esp + 0x13) = 1;

loc_0014701F: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147026u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00147026: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00147035u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00147035: ;
    ecx = esp + 0x18;
    MEM8(esp + 0x454) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147046u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00147046: ;
    ecx = esp + 0x2C;
    MEM8(esp + 0x454) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147057u); RECOMP_ABI_CALL(0x0012CEC0u, sub_0012CEC0); /* call 0x0012CEC0 */

loc_00147057: ;
    goto loc_001470FB;

loc_0014705C: ;
    ecx = 0x40;
    esi = esp + 0x140;
    edi = esp + 0x40;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, 0x3CEA28);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014707Cu); RECOMP_ABI_CALL(0x0013CFF0u, sub_0013CFF0); /* call 0x0013CFF0 */

loc_0014707C: ;
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147083u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00147083: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00147092u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00147092: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147198; /* je: equal / zero */

loc_0014709A: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001470A8u); RECOMP_ABI_CALL(0x00146A60u, sub_00146A60); /* call 0x00146A60 */

loc_001470A8: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM8(esp + 0x458) = 3;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001470BDu); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_001470BD: ;
    ecx = esp + 0x18;
    MEM8(esp + 0x454) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001470CEu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_001470CE: ;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(ebx);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x001470E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001470E1: ;
    PUSH32(esp, 0);
    MEM8(esp + 0x17) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001470ECu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_001470EC: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001470FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001470FB: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147198; /* je: equal / zero */

loc_00147107: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147198; /* je: equal / zero */

loc_0014710F: ;
    esi = MEM32(esp + 0x1C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147120u); RECOMP_ABI_CALL(0x00146D00u, sub_00146D00); /* call 0x00146D00 */

loc_00147120: ;
    edi = MEM32(eax);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x24) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x454) = 4;
    if (TEST_Z(_fa, _fb)) goto loc_00147151; /* je: equal / zero */

loc_00147136: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebx;
    eax = MEM32(ebx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    MEM32(esp + 0x30) = esp;
    MEM32(ebx + 4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147151u); RECOMP_ABI_CALL(0x00146530u, sub_00146530); /* call 0x00146530 */

loc_00147151: ;
    esi = esi + 0xC54;
    ecx = esi;
    MEM8(esp + 0x454) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147166u); RECOMP_ABI_CALL(0x00146C00u, sub_00146C00); /* call 0x00146C00 */

loc_00147166: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014716C; /* je: equal / zero */

loc_0014716A: ;
    MEM32(eax) = edi;

loc_0014716C: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ebp + 0x10);
    eax = eax - esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    eax = MEM32(esi + eax * 4 + 0x644);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x14C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0014718Fu); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0014718F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00147196u); RECOMP_ABI_CALL(0x0011BB70u, sub_0011BB70); /* call 0x0011BB70 */

loc_00147196: ;
    goto loc_0014719C;

loc_00147198: ;
    edi = MEM32(esp + 0x20);

loc_0014719C: ;
    esi = MEM32(ebp + 8);
    ecx = esp + 0x14;
    MEM32(esi) = edi;
    MEM32(esp + 0x454) = 0xFFFFFFFFu;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001471B5u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_001471B5: ;
    eax = esi;

loc_001471B7: ;
    ecx = MEM32(esp + 0x44C);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x444);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001471D1u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001471D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001471E0
 * Original: 0x001471E0 - 0x001471E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001471E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001471E0: ;
    g_seh_ebp = ebp; sub_00146920(); return; /* tail jmp 0x00146920 */

}

/**
 * sub_001471F0
 * Original: 0x001471F0 - 0x00147244 (84 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001471F0(void)
{

loc_001471F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353433);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DCBBC;
    MEM32(esp + 0x10) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3DCBCC); PUSH32(esp, 0x00147221u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00147221: ;
    ecx = esi + 4;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0014722Eu); RECOMP_ABI_CALL(0x00146920u, sub_00146920); /* call 0x00146920 */

loc_0014722E: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DCB84;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00147250
 * Original: 0x00147250 - 0x00147257 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147250(void)
{

loc_00147250: ;
    eax = MEM32(ecx + 0x944);
    esp += 4; return; /* ret */

}

/**
 * sub_00147260
 * Original: 0x00147260 - 0x00147272 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147260: ;
    edx = MEM32(ecx + 0x944);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00147280
 * Original: 0x00147280 - 0x00147288 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00147280: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00147290(); return; /* tail jmp 0x00147290 */

}

/**
 * sub_00147290
 * Original: 0x00147290 - 0x001472D6 (70 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00147290: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001472D0; /* je: equal / zero */

loc_0014729B: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    if (((3) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((3) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_001472D0; /* jl: less (signed <) */

loc_001472A6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xC0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001472D0; /* jge: greater or equal (signed >=) */

loc_001472AE: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(esi + edx * 4 + 0x928);
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

loc_001472D0: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001472E0
 * Original: 0x001472E0 - 0x00147344 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001472E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001472E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001472E9u); RECOMP_ABI_CALL(0x00146DB0u, sub_00146DB0); /* call 0x00146DB0 */

loc_001472E9: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0xC44) = eax;
    MEM32(esi + 0xC48) = eax;
    edx = 0xBF;
    edi = 0; /* xor self */

loc_00147300: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00147300; /* jne: not equal / not zero */

loc_0014730C: ;
    MEM32(esi + 0xC44) = ecx;
    MEM32(esi + 0xC48) = edi;
    edx = esi + 0x944;
    edi = edi;

loc_00147320: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0xC48);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00147320; /* jl: less (signed <) */

loc_0014733F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00147350
 * Original: 0x00147350 - 0x00147355 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00147350: ;
    g_seh_ebp = ebp; sub_001471F0(); return; /* tail jmp 0x001471F0 */

}

/**
 * sub_00147360
 * Original: 0x00147360 - 0x00147365 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147360(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00147360: ;
    g_seh_ebp = ebp; sub_001469D0(); return; /* tail jmp 0x001469D0 */

}

/**
 * sub_00147370
 * Original: 0x00147370 - 0x0014738E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00147378u); RECOMP_ABI_CALL(0x001471F0u, sub_001471F0); /* call 0x001471F0 */

loc_00147378: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147388; /* je: equal / zero */

loc_0014737F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00147385u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00147385: ;
    esp = esp + 4;

loc_00147388: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147390
 * Original: 0x00147390 - 0x001473B4 (36 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147390: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 4;
    ecx = edi;
    PUSH32(esp, 0x0014739Cu); RECOMP_ABI_CALL(0x00147400u, sub_00147400); /* call 0x00147400 */

loc_0014739C: ;
    esi = 0; /* xor self */
    edi = edi;

loc_001473A0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001473A8u); RECOMP_ABI_CALL(0x001473C0u, sub_001473C0); /* call 0x001473C0 */

loc_001473A8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001473A0; /* jl: less (signed <) */

loc_001473B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001473C0
 * Original: 0x001473C0 - 0x001473FE (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001473C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001473C0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0xC48);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x944) = MEM32(eax + edx * 4 + 0x944) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x944) >= 0)) goto loc_001473FA; /* jns: not sign (positive) */

loc_001473DD: ;
    MEM32(eax + edx * 4 + 0x944) = edx;
    ecx = MEM32(eax + 0xC48);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x944) = esi;

loc_001473FA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147400
 * Original: 0x00147400 - 0x00147435 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00147400: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x940) = 0;
    ecx = esi + 0x928;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    ecx = esi;
    PUSH32(esp, 0x0014742Du); RECOMP_ABI_CALL(0x00146920u, sub_00146920); /* call 0x00146920 */

loc_0014742D: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00146C90(); return; /* tail jmp 0x00146C90 */

}

/**
 * sub_00147440
 * Original: 0x00147440 - 0x001474AD (109 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147440(void)
{

loc_00147440: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353448);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 4;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    MEM32(esi) = 0x3DCBF4;
    MEM32(ebx) = 0x3DCBD8;
    edx = esi + 0xC54;
    eax = 0; /* xor self */
    edi = edx;
    ecx = 0x253;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0014748Eu); RECOMP_ABI_CALL(0x001469D0u, sub_001469D0); /* call 0x001469D0 */

loc_0014748E: ;
    ecx = ebx;
    PUSH32(esp, 0x00147495u); RECOMP_ABI_CALL(0x001471F0u, sub_001471F0); /* call 0x001471F0 */

loc_00147495: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(esi) = 0x3DC10C;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001474B0
 * Original: 0x001474B0 - 0x001474B8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001474B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001474B0: ;
    ecx = ecx - 4;
    g_seh_ebp = ebp; sub_00147960(); return; /* tail jmp 0x00147960 */

}

/**
 * sub_001474C0
 * Original: 0x001474C0 - 0x001475B2 (242 bytes, 67 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001474C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001474C0: ;
    esp = esp - 0x304;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x304) = eax;
    eax = MEM32(esp + 0x30C);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, ecx);
    MEM8(esp + 0x10) = LO8(ebx);
    PUSH32(esp, 0x001474F0u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001474F0: ;
    eax = esp + 0x10;
    esp = esp + 0xC;
    MEM8(esp + 0x103) = LO8(ebx);
    edx = eax + 1;

loc_00147501: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00147501; /* jne: not equal / not zero */

loc_00147508: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014751C; /* jl: less (signed <) */

loc_0014750F: ;
    SET_LO8(ecx, MEM8(esp + eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    eax = esp + eax;
    if (CMP_NE(_fa, _fb)) goto loc_0014751C; /* jne: not equal / not zero */

loc_0014751A: ;
    MEM8(eax) = LO8(ebx);

loc_0014751C: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00147526u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00147526: ;
    ecx = eax;
    PUSH32(esp, 0x0014752Du); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0014752D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147549; /* je: equal / zero */

loc_00147531: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x300);
    PUSH32(esp, 0x00147540u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00147540: ;
    esp = esp + 0x304;
    esp += 8; return; /* ret 4 */

loc_00147549: ;
    eax = esp + 0x104;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM8(esp + 0x10C) = LO8(ebx);
    PUSH32(esp, 0x00147562u); RECOMP_ABI_CALL(0x00125580u, sub_00125580); /* call 0x00125580 */

loc_00147562: ;
    edx = esp + 0x20C;
    PUSH32(esp, edx);
    eax = esp + 0x110;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    MEM8(esp + 0x218) = LO8(ebx);
    PUSH32(esp, 0x00147580u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00147580: ;
    ecx = esp + 0x218;
    esp = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00147590u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00147590: ;
    ecx = eax;
    PUSH32(esp, 0x00147597u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00147597: ;
    ecx = MEM32(esp + 0x304);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    PUSH32(esp, 0x001475A9u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001475A9: ;
    esp = esp + 0x304;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001475C0
 * Original: 0x001475C0 - 0x00147717 (343 bytes, 96 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001475C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001475C0: ;
    esp = esp - 0x308;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x30C) = eax;
    eax = MEM32(esp + 0x318);
    PUSH32(esp, 0x100);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    ebx = 0; /* xor self */
    PUSH32(esp, ecx);
    MEM8(esp + 0x18) = LO8(ebx);
    PUSH32(esp, 0x001475F3u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001475F3: ;
    eax = esp + 0x18;
    esp = esp + 0xC;
    MEM8(esp + 0x10B) = LO8(ebx);
    edx = eax + 1;

loc_00147604: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00147604; /* jne: not equal / not zero */

loc_0014760B: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00147621; /* jl: less (signed <) */

loc_00147612: ;
    SET_LO8(ecx, MEM8(esp + eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    eax = esp + eax + 8;
    if (CMP_NE(_fa, _fb)) goto loc_00147621; /* jne: not equal / not zero */

loc_0014761F: ;
    MEM8(eax) = LO8(ebx);

loc_00147621: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014762Bu); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0014762B: ;
    ecx = eax;
    PUSH32(esp, 0x00147632u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00147632: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014764D; /* je: equal / zero */

loc_00147636: ;
    edx = MEM32(eax + 0x4C);
    ecx = MEM32(esi + 0x1598);
    ecx = ecx & edx;
    edx = MEM32(esi + ecx * 4 + 0xC54);
    goto loc_001476F7;

loc_0014764D: ;
    eax = esp + 0x10C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM8(esp + 0x114) = LO8(ebx);
    PUSH32(esp, 0x00147666u); RECOMP_ABI_CALL(0x00125580u, sub_00125580); /* call 0x00125580 */

loc_00147666: ;
    edx = esp + 0x214;
    PUSH32(esp, edx);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    MEM8(esp + 0x220) = LO8(ebx);
    PUSH32(esp, 0x00147684u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00147684: ;
    ecx = esp + 0x220;
    esp = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00147694u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00147694: ;
    ecx = eax;
    PUSH32(esp, 0x0014769Bu); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0014769B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001476D1; /* je: equal / zero */

loc_0014769F: ;
    ecx = MEM32(eax + 0x4C);
    edx = MEM32(esi + 0x1598);
    edx = edx & ecx;
    ecx = MEM32(esi + edx * 4 + 0xC54);

loc_001476B1: ;
    eax = MEM32(esp + 0x314);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x304);
    PUSH32(esp, 0x001476C8u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001476C8: ;
    esp = esp + 0x308;
    esp += 12; return; /* ret 8 */

loc_001476D1: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = esp + 0x114;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001476E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001476E9: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001476B1; /* jne: not equal / not zero */

loc_001476F1: ;
    edx = MEM32(esi + 0x15A0);

loc_001476F7: ;
    eax = MEM32(esp + 0x314);
    ecx = MEM32(esp + 0x30C);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    PUSH32(esp, 0x0014770Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0014770E: ;
    esp = esp + 0x308;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00147720
 * Original: 0x00147720 - 0x0014776D (77 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147720: ;
    eax = MEM32(ecx + 0x1598);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx + 0xC54;
    eax = eax & ebx;
    _fa = (uint32_t)(MEM32(esi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4), 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0014774F; /* je: equal / zero */

loc_0014773B: ;
    edx = MEM32(esi + 0x944);
    edx = edx & ebx;
    eax = esi + edx * 4;
    PUSH32(esp, eax);
    ecx = ecx + 4;
    PUSH32(esp, 0x0014774Fu); RECOMP_ABI_CALL(0x00147860u, sub_00147860); /* call 0x00147860 */

loc_0014774F: ;
    edi = MEM32(esi + 0x944);
    edi = edi & ebx;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014775Fu); RECOMP_ABI_CALL(0x001477B0u, sub_001477B0); /* call 0x001477B0 */

loc_0014775F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00147767u); RECOMP_ABI_CALL(0x00147770u, sub_00147770); /* call 0x00147770 */

loc_00147767: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00147770
 * Original: 0x00147770 - 0x001477AE (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147770(void)
{
    int _flags = 0; /* fallback flag var */

loc_00147770: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x948);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x644) = MEM32(eax + edx * 4 + 0x644) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x644) >= 0)) goto loc_001477AA; /* jns: not sign (positive) */

loc_0014778D: ;
    MEM32(eax + edx * 4 + 0x644) = edx;
    ecx = MEM32(eax + 0x948);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x644) = esi;

loc_001477AA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001477B0
 * Original: 0x001477B0 - 0x0014782F (127 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001477B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001477B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001477BEu); RECOMP_ABI_CALL(0x00147830u, sub_00147830); /* call 0x00147830 */

loc_001477BE: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x628);
    eax = esi + eax * 4 + 0x628;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x61C);
    edx = MEM32(esi + 0x624);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    MEM32(esi + 0x61C) = eax;
    MEM32(esi + 0x624) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00147815; /* jl: less (signed <) */

loc_00147804: ;
    MEM32(esi + 0x61C) = 0;
    eax = 0xBF;
    goto loc_00147816;

loc_00147815: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00147816: ;
    MEM32(esi + eax * 4 + 0x318) = edi;
    eax = MEM32(esi + 0x640);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x640) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147830
 * Original: 0x00147830 - 0x00147857 (39 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147830(void)
{

loc_00147830: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 0x300;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147860
 * Original: 0x00147860 - 0x00147893 (51 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147860: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147889; /* je: equal / zero */

loc_0014786B: ;
    PUSH32(esp, esi);
    esi = ecx + 4;
    eax = eax - esi;
    PUSH32(esp, edi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    edi = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014787Fu); RECOMP_ABI_CALL(0x001478A0u, sub_001478A0); /* call 0x001478A0 */

loc_0014787F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00147887u); RECOMP_ABI_CALL(0x001473C0u, sub_001473C0); /* call 0x001473C0 */

loc_00147887: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00147889: ;
    MEM32(ebx) = 0;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001478A0
 * Original: 0x001478A0 - 0x0014791F (127 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001478A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001478A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001478AEu); RECOMP_ABI_CALL(0x00147920u, sub_00147920); /* call 0x00147920 */

loc_001478AE: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x928);
    eax = esi + eax * 4 + 0x928;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x91C);
    edx = MEM32(esi + 0x924);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0 (32-bit) */
    MEM32(esi + 0x91C) = eax;
    MEM32(esi + 0x924) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00147905; /* jl: less (signed <) */

loc_001478F4: ;
    MEM32(esi + 0x91C) = 0;
    eax = 0xBF;
    goto loc_00147906;

loc_00147905: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00147906: ;
    MEM32(esi + eax * 4 + 0x618) = edi;
    eax = MEM32(esi + 0x940);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x940) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147920
 * Original: 0x00147920 - 0x00147957 (55 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147920(void)
{

loc_00147920: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi + edi * 8);
    ecx = esi + edi * 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00147932u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00147932: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + 0x600;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147960
 * Original: 0x00147960 - 0x0014797E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147960: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00147968u); RECOMP_ABI_CALL(0x00147440u, sub_00147440); /* call 0x00147440 */

loc_00147968: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147978; /* je: equal / zero */

loc_0014796F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00147975u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00147975: ;
    esp = esp + 4;

loc_00147978: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147980
 * Original: 0x00147980 - 0x0014799E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147980: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00147988u); RECOMP_ABI_CALL(0x00147350u, sub_00147350); /* call 0x00147350 */

loc_00147988: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147998; /* je: equal / zero */

loc_0014798F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00147995u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00147995: ;
    esp = esp + 4;

loc_00147998: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001479A0
 * Original: 0x001479A0 - 0x00147A3A (154 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001479A0(void)
{

loc_001479A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353481);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DCBA0;
    ecx = esi + 8;
    MEM32(esp + 0x14) = 0;
    MEM32(esi + 4) = 0x3DCBBC;
    PUSH32(esp, 0x001479DCu); RECOMP_ABI_CALL(0x001472E0u, sub_001472E0); /* call 0x001472E0 */

loc_001479DC: ;
    MEM32(esi + 4) = 0x3DCC10;
    ecx = esi + 0xC54;
    MEM32(esi) = 0x3DCBF4;
    MEM32(esi + 4) = 0x3DCBD8;
    PUSH32(esp, 0x001479FBu); RECOMP_ABI_CALL(0x00146D40u, sub_00146D40); /* call 0x00146D40 */

loc_001479FB: ;
    eax = MEM32(0x456E04);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0x24) = 2;
    MEM32(esi + 0x15A0) = 0;
    PUSH32(esp, 0x00147A20u); RECOMP_ABI_CALL(0x00146E10u, sub_00146E10); /* call 0x00146E10 */

loc_00147A20: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x15A0) = edx;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00147A40
 * Original: 0x00147A40 - 0x00147A9C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147A40: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x557DFC));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35349E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00147A89; /* jne: not equal / not zero */

loc_00147A64: ;
    MEM32(0x557DFC) = MEM32(0x557DFC) | eax;
    ecx = 0x556858;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00147A7Cu); RECOMP_ABI_CALL(0x001479A0u, sub_001479A0); /* call 0x001479A0 */

loc_00147A7C: ;
    PUSH32(esp, 0x35A530);
    PUSH32(esp, 0x00147A86u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00147A86: ;
    esp = esp + 4;

loc_00147A89: ;
    ecx = MEM32(esp);
    eax = 0x556858;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00147AA0
 * Original: 0x00147AA0 - 0x00147AA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147AA0(void)
{

loc_00147AA0: ;
    MEM32(ecx) = 0x3DCC30;
    esp += 4; return; /* ret */

}

/**
 * sub_00147AB0
 * Original: 0x00147AB0 - 0x00147AEE (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147AB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00147AB0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x2050);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x2038) = MEM32(eax + edx * 4 + 0x2038) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x2038) >= 0)) goto loc_00147AEA; /* jns: not sign (positive) */

loc_00147ACD: ;
    MEM32(eax + edx * 4 + 0x2038) = edx;
    ecx = MEM32(eax + 0x2050);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x2038) = esi;

loc_00147AEA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147AF0
 * Original: 0x00147AF0 - 0x00147AF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147AF0(void)
{

loc_00147AF0: ;
    eax = MEM32(0x5BD888);
    esp += 4; return; /* ret */

}

/**
 * sub_00147B00
 * Original: 0x00147B00 - 0x00147B07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147B00(void)
{

loc_00147B00: ;
    MEM32(ecx) = 0x3DCC4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00147B10
 * Original: 0x00147B10 - 0x00147B2F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147B10: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DCC4C;
    if (TEST_Z(_fa, _fb)) goto loc_00147B29; /* je: equal / zero */

loc_00147B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00147B26u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00147B26: ;
    esp = esp + 4;

loc_00147B29: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147B30
 * Original: 0x00147B30 - 0x00147B4F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147B30: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DCC30;
    if (TEST_Z(_fa, _fb)) goto loc_00147B49; /* je: equal / zero */

loc_00147B40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00147B46u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00147B46: ;
    esp = esp + 4;

loc_00147B49: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147B50
 * Original: 0x00147B50 - 0x00147B83 (51 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147B50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00147B5F; /* je: equal / zero */

loc_00147B5C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00147B5F: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147B7B; /* je: equal / zero */

loc_00147B66: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00147B7B; /* jne: not equal / not zero */

loc_00147B76: ;
    PUSH32(esp, 0x00147B7Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00147B7B: ;
    MEM32(esi + 0x68) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00147B90
 * Original: 0x00147B90 - 0x00147BEB (91 bytes, 26 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00147B90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00147B90: ;
    esp = esp - 0x50;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00147BA1u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00147BA1: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C7084); /* fsub dword ptr [0x3c7084] */
    eax = MEM32(esi);
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    esp = esp + 8;
    fp_top() = fp_top() - MEMF(0x3C7084); /* fsub dword ptr [0x3c7084] */
    ecx = esp + 0x10;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    fp_top() = fp_top() - MEMF(0x3C7084); /* fsub dword ptr [0x3c7084] */
    ecx = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x4C) = edx;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00147BE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00147BE7: ;
    esp = esp + 0x50;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00147BF0
 * Original: 0x00147BF0 - 0x00147C50 (96 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147BF0: ;
    eax = MEM32(0x5BD8C8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00147C02u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00147C02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147C0D; /* je: equal / zero */

loc_00147C06: ;
    PUSH32(esp, 0x00147C0Bu); RECOMP_ABI_CALL(0x00147B90u, sub_00147B90); /* call 0x00147B90 */

loc_00147C0B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00147C0D: ;
    ecx = MEM32(0x5BDA80);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00147C1Bu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00147C1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147C4E; /* je: equal / zero */

loc_00147C1F: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00147C2C; /* je: equal / zero */

loc_00147C27: ;
    ebx = MEM32(eax + 8);
    goto loc_00147C2E;

loc_00147C2C: ;
    ebx = 0; /* xor self */

loc_00147C2E: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00147C4C; /* jle: less or equal (signed <=) */

loc_00147C35: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00147C44u); RECOMP_ABI_CALL(0x00147BF0u, sub_00147BF0); /* call 0x00147BF0 */

loc_00147C44: ;
    esp = esp + 4;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00147C35; /* jl: less (signed <) */

loc_00147C4C: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00147C4E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00147C50
 * Original: 0x00147C50 - 0x00147CEB (155 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147C50: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3534B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00147C71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00147C71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00147CDB; /* jle: less or equal (signed <=) */

loc_00147C75: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00147C80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00147C80: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147C97; /* je: equal / zero */

loc_00147C86: ;
    eax = MEM32(0x5BDA80);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00147C93u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00147C93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147C99; /* jne: not equal / not zero */

loc_00147C97: ;
    esi = 0; /* xor self */

loc_00147C99: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00147CA4; /* je: equal / zero */

loc_00147CA1: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00147CA4: ;
    edi = MEM32(edi + 8);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00147CB7u); RECOMP_ABI_CALL(0x00269400u, sub_00269400); /* call 0x00269400 */

loc_00147CB7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00147CDA; /* je: equal / zero */

loc_00147CC3: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00147CDA; /* jne: not equal / not zero */

loc_00147CD3: ;
    ecx = esi;
    PUSH32(esp, 0x00147CDAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00147CDA: ;
    POP32(esp, esi);

loc_00147CDB: ;
    ecx = MEM32(esp + 8);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00147CF0
 * Original: 0x00147CF0 - 0x00147D74 (132 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147CF0: ;
    eax = MEM32(ecx + 0x400);
    PUSH32(esp, esi);
    esi = ecx + 0x400;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147D1D; /* jne: not equal / not zero */

loc_00147D03: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147D65; /* jge: greater or equal (signed >=) */

loc_00147D11: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147D03; /* je: equal / zero */

loc_00147D1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147D2A; /* jne: not equal / not zero */

loc_00147D24: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00147D2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147D34; /* jne: not equal / not zero */

loc_00147D2E: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00147D34: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147D3E; /* jne: not equal / not zero */

loc_00147D38: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00147D3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147D49; /* jne: not equal / not zero */

loc_00147D42: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147D42; /* je: equal / zero */

loc_00147D49: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147D65; /* jge: greater or equal (signed >=) */

loc_00147D51: ;
    eax = edx;

loc_00147D53: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00147D5Eu); RECOMP_ABI_CALL(0x000122F0u, sub_000122F0); /* call 0x000122F0 */

loc_00147D5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00147D53; /* jl: less (signed <) */

loc_00147D65: ;
    ecx = 0; /* xor self */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00147D80
 * Original: 0x00147D80 - 0x00147E7E (254 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147D80: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x2008);
    PUSH32(esp, edi);
    edi = ebx + 0x2008;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147DB1; /* jne: not equal / not zero */

loc_00147D96: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147E75; /* jge: greater or equal (signed >=) */

loc_00147DA5: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147D96; /* je: equal / zero */

loc_00147DB1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147DBE; /* jne: not equal / not zero */

loc_00147DB8: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_00147DBE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147DC8; /* jne: not equal / not zero */

loc_00147DC2: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_00147DC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147DD2; /* jne: not equal / not zero */

loc_00147DCC: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_00147DD2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147DDD; /* jne: not equal / not zero */

loc_00147DD6: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147DD6; /* je: equal / zero */

loc_00147DDD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147E75; /* jge: greater or equal (signed >=) */

loc_00147DE6: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_00147DF0: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x668);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00147E01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00147E01: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147E74; /* jge: greater or equal (signed >=) */

loc_00147E09: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147E37; /* jne: not equal / not zero */

loc_00147E1C: ;
    /* nop */

loc_00147E20: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147E74; /* jge: greater or equal (signed >=) */

loc_00147E2B: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147E20; /* je: equal / zero */

loc_00147E37: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147E45; /* jne: not equal / not zero */

loc_00147E3F: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00147E45: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147E4F; /* jne: not equal / not zero */

loc_00147E49: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_00147E4F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147E5A; /* jne: not equal / not zero */

loc_00147E54: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_00147E5A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147E68; /* jne: not equal / not zero */

loc_00147E5F: ;
    /* nop */

loc_00147E60: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147E60; /* je: equal / zero */

loc_00147E68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147E74; /* jge: greater or equal (signed >=) */

loc_00147E6D: ;
    esi = eax;
    goto loc_00147DF0;

loc_00147E74: ;
    POP32(esp, esi);

loc_00147E75: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00147E80
 * Original: 0x00147E80 - 0x00147F34 (180 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147E80: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x200);
    PUSH32(esp, edi);
    edi = ebx + 0x200;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147EBA; /* jne: not equal / not zero */

loc_00147E96: ;
    goto loc_00147EA0;

    /* nop */
    /* nop */

loc_00147EA0: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147F24; /* jge: greater or equal (signed >=) */

loc_00147EAE: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147EA0; /* je: equal / zero */

loc_00147EBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147EC7; /* jne: not equal / not zero */

loc_00147EC1: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_00147EC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147ED1; /* jne: not equal / not zero */

loc_00147ECB: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_00147ED1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147EDB; /* jne: not equal / not zero */

loc_00147ED5: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_00147EDB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00147EE7; /* jne: not equal / not zero */

loc_00147EDF: ;
    /* nop */

loc_00147EE0: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147EE0; /* je: equal / zero */

loc_00147EE7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00147F24; /* jge: greater or equal (signed >=) */

loc_00147EEF: ;
    PUSH32(esp, esi);
    esi = ecx;

loc_00147EF2: ;
    ecx = MEM32(ebx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147F0E; /* je: equal / zero */

loc_00147EF9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00147F0E; /* jne: not equal / not zero */

loc_00147F09: ;
    PUSH32(esp, 0x00147F0Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00147F0E: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00147F19u); RECOMP_ABI_CALL(0x000122F0u, sub_000122F0); /* call 0x000122F0 */

loc_00147F19: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00147EF2; /* jl: less (signed <) */

loc_00147F23: ;
    POP32(esp, esi);

loc_00147F24: ;
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
 * sub_00147F40
 * Original: 0x00147F40 - 0x00147F57 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147F40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00147F56; /* je: equal / zero */

loc_00147F48: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;

loc_00147F56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00147F60
 * Original: 0x00147F60 - 0x00148006 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00147F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00147F60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3534F1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00147F85u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00147F85: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00147F91u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00147F91: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00147F99u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00147F99: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00147F9Fu); RECOMP_ABI_CALL(0x0027AFB0u, sub_0027AFB0); /* call 0x0027AFB0 */

loc_00147F9F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00147FB3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00147FB3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00147FBBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00147FBB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00147FCB; /* je: equal / zero */

loc_00147FC8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00147FCB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00147FF3; /* je: equal / zero */

loc_00147FDC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00147FF3; /* jne: not equal / not zero */

loc_00147FEC: ;
    ecx = esi;
    PUSH32(esp, 0x00147FF3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00147FF3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00148010
 * Original: 0x00148010 - 0x001480B6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148010: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3534F1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00148035u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00148035: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00148041u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00148041: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00148049u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00148049: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014804Fu); RECOMP_ABI_CALL(0x0027C0C0u, sub_0027C0C0); /* call 0x0027C0C0 */

loc_0014804F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00148063u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00148063: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0014806Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0014806B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0014807B; /* je: equal / zero */

loc_00148078: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014807B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001480A3; /* je: equal / zero */

loc_0014808C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001480A3; /* jne: not equal / not zero */

loc_0014809C: ;
    ecx = esi;
    PUSH32(esp, 0x001480A3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001480A3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001480C0
 * Original: 0x001480C0 - 0x00148156 (150 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001480C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001480C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x410);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0014813B; /* jle: less or equal (signed <=) */

loc_001480D2: ;
    ebp = ebx + 4;

loc_001480D5: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001480E3; /* jne: not equal / not zero */

loc_001480DC: ;
    eax = 0x3C806C;
    goto loc_001480F9;

loc_001480E3: ;
    PUSH32(esp, 0x001480E8u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_001480E8: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_001480F9: ;
    esi = MEM32(esp + 0x14);
    /* nop */

loc_00148100: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00148124; /* jne: not equal / not zero */

loc_00148108: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00148120; /* je: equal / zero */

loc_0014810C: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00148124; /* jne: not equal / not zero */

loc_00148116: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00148100; /* jne: not equal / not zero */

loc_00148120: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00148129;

loc_00148124: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00148129: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00148144; /* je: equal / zero */

loc_0014812D: ;
    eax = MEM32(ebx + 0x410);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(8)) >> 32) & 1);
    ebp = ebp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001480D5; /* jl: less (signed <) */

loc_0014813B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00148144: ;
    eax = MEM32(ebx + edi * 8);
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00148160
 * Original: 0x00148160 - 0x001481F3 (147 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148160: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x410);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001481DB; /* jle: less or equal (signed <=) */

loc_00148172: ;
    ebp = ebx + 4;

loc_00148175: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00148183; /* jne: not equal / not zero */

loc_0014817C: ;
    eax = 0x3C806C;
    goto loc_00148199;

loc_00148183: ;
    PUSH32(esp, 0x00148188u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00148188: ;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_00148199: ;
    esi = MEM32(esp + 0x14);
    /* nop */

loc_001481A0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001481C4; /* jne: not equal / not zero */

loc_001481A8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001481C0; /* je: equal / zero */

loc_001481AC: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001481C4; /* jne: not equal / not zero */

loc_001481B6: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001481A0; /* jne: not equal / not zero */

loc_001481C0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001481C9;

loc_001481C4: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_001481C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001481E4; /* je: equal / zero */

loc_001481CD: ;
    eax = MEM32(ebx + 0x410);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(8)) >> 32) & 1);
    ebp = ebp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00148175; /* jl: less (signed <) */

loc_001481DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001481E4: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00148200
 * Original: 0x00148200 - 0x001483E8 (488 bytes, 162 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148200: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353510);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 8) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0014823B; /* jne: not equal / not zero */

loc_00148227: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 16; return; /* ret 12 */

loc_0014823B: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00148284; /* jl: less (signed <) */

loc_00148244: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x44C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x44C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00148284; /* jge: greater or equal (signed >=) */

loc_0014824C: ;
    edx = MEM32(ecx);
    eax = ebp * 8;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(eax + esi + 0x3C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00148265u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00148265: ;
    ebx = eax;
    ecx = MEM32(ebx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00148299; /* jne: not equal / not zero */

loc_0014826E: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 16; return; /* ret 12 */

loc_00148284: ;
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 16; return; /* ret 12 */

loc_00148299: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0014829Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014829E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0014826E; /* jg: greater (signed >) */

loc_001482A2: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + ebp * 4 + 0x450);
    eax = MEM32(edi + 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001482B6u); RECOMP_ABI_CALL(0x00147B50u, sub_00147B50); /* call 0x00147B50 */

loc_001482B6: ;
    edx = MEM32(ebx);
    eax = edi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001482C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001482C1: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x001482C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001482C8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fas < 0)) goto loc_0014838A; /* js: sign (negative) */

loc_001482D3: ;
    goto loc_001482E0;

loc_001482D5: ;
    eax = MEM32(esp + 0x10);
    /* nop */

loc_001482E0: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001482E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001482E8: ;
    ebp = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_001482F7; /* je: equal / zero */

loc_001482F4: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001482F7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(esp + 0x30) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00148312; /* je: equal / zero */

loc_001482FF: ;
    eax = MEM32(0x5BDA80);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0014830Cu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0014830C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148312; /* je: equal / zero */

loc_00148310: ;
    esi = ebp;

loc_00148312: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x24) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0014831D; /* je: equal / zero */

loc_0014831A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014831D: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esp + 0x34) = 1;
    PUSH32(esp, 0x0014832Au); RECOMP_ABI_CALL(0x00269400u, sub_00269400); /* call 0x00269400 */

loc_0014832A: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00148335u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_00148335: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(esp + 0x30) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00148355; /* je: equal / zero */

loc_0014833E: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00148355; /* jne: not equal / not zero */

loc_0014834E: ;
    ecx = esi;
    PUSH32(esp, 0x00148355u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00148355: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_00148378; /* je: equal / zero */

loc_00148361: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00148378; /* jne: not equal / not zero */

loc_00148371: ;
    ecx = ebp;
    PUSH32(esp, 0x00148378u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00148378: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001482D5; /* jns: not sign (positive) */

loc_00148382: ;
    esi = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x38);

loc_0014838A: ;
    ebx = MEM32(ebx + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00148395; /* je: equal / zero */

loc_00148392: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00148395: ;
    ecx = MEM32(esi + ebp * 4 + 0x450);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001483B5; /* je: equal / zero */

loc_001483A0: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001483B5; /* jne: not equal / not zero */

loc_001483B0: ;
    PUSH32(esp, 0x001483B5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001483B5: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x3C);
    MEM32(esi + ebp * 4 + 0x450) = ebx;
    MEM32(edx + esi + 0x3C) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    POP32(esp, ebx);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001483F0
 * Original: 0x001483F0 - 0x00148414 (36 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001483F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001483F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0014840F; /* jl: less (signed <) */

loc_001483F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x44C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x44C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014840F; /* jge: greater or equal (signed >=) */

loc_00148400: ;
    eax = MEM32(ecx + eax * 8 + 0x3C);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_0014840F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00148420
 * Original: 0x00148420 - 0x00148428 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148420: ;
    ecx = ecx + 0x3C;
    g_seh_ebp = ebp; sub_001480C0(); return; /* tail jmp 0x001480C0 */

}

/**
 * sub_00148430
 * Original: 0x00148430 - 0x00148471 (65 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00148430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148430: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0014846C; /* jl: less (signed <) */

loc_00148438: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x44C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x44C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014846C; /* jge: greater or equal (signed >=) */

loc_00148440: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 8 + 0x40);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00148452; /* jne: not equal / not zero */

loc_00148449: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00148452: ;
    PUSH32(esp, 0x00148457u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00148457: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014846C: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00148480
 * Original: 0x00148480 - 0x001484B7 (55 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148480: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0x3C;
    PUSH32(esp, 0x00148495u); RECOMP_ABI_CALL(0x00148160u, sub_00148160); /* call 0x00148160 */

loc_00148495: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014849D; /* jne: not equal / not zero */

loc_00148499: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0014849D: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001484B3u); RECOMP_ABI_CALL(0x00148200u, sub_00148200); /* call 0x00148200 */

loc_001484B3: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001484C0
 * Original: 0x001484C0 - 0x001484C5 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001484C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001484C0: ;
    g_seh_ebp = ebp; sub_00148200(); return; /* tail jmp 0x00148200 */

}

/**
 * sub_001484D0
 * Original: 0x001484D0 - 0x0014852F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001484D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001484D0: ;
    edx = ecx;
    eax = MEM32(edx + 0x2028);
    eax = MEM32(edx + eax * 4 + 0x200C);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x2030;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x2028);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    MEM32(edx + 0x2028) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00148519; /* jl: less (signed <) */

loc_0014850F: ;
    MEM32(edx + 0x2028) = 0;

loc_00148519: ;
    MEM32(edx + 0x202C) = MEM32(edx + 0x202C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x202C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x2034);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x2034) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00148530
 * Original: 0x00148530 - 0x00148577 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148530(void)
{

loc_00148530: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014853Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014853F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00148552u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00148552: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00148564u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00148564: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014856Fu); RECOMP_ABI_CALL(0x00147F60u, sub_00147F60); /* call 0x00147F60 */

loc_0014856F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00148580
 * Original: 0x00148580 - 0x001485C7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148580(void)
{

loc_00148580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0014858Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0014858F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001485A2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_001485A2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001485B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001485B4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001485BFu); RECOMP_ABI_CALL(0x00148010u, sub_00148010); /* call 0x00148010 */

loc_001485BF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001485D0
 * Original: 0x001485D0 - 0x001486EE (286 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001485D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001485D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353530);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x001485F9u); RECOMP_ABI_CALL(0x00148580u, sub_00148580); /* call 0x00148580 */

loc_001485F9: ;
    esp = esp + 8;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    MEM8(eax + 0x10) = LO8(ebx);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(edi + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0014861Cu); RECOMP_ABI_CALL(0x002781D0u, sub_002781D0); /* call 0x002781D0 */

loc_0014861C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001486B2; /* je: equal / zero */

loc_00148626: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x10;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00148633u); RECOMP_ABI_CALL(0x0013ADA0u, sub_0013ADA0); /* call 0x0013ADA0 */

loc_00148633: ;
    esp = esp + 8;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    MEM8(esp + 0x24) = 1;
    PUSH32(esp, 0x00148645u); RECOMP_ABI_CALL(0x001EA8E0u, sub_001EA8E0); /* call 0x001EA8E0 */

loc_00148645: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = MEM32(edi + 8);
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00148655; /* je: equal / zero */

loc_00148652: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00148655: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00148671; /* je: equal / zero */

loc_0014865C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00148671; /* jne: not equal / not zero */

loc_0014866C: ;
    PUSH32(esp, 0x00148671u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00148671: ;
    MEM32(edi + 0xC) = ebp;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_0014868C; /* jne: not equal / not zero */

loc_00148685: ;
    ecx = esi;
    PUSH32(esp, 0x0014868Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014868C: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esp + 0x1C) = LO8(ebx);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001486B2; /* je: equal / zero */

loc_0014869A: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_001486B2; /* jne: not equal / not zero */

loc_001486AD: ;
    PUSH32(esp, 0x001486B2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001486B2: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001486DC; /* je: equal / zero */

loc_001486C4: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_001486DC; /* jne: not equal / not zero */

loc_001486D7: ;
    PUSH32(esp, 0x001486DCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001486DC: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001486F0
 * Original: 0x001486F0 - 0x00148734 (68 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001486F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001486F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x210);
    PUSH32(esp, eax);
    ecx = esi + edi * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00148708u); RECOMP_ABI_CALL(0x001408E0u, sub_001408E0); /* call 0x001408E0 */

loc_00148708: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = esi + edx * 4 + 0x200;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 8;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    MEM32(esi + 0x210) = MEM32(esi + 0x210) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x210)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00148740
 * Original: 0x00148740 - 0x001487DC (156 bytes, 52 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148740: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x410)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x410), 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014875B; /* jne: not equal / not zero */

loc_00148752: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

loc_0014875B: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0014878F; /* je: equal / zero */

loc_0014876C: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014878F; /* je: equal / zero */

loc_00148771: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00148777u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_00148777: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00148782u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_00148782: ;
    ecx = eax;
    PUSH32(esp, 0x00148789u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_00148789: ;
    MEM32(esp + 0xC) = eax;
    goto loc_00148797;

loc_0014878F: ;
    MEM32(esp + 0xC) = 0;

loc_00148797: ;
    edi = MEM32(esi + 0x410);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esi + edi * 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001487ABu); RECOMP_ABI_CALL(0x00147F40u, sub_00147F40); /* call 0x00147F40 */

loc_001487AB: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = esi + eax * 4 + 0x400;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 8;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    MEM32(esi + 0x410) = MEM32(esi + 0x410) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x410)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001487E0
 * Original: 0x001487E0 - 0x00148960 (384 bytes, 142 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001487E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001487E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 4) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0014895B; /* je: equal / zero */

loc_001487F2: ;
    eax = MEM32(0x5BD888);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00148802u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00148802: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ebp = MEM32(esp + 0x1C);
    if (TEST_Z(_fa, _fb)) goto loc_00148910; /* je: equal / zero */

loc_0014880E: ;
    PUSH32(esp, 0x3DCC74);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00148819u); RECOMP_ABI_CALL(0x0014E470u, sub_0014E470); /* call 0x0014E470 */

loc_00148819: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148910; /* je: equal / zero */

loc_00148824: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014882Au); RECOMP_ABI_CALL(0x0014E2E0u, sub_0014E2E0); /* call 0x0014E2E0 */

loc_0014882A: ;
    edx = MEM32(edi);
    esp = esp + 4;
    ecx = edi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00148836u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00148836: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0014883Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0014883F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148958; /* je: equal / zero */

loc_00148849: ;
    ecx = MEM32(0x5BD8C8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00148857u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00148857: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148958; /* je: equal / zero */

loc_0014885F: ;
    /* nop */

loc_00148860: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00148869u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00148869: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001488A3; /* je: equal / zero */

loc_0014886D: ;
    ecx = MEM32(0x5BD8C8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0014887Bu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0014887B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001488A3; /* je: equal / zero */

loc_0014887F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00148888u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00148888: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014889F; /* je: equal / zero */

loc_0014888E: ;
    eax = MEM32(0x5BD8C8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014889Bu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0014889B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00148860; /* jne: not equal / not zero */

loc_0014889F: ;
    esi = 0; /* xor self */
    goto loc_00148860;

loc_001488A3: ;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001488AEu); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_001488AE: ;
    eax = MEM32(esi + 4);
    edx = esp + 0x18;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x1C) = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x001488C5u); RECOMP_ABI_CALL(0x001486F0u, sub_001486F0); /* call 0x001486F0 */

loc_001488C5: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001488DC; /* jne: not equal / not zero */

loc_001488D5: ;
    ecx = esi;
    PUSH32(esp, 0x001488DCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001488DC: ;
    esi = MEM32(edi + 4);
    ebx = MEM32(esp + 0x20);
    eax = esp + 0x18;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x1C) = edi;
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0x001488F7u); RECOMP_ABI_CALL(0x001486F0u, sub_001486F0); /* call 0x001486F0 */

loc_001488F7: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00148914; /* jne: not equal / not zero */

loc_00148907: ;
    ecx = edi;
    PUSH32(esp, 0x0014890Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0014890E: ;
    goto loc_00148914;

loc_00148910: ;
    ebx = MEM32(esp + 0x20);

loc_00148914: ;
    ecx = MEM32(0x5BDA80);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00148922u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00148922: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148958; /* je: equal / zero */

loc_00148926: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148932; /* je: equal / zero */

loc_0014892D: ;
    eax = MEM32(eax + 8);
    goto loc_00148934;

loc_00148932: ;
    eax = 0; /* xor self */

loc_00148934: ;
    esi = eax + -1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00148958; /* jl: less (signed <) */

loc_0014893B: ;
    goto loc_00148940;

    /* nop */

loc_00148940: ;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x00148955u); RECOMP_ABI_CALL(0x001487E0u, sub_001487E0); /* call 0x001487E0 */

loc_00148955: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00148940; /* jns: not sign (positive) */

loc_00148958: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0014895B: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00148960
 * Original: 0x00148960 - 0x00148965 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148960(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148960: ;
    g_seh_ebp = ebp; sub_00147E80(); return; /* tail jmp 0x00147E80 */

}

/**
 * sub_00148970
 * Original: 0x00148970 - 0x001489CD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00148970: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x2024) = esi;
    MEM32(ecx + 0x2028) = esi;
    MEM32(ecx + 0x202C) = esi;
    edx = 0; /* xor self */
    goto loc_00148990;

    /* nop */

loc_00148990: ;
    eax = MEM32(ecx + 0x2024);
    edi = MEM32(ecx + 0x202C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(ecx + 0x2024) = eax;
    MEM32(ecx + 0x202C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001489BC; /* jl: less (signed <) */

loc_001489AF: ;
    MEM32(ecx + 0x2024) = esi;
    eax = 4;
    goto loc_001489BD;

loc_001489BC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001489BD: ;
    MEM32(ecx + eax * 4 + 0x200C) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00148990; /* jl: less (signed <) */

loc_001489CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001489D0
 * Original: 0x001489D0 - 0x00148A61 (145 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001489D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001489D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x668);
    esi = ecx;
    edx = MEM32(eax + esi);
    ecx = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001489EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001489EA: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = eax << 2;
    ecx = MEM32(eax + esi + 0x2008);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax + esi + 0x2008) = ecx;
    MEM32(eax + esi + 0x2030) = MEM32(eax + esi + 0x2030) & edx;
    eax = MEM32(esi + 0x2024);
    edx = MEM32(esi + 0x202C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEM32(esi + 0x2024) = eax;
    MEM32(esi + 0x202C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00148A47; /* jl: less (signed <) */

loc_00148A36: ;
    MEM32(esi + 0x2024) = 0;
    eax = 4;
    goto loc_00148A48;

loc_00148A47: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00148A48: ;
    MEM32(esi + eax * 4 + 0x200C) = edi;
    eax = MEM32(esi + 0x2034);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x2034) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00148A70
 * Original: 0x00148A70 - 0x00148A75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148A70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148A70: ;
    g_seh_ebp = ebp; sub_00147CF0(); return; /* tail jmp 0x00147CF0 */

}

/**
 * sub_00148A80
 * Original: 0x00148A80 - 0x00148E2D (941 bytes, 290 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148A80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148A80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353561);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x3B4;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x3B0) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x21C) = eax;
    PUSH32(esp, ebx);
    MEM32(esp + 0x224) = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x22C) = eax;
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    ebp = ecx;
    MEM32(esp + 0x234) = eax;
    MEM32(esp + 0x238) = ebx;
    eax = MEM32(ebp + 8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    esi = ebp + 0x450;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x3D4) = ebx;
    PUSH32(esp, 0x00148AF1u); RECOMP_ABI_CALL(0x001487E0u, sub_001487E0); /* call 0x001487E0 */

loc_00148AF1: ;
    _fa = (uint32_t)(MEM32(ebp + 0x660)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x660), ebx (32-bit) */
    MEM32(esp + 0xC) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00148DF3; /* jle: less or equal (signed <=) */

loc_00148B01: ;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, edi);

loc_00148B06: ;
    edx = esp + 0x1C;
    PUSH32(esp, 0xF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00148B12u); RECOMP_ABI_CALL(0x00148530u, sub_00148530); /* call 0x00148530 */

loc_00148B12: ;
    esp = esp + 8;
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, 0x3C86F0);
    MEM8(esp + 0x3D0) = 1;
    esi = esi + 8;
    PUSH32(esp, 0x00148B2Eu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00148B2E: ;
    ecx = eax;
    PUSH32(esp, 0x00148B35u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00148B35: ;
    edi = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148B51; /* je: equal / zero */

loc_00148B3D: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00148B51; /* jne: not equal / not zero */

loc_00148B49: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00148B51u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00148B51: ;
    MEM32(esi) = edi;
    ecx = MEM32(esp + ebx * 4 + 0x2C);
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    edi = esp + ebx * 4 + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x00148B68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00148B68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148CAE; /* je: equal / zero */

loc_00148B70: ;
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148DAA; /* je: equal / zero */

loc_00148B7B: ;
    eax = MEM32(0x5BD8EC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00148B88u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00148B88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148DAA; /* je: equal / zero */

loc_00148B90: ;
    edx = MEM32(esi + 8);
    eax = edx;
    edi = eax + 1;

loc_00148B98: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00148B98; /* jne: not equal / not zero */

loc_00148B9F: ;
    eax = eax - edi;
    MEM32(esp + 0x10) = eax;
    if ((eax == 0)) goto loc_00148DAA; /* je: equal / zero */

loc_00148BAB: ;
    PUSH32(esp, 0x3DCC8C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00148BB6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_00148BB6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148DAA; /* je: equal / zero */

loc_00148BC1: ;
    PUSH32(esp, 0x80);
    ecx = esp + 0x244;
    PUSH32(esp, 0x3DCC80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00148BD8u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00148BD8: ;
    eax = MEM32(esi + 8);
    esp = esp + 0xC;
    MEM8(esp + 0x2BF) = 0;
    ecx = eax;

loc_00148BE8: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00148BE8; /* jne: not equal / not zero */

loc_00148BEF: ;
    edi = esp + 0x240;
    eax = eax - ecx;
    esi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00148C00;

    /* nop */

loc_00148C00: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00148C00; /* jne: not equal / not zero */

loc_00148C08: ;
    ecx = eax;
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
    PUSH32(esp, 0x00148C1Bu); RECOMP_ABI_CALL(0x0013C440u, sub_0013C440); /* call 0x0013C440 */

loc_00148C1B: ;
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00148C26u); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_00148C26: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148DAA; /* je: equal / zero */

loc_00148C35: ;
    edx = MEM32(esp + 0x3D4);
    eax = esp + 0x2C0;
    PUSH32(esp, eax);
    ecx = esp + 0x244;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(esp + 0x2CC) = 0;
    PUSH32(esp, 0x00148C5Au); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00148C5A: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ecx);
    esp = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00148C66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00148C66: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x2C4;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00148C77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00148C77: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00148C89; /* jne: not equal / not zero */

loc_00148C84: ;
    eax = 0x3C806C;

loc_00148C89: ;
    PUSH32(esp, 1);
    ecx = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp + 0x3C;
    PUSH32(esp, 0x00148C97u); RECOMP_ABI_CALL(0x00148740u, sub_00148740); /* call 0x00148740 */

loc_00148C97: ;
    ecx = MEM32(esp + 0x20);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00148CA9u); RECOMP_ABI_CALL(0x00148200u, sub_00148200); /* call 0x00148200 */

loc_00148CA9: ;
    goto loc_00148DAA;

loc_00148CAE: ;
    PUSH32(esp, 0x00148CB3u); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_00148CB3: ;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00148CBEu); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_00148CBE: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148DAA; /* je: equal / zero */

loc_00148CCD: ;
    eax = MEM32(edi);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148CE7; /* je: equal / zero */

loc_00148CD6: ;
    eax = MEM32(0x5BC95C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00148CE3u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00148CE3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00148CE9; /* jne: not equal / not zero */

loc_00148CE7: ;
    esi = 0; /* xor self */

loc_00148CE9: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00148D43; /* jne: not equal / not zero */

loc_00148CEF: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00148CFBu); RECOMP_ABI_CALL(0x00148580u, sub_00148580); /* call 0x00148580 */

loc_00148CFB: ;
    esp = esp + 8;
    eax = MEM32(edi);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    MEM8(esp + 0x3D0) = 2;
    PUSH32(esp, 0x00148D12u); RECOMP_ABI_CALL(0x002781D0u, sub_002781D0); /* call 0x002781D0 */

loc_00148D12: ;
    esi = eax;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(ebx, 1);
    MEM8(esp + 0x3CC) = LO8(ebx);
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00148D3F; /* je: equal / zero */

loc_00148D27: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00148D3F; /* jne: not equal / not zero */

loc_00148D3A: ;
    PUSH32(esp, 0x00148D3Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00148D3F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148D6F; /* je: equal / zero */

loc_00148D43: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    eax = esi + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00148D54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00148D54: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00148D6F; /* je: equal / zero */

loc_00148D58: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00148D6F; /* jne: not equal / not zero */

loc_00148D68: ;
    ecx = esi;
    PUSH32(esp, 0x00148D6Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00148D6F: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00148D83; /* jne: not equal / not zero */

loc_00148D7E: ;
    ecx = 0x3C806C;

loc_00148D83: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp + 0x3C;
    PUSH32(esp, 0x00148D90u); RECOMP_ABI_CALL(0x00148740u, sub_00148740); /* call 0x00148740 */

loc_00148D90: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00148DA6u); RECOMP_ABI_CALL(0x00148200u, sub_00148200); /* call 0x00148200 */

loc_00148DA6: ;
    ebx = MEM32(esp + 0x10);

loc_00148DAA: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x3CC) = 0;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00148DD4; /* je: equal / zero */

loc_00148DBC: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00148DD4; /* jne: not equal / not zero */

loc_00148DCF: ;
    PUSH32(esp, 0x00148DD4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00148DD4: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x660);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00148B06; /* jl: less (signed <) */

loc_00148DF2: ;
    POP32(esp, edi);

loc_00148DF3: ;
    ecx = esp + 0x28;
    MEM32(esp + 0x3C8) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00148E07u); RECOMP_ABI_CALL(0x00147E80u, sub_00147E80); /* call 0x00147E80 */

loc_00148E07: ;
    ecx = MEM32(esp + 0x3C0);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x3B4);
    POP32(esp, ebx);
    PUSH32(esp, 0x00148E24u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00148E24: ;
    esp = esp + 0x3C0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00148E30
 * Original: 0x00148E30 - 0x00148F82 (338 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148E30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3535C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    MEM32(esi) = 0x3DCC98;
    ebp = esi + 0x450;
    ecx = ebp;
    MEM32(esp + 0x20) = 7;
    PUSH32(esp, 0x00148E75u); RECOMP_ABI_CALL(0x00147E80u, sub_00147E80); /* call 0x00147E80 */

loc_00148E75: ;
    ecx = esi;
    MEM32(ebp + 0x210) = 0;
    PUSH32(esp, 0x00148E86u); RECOMP_ABI_CALL(0x00147C50u, sub_00147C50); /* call 0x00147C50 */

loc_00148E86: ;
    eax = MEM32(esi + 0x44C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00148EC2; /* jle: less or equal (signed <=) */

loc_00148E92: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00148EB7; /* jl: less (signed <) */

loc_00148E96: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x44C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x44C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00148EB7; /* jge: greater or equal (signed >=) */

loc_00148E9E: ;
    eax = MEM32(esi + edi * 8 + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00148EB7; /* je: equal / zero */

loc_00148EAA: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00148EB4u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_00148EB4: ;
    esp = esp + 4;

loc_00148EB7: ;
    eax = MEM32(esi + 0x44C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00148E92; /* jl: less (signed <) */

loc_00148EC2: ;
    ecx = ebp;
    MEM8(esi + 0x664) = 0;
    MEM8(esp + 0x20) = 6;
    PUSH32(esp, 0x00148ED5u); RECOMP_ABI_CALL(0x00147E80u, sub_00147E80); /* call 0x00147E80 */

loc_00148ED5: ;
    ecx = esi + 0x3C;
    PUSH32(esp, 0x00148EDDu); RECOMP_ABI_CALL(0x00147CF0u, sub_00147CF0); /* call 0x00147CF0 */

loc_00148EDD: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x20) = 4;
    if (TEST_Z(_fa, _fb)) goto loc_00148EFE; /* je: equal / zero */

loc_00148EE9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00148EFE; /* jne: not equal / not zero */

loc_00148EF9: ;
    PUSH32(esp, 0x00148EFEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00148EFE: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x20) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_00148F1F; /* je: equal / zero */

loc_00148F0A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00148F1F; /* jne: not equal / not zero */

loc_00148F1A: ;
    PUSH32(esp, 0x00148F1Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00148F1F: ;
    ecx = esi + 0x30;
    MEM8(esp + 0x20) = 2;
    PUSH32(esp, 0x00148F2Cu); RECOMP_ABI_CALL(0x00134600u, sub_00134600); /* call 0x00134600 */

loc_00148F2C: ;
    ecx = esi + 0x14;
    MEM8(esp + 0x20) = 1;
    MEM32(esi + 0x10) = 0x3DC2DC;
    PUSH32(esp, 0x00148F40u); RECOMP_ABI_CALL(0x00134570u, sub_00134570); /* call 0x00134570 */

loc_00148F40: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x20) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00148F61; /* je: equal / zero */

loc_00148F4C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00148F61; /* jne: not equal / not zero */

loc_00148F5C: ;
    PUSH32(esp, 0x00148F61u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00148F61: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(esi) = 0x3DCC4C;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0xC);
    POP32(esp, ebp);
    PUSH32(esp, 0x00148F7Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00148F7E: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00148F90
 * Original: 0x00148F90 - 0x00148F97 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148F90(void)
{

loc_00148F90: ;
    eax = MEM32(ecx + 0x44C);
    esp += 4; return; /* ret */

}

/**
 * sub_00148FA0
 * Original: 0x00148FA0 - 0x00148FA8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148FA0(void)
{

loc_00148FA0: ;
    MEM8(ecx + 0x664) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00148FB0
 * Original: 0x00148FB0 - 0x00148FB7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148FB0(void)
{

loc_00148FB0: ;
    SET_LO8(eax, MEM8(ecx + 0x664));
    esp += 4; return; /* ret */

}

/**
 * sub_00148FC0
 * Original: 0x00148FC0 - 0x00148FC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148FC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148FC0: ;
    g_seh_ebp = ebp; sub_00147D80(); return; /* tail jmp 0x00147D80 */

}

/**
 * sub_00148FD0
 * Original: 0x00148FD0 - 0x0014915E (398 bytes, 128 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00148FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00148FD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353638);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = esi;
    edi = MEM32(esp + 0x24);
    eax = esi + 8;
    PUSH32(esp, 2);
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = ebx;
    MEM32(esi) = 0x3DCC98;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x0014900Eu); RECOMP_ABI_CALL(0x0013E170u, sub_0013E170); /* call 0x0013E170 */

loc_0014900E: ;
    esp = esp + 8;
    MEM32(esi + 0x10) = 0x3DC2DC;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM8(esi + 0x28) = LO8(ebx);
    ebp = esi + 0x30;
    MEM32(ebp) = ebx;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x34) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014903E; /* je: equal / zero */

loc_0014903B: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014903E: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0014904C; /* je: equal / zero */

loc_00149049: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0014904C: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x43C) = eax;
    MEM32(esi + 0x440) = eax;
    MEM32(esi + 0x444) = eax;
    MEM32(esi + 0x448) = eax;
    MEM32(esi + 0x44C) = ebx;
    ecx = 0; /* xor self */
    MEM32(esi + 0x650) = ecx;
    MEM32(esi + 0x654) = ecx;
    MEM32(esi + 0x658) = ecx;
    MEM32(esi + 0x65C) = ecx;
    MEM32(esi + 0x660) = ebx;
    MEM8(esi + 0x664) = LO8(ebx);
    MEM8(esp + 0x1C) = 7;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM8(esi + 0x28) = LO8(ebx);
    PUSH32(esp, 0x001490ABu); RECOMP_ABI_CALL(0x00142EA0u, sub_00142EA0); /* call 0x00142EA0 */

loc_001490AB: ;
    edx = MEM32(eax);
    ecx = esi + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001490B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001490B6: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001490C2u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_001490C2: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149108; /* je: equal / zero */

loc_001490C7: ;
    PUSH32(esp, 0x001490CCu); RECOMP_ABI_CALL(0x001433E0u, sub_001433E0); /* call 0x001433E0 */

loc_001490CC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001490D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001490D4: ;
    eax = MEM32(edi + 0x10);
    edi = MEM32(ebp);
    edi = edi + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001490E8; /* je: equal / zero */

loc_001490E5: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001490E8: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149106; /* je: equal / zero */

loc_001490EE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00149106; /* jne: not equal / not zero */

loc_001490FD: ;
    PUSH32(esp, 0x00149102u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00149102: ;
    eax = MEM32(esp + 0x24);

loc_00149106: ;
    MEM32(edi) = eax;

loc_00149108: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00149122; /* je: equal / zero */

loc_0014910F: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149118u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_00149118: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(ebp);
    PUSH32(esp, eax);
    goto loc_0014912A;

loc_00149122: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);

loc_0014912A: ;
    PUSH32(esp, 0x0014912Fu); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_0014912F: ;
    edx = esi + 0x28;
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00149144u); RECOMP_ABI_CALL(0x0014E430u, sub_0014E430); /* call 0x0014E430 */

loc_00149144: ;
    ecx = MEM32(esp + 0x24);
    esp = esp + 0x10;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00149160
 * Original: 0x00149160 - 0x0014917E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149160: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00149168u); RECOMP_ABI_CALL(0x00148E30u, sub_00148E30); /* call 0x00148E30 */

loc_00149168: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00149178; /* je: equal / zero */

loc_0014916F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00149175u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00149175: ;
    esp = esp + 4;

loc_00149178: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00149180
 * Original: 0x00149180 - 0x001492C1 (321 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149180: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353667);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x110;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x114) = eax;
    PUSH32(esp, 0x001491AEu); RECOMP_ABI_CALL(0x001326E0u, sub_001326E0); /* call 0x001326E0 */

loc_001491AE: ;
    ebp = MEM32(esp + 0x12C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001491BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001491BD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001491D1; /* jne: not equal / not zero */

loc_001491C3: ;
    eax = MEM32(esp + 0x128);
    MEM32(eax) = edi;
    goto loc_0014929E;

loc_001491D1: ;
    PUSH32(esp, esi);
    ecx = 0x557E04;
    PUSH32(esp, 0x001491DCu); RECOMP_ABI_CALL(0x001484D0u, sub_001484D0); /* call 0x001484D0 */

loc_001491DC: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = ecx * 4 + 0x559E0C;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x668);
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(edx);
    ecx = ecx | esi;
    eax = eax + 0x557E04;
    esi = eax;
    MEM32(edx) = ecx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x124) = 0;
    if ((eax == 0)) goto loc_0014922F; /* je: equal / zero */

loc_0014921C: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0014922Fu); RECOMP_ABI_CALL(0x00148FD0u, sub_00148FD0); /* call 0x00148FD0 */

loc_0014922F: ;
    SET_LO8(eax, MEM8(edi + 0x8C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x124) = 0xFFFFFFFFu;
    if (TEST_NZ(_fa, _fb)) goto loc_00149257; /* jne: not equal / not zero */

loc_00149244: ;
    MEM8(edi + 0x8C) = 1;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00149254u); RECOMP_ABI_CALL(0x00147BF0u, sub_00147BF0); /* call 0x00147BF0 */

loc_00149254: ;
    esp = esp + 4;

loc_00149257: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x1C;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00149267u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00149267: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    MEM8(esp + 0x12B) = 0;
    PUSH32(esp, 0x0014927Eu); RECOMP_ABI_CALL(0x00125610u, sub_00125610); /* call 0x00125610 */

loc_0014927E: ;
    eax = MEM32(esp + 0x20);
    esp = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014928Du); RECOMP_ABI_CALL(0x00148A80u, sub_00148A80); /* call 0x00148A80 */

loc_0014928D: ;
    ecx = esi;
    PUSH32(esp, 0x00149294u); RECOMP_ABI_CALL(0x001485D0u, sub_001485D0); /* call 0x001485D0 */

loc_00149294: ;
    eax = MEM32(esp + 0x12C);
    MEM32(eax) = esi;
    POP32(esp, esi);

loc_0014929E: ;
    ecx = MEM32(esp + 0x118);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x110);
    POP32(esp, ebp);
    PUSH32(esp, 0x001492BAu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001492BA: ;
    esp = esp + 0x11C;
    esp += 4; return; /* ret */

}

/**
 * sub_001492D0
 * Original: 0x001492D0 - 0x00149324 (84 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001492D0(void)
{

loc_001492D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x353693);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DCCC4;
    MEM32(esp + 0x10) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x3DCCD4); PUSH32(esp, 0x00149301u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00149301: ;
    ecx = esi + 4;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0014930Eu); RECOMP_ABI_CALL(0x00147D80u, sub_00147D80); /* call 0x00147D80 */

loc_0014930E: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DCC30;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00149330
 * Original: 0x00149330 - 0x00149337 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149330(void)
{

loc_00149330: ;
    eax = MEM32(ecx + 0x2038);
    esp += 4; return; /* ret */

}

/**
 * sub_00149340
 * Original: 0x00149340 - 0x0014934F (15 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00149340: ;
    edx = MEM32(ecx + 0x2038);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00149350
 * Original: 0x00149350 - 0x00149358 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00149350: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00149360(); return; /* tail jmp 0x00149360 */

}

/**
 * sub_00149360
 * Original: 0x00149360 - 0x001493B2 (82 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00149360: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001493AB; /* je: equal / zero */

loc_0014936C: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    ecx = eax;
    eax = 0x4FEC04FF;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    if (((9) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((9) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    esi = edx;
    if (0x1F) _cf = (int)(((esi) >> ((0x1F) - 1)) & 1);
    esi = esi >> 0x1F;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    if (((int32_t)esi < 0)) goto loc_001493AB; /* js: sign (negative) */

loc_00149383: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001493AB; /* jge: greater or equal (signed >=) */

loc_00149388: ;
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(esi)) >> ((((5) & 31u)) - 1)) & 1);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    ecx = MEM32(edi + esi * 4 + 0x2030);
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001493AB: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001493C0
 * Original: 0x001493C0 - 0x00149452 (146 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001493C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001493C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x2008) = edi;
    MEM32(esi + 0x2024) = edi;
    MEM32(esi + 0x2028) = edi;
    MEM32(esi + 0x202C) = edi;
    MEM32(esi + 0x2030) = edi;
    MEM32(esi + 0x2034) = edi;
    PUSH32(esp, 0x001493EFu); RECOMP_ABI_CALL(0x00148970u, sub_00148970); /* call 0x00148970 */

loc_001493EF: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x204C) = edi;
    MEM32(esi + 0x2050) = edi;
    ecx = 4;
    edx = 0; /* xor self */

loc_00149404: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00149404; /* jne: not equal / not zero */

loc_00149410: ;
    MEM32(esi + 0x204C) = eax;
    MEM32(esi + 0x2050) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x2038;
    goto loc_00149430;

    /* nop */
    /* nop */

loc_00149430: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x2050);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00149430; /* jl: less (signed <) */

loc_0014944D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00149460
 * Original: 0x00149460 - 0x001494BB (91 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00149460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00149460: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0xC);
    ecx = ecx - edi;
    eax = 0x4FEC04FF;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    esi = edx;
    esi = esi >> 0x1F;
    esi = esi + edx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00149483u); RECOMP_ABI_CALL(0x001489D0u, sub_001489D0); /* call 0x001489D0 */

loc_00149483: ;
    ecx = MEM32(edi + 0x2050);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0x2038) = MEM32(edi + esi * 4 + 0x2038) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0x2038) >= 0)) goto loc_001494B6; /* jns: not sign (positive) */

loc_00149499: ;
    MEM32(edi + esi * 4 + 0x2038) = esi;
    ecx = MEM32(edi + 0x2050);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0x2038) = edx;

loc_001494B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001494C0
 * Original: 0x001494C0 - 0x001494C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001494C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001494C0: ;
    g_seh_ebp = ebp; sub_001492D0(); return; /* tail jmp 0x001492D0 */

}

/**
 * sub_001494D0
 * Original: 0x001494D0 - 0x001494EE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001494D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001494D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001494D8u); RECOMP_ABI_CALL(0x001492D0u, sub_001492D0); /* call 0x001492D0 */

loc_001494D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001494E8; /* je: equal / zero */

loc_001494DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001494E5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001494E5: ;
    esp = esp + 4;

loc_001494E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
