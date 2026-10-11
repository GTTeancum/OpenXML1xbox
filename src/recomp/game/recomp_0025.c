/**
 * X-Men Legends - Recompiled code chunk 25
 * Functions: 250 (0x00129D80 - 0x001349D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00129D80
 * Original: 0x00129D80 - 0x00129EAC (300 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129D80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_00129DA5; /* jbe: below or equal (unsigned <=) */

loc_00129DA2: ;
    ebp = MEM32(ebx + 0x2C);

loc_00129DA5: ;
    eax = MEM32(esi + 0x10);
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00129DB0; /* jbe: below or equal (unsigned <=) */

loc_00129DAE: ;
    ebp = eax;

loc_00129DB0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129DC3; /* je: equal / zero */

loc_00129DB4: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 0xFFFFFFFBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129DC3; /* jne: not equal / not zero */

loc_00129DBB: ;
    MEM32(esp + 0x20) = 0;

loc_00129DC3: ;
    edx = MEM32(esi + 0x14);
    eax = eax - ebp;
    edx = edx + ebp;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edx;
    eax = MEM32(ebx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129DE8; /* je: equal / zero */

loc_00129DD7: ;
    ecx = MEM32(ebx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00129DDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129DDF: ;
    MEM32(ebx + 0x3C) = eax;
    esp = esp + 0xC;
    MEM32(esi + 0x30) = eax;

loc_00129DE8: ;
    eax = MEM32(esp + 0x18);
    esi = edi;
    edi = MEM32(esp + 0x10);
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
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
    edi = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x2C);
    edi = edi + ebp;
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00129E94; /* jne: not equal / not zero */

loc_00129E15: ;
    _fa = (uint32_t)(MEM32(ebx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x34), ecx (32-bit) */
    esi = MEM32(ebx + 0x28);
    MEM32(esp + 0x18) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00129E24; /* jne: not equal / not zero */

loc_00129E21: ;
    MEM32(ebx + 0x34) = esi;

loc_00129E24: ;
    ebp = MEM32(ebx + 0x34);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(edi + 0x10);
    ebp = ebp - esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00129E36; /* jbe: below or equal (unsigned <=) */

loc_00129E34: ;
    ebp = eax;

loc_00129E36: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129E49; /* je: equal / zero */

loc_00129E3A: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), 0xFFFFFFFBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129E49; /* jne: not equal / not zero */

loc_00129E41: ;
    MEM32(esp + 0x20) = 0;

loc_00129E49: ;
    edx = MEM32(edi + 0x14);
    eax = eax - ebp;
    edx = edx + ebp;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = edx;
    eax = MEM32(ebx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129E6E; /* je: equal / zero */

loc_00129E5D: ;
    ecx = MEM32(ebx + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00129E65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00129E65: ;
    MEM32(ebx + 0x3C) = eax;
    esp = esp + 0xC;
    MEM32(edi + 0x30) = eax;

loc_00129E6E: ;
    eax = MEM32(esp + 0x10);
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    eax = eax + ebp;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x18);
    ecx = edx;
    ecx = ecx & 3;
    eax = eax + ebp;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    MEM32(esp + 0x18) = eax;

loc_00129E94: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0xC) = edx;
    MEM32(ebx + 0x30) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129EB0
 * Original: 0x00129EB0 - 0x0012A398 (1256 bytes, 388 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129EB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129EB0: ;
    esp = esp - 0xFC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10C);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = eax;
    MEM32(esp + 0x50) = ebp;
    MEM32(esp + 0x54) = ebp;
    MEM32(esp + 0x58) = ebp;
    MEM32(esp + 0x5C) = ebp;
    MEM32(esp + 0x60) = ebp;
    MEM32(esp + 0x64) = ebp;
    MEM32(esp + 0x68) = ebp;
    MEM32(esp + 0x6C) = ebp;
    MEM32(esp + 0x70) = ebp;
    MEM32(esp + 0x74) = ebp;
    MEM32(esp + 0x78) = ebp;
    MEM32(esp + 0x7C) = ebp;
    MEM32(esp + 0x80) = ebp;
    MEM32(esp + 0x84) = ebp;
    MEM32(esp + 0x88) = ebp;
    MEM32(esp + 0x8C) = ebp;
    eax = ebx;
    edx = esi;
    goto loc_00129F20;

    /* nop */

loc_00129F20: ;
    ecx = MEM32(eax);
    MEM32(esp + ecx * 4 + 0x50) = MEM32(esp + ecx * 4 + 0x50) + 1;
    _fa = (uint32_t)(MEM32(esp + ecx * 4 + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esp + ecx * 4 + 0x50;
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00129F20; /* jne: not equal / not zero */

loc_00129F30: ;
    _fa = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x50), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129F4E; /* jne: not equal / not zero */

loc_00129F36: ;
    eax = MEM32(esp + 0x120);
    MEM32(eax) = ebp;
    MEM32(edi) = ebp;

loc_00129F41: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xFC;
    esp += 4; return; /* ret */

loc_00129F4E: ;
    eax = MEM32(edi);
    MEM32(esp + 0x10) = eax;
    ecx = 1;
    /* nop */

loc_00129F60: ;
    _fa = (uint32_t)(MEM32(esp + ecx * 4 + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + ecx * 4 + 0x50), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129F98; /* jne: not equal / not zero */

loc_00129F66: ;
    _fa = (uint32_t)(MEM32(esp + ecx * 4 + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + ecx * 4 + 0x54), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129F88; /* jne: not equal / not zero */

loc_00129F6C: ;
    _fa = (uint32_t)(MEM32(esp + ecx * 4 + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + ecx * 4 + 0x58), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129F8B; /* jne: not equal / not zero */

loc_00129F72: ;
    _fa = (uint32_t)(MEM32(esp + ecx * 4 + 0x5C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + ecx * 4 + 0x5C), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129F90; /* jne: not equal / not zero */

loc_00129F78: ;
    _fa = (uint32_t)(MEM32(esp + ecx * 4 + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + ecx * 4 + 0x60), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129F95; /* jne: not equal / not zero */

loc_00129F7E: ;
    ecx = ecx + 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00129F60; /* jbe: below or equal (unsigned <=) */

loc_00129F86: ;
    goto loc_00129F98;

loc_00129F88: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00129F98;

loc_00129F8B: ;
    ecx = ecx + 2;
    goto loc_00129F98;

loc_00129F90: ;
    ecx = ecx + 3;
    goto loc_00129F98;

loc_00129F95: ;
    ecx = ecx + 4;

loc_00129F98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00129FA6; /* jae: above or equal (unsigned >=) */

loc_00129FA0: ;
    MEM32(esp + 0x10) = ecx;
    eax = ecx;

loc_00129FA6: ;
    esi = 0xF;
    goto loc_00129FB0;

    /* nop */

loc_00129FB0: ;
    _fa = (uint32_t)(MEM32(esp + esi * 4 + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + esi * 4 + 0x50), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129FB9; /* jne: not equal / not zero */

loc_00129FB6: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00129FB0; /* jne: not equal / not zero */

loc_00129FB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x28) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_00129FC7; /* jbe: below or equal (unsigned <=) */

loc_00129FC1: ;
    MEM32(esp + 0x10) = esi;
    eax = esi;

loc_00129FC7: ;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(edi) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00129FE1; /* jae: above or equal (unsigned >=) */

loc_00129FD4: ;
    edx = edx - MEM32(esp + ecx * 4 + 0x50);
    if (((int32_t)edx < 0)) goto loc_00129FFA; /* js: sign (negative) */

loc_00129FDA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00129FD4; /* jb: below (unsigned <) */

loc_00129FE1: ;
    ecx = esi * 4;
    edi = esp + ecx + 0x50;
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(edi);
    edx = edx - ecx;
    MEM32(esp + 0x4C) = edx;
    if (((int32_t)edx >= 0)) goto loc_0012A00A; /* jns: not sign (positive) */

loc_00129FFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebx);
    esp = esp + 0xFC;
    esp += 4; return; /* ret */

loc_0012A00A: ;
    ecx = ecx + edx;
    MEM32(edi) = ecx;
    ecx = 0; /* xor self */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x94) = ebp;
    if ((_fa == 0)) goto loc_0012A031; /* je: equal / zero */

loc_0012A01A: ;
    edi = 0; /* xor self */
    /* nop */

loc_0012A020: ;
    ecx = ecx + MEM32(esp + edi + 0x54);
    edi = edi + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + edi + 0x94) = ecx;
    if ((_fa != 0)) goto loc_0012A020; /* jne: not equal / not zero */

loc_0012A031: ;
    esi = ebx;
    edi = 0; /* xor self */

loc_0012A035: ;
    ecx = MEM32(esi);
    esi = esi + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x20) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A061; /* je: equal / zero */

loc_0012A042: ;
    esi = MEM32(esp + ecx * 4 + 0x90);
    ebx = MEM32(esp + 0x12C);
    ecx = esp + ecx * 4 + 0x90;
    MEM32(ebx + esi * 4) = edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x20);

loc_0012A061: ;
    ecx = MEM32(esp + 0x110);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012A035; /* jb: below (unsigned <) */

loc_0012A06D: ;
    ecx = MEM32(esp + 0x30);
    ecx = MEM32(esp + ecx + 0x90);
    esi = MEM32(esp + 0x28);
    MEM32(esp + 0x110) = ecx;
    ecx = MEM32(esp + 0x12C);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x14);
    ebx = eax;
    edi = 0; /* xor self */
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x90) = ebp;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    MEM32(esp + 0xD0) = edi;
    MEM32(esp + 0x30) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_0012A365; /* jg: greater (signed >) */

loc_0012A0BE: ;
    esi = MEM32(esp + 0x38);
    edx = ecx + -1;
    MEM32(esp + 0x40) = edx;
    edx = esp + ecx * 4 + 0x50;
    MEM32(esp + 0x24) = edx;

loc_0012A0D1: ;
    edx = MEM32(esp + 0x24);
    edx = MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0012A344; /* je: equal / zero */

loc_0012A0E3: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x14);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    ecx = ebx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012A21D; /* jle: less or equal (signed <=) */

loc_0012A0FB: ;
    MEM32(esp + 0x3C) = ecx;
    ecx = ebx;
    ecx = ecx - eax;
    goto loc_0012A110;

loc_0012A105: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x44);
    /* nop */

loc_0012A110: ;
    ebp = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x28);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(esp + 0x3C);
    ebx = ebx + eax;
    ecx = ecx + eax;
    ebp = ebp + eax;
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x3C) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_0012A137; /* jbe: below or equal (unsigned <=) */

loc_0012A135: ;
    edx = eax;

loc_0012A137: ;
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x1C);
    ecx = ecx - ebx;
    eax = 1;
    eax = eax << LO8(ecx);
    edi = ebp + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012A176; /* jbe: below or equal (unsigned <=) */

loc_0012A14F: ;
    edi = edi | 0xFFFFFFFFu;
    edi = edi - ebp;
    ebp = MEM32(esp + 0x24);
    eax = eax + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A176; /* jae: above or equal (unsigned >=) */

loc_0012A15E: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A176; /* jae: above or equal (unsigned >=) */

loc_0012A163: ;
    edi = MEM32(ebp + 4);
    ebp = ebp + 4;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012A176; /* jbe: below or equal (unsigned <=) */

loc_0012A16F: ;
    eax = eax - edi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012A163; /* jb: below (unsigned <) */

loc_0012A176: ;
    eax = MEM32(esp + 0x128);
    eax = MEM32(eax);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = eax + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x5A0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012A388; /* ja: above (unsigned >) */

loc_0012A195: ;
    ebp = MEM32(esp + 0x124);
    ebp = ebp + eax * 8;
    eax = MEM32(esp + 0x18);
    eax = esp + eax * 4 + 0xD0;
    MEM32(esp + 0x48) = eax;
    MEM32(eax) = ebp;
    eax = MEM32(esp + 0x128);
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x30) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0012A202; /* je: equal / zero */

loc_0012A1C6: ;
    esi = MEM32(esp + 0x2C);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM32(esp + eax * 4 + 0x90) = esi;
    MEM8(esp + 0x34) = LO8(ecx);
    ecx = MEM32(esp + 0x44);
    eax = esi;
    eax = eax >> LO8(ecx);
    ecx = MEM32(esp + 0x48);
    ecx = MEM32(ecx + -4);
    esi = ebp;
    esi = esi - ecx;
    MEM8(esp + 0x35) = LO8(edx);
    edx = MEM32(esp + 0x34);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((3) & 31u));
    esi = esi - eax;
    MEM32(ecx + eax * 8) = edx;
    MEM32(ecx + eax * 8 + 4) = esi;
    goto loc_0012A20B;

loc_0012A202: ;
    eax = MEM32(esp + 0x120);
    MEM32(eax) = ebp;

loc_0012A20B: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012A105; /* jg: greater (signed >) */

loc_0012A219: ;
    ebp = MEM32(esp + 0x2C);

loc_0012A21D: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x12C);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    MEM8(esp + 0x35) = LO8(eax);
    eax = MEM32(esp + 0x110);
    ecx = ecx + eax * 4;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012A249; /* jb: below (unsigned <) */

loc_0012A242: ;
    MEM8(esp + 0x34) = 0xC0;
    goto loc_0012A291;

loc_0012A249: ;
    esi = MEM32(eax);
    ecx = MEM32(esp + 0x114);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A26A; /* jae: above or equal (unsigned >=) */

loc_0012A256: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x60;
    MEM8(esp + 0x34) = LO8(ecx);
    goto loc_0012A28A;

loc_0012A26A: ;
    esi = esi - ecx;
    ecx = MEM32(esp + 0x11C);
    esi = esi << 2;
    SET_LO8(ecx, MEM8(esi + ecx));
    SET_LO8(ecx, LO8(ecx) + 0x50);
    MEM8(esp + 0x34) = LO8(ecx);
    ecx = MEM32(esp + 0x118);
    esi = MEM32(esi + ecx);

loc_0012A28A: ;
    eax = eax + 4;
    MEM32(esp + 0x20) = eax;

loc_0012A291: ;
    ecx = edx;
    ecx = ecx - ebx;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = ebp;
    ecx = ebx;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A2CC; /* jae: above or equal (unsigned >=) */

loc_0012A2A6: ;
    ecx = MEM32(esp + 0x30);
    ecx = ecx + eax * 8;
    /* nop */

loc_0012A2B0: ;
    ebp = MEM32(esp + 0x34);
    MEM32(ecx) = ebp;
    ebp = edx * 8;
    MEM32(ecx + 4) = esi;
    eax = eax + edx;
    ecx = ecx + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012A2B0; /* jb: below (unsigned <) */

loc_0012A2C8: ;
    ebp = MEM32(esp + 0x2C);

loc_0012A2CC: ;
    ecx = MEM32(esp + 0x40);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012A2E8; /* je: equal / zero */

loc_0012A2DB: ;
    goto loc_0012A2E0;

    /* nop */

loc_0012A2E0: ;
    ebp = ebp ^ eax;
    eax = eax >> 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012A2E0; /* jne: not equal / not zero */

loc_0012A2E8: ;
    ecx = ebx;
    edx = 1;
    edx = edx << LO8(ecx);
    ebp = ebp ^ eax;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + eax * 4 + 0x90);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 0x2C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0012A330; /* je: equal / zero */

loc_0012A309: ;
    /* nop */

loc_0012A310: ;
    ebx = ebx - MEM32(esp + 0x10);
    ecx = ebx;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + eax * 4 + 0x8C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A310; /* jne: not equal / not zero */

loc_0012A32C: ;
    MEM32(esp + 0x18) = eax;

loc_0012A330: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_0012A0E3; /* jne: not equal / not zero */

loc_0012A340: ;
    ecx = MEM32(esp + 0x14);

loc_0012A344: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 4;
    edx = MEM32(esp + 0x40);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x40) = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x28) (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0012A0D1; /* jle: less or equal (signed <=) */

loc_0012A361: ;
    edx = MEM32(esp + 0x4C);

loc_0012A365: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129F41; /* je: equal / zero */

loc_0012A36D: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129F41; /* je: equal / zero */

loc_0012A378: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFBu;
    POP32(esp, ebx);
    esp = esp + 0xFC;
    esp += 4; return; /* ret */

loc_0012A388: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFCu;
    POP32(esp, ebx);
    esp = esp + 0xFC;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A3A0
 * Original: 0x0012A3A0 - 0x0012A443 (163 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A3A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A3A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0x13);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(edi + 0x20); PUSH32(esp, 0x0012A3BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012A3BA: ;
    ebx = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012A3CC; /* jne: not equal / not zero */

loc_0012A3C3: ;
    POP32(esp, edi);
    eax = 0xFFFFFFFCu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012A3CC: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x13);
    eax = ebp;
    PUSH32(esp, 0x0012A3F5u); RECOMP_ABI_CALL(0x00129EB0u, sub_00129EB0); /* call 0x00129EB0 */

loc_0012A3F5: ;
    esi = eax;
    esp = esp + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A419; /* jne: not equal / not zero */

loc_0012A3FF: ;
    ecx = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(edi + 0x18) = 0x3DBED4;
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012A40Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012A40E: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012A419: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFBu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A424; /* je: equal / zero */

loc_0012A41E: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A430; /* jne: not equal / not zero */

loc_0012A424: ;
    MEM32(edi + 0x18) = 0x3DBEB0;
    esi = 0xFFFFFFFDu;

loc_0012A430: ;
    ecx = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012A438u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012A438: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A450
 * Original: 0x0012A450 - 0x0012A5D3 (387 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A450(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A450: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    eax = MEM32(ebx + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x120);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(ebx + 0x20); PUSH32(esp, 0x0012A46Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012A46D: ;
    edi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012A47F; /* jne: not equal / not zero */

loc_0012A476: ;
    POP32(esp, edi);
    eax = 0xFFFFFFFCu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012A47F: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0x3DBD40);
    PUSH32(esp, 0x3DBCC0);
    PUSH32(esp, 0x101);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012A4B2u); RECOMP_ABI_CALL(0x00129EB0u, sub_00129EB0); /* call 0x00129EB0 */

loc_0012A4B2: ;
    esi = eax;
    esp = esp + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012A590; /* jne: not equal / not zero */

loc_0012A4BF: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A5B4; /* je: equal / zero */

loc_0012A4CC: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DBE38);
    PUSH32(esp, 0x3DBDC0);
    PUSH32(esp, esi);
    ecx = eax + ebp * 4;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012A4FCu); RECOMP_ABI_CALL(0x00129EB0u, sub_00129EB0); /* call 0x00129EB0 */

loc_0012A4FC: ;
    esi = eax;
    esp = esp + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012A529; /* jne: not equal / not zero */

loc_0012A505: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A516; /* jne: not equal / not zero */

loc_0012A50E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x101 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012A571; /* ja: above (unsigned >) */

loc_0012A516: ;
    edx = MEM32(ebx + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0012A51Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012A51E: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012A529: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A548; /* jne: not equal / not zero */

loc_0012A52E: ;
    eax = MEM32(ebx + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebx + 0x18) = 0x3DBF80;
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0012A53Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012A53D: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012A548: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFBu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFBu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A56C; /* jne: not equal / not zero */

loc_0012A54D: ;
    eax = MEM32(ebx + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebx + 0x18) = 0x3DBF64;
    esi = 0xFFFFFFFDu;
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0012A561u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012A561: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012A56C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFCu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A57D; /* je: equal / zero */

loc_0012A571: ;
    MEM32(ebx + 0x18) = 0x3DBF40;
    esi = 0xFFFFFFFDu;

loc_0012A57D: ;
    eax = MEM32(ebx + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0012A585u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012A585: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012A590: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A5AF; /* jne: not equal / not zero */

loc_0012A595: ;
    ecx = MEM32(ebx + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(ebx + 0x18) = 0x3DBF1C;
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0012A5A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012A5A4: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012A5AF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFCu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A5C0; /* je: equal / zero */

loc_0012A5B4: ;
    MEM32(ebx + 0x18) = 0x3DBEFC;
    esi = 0xFFFFFFFDu;

loc_0012A5C0: ;
    ecx = MEM32(ebx + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebx + 0x24); PUSH32(esp, 0x0012A5C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012A5C8: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A5E0
 * Original: 0x0012A5E0 - 0x0012A945 (869 bytes, 310 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A5E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A5E0: ;
    esp = esp - 0x14;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    eax = MEM32(edi + 4);
    ebp = MEM32(edi);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ecx + 0x1C);
    MEM32(esp + 0x14) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_0012A615; /* jae: above or equal (unsigned >=) */

loc_0012A60C: ;
    esi = esi - ebx;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = esi;
    goto loc_0012A61E;

loc_0012A615: ;
    ecx = MEM32(ecx + 0x2C);
    ecx = ecx - ebx;
    MEM32(esp + 0x18) = ecx;

loc_0012A61E: ;
    ecx = MEM32(esp + 0x28);
    ecx = MEM32(ecx * 4 + 0x454740);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x2C);
    ecx = MEM32(ecx * 4 + 0x454740);
    MEM32(esp + 0x2C) = ecx;
    /* nop */

loc_0012A640: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A661; /* jae: above or equal (unsigned >=) */

loc_0012A645: ;
    ecx = MEM32(esp + 0x10);
    esi = ZX8(MEM8(ebp));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    ecx = eax;
    esi = esi << LO8(ecx);
    eax = eax + 8;
    edx = edx | esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012A645; /* jb: below (unsigned <) */

loc_0012A661: ;
    ecx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x30);
    ecx = ecx & edx;
    ebx = ZX8(MEM8(esi + ecx * 8));
    esi = esi + ecx * 8;
    ecx = ZX8(MEM8(esi + 1));
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012A811; /* je: equal / zero */

loc_0012A680: ;
    ecx = ZX8(MEM8(esi + 1));
    eax = eax - ecx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012A6C7; /* jne: not equal / not zero */

loc_0012A68B: ;
    goto loc_0012A690;

    /* nop */

loc_0012A690: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012A895; /* jne: not equal / not zero */

loc_0012A699: ;
    ecx = MEM32(ebx * 4 + 0x454740);
    ebx = MEM32(esi + 4);
    ecx = ecx & edx;
    ecx = ecx + ebx;
    ebx = ZX8(MEM8(esi + ecx * 8));
    esi = esi + ecx * 8;
    ecx = ZX8(MEM8(esi + 1));
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012A811; /* je: equal / zero */

loc_0012A6BC: ;
    ecx = ZX8(MEM8(esi + 1));
    eax = eax - ecx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012A690; /* je: equal / zero */

loc_0012A6C7: ;
    ebx = ebx & 0xF;
    ecx = MEM32(ebx * 4 + 0x454740);
    ecx = ecx & edx;
    ecx = ecx + MEM32(esi + 4);
    eax = eax - ebx;
    MEM32(esp + 0x28) = ecx;
    ecx = ebx;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A701; /* jae: above or equal (unsigned >=) */

loc_0012A6E5: ;
    ecx = MEM32(esp + 0x10);
    esi = ZX8(MEM8(ebp));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    ecx = eax;
    esi = esi << LO8(ecx);
    eax = eax + 8;
    edx = edx | esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012A6E5; /* jb: below (unsigned <) */

loc_0012A701: ;
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x34);
    ecx = ecx & edx;
    ebx = ZX8(MEM8(esi + ecx * 8));
    esi = esi + ecx * 8;
    ecx = ZX8(MEM8(esi + 1));
    edx = edx >> LO8(ecx);
    ecx = ZX8(MEM8(esi + 1));
    eax = eax - ecx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012A752; /* jne: not equal / not zero */

loc_0012A723: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012A88C; /* jne: not equal / not zero */

loc_0012A72C: ;
    ecx = MEM32(ebx * 4 + 0x454740);
    ebx = MEM32(esi + 4);
    ecx = ecx & edx;
    ecx = ecx + ebx;
    ebx = ZX8(MEM8(esi + ecx * 8));
    esi = esi + ecx * 8;
    ecx = ZX8(MEM8(esi + 1));
    edx = edx >> LO8(ecx);
    eax = eax - ecx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    MEM32(esp + 0x20) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0012A723; /* je: equal / zero */

loc_0012A752: ;
    ebx = ebx & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A776; /* jae: above or equal (unsigned >=) */

loc_0012A759: ;
    /* nop */

loc_0012A760: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ZX8(MEM8(ebp));
    ecx = eax;
    edi = edi << LO8(ecx);
    eax = eax + 8;
    edx = edx | edi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012A760; /* jb: below (unsigned <) */

loc_0012A776: ;
    edi = MEM32(ebx * 4 + 0x454740);
    ecx = MEM32(esi + 4);
    esi = MEM32(esp + 0x18);
    edi = edi & edx;
    edi = edi + ecx;
    ecx = ebx;
    edx = edx >> LO8(ecx);
    ecx = MEM32(esp + 0x28);
    esi = esi - ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x18) = esi;
    esi = MEM32(ecx + 0x28);
    ecx = MEM32(esp + 0x14);
    eax = eax - ebx;
    ebx = ecx;
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012A7C9; /* jb: below (unsigned <) */

loc_0012A7AB: ;
    esi = ecx;
    esi = esi - edi;
    SET_LO8(ebx, MEM8(esi));
    edi = MEM32(esp + 0x28);
    MEM8(ecx) = LO8(ebx);
    SET_LO8(ebx, MEM8(esi + 1));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi - 2;
    MEM32(esp + 0x28) = edi;
    goto loc_0012A7F6;

loc_0012A7C9: ;
    ebx = MEM32(esp + 0x28);
    esi = esi - ecx;
    esi = esi + edi;
    edi = esi;
    esi = MEM32(esp + 0x38);
    esi = MEM32(esi + 0x2C);
    esi = esi - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012A7F6; /* jbe: below or equal (unsigned <=) */

loc_0012A7E0: ;
    ebx = ebx - edi;
    MEM32(esp + 0x28) = ebx;

loc_0012A7E6: ;
    SET_LO8(ebx, MEM8(esi));
    MEM8(ecx) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012A7E6; /* jne: not equal / not zero */

loc_0012A7EF: ;
    esi = MEM32(esp + 0x38);
    esi = MEM32(esi + 0x28);

loc_0012A7F6: ;
    SET_LO8(ebx, MEM8(esi));
    edi = MEM32(esp + 0x28);
    MEM8(ecx) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = edi;
    if ((_fa != 0)) goto loc_0012A7F6; /* jne: not equal / not zero */

loc_0012A807: ;
    edi = MEM32(esp + 0x3C);
    MEM32(esp + 0x14) = ecx;
    goto loc_0012A82A;

loc_0012A811: ;
    eax = eax - ecx;
    SET_LO8(ecx, MEM8(esi + 4));
    esi = MEM32(esp + 0x14);
    MEM8(esi) = LO8(ecx);
    ecx = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = ecx;

loc_0012A82A: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0x102 (32-bit) */
    ebx = MEM32(esp + 0x10);
    if (CMP_B(_fa, _fb)) goto loc_0012A841; /* jb: below (unsigned <) */

loc_0012A838: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xA (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A640; /* jae: above or equal (unsigned >=) */

loc_0012A841: ;
    ecx = MEM32(edi + 4);
    esi = eax;
    ecx = ecx - ebx;
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A851; /* jae: above or equal (unsigned >=) */

loc_0012A84F: ;
    ecx = esi;

loc_0012A851: ;
    esi = MEM32(esp + 0x38);
    MEM32(esi + 0x20) = edx;
    edx = ecx * 8;
    ebp = ebp - ecx;
    eax = eax - edx;
    MEM32(esi + 0x1C) = eax;
    edx = MEM32(edi);
    ecx = ecx + ebx;
    MEM32(edi + 4) = ecx;
    ecx = MEM32(edi + 8);
    eax = ebp;
    eax = eax - edx;
    ecx = ecx + eax;
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(edi) = ebp;
    POP32(esp, edi);
    MEM32(esi + 0x34) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0012A88C: ;
    MEM32(edi + 0x18) = 0x3DBFBC;
    goto loc_0012A8F3;

loc_0012A895: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012A8EC; /* je: equal / zero */

loc_0012A89A: ;
    ecx = MEM32(edi + 4);
    ebx = MEM32(esp + 0x10);
    esi = eax;
    ecx = ecx - ebx;
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A8AE; /* jae: above or equal (unsigned >=) */

loc_0012A8AC: ;
    ecx = esi;

loc_0012A8AE: ;
    esi = MEM32(esp + 0x38);
    MEM32(esi + 0x20) = edx;
    edx = ecx * 8;
    ebp = ebp - ecx;
    eax = eax - edx;
    MEM32(esi + 0x1C) = eax;
    edx = MEM32(edi);
    ecx = ecx + ebx;
    MEM32(edi + 4) = ecx;
    ecx = MEM32(edi + 8);
    eax = ebp;
    eax = eax - edx;
    ecx = ecx + eax;
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(edi) = ebp;
    POP32(esp, edi);
    MEM32(esi + 0x34) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0012A8EC: ;
    MEM32(edi + 0x18) = 0x3DBFA0;

loc_0012A8F3: ;
    ecx = MEM32(edi + 4);
    ebx = MEM32(esp + 0x10);
    esi = eax;
    esi = esi >> 3;
    ecx = ecx - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012A907; /* jae: above or equal (unsigned >=) */

loc_0012A905: ;
    ecx = esi;

loc_0012A907: ;
    esi = MEM32(esp + 0x38);
    MEM32(esi + 0x20) = edx;
    edx = ecx * 8;
    ebp = ebp - ecx;
    eax = eax - edx;
    MEM32(esi + 0x1C) = eax;
    edx = MEM32(edi);
    ecx = ecx + ebx;
    MEM32(edi + 4) = ecx;
    ecx = MEM32(edi + 8);
    eax = ebp;
    eax = eax - edx;
    ecx = ecx + eax;
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(edi) = ebp;
    POP32(esp, edi);
    MEM32(esi + 0x34) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A950
 * Original: 0x0012A950 - 0x0012A989 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A950: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0012A95Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012A95F: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012A988; /* je: equal / zero */

loc_0012A966: ;
    SET_LO8(edx, MEM8(esp + 4));
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0x10) = LO8(edx);
    edx = MEM32(esp + 0xC);
    MEM8(eax + 0x11) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;

loc_0012A988: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A990
 * Original: 0x0012A990 - 0x0012B1C9 (2105 bytes, 718 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A990(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A990: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 4);
    ebx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    eax = MEM32(edi + 4);
    ebp = MEM32(edi);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi + 0x30);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0012A9C8; /* jae: above or equal (unsigned >=) */

loc_0012A9C3: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0012A9CD;

loc_0012A9C8: ;
    eax = MEM32(esi + 0x2C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;

loc_0012A9CD: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0012AF2A; /* ja: above (unsigned >) */

loc_0012A9DC: ;
    /* nop */

loc_0012A9E0: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x12B074); /* switch: 10 entries, 10 targets */
    if (_jt == 0x0012A9E7u) goto loc_0012A9E7;
    if (_jt == 0x0012AAA6u) goto loc_0012AAA6;
    if (_jt == 0x0012AB92u) goto loc_0012AB92;
    if (_jt == 0x0012AC0Fu) goto loc_0012AC0F;
    if (_jt == 0x0012ACD5u) goto loc_0012ACD5;
    if (_jt == 0x0012AD43u) goto loc_0012AD43;
    if (_jt == 0x0012AE61u) goto loc_0012AE61;
    if (_jt == 0x0012AFECu) goto loc_0012AFEC;
    if (_jt == 0x0012B044u) goto loc_0012B044;
    if (_jt == 0x0012B04Bu) goto loc_0012B04B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012A9E7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012AA8F; /* jb: below (unsigned <) */

loc_0012A9F2: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012AA8F; /* jb: below (unsigned <) */

loc_0012A9FD: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = ebx;
    ebx = MEM32(edi);
    MEM32(edi + 4) = ecx;
    ecx = MEM32(edi + 8);
    eax = ebp;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(esp + 0x10);
    MEM32(edi + 8) = ecx;
    MEM32(edi) = ebp;
    PUSH32(esp, edi);
    MEM32(esi + 0x34) = edx;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x11));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(eax + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012AA3Eu); RECOMP_ABI_CALL(0x0012A5E0u, sub_0012A5E0); /* call 0x0012A5E0 */

loc_0012AA3E: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(esi + 0x20);
    ebp = MEM32(edi);
    ebx = MEM32(esi + 0x1C);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esi + 0x30);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esi + 0x34);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x30) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0012AA67; /* jae: above or equal (unsigned >=) */

loc_0012AA62: ;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0012AA6C;

loc_0012AA67: ;
    ecx = MEM32(esi + 0x2C);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;

loc_0012AA6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x14) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0012AA8F; /* je: equal / zero */

loc_0012AA74: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 7;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x14);
    goto loc_0012AF1B;

loc_0012AA8F: ;
    eax = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(eax + 0x10));
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 1;

loc_0012AAA6: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0012AAF7; /* jae: above or equal (unsigned >=) */

loc_0012AAB5: ;
    goto loc_0012AAC0;

    /* nop */
    edi = edi;

loc_0012AAC0: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012AF88; /* je: equal / zero */

loc_0012AACC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    eax = ZX8(MEM8(ebp));
    ecx = ebx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x28);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(8)) >> 32) & 1);
    ebx = ebx + 8;
    MEM32(esp + 0x30) = 0;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0012AAC0; /* jb: below (unsigned <) */

loc_0012AAF7: ;
    ecx = MEM32(eax * 4 + 0x454740);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 8);
    eax = eax + ecx * 8;
    ecx = ZX8(MEM8(eax + 1));
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x28);
    if (LO8(ecx)) _cf = (int)(((eax) >> ((LO8(ecx)) - 1)) & 1);
    eax = eax >> LO8(ecx);
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = eax;
    eax = ZX8(MEM8(ecx + 1));
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    eax = ZX8(MEM8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AB48; /* jne: not equal / not zero */

loc_0012AB2F: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 4);
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 6;
    eax = MEM32(esp + 0x14);
    goto loc_0012AF1B;

loc_0012AB48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012AB6F; /* je: equal / zero */

loc_0012AB4C: ;
    ecx = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 4);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = 2;
    goto loc_0012AF1B;

loc_0012AB6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012ACB4; /* je: equal / zero */

loc_0012AB77: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_0012AF62; /* je: equal / zero */

loc_0012AB83: ;
    MEM32(eax) = 7;
    eax = MEM32(esp + 0x14);
    goto loc_0012AF1B;

loc_0012AB92: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0012ABD8; /* jae: above or equal (unsigned >=) */

loc_0012ABA1: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012AF88; /* je: equal / zero */

loc_0012ABAD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    eax = ZX8(MEM8(ebp));
    ecx = ebx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x28);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(8)) >> 32) & 1);
    ebx = ebx + 8;
    MEM32(esp + 0x30) = 0;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0012ABA1; /* jb: below (unsigned <) */

loc_0012ABD8: ;
    ecx = MEM32(eax * 4 + 0x454740);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    _cf = (int)((((uint64_t)(MEM32(eax + 4)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax + 4) = MEM32(eax + 4) + ecx;
    ecx = MEM32(esp + 0x18);
    if (LO8(ecx)) _cf = (int)(((MEM32(esp + 0x28)) >> ((LO8(ecx)) - 1)) & 1);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) >> LO8(ecx);
    eax = ecx;
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    eax = MEM32(esp + 0x10);
    ecx = ZX8(MEM8(eax + 0x11));
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 3;
    goto loc_0012AC13;

loc_0012AC0F: ;
    eax = MEM32(esp + 0x10);

loc_0012AC13: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0012AC57; /* jae: above or equal (unsigned >=) */

loc_0012AC1E: ;
    edi = edi;

loc_0012AC20: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012AF88; /* je: equal / zero */

loc_0012AC2C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    eax = ZX8(MEM8(ebp));
    ecx = ebx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x28);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(8)) >> 32) & 1);
    ebx = ebx + 8;
    MEM32(esp + 0x30) = 0;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0012AC20; /* jb: below (unsigned <) */

loc_0012AC57: ;
    ecx = MEM32(eax * 4 + 0x454740);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 8);
    eax = eax + ecx * 8;
    ecx = ZX8(MEM8(eax + 1));
    MEM32(esp + 0x18) = eax;
    if (LO8(ecx)) _cf = (int)(((MEM32(esp + 0x28)) >> ((LO8(ecx)) - 1)) & 1);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) >> LO8(ecx);
    eax = MEM32(esp + 0x18);
    ecx = ZX8(MEM8(eax + 1));
    eax = ZX8(MEM8(eax));
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(ecx));
    ebx = ebx - ecx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012ACAC; /* je: equal / zero */

loc_0012AC89: ;
    ecx = MEM32(esp + 0x10);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x18);
    eax = MEM32(eax + 4);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ecx) = 4;
    goto loc_0012AF1B;

loc_0012ACAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AF73; /* jne: not equal / not zero */

loc_0012ACB4: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 4);
    eax = eax + ecx * 8;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x14);
    goto loc_0012AF1B;

loc_0012ACD5: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0012AD1B; /* jae: above or equal (unsigned >=) */

loc_0012ACE4: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012AF88; /* je: equal / zero */

loc_0012ACF0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    eax = ZX8(MEM8(ebp));
    ecx = ebx;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    ecx = MEM32(esp + 0x28);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(8)) >> 32) & 1);
    ebx = ebx + 8;
    MEM32(esp + 0x30) = 0;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | eax;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0012ACE4; /* jb: below (unsigned <) */

loc_0012AD1B: ;
    ecx = MEM32(eax * 4 + 0x454740);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & MEM32(esp + 0x28);
    eax = MEM32(esp + 0x10);
    _cf = (int)((((uint64_t)(MEM32(eax + 0xC)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + ecx;
    ecx = MEM32(esp + 0x18);
    if (LO8(ecx)) _cf = (int)(((MEM32(esp + 0x28)) >> ((LO8(ecx)) - 1)) & 1);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) >> LO8(ecx);
    eax = ecx;
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 5;

loc_0012AD43: ;
    eax = MEM32(esi + 0x28);
    ecx = edx;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012AD6C; /* jae: above or equal (unsigned >=) */

loc_0012AD55: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(esi + 0x2C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    ecx = MEM32(esp + 0x10);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + 0xC)));
    eax = eax - MEM32(ecx + 0xC);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    MEM32(esp + 0x1C) = eax;
    goto loc_0012AD74;

loc_0012AD6C: ;
    ecx = edx;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    MEM32(esp + 0x1C) = ecx;

loc_0012AD74: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(esp + 0x14);
    if (TEST_Z(_fa, _fb)) goto loc_0012AF15; /* je: equal / zero */

loc_0012AD87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AE20; /* jne: not equal / not zero */

loc_0012AD8F: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0012ADB9; /* jne: not equal / not zero */

loc_0012AD9A: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012ADB9; /* je: equal / zero */

loc_0012ADA4: ;
    edx = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012ADAF; /* jae: above or equal (unsigned >=) */

loc_0012ADAA: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0012ADB5;

loc_0012ADAF: ;
    eax = MEM32(esp + 0x18);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;

loc_0012ADB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AE20; /* jne: not equal / not zero */

loc_0012ADB9: ;
    MEM32(esi + 0x34) = edx;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012ADC8u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012ADC8: ;
    edx = MEM32(esi + 0x34);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esi + 0x30);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0012ADE2; /* jae: above or equal (unsigned >=) */

loc_0012ADDD: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0012ADE7;

loc_0012ADE2: ;
    eax = MEM32(esi + 0x2C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;

loc_0012ADE7: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0012AE18; /* jne: not equal / not zero */

loc_0012ADF6: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012AE14; /* je: equal / zero */

loc_0012AE01: ;
    edx = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012AE0C; /* jae: above or equal (unsigned >=) */

loc_0012AE07: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0012AE18;

loc_0012AE0C: ;
    eax = MEM32(esp + 0x18);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    goto loc_0012AE18;

loc_0012AE14: ;
    eax = MEM32(esp + 0x14);

loc_0012AE18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012AFC3; /* je: equal / zero */

loc_0012AE20: ;
    ecx = MEM32(esp + 0x1C);
    SET_LO8(ecx, MEM8(ecx));
    MEM8(edx) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0012AE4B; /* jne: not equal / not zero */

loc_0012AE44: ;
    ecx = MEM32(esi + 0x28);
    MEM32(esp + 0x1C) = ecx;

loc_0012AE4B: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012AD87; /* jne: not equal / not zero */

loc_0012AE5C: ;
    goto loc_0012AF15;

loc_0012AE61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AEFA; /* jne: not equal / not zero */

loc_0012AE69: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0012AE93; /* jne: not equal / not zero */

loc_0012AE74: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012AE93; /* je: equal / zero */

loc_0012AE7E: ;
    edx = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012AE89; /* jae: above or equal (unsigned >=) */

loc_0012AE84: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0012AE8F;

loc_0012AE89: ;
    eax = MEM32(esp + 0x18);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;

loc_0012AE8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AEFA; /* jne: not equal / not zero */

loc_0012AE93: ;
    MEM32(esi + 0x34) = edx;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AEA2u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012AEA2: ;
    edx = MEM32(esi + 0x34);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esi + 0x30);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0012AEBC; /* jae: above or equal (unsigned >=) */

loc_0012AEB7: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0012AEC1;

loc_0012AEBC: ;
    eax = MEM32(esi + 0x2C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;

loc_0012AEC1: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0012AEF2; /* jne: not equal / not zero */

loc_0012AED0: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012AEEE; /* je: equal / zero */

loc_0012AEDB: ;
    edx = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012AEE6; /* jae: above or equal (unsigned >=) */

loc_0012AEE1: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0012AEF2;

loc_0012AEE6: ;
    eax = MEM32(esp + 0x18);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    goto loc_0012AEF2;

loc_0012AEEE: ;
    eax = MEM32(esp + 0x14);

loc_0012AEF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012AFC3; /* je: equal / zero */

loc_0012AEFA: ;
    ecx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(ecx + 8));
    MEM8(edx) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x14) = eax;

loc_0012AF15: ;
    MEM32(ecx) = 0;

loc_0012AF1B: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0012A9E0; /* jbe: below or equal (unsigned <=) */

loc_0012AF2A: ;
    PUSH32(esp, 0xFFFFFFFEu);

loc_0012AF2C: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x1C) = ebx;
    ebx = MEM32(edi);
    MEM32(edi + 4) = eax;
    eax = MEM32(edi + 8);
    ecx = ebp;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(edi + 8) = eax;

loc_0012AF4B: ;
    PUSH32(esp, edi);
    MEM32(edi) = ebp;
    PUSH32(esp, esi);
    MEM32(esi + 0x34) = edx;
    PUSH32(esp, 0x0012AF57u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012AF57: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0012AF62: ;
    MEM32(eax) = 9;
    MEM32(edi + 0x18) = 0x3DBFA0;
    PUSH32(esp, 0xFFFFFFFDu);
    goto loc_0012AF2C;

loc_0012AF73: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 9;
    MEM32(edi + 0x18) = 0x3DBFBC;
    PUSH32(esp, 0xFFFFFFFDu);
    goto loc_0012AF2C;

loc_0012AF88: ;
    eax = MEM32(esp + 0x28);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = ebx;
    ebx = MEM32(edi);
    eax = MEM32(edi + 8);
    ecx = ebp;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(edi + 4) = 0;
    MEM32(edi + 8) = eax;
    MEM32(edi) = ebp;
    MEM32(esi + 0x34) = edx;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AFB8u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012AFB8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0012AFC3: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = ebx;
    ebx = MEM32(edi);
    MEM32(edi + 4) = ecx;
    ecx = MEM32(edi + 8);
    eax = ebp;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    goto loc_0012AF4B;

loc_0012AFEC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0012AFFE; /* jbe: below or equal (unsigned <=) */

loc_0012AFF1: ;
    ecx = MEM32(esp + 0x2C);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(8));
    ebx = ebx - 8;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = ecx;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0012AFFE: ;
    MEM32(esi + 0x34) = edx;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012B00Du); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012B00D: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x30);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B03A; /* je: equal / zero */

loc_0012B01A: ;
    ecx = MEM32(esp + 0x28);
    MEM32(esi + 0x20) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esi + 0x1C) = ebx;
    ebx = MEM32(edi);
    MEM32(edi + 4) = ecx;
    ecx = ebp;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    _cf = (int)((((uint64_t)(MEM32(edi + 8)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(edi + 8) = MEM32(edi + 8) + ecx;
    PUSH32(esp, eax);
    goto loc_0012AF4B;

loc_0012B03A: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 8;

loc_0012B044: ;
    PUSH32(esp, 1);
    goto loc_0012AF2C;

loc_0012B04B: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = ebx;
    ebx = MEM32(edi);
    MEM32(edi + 4) = ecx;
    ecx = MEM32(edi + 8);
    eax = ebp;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    MEM32(edi + 8) = ecx;
    PUSH32(esp, 0xFFFFFFFDu);
    goto loc_0012AF4B;

    /* nop */
    /* TODO: out 0xa9, eax */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    /* TODO: cmpsb byte ptr [esi], byte ptr es:[edi] */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    MEM32(edx) = (MEM32(edx) >> 0) | (edx << (32 - 0)); /* shrd */
    /* TODO: aad 0xac */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi); esi += RECOMP_DF_STEP(4); /* lodsd */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    /* TODO: popal  */
    /* TODO: scasb al, byte ptr es:[edi] */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    /* TODO: in al, dx */
    /* TODO: scasd eax, dword ptr es:[edi] */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 0x12);
    _cf = (int)((((uint64_t)(MEM8(ebx + -80)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebx + -80) = MEM8(ebx + -80) + LO8(ecx);
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFF;
    if (0x10) _cf = (int)(((edi) >> ((0x10) - 1)) & 1);
    edi = edi >> 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012B0C1; /* jne: not equal / not zero */

loc_0012B0B9: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012B0C1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0012B1BE; /* jbe: below or equal (unsigned <=) */

loc_0012B0CE: ;
    PUSH32(esp, ebp);
    /* nop */

loc_0012B0D0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15B0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x15B0 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = ebx;
    if (CMP_B(_fa, _fb)) goto loc_0012B0DF; /* jb: below (unsigned <) */

loc_0012B0DA: ;
    eax = 0x15B0;

loc_0012B0DF: ;
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0012B189; /* jl: less (signed <) */

loc_0012B0EA: ;
    edx = eax;
    if (4) _cf = (int)(((edx) >> ((4) - 1)) & 1);
    edx = edx >> 4;
    ebp = edx;
    _cf = (int)((ebp) != 0);
    ebp = (uint32_t)(-(int32_t)ebp);
    if (4) _cf = (int)(((ebp) >> (32 - (4))) & 1);
    ebp = ebp << 4;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebp)) >> 32) & 1);
    eax = eax + ebp;
    goto loc_0012B100;

    /* nop */

loc_0012B100: ;
    ebp = ZX8(MEM8(esi));
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 1));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 2));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 3));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 4));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 5));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 6));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 7));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 8));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 9));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 0xA));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 0xB));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 0xC));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 0xD));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 0xE));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    ebp = ZX8(MEM8(esi + 0xF));
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebp)) >> 32) & 1);
    ecx = ecx + ebp;
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012B100; /* jne: not equal / not zero */

loc_0012B189: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012B19B; /* je: equal / zero */

loc_0012B18D: ;
    /* nop */

loc_0012B190: ;
    edx = ZX8(MEM8(esi));
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012B190; /* jne: not equal / not zero */

loc_0012B19B: ;
    eax = ecx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    ecx = 0xFFF1;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edi;
    edi = 0xFFF1;
    ecx = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edi = edx;
    if (CMP_A(_fa & _fb, 0)) goto loc_0012B0D0; /* ja: above (unsigned >) */

loc_0012B1BD: ;
    POP32(esp, ebp);

loc_0012B1BE: ;
    eax = edi;
    POP32(esp, ebx);
    if (0x10) _cf = (int)(((eax) >> (32 - (0x10))) & 1);
    eax = eax << 0x10;
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B1D0
 * Original: 0x0012B1D0 - 0x0012B201 (49 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B1D0(void)
{

loc_0012B1D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012B1E5u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0012B1E5: ;
    edx = eax;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    esp = esp + 0xC;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B210
 * Original: 0x0012B210 - 0x0012B22A (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B210(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B210: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012B229; /* je: equal / zero */

loc_0012B218: ;
    MEM32(esp + 8) = 0xF;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_001234F0(); return; /* tail jmp 0x001234F0 */

loc_0012B229: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B230
 * Original: 0x0012B230 - 0x0012B2AC (124 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B230: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0012B243; /* je: equal / zero */

loc_0012B23E: ;
    ecx = MEM32(esi + 0x3C);
    MEM32(eax) = ecx;

loc_0012B243: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B253; /* je: equal / zero */

loc_0012B24E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B261; /* jne: not equal / not zero */

loc_0012B253: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012B25Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012B25E: ;
    esp = esp + 8;

loc_0012B261: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B274; /* jne: not equal / not zero */

loc_0012B266: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012B271u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012B271: ;
    esp = esp + 8;

loc_0012B274: ;
    eax = MEM32(esi + 0x28);
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = 0;
    MEM32(esi + 0x1C) = 0;
    MEM32(esi + 0x20) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0012B2A9; /* je: equal / zero */

loc_0012B298: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012B2A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012B2A0: ;
    MEM32(esi + 0x3C) = eax;
    esp = esp + 0xC;
    MEM32(edi + 0x30) = eax;

loc_0012B2A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B2B0
 * Original: 0x0012B2B0 - 0x0012B34B (155 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B2B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x20); PUSH32(esp, 0x0012B2C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012B2C1: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012B2ED; /* je: equal / zero */

loc_0012B2CA: ;
    ecx = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x5A0);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edi + 0x20); PUSH32(esp, 0x0012B2D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012B2D8: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x24) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0012B2F2; /* jne: not equal / not zero */

loc_0012B2E2: ;
    edx = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012B2EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012B2EA: ;
    esp = esp + 8;

loc_0012B2ED: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012B2F2: ;
    eax = MEM32(edi + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x20); PUSH32(esp, 0x0012B301u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012B301: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x28) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0012B327; /* jne: not equal / not zero */

loc_0012B30B: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012B316u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012B316: ;
    eax = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012B31Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012B31E: ;
    esp = esp + 0x10;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012B327: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    eax = eax + ebx;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi) = 0;
    PUSH32(esp, 0x0012B342u); RECOMP_ABI_CALL(0x0012B230u, sub_0012B230); /* call 0x0012B230 */

loc_0012B342: ;
    esp = esp + 0xC;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B350
 * Original: 0x0012B350 - 0x0012BEB8 (2920 bytes, 989 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B350: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    eax = MEM32(esi + 4);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebx + 0x34);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(ebx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x14) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0012B389; /* jae: above or equal (unsigned >=) */

loc_0012B384: ;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0012B38E;

loc_0012B389: ;
    ecx = MEM32(ebx + 0x2C);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;

loc_0012B38E: ;
    edx = MEM32(ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0012B3D9; /* jbe: below or equal (unsigned <=) */

loc_0012B399: ;
    PUSH32(esp, 0xFFFFFFFEu);

loc_0012B39B: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x14);
    MEM32(ebx + 0x20) = edx;
    MEM32(ebx + 0x1C) = ebp;
    edx = MEM32(esi);
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 8);
    ecx = edi;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(esi + 8) = eax;

loc_0012B3BA: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = edx;
    PUSH32(esp, 0x0012B3CAu); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012B3CA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012B3D5: ;
    ecx = MEM32(esp + 0x18);

loc_0012B3D9: ;
    eax = MEM32(esp + 0x38);
    { uint32_t _jt = MEM32(edx * 4 + 0x12BEB8); /* switch: 14 entries, 14 targets */
    if (_jt == 0x0012B3E4u) goto loc_0012B3E4;
    if (_jt == 0x0012B444u) goto loc_0012B444;
    if (_jt == 0x0012B462u) goto loc_0012B462;
    if (_jt == 0x0012B4A0u) goto loc_0012B4A0;
    if (_jt == 0x0012B4B5u) goto loc_0012B4B5;
    if (_jt == 0x0012B529u) goto loc_0012B529;
    if (_jt == 0x0012B65Cu) goto loc_0012B65C;
    if (_jt == 0x0012B6F3u) goto loc_0012B6F3;
    if (_jt == 0x0012B7E9u) goto loc_0012B7E9;
    if (_jt == 0x0012BA55u) goto loc_0012BA55;
    if (_jt == 0x0012BB0Bu) goto loc_0012BB0B;
    if (_jt == 0x0012BDF1u) goto loc_0012BDF1;
    if (_jt == 0x0012BE40u) goto loc_0012BE40;
    if (_jt == 0x0012BE7Cu) goto loc_0012BE7C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012B3E4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012B425; /* jae: above or equal (unsigned >=) */

loc_0012B3E9: ;
    /* nop */

loc_0012B3F0: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012BC94; /* je: equal / zero */

loc_0012B3FC: ;
    edx = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    edx = ZX8(MEM8(edi));
    ecx = ebp;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(8)) >> 32) & 1);
    ebp = ebp + 8;
    MEM32(esp + 0x40) = 0;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x1C) = edi;
    if (CMP_B(_fa, _fb)) goto loc_0012B3F0; /* jb: below (unsigned <) */

loc_0012B425: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx & 1;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 0x18) = edx;
    if (CMP_A(_fa, _fb)) goto loc_0012BAF3; /* ja: above (unsigned >) */

loc_0012B43D: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x12BEE0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0012B444u) goto loc_0012B444;
    if (_jt == 0x0012B462u) goto loc_0012B462;
    if (_jt == 0x0012B4A0u) goto loc_0012B4A0;
    if (_jt == 0x0012BB0Bu) goto loc_0012BB0B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012B444: ;
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(3));
    ebp = ebp - 3;
    ecx = ebp;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    if (LO8(ecx)) _cf = (int)(((eax) >> ((LO8(ecx)) - 1)) & 1);
    eax = eax >> LO8(ecx);
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(ecx));
    ebp = ebp - ecx;
    MEM32(ebx) = 1;
    MEM32(esp + 0x38) = eax;
    goto loc_0012BAF3;

loc_0012B462: ;
    eax = MEM32(0x454788);
    ecx = MEM32(0x454784);
    PUSH32(esp, esi);
    PUSH32(esp, 0x455790);
    PUSH32(esp, 0x454790);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B47Fu); RECOMP_ABI_CALL(0x0012A950u, sub_0012A950); /* call 0x0012A950 */

loc_0012B47F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebx + 4) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0012BD9C; /* je: equal / zero */

loc_0012B48D: ;
    if (3) _cf = (int)(((MEM32(esp + 0x38)) >> ((3) - 1)) & 1);
    MEM32(esp + 0x38) = MEM32(esp + 0x38) >> 3;
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(3));
    ebp = ebp - 3;
    MEM32(ebx) = 6;
    goto loc_0012BAF3;

loc_0012B4A0: ;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    MEM32(esp + 0x38) = eax;
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(3));
    ebp = ebp - 3;
    MEM32(ebx) = 3;
    goto loc_0012BAF3;

loc_0012B4B5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012B4F5; /* jae: above or equal (unsigned >=) */

loc_0012B4BA: ;
    /* nop */

loc_0012B4C0: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012BB5A; /* je: equal / zero */

loc_0012B4CC: ;
    edx = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    edx = ZX8(MEM8(edi));
    ecx = ebp;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(8)) >> 32) & 1);
    ebp = ebp + 8;
    MEM32(esp + 0x40) = 0;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x1C) = edi;
    if (CMP_B(_fa, _fb)) goto loc_0012B4C0; /* jb: below (unsigned <) */

loc_0012B4F5: ;
    ecx = eax;
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFF;
    if (0x10) _cf = (int)(((eax) >> ((0x10) - 1)) & 1);
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012BB99; /* jne: not equal / not zero */

loc_0012B50A: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 4) = ecx;
    MEM32(esp + 0x38) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0012B64B; /* je: equal / zero */

loc_0012B51D: ;
    eax = 2;
    MEM32(ebx) = eax;
    goto loc_0012BAF3;

loc_0012B529: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012BCD3; /* je: equal / zero */

loc_0012B535: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012B5E2; /* jne: not equal / not zero */

loc_0012B53D: ;
    edx = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012B569; /* jne: not equal / not zero */

loc_0012B546: ;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(ebx + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B569; /* je: equal / zero */

loc_0012B550: ;
    MEM32(esp + 0x14) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0012B55D; /* jae: above or equal (unsigned >=) */

loc_0012B556: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    goto loc_0012B561;

loc_0012B55D: ;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    ecx = edx;

loc_0012B561: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x18) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012B5E2; /* jne: not equal / not zero */

loc_0012B569: ;
    ecx = MEM32(esp + 0x40);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = eax;
    PUSH32(esp, 0x0012B57Cu); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012B57C: ;
    ecx = MEM32(ebx + 0x30);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(ebx + 0x34);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0012B59A; /* jae: above or equal (unsigned >=) */

loc_0012B595: ;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0012B59F;

loc_0012B59A: ;
    ecx = MEM32(ebx + 0x2C);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;

loc_0012B59F: ;
    edx = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x24) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0012B5DA; /* jne: not equal / not zero */

loc_0012B5AE: ;
    eax = MEM32(ebx + 0x28);
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012B5D6; /* je: equal / zero */

loc_0012B5B9: ;
    MEM32(esp + 0x14) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0012B5CA; /* jae: above or equal (unsigned >=) */

loc_0012B5BF: ;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    MEM32(esp + 0x18) = ecx;
    goto loc_0012B5DA;

loc_0012B5CA: ;
    ecx = MEM32(esp + 0x24);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    MEM32(esp + 0x18) = ecx;
    goto loc_0012B5DA;

loc_0012B5D6: ;
    eax = MEM32(esp + 0x14);

loc_0012B5DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012BBAD; /* je: equal / zero */

loc_0012B5E2: ;
    eax = MEM32(ebx + 4);
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x40) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0012B5F7; /* jbe: below or equal (unsigned <=) */

loc_0012B5F5: ;
    eax = edx;

loc_0012B5F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0012B5FD; /* jbe: below or equal (unsigned <=) */

loc_0012B5FB: ;
    eax = ecx;

loc_0012B5FD: ;
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    ecx = eax;
    edx = ecx;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(esp + 0x18);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(ebx + 4);
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = edx;
    MEM32(ebx + 4) = ecx;
    if ((ecx != 0)) goto loc_0012BAF3; /* jne: not equal / not zero */

loc_0012B64B: ;
    eax = MEM32(ebx + 0x18);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 7;
    MEM32(ebx) = eax;
    goto loc_0012BAF3;

loc_0012B65C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012B692; /* jae: above or equal (unsigned >=) */

loc_0012B661: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012BCD3; /* je: equal / zero */

loc_0012B66D: ;
    edx = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    edx = ZX8(MEM8(edi));
    ecx = ebp;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(8)) >> 32) & 1);
    ebp = ebp + 8;
    MEM32(esp + 0x40) = 0;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0012B661; /* jb: below (unsigned <) */

loc_0012B692: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x3FFF;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 4) = eax;
    if (CMP_A(_fa, _fb)) goto loc_0012BC24; /* ja: above (unsigned >) */

loc_0012B6A8: ;
    if (5) _cf = (int)(((eax) >> ((5) - 1)) & 1);
    eax = eax >> 5;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012BC24; /* ja: above (unsigned >) */

loc_0012B6B7: ;
    eax = eax + ecx + 0x102;
    ecx = MEM32(esi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x20); PUSH32(esp, 0x0012B6C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012B6C8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ebx + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0012BBE8; /* je: equal / zero */

loc_0012B6D6: ;
    ecx = MEM32(esp + 0x38);
    if (0xE) _cf = (int)(((ecx) >> ((0xE) - 1)) & 1);
    ecx = ecx >> 0xE;
    MEM32(esp + 0x38) = ecx;
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(0xE));
    ebp = ebp - 0xE;
    MEM32(ebx + 8) = 0;
    MEM32(ebx) = 4;
    eax = ecx;

loc_0012B6F3: ;
    edx = MEM32(ebx + 4);
    ecx = MEM32(ebx + 8);
    if (0xA) _cf = (int)(((edx) >> ((0xA) - 1)) & 1);
    edx = edx >> 0xA;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012B779; /* jae: above or equal (unsigned >=) */

loc_0012B703: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012B741; /* jae: above or equal (unsigned >=) */

loc_0012B708: ;
    goto loc_0012B710;

    /* nop */

loc_0012B710: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012BCD3; /* je: equal / zero */

loc_0012B71C: ;
    edx = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    edx = ZX8(MEM8(edi));
    ecx = ebp;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(8)) >> 32) & 1);
    ebp = ebp + 8;
    MEM32(esp + 0x40) = 0;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0012B710; /* jb: below (unsigned <) */

loc_0012B741: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ecx * 4 + 0x3DBC70);
    ecx = MEM32(ebx + 0xC);
    _cf = 0; /* logical op clears CF */
    eax = eax & 7;
    MEM32(ecx + edx * 4) = eax;
    edx = MEM32(ebx + 8);
    eax = MEM32(esp + 0x38);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = edx;
    edx = MEM32(ebx + 4);
    ecx = MEM32(ebx + 8);
    if (0xA) _cf = (int)(((edx) >> ((0xA) - 1)) & 1);
    edx = edx >> 0xA;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(3));
    ebp = ebp - 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0012B703; /* jb: below (unsigned <) */

loc_0012B779: ;
    ecx = MEM32(ebx + 8);
    eax = 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012B7B1; /* jae: above or equal (unsigned >=) */

loc_0012B785: ;
    goto loc_0012B790;

    /* nop */
    edi = edi;

loc_0012B790: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ecx * 4 + 0x3DBC70);
    ecx = MEM32(ebx + 0xC);
    MEM32(ecx + edx * 4) = 0;
    edx = MEM32(ebx + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebx + 8) = edx;
    if (CMP_B(_fa, _fb)) goto loc_0012B790; /* jb: below (unsigned <) */

loc_0012B7B1: ;
    edx = MEM32(ebx + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0xC);
    ecx = ebx + 0x14;
    eax = ebx + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(eax) = 7;
    PUSH32(esp, 0x0012B7CDu); RECOMP_ABI_CALL(0x0012A3A0u, sub_0012A3A0); /* call 0x0012A3A0 */

loc_0012B7CD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x18) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0012BC38; /* jne: not equal / not zero */

loc_0012B7DC: ;
    MEM32(ebx + 8) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(ebx) = 5;

loc_0012B7E9: ;
    ecx = MEM32(ebx + 4);
    edx = ecx;
    if (5) _cf = (int)(((edx) >> ((5) - 1)) & 1);
    edx = edx >> 5;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1F;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    ecx = edx + ecx + 0x102;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012B9A7; /* jae: above or equal (unsigned >=) */

loc_0012B807: ;
    goto loc_0012B810;

loc_0012B809: ;
    eax = MEM32(esp + 0x38);
    /* nop */

loc_0012B810: ;
    ecx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0012B853; /* jae: above or equal (unsigned >=) */

loc_0012B817: ;
    goto loc_0012B820;

    /* nop */

loc_0012B820: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012BC94; /* je: equal / zero */

loc_0012B82C: ;
    edx = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    edx = ZX8(MEM8(edi));
    ecx = ebp;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    ecx = MEM32(ebx + 0x10);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(8)) >> 32) & 1);
    ebp = ebp + 8;
    MEM32(esp + 0x40) = 0;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0012B820; /* jb: below (unsigned <) */

loc_0012B853: ;
    ecx = MEM32(ecx * 4 + 0x454740);
    edx = MEM32(ebx + 0x14);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & eax;
    edx = edx + ecx * 8;
    ecx = ZX8(MEM8(edx + 1));
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x28) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_0012B88F; /* jae: above or equal (unsigned >=) */

loc_0012B876: ;
    if (LO8(ecx)) _cf = (int)(((eax) >> ((LO8(ecx)) - 1)) & 1);
    eax = eax >> LO8(ecx);
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(ecx));
    ebp = ebp - ecx;
    ecx = MEM32(ebx + 0xC);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(ebx + 8);
    MEM32(ecx + eax * 4) = edx;
    MEM32(ebx + 8) = MEM32(ebx + 8) + 1;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012B989;

loc_0012B88F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012B89E; /* jne: not equal / not zero */

loc_0012B894: ;
    MEM32(esp + 0x20) = 7;
    goto loc_0012B8A5;

loc_0012B89E: ;
    ecx = edx + -14;
    MEM32(esp + 0x20) = ecx;

loc_0012B8A5: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    _cf = (int)(_fa < _fb);
    edx = MEM32(esp + 0x20);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = ecx * 8 + 3;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x18);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x24) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0012B904; /* jae: above or equal (unsigned >=) */

loc_0012B8CA: ;
    /* nop */

loc_0012B8D0: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012BCD3; /* je: equal / zero */

loc_0012B8DC: ;
    edx = ecx;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    edx = ZX8(MEM8(edi));
    ecx = ebp;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + 0x24);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(8)) >> 32) & 1);
    ebp = ebp + 8;
    MEM32(esp + 0x40) = 0;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x38) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0012B8D0; /* jb: below (unsigned <) */

loc_0012B904: ;
    ecx = MEM32(esp + 0x18);
    if (LO8(ecx)) _cf = (int)(((eax) >> ((LO8(ecx)) - 1)) & 1);
    eax = eax >> LO8(ecx);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx * 4 + 0x454740);
    ecx = MEM32(esp + 0x1C);
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x20);
    if (LO8(ecx)) _cf = (int)(((eax) >> ((LO8(ecx)) - 1)) & 1);
    eax = eax >> LO8(ecx);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x18);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(ebx + 4);
    edx = eax;
    if (5) _cf = (int)(((edx) >> ((5) - 1)) & 1);
    edx = edx >> 5;
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x1F;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    eax = edx + eax + 0x102;
    edx = MEM32(esp + 0x1C);
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(ecx));
    ebp = ebp - ecx;
    ecx = MEM32(ebx + 8);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0012BCFC; /* ja: above (unsigned >) */

loc_0012B959: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012B972; /* jne: not equal / not zero */

loc_0012B960: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012BCFC; /* jb: below (unsigned <) */

loc_0012B969: ;
    eax = MEM32(ebx + 0xC);
    eax = MEM32(eax + ecx * 4 + -4);
    goto loc_0012B974;

loc_0012B972: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */

loc_0012B974: ;
    edx = MEM32(ebx + 0xC);
    MEM32(edx + ecx * 4) = eax;
    edx = MEM32(esp + 0x1C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = edx;
    if ((_fa != 0)) goto loc_0012B974; /* jne: not equal / not zero */

loc_0012B986: ;
    MEM32(ebx + 8) = ecx;

loc_0012B989: ;
    eax = MEM32(ebx + 4);
    ecx = eax;
    if (5) _cf = (int)(((ecx) >> ((5) - 1)) & 1);
    ecx = ecx >> 5;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    edx = ecx + eax + 0x102;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012B809; /* jb: below (unsigned <) */

loc_0012B9A7: ;
    ecx = MEM32(ebx + 0x24);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0xC);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = eax;
    if (5) _cf = (int)(((ecx) >> ((5) - 1)) & 1);
    ecx = ecx >> 5;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    PUSH32(esp, edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1F;
    PUSH32(esp, ecx);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x101)) >> 32) & 1);
    eax = eax + 0x101;
    PUSH32(esp, eax);
    MEM32(ebx + 0x14) = 0;
    MEM32(esp + 0x44) = 9;
    MEM32(esp + 0x40) = 6;
    PUSH32(esp, 0x0012B9F6u); RECOMP_ABI_CALL(0x0012A450u, sub_0012A450); /* call 0x0012A450 */

loc_0012B9F6: ;
    edx = MEM32(ebx + 0xC);
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x0012BA05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012BA05: ;
    eax = MEM32(esp + 0x44);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x2C)) >> 32) & 1);
    esp = esp + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012BD50; /* jne: not equal / not zero */

loc_0012BA14: ;
    ecx = MEM32(esi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x20); PUSH32(esp, 0x0012BA1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012BA1F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012BD9C; /* je: equal / zero */

loc_0012BA2A: ;
    SET_LO8(edx, MEM8(esp + 0x20));
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM8(eax + 0x10) = LO8(edx);
    edx = MEM32(esp + 0x2C);
    MEM8(eax + 0x11) = LO8(ecx);
    ecx = MEM32(esp + 0x30);
    MEM32(eax) = 0;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx) = 6;

loc_0012BA55: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x10);
    MEM32(ebx + 0x20) = edx;
    MEM32(ebx + 0x1C) = ebp;
    ebp = MEM32(esi);
    edx = MEM32(esi + 8);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x40);
    ecx = edi;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebp));
    ecx = ecx - ebp;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    PUSH32(esp, eax);
    MEM32(esi + 8) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = edx;
    PUSH32(esp, 0x0012BA89u); RECOMP_ABI_CALL(0x0012A990u, sub_0012A990); /* call 0x0012A990 */

loc_0012BA89: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012BDD8; /* jne: not equal / not zero */

loc_0012BA95: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(esi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = 0;
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x0012BAA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012BAA8: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebx + 0x20);
    edi = MEM32(esi);
    ebp = MEM32(ebx + 0x1C);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx + 0x30);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(ebx + 0x34);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x14) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0012BAD7; /* jae: above or equal (unsigned >=) */

loc_0012BAD0: ;
    edx = ecx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0012BADE;

loc_0012BAD7: ;
    eax = MEM32(ebx + 0x2C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x14)));
    eax = eax - MEM32(esp + 0x14);

loc_0012BADE: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012BDEB; /* jne: not equal / not zero */

loc_0012BAED: ;
    MEM32(ebx) = 0;

loc_0012BAF3: ;
    edx = MEM32(ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x3C);
    if (CMP_BE(_fa, _fb)) goto loc_0012B3D5; /* jbe: below or equal (unsigned <=) */

loc_0012BB06: ;
    goto loc_0012B399;

loc_0012BB0B: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x10);
    MEM32(ebx) = 9;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    MEM32(esi + 0x18) = 0x3DC034;
    MEM32(ebx + 0x20) = eax;
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0xFFFFFFFDu)) >> 32) & 1);
    ebp = ebp + 0xFFFFFFFDu;
    MEM32(ebx + 0x1C) = ebp;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi);
    edx = edi;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    PUSH32(esp, 0xFFFFFFFDu);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = eax;
    PUSH32(esp, 0x0012BB4Fu); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BB4F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012BB5A: ;
    ecx = MEM32(esp + 0x38);
    MEM32(ebx + 0x20) = ecx;
    MEM32(ebx + 0x1C) = ebp;
    ecx = MEM32(esi);
    eax = MEM32(esi + 8);
    edx = edi;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    ecx = MEM32(esp + 0x40);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    PUSH32(esp, ecx);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esi + 4) = 0;
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = eax;
    PUSH32(esp, 0x0012BB8Eu); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BB8E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012BB99: ;
    MEM32(ebx) = 9;
    MEM32(esi + 0x18) = 0x3DC014;
    PUSH32(esp, 0xFFFFFFFDu);
    goto loc_0012B39B;

loc_0012BBAD: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x10);
    MEM32(ebx + 0x20) = ecx;
    MEM32(ebx + 0x1C) = ebp;
    ebp = MEM32(esi);
    MEM32(esi + 4) = edx;
    edx = MEM32(esi + 8);
    ecx = edi;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebp));
    ecx = ecx - ebp;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    MEM32(esi + 8) = edx;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = eax;
    PUSH32(esp, 0x0012BBDDu); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BBDD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012BBE8: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x10);
    MEM32(ebx + 0x20) = ecx;
    MEM32(ebx + 0x1C) = ebp;
    ecx = MEM32(esi + 8);
    MEM32(esi + 4) = edx;
    edx = MEM32(esi);
    eax = edi;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    PUSH32(esp, 0xFFFFFFFCu);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = ecx;
    PUSH32(esp, 0x0012BC19u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BC19: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012BC24: ;
    MEM32(ebx) = 9;
    MEM32(esi + 0x18) = 0x3DBFF0;
    PUSH32(esp, 0xFFFFFFFDu);
    goto loc_0012B39B;

loc_0012BC38: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(esi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x0012BC43u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012BC43: ;
    eax = MEM32(esp + 0x20);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012BC55; /* jne: not equal / not zero */

loc_0012BC4F: ;
    MEM32(ebx) = 9;

loc_0012BC55: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 0x20) = eax;
    MEM32(ebx + 0x1C) = ebp;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi);
    edx = edi;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    ecx = MEM32(esp + 0x18);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    PUSH32(esp, ecx);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = eax;
    PUSH32(esp, 0x0012BC89u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BC89: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012BC94: ;
    edx = MEM32(esp + 0x38);
    MEM32(ebx + 0x20) = edx;
    MEM32(ebx + 0x1C) = ebp;
    edx = MEM32(esi);
    ecx = MEM32(esi + 8);
    eax = edi;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(esp + 0x40);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    PUSH32(esp, edx);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esi + 4) = 0;
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = ecx;
    PUSH32(esp, 0x0012BCC8u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BCC8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012BCD3: ;
    eax = MEM32(esp + 0x38);
    MEM32(ebx + 0x20) = eax;
    MEM32(ebx + 0x1C) = ebp;
    edx = MEM32(esi);
    eax = MEM32(esi + 8);
    ecx = edi;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esi + 4) = 0;
    PUSH32(esp, eax);
    goto loc_0012B3BA;

loc_0012BCFC: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(esi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x0012BD07u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012BD07: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x18);
    MEM32(ebx) = 9;
    MEM32(esi + 0x18) = 0x3DBFD4;
    MEM32(ebx + 0x20) = eax;
    MEM32(ebx + 0x1C) = ebp;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi);
    edx = edi;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    PUSH32(esp, 0xFFFFFFFDu);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = eax;
    PUSH32(esp, 0x0012BD45u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BD45: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012BD50: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 0xFFFFFFFDu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0012BD5D; /* jne: not equal / not zero */

loc_0012BD57: ;
    MEM32(ebx) = 9;

loc_0012BD5D: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x10);
    MEM32(ebx + 0x20) = ecx;
    MEM32(ebx + 0x1C) = ebp;
    ecx = MEM32(esi + 8);
    MEM32(esi + 4) = edx;
    edx = MEM32(esi);
    eax = edi;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(esp + 0x18);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    PUSH32(esp, edx);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = ecx;
    PUSH32(esp, 0x0012BD91u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BD91: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012BD9C: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 0x20) = eax;
    MEM32(ebx + 0x1C) = ebp;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi);
    edx = edi;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    PUSH32(esp, 0xFFFFFFFCu);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = eax;
    PUSH32(esp, 0x0012BDCDu); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BDCD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012BDD8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012BDE0u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BDE0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012BDEB: ;
    MEM32(ebx) = 7;

loc_0012BDF1: ;
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = ecx;
    PUSH32(esp, 0x0012BE04u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BE04: ;
    ecx = MEM32(ebx + 0x34);
    edx = MEM32(ebx + 0x30);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012BE3A; /* je: equal / zero */

loc_0012BE15: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x10);
    MEM32(ebx + 0x20) = ecx;
    MEM32(ebx + 0x1C) = ebp;
    ebp = MEM32(esi);
    MEM32(esi + 4) = edx;
    edx = MEM32(esi + 8);
    ecx = edi;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebp));
    ecx = ecx - ebp;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    MEM32(esi + 8) = edx;
    PUSH32(esp, eax);
    goto loc_0012B3BA;

loc_0012BE3A: ;
    MEM32(ebx) = 8;

loc_0012BE40: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 0x20) = eax;
    MEM32(ebx + 0x1C) = ebp;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = ecx;
    ecx = MEM32(esi);
    edx = edi;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    PUSH32(esp, 1);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = eax;
    PUSH32(esp, 0x0012BE71u); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BE71: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_0012BE7C: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x10);
    MEM32(ebx + 0x20) = ecx;
    MEM32(ebx + 0x1C) = ebp;
    ecx = MEM32(esi + 8);
    MEM32(esi + 4) = edx;
    edx = MEM32(esi);
    eax = edi;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    PUSH32(esp, 0xFFFFFFFDu);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x34) = ecx;
    PUSH32(esp, 0x0012BEADu); RECOMP_ABI_CALL(0x00129D80u, sub_00129D80); /* call 0x00129D80 */

loc_0012BEAD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BEF0
 * Original: 0x0012BEF0 - 0x0012BF75 (133 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BEF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0012BF06; /* je: equal / zero */

loc_0012BF01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BF14; /* jne: not equal / not zero */

loc_0012BF06: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012BF11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012BF11: ;
    esp = esp + 8;

loc_0012BF14: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012BF27; /* jne: not equal / not zero */

loc_0012BF19: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012BF24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012BF24: ;
    esp = esp + 8;

loc_0012BF27: ;
    eax = MEM32(esi + 0x28);
    ecx = 0; /* xor self */
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012BF4F; /* je: equal / zero */

loc_0012BF41: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0012BF46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012BF46: ;
    MEM32(esi + 0x3C) = eax;
    esp = esp + 0xC;
    MEM32(edi + 0x30) = eax;

loc_0012BF4F: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012BF5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012BF5A: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012BF65u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012BF65: ;
    edx = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x0012BF6Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012BF6D: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012BF80
 * Original: 0x0012BF80 - 0x0012BFC2 (66 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0012BF80: ;
    eax = MEM32(esp + 4);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012BFBC; /* je: equal / zero */

loc_0012BF8A: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012BFBC; /* je: equal / zero */

loc_0012BF91: ;
    PUSH32(esp, esi);
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x18) = edx;
    esi = MEM32(ecx + 0xC);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, edx);
    _cf = 0; /* logical op clears CF */
    esi = esi & 7;
    MEM32(ecx) = esi;
    PUSH32(esp, eax);
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012BFB5u); RECOMP_ABI_CALL(0x0012B230u, sub_0012B230); /* call 0x0012B230 */

loc_0012BFB5: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012BFBC: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BFD0
 * Original: 0x0012BFD0 - 0x0012C018 (72 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012BFD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C011; /* je: equal / zero */

loc_0012BFD9: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C011; /* je: equal / zero */

loc_0012BFE0: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C011; /* je: equal / zero */

loc_0012BFE7: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012BFF8; /* je: equal / zero */

loc_0012BFEE: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012BFF5u); RECOMP_ABI_CALL(0x0012BEF0u, sub_0012BEF0); /* call 0x0012BEF0 */

loc_0012BFF5: ;
    esp = esp + 8;

loc_0012BFF8: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(esi + 0x24); PUSH32(esp, 0x0012C003u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C003: ;
    esp = esp + 8;
    MEM32(esi + 0x1C) = 0;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C011: ;
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C020
 * Original: 0x0012C020 - 0x0012C11A (250 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C020: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C113; /* je: equal / zero */

loc_0012C02F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x31 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C113; /* jne: not equal / not zero */

loc_0012C038: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0x38 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C113; /* jne: not equal / not zero */

loc_0012C043: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C10B; /* je: equal / zero */

loc_0012C050: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    MEM32(esi + 0x18) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0012C062; /* jne: not equal / not zero */

loc_0012C058: ;
    MEM32(esi + 0x20) = 0x12B1D0;
    MEM32(esi + 0x28) = edi;

loc_0012C062: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C06E; /* jne: not equal / not zero */

loc_0012C067: ;
    MEM32(esi + 0x24) = 0x12B210;

loc_0012C06E: ;
    eax = MEM32(esi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x20); PUSH32(esp, 0x0012C079u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C079: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C0ED; /* je: equal / zero */

loc_0012C083: ;
    MEM32(eax + 0x14) = edi;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + 0xC) = edi;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012C0A0; /* jge: greater or equal (signed >=) */

loc_0012C094: ;
    edx = MEM32(esi + 0x1C);
    ecx = (uint32_t)(-(int32_t)ecx);
    MEM32(edx + 0xC) = 1;

loc_0012C0A0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012C102; /* jl: less (signed <) */

loc_0012C0A5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012C102; /* jg: greater (signed >) */

loc_0012C0AA: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(esi + 0x1C);
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = 0; /* xor self */
    PUSH32(esp, edx);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x12B0A0;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C0D1u); RECOMP_ABI_CALL(0x0012B2B0u, sub_0012B2B0); /* call 0x0012B2B0 */

loc_0012C0D1: ;
    edx = MEM32(esi + 0x1C);
    MEM32(edx + 0x14) = eax;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x14);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0012C0F5; /* jne: not equal / not zero */

loc_0012C0E5: ;
    PUSH32(esp, 0x0012C0EAu); RECOMP_ABI_CALL(0x0012BFD0u, sub_0012BFD0); /* call 0x0012BFD0 */

loc_0012C0EA: ;
    esp = esp + 4;

loc_0012C0ED: ;
    POP32(esp, esi);
    eax = 0xFFFFFFFCu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012C0F5: ;
    PUSH32(esp, 0x0012C0FAu); RECOMP_ABI_CALL(0x0012BF80u, sub_0012BF80); /* call 0x0012BF80 */

loc_0012C0FA: ;
    esp = esp + 4;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012C102: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C108u); RECOMP_ABI_CALL(0x0012BFD0u, sub_0012BFD0); /* call 0x0012BFD0 */

loc_0012C108: ;
    esp = esp + 4;

loc_0012C10B: ;
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012C113: ;
    eax = 0xFFFFFFFAu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C120
 * Original: 0x0012C120 - 0x0012C4E2 (962 bytes, 333 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C120: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C4DB; /* je: equal / zero */

loc_0012C12D: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C4DB; /* je: equal / zero */

loc_0012C138: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C4DB; /* je: equal / zero */

loc_0012C141: ;
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0xFFFFFFFBu;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    ebp = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0012C4B4; /* ja: above (unsigned >) */

loc_0012C166: ;
    ebx = 5;
    goto loc_0012C170;

    /* nop */

loc_0012C170: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x12C4E4); /* switch: 14 entries, 14 targets */
    if (_jt == 0x0012C177u) goto loc_0012C177;
    if (_jt == 0x0012C1EDu) goto loc_0012C1ED;
    if (_jt == 0x0012C258u) goto loc_0012C258;
    if (_jt == 0x0012C2C8u) goto loc_0012C2C8;
    if (_jt == 0x0012C2FCu) goto loc_0012C2FC;
    if (_jt == 0x0012C331u) goto loc_0012C331;
    if (_jt == 0x0012C367u) goto loc_0012C367;
    if (_jt == 0x0012C3D2u) goto loc_0012C3D2;
    if (_jt == 0x0012C402u) goto loc_0012C402;
    if (_jt == 0x0012C434u) goto loc_0012C434;
    if (_jt == 0x0012C45Eu) goto loc_0012C45E;
    if (_jt == 0x0012C49Au) goto loc_0012C49A;
    if (_jt == 0x0012C4C7u) goto loc_0012C4C7;
    if (_jt == 0x0012C4D1u) goto loc_0012C4D1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012C177: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C3C2; /* je: equal / zero */

loc_0012C182: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x1C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = edx;
    edx = MEM32(esi);
    MEM32(esi + 4) = eax;
    eax = ZX8(MEM8(edx));
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(eax + 4);
    ecx = MEM32(esi);
    SET_LO8(edx, LO8(edx) & 0xF);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 8 (8-bit) */
    edi = ebp;
    MEM32(esi) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C1C5; /* je: equal / zero */

loc_0012C1AD: ;
    MEM32(eax) = 0xD;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x18) = 0x3DC09C;
    MEM32(eax + 4) = ebx;
    goto loc_0012C3AA;

loc_0012C1C5: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 0x10);
    ecx = ecx >> 4;
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012C1E7; /* jbe: below or equal (unsigned <=) */

loc_0012C1D5: ;
    MEM32(eax) = 0xD;
    MEM32(esi + 0x18) = 0x3DC088;
    goto loc_0012C3A4;

loc_0012C1E7: ;
    MEM32(eax) = 1;

loc_0012C1ED: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C3C2; /* je: equal / zero */

loc_0012C1F8: ;
    ecx = MEM32(esi + 0x1C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    edx = ZX8(MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = MEM32(ecx + 4);
    eax = eax << 8;
    eax = eax + edx;
    MEM32(esp + 0x14) = edx;
    edx = 0; /* xor self */
    ebx = 0x1F;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi = ebp;
    ebx = 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C242; /* je: equal / zero */

loc_0012C22A: ;
    MEM32(ecx) = 0xD;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x18) = 0x3DC070;
    MEM32(eax + 4) = ebx;
    goto loc_0012C3AA;

loc_0012C242: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012C3C9; /* jne: not equal / not zero */

loc_0012C24D: ;
    MEM32(ecx) = 7;
    goto loc_0012C3AA;

loc_0012C258: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012C266u); RECOMP_ABI_CALL(0x0012B350u, sub_0012B350); /* call 0x0012B350 */

loc_0012C266: ;
    edi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C288; /* jne: not equal / not zero */

loc_0012C270: ;
    eax = MEM32(esi + 0x1C);
    MEM32(eax) = 0xD;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx + 4) = 0;
    goto loc_0012C3AA;

loc_0012C288: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012C28E; /* jne: not equal / not zero */

loc_0012C28C: ;
    edi = ebp;

loc_0012C28E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C3C2; /* jne: not equal / not zero */

loc_0012C297: ;
    eax = MEM32(esi + 0x1C);
    edx = eax + 4;
    eax = MEM32(eax + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    edi = ebp;
    PUSH32(esp, 0x0012C2AAu); RECOMP_ABI_CALL(0x0012B230u, sub_0012B230); /* call 0x0012B230 */

loc_0012C2AA: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0xC);
    esp = esp + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C2C2; /* je: equal / zero */

loc_0012C2B7: ;
    MEM32(eax) = 0xC;
    goto loc_0012C3AA;

loc_0012C2C2: ;
    MEM32(eax) = 8;

loc_0012C2C8: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C3C2; /* je: equal / zero */

loc_0012C2D3: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = edx;
    edx = ZX8(MEM8(ecx));
    edx = edx << 0x18;
    MEM32(eax + 8) = edx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    edi = ebp;
    MEM32(ecx) = 9;

loc_0012C2FC: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C3C2; /* je: equal / zero */

loc_0012C307: ;
    edx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX8(MEM8(edx));
    eax = MEM32(esi + 0x1C);
    edx = MEM32(eax + 8);
    ecx = ecx << 0x10;
    edx = edx + ecx;
    MEM32(eax + 8) = edx;
    eax = MEM32(esi);
    edx = MEM32(esi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    edi = ebp;
    MEM32(edx) = 0xA;

loc_0012C331: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C3C2; /* je: equal / zero */

loc_0012C33C: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = edx;
    edx = ZX8(MEM8(ecx));
    ecx = MEM32(eax + 8);
    edx = edx << 8;
    ecx = ecx + edx;
    MEM32(eax + 8) = ecx;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x1C);
    edi = ebp;
    MEM32(eax) = 0xB;

loc_0012C367: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C3C2; /* je: equal / zero */

loc_0012C36E: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = edx;
    edx = ZX8(MEM8(ecx));
    MEM32(eax + 8) = MEM32(eax + 8) + edx;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    edi = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C4BE; /* je: equal / zero */

loc_0012C397: ;
    MEM32(eax) = 0xD;
    MEM32(esi + 0x18) = 0x3DC058;

loc_0012C3A4: ;
    edx = MEM32(esi + 0x1C);
    MEM32(edx + 4) = ebx;

loc_0012C3AA: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012C170; /* jbe: below or equal (unsigned <=) */

loc_0012C3B8: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C3C2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C3C9: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx) = 2;

loc_0012C3D2: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C3C2; /* je: equal / zero */

loc_0012C3D9: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x1C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = edx;
    edx = MEM32(esi);
    MEM32(esi + 4) = eax;
    eax = ZX8(MEM8(edx));
    eax = eax << 0x18;
    MEM32(ecx + 8) = eax;
    eax = MEM32(esi);
    edx = MEM32(esi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    edi = ebp;
    MEM32(edx) = 3;

loc_0012C402: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C3C2; /* je: equal / zero */

loc_0012C409: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = edx;
    edx = ZX8(MEM8(ecx));
    ecx = MEM32(eax + 8);
    edx = edx << 0x10;
    ecx = ecx + edx;
    MEM32(eax + 8) = ecx;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x1C);
    edi = ebp;
    MEM32(eax) = 4;

loc_0012C434: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C3C2; /* je: equal / zero */

loc_0012C43B: ;
    ecx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ZX8(MEM8(ecx));
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 8);
    edx = edx << 8;
    ecx = ecx + edx;
    MEM32(eax + 8) = ecx;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x1C);
    edi = ebp;
    MEM32(eax) = ebx;

loc_0012C45E: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C3C2; /* je: equal / zero */

loc_0012C469: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax = MEM32(esi + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 8) = edx;
    edx = ZX8(MEM8(ecx));
    MEM32(eax + 8) = MEM32(eax + 8) + edx;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(esi + 0x30) = ecx;
    POP32(esp, ebx);
    MEM32(eax) = 6;
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C49A: ;
    edx = MEM32(esi + 0x1C);
    MEM32(edx) = 0xD;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x18) = 0x3DC048;
    MEM32(eax + 4) = 0;

loc_0012C4B4: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C4BE: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(ecx) = 0xC;

loc_0012C4C7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C4D1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C4DB: ;
    eax = 0xFFFFFFFEu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C4E2
 * Original: 0x0012C4E2 - 0x0012C520 (62 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C4E2(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C4E2: ;
    edi = edi;
    if (_flags /* ja: above (unsigned >) */) { g_seh_ebp = ebp; sub_0012C4A7(); return; }

loc_0012C4E6: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    /* TODO: in eax, dx */
    /* TODO: rcl dword ptr [edx], 0 */
    SET_LO8(ebx, ROL32(LO8(ebx), LO8(ecx)));
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(eax));
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0xC4);
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    POP32(esp, esi);
    /* TODO: les edx, ptr [edx] */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x580012C4)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(edx + 0x580012C4) = MEM8(edx + 0x580012C4) + LO8(ebx);
    esp += 22; return; /* ret 18 */

}

/**
 * sub_0012C520
 * Original: 0x0012C520 - 0x0012C6CD (429 bytes, 183 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C520(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C520: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    MEM32(esp + 8) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0012C53C; /* jne: not equal / not zero */

loc_0012C533: ;
    POP32(esp, ebp);
    eax = 0xFFFFFF9Au;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012C53C: ;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C551; /* jne: not equal / not zero */

loc_0012C547: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFF9Au;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012C551: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C55F; /* jne: not equal / not zero */

loc_0012C555: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFF9Cu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012C55F: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C56E; /* jne: not equal / not zero */

loc_0012C567: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012C56E: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x14) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_0012C582; /* jbe: below or equal (unsigned <=) */

loc_0012C57F: ;
    MEM32(esi + 0x14) = eax;

loc_0012C582: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0012C596; /* ja: above (unsigned >) */

loc_0012C588: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012C592: ;
    edx = MEM32(esp + 0x18);

loc_0012C596: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C604; /* jne: not equal / not zero */

loc_0012C59B: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0012C604; /* jbe: below or equal (unsigned <=) */

loc_0012C5A2: ;
    edi = 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012C5B5; /* jae: above or equal (unsigned >=) */

loc_0012C5AB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C6BC; /* je: equal / zero */

loc_0012C5B5: ;
    _fa = (uint32_t)(MEM32(edx + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x48), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C5D5; /* jne: not equal / not zero */

loc_0012C5BA: ;
    eax = MEM32(esi + 0x68);
    eax = eax + MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x60);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0012C5CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C5CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012C6C4; /* jne: not equal / not zero */

loc_0012C5D5: ;
    ecx = MEM32(esi + 0x60);
    eax = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012C5E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C5E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C6C4; /* jne: not equal / not zero */

loc_0012C5EC: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(esi + 0x58);
    ecx = ecx + edi;
    MEM32(esi + 0x3C) = ecx;
    ecx = MEM32(esi);
    eax = eax - edi;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edi;

loc_0012C604: ;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x64), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C665; /* jne: not equal / not zero */

loc_0012C609: ;
    eax = MEM32(esi + 0x14);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012C615; /* jae: above or equal (unsigned >=) */

loc_0012C613: ;
    edi = eax;

loc_0012C615: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C623u); RECOMP_ICALL_SAFE(0x00342AA0u, _icall_esp); /* manual call 0x00342AA0 */
    }

loc_0012C623: ;
    eax = MEM32(esi + 0x5C);
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x14);
    eax = eax - edi;
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x10);
    edx = edx - edi;
    ecx = ecx - edi;
    eax = eax + edi;
    MEM32(esi + 8) = edx;
    edx = MEM32(esi + 4);
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x1C);
    edx = edx + edi;
    ecx = ecx + edi;
    esp = esp + 0xC;
    eax = eax + edi;
    MEM32(esi + 0x50) = ebp;
    MEM32(esi + 4) = edx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esp + 0x10) = eax;
    goto loc_0012C6A3;

loc_0012C665: ;
    edi = MEM32(esi + 0x18);
    ecx = esi + 4;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012C673u); RECOMP_ABI_CALL(0x0012C120u, sub_0012C120); /* call 0x0012C120 */

loc_0012C673: ;
    ecx = MEM32(esi + 0x5C);
    ebx = eax;
    eax = MEM32(esi + 0x18);
    edx = edi;
    edx = edx - eax;
    ecx = ecx + edx;
    MEM32(esi + 0x5C) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax - edi;
    ecx = ecx + eax;
    esp = esp + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    MEM32(esi + 0x50) = ebp;
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012C588; /* je: equal / zero */

loc_0012C69F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C6B4; /* jne: not equal / not zero */

loc_0012C6A3: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012C592; /* ja: above (unsigned >) */

loc_0012C6AC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C588; /* je: equal / zero */

loc_0012C6B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012C6BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0012C6C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C6D0
 * Original: 0x0012C6D0 - 0x0012C73E (110 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C6D0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012C6E0; /* jne: not equal / not zero */

loc_0012C6D9: ;
    eax = 0xFFFFFF9Au;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012C6E0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x84);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012C6F3; /* jne: not equal / not zero */

loc_0012C6EB: ;
    POP32(esp, esi);
    eax = 0xFFFFFF9Au;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0012C6F3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C704; /* je: equal / zero */

loc_0012C6F9: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C701u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0012C701: ;
    esp = esp + 8;

loc_0012C704: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0012C71D; /* je: equal / zero */

loc_0012C711: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C71Au); RECOMP_ABI_CALL(0x0012BFD0u, sub_0012BFD0); /* call 0x0012BFD0 */

loc_0012C71A: ;
    esp = esp + 4;

loc_0012C71D: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    MEM32(esi + 0x40) = 0;
    PUSH32(esp, 0x0012C72Cu); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0012C72C: ;
    esp = esp + 8;
    POP32(esp, esi);
    MEM32(edi + 0x84) = 0;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C740
 * Original: 0x0012C740 - 0x0012C7B0 (112 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012C740: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012C750; /* jne: not equal / not zero */

loc_0012C749: ;
    eax = 0xFFFFFF9Au;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012C750: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C769; /* je: equal / zero */

loc_0012C757: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012C75Fu); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0012C75F: ;
    esp = esp + 8;
    MEM32(esi + 0x28) = 0;

loc_0012C769: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x2C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0012C783; /* je: equal / zero */

loc_0012C77A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C780u); RECOMP_ABI_CALL(0x0012C6D0u, sub_0012C6D0); /* call 0x0012C6D0 */

loc_0012C780: ;
    esp = esp + 4;

loc_0012C783: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0012C78Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C78A: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012C7A1; /* jne: not equal / not zero */

loc_0012C79C: ;
    PUSH32(esp, 0x0012C7A1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012C7A1: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C7A9u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0012C7A9: ;
    esp = esp + 8;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C7B0
 * Original: 0x0012C7B0 - 0x0012C8E9 (313 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C7B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C7B0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C7C4; /* je: equal / zero */

loc_0012C7BF: ;
    _fa = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x18), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C7CF; /* jne: not equal / not zero */

loc_0012C7C4: ;
    POP32(esp, ebp);
    eax = 0xFFFFFF9Au;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0012C7CF: ;
    _fa = (uint32_t)(MEM32(ebx + 0x84)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x84), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C7E0; /* je: equal / zero */

loc_0012C7D7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012C7DDu); RECOMP_ABI_CALL(0x0012C6D0u, sub_0012C6D0); /* call 0x0012C6D0 */

loc_0012C7DD: ;
    esp = esp + 4;

loc_0012C7E0: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0x0012C7F6u); RECOMP_ABI_CALL(0x00129BA0u, sub_00129BA0); /* call 0x00129BA0 */

loc_0012C7F6: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C808; /* je: equal / zero */

loc_0012C7FD: ;
    POP32(esp, ebp);
    eax = 0xFFFFFF99u;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0012C808: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x0012C815u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0012C815: ;
    esi = eax;
    eax = 0; /* xor self */
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    ecx = 0x1B;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C855; /* je: equal / zero */

loc_0012C829: ;
    eax = 0x10000;
    PUSH32(esp, 0x0012C833u); RECOMP_ABI_CALL(0x00128B30u, sub_00128B30); /* call 0x00128B30 */

loc_0012C833: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    MEM32(esi + 0x44) = ecx;
    MEM32(esi + 0x48) = edx;
    MEM32(esi + 0x4C) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0012C862; /* jne: not equal / not zero */

loc_0012C84A: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012C852u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_0012C852: ;
    esp = esp + 8;

loc_0012C855: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFF98u;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0012C862: ;
    MEM32(esi + 0x40) = ebp;
    edx = MEM32(ebx + 0x3C);
    ecx = MEM32(ebx + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    MEM32(esi + 0x54) = ecx;
    MEM32(esi + 0x50) = ebp;
    edx = MEM32(ebx + 0x3C);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esi + 0x64) = edx;
    ecx = MEM32(ebx);
    MEM32(esi + 0x60) = ecx;
    edx = MEM32(ebx + 0xC);
    MEM32(esi + 0x68) = edx;
    MEM32(esi + 0x18) = ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C8B9; /* jne: not equal / not zero */

loc_0012C890: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3DC0B8);
    eax = esi + 4;
    PUSH32(esp, 0xFFFFFFF1u);
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x2C) = ebp;
    PUSH32(esp, 0x0012C8ABu); RECOMP_ABI_CALL(0x0012C020u, sub_0012C020); /* call 0x0012C020 */

loc_0012C8AB: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012C8B9; /* jne: not equal / not zero */

loc_0012C8B2: ;
    MEM32(esi + 0x40) = 1;

loc_0012C8B9: ;
    ecx = MEM32(ebx + 0x48);
    MEM32(esi + 0x58) = ecx;
    edx = MEM32(ebx + 0x4C);
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x5C) = edx;
    eax = MEM32(ebx + 0x80);
    edx = eax + ecx + 0x1E;
    MEM32(esi + 8) = ebp;
    POP32(esp, edi);
    MEM32(esi + 0x3C) = edx;
    MEM32(ebx + 0x84) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0012C8F0
 * Original: 0x0012C8F0 - 0x0012CAC6 (470 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C8F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C8F0: ;
    esp = esp - 0x98;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0012C906u); RECOMP_ABI_CALL(0x00124120u, sub_00124120); /* call 0x00124120 */

loc_0012C906: ;
    ecx = MEM32(esp + 0xA4);
    esp = esp + 4;
    ebx = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DB1FC);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0012C91Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C91F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012C944; /* jne: not equal / not zero */

loc_0012C923: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012C93A; /* jne: not equal / not zero */

loc_0012C933: ;
    ecx = ebx;
    PUSH32(esp, 0x0012C93Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012C93A: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x98;
    esp += 4; return; /* ret */

loc_0012C944: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012C94Bu); RECOMP_ABI_CALL(0x00128B60u, sub_00128B60); /* call 0x00128B60 */

loc_0012C94B: ;
    esi = eax;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012C958; /* jne: not equal / not zero */

loc_0012C954: ;
    MEM32(esp + 0x14) = edi;

loc_0012C958: ;
    edx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0012C965u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C965: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012C96D; /* je: equal / zero */

loc_0012C969: ;
    MEM32(esp + 0x14) = edi;

loc_0012C96D: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0012C97Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C97D: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012C98Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C98D: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012C99Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C99D: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012C9ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C9AD: ;
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x2C) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012C9C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C9C6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C9DF; /* jne: not equal / not zero */

loc_0012C9CF: ;
    _fa = (uint32_t)(MEM16(esp + 0x18)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x18), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012C9DF; /* jne: not equal / not zero */

loc_0012C9D7: ;
    _fa = (uint32_t)(MEM16(esp + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0xC), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C9E7; /* je: equal / zero */

loc_0012C9DF: ;
    MEM32(esp + 0x14) = 0xFFFFFF99u;

loc_0012C9E7: ;
    edx = MEM32(ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012C9F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012C9F8: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x4C) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012CA10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012CA10: ;
    ebp = MEM32(esp + 0x10);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x50) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0012CA28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012CA28: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    edx = edi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_0012CA40; /* jb: below (unsigned <) */

loc_0012CA38: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CA6B; /* je: equal / zero */

loc_0012CA40: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0012CA47u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012CA47: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CA5E; /* jne: not equal / not zero */

loc_0012CA57: ;
    ecx = ebx;
    PUSH32(esp, 0x0012CA5Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CA5E: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x98;
    esp += 4; return; /* ret */

loc_0012CA6B: ;
    ecx = esi;
    PUSH32(esp, 0x42);
    ecx = ecx - ebp;
    ecx = ecx - edi;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x88);
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0xB0) = 0;
    PUSH32(esp, 0x0012CA96u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_0012CA96: ;
    edx = eax;
    esp = esp + 0xC;
    eax = 0; /* xor self */
    ecx = 0x22;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, ebp);
    ecx = 0x22;
    esi = esp + 0x1C;
    edi = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x28) = eax;
    MEM32(edx + 0x2C) = eax;
    eax = edx;
    POP32(esp, ebx);
    esp = esp + 0x98;
    esp += 4; return; /* ret */

}

/**
 * sub_0012CAD0
 * Original: 0x0012CAD0 - 0x0012CB5C (140 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CAD0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    ecx = MEM32(esi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CB54; /* je: equal / zero */

loc_0012CAE1: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0012CAE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012CAE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CB54; /* je: equal / zero */

loc_0012CAEA: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0012CAF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012CAF2: ;
    edi = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x54);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0012CB06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012CB06: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CB44; /* je: equal / zero */

loc_0012CB0A: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    SET_LO8(ebx, 1);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012CB13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012CB13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CB4B; /* je: equal / zero */

loc_0012CB17: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x0012CB20u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0012CB20: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0012CB27u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012CB27: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0012CB35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012CB35: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = edi;
    PUSH32(esp, 0x0012CB42u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0012CB42: ;
    SET_LO8(eax, LO8(ebx));

loc_0012CB44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_0012CB4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_0012CB54: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0012CB60
 * Original: 0x0012CB60 - 0x0012CB9F (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CB60: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    ecx = esp + 4;
    PUSH32(esp, 0x0012CB6Du); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0012CB6D: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esp + 0x48);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012CB81u); RECOMP_ABI_CALL(0x0012CAD0u, sub_0012CAD0); /* call 0x0012CAD0 */

loc_0012CB81: ;
    SET_LO8(ebx, LO8(eax));
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CB98; /* je: equal / zero */

loc_0012CB8A: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x0012CB98u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0012CB98: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0012CBA0
 * Original: 0x0012CBA0 - 0x0012CBF8 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CBA0: ;
    esp = esp - 0x40;
    ecx = esp;
    PUSH32(esp, 0x0012CBABu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0012CBAB: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x44);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012CBBEu); RECOMP_ABI_CALL(0x0012CAD0u, sub_0012CAD0); /* call 0x0012CAD0 */

loc_0012CBBE: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CBF4; /* je: equal / zero */

loc_0012CBC5: ;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x0012CBD4u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0012CBD4: ;
    esi = MEM32(esp + 0x54);
    ecx = esi + 8;
    PUSH32(esp, ecx);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0012CBEAu); RECOMP_ABI_CALL(0x00242850u, sub_00242850); /* call 0x00242850 */

loc_0012CBEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012CBF0u); RECOMP_ABI_CALL(0x000125F0u, sub_000125F0); /* call 0x000125F0 */

loc_0012CBF0: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_0012CBF4: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0012CC00
 * Original: 0x0012CC00 - 0x0012CC84 (132 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CC00(void)
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

loc_0012CC00: ;
    esp = esp - 0x40;
    ecx = esp;
    PUSH32(esp, 0x0012CC0Bu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0012CC0B: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x44);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012CC1Eu); RECOMP_ABI_CALL(0x0012CAD0u, sub_0012CAD0); /* call 0x0012CAD0 */

loc_0012CC1E: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CC80; /* je: equal / zero */

loc_0012CC25: ;
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x0012CC33u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0012CC33: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    eax = MEM32(esp + 0x50);
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0012CC7Du); RECOMP_ABI_CALL(0x000125F0u, sub_000125F0); /* call 0x000125F0 */

loc_0012CC7D: ;
    esp = esp + 4;

loc_0012CC80: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012CC90
 * Original: 0x0012CC90 - 0x0012CEB5 (549 bytes, 192 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CC90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012CC90: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351F04);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    MEM32(esi) = ebp;
    MEM32(esp + 0x20) = ebp;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = ebp;
    eax = MEM32(0x5BC50C);
    edi = MEM32(eax + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x20) = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0012CCDA; /* je: equal / zero */

loc_0012CCD7: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012CCDA: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    ebx = 0x7FFFFF;
    if (CMP_EQ(_fa, _fb)) goto loc_0012CCF8; /* je: equal / zero */

loc_0012CCE6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CCF8; /* jne: not equal / not zero */

loc_0012CCF3: ;
    PUSH32(esp, 0x0012CCF8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CCF8: ;
    MEM32(esi + 4) = edi;
    ecx = MEM32(0x5BC50C);
    edi = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CD0B; /* je: equal / zero */

loc_0012CD08: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012CD0B: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CD24; /* je: equal / zero */

loc_0012CD12: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CD24; /* jne: not equal / not zero */

loc_0012CD1F: ;
    PUSH32(esp, 0x0012CD24u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CD24: ;
    MEM32(esi + 8) = edi;
    edx = MEM32(0x5BC50C);
    edi = MEM32(edx + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CD37; /* je: equal / zero */

loc_0012CD34: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012CD37: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CD50; /* je: equal / zero */

loc_0012CD3E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CD50; /* jne: not equal / not zero */

loc_0012CD4B: ;
    PUSH32(esp, 0x0012CD50u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CD50: ;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x0012CD58u); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0012CD58: ;
    edi = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, 0x0012CD68u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0012CD68: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx << 4;
    edx = MEM32(ecx + edi + 4);
    ecx = ecx + edi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0012CD7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012CD7A: ;
    ebx = MEM32(0x5BC50C);
    edi = eax;
    ebx = ebx + 0x38;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CD8C; /* je: equal / zero */

loc_0012CD89: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012CD8C: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CDA7; /* je: equal / zero */

loc_0012CD92: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CDA7; /* jne: not equal / not zero */

loc_0012CDA2: ;
    PUSH32(esp, 0x0012CDA7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CDA7: ;
    MEM32(ebx) = edi;
    PUSH32(esp, 0x0012CDAEu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0012CDAE: ;
    ecx = MEM32(esp + 0x2C);
    edi = eax;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0012CDC1u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_0012CDC1: ;
    edx = MEM32(esp + 0x2C);
    edx = edx << 4;
    eax = MEM32(edx + edi + 4);
    ecx = edx + edi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012CDD3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012CDD3: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CDDC; /* je: equal / zero */

loc_0012CDD9: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012CDDC: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CDF8; /* je: equal / zero */

loc_0012CDE3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CDF8; /* jne: not equal / not zero */

loc_0012CDF3: ;
    PUSH32(esp, 0x0012CDF8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CDF8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE5C; /* je: equal / zero */

loc_0012CDFF: ;
    ebx = MEM32(0x5BC50C);
    ecx = MEM32(edi + 4);
    ebx = ebx + 0x40;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = ecx;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE2A; /* je: equal / zero */

loc_0012CE15: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CE2A; /* jne: not equal / not zero */

loc_0012CE25: ;
    PUSH32(esp, 0x0012CE2Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CE2A: ;
    MEM32(ebx) = edi;
    ebx = MEM32(0x5BC50C);
    edi = MEM32(esi + 0x10);
    ebx = ebx + 0x3C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE3F; /* je: equal / zero */

loc_0012CE3C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012CE3F: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE5A; /* je: equal / zero */

loc_0012CE45: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CE5A; /* jne: not equal / not zero */

loc_0012CE55: ;
    PUSH32(esp, 0x0012CE5Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CE5A: ;
    MEM32(ebx) = edi;

loc_0012CE5C: ;
    ebx = MEM32(esp + 0x28);
    ecx = MEM32(0x5BC50C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012CE6Cu); RECOMP_ABI_CALL(0x002381E0u, sub_002381E0); /* call 0x002381E0 */

loc_0012CE6C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE75; /* je: equal / zero */

loc_0012CE72: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012CE75: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE90; /* je: equal / zero */

loc_0012CE7B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CE90; /* jne: not equal / not zero */

loc_0012CE8B: ;
    PUSH32(esp, 0x0012CE90u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CE90: ;
    MEM32(esi) = edi;
    ecx = MEM32(0x5BC50C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012CE9Eu); RECOMP_ABI_CALL(0x00238380u, sub_00238380); /* call 0x00238380 */

loc_0012CE9E: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012CEC0
 * Original: 0x0012CEC0 - 0x0012D058 (408 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CEC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351F04);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 4;
    if (TEST_Z(_fa, _fb)) goto loc_0012CF00; /* je: equal / zero */

loc_0012CEEB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CF00; /* jne: not equal / not zero */

loc_0012CEFB: ;
    PUSH32(esp, 0x0012CF00u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CF00: ;
    PUSH32(esp, ebx);
    MEM32(esi) = 0;
    ebx = MEM32(0x5BC50C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    ebx = ebx + 0x38;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CF1B; /* je: equal / zero */

loc_0012CF18: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012CF1B: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CF36; /* je: equal / zero */

loc_0012CF21: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CF36; /* jne: not equal / not zero */

loc_0012CF31: ;
    PUSH32(esp, 0x0012CF36u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CF36: ;
    MEM32(ebx) = edi;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CF9F; /* je: equal / zero */

loc_0012CF3F: ;
    ebx = MEM32(0x5BC50C);
    edi = MEM32(esi + 8);
    ebx = ebx + 0x3C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CF52; /* je: equal / zero */

loc_0012CF4F: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012CF52: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CF6D; /* je: equal / zero */

loc_0012CF58: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CF6D; /* jne: not equal / not zero */

loc_0012CF68: ;
    PUSH32(esp, 0x0012CF6Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CF6D: ;
    MEM32(ebx) = edi;
    ebx = MEM32(0x5BC50C);
    edi = MEM32(esi + 0xC);
    ebx = ebx + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CF82; /* je: equal / zero */

loc_0012CF7F: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012CF82: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012CF9D; /* je: equal / zero */

loc_0012CF88: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CF9D; /* jne: not equal / not zero */

loc_0012CF98: ;
    PUSH32(esp, 0x0012CF9Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CF9D: ;
    MEM32(ebx) = edi;

loc_0012CF9F: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    MEM8(esp + 0x14) = 3;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0012CFC2; /* je: equal / zero */

loc_0012CFAD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CFC2; /* jne: not equal / not zero */

loc_0012CFBD: ;
    PUSH32(esp, 0x0012CFC2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CFC2: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_0012CFE3; /* je: equal / zero */

loc_0012CFCE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012CFE3; /* jne: not equal / not zero */

loc_0012CFDE: ;
    PUSH32(esp, 0x0012CFE3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012CFE3: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0012D004; /* je: equal / zero */

loc_0012CFEF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D004; /* jne: not equal / not zero */

loc_0012CFFF: ;
    PUSH32(esp, 0x0012D004u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D004: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0012D025; /* je: equal / zero */

loc_0012D010: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D025; /* jne: not equal / not zero */

loc_0012D020: ;
    PUSH32(esp, 0x0012D025u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D025: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0012D049; /* je: equal / zero */

loc_0012D034: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D049; /* jne: not equal / not zero */

loc_0012D044: ;
    PUSH32(esp, 0x0012D049u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D049: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D060
 * Original: 0x0012D060 - 0x0012D082 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D060: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D07E; /* je: equal / zero */

loc_0012D069: ;
    eax = MEM32(0x5BD89C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012D076u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0012D076: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D07E; /* je: equal / zero */

loc_0012D07A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012D07E: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012D090
 * Original: 0x0012D090 - 0x0012D0B2 (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D090: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D0AE; /* je: equal / zero */

loc_0012D099: ;
    eax = MEM32(0x5BDACC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012D0A6u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0012D0A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D0AE; /* je: equal / zero */

loc_0012D0AA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012D0AE: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012D0C0
 * Original: 0x0012D0C0 - 0x0012D159 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D0C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x320 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0012D0D7; /* jl: less (signed <) */

loc_0012D0CE: ;
    eax = 0x320;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0012D0D7: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0012D0EA; /* jne: not equal / not zero */

loc_0012D0E8: ;
    edx = ~edx;

loc_0012D0EA: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D114; /* jne: not equal / not zero */

loc_0012D0F5: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x320 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012D14F; /* jge: greater or equal (signed >=) */

loc_0012D102: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0012D110; /* jne: not equal / not zero */

loc_0012D10E: ;
    edx = ~edx;

loc_0012D110: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D0F5; /* je: equal / zero */

loc_0012D114: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D122; /* jne: not equal / not zero */

loc_0012D11C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0012D122: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D12C; /* jne: not equal / not zero */

loc_0012D126: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0012D12C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D137; /* jne: not equal / not zero */

loc_0012D131: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0012D137: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D148; /* jne: not equal / not zero */

loc_0012D13C: ;
    /* nop */

loc_0012D140: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D140; /* je: equal / zero */

loc_0012D148: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x320 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012D154; /* jl: less (signed <) */

loc_0012D14F: ;
    eax = 0x320;

loc_0012D154: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012D160
 * Original: 0x0012D160 - 0x0012D1D4 (116 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D160: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0012D17Cu); RECOMP_ABI_CALL(0x00257360u, sub_00257360); /* call 0x00257360 */

loc_0012D17C: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D1AE; /* jne: not equal / not zero */

loc_0012D184: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0012D192u); RECOMP_ABI_CALL(0x002865A0u, sub_002865A0); /* call 0x002865A0 */

loc_0012D192: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0012D1A1u); RECOMP_ABI_CALL(0x00257360u, sub_00257360); /* call 0x00257360 */

loc_0012D1A1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0012D1CC; /* je: equal / zero */

loc_0012D1A6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D1CC; /* je: equal / zero */

loc_0012D1AE: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D1CC; /* je: equal / zero */

loc_0012D1BD: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx + 0x10);
    eax = MEM32(ecx + eax * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0012D1CC: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012D1E0
 * Original: 0x0012D1E0 - 0x0012D217 (55 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D1E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x18);
    ebx = MEM32(ecx + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0012D213; /* jle: less or equal (signed <=) */

loc_0012D1F4: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D20E; /* je: equal / zero */

loc_0012D204: ;
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012D20Eu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0012D20E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012D1F4; /* jl: less (signed <) */

loc_0012D213: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012D220
 * Original: 0x0012D220 - 0x0012D266 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D220: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D265; /* je: equal / zero */

loc_0012D22A: ;
    edx = MEM32(0x5BC9D0);
    MEM32(eax) = edx;
    edx = MEM32(0x5BC9D4);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x5BC9D8);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    edx = MEM32(0x5BC9D0);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(0x5BC9D4);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(0x5BC9D8);
    MEM32(eax + 0x18) = edx;
    MEM8(eax + 0x1C) = LO8(ecx);

loc_0012D265: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012D270
 * Original: 0x0012D270 - 0x0012D49F (559 bytes, 188 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D270(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D270: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351F30);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x18);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x10);
    ebp = MEM32(ecx + edx * 4);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012D2B3; /* je: equal / zero */

loc_0012D2B0: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012D2B3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012D463; /* je: equal / zero */

loc_0012D2BF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D463; /* je: equal / zero */

loc_0012D2C7: ;
    MEM32(esp + 0x2C) = ecx;
    eax = MEM32(esi + 0x2D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(esp + 0x24) = 1;
    if (CMP_L(_fas, _fbs)) goto loc_0012D2F5; /* jl: less (signed <) */

loc_0012D2DA: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0012D2E3u); RECOMP_ABI_CALL(0x0012D160u, sub_0012D160); /* call 0x0012D160 */

loc_0012D2E3: ;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0012D2EDu); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_0012D2ED: ;
    ebx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D350; /* jne: not equal / not zero */

loc_0012D2F5: ;
    esi = MEM32(esi + 0x2D0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0012D31A; /* jl: less (signed <) */

loc_0012D2FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0012D308u); RECOMP_ABI_CALL(0x0012D160u, sub_0012D160); /* call 0x0012D160 */

loc_0012D308: ;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0012D312u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_0012D312: ;
    ebx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D350; /* jne: not equal / not zero */

loc_0012D31A: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D339; /* jne: not equal / not zero */

loc_0012D332: ;
    ecx = edi;
    PUSH32(esp, 0x0012D339u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D339: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_0012D350: ;
    esi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D369; /* je: equal / zero */

loc_0012D357: ;
    ecx = MEM32(0x5BDACC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0012D365u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0012D365: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D36B; /* jne: not equal / not zero */

loc_0012D369: ;
    esi = 0; /* xor self */

loc_0012D36B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0012D376; /* je: equal / zero */

loc_0012D373: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012D376: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(esp + 0x24) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_0012D385; /* je: equal / zero */

loc_0012D37F: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D3C7; /* jne: not equal / not zero */

loc_0012D385: ;
    ebp = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D3A2; /* je: equal / zero */

loc_0012D38C: ;
    edx = MEM32(0x5BD89C);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0012D39Au); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0012D39A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D3A2; /* je: equal / zero */

loc_0012D39E: ;
    ecx = ebp;
    goto loc_0012D3A4;

loc_0012D3A2: ;
    ecx = 0; /* xor self */

loc_0012D3A4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0012D3AF; /* je: equal / zero */

loc_0012D3AC: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012D3AF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012D40B; /* je: equal / zero */

loc_0012D3B3: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D40B; /* je: equal / zero */

loc_0012D3B9: ;
    ecx = esp + 0x18;
    MEM8(esp + 0x24) = 2;
    PUSH32(esp, 0x0012D3C7u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0012D3C7: ;
    ecx = esp + 0x10;
    MEM8(esp + 0x24) = 1;
    PUSH32(esp, 0x0012D3D5u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0012D3D5: ;
    ecx = esp + 0x2C;
    MEM8(esp + 0x24) = 0;
    PUSH32(esp, 0x0012D3E3u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0012D3E3: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0012D3F4u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0012D3F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

loc_0012D40B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x24) = 2;
    ebp = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_0012D42B; /* je: equal / zero */

loc_0012D419: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D42B; /* jne: not equal / not zero */

loc_0012D426: ;
    PUSH32(esp, 0x0012D42Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D42B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(esp + 0x24) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0012D448; /* je: equal / zero */

loc_0012D434: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D448; /* jne: not equal / not zero */

loc_0012D441: ;
    ecx = esi;
    PUSH32(esp, 0x0012D448u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D448: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM8(esp + 0x24) = 0;
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D468; /* jne: not equal / not zero */

loc_0012D45A: ;
    ecx = ebx;
    PUSH32(esp, 0x0012D461u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D461: ;
    goto loc_0012D468;

loc_0012D463: ;
    ebp = 0x7FFFFF;

loc_0012D468: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0012D488; /* je: equal / zero */

loc_0012D474: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D488; /* jne: not equal / not zero */

loc_0012D481: ;
    ecx = edi;
    PUSH32(esp, 0x0012D488u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D488: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012D4A0
 * Original: 0x0012D4A0 - 0x0012DA11 (1393 bytes, 436 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D4A0(void)
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

loc_0012D4A0: ;
    eax = MEM32(XBOX_FS_BASE);
    fp_push(MEMF(0x5BC9D0)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351F60);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = esp;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x78));
    esp = esp - 0x78;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(0x5BC9D4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(0x5BC9D8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x90);
    MEM32(eax + 8) = edx;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0012D4E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D4E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D9F8; /* je: equal / zero */

loc_0012D4F1: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ecx + esi * 4);
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x18) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0012D511; /* je: equal / zero */

loc_0012D50E: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012D511: ;
    PUSH32(esp, ebp);
    fp_push(MEMF(esp + 0x9C)); /* fld float */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    MEM32(esp + 0x90) = 0;
    PUSH32(esp, 0x0012D52Fu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0012D52F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x28) = eax;
    ebp = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0012D9CE; /* je: equal / zero */

loc_0012D53D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D9CE; /* je: equal / zero */

loc_0012D545: ;
    eax = MEM32(ebx + 0x2D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_0012D9CE; /* jl: less (signed <) */

loc_0012D553: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012D55Cu); RECOMP_ABI_CALL(0x0012D160u, sub_0012D160); /* call 0x0012D160 */

loc_0012D55C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x18) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0012D569; /* je: equal / zero */

loc_0012D566: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012D569: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM8(esp + 0x94) = 1;
    PUSH32(esp, 0x0012D57Au); RECOMP_ABI_CALL(0x0012D060u, sub_0012D060); /* call 0x0012D060 */

loc_0012D57A: ;
    edi = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x20) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0012D58A; /* je: equal / zero */

loc_0012D587: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012D58A: ;
    esi = MEM32(esi + 0xC);
    PUSH32(esp, esi);
    MEM8(esp + 0x94) = 2;
    PUSH32(esp, 0x0012D59Bu); RECOMP_ABI_CALL(0x0012D090u, sub_0012D090); /* call 0x0012D090 */

loc_0012D59B: ;
    esi = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x24) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0012D5AB; /* je: equal / zero */

loc_0012D5A8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012D5AB: ;
    ecx = esp + 0x48;
    MEM8(esp + 0x90) = 3;
    PUSH32(esp, 0x0012D5BCu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0012D5BC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D746; /* je: equal / zero */

loc_0012D5C4: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xFC); PUSH32(esp, 0x0012D5CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D5CE: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x98);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0012D5E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D5E5: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012D71E; /* jnp: not parity */

loc_0012D5F8: ;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x24), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012D71E; /* je: equal / zero */

loc_0012D602: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012D617u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0012D617: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    ebx = eax;
    PUSH32(esp, ebx);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0x0012D632u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0012D632: ;
    ecx = MEM32(esp + 0x28);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    { uint64_t _t = (uint64_t)(ebp) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x28) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D64A; /* jne: not equal / not zero */

loc_0012D642: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D6AE; /* je: equal / zero */

loc_0012D64A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x0012D654u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D654: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D68A; /* je: equal / zero */

loc_0012D658: ;
    eax = MEM32(edi);
    ecx = edi;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x0012D666u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D666: ;
    edx = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0012D674u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D674: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x40) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x44) = eax;
    goto loc_0012D6AE;

loc_0012D68A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0012D6A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D6A0: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0012D6AEu); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0012D6AE: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0012D6C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D6C0: ;
    ebp = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0012D6D1u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0012D6D1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D6E1; /* jne: not equal / not zero */

loc_0012D6D5: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D922; /* je: equal / zero */

loc_0012D6E1: ;
    fp_push((double)SMEM64(esp + 0x30)); /* fild */
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = ebp;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0012D719u); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_0012D719: ;
    goto loc_0012D922;

loc_0012D71E: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0012D730u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D730: ;
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0012D741u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0012D741: ;
    goto loc_0012D922;

loc_0012D746: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D922; /* je: equal / zero */

loc_0012D74E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x0012D758u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D758: ;
    ecx = MEM32(esp + 0x98);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x18) = edx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0012D76Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D76F: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012D8A5; /* jnp: not parity */

loc_0012D782: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0012D8A5; /* je: equal / zero */

loc_0012D78C: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012D7A1u); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_0012D7A1: ;
    PUSH32(esp, edx);
    ebx = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0x0012D7BCu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0012D7BC: ;
    ecx = MEM32(esp + 0x28);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    { uint64_t _t = (uint64_t)(ebp) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x28) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D7D4; /* jne: not equal / not zero */

loc_0012D7CC: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D838; /* je: equal / zero */

loc_0012D7D4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0012D7DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D7DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D814; /* je: equal / zero */

loc_0012D7E2: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0012D7F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D7F0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0012D7FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D7FE: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x3C) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x40) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x44) = eax;
    goto loc_0012D838;

loc_0012D814: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0012D82Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D82A: ;
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0012D838u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0012D838: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0012D84Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D84A: ;
    ebp = MEM32(esp + 0xA0);
    PUSH32(esp, ebp);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0012D85Bu); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0012D85B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D86B; /* jne: not equal / not zero */

loc_0012D85F: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D922; /* je: equal / zero */

loc_0012D86B: ;
    fp_push((double)SMEM64(esp + 0x30)); /* fild */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = ebp;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0012D8A3u); RECOMP_ABI_CALL(0x001960D0u, sub_001960D0); /* call 0x001960D0 */

loc_0012D8A3: ;
    goto loc_0012D922;

loc_0012D8A5: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0012D8B7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D8B7: ;
    ebx = MEM32(esp + 0xA0);
    PUSH32(esp, ebx);
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0012D8C8u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0012D8C8: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0012D8D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D8D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D922; /* je: equal / zero */

loc_0012D8D6: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0012D8E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D8E4: ;
    edx = MEM32(esp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0012D8F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D8F2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0012D922; /* jl: less (signed <) */

loc_0012D8F6: ;
    if (CMP_G(_fas, _fbs)) goto loc_0012D8FE; /* jg: greater (signed >) */

loc_0012D8F8: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0012D922; /* jb: below (unsigned <) */

loc_0012D8FE: ;
    ebp = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x84); PUSH32(esp, 0x0012D908u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D908: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x88); PUSH32(esp, 0x0012D912u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012D912: ;
    ecx = MEM32(eax);
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;

loc_0012D922: ;
    eax = MEM32(esp + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0012D93F; /* je: equal / zero */

loc_0012D92D: ;
    ecx = eax + 8;
    PUSH32(esp, ecx);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, 0x0012D93Fu); RECOMP_ABI_CALL(0x00242850u, sub_00242850); /* call 0x00242850 */

loc_0012D93F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esp + 0x90) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_0012D962; /* je: equal / zero */

loc_0012D94B: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D962; /* jne: not equal / not zero */

loc_0012D95B: ;
    ecx = esi;
    PUSH32(esp, 0x0012D962u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D962: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esp + 0x90) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_0012D985; /* je: equal / zero */

loc_0012D96E: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D985; /* jne: not equal / not zero */

loc_0012D97E: ;
    ecx = edi;
    PUSH32(esp, 0x0012D985u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D985: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM8(esp + 0x90) = 0;
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D9A6; /* jne: not equal / not zero */

loc_0012D9A1: ;
    PUSH32(esp, 0x0012D9A6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D9A6: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x90) = 0xFFFFFFFFu;
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D9CA; /* jne: not equal / not zero */

loc_0012D9C5: ;
    PUSH32(esp, 0x0012D9CAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D9CA: ;
    SET_LO8(eax, 1);
    goto loc_0012D9F6;

loc_0012D9CE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x90) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0012D9F4; /* je: equal / zero */

loc_0012D9DD: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012D9F4; /* jne: not equal / not zero */

loc_0012D9ED: ;
    ecx = esi;
    PUSH32(esp, 0x0012D9F4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012D9F4: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */

loc_0012D9F6: ;
    POP32(esp, ebp);
    POP32(esp, edi);

loc_0012D9F8: ;
    ecx = MEM32(esp + 0x80);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x84)) >> 32) & 1);
    esp = esp + 0x84;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012DA20
 * Original: 0x0012DA20 - 0x0012DAA0 (128 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DA20: ;
    eax = MEM32(ecx + 0x6400);
    PUSH32(esp, edi);
    edi = ecx + 0x6400;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012DA4D; /* jne: not equal / not zero */

loc_0012DA33: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x320 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012DA95; /* jge: greater or equal (signed >=) */

loc_0012DA41: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012DA33; /* je: equal / zero */

loc_0012DA4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012DA5A; /* jne: not equal / not zero */

loc_0012DA54: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_0012DA5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012DA64; /* jne: not equal / not zero */

loc_0012DA5E: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_0012DA64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012DA6E; /* jne: not equal / not zero */

loc_0012DA68: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_0012DA6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012DA79; /* jne: not equal / not zero */

loc_0012DA72: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012DA72; /* je: equal / zero */

loc_0012DA79: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x320 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012DA95; /* jge: greater or equal (signed >=) */

loc_0012DA81: ;
    eax = edx;

loc_0012DA83: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012DA8Eu); RECOMP_ABI_CALL(0x0012D0C0u, sub_0012D0C0); /* call 0x0012D0C0 */

loc_0012DA8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x320 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012DA83; /* jl: less (signed <) */

loc_0012DA95: ;
    ecx = 0x19;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012DAA0
 * Original: 0x0012DAA0 - 0x0012DB02 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DAA0: ;
    edx = ecx;
    eax = MEM32(edx + 0x70EC);
    eax = MEM32(edx + eax * 4 + 0x6464);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x70F4;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x70EC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x320 (32-bit) */
    MEM32(edx + 0x70EC) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0012DAEC; /* jl: less (signed <) */

loc_0012DAE2: ;
    MEM32(edx + 0x70EC) = 0;

loc_0012DAEC: ;
    MEM32(edx + 0x70F0) = MEM32(edx + 0x70F0) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x70F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x7158);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x7158) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012DB10
 * Original: 0x0012DB10 - 0x0012DB72 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DB10: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x70E8) = esi;
    MEM32(ecx + 0x70EC) = esi;
    MEM32(ecx + 0x70F0) = esi;
    edx = 0; /* xor self */
    goto loc_0012DB30;

    /* nop */

loc_0012DB30: ;
    eax = MEM32(ecx + 0x70E8);
    edi = MEM32(ecx + 0x70F0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x320 (32-bit) */
    MEM32(ecx + 0x70E8) = eax;
    MEM32(ecx + 0x70F0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0012DB5E; /* jl: less (signed <) */

loc_0012DB51: ;
    MEM32(ecx + 0x70E8) = esi;
    eax = 0x31F;
    goto loc_0012DB5F;

loc_0012DB5E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0012DB5F: ;
    MEM32(ecx + eax * 4 + 0x6464) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x320 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012DB30; /* jl: less (signed <) */

loc_0012DB6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012DB80
 * Original: 0x0012DB80 - 0x0012DC02 (130 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DB80: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    ecx = ecx << 2;
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax + 0x6400);
    edx = ~edx;
    edi = edi & edx;
    MEM32(ecx + eax + 0x6400) = edi;
    MEM32(ecx + eax + 0x70F4) = MEM32(ecx + eax + 0x70F4) & edx;
    ecx = MEM32(eax + 0x70E8);
    edx = MEM32(eax + 0x70F0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x320 (32-bit) */
    MEM32(eax + 0x70E8) = ecx;
    MEM32(eax + 0x70F0) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0012DBE8; /* jl: less (signed <) */

loc_0012DBD7: ;
    MEM32(eax + 0x70E8) = 0;
    ecx = 0x31F;
    goto loc_0012DBE9;

loc_0012DBE8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0012DBE9: ;
    MEM32(eax + ecx * 4 + 0x6464) = esi;
    ecx = MEM32(eax + 0x7158);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x7158) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012DC10
 * Original: 0x0012DC10 - 0x0012DCB5 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DC10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    ecx = 0x19;
    edi = esi + 0x6400;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x70E8) = ebx;
    MEM32(esi + 0x70EC) = ebx;
    MEM32(esi + 0x70F0) = ebx;
    ecx = 0x19;
    edi = esi + 0x70F4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x7158) = ebx;
    PUSH32(esp, 0x0012DC52u); RECOMP_ABI_CALL(0x0012DB10u, sub_0012DB10); /* call 0x0012DB10 */

loc_0012DC52: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x7DDC) = ebx;
    MEM32(esi + 0x7DE0) = ebx;
    ecx = 0x31F;
    edx = 0; /* xor self */

loc_0012DC67: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012DC67; /* jne: not equal / not zero */

loc_0012DC73: ;
    MEM32(esi + 0x7DDC) = eax;
    MEM32(esi + 0x7DE0) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x715C;
    goto loc_0012DC90;

    /* nop */

loc_0012DC90: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x7DE0);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x320) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x320 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012DC90; /* jl: less (signed <) */

loc_0012DCAF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012DCC0
 * Original: 0x0012DCC0 - 0x0012DCC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DCC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012DCC0: ;
    g_seh_ebp = ebp; sub_0012DA20(); return; /* tail jmp 0x0012DA20 */

}

/**
 * sub_0012DCD0
 * Original: 0x0012DCD0 - 0x0012DD0A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DCD0: ;
    SET_LO8(ecx, MEM8(0x512444));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012DD04; /* jne: not equal / not zero */

loc_0012DCDF: ;
    edx = MEM32(0x512444);
    edx = edx | eax;
    ecx = 0x50A660;
    MEM32(0x512444) = edx;
    PUSH32(esp, 0x0012DCF7u); RECOMP_ABI_CALL(0x0012DC10u, sub_0012DC10); /* call 0x0012DC10 */

loc_0012DCF7: ;
    PUSH32(esp, 0x35A350);
    PUSH32(esp, 0x0012DD01u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0012DD01: ;
    esp = esp + 4;

loc_0012DD04: ;
    eax = 0x50A660;
    esp += 4; return; /* ret */

}

/**
 * sub_0012DD10
 * Original: 0x0012DD10 - 0x0012DDE4 (212 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012DD10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DD10: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x2CC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(edi) = 0x3DC0E4;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0012DDBB; /* jle: less or equal (signed <=) */

loc_0012DD2A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edi + 0xC;
    /* nop */

loc_0012DD30: ;
    _fa = (uint32_t)(MEM8(0x512444)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x512444), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012DD5F; /* jne: not equal / not zero */

loc_0012DD39: ;
    edx = MEM32(0x512444);
    edx = edx | 1;
    ecx = 0x50A660;
    MEM32(0x512444) = edx;
    PUSH32(esp, 0x0012DD52u); RECOMP_ABI_CALL(0x0012DC10u, sub_0012DC10); /* call 0x0012DC10 */

loc_0012DD52: ;
    PUSH32(esp, 0x35A350);
    PUSH32(esp, 0x0012DD5Cu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0012DD5C: ;
    esp = esp + 4;

loc_0012DD5F: ;
    ecx = MEM32(0x51243C);
    esi = MEM32(ebx);
    esi = esi & ecx;
    PUSH32(esp, esi);
    ecx = 0x50A660;
    PUSH32(esp, 0x0012DD74u); RECOMP_ABI_CALL(0x0012DB80u, sub_0012DB80); /* call 0x0012DB80 */

loc_0012DD74: ;
    ecx = MEM32(0x512440);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(esi * 4 + 0x5117BC) = MEM32(esi * 4 + 0x5117BC) + eax;
    if (((int32_t)MEM32(esi * 4 + 0x5117BC) >= 0)) goto loc_0012DDA7; /* jns: not sign (positive) */

loc_0012DD8A: ;
    MEM32(esi * 4 + 0x5117BC) = esi;
    ecx = MEM32(0x512440);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(esi * 4 + 0x5117BC) = edx;

loc_0012DDA7: ;
    eax = MEM32(edi + 0x2CC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012DD30; /* jl: less (signed <) */

loc_0012DDB9: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0012DDBB: ;
    MEM32(edi + 0x2CC) = 0;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0012DDE3; /* je: equal / zero */

loc_0012DDCE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012DDE3; /* jne: not equal / not zero */

loc_0012DDDE: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0012DDE3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012DDF0
 * Original: 0x0012DDF0 - 0x0012DE7B (139 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012DDF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DDF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x2CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x2CC) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012DE5E; /* jl: less (signed <) */

loc_0012DE00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012DE07u); RECOMP_ABI_CALL(0x0012DCD0u, sub_0012DCD0); /* call 0x0012DCD0 */

loc_0012DE07: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x0012DE10u); RECOMP_ABI_CALL(0x0012DAA0u, sub_0012DAA0); /* call 0x0012DAA0 */

loc_0012DE10: ;
    ebx = eax;
    eax = eax << 5;
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012DE1Du); RECOMP_ABI_CALL(0x0012D220u, sub_0012D220); /* call 0x0012D220 */

loc_0012DE1D: ;
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = edi + ecx * 4 + 0x6400;
    ecx = ebx;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    edi = MEM32(edi + ebx * 4 + 0x715C);
    eax = MEM32(esi + 0x2CC);
    MEM32(esi + eax * 4 + 0xC) = edi;
    eax = MEM32(esi + 0x2CC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x2CC) = eax;
    POP32(esp, ebx);

loc_0012DE5E: ;
    esi = MEM32(esi + ebp * 4 + 0xC);
    PUSH32(esp, 0x0012DE67u); RECOMP_ABI_CALL(0x0012DCD0u, sub_0012DCD0); /* call 0x0012DCD0 */

loc_0012DE67: ;
    ecx = eax;
    eax = MEM32(ecx + 0x7DDC);
    eax = eax & esi;
    eax = eax << 5;
    POP32(esp, esi);
    eax = eax + ecx;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012DE80
 * Original: 0x0012DE80 - 0x0012DF93 (275 bytes, 93 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DE80(void)
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

loc_0012DE80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx + 0x10);
    ebp = MEM32(edx + esi * 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012DF8C; /* je: equal / zero */

loc_0012DEA0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0012DEABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012DEAB: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012DEB3u); RECOMP_ABI_CALL(0x0012DDF0u, sub_0012DDF0); /* call 0x0012DDF0 */

loc_0012DEB3: ;
    esi = eax;
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    _fa = (uint32_t)(MEM32(edi + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x2D8), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012DF8C; /* jl: less (signed <) */

loc_0012DECC: ;
    edi = MEM32(edi + 0x2DC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012DEDD; /* jne: not equal / not zero */

loc_0012DED6: ;
    eax = 0x3C806C;
    goto loc_0012DEF3;

loc_0012DEDD: ;
    PUSH32(esp, 0x0012DEE2u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0012DEE2: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0012DEF3: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0012DEFBu); RECOMP_ABI_CALL(0x002573B0u, sub_002573B0); /* call 0x002573B0 */

loc_0012DEFB: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012DF8C; /* je: equal / zero */

loc_0012DF05: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012DF75; /* je: equal / zero */

loc_0012DF0F: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3DC100)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3dc100] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012DF73; /* jne: not equal / not zero */

loc_0012DF21: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3CEA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3cea68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012DF75; /* jp: parity */

loc_0012DF2E: ;
    MEM8(esi + 0x1C) = LO8(ebx);
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012DF45; /* jp: parity */

loc_0012DF41: ;
    MEM8(esi + 0x1C) = 1;

loc_0012DF45: ;
    edx = MEM32(ecx);
    MEM32(esi) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esi + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 8) = ecx;
    ecx = esi;
    PUSH32(esp, 0x0012DF5Cu); RECOMP_ABI_CALL(0x00199BA0u, sub_00199BA0); /* call 0x00199BA0 */

loc_0012DF5C: ;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi + 0x20);
    MEM32(esi + 0x10) = edx;
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(edi + 0x28);
    MEM32(esi + 0x18) = ecx;
    goto loc_0012DF75;

loc_0012DF73: ;
    fp_pop(); /* fstp st(0) */

loc_0012DF75: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012DF8C; /* jne: not equal / not zero */

loc_0012DF85: ;
    ecx = edi;
    PUSH32(esp, 0x0012DF8Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012DF8C: ;
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
 * sub_0012DFA0
 * Original: 0x0012DFA0 - 0x0012E167 (455 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DFA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012DFA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351F7B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10C;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x10C) = eax;
    PUSH32(esp, edi);
    esi = ecx;
    edx = 0; /* xor self */
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x14);
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x11C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0012E11E; /* je: equal / zero */

loc_0012DFE5: ;
    eax = ecx;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012DFF4; /* je: equal / zero */

loc_0012DFF1: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012DFF4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0xC) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0012E119; /* je: equal / zero */

loc_0012E000: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0012E008u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012E008: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0012E0F8; /* jle: less or equal (signed <=) */

loc_0012E016: ;
    eax = MEM32(esi + 0x2D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0012E02E; /* jl: less (signed <) */

loc_0012E020: ;
    eax = MEM32(esi + 0x2D8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0012E0F8; /* jge: greater or equal (signed >=) */

loc_0012E02E: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edi * 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E043; /* jne: not equal / not zero */

loc_0012E03E: ;
    eax = 0x3C806C;

loc_0012E043: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E053u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0012E053: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM8(esp + 0x123) = 0;
    PUSH32(esp, 0x0012E065u); RECOMP_ABI_CALL(0x001230C0u, sub_001230C0); /* call 0x001230C0 */

loc_0012E065: ;
    eax = esp + 0x24;
    PUSH32(esp, 0x3DC0D8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E074u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0012E074: ;
    esp = esp + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E0A9; /* jne: not equal / not zero */

loc_0012E07B: ;
    PUSH32(esp, 0x3DC0D8);
    MEM32(esi + 0x2D0) = edi;
    PUSH32(esp, 0x0012E08Bu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0012E08B: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DC0D8);
    PUSH32(esp, 0x0012E09Au); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0012E09A: ;
    ecx = eax;
    PUSH32(esp, 0x0012E0A1u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0012E0A1: ;
    MEM32(esi + 0x2D4) = eax;
    goto loc_0012E0EB;

loc_0012E0A9: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x3DC0D0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E0B8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_0012E0B8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E0EB; /* jne: not equal / not zero */

loc_0012E0BF: ;
    PUSH32(esp, 0x3DC0D0);
    MEM32(esi + 0x2D8) = edi;
    PUSH32(esp, 0x0012E0CFu); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_0012E0CF: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3DC0D0);
    PUSH32(esp, 0x0012E0DEu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0012E0DE: ;
    ecx = eax;
    PUSH32(esp, 0x0012E0E5u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_0012E0E5: ;
    MEM32(esi + 0x2DC) = eax;

loc_0012E0EB: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012E016; /* jl: less (signed <) */

loc_0012E0F8: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 0x18);
    ebp = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0012E119; /* jle: less or equal (signed <=) */

loc_0012E107: ;
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0012E114u); RECOMP_ABI_CALL(0x0012DE80u, sub_0012DE80); /* call 0x0012DE80 */

loc_0012E114: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012E107; /* jl: less (signed <) */

loc_0012E119: ;
    edx = MEM32(esp + 0xC);
    POP32(esp, ebp);

loc_0012E11E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    POP32(esp, edi);
    MEM32(esp + 0x118) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0012E146; /* je: equal / zero */

loc_0012E12F: ;
    ecx = MEM32(edx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012E146; /* jne: not equal / not zero */

loc_0012E13F: ;
    ecx = edx;
    PUSH32(esp, 0x0012E146u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012E146: ;
    ecx = MEM32(esp + 0x10C);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x108);
    PUSH32(esp, 0x0012E160u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012E160: ;
    esp = esp + 0x118;
    esp += 4; return; /* ret */

}

/**
 * sub_0012E170
 * Original: 0x0012E170 - 0x0012E191 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E170(void)
{

loc_0012E170: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0xC);
    PUSH32(esp, 0x0012E17Eu); RECOMP_ABI_CALL(0x0012DCD0u, sub_0012DCD0); /* call 0x0012DCD0 */

loc_0012E17E: ;
    ecx = MEM32(eax + 0x7DDC);
    ecx = ecx & esi;
    ecx = ecx << 5;
    SET_LO8(eax, MEM8(ecx + eax + 0x1C));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E1A0
 * Original: 0x0012E1A0 - 0x0012E1D4 (52 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E1A0(void)
{

loc_0012E1A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0xC);
    PUSH32(esp, 0x0012E1AEu); RECOMP_ABI_CALL(0x0012DCD0u, sub_0012DCD0); /* call 0x0012DCD0 */

loc_0012E1AE: ;
    ecx = MEM32(eax + 0x7DDC);
    ecx = ecx & esi;
    ecx = ecx << 5;
    edx = MEM32(ecx + eax);
    ecx = ecx + eax;
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012E1E0
 * Original: 0x0012E1E0 - 0x0012E201 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E1E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012E1E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0xC);
    PUSH32(esp, 0x0012E1EEu); RECOMP_ABI_CALL(0x0012DCD0u, sub_0012DCD0); /* call 0x0012DCD0 */

loc_0012E1EE: ;
    ecx = MEM32(eax + 0x7DDC);
    ecx = ecx & esi;
    ecx = ecx << 5;
    fp_push(MEMF(ecx + eax + 0xC)); /* fld float */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012E210
 * Original: 0x0012E210 - 0x0012E247 (55 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E210(void)
{

loc_0012E210: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0xC);
    PUSH32(esp, 0x0012E21Eu); RECOMP_ABI_CALL(0x0012DCD0u, sub_0012DCD0); /* call 0x0012DCD0 */

loc_0012E21E: ;
    ecx = MEM32(eax + 0x7DDC);
    ecx = ecx & esi;
    ecx = ecx << 5;
    edx = MEM32(ecx + eax + 0x10);
    ecx = ecx + eax + 0x10;
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012E250
 * Original: 0x0012E250 - 0x0012E26F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E250: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DC10C;
    if (TEST_Z(_fa, _fb)) goto loc_0012E269; /* je: equal / zero */

loc_0012E260: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012E266u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0012E266: ;
    esp = esp + 4;

loc_0012E269: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E270
 * Original: 0x0012E270 - 0x0012E2FF (143 bytes, 57 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E270: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0012E285; /* jl: less (signed <) */

loc_0012E27C: ;
    eax = 0x28;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0012E285: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0012E298; /* jne: not equal / not zero */

loc_0012E296: ;
    edx = ~edx;

loc_0012E298: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E2C0; /* jne: not equal / not zero */

loc_0012E2A3: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012E2F5; /* jge: greater or equal (signed >=) */

loc_0012E2AE: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0012E2BC; /* jne: not equal / not zero */

loc_0012E2BA: ;
    edx = ~edx;

loc_0012E2BC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E2A3; /* je: equal / zero */

loc_0012E2C0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E2CE; /* jne: not equal / not zero */

loc_0012E2C8: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0012E2CE: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E2D8; /* jne: not equal / not zero */

loc_0012E2D2: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0012E2D8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E2E3; /* jne: not equal / not zero */

loc_0012E2DD: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0012E2E3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E2F0; /* jne: not equal / not zero */

loc_0012E2E8: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E2E8; /* je: equal / zero */

loc_0012E2F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012E2FA; /* jl: less (signed <) */

loc_0012E2F5: ;
    eax = 0x28;

loc_0012E2FA: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012E300
 * Original: 0x0012E300 - 0x0012E3FF (255 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E300: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x7300);
    PUSH32(esp, edi);
    edi = ebx + 0x7300;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E331; /* jne: not equal / not zero */

loc_0012E316: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012E3F5; /* jge: greater or equal (signed >=) */

loc_0012E325: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E316; /* je: equal / zero */

loc_0012E331: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E33E; /* jne: not equal / not zero */

loc_0012E338: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_0012E33E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E348; /* jne: not equal / not zero */

loc_0012E342: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_0012E348: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E352; /* jne: not equal / not zero */

loc_0012E34C: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_0012E352: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E35D; /* jne: not equal / not zero */

loc_0012E356: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E356; /* je: equal / zero */

loc_0012E35D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012E3F5; /* jge: greater or equal (signed >=) */

loc_0012E366: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_0012E370: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2E0);
    ecx = ecx + ebx;
    PUSH32(esp, 0x0012E37Fu); RECOMP_ABI_CALL(0x0012DD10u, sub_0012DD10); /* call 0x0012DD10 */

loc_0012E37F: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012E3F4; /* jge: greater or equal (signed >=) */

loc_0012E387: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E3B7; /* jne: not equal / not zero */

loc_0012E39A: ;
    /* nop */

loc_0012E3A0: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012E3F4; /* jge: greater or equal (signed >=) */

loc_0012E3AB: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E3A0; /* je: equal / zero */

loc_0012E3B7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E3C5; /* jne: not equal / not zero */

loc_0012E3BF: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0012E3C5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E3CF; /* jne: not equal / not zero */

loc_0012E3C9: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0012E3CF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E3DA; /* jne: not equal / not zero */

loc_0012E3D4: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0012E3DA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E3E8; /* jne: not equal / not zero */

loc_0012E3DF: ;
    /* nop */

loc_0012E3E0: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E3E0; /* je: equal / zero */

loc_0012E3E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012E3F4; /* jge: greater or equal (signed >=) */

loc_0012E3ED: ;
    esi = eax;
    goto loc_0012E370;

loc_0012E3F4: ;
    POP32(esp, esi);

loc_0012E3F5: ;
    edx = 0; /* xor self */
    MEM32(edi) = edx;
    MEM32(edi + 4) = edx;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012E400
 * Original: 0x0012E400 - 0x0012E45D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E400: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x73AC) = esi;
    MEM32(ecx + 0x73B0) = esi;
    MEM32(ecx + 0x73B4) = esi;
    edx = 0; /* xor self */
    goto loc_0012E420;

    /* nop */

loc_0012E420: ;
    eax = MEM32(ecx + 0x73AC);
    edi = MEM32(ecx + 0x73B4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    MEM32(ecx + 0x73AC) = eax;
    MEM32(ecx + 0x73B4) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0012E44C; /* jl: less (signed <) */

loc_0012E43F: ;
    MEM32(ecx + 0x73AC) = esi;
    eax = 0x27;
    goto loc_0012E44D;

loc_0012E44C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0012E44D: ;
    MEM32(ecx + eax * 4 + 0x7308) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012E420; /* jl: less (signed <) */

loc_0012E45A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012E460
 * Original: 0x0012E460 - 0x0012E465 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012E460: ;
    g_seh_ebp = ebp; sub_0012E300(); return; /* tail jmp 0x0012E300 */

}

/**
 * sub_0012E470
 * Original: 0x0012E470 - 0x0012E512 (162 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E470: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    ecx = esi + 0x7300;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x73AC) = edi;
    MEM32(esi + 0x73B0) = edi;
    MEM32(esi + 0x73B4) = edi;
    edx = 0; /* xor self */
    eax = esi + 0x73B8;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    ecx = esi;
    MEM32(esi + 0x73C0) = edi;
    PUSH32(esp, 0x0012E4AFu); RECOMP_ABI_CALL(0x0012E400u, sub_0012E400); /* call 0x0012E400 */

loc_0012E4AF: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x7464) = edi;
    MEM32(esi + 0x7468) = edi;
    ecx = 0x27;
    edx = 0; /* xor self */

loc_0012E4C4: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012E4C4; /* jne: not equal / not zero */

loc_0012E4D0: ;
    MEM32(esi + 0x7464) = eax;
    MEM32(esi + 0x7468) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x73C4;
    goto loc_0012E4F0;

    /* nop */
    /* nop */

loc_0012E4F0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x7468);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012E4F0; /* jl: less (signed <) */

loc_0012E50D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012E520
 * Original: 0x0012E520 - 0x0012E578 (88 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E520(void)
{

loc_0012E520: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351F98);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x3DC11C;
    edx = esi + 4;
    eax = 0; /* xor self */
    edi = edx;
    ecx = 0x1D1B;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0012E561u); RECOMP_ABI_CALL(0x0012E300u, sub_0012E300); /* call 0x0012E300 */

loc_0012E561: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x3DC10C;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0012E580
 * Original: 0x0012E580 - 0x0012E595 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E580(void)
{

loc_0012E580: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E58Bu); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0012E58B: ;
    ecx = eax;
    PUSH32(esp, 0x0012E592u); RECOMP_ABI_CALL(0x0011B840u, sub_0011B840); /* call 0x0011B840 */

loc_0012E592: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E5A0
 * Original: 0x0012E5A0 - 0x0012E6A8 (264 bytes, 69 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E5A0: ;
    esp = esp - 0x304;
    eax = MEM32(0x47A050);
    MEM32(esp + 0x300) = eax;
    eax = MEM32(esp + 0x308);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0012E690; /* je: equal / zero */

loc_0012E5C4: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E690; /* je: equal / zero */

loc_0012E5CD: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM8(esp + 0x110) = 0;
    PUSH32(esp, 0x0012E5E5u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0012E5E5: ;
    esp = esp + 0xC;
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0x10B) = 0;
    PUSH32(esp, 0x0012E604u); RECOMP_ABI_CALL(0x0012E770u, sub_0012E770); /* call 0x0012E770 */

loc_0012E604: ;
    eax = esp + 0x104;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E611u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0012E611: ;
    ecx = eax;
    PUSH32(esp, 0x0012E618u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0012E618: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E678; /* jne: not equal / not zero */

loc_0012E61C: ;
    ecx = esp + 0x204;
    PUSH32(esp, ecx);
    edx = esp + 0x108;
    PUSH32(esp, edx);
    MEM8(esp + 0x20C) = LO8(eax);
    PUSH32(esp, 0x0012E638u); RECOMP_ABI_CALL(0x00125580u, sub_00125580); /* call 0x00125580 */

loc_0012E638: ;
    esp = esp + 8;
    eax = esp + 0x104;
    PUSH32(esp, eax);
    ecx = esp + 0x208;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0012E657u); RECOMP_ABI_CALL(0x0012E6B0u, sub_0012E6B0); /* call 0x0012E6B0 */

loc_0012E657: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E65Du); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0012E65D: ;
    eax = esp + 0x110;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E66Du); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0012E66D: ;
    ecx = eax;
    PUSH32(esp, 0x0012E674u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0012E674: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E690; /* je: equal / zero */

loc_0012E678: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x300);
    PUSH32(esp, 0x0012E687u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012E687: ;
    esp = esp + 0x304;
    esp += 8; return; /* ret 4 */

loc_0012E690: ;
    ecx = MEM32(esp + 0x304);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    PUSH32(esp, 0x0012E69Fu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012E69F: ;
    esp = esp + 0x304;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E6B0
 * Original: 0x0012E6B0 - 0x0012E76A (186 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E6B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x2F);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012E6BEu); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_0012E6BE: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E6DC; /* jne: not equal / not zero */

loc_0012E6C7: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012E6CFu); RECOMP_ABI_CALL(0x00341D90u, sub_00341D90); /* call 0x00341D90 */

loc_0012E6CF: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E6DC; /* jne: not equal / not zero */

loc_0012E6D8: ;
    esi = edi;
    goto loc_0012E6DD;

loc_0012E6DC: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012E6DD: ;
    eax = esi;
    edx = eax + 1;

loc_0012E6E2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E6E2; /* jne: not equal / not zero */

loc_0012E6E9: ;
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012E754; /* jb: below (unsigned <) */

loc_0012E6F0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E6F9u); RECOMP_ABI_CALL(0x00341F4Cu, sub_00341F4C); /* call 0x00341F4C */

loc_0012E6F9: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E754; /* je: equal / zero */

loc_0012E700: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E70Au); RECOMP_ABI_CALL(0x00341F4Cu, sub_00341F4C); /* call 0x00341F4C */

loc_0012E70A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E754; /* je: equal / zero */

loc_0012E711: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012E71Bu); RECOMP_ABI_CALL(0x00341F4Cu, sub_00341F4C); /* call 0x00341F4C */

loc_0012E71B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E754; /* je: equal / zero */

loc_0012E722: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E72Cu); RECOMP_ABI_CALL(0x00341F4Cu, sub_00341F4C); /* call 0x00341F4C */

loc_0012E72C: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E754; /* je: equal / zero */

loc_0012E733: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E73E; /* je: equal / zero */

loc_0012E73A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012E754; /* jne: not equal / not zero */

loc_0012E73E: ;
    PUSH32(esp, 0x0012E743u); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_0012E743: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0012E74Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012E74F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0012E754: ;
    PUSH32(esp, 0x0012E759u); RECOMP_ABI_CALL(0x0011EC10u, sub_0011EC10); /* call 0x0011EC10 */

loc_0012E759: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0012E765u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012E765: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012E770
 * Original: 0x0012E770 - 0x0012E808 (152 bytes, 46 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E770(void)
{

loc_0012E770: ;
    esp = esp - 0x108;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x10C) = eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    MEM8(esp + 0x18) = 0;
    PUSH32(esp, 0x0012E79Eu); RECOMP_ABI_CALL(0x00125580u, sub_00125580); /* call 0x00125580 */

loc_0012E79E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012E7A5u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0012E7A5: ;
    PUSH32(esp, 0x3DAEBC);
    ecx = esp + 0x20;
    PUSH32(esp, 0x3DC138);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E7B9u); RECOMP_ABI_CALL(0x00123610u, sub_00123610); /* call 0x00123610 */

loc_0012E7B9: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x0012E7C6u); RECOMP_ABI_CALL(0x00125610u, sub_00125610); /* call 0x00125610 */

loc_0012E7C6: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0012E7DAu); RECOMP_ABI_CALL(0x0012E6B0u, sub_0012E6B0); /* call 0x0012E6B0 */

loc_0012E7DA: ;
    edx = MEM32(esp + 0x11C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0012E7EDu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0012E7ED: ;
    ecx = MEM32(esp + 0x11C);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x0012E7FFu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012E7FF: ;
    esp = esp + 0x108;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012E810
 * Original: 0x0012E810 - 0x0012E86F (95 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012E810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esi + 0x73B8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012E82Cu); RECOMP_ABI_CALL(0x0012E270u, sub_0012E270); /* call 0x0012E270 */

loc_0012E82C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    ecx = eax;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012E86A; /* je: equal / zero */

loc_0012E83B: ;
    goto loc_0012E840;

    /* nop */

loc_0012E840: ;
    esi = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2E0);
    ecx = ecx + esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012E851u); RECOMP_ABI_CALL(0x0012D1E0u, sub_0012D1E0); /* call 0x0012D1E0 */

loc_0012E851: ;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012E861u); RECOMP_ABI_CALL(0x0012E870u, sub_0012E870); /* call 0x0012E870 */

loc_0012E861: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012E840; /* jne: not equal / not zero */

loc_0012E86A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012E870
 * Original: 0x0012E870 - 0x0012E89C (44 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E870(void)
{

loc_0012E870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    PUSH32(esp, 1);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = ebx + 0x73B8;
    PUSH32(esp, 0x0012E88Bu); RECOMP_ABI_CALL(0x0012E270u, sub_0012E270); /* call 0x0012E270 */

loc_0012E88B: ;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 4) = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012E8A0
 * Original: 0x0012E8A0 - 0x0012E9BC (284 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E8A0: ;
    esp = esp - 0x304;
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    MEM32(esp + 0x304) = eax;
    eax = MEM32(esp + 0x30C);
    PUSH32(esp, 0x100);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM8(esp + 0x110) = 0;
    PUSH32(esp, 0x0012E8D4u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0012E8D4: ;
    esp = esp + 0xC;
    edx = esp + 0x104;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(esp + 0x10B) = 0;
    PUSH32(esp, 0x0012E8F3u); RECOMP_ABI_CALL(0x0012E770u, sub_0012E770); /* call 0x0012E770 */

loc_0012E8F3: ;
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E900u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0012E900: ;
    ecx = eax;
    PUSH32(esp, 0x0012E907u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0012E907: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012E96B; /* jne: not equal / not zero */

loc_0012E90D: ;
    edx = esp + 0x204;
    MEM8(esp + 0x204) = LO8(eax);
    PUSH32(esp, edx);
    eax = esp + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E929u); RECOMP_ABI_CALL(0x00125580u, sub_00125580); /* call 0x00125580 */

loc_0012E929: ;
    esp = esp + 8;
    ecx = esp + 0x104;
    PUSH32(esp, ecx);
    edx = esp + 0x208;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    eax = edx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012E948u); RECOMP_ABI_CALL(0x0012E6B0u, sub_0012E6B0); /* call 0x0012E6B0 */

loc_0012E948: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E94Eu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0012E94E: ;
    ecx = esp + 0x110;
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E95Eu); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0012E95E: ;
    ecx = eax;
    PUSH32(esp, 0x0012E965u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0012E965: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012E995; /* je: equal / zero */

loc_0012E96B: ;
    eax = MEM32(esi + 0x7468);
    ecx = esi + 4;
    eax = eax & MEM32(edx + 0x4C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2E0);
    eax = eax + ecx;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x300);
    PUSH32(esp, 0x0012E98Cu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012E98C: ;
    esp = esp + 0x304;
    esp += 8; return; /* ret 4 */

loc_0012E995: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x208;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0012E9A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012E9A6: ;
    ecx = MEM32(esp + 0x304);
    POP32(esp, esi);
    PUSH32(esp, 0x0012E9B3u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012E9B3: ;
    esp = esp + 0x304;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E9C0
 * Original: 0x0012E9C0 - 0x0012EC83 (707 bytes, 213 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E9C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012E9C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351FDD);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x22C;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 0x23C) = eax;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x0012E9F9u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0012E9F9: ;
    esi = MEM32(esp + 0x250);
    PUSH32(esp, 0x3DAEBC);
    PUSH32(esp, 0x3DC138);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012EA10u); RECOMP_ABI_CALL(0x00123610u, sub_00123610); /* call 0x00123610 */

loc_0012EA10: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012EA20u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_0012EA20: ;
    ecx = MEM32(esp + 0x26C);
    esp = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esp + 0x13F) = LO8(ebx);
    MEM8(esp + 0x140) = LO8(ebx);
    PUSH32(esp, 0x0012EA41u); RECOMP_ABI_CALL(0x0012E6B0u, sub_0012E6B0); /* call 0x0012E6B0 */

loc_0012EA41: ;
    ebp = eax;
    edx = esp + 0x138;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM32(esp + 0x25C) = ebp;
    PUSH32(esp, 0x0012EA5Du); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0012EA5D: ;
    ecx = esp + 0x144;
    esp = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012EA6Du); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0012EA6D: ;
    ecx = eax;
    PUSH32(esp, 0x0012EA74u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0012EA74: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EAB0; /* jne: not equal / not zero */

loc_0012EA7A: ;
    edx = esp + 0x138;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012EA8Du); RECOMP_ABI_CALL(0x0012E6B0u, sub_0012E6B0); /* call 0x0012E6B0 */

loc_0012EA8D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012EA93u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_0012EA93: ;
    eax = esp + 0x144;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012EAA3u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0012EAA3: ;
    ecx = eax;
    PUSH32(esp, 0x0012EAAAu); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_0012EAAA: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EACB; /* je: equal / zero */

loc_0012EAB0: ;
    eax = MEM32(edi + 0x7468);
    esi = MEM32(ecx + 0x4C);
    edx = edi + 4;
    eax = eax & esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2E0);
    eax = eax + edx;
    goto loc_0012EC5C;

loc_0012EACB: ;
    _fa = (uint32_t)(MEM32(edi + 0x73C4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x73C4), 0x28 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012EAE4; /* jge: greater or equal (signed >=) */

loc_0012EAD4: ;
    PUSH32(esp, 0x0012EAD9u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0012EAD9: ;
    ecx = eax;
    PUSH32(esp, 0x0012EAE0u); RECOMP_ABI_CALL(0x0011B290u, sub_0011B290); /* call 0x0011B290 */

loc_0012EAE0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012EAEB; /* je: equal / zero */

loc_0012EAE4: ;
    eax = 0; /* xor self */
    goto loc_0012EC5C;

loc_0012EAEB: ;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, ebx);
    MEM32(esp + 0x248) = ebx;
    PUSH32(esp, 0x0012EAFCu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0012EAFC: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0012EB0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012EB0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012EB5F; /* je: equal / zero */

loc_0012EB0F: ;
    PUSH32(esp, ebp);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0012EB1Eu); RECOMP_ABI_CALL(0x0012CC90u, sub_0012CC90); /* call 0x0012CC90 */

loc_0012EB1E: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    MEM8(esp + 0x248) = 1;
    PUSH32(esp, 0x0012EB30u); RECOMP_ABI_CALL(0x0012EC90u, sub_0012EC90); /* call 0x0012EC90 */

loc_0012EB30: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0012EB3Au); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_0012EB3A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012EB40u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_0012EB40: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0012EB4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012EB4F: ;
    ecx = esp + 0x24;
    MEM8(esp + 0x244) = LO8(ebx);
    PUSH32(esp, 0x0012EB5Fu); RECOMP_ABI_CALL(0x0012CEC0u, sub_0012CEC0); /* call 0x0012CEC0 */

loc_0012EB5F: ;
    eax = MEM32(esp + 0x10);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EC46; /* je: equal / zero */

loc_0012EB6D: ;
    ebp = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EBBC; /* je: equal / zero */

loc_0012EB74: ;
    eax = MEM32(ebp + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012EBB8; /* jle: less or equal (signed <=) */

loc_0012EB7D: ;
    /* nop */

loc_0012EB80: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EBB0; /* je: equal / zero */

loc_0012EB8A: ;
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EBB0; /* je: equal / zero */

loc_0012EB91: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012EB98u); RECOMP_ABI_CALL(0x0012ECF0u, sub_0012ECF0); /* call 0x0012ECF0 */

loc_0012EB98: ;
    eax = MEM32(esp + 0x258);
    esp = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012EBA9u); RECOMP_ABI_CALL(0x00131660u, sub_00131660); /* call 0x00131660 */

loc_0012EBA9: ;
    ecx = eax;
    PUSH32(esp, 0x0012EBB0u); RECOMP_ABI_CALL(0x00131500u, sub_00131500); /* call 0x00131500 */

loc_0012EBB0: ;
    eax = MEM32(ebp + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012EB80; /* jl: less (signed <) */

loc_0012EBB8: ;
    edi = MEM32(esp + 0x14);

loc_0012EBBC: ;
    edi = edi + 4;
    ecx = edi;
    PUSH32(esp, 0x0012EBC6u); RECOMP_ABI_CALL(0x0012EEE0u, sub_0012EEE0); /* call 0x0012EEE0 */

loc_0012EBC6: ;
    esi = eax;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x18) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x244) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0012EBFD; /* je: equal / zero */

loc_0012EBDC: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    eax = esp;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x24) = esp;
    if (CMP_EQ(_fa, _fb)) goto loc_0012EBF4; /* je: equal / zero */

loc_0012EBF1: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012EBF4: ;
    ecx = esi;
    PUSH32(esp, 0x0012EBFBu); RECOMP_ABI_CALL(0x0012EFA0u, sub_0012EFA0); /* call 0x0012EFA0 */

loc_0012EBFB: ;
    goto loc_0012EBFF;

loc_0012EBFD: ;
    eax = 0; /* xor self */

loc_0012EBFF: ;
    ebp = eax;
    MEM32(eax + 4) = ebx;
    esi = esi - edi;
    eax = 0xB21642C9u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((9) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = MEM32(edi + eax * 4 + 0x73C4);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x254);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    MEM8(esp + 0x254) = LO8(ebx);
    PUSH32(esp, 0x0012EC3Fu); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0012EC3F: ;
    ecx = eax;
    PUSH32(esp, 0x0012EC46u); RECOMP_ABI_CALL(0x0011BB70u, sub_0011BB70); /* call 0x0011BB70 */

loc_0012EC46: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x244) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0012EC5Au); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0012EC5A: ;
    eax = ebp;

loc_0012EC5C: ;
    ecx = MEM32(esp + 0x23C);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x238);
    PUSH32(esp, 0x0012EC76u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_0012EC76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x238;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012EC90
 * Original: 0x0012EC90 - 0x0012ECE8 (88 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EC90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012EC90: ;
    ecx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012ECE1; /* je: equal / zero */

loc_0012EC98: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    ecx = MEM32(edi + 8);
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0012ECDE; /* jle: less or equal (signed <=) */

loc_0012ECA9: ;
    PUSH32(esp, esi);
    /* nop */

loc_0012ECB0: ;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012ECE4; /* je: equal / zero */

loc_0012ECBA: ;
    ecx = MEM32(0x5BDB94);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0012ECC8u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0012ECC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012ECE4; /* je: equal / zero */

loc_0012ECCC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012ECDD; /* je: equal / zero */

loc_0012ECD4: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012ECD5: ;
    ecx = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012ECB0; /* jl: less (signed <) */

loc_0012ECDD: ;
    POP32(esp, esi);

loc_0012ECDE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0012ECE1: ;
    esp += 8; return; /* ret 4 */

loc_0012ECE4: ;
    eax = 0; /* xor self */
    goto loc_0012ECD5;

}

/**
 * sub_0012ECF0
 * Original: 0x0012ECF0 - 0x0012EE75 (389 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ECF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012ECF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x351FF8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x5BDB40);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0012ED1Au); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0012ED1A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012ED36; /* je: equal / zero */

loc_0012ED1E: ;
    edx = MEM32(ebx);
    esi = MEM32(0x5BDA90);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0012ED2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012ED2B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012ED36; /* je: equal / zero */

loc_0012ED2F: ;
    edi = ebx;
    goto loc_0012EE38;

loc_0012ED36: ;
    eax = MEM32(ebx);
    esi = MEM32(0x5BDA90);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0012ED43u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012ED43: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EE2E; /* jne: not equal / not zero */

loc_0012ED4B: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012ED57; /* jne: not equal / not zero */

loc_0012ED52: ;
    eax = 0x3C806C;

loc_0012ED57: ;
    PUSH32(esp, 0x3CF604);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012ED62u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_0012ED62: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012ED6D; /* je: equal / zero */

loc_0012ED69: ;
    SET_LO8(eax, 1);
    goto loc_0012ED6F;

loc_0012ED6D: ;
    SET_LO8(eax, 0); /* xor self */

loc_0012ED6F: ;
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012EE38; /* je: equal / zero */

loc_0012ED7B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012ED90; /* jne: not equal / not zero */

loc_0012ED7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012ED85u); RECOMP_ABI_CALL(0x0012EE80u, sub_0012EE80); /* call 0x0012EE80 */

loc_0012ED85: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012EE38; /* jne: not equal / not zero */

loc_0012ED90: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 8);
    SET_LO8(ebx, 0); /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0012EDD7; /* jle: less or equal (signed <=) */

loc_0012ED9E: ;
    PUSH32(esp, ebp);
    /* nop */

loc_0012EDA0: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + esi * 4);
    edx = MEM32(ecx);
    ebp = MEM32(0x5BE5D8);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0012EDB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012EDB1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EDC7; /* jne: not equal / not zero */

loc_0012EDB5: ;
    eax = MEM32(edi + 0x20);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0012EDC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012EDC5: ;
    SET_LO8(ebx, 1);

loc_0012EDC7: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012EDA0; /* jl: less (signed <) */

loc_0012EDD2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, ebp);
    if (TEST_NZ(_fa, _fb)) goto loc_0012EE34; /* jne: not equal / not zero */

loc_0012EDD7: ;
    ecx = edi;
    PUSH32(esp, 0x0012EDDEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0012EDDE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012EDE4u); RECOMP_ABI_CALL(0x002968D0u, sub_002968D0); /* call 0x002968D0 */

loc_0012EDE4: ;
    esp = esp + 4;
    MEM32(esp + 0xC) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    MEM32(esp + 0x1C) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0012EDFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012EDFC: ;
    edi = MEM32(edi + 0x20);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012EE0Bu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0012EE0B: ;
    ecx = esp + 0xC;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0012EE1Cu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0012EE1C: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0012EE2E: ;
    edi = MEM32(esp + 0x24);
    goto loc_0012EE38;

loc_0012EE34: ;
    ebx = MEM32(esp + 0x20);

loc_0012EE38: ;
    ecx = MEM32(0x5BDA80);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0012EE46u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0012EE46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012EE1C; /* je: equal / zero */

loc_0012EE4A: ;
    esi = 0; /* xor self */
    /* nop */

loc_0012EE50: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012EE5C; /* je: equal / zero */

loc_0012EE57: ;
    ecx = MEM32(eax + 8);
    goto loc_0012EE5E;

loc_0012EE5C: ;
    ecx = 0; /* xor self */

loc_0012EE5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012EE1C; /* jge: greater or equal (signed >=) */

loc_0012EE62: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + esi * 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012EE6Fu); RECOMP_ABI_CALL(0x0012ECF0u, sub_0012ECF0); /* call 0x0012ECF0 */

loc_0012EE6F: ;
    esp = esp + 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0012EE50;

}

/**
 * sub_0012EE80
 * Original: 0x0012EE80 - 0x0012EED2 (82 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EE80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0012EEC6; /* jle: less or equal (signed <=) */

loc_0012EE93: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(0x5BE600);
    esi = MEM32(eax + edi * 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0012EEA7u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0012EEA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012EEBB; /* je: equal / zero */

loc_0012EEAB: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0012EEB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012EEB3: ;
    eax = MEM32(eax);
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012EECC; /* je: equal / zero */

loc_0012EEBB: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(eax + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012EE93; /* jl: less (signed <) */

loc_0012EEC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0012EECC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012EEE0
 * Original: 0x0012EEE0 - 0x0012EF12 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EEE0(void)
{

loc_0012EEE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012EEE9u); RECOMP_ABI_CALL(0x0012EF20u, sub_0012EF20); /* call 0x0012EF20 */

loc_0012EEE9: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x7300;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2E0);
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
 * sub_0012EF20
 * Original: 0x0012EF20 - 0x0012EF6A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EF20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x73B0);
    eax = esi + 0x7308;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x73B8);
    edx = esi + edx * 4 + 0x73B8;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x0012EF5Eu); RECOMP_ABI_CALL(0x0012EF70u, sub_0012EF70); /* call 0x0012EF70 */

loc_0012EF5E: ;
    MEM32(esi + 0x73C0) = MEM32(esi + 0x73C0) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x73C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012EF70
 * Original: 0x0012EF70 - 0x0012EF9A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EF70: ;
    eax = MEM32(ecx + 0xA8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xA8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    eax = MEM32(ecx + 0xAC);
    if (CMP_L(_fas, _fbs)) goto loc_0012EF92; /* jl: less (signed <) */

loc_0012EF88: ;
    MEM32(ecx + 0xA8) = 0;

loc_0012EF92: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0xAC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012EFA0
 * Original: 0x0012EFA0 - 0x0012F044 (164 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EFA0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35202E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    edi = MEM32(esp + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi) = 0x3DC0E4;
    MEM32(esp + 0x18) = ebx;
    MEM32(esi + 8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012EFD9; /* je: equal / zero */

loc_0012EFD6: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012EFD9: ;
    MEM32(esi + 0x2CC) = ebx;
    MEM32(esi + 0x2D0) = 0xFFFFFFFFu;
    MEM32(esi + 0x2D4) = ebx;
    MEM32(esi + 0x2D8) = 0xFFFFFFFFu;
    ecx = esi;
    MEM8(esp + 0x18) = 2;
    MEM32(esi + 0x2DC) = ebx;
    PUSH32(esp, 0x0012F00Bu); RECOMP_ABI_CALL(0x0012DFA0u, sub_0012DFA0); /* call 0x0012DFA0 */

loc_0012F00B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F02E; /* je: equal / zero */

loc_0012F017: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012F02E; /* jne: not equal / not zero */

loc_0012F027: ;
    ecx = edi;
    PUSH32(esp, 0x0012F02Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012F02E: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F050
 * Original: 0x0012F050 - 0x0012F076 (38 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F050(void)
{

loc_0012F050: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x7468);
    PUSH32(esp, edi);
    edi = ecx + 4;
    esi = esi & edx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012F069u); RECOMP_ABI_CALL(0x0012F0C0u, sub_0012F0C0); /* call 0x0012F0C0 */

loc_0012F069: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012F071u); RECOMP_ABI_CALL(0x0012F080u, sub_0012F080); /* call 0x0012F080 */

loc_0012F071: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012F080
 * Original: 0x0012F080 - 0x0012F0BE (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F080(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012F080: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x7468);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x73C4) = MEM32(eax + edx * 4 + 0x73C4) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x73C4) >= 0)) goto loc_0012F0BA; /* jns: not sign (positive) */

loc_0012F09D: ;
    MEM32(eax + edx * 4 + 0x73C4) = edx;
    ecx = MEM32(eax + 0x7468);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x73C4) = esi;

loc_0012F0BA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F0C0
 * Original: 0x0012F0C0 - 0x0012F13D (125 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F0C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0012F0CEu); RECOMP_ABI_CALL(0x0012F140u, sub_0012F140); /* call 0x0012F140 */

loc_0012F0CE: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x73B8);
    eax = esi + eax * 4 + 0x73B8;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x73AC);
    edx = MEM32(esi + 0x73B4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    MEM32(esi + 0x73AC) = eax;
    MEM32(esi + 0x73B4) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0012F123; /* jl: less (signed <) */

loc_0012F112: ;
    MEM32(esi + 0x73AC) = 0;
    eax = 0x27;
    goto loc_0012F124;

loc_0012F123: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0012F124: ;
    MEM32(esi + eax * 4 + 0x7308) = edi;
    eax = MEM32(esi + 0x73C0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x73C0) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F140
 * Original: 0x0012F140 - 0x0012F181 (65 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F140(void)
{

loc_0012F140: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2E0);
    ecx = ecx + esi;
    PUSH32(esp, 0x0012F157u); RECOMP_ABI_CALL(0x0012DD10u, sub_0012DD10); /* call 0x0012DD10 */

loc_0012F157: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    eax = edi;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x7300);
    eax = esi + eax * 4 + 0x7300;
    edx = ~edx;
    ecx = ecx & edx;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F190
 * Original: 0x0012F190 - 0x0012F1AE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F190: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0012F198u); RECOMP_ABI_CALL(0x0012E520u, sub_0012E520); /* call 0x0012E520 */

loc_0012F198: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012F1A8; /* je: equal / zero */

loc_0012F19F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012F1A5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0012F1A5: ;
    esp = esp + 4;

loc_0012F1A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F1B0
 * Original: 0x0012F1B0 - 0x0012F276 (198 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F1B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F1B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352053);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 8) = ecx;
    MEM32(ecx) = 0x3DC11C;
    esi = 0; /* xor self */
    ecx = ecx + 4;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x0012F1E0u); RECOMP_ABI_CALL(0x0012E470u, sub_0012E470); /* call 0x0012E470 */

loc_0012F1E0: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x1900);
    MEM8(esp + 0x1C) = 1;
    PUSH32(esp, 0x0012F1F1u); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_0012F1F1: ;
    esp = esp + 8;
    PUSH32(esp, ebp);
    ebx = eax;
    PUSH32(esp, edi);
    goto loc_0012F200;

    /* nop */

loc_0012F200: ;
    ecx = MEM32(0x5BDF38);
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    edi = ecx + 0x14;
    ebp = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0012F21D; /* jl: less (signed <) */

loc_0012F213: ;
    PUSH32(esp, 0x281970);
    PUSH32(esp, 0x0012F21Du); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0012F21D: ;
    eax = MEM32(edi);
    edx = MEM32(ebp + 0x10);
    ecx = eax + 1;
    MEM32(edi) = ecx;
    eax = MEM32(edx + eax * 4);
    MEM32(ebx + esi * 4) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x640) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x640 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F200; /* jl: less (signed <) */

loc_0012F236: ;
    POP32(esp, edi);
    esi = 0; /* xor self */
    POP32(esp, ebp);
    /* nop */

loc_0012F240: ;
    ecx = MEM32(ebx + esi * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BDF38);
    PUSH32(esp, 0x0012F24Fu); RECOMP_ABI_CALL(0x0025CBC0u, sub_0025CBC0); /* call 0x0025CBC0 */

loc_0012F24F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x640) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x640 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F240; /* jl: less (signed <) */

loc_0012F258: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0012F25Eu); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_0012F25E: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F280
 * Original: 0x0012F280 - 0x0012F2DC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F280: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x5198B8));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35206E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_0012F2C9; /* jne: not equal / not zero */

loc_0012F2A4: ;
    MEM32(0x5198B8) = MEM32(0x5198B8) | eax;
    ecx = 0x512448;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0012F2BCu); RECOMP_ABI_CALL(0x0012F1B0u, sub_0012F1B0); /* call 0x0012F1B0 */

loc_0012F2BC: ;
    PUSH32(esp, 0x35A360);
    PUSH32(esp, 0x0012F2C6u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0012F2C6: ;
    esp = esp + 4;

loc_0012F2C9: ;
    ecx = MEM32(esp);
    eax = 0x512448;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F2E0
 * Original: 0x0012F2E0 - 0x0012F2E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F2E0(void)
{

loc_0012F2E0: ;
    MEM32(ecx) = 0x3DC148;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F2F0
 * Original: 0x0012F2F0 - 0x0012F30F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F2F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DC148;
    if (TEST_Z(_fa, _fb)) goto loc_0012F309; /* je: equal / zero */

loc_0012F300: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012F306u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_0012F306: ;
    esp = esp + 4;

loc_0012F309: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F310
 * Original: 0x0012F310 - 0x0012F372 (98 bytes, 23 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F310(void)
{

loc_0012F310: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM8(eax + 0x35) = LO8(ecx);
    MEM8(eax + 0x36) = LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x98) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x9C) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0xA0) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0xA8) = edx;
    edx = MEM32(esp + 0x18);
    MEM8(eax + 0x34) = 1;
    MEM32(eax) = 0x3DC164;
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0xAC) = edx;
    MEM32(ecx) = 0x3F800000;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0012F380
 * Original: 0x0012F380 - 0x0012F3A0 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F380: ;
    edx = MEM32(ecx + 8);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012F391; /* jge: greater or equal (signed >=) */

loc_0012F38C: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_0012F391: ;
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F3A0
 * Original: 0x0012F3A0 - 0x0012F420 (128 bytes, 41 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F3A0(void)
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

loc_0012F3A0: ;
    edx = MEM32(ecx + 0xA4);
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012F41A; /* jne: not equal / not zero */

loc_0012F3B3: ;
    eax = MEM32(esp + 0xC);
    MEM32(edx) = eax;
    edx = MEM32(ecx + 0xA0);
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(edx) = LO8(eax);
    eax = MEM32(ecx + 0x98);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 0x9C);
    edx = MEM32(esp + 0xC);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0xA8);
    esi = MEM32(eax + 0x1C);
    MEM32(edx) = esi;
    edx = MEM32(eax + 0x2C);
    ecx = MEM32(ecx + 0xAC);
    MEM32(ecx) = edx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_0012F41A: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012F420
 * Original: 0x0012F420 - 0x0012F45A (58 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F420: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012F42B; /* jge: greater or equal (signed >=) */

loc_0012F426: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

loc_0012F42B: ;
    edx = MEM32(ecx + 0x18);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x24);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x2C);
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012F460
 * Original: 0x0012F460 - 0x0012F49A (58 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F460: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012F46B; /* jge: greater or equal (signed >=) */

loc_0012F466: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

loc_0012F46B: ;
    edx = MEM32(ecx + 0x30);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x3C);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x44);
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012F4A0
 * Original: 0x0012F4A0 - 0x0012F7E1 (833 bytes, 237 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F4A0(void)
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

loc_0012F4A0: ;
    esp = esp - 0x118;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012F4BC; /* jne: not equal / not zero */

loc_0012F4B1: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x118;
    esp += 32; return; /* ret 28 */

loc_0012F4BC: ;
    eax = MEM32(esp + 0x130);
    edx = eax + 0x2C;
    PUSH32(esp, edx);
    edx = eax + 0x1C;
    PUSH32(esp, edx);
    ecx = eax + 0x3C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x1F;
    PUSH32(esp, ecx);
    edx = eax + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x0012F4E6u); RECOMP_ABI_CALL(0x0012F310u, sub_0012F310); /* call 0x0012F310 */

loc_0012F4E6: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    ecx = MEM32(esp + 0x12C);
    eax = MEM32(esp + 0x128);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0x124);
    fp_push(MEMF(ecx)); /* fld float */
    MEM32(esp + 0x50) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    MEM8(esp + 0x5D) = 0;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012F55B; /* jnp: not parity */

loc_0012F519: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012F55B; /* jnp: not parity */

loc_0012F52B: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012F55B; /* jnp: not parity */

loc_0012F53D: ;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x58) = 1;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    goto loc_0012F563;

loc_0012F55B: ;
    MEM32(esp + 0x58) = 0;

loc_0012F563: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x140);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0012F5A9; /* je: equal / zero */

loc_0012F572: ;
    MEM8(esp + 0x6E) = 0;
    edi = 0; /* xor self */
    /* nop */

loc_0012F580: ;
    ecx = 0; /* xor self */
    edx = esi + edi * 4;

loc_0012F585: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F6A3; /* jne: not equal / not zero */

loc_0012F58D: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x3F800000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F6B8; /* je: equal / zero */

loc_0012F599: ;
    MEM8(esp + 0x6E) = 1;
    edi = 4;

loc_0012F5A3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F580; /* jl: less (signed <) */

loc_0012F5A9: ;
    SET_LO8(eax, MEM8(esp + 0x6E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012F6CA; /* je: equal / zero */

loc_0012F5B5: ;
    ecx = esp + 0xE8;
    PUSH32(esp, 0x0012F5C1u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0012F5C1: ;
    PUSH32(esp, esi);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0xF0;
    PUSH32(esp, 0x0012F5D3u); RECOMP_ABI_CALL(0x00244690u, sub_00244690); /* call 0x00244690 */

loc_0012F5D3: ;
    ebx = esp + 0x8C;
    ebx = ebx - esi;
    MEM32(esp + 0x10) = ebx;
    ebx = esp + 0x68;
    ebx = ebx - esi;
    MEM32(esp + 0x24) = ebx;
    ebx = esp + 0xE8;
    ebx = ebx - esi;
    MEM32(esp + 0x2C) = ebx;
    ebx = esp + 0x98;
    ebx = ebx - esi;
    MEM32(esp + 0x1C) = ebx;
    ebx = esp + 0x74;
    ebx = ebx - esi;
    MEM32(esp + 0x14) = ebx;
    ebx = esp + 0xF8;
    ebx = ebx - esi;
    MEM32(esp + 0x28) = ebx;
    edx = esp + 0x50;
    edi = esp + 0x80;
    ebp = esp + 0x5C;
    ebx = esp + 0xA4;
    ecx = 0; /* xor self */
    edx = edx - esi;
    edi = edi - esi;
    ebp = ebp - esi;
    ebx = ebx - esi;
    eax = esi + 0x20;
    MEM32(esp + 0x18) = ebx;

loc_0012F642: ;
    esi = MEM32(eax + -32);
    ebx = MEM32(esp + 0x10);
    MEM32(edx + eax) = esi;
    esi = MEM32(esp + ecx * 4 + 0xE8);
    MEM32(edi + eax) = esi;
    esi = MEM32(eax + -16);
    MEM32(eax + ebp) = esi;
    esi = MEM32(esp + ecx * 4 + 0xF8);
    MEM32(ebx + eax) = esi;
    esi = MEM32(eax);
    ebx = MEM32(esp + 0x24);
    MEM32(ebx + eax) = esi;
    esi = MEM32(esp + 0x2C);
    esi = MEM32(esi + eax);
    ebx = MEM32(esp + 0x1C);
    MEM32(ebx + eax) = esi;
    esi = MEM32(eax + 0x10);
    ebx = MEM32(esp + 0x14);
    MEM32(ebx + eax) = esi;
    esi = MEM32(esp + 0x28);
    esi = MEM32(esi + eax);
    ebx = MEM32(esp + 0x18);
    MEM32(ebx + eax) = esi;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F642; /* jl: less (signed <) */

loc_0012F69E: ;
    goto loc_0012F762;

loc_0012F6A3: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012F599; /* jp: parity */

loc_0012F6B8: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F585; /* jl: less (signed <) */

loc_0012F6C5: ;
    goto loc_0012F5A3;

loc_0012F6CA: ;
    ebp = esp + 0x68;
    ebp = ebp - esi;
    MEM32(esp + 0x24) = ebp;
    ebp = esp + 0x98;
    ebp = ebp - esi;
    MEM32(esp + 0x1C) = ebp;
    ebp = esp + 0x74;
    ebp = ebp - esi;
    MEM32(esp + 0x14) = ebp;
    ecx = esp + 0x50;
    edx = esp + 0x80;
    edi = esp + 0x5C;
    ebx = esp + 0x8C;
    ebp = esp + 0xA4;
    ecx = ecx - esi;
    edx = edx - esi;
    edi = edi - esi;
    ebx = ebx - esi;
    ebp = ebp - esi;
    eax = esi + 0x20;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x10) = 3;

loc_0012F721: ;
    esi = MEM32(eax + -32);
    ebp = MEM32(esp + 0x24);
    MEM32(eax + ecx) = esi;
    MEM32(eax + edx) = esi;
    esi = MEM32(eax + -16);
    MEM32(eax + edi) = esi;
    MEM32(eax + ebx) = esi;
    esi = MEM32(eax);
    MEM32(eax + ebp) = esi;
    ebp = MEM32(esp + 0x1C);
    MEM32(eax + ebp) = esi;
    esi = MEM32(eax + 0x10);
    ebp = MEM32(esp + 0x14);
    MEM32(eax + ebp) = esi;
    ebp = MEM32(esp + 0x18);
    MEM32(eax + ebp) = esi;
    esi = MEM32(esp + 0x10);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = esi;
    if ((_fa != 0)) goto loc_0012F721; /* jne: not equal / not zero */

loc_0012F762: ;
    eax = MEM32(esp + 0x12C);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x130);
    fp_push(MEMF(ecx)); /* fld float */
    MEM32(esp + 0x40) = edx;
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0012F7A5u); RECOMP_ABI_CALL(0x00198510u, sub_00198510); /* call 0x00198510 */

loc_0012F7A5: ;
    edx = MEM32(eax);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    ecx = ecx + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0012F7B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012F7B8: ;
    edx = MEM32(esp + 0x30);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x3F800000 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012F7D6; /* je: equal / zero */

loc_0012F7C8: ;
    eax = 1;
    esp = esp + 0x118;
    esp += 32; return; /* ret 28 */

loc_0012F7D6: ;
    eax = 0; /* xor self */
    esp = esp + 0x118;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012F7F0
 * Original: 0x0012F7F0 - 0x0012FAE7 (759 bytes, 202 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F7F0(void)
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

loc_0012F7F0: ;
    esp = esp - 0x1A4;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0012FADB; /* je: equal / zero */

loc_0012F806: ;
    edi = MEM32(esp + 0x1C8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012FADB; /* je: equal / zero */

loc_0012F815: ;
    eax = MEM32(esp + 0x1C0);
    PUSH32(esp, esi);
    esi = eax + 0x2C;
    PUSH32(esp, esi);
    esi = eax + 0x1C;
    PUSH32(esp, esi);
    ecx = eax + 0x3C;
    PUSH32(esp, ecx);
    ecx = esp + 0x1B;
    PUSH32(esp, ecx);
    edx = eax + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x0012F840u); RECOMP_ABI_CALL(0x0012F310u, sub_0012F310); /* call 0x0012F310 */

loc_0012F840: ;
    edx = MEM32(esp + 0x1BC);
    eax = MEM32(esp + 0x1C0);
    ecx = esp + 0xEC;
    MEM32(esp + 0x64) = edx;
    MEM32(esp + 0x68) = eax;
    MEM8(esp + 0x71) = 0;
    MEM32(esp + 0x6C) = 2;
    PUSH32(esp, 0x0012F86Fu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0012F86F: ;
    ecx = esp + 0x12C;
    MEM8(esp + 0x72) = 1;
    PUSH32(esp, 0x0012F880u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0012F880: ;
    ecx = esp + 0x16C;
    PUSH32(esp, 0x0012F88Cu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0012F88C: ;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0xF4;
    PUSH32(esp, 0x0012F89Eu); RECOMP_ABI_CALL(0x00244690u, sub_00244690); /* call 0x00244690 */

loc_0012F89E: ;
    eax = MEM32(esp + 0x1C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012F8E7; /* je: equal / zero */

loc_0012F8A9: ;
    edx = esp + 0xEC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x134;
    PUSH32(esp, 0x0012F8BEu); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0012F8BE: ;
    eax = esp + 0xEC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x174;
    PUSH32(esp, 0x0012F8D7u); RECOMP_ABI_CALL(0x00244690u, sub_00244690); /* call 0x00244690 */

loc_0012F8D7: ;
    esi = esp + 0x12C;
    ecx = esp + 0x16C;
    goto loc_0012F8F0;

loc_0012F8E7: ;
    esi = esp + 0xEC;
    ecx = edi;

loc_0012F8F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = esp + 0x78;
    ebp = ebp - ecx;
    MEM32(esp + 0x2C) = ebp;
    ebp = esp + 0xA8;
    ebp = ebp - ecx;
    MEM32(esp + 0x28) = ebp;
    ebp = esp + 0x84;
    ebp = ebp - ecx;
    MEM32(esp + 0x24) = ebp;
    ebp = esp + 0xB4;
    ebp = ebp - ecx;
    MEM32(esp + 0x34) = ebp;
    ebp = esp + 0x90;
    ebp = ebp - ecx;
    MEM32(esp + 0x30) = ebp;
    edi = esp + 0x6C;
    ebx = esp + 0x9C;
    edx = esi + 0x30;
    ebp = esp + 0xC0;
    esi = esi - ecx;
    edi = edi - ecx;
    ebx = ebx - ecx;
    ebp = ebp - ecx;
    eax = ecx + 0x10;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x18) = 3;
    /* nop */

loc_0012F960: ;
    ecx = MEM32(edx + -48);
    ebp = MEM32(esp + 0x2C);
    MEM32(eax + edi) = ecx;
    ecx = MEM32(eax + -16);
    MEM32(eax + ebx) = ecx;
    ecx = MEM32(esi + eax);
    MEM32(eax + ebp) = ecx;
    ecx = MEM32(eax);
    ebp = MEM32(esp + 0x28);
    MEM32(eax + ebp) = ecx;
    ecx = MEM32(edx + -16);
    ebp = MEM32(esp + 0x24);
    MEM32(eax + ebp) = ecx;
    ecx = MEM32(eax + 0x10);
    ebp = MEM32(esp + 0x34);
    MEM32(eax + ebp) = ecx;
    ecx = MEM32(edx);
    ebp = MEM32(esp + 0x30);
    MEM32(eax + ebp) = ecx;
    ecx = MEM32(eax + 0x20);
    ebp = MEM32(esp + 0x10);
    MEM32(eax + ebp) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax + 4;
    edx = edx + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    if ((_fa != 0)) goto loc_0012F960; /* jne: not equal / not zero */

loc_0012F9B7: ;
    eax = MEM32(esp + 0x1B8);
    edx = esp + 0xF4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, 0x0012F9D0u); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_0012F9D0: ;
    eax = MEM32(esp + 0x1C0);
    ecx = MEM32(esp + 0x1BC);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() + MEMF(ecx); /* fadd dword ptr [ecx] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x48); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x4C); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x50); /* fadd dword ptr [esp + 0x50] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx); /* fsub dword ptr [ecx] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 4); /* fsub dword ptr [ecx + 4] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(ecx + 8); /* fsub dword ptr [ecx + 8] */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() + MEMF(0x3C8240); /* fadd dword ptr [0x3c8240] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0012FA75u); RECOMP_ABI_CALL(0x00198510u, sub_00198510); /* call 0x00198510 */

loc_0012FA75: ;
    edx = MEM32(eax);
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    ecx = ecx + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0012FA88u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0012FA88: ;
    ecx = MEM32(esp + 0x1CC);
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F800000 (32-bit) */
    esi = ecx + 0x3C;
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012FAB7; /* je: equal / zero */

loc_0012FA9E: ;
    edi = MEM32(esp + 0x1CC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012FAACu); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0012FAAC: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012FAB7u); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_0012FAB7: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x3F800000 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012FACF; /* je: equal / zero */

loc_0012FAC0: ;
    eax = 1;
    POP32(esp, edi);
    esp = esp + 0x1A4;
    esp += 36; return; /* ret 32 */

loc_0012FACF: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0x1A4;
    esp += 36; return; /* ret 32 */

loc_0012FADB: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp = esp + 0x1A4;
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012FAF0
 * Original: 0x0012FAF0 - 0x0012FDB7 (711 bytes, 153 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FAF0: ;
    eax = MEM32(esp + 4);
    edx = 0x3F800000;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0xBF800000u;
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x1C) = esi;
    MEM32(ecx + 0x20) = esi;
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x28) = edx;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x30) = esi;
    MEM32(ecx + 0x34) = esi;
    MEM32(ecx + 0x38) = esi;
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x40) = edx;
    MEM32(ecx + 0x44) = edx;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0xC) = 0xC;
    MEM32(ecx + 8) = 1;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(ecx + 0x10) = edi;
    ebx = ebx | 0xFFFFFFFFu;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi) = esi;
    MEM32(edi + 0x10) = edx;
    MEM32(edi + 4) = esi;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0x18) = edx;
    ecx = eax + 0x1C;
    edi = 0xC;
    /* nop */

loc_0012FB60: ;
    MEM32(ecx + -16) = 0;
    MEM32(ecx) = ebx;
    MEM32(ecx + 0x10) = ebx;
    ecx = ecx + 0x30;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012FB60; /* jne: not equal / not zero */

loc_0012FB72: ;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = esi;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x30) = esi;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x40) = esi;
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x60) = esi;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x68) = esi;
    MEM32(eax + 0x70) = edx;
    MEM32(eax + 0x74) = esi;
    MEM32(eax + 0x78) = esi;
    MEM32(eax + 0x80) = edx;
    MEM32(eax + 0x84) = edx;
    MEM32(eax + 0x88) = esi;
    MEM32(eax + 0x90) = esi;
    MEM32(eax + 0x94) = esi;
    MEM32(eax + 0x98) = esi;
    MEM32(eax + 0xA0) = edx;
    MEM32(eax + 0xA4) = edx;
    MEM32(eax + 0xA8) = esi;
    MEM32(eax + 0xB0) = esi;
    MEM32(eax + 0xB4) = edx;
    MEM32(eax + 0xB8) = esi;
    MEM32(eax + 0xC0) = esi;
    MEM32(eax + 0xC4) = edx;
    MEM32(eax + 0xC8) = esi;
    MEM32(eax + 0xD0) = edx;
    MEM32(eax + 0xD4) = edx;
    MEM32(eax + 0xD8) = esi;
    MEM32(eax + 0xE0) = edx;
    MEM32(eax + 0xE4) = edx;
    MEM32(eax + 0xE8) = edx;
    MEM32(eax + 0xF0) = esi;
    MEM32(eax + 0xF4) = edx;
    MEM32(eax + 0xF8) = esi;
    MEM32(eax + 0x100) = edx;
    MEM32(eax + 0x104) = edx;
    MEM32(eax + 0x108) = edx;
    MEM32(eax + 0x110) = esi;
    MEM32(eax + 0x114) = edx;
    MEM32(eax + 0x118) = edx;
    MEM32(eax + 0x120) = esi;
    MEM32(eax + 0x124) = esi;
    MEM32(eax + 0x128) = esi;
    MEM32(eax + 0x130) = edx;
    MEM32(eax + 0x134) = esi;
    MEM32(eax + 0x138) = edx;
    MEM32(eax + 0x140) = edx;
    MEM32(eax + 0x144) = esi;
    MEM32(eax + 0x148) = esi;
    MEM32(eax + 0x150) = esi;
    MEM32(eax + 0x154) = esi;
    MEM32(eax + 0x158) = esi;
    MEM32(eax + 0x160) = esi;
    MEM32(eax + 0x164) = esi;
    MEM32(eax + 0x168) = edx;
    MEM32(eax + 0x170) = edx;
    MEM32(eax + 0x174) = esi;
    MEM32(eax + 0x178) = edx;
    MEM32(eax + 0x180) = edx;
    MEM32(eax + 0x184) = esi;
    MEM32(eax + 0x188) = esi;
    MEM32(eax + 0x190) = edx;
    MEM32(eax + 0x194) = edx;
    MEM32(eax + 0x198) = edx;
    MEM32(eax + 0x1A0) = edx;
    MEM32(eax + 0x1A4) = edx;
    MEM32(eax + 0x1A8) = esi;
    MEM32(eax + 0x1B4) = esi;
    MEM32(eax + 0x1B8) = esi;
    MEM32(eax + 0x1C4) = esi;
    MEM32(eax + 0x1B0) = edx;
    MEM32(eax + 0x1C0) = edx;
    MEM32(eax + 0x1C8) = edx;
    MEM32(eax + 0x1D0) = edx;
    MEM32(eax + 0x1D4) = edx;
    MEM32(eax + 0x1D8) = edx;
    MEM32(eax + 0x1E0) = esi;
    MEM32(eax + 0x1E4) = esi;
    MEM32(eax + 0x1E8) = esi;
    MEM32(eax + 0x1F0) = esi;
    MEM32(eax + 0x1F8) = esi;
    MEM32(eax + 0x200) = esi;
    MEM32(eax + 0x1F4) = edx;
    MEM32(eax + 0x204) = edx;
    MEM32(eax + 0x208) = edx;
    POP32(esp, edi);
    MEM32(eax + 0x210) = esi;
    MEM32(eax + 0x214) = esi;
    MEM32(eax + 0x218) = esi;
    MEM32(eax + 0x220) = esi;
    MEM32(eax + 0x230) = esi;
    MEM32(eax + 0x234) = esi;
    POP32(esp, esi);
    MEM32(eax + 0x224) = edx;
    MEM32(eax + 0x228) = edx;
    MEM32(eax + 0x238) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012FDC0
 * Original: 0x0012FDC0 - 0x0012FE15 (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FDC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x18) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0xC) = edi;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012FE0F; /* je: equal / zero */

loc_0012FDFA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012FE0F; /* jne: not equal / not zero */

loc_0012FE0A: ;
    PUSH32(esp, 0x0012FE0Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012FE0F: ;
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012FE20
 * Original: 0x0012FE20 - 0x0012FF48 (296 bytes, 104 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FE20(void)
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

loc_0012FE20: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0012FE32; /* je: equal / zero */

loc_0012FE2F: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012FE32: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012FE4E; /* je: equal / zero */

loc_0012FE39: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0012FE4E; /* jne: not equal / not zero */

loc_0012FE49: ;
    PUSH32(esp, 0x0012FE4Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0012FE4E: ;
    MEM32(esi + 4) = edi;
    eax = MEM32(edi + 0x20);
    MEM32(esi + 8) = eax;
    ecx = MEM32(edi + 0x1C);
    MEM32(esi + 0xC) = ecx;
    edx = MEM32(edi + 0x18);
    eax = MEM32(edx + 0x10);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    edx = MEM32(ecx + 0x10);
    MEM32(esi + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0012FF40; /* jl: less (signed <) */

loc_0012FE79: ;
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax + 8);
    ecx = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x20) = ecx;
    MEM32(esp + 0x10) = eax;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x10);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    edx = MEM32(eax + 0x18);
    fp_push(MEMF(eax + 0x14)); /* fld float */
    eax = eax + 0x10;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = edx;
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x2C) = eax;
    MEM32(esp + 0x10) = edx;
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x18);
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esi + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012FF1C; /* jle: less or equal (signed <=) */

loc_0012FECB: ;
    edx = MEM32(esi + 0x10);
    eax = eax << 5;
    fp_push(MEMF(edx + eax + -32)); /* fld float */
    ecx = edx + eax + -32;
    fp_push(MEMF(ecx + 4)); /* fld float */
    ecx = MEM32(ecx + 8);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = ecx;
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x38) = edx;
    MEM32(esp + 0x10) = ecx;
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x10);
    fp_push(MEMF(ecx + eax + -16)); /* fld float */
    edx = MEM32(ecx + eax + -8);
    fp_push(MEMF(ecx + eax + -12)); /* fld float */
    eax = ecx + eax + -16;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = edx;
    MEMF(esi + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    MEM32(esp + 0xC) = edx;
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x44) = eax;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

loc_0012FF1C: ;
    ecx = MEM32(esi + 0x18);
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM32(esi + 0x34) = edx;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0x38) = eax;
    ecx = MEM32(esi + 0x24);
    MEM32(esi + 0x3C) = ecx;
    edx = MEM32(esi + 0x28);
    MEM32(esi + 0x40) = edx;
    eax = MEM32(esi + 0x2C);
    MEM32(esi + 0x44) = eax;

loc_0012FF40: ;
    POP32(esp, edi);
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
 * sub_0012FF50
 * Original: 0x0012FF50 - 0x0012FFA4 (84 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FF50(void)
{

loc_0012FF50: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352093);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3DC16C;
    MEM32(esp + 0x10) = eax;
    MEM32(esi + 4) = eax;
    MEM8(esp + 0x10) = 1;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0012FF92u); RECOMP_ABI_CALL(0x0012FDC0u, sub_0012FDC0); /* call 0x0012FDC0 */

loc_0012FF92: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0012FFB0
 * Original: 0x0012FFB0 - 0x00130017 (103 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FFB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352093);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3DC16C;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x0012FFE0u); RECOMP_ABI_CALL(0x0012FDC0u, sub_0012FDC0); /* call 0x0012FDC0 */

loc_0012FFE0: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00130001; /* je: equal / zero */

loc_0012FFEC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130001; /* jne: not equal / not zero */

loc_0012FFFC: ;
    PUSH32(esp, 0x00130001u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130001: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DC148;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00130005
 * Original: 0x00130005 - 0x00130017 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130005(void)
{

loc_00130005: ;
    MEM32(esi) = 0x3DC148;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013000C
 * Original: 0x0013000C - 0x00130017 (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013000C(void)
{

loc_0013000C: ;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00130013
 * Original: 0x00130013 - 0x00130017 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130013(void)
{

loc_00130013: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00130020
 * Original: 0x00130020 - 0x0013003E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130020: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00130028u); RECOMP_ABI_CALL(0x0012FFB0u, sub_0012FFB0); /* call 0x0012FFB0 */

loc_00130028: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130038; /* je: equal / zero */

loc_0013002F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00130035u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00130035: ;
    esp = esp + 4;

loc_00130038: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130040
 * Original: 0x00130040 - 0x001300BB (123 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130040: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3520AE);
    PUSH32(esp, eax);
    _fa = (uint32_t)(MEM8(0x519B70)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x519B70), 1 (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00130084; /* jne: not equal / not zero */

loc_0013005E: ;
    MEM32(0x519B70) = MEM32(0x519B70) | 1;
    ecx = 0x519B28;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00130077u); RECOMP_ABI_CALL(0x0012FF50u, sub_0012FF50); /* call 0x0012FF50 */

loc_00130077: ;
    PUSH32(esp, 0x35A370);
    PUSH32(esp, 0x00130081u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00130081: ;
    esp = esp + 4;

loc_00130084: ;
    SET_LO8(eax, MEM8(0x519B20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001300A8; /* jne: not equal / not zero */

loc_0013008D: ;
    PUSH32(esp, 0x519B00);
    PUSH32(esp, 0x5198C0);
    ecx = 0x519B28;
    MEM8(0x519B20) = 1;
    PUSH32(esp, 0x001300A8u); RECOMP_ABI_CALL(0x0012FAF0u, sub_0012FAF0); /* call 0x0012FAF0 */

loc_001300A8: ;
    ecx = MEM32(esp);
    eax = 0x519B28;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001300C0
 * Original: 0x001300C0 - 0x001300D2 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001300C0(void)
{

loc_001300C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001300CFu); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_001300CF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001300E0
 * Original: 0x001300E0 - 0x001300EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001300E0(void)
{

loc_001300E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x44) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001300F0
 * Original: 0x001300F0 - 0x001300FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001300F0(void)
{

loc_001300F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x4C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130100
 * Original: 0x00130100 - 0x00130104 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130100(void)
{

loc_00130100: ;
    eax = MEM32(ecx + 0x64);
    esp += 4; return; /* ret */

}

/**
 * sub_00130110
 * Original: 0x00130110 - 0x00130145 (53 bytes, 20 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130110(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00130110: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00130118u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_00130118: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    esi = MEM32(esi + 0x54);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0013012Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013012C: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00130141u); RECOMP_ABI_CALL(0x0024BA70u, sub_0024BA70); /* call 0x0024BA70 */

loc_00130141: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00130150
 * Original: 0x00130150 - 0x001302AC (348 bytes, 99 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130150(void)
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

loc_00130150: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3520C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x4C;
    eax = MEM32(esp + 0x60);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x00130178u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_00130178: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0013017Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013017F: ;
    fp_top() = fp_top() * MEMF(esp + 0x60); /* fmul dword ptr [esp + 0x60] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0013018Cu); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_0013018C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00130193u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00130193: ;
    fp_top() = fp_top() * MEMF(esp + 0x64); /* fmul dword ptr [esp + 0x64] */
    MEM32(esp + 4) = 0;
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001301A8u); RECOMP_ABI_CALL(0x00194240u, sub_00194240); /* call 0x00194240 */

loc_001301A8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001301AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001301AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001301C5; /* je: equal / zero */

loc_001301B3: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x64); /* fsub dword ptr [esp + 0x64] */
    fp_top() = fp_top() * MEMF(0x3C8240); /* fmul dword ptr [0x3c8240] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_001301C5: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    ecx = esp + 0x10;
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001301EAu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_001301EA: ;
    eax = MEM32(esp + 0x6C);
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 4); /* fadd dword ptr [esp + 4] */
    ecx = MEM32(esp + 0x68);
    edx = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esp = esp - 8;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x74); /* fsub dword ptr [esp + 0x74] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(esp + 0x74)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    ecx = esp + 0x28;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00130226u); RECOMP_ABI_CALL(0x0023E890u, sub_0023E890); /* call 0x0023E890 */

loc_00130226: ;
    eax = MEM32(esi + 0x54);
    ecx = esp + 0x10;
    eax = eax + 0x110;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00130239u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00130239: ;
    esp = esp + 8;
    PUSH32(esp, 0x00130241u); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_00130241: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00130250u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00130250: ;
    esi = MEM32(esi + 0x54);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    esi = esi + 0x110;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    MEM32(esp + 0x60) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x330); PUSH32(esp, 0x00130270u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00130270: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x58) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0013029A; /* je: equal / zero */

loc_00130282: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0013029A; /* jne: not equal / not zero */

loc_00130295: ;
    PUSH32(esp, 0x0013029Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013029A: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x58;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001302B0
 * Original: 0x001302B0 - 0x001302C9 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001302B0(void)
{

loc_001302B0: ;
    eax = MEM32(ecx + 0x54);
    ecx = MEM32(esp + 4);
    eax = eax + 0x110;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001302C3u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_001302C3: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001302D0
 * Original: 0x001302D0 - 0x00130460 (400 bytes, 136 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001302D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001302D0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3520E8);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00130311; /* jne: not equal / not zero */

loc_001302F5: ;
    MEM32(esi + 0x64) = ebx;

loc_001302F8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 24; return; /* ret 20 */

loc_00130311: ;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001302F8; /* jle: less or equal (signed <=) */

loc_00130316: ;
    ebp = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00130338; /* je: equal / zero */

loc_0013031E: ;
    eax = MEM32(ebp + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 1;
    ecx = ebp;
    MEM32(ebp + 0x14) = eax;
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + 0x24) = ebx;
    MEM8(ebp + 0x20) = 0;
    PUSH32(esp, 0x00130338u); RECOMP_ABI_CALL(0x00144980u, sub_00144980); /* call 0x00144980 */

loc_00130338: ;
    PUSH32(esp, 0x0013033Du); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_0013033D: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0013034Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013034C: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x110)) >> 32) & 1);
    eax = eax + 0x110;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(esp + 0x20) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x330); PUSH32(esp, 0x00130366u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00130366: ;
    MEM32(0x5BA6C8) = ebp;
    ecx = MEM32(esi + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00130374u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00130374: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esi + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00130386u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00130386: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013038Fu); RECOMP_ABI_CALL(0x0024BB40u, sub_0024BB40); /* call 0x0024BB40 */

loc_0013038F: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = MEM32(eax + 0xE4);
    if (TEST_Z(_fa, _fb)) goto loc_001303A8; /* je: equal / zero */

loc_001303A0: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 0x200;
    goto loc_001303AE;

loc_001303A8: ;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFDFFu;

loc_001303AE: ;
    MEM32(eax + 0xE4) = ecx;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(esi + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001303C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001303C0: ;
    eax = MEM32(esi + 0x58);
    eax = MEM32(eax + 0x44);
    MEM32(eax + 0xC) = ebx;
    ecx = MEM32(esi + 0x44);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esi + 0x48);
    MEM32(eax + 0x4C) = ecx;
    SET_LO8(ecx, MEM8(esi + 0x4C));
    MEM8(eax + 0x81) = LO8(ecx);
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001303E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001303E6: ;
    ecx = MEM32(esi + 0x58);
    ebx = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001303F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001303F5: ;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001303FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001303FD: ;
    ecx = MEM32(esi + 0x68);
    MEM32(esi + 0x64) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00130408u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00130408: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = eax;
    edi = edx;
    if (TEST_Z(_fa, _fb)) goto loc_00130417; /* je: equal / zero */

loc_00130410: ;
    ecx = ebp;
    PUSH32(esp, 0x00130417u); RECOMP_ABI_CALL(0x00144A00u, sub_00144A00); /* call 0x00144A00 */

loc_00130417: ;
    eax = MEM32(esp + 0x20);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebx));
    esi = esi - ebx;
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(MEM32(esp + 0x28)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00130447; /* je: equal / zero */

loc_0013042F: ;
    ebx = MEM32(eax + 4);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130447; /* jne: not equal / not zero */

loc_00130442: ;
    PUSH32(esp, 0x00130447u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130447: ;
    ecx = MEM32(esp + 0x10);
    edx = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00130460
 * Original: 0x00130460 - 0x00130467 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130460(void)
{

loc_00130460: ;
    eax = MEM32(ecx + 0x58);
    eax = MEM32(eax + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_00130470
 * Original: 0x00130470 - 0x00130489 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130470(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130470: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x58);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0013047Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013047B: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00130488; /* je: equal / zero */

loc_00130483: ;
    edx = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x74)); return; /* indirect tail jmp */

loc_00130488: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00130490
 * Original: 0x00130490 - 0x00130504 (116 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130490: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352108);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001304ABu); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_001304AB: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x001304B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001304B9: ;
    ecx = MEM32(esp);
    edx = MEM32(ecx);
    MEM32(esp + 0xC) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x001304CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001304CC: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001304F3; /* je: equal / zero */

loc_001304DD: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001304F3; /* jne: not equal / not zero */

loc_001304EE: ;
    PUSH32(esp, 0x001304F3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001304F3: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00130510
 * Original: 0x00130510 - 0x001305B6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130510: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352141);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00130535u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00130535: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00130541u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00130541: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00130549u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00130549: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013054Fu); RECOMP_ABI_CALL(0x002904E0u, sub_002904E0); /* call 0x002904E0 */

loc_0013054F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00130563u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00130563: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013056Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013056B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013057B; /* je: equal / zero */

loc_00130578: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013057B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001305A3; /* je: equal / zero */

loc_0013058C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001305A3; /* jne: not equal / not zero */

loc_0013059C: ;
    ecx = esi;
    PUSH32(esp, 0x001305A3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001305A3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001305C0
 * Original: 0x001305C0 - 0x00130666 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001305C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001305C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352141);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001305E5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_001305E5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001305F1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001305F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001305F9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001305F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001305FFu); RECOMP_ABI_CALL(0x0028FA10u, sub_0028FA10); /* call 0x0028FA10 */

loc_001305FF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00130613u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00130613: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013061Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013061B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013062B; /* je: equal / zero */

loc_00130628: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013062B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00130653; /* je: equal / zero */

loc_0013063C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130653; /* jne: not equal / not zero */

loc_0013064C: ;
    ecx = esi;
    PUSH32(esp, 0x00130653u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130653: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00130670
 * Original: 0x00130670 - 0x001306B7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130670(void)
{

loc_00130670: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013067Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013067F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00130692u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00130692: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001306A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001306A4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001306AFu); RECOMP_ABI_CALL(0x00130510u, sub_00130510); /* call 0x00130510 */

loc_001306AF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001306C0
 * Original: 0x001306C0 - 0x00130707 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001306C0(void)
{

loc_001306C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x001306CFu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_001306CF: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001306E2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_001306E2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001306F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001306F4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001306FFu); RECOMP_ABI_CALL(0x001305C0u, sub_001305C0); /* call 0x001305C0 */

loc_001306FF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00130710
 * Original: 0x00130710 - 0x001307E0 (208 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130710: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35217C);
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
    PUSH32(esp, 0x00130735u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00130735: ;
    ebx = 0; /* xor self */
    MEM32(esi + 0x40) = ebx;
    edi = esi + 0x54;
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ebx;
    MEM32(esi + 0x44) = 2;
    MEM32(esi + 0x48) = 1;
    MEM8(esi + 0x4C) = LO8(ebx);
    MEM32(esi + 0x50) = ebx;
    PUSH32(esp, 0x0013075Du); RECOMP_ABI_CALL(0x00130670u, sub_00130670); /* call 0x00130670 */

loc_0013075D: ;
    eax = MEM32(edi);
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = ebx;
    ebp = esi + 0x68;
    PUSH32(esp, 3);
    PUSH32(esp, ebp);
    MEM8(esp + 0x2C) = 2;
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    PUSH32(esp, 0x0013077Bu); RECOMP_ABI_CALL(0x0011BE90u, sub_0011BE90); /* call 0x0011BE90 */

loc_0013077B: ;
    esp = esp + 0x10;
    ecx = MEM32(edi);
    PUSH32(esp, 0x3F800000);
    MEM8(esp + 0x20) = 3;
    PUSH32(esp, 0x0013078Fu); RECOMP_ABI_CALL(0x0024DC70u, sub_0024DC70); /* call 0x0024DC70 */

loc_0013078F: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x34);
    MEM8(ecx + 0x3C) = LO8(ebx);
    ecx = MEM32(ebp);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0013079Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013079F: ;
    eax = MEM32(esi + 0x58);
    edi = MEM32(eax + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001307AC; /* je: equal / zero */

loc_001307A9: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001307AC: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001307C8; /* je: equal / zero */

loc_001307B3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001307C8; /* jne: not equal / not zero */

loc_001307C3: ;
    PUSH32(esp, 0x001307C8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001307C8: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x40) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001307E0
 * Original: 0x001307E0 - 0x001309CD (493 bytes, 164 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001307E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001307E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3521A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x58);
    ebx = 1;
    PUSH32(esp, edi);
    MEM8(eax + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0013080Bu); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_0013080B: ;
    edx = MEM32(eax);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0013081Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013081A: ;
    eax = MEM32(eax);
    ecx = MEM32(esi + 0x58);
    edx = MEM32(ecx);
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = edi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0013082Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013082B: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00130853; /* je: equal / zero */

loc_0013083D: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130853; /* jne: not equal / not zero */

loc_0013084E: ;
    PUSH32(esp, 0x00130853u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130853: ;
    eax = MEM32(esp + 0x20);
    MEM32(esi + 0x50) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00130993; /* je: equal / zero */

loc_00130861: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0013089B; /* je: equal / zero */

loc_00130864: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0013087E; /* je: equal / zero */

loc_00130867: ;
    MEM32(esi + 0x50) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

loc_0013087E: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013099A; /* je: equal / zero */

loc_0013088A: ;
    ecx = MEM32(esi + 0x58);
    MEM8(ecx + 8) = LO8(ebx);
    edx = MEM32(esi + 0x58);
    MEM32(edx + 0xC) = eax;
    goto loc_0013099A;

loc_0013089B: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001308AF; /* je: equal / zero */

loc_001308A3: ;
    eax = MEM32(esi + 0x58);
    MEM8(eax + 8) = LO8(ebx);
    eax = MEM32(esi + 0x58);
    MEM32(eax + 0xC) = ecx;

loc_001308AF: ;
    eax = esp + 0x24;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001308BBu); RECOMP_ABI_CALL(0x001306C0u, sub_001306C0); /* call 0x001306C0 */

loc_001308BB: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_001308CB; /* je: equal / zero */

loc_001308C8: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001308CB: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001308E7; /* je: equal / zero */

loc_001308D2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001308E7; /* jne: not equal / not zero */

loc_001308E2: ;
    PUSH32(esp, 0x001308E7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001308E7: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x5C) = edi;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00130914; /* je: equal / zero */

loc_001308FC: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00130914; /* jne: not equal / not zero */

loc_0013090F: ;
    PUSH32(esp, 0x00130914u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130914: ;
    eax = MEM32(esi + 0x5C);
    MEM8(eax + 0x18) = LO8(ebx);
    PUSH32(esp, 0x0013091Fu); RECOMP_ABI_CALL(0x001941B0u, sub_001941B0); /* call 0x001941B0 */

loc_0013091F: ;
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x0013092Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013092E: ;
    ecx = MEM32(esi + 0x5C);
    eax = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 2;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00130941u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00130941: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0013096B; /* je: equal / zero */

loc_00130953: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0013096B; /* jne: not equal / not zero */

loc_00130966: ;
    PUSH32(esp, 0x0013096Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013096B: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001309B9; /* je: equal / zero */

loc_00130973: ;
    ecx = MEM32(esi + 0x5C);
    MEM8(ecx + 8) = LO8(ebx);
    edx = MEM32(esi + 0x5C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0xC) = eax;
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

loc_00130993: ;
    eax = MEM32(esi + 0x58);
    MEM8(eax + 8) = 0;

loc_0013099A: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001309B6; /* je: equal / zero */

loc_001309A1: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001309B6; /* jne: not equal / not zero */

loc_001309B1: ;
    PUSH32(esp, 0x001309B6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001309B6: ;
    MEM32(esi + 0x5C) = edi;

loc_001309B9: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001309D0
 * Original: 0x001309D0 - 0x001309E5 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001309D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001309D0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001309D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001309D5: ;
    edx = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001309F0
 * Original: 0x001309F0 - 0x00130AB3 (195 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001309F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001309F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3521E9);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0x44;
    MEM32(esp + 0x10) = 3;
    PUSH32(esp, 0x00130A1Du); RECOMP_ABI_CALL(0x0012FFB0u, sub_0012FFB0); /* call 0x0012FFB0 */

loc_00130A1D: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_00130A3E; /* je: equal / zero */

loc_00130A29: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130A3E; /* jne: not equal / not zero */

loc_00130A39: ;
    PUSH32(esp, 0x00130A3Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130A3E: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00130A5F; /* je: equal / zero */

loc_00130A4A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130A5F; /* jne: not equal / not zero */

loc_00130A5A: ;
    PUSH32(esp, 0x00130A5Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130A5F: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00130A80; /* je: equal / zero */

loc_00130A6B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130A80; /* jne: not equal / not zero */

loc_00130A7B: ;
    PUSH32(esp, 0x00130A80u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130A80: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00130AA4; /* je: equal / zero */

loc_00130A8F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130AA4; /* jne: not equal / not zero */

loc_00130A9F: ;
    PUSH32(esp, 0x00130AA4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130AA4: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00130AC0
 * Original: 0x00130AC0 - 0x00130B66 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130AC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352221);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00130AE5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00130AE5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00130AF1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00130AF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00130AF9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00130AF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00130AFFu); RECOMP_ABI_CALL(0x00295810u, sub_00295810); /* call 0x00295810 */

loc_00130AFF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00130B13u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00130B13: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00130B1Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00130B1B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00130B2B; /* je: equal / zero */

loc_00130B28: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00130B2B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00130B53; /* je: equal / zero */

loc_00130B3C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130B53; /* jne: not equal / not zero */

loc_00130B4C: ;
    ecx = esi;
    PUSH32(esp, 0x00130B53u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130B53: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00130B70
 * Original: 0x00130B70 - 0x00130BE5 (117 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130B70: ;
    eax = MEM32(0x5BDA80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00130B82u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00130B82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130BB9; /* je: equal / zero */

loc_00130B86: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00130BBB; /* je: equal / zero */

loc_00130B90: ;
    edx = MEM32(esi);
    edi = MEM32(0x5BDB40);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00130B9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00130B9D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130BBB; /* jne: not equal / not zero */

loc_00130BA1: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130BAF; /* je: equal / zero */

loc_00130BA8: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130BBB; /* jne: not equal / not zero */

loc_00130BAF: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00130BB7u); RECOMP_ABI_CALL(0x00269400u, sub_00269400); /* call 0x00269400 */

loc_00130BB7: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00130BB9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00130BBB: ;
    edi = 0; /* xor self */
    /* nop */

loc_00130BC0: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130BCC; /* je: equal / zero */

loc_00130BC7: ;
    ecx = MEM32(eax + 8);
    goto loc_00130BCE;

loc_00130BCC: ;
    ecx = 0; /* xor self */

loc_00130BCE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00130BB7; /* jge: greater or equal (signed >=) */

loc_00130BD2: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00130BDFu); RECOMP_ABI_CALL(0x00130B70u, sub_00130B70); /* call 0x00130B70 */

loc_00130BDF: ;
    esp = esp + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00130BC0;

}

/**
 * sub_00130BF0
 * Original: 0x00130BF0 - 0x00130C5B (107 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130BF0: ;
    eax = MEM32(0x5BDA28);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00130C02u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00130C02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130C10; /* je: equal / zero */

loc_00130C06: ;
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00130C10u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_00130C10: ;
    ecx = MEM32(0x5BDA80);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00130C1Eu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00130C1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130C59; /* je: equal / zero */

loc_00130C22: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00130C2F; /* je: equal / zero */

loc_00130C2A: ;
    edi = MEM32(eax + 8);
    goto loc_00130C31;

loc_00130C2F: ;
    edi = 0; /* xor self */

loc_00130C31: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00130C57; /* jle: less or equal (signed <=) */

loc_00130C38: ;
    goto loc_00130C40;

    /* nop */

loc_00130C40: ;
    edx = MEM32(ebx + 0x1C);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00130C4Fu); RECOMP_ABI_CALL(0x00130BF0u, sub_00130BF0); /* call 0x00130BF0 */

loc_00130C4F: ;
    esp = esp + 4;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130C40; /* jl: less (signed <) */

loc_00130C57: ;
    POP32(esp, esi);
    POP32(esp, edi);

loc_00130C59: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00130C60
 * Original: 0x00130C60 - 0x00130CFD (157 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130C60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130C60: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(edi + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130CFB; /* je: equal / zero */

loc_00130C6F: ;
    eax = MEM32(0x5BDA2C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00130C7Fu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00130C7F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130CAE; /* je: equal / zero */

loc_00130C83: ;
    ecx = MEM32(edi + 0x1C);
    ebx = MEM32(ecx + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00130CF8; /* jle: less or equal (signed <=) */

loc_00130C8F: ;
    ebp = MEM32(esp + 0x18);

loc_00130C93: ;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00130CA4u); RECOMP_ABI_CALL(0x002043E0u, sub_002043E0); /* call 0x002043E0 */

loc_00130CA4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130C93; /* jl: less (signed <) */

loc_00130CA9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00130CAE: ;
    edx = MEM32(0x5BDA80);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00130CBCu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00130CBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130CF8; /* je: equal / zero */

loc_00130CC0: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130CCC; /* je: equal / zero */

loc_00130CC7: ;
    ebx = MEM32(eax + 8);
    goto loc_00130CCE;

loc_00130CCC: ;
    ebx = 0; /* xor self */

loc_00130CCE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00130CF8; /* jle: less or equal (signed <=) */

loc_00130CD4: ;
    ebp = MEM32(esp + 0x18);
    goto loc_00130CE0;

    /* nop */

loc_00130CE0: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + esi * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00130CF0u); RECOMP_ABI_CALL(0x00130C60u, sub_00130C60); /* call 0x00130C60 */

loc_00130CF0: ;
    esp = esp + 8;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130CE0; /* jl: less (signed <) */

loc_00130CF8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00130CFB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130D00
 * Original: 0x00130D00 - 0x00130D0A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130D00(void)
{

loc_00130D00: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00130D08u); RECOMP_ABI_CALL(0x00130BF0u, sub_00130BF0); /* call 0x00130BF0 */

loc_00130D08: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00130D10
 * Original: 0x00130D10 - 0x00130E0D (253 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130D10: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x58);
    PUSH32(esp, edi);
    edi = ebx + 0x58;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130D3B; /* jne: not equal / not zero */

loc_00130D20: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00130E04; /* jge: greater or equal (signed >=) */

loc_00130D2F: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130D20; /* je: equal / zero */

loc_00130D3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130D48; /* jne: not equal / not zero */

loc_00130D42: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_00130D48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130D52; /* jne: not equal / not zero */

loc_00130D4C: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_00130D52: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130D5C; /* jne: not equal / not zero */

loc_00130D56: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_00130D5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130D67; /* jne: not equal / not zero */

loc_00130D60: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130D60; /* je: equal / zero */

loc_00130D67: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00130E04; /* jge: greater or equal (signed >=) */

loc_00130D70: ;
    PUSH32(esp, esi);
    esi = ecx;

loc_00130D73: ;
    ecx = MEM32(ebx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130D8F; /* je: equal / zero */

loc_00130D7A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130D8F; /* jne: not equal / not zero */

loc_00130D8A: ;
    PUSH32(esp, 0x00130D8Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130D8F: ;
    edx = esi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00130E03; /* jge: greater or equal (signed >=) */

loc_00130D97: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130DC7; /* jne: not equal / not zero */

loc_00130DAA: ;
    /* nop */

loc_00130DB0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00130E03; /* jge: greater or equal (signed >=) */

loc_00130DBB: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130DB0; /* je: equal / zero */

loc_00130DC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130DD4; /* jne: not equal / not zero */

loc_00130DCE: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_00130DD4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130DDE; /* jne: not equal / not zero */

loc_00130DD8: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_00130DDE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130DE8; /* jne: not equal / not zero */

loc_00130DE2: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_00130DE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130DF7; /* jne: not equal / not zero */

loc_00130DEC: ;
    /* nop */

loc_00130DF0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00130DF0; /* je: equal / zero */

loc_00130DF7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x16 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00130E03; /* jge: greater or equal (signed >=) */

loc_00130DFC: ;
    esi = edx;
    goto loc_00130D73;

loc_00130E03: ;
    POP32(esp, esi);

loc_00130E04: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00130E10
 * Original: 0x00130E10 - 0x00130EB6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130E10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352221);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00130E35u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00130E35: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00130E41u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00130E41: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00130E49u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00130E49: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00130E4Fu); RECOMP_ABI_CALL(0x002884F0u, sub_002884F0); /* call 0x002884F0 */

loc_00130E4F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00130E63u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00130E63: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00130E6Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00130E6B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00130E7B; /* je: equal / zero */

loc_00130E78: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00130E7B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00130EA3; /* je: equal / zero */

loc_00130E8C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130EA3; /* jne: not equal / not zero */

loc_00130E9C: ;
    ecx = esi;
    PUSH32(esp, 0x00130EA3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130EA3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00130EC0
 * Original: 0x00130EC0 - 0x00130F66 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130EC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352221);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00130EE5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00130EE5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00130EF1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00130EF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00130EF9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00130EF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00130EFFu); RECOMP_ABI_CALL(0x00296A00u, sub_00296A00); /* call 0x00296A00 */

loc_00130EFF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00130F13u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00130F13: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00130F1Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00130F1B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00130F2B; /* je: equal / zero */

loc_00130F28: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00130F2B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00130F53; /* je: equal / zero */

loc_00130F3C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00130F53; /* jne: not equal / not zero */

loc_00130F4C: ;
    ecx = esi;
    PUSH32(esp, 0x00130F53u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00130F53: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00130F70
 * Original: 0x00130F70 - 0x00130FB7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130F70(void)
{

loc_00130F70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x00130F7Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_00130F7F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00130F92u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00130F92: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00130FA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00130FA4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00130FAFu); RECOMP_ABI_CALL(0x00130AC0u, sub_00130AC0); /* call 0x00130AC0 */

loc_00130FAF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00130FC0
 * Original: 0x00130FC0 - 0x00131023 (99 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130FC0(void)
{

loc_00130FC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00130FC8u); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_00130FC8: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00130FDBu); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00130FDB: ;
    edx = MEM32(esp + 8);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00130FEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00130FED: ;
    esi = eax;
    PUSH32(esp, 0x00130FF4u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00130FF4: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00130FFCu); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00130FFC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00131004u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00131004: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013100Au); RECOMP_ABI_CALL(0x0027C0C0u, sub_0027C0C0); /* call 0x0027C0C0 */

loc_0013100A: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x00131012u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00131012: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013101Au); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013101A: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00131030
 * Original: 0x00131030 - 0x00131077 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131030(void)
{

loc_00131030: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013103Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013103F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00131052u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00131052: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00131064u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00131064: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013106Fu); RECOMP_ABI_CALL(0x00130E10u, sub_00130E10); /* call 0x00130E10 */

loc_0013106F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00131080
 * Original: 0x00131080 - 0x001310C7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131080(void)
{

loc_00131080: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013108Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013108F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001310A2u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_001310A2: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001310B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001310B4: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001310BFu); RECOMP_ABI_CALL(0x00130EC0u, sub_00130EC0); /* call 0x00130EC0 */

loc_001310BF: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001310D0
 * Original: 0x001310D0 - 0x0013118D (189 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001310D0(void)
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

loc_001310D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    ebx = ecx;
    PUSH32(esp, 0x001310DDu); RECOMP_ABI_CALL(0x00130FC0u, sub_00130FC0); /* call 0x00130FC0 */

loc_001310DD: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = eax;
    eax = esp;
    MEM8(esi + 0x10) = 1;
    MEM32(esp + 0x10) = esp;
    MEM32(eax) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_001310F6; /* je: equal / zero */

loc_001310F3: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001310F6: ;
    ecx = esi;
    PUSH32(esp, 0x001310FDu); RECOMP_ABI_CALL(0x00263F40u, sub_00263F40); /* call 0x00263F40 */

loc_001310FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013116F; /* je: equal / zero */

loc_00131101: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00131109u); RECOMP_ABI_CALL(0x002781D0u, sub_002781D0); /* call 0x002781D0 */

loc_00131109: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013116F; /* je: equal / zero */

loc_0013110F: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013115A; /* jp: parity */

loc_0013111C: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013115A; /* jp: parity */

loc_00131129: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013115A; /* jp: parity */

loc_00131136: ;
    eax = MEM32(ecx + 8);
    MEM32(ebx + 0x2C) = eax;
    edx = MEM32(ecx + 0xC);
    MEM32(ebx + 0x30) = edx;
    eax = MEM32(ecx + 0x10);
    MEM32(ebx + 0x34) = eax;
    edx = MEM32(ecx + 0x14);
    MEM32(ebx + 0x38) = edx;
    eax = MEM32(ecx + 0x18);
    MEM32(ebx + 0x3C) = eax;
    edx = MEM32(ecx + 0x1C);
    MEM32(ebx + 0x40) = edx;

loc_0013115A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013116F; /* jne: not equal / not zero */

loc_0013116A: ;
    PUSH32(esp, 0x0013116Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013116F: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00131186; /* jne: not equal / not zero */

loc_0013117F: ;
    ecx = esi;
    PUSH32(esp, 0x00131186u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00131186: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00131190
 * Original: 0x00131190 - 0x00131275 (229 bytes, 80 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131190(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00131190: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0x001311ACu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_001311AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131270; /* je: equal / zero */

loc_001311B7: ;
    eax = MEM32(ebx + eax * 4 + 0x1E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00131270; /* je: equal / zero */

loc_001311C6: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00131208; /* js: sign (negative) */

loc_001311D1: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001311F0; /* je: equal / zero */

loc_001311DB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001311F0; /* jne: not equal / not zero */

loc_001311EB: ;
    PUSH32(esp, 0x001311F0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001311F0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001311F8u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_001311F8: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + eax * 4) = 0;
    if ((_fas >= 0)) goto loc_001311D1; /* jns: not sign (positive) */

loc_00131208: ;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x0013121Cu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0013121C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013126E; /* je: equal / zero */

loc_00131226: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0013122Eu); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_0013122E: ;
    ecx = MEM32(ebx + esi * 4 + 0x1E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013124E; /* je: equal / zero */

loc_00131239: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013124E; /* jne: not equal / not zero */

loc_00131249: ;
    PUSH32(esp, 0x0013124Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013124E: ;
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = ebx + ecx * 4 + 0x238;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;

loc_0013126E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00131270: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131280
 * Original: 0x00131280 - 0x00131312 (146 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131280: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001312A8; /* je: equal / zero */

loc_0013128F: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001312A8; /* je: equal / zero */

loc_001312A0: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001312A8u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_001312A8: ;
    ebx = eax;
    /* nop */

loc_001312B0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013130E; /* je: equal / zero */

loc_001312B8: ;
    PUSH32(esp, ebx);
    ecx = edi;
    esi = ebx;
    PUSH32(esp, 0x001312C2u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_001312C2: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x001312CCu); RECOMP_ABI_CALL(0x00199920u, sub_00199920); /* call 0x00199920 */

loc_001312CC: ;
    ecx = MEM32(edi + esi * 4 + 0x1E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001312EC; /* je: equal / zero */

loc_001312D7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001312EC; /* jne: not equal / not zero */

loc_001312E7: ;
    PUSH32(esp, 0x001312ECu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001312EC: ;
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edi + edx * 4 + 0x238;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    goto loc_001312B0;

loc_0013130E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00131320
 * Original: 0x00131320 - 0x001313CE (174 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131320(void)
{

loc_00131320: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0xC;
    ecx = edi;
    PUSH32(esp, 0x0013132Eu); RECOMP_ABI_CALL(0x0011E150u, sub_0011E150); /* call 0x0011E150 */

loc_0013132E: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    ecx = eax;
    ecx = ecx << 4;
    MEM32(ecx + edi + 0xC) = edx;
    MEM32(esi + 8) = eax;
    MEM32(ecx + esi + 0x10) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0x14) = 0x3FFFFFFF;
    MEM32(ecx + esi + 0xC) = 0x7FFFFFFF;
    edi = esi + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00131363u); RECOMP_ABI_CALL(0x001994F0u, sub_001994F0); /* call 0x001994F0 */

loc_00131363: ;
    eax = MEM32(edi);
    eax = eax << 4;
    ecx = MEM32(eax + esi + 0xC);
    eax = eax + esi + 0xC;
    ecx = ecx & 0xBFFFFFFFu;
    MEM32(eax) = ecx;
    ecx = MEM32(edi);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 0xC);
    eax = ecx + esi + 0xC;
    edx = edx & 0x40000000;
    edx = edx | 0x3FFFFFFF;
    MEM32(eax) = edx;
    edi = MEM32(esi + 8);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi + edi * 4 + 0x1E0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001313A8u); RECOMP_ABI_CALL(0x001408E0u, sub_001408E0); /* call 0x001408E0 */

loc_001313A8: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = esi + edx * 4 + 0x238;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 8;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001313D0
 * Original: 0x001313D0 - 0x001314FC (300 bytes, 102 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001313D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001313D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352238);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x2C) = edi;
    PUSH32(esp, 0x00131403u); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_00131403: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131415; /* je: equal / zero */

loc_0013140A: ;
    ecx = MEM32(esi + eax * 4 + 0x1E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013146A; /* jne: not equal / not zero */

loc_00131415: ;
    edx = esp + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00131420u); RECOMP_ABI_CALL(0x00130F70u, sub_00130F70); /* call 0x00130F70 */

loc_00131420: ;
    esp = esp + 8;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x00131440u); RECOMP_ABI_CALL(0x00131320u, sub_00131320); /* call 0x00131320 */

loc_00131440: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0013146A; /* je: equal / zero */

loc_00131452: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013146A; /* jne: not equal / not zero */

loc_00131465: ;
    PUSH32(esp, 0x0013146Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013146A: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x2C) = edi;
    PUSH32(esp, 0x0013147Eu); RECOMP_ABI_CALL(0x001186A0u, sub_001186A0); /* call 0x001186A0 */

loc_0013147E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013148E; /* je: equal / zero */

loc_00131485: ;
    esi = MEM32(esi + eax * 4 + 0x1E0);
    goto loc_00131490;

loc_0013148E: ;
    esi = 0; /* xor self */

loc_00131490: ;
    ecx = MEM32(esi + 0x14);
    ebx = MEM32(ecx + 8);
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(esp + 0x28) = esp;
    MEM32(ecx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001314AA; /* je: equal / zero */

loc_001314A7: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001314AA: ;
    edx = MEM32(esi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001314B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001314B6: ;
    edi = MEM32(eax);
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001314D8; /* je: equal / zero */

loc_001314C2: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001314D8; /* jne: not equal / not zero */

loc_001314D3: ;
    PUSH32(esp, 0x001314D8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001314D8: ;
    ecx = MEM32(esi + 0x14);
    esi = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(XBOX_FS_BASE) = ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00131500
 * Original: 0x00131500 - 0x001315EF (239 bytes, 94 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131500(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00131500: ;
    esp = esp - 8;
    eax = MEM32(0x5BDB40);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    ebx = ecx;
    ebp = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0x00131524u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00131524: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013159E; /* je: equal / zero */

loc_00131528: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013159E; /* jle: less or equal (signed <=) */

loc_00131530: ;
    ecx = MEM32(eax + 0x10);
    edi = MEM32(ecx + ebp * 4);
    edx = MEM32(0x5BE52C);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00131544u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00131544: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013154D; /* je: equal / zero */

loc_00131548: ;
    ebx = MEM32(edi + 0xC);
    goto loc_00131560;

loc_0013154D: ;
    eax = MEM32(0x5BE530);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0013155Au); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0013155A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013158F; /* je: equal / zero */

loc_0013155E: ;
    ebx = edi;

loc_00131560: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013158F; /* je: equal / zero */

loc_00131564: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00131573u); RECOMP_ABI_CALL(0x001313D0u, sub_001313D0); /* call 0x001313D0 */

loc_00131573: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00131587; /* je: equal / zero */

loc_00131579: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00131581u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00131581: ;
    MEM32(esp + 0x10) = esi;
    goto loc_0013158B;

loc_00131587: ;
    MEM32(esp + 0x10) = ebx;

loc_0013158B: ;
    esi = MEM32(esp + 0x1C);

loc_0013158F: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00131530; /* jl: less (signed <) */

loc_0013159A: ;
    ebx = MEM32(esp + 0x14);

loc_0013159E: ;
    eax = MEM32(0x5BDA80);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001315ABu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001315AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001315E1; /* je: equal / zero */

loc_001315AF: ;
    edi = 0; /* xor self */

loc_001315B1: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001315BD; /* je: equal / zero */

loc_001315B8: ;
    ecx = MEM32(eax + 8);
    goto loc_001315BF;

loc_001315BD: ;
    ecx = 0; /* xor self */

loc_001315BF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001315E1; /* jge: greater or equal (signed >=) */

loc_001315C3: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x20);
    eax = MEM32(ecx + edi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001315D6u); RECOMP_ABI_CALL(0x00131500u, sub_00131500); /* call 0x00131500 */

loc_001315D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001315DE; /* je: equal / zero */

loc_001315DA: ;
    MEM32(esp + 0x10) = eax;

loc_001315DE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001315B1;

loc_001315E1: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001315F0
 * Original: 0x001315F0 - 0x00131641 (81 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001315F0(void)
{

loc_001315F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(esi + 8) = 0xFFFFFFFFu;
    MEM32(esi) = 0x3DA9A0;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(ecx + 0x1C0) = edi;
    MEM32(ecx + 0x1C4) = edi;
    MEM32(ecx + 0x1C8) = edi;
    MEM32(ecx + 0x1CC) = edi;
    MEM32(ecx + 0x1D0) = edi;
    PUSH32(esp, 0x00131630u); RECOMP_ABI_CALL(0x0011E0F0u, sub_0011E0F0); /* call 0x0011E0F0 */

loc_00131630: ;
    MEM32(esi) = 0x3DC190;
    MEM32(esi + 0x238) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131650
 * Original: 0x00131650 - 0x0013165B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131650(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00131650: ;
    ecx = ecx + 0x1E0;
    g_seh_ebp = ebp; sub_00130D10(); return; /* tail jmp 0x00130D10 */

}

/**
 * sub_00131660
 * Original: 0x00131660 - 0x001316A4 (68 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131660: ;
    SET_LO8(ecx, MEM8(0x519DB4));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013169E; /* jne: not equal / not zero */

loc_0013166F: ;
    edx = MEM32(0x519DB4);
    edx = edx | eax;
    ecx = 0x519B78;
    MEM32(0x519DB4) = edx;
    PUSH32(esp, 0x00131687u); RECOMP_ABI_CALL(0x001315F0u, sub_001315F0); /* call 0x001315F0 */

loc_00131687: ;
    PUSH32(esp, 0x35A380);
    MEM32(0x519B78) = 0x3DC1A8;
    PUSH32(esp, 0x0013169Bu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0013169B: ;
    esp = esp + 4;

loc_0013169E: ;
    eax = 0x519B78;
    esp += 4; return; /* ret */

}

/**
 * sub_001316B0
 * Original: 0x001316B0 - 0x00131A3A (906 bytes, 295 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001316B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001316B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3522B4);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x10) = esi;
    ebp = 0; /* xor self */
    MEM32(esp + 0x1C) = ebp;
    MEM32(esi) = ebp;
    MEM32(esi + 4) = ebp;
    MEM32(esi + 8) = ebp;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001316EF; /* je: equal / zero */

loc_001316EC: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001316EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi + 0x44;
    MEM8(esp + 0x24) = 6;
    MEM32(esi + 0x18) = ebp;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esi + 0x20) = ebp;
    MEM32(esi + 0x24) = ebp;
    PUSH32(esp, 0x0013170Au); RECOMP_ABI_CALL(0x0012FF50u, sub_0012FF50); /* call 0x0012FF50 */

loc_0013170A: ;
    ebx = MEM32(esp + 0x30);
    MEM8(esi + 0x8C) = 0;
    edi = MEM32(ebx + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x24) = 7;
    if (CMP_EQ(_fa, _fb)) goto loc_00131724; /* je: equal / zero */

loc_00131721: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00131724: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013173F; /* je: equal / zero */

loc_0013172A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013173F; /* jne: not equal / not zero */

loc_0013173A: ;
    PUSH32(esp, 0x0013173Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013173F: ;
    ecx = ebx;
    MEM32(esi) = edi;
    PUSH32(esp, 0x00131748u); RECOMP_ABI_CALL(0x00288DA0u, sub_00288DA0); /* call 0x00288DA0 */

loc_00131748: ;
    _fa = (uint32_t)(MEM32(ebx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001317BF; /* je: equal / zero */

loc_0013174D: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013175Cu); RECOMP_ABI_CALL(0x00131030u, sub_00131030); /* call 0x00131030 */

loc_0013175C: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x24) = 8;
    if (CMP_EQ(_fa, _fb)) goto loc_0013176D; /* je: equal / zero */

loc_0013176A: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013176D: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131789; /* je: equal / zero */

loc_00131774: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00131789; /* jne: not equal / not zero */

loc_00131784: ;
    PUSH32(esp, 0x00131789u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00131789: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 4) = edi;
    MEM8(esp + 0x24) = 7;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001317B3; /* je: equal / zero */

loc_0013179B: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_001317B3; /* jne: not equal / not zero */

loc_001317AE: ;
    PUSH32(esp, 0x001317B3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001317B3: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001317BFu); RECOMP_ABI_CALL(0x002098A0u, sub_002098A0); /* call 0x002098A0 */

loc_001317BF: ;
    edx = esp + 0x10;
    PUSH32(esp, 0xF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001317CBu); RECOMP_ABI_CALL(0x00131080u, sub_00131080); /* call 0x00131080 */

loc_001317CB: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM8(esp + 0x34) = 9;
    PUSH32(esp, 0x001317DDu); RECOMP_ABI_CALL(0x00130C60u, sub_00130C60); /* call 0x00130C60 */

loc_001317DD: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(edx + 8);
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013187A; /* jle: less or equal (signed <=) */

loc_001317EF: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001317FEu); RECOMP_ABI_CALL(0x00131080u, sub_00131080); /* call 0x00131080 */

loc_001317FE: ;
    esp = esp + 8;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x24) = 0xA;
    if (CMP_EQ(_fa, _fb)) goto loc_0013180F; /* je: equal / zero */

loc_0013180C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013180F: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013182B; /* je: equal / zero */

loc_00131816: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013182B; /* jne: not equal / not zero */

loc_00131826: ;
    PUSH32(esp, 0x0013182Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013182B: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 8) = edi;
    MEM8(esp + 0x24) = 9;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00131855; /* je: equal / zero */

loc_0013183D: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00131855; /* jne: not equal / not zero */

loc_00131850: ;
    PUSH32(esp, 0x00131855u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00131855: ;
    edx = MEM32(esp + 0x10);
    ebp = MEM32(edx + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013187A; /* jle: less or equal (signed <=) */

loc_00131862: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edi * 4);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00131875u); RECOMP_ABI_CALL(0x002043E0u, sub_002043E0); /* call 0x002043E0 */

loc_00131875: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00131862; /* jl: less (signed <) */

loc_0013187A: ;
    ebp = MEM32(esi);
    edx = MEM32(0x5BDA80);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0013188Au); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0013188A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001318B9; /* je: equal / zero */

loc_00131890: ;
    edi = 0; /* xor self */

loc_00131892: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013189E; /* je: equal / zero */

loc_00131899: ;
    ecx = MEM32(eax + 8);
    goto loc_001318A0;

loc_0013189E: ;
    ecx = 0; /* xor self */

loc_001318A0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001318B9; /* jge: greater or equal (signed >=) */

loc_001318A4: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + edi * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001318B1u); RECOMP_ABI_CALL(0x00130B70u, sub_00130B70); /* call 0x00130B70 */

loc_001318B1: ;
    esp = esp + 8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    goto loc_00131892;

loc_001318B9: ;
    _fa = (uint32_t)(MEM8(0x519DB4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x519DB4), 1 (8-bit) */
    edi = MEM32(esi);
    if (TEST_NZ(_fa, _fb)) goto loc_0013193A; /* jne: not equal / not zero */

loc_001318C4: ;
    ebp = MEM32(0x519DB4);
    ebp = ebp | 1;
    ecx = 0x519B84;
    MEM32(0x519DB4) = ebp;
    MEM32(0x519B7C) = 0x3FFFFFFF;
    MEM32(0x519B80) = 0xFFFFFFFFu;
    MEM32(0x519B78) = 0x3DA9A0;
    MEM32(0x519D44) = edx;
    MEM32(0x519D48) = edx;
    MEM32(0x519D4C) = edx;
    MEM32(0x519D50) = edx;
    MEM32(0x519D54) = edx;
    PUSH32(esp, 0x00131919u); RECOMP_ABI_CALL(0x0011E0F0u, sub_0011E0F0); /* call 0x0011E0F0 */

loc_00131919: ;
    PUSH32(esp, 0x35A380);
    MEM32(0x519DB0) = 0;
    MEM32(0x519B78) = 0x3DC1A8;
    PUSH32(esp, 0x00131937u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00131937: ;
    esp = esp + 4;

loc_0013193A: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = 0x519B78;
    PUSH32(esp, 0x0013194Au); RECOMP_ABI_CALL(0x00131500u, sub_00131500); /* call 0x00131500 */

loc_0013194A: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00131954u); RECOMP_ABI_CALL(0x001310D0u, sub_001310D0); /* call 0x001310D0 */

loc_00131954: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(ebx + 0x24);
    MEM32(esi + 0x18) = eax;
    eax = eax | ecx;
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(ebx + 0x28);
    edi = MEM32(ebx + 0x2C);
    ebp = esi + 0x20;
    MEM32(ebp) = edx;
    MEM32(ebp + 4) = edi;
    if ((eax != 0)) goto loc_00131977; /* jne: not equal / not zero */

loc_00131973: ;
    edx = edx | edi;
    if ((edx == 0)) goto loc_0013198B; /* je: equal / zero */

loc_00131977: ;
    eax = MEM32(esi);
    ecx = esi + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00131988u); RECOMP_ABI_CALL(0x0014E430u, sub_0014E430); /* call 0x0014E430 */

loc_00131988: ;
    esp = esp + 0x10;

loc_0013198B: ;
    edi = MEM32(esp + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013199C; /* je: equal / zero */

loc_00131993: ;
    PUSH32(esp, edi);
    ecx = esi + 0x44;
    PUSH32(esp, 0x0013199Cu); RECOMP_ABI_CALL(0x0012FE20u, sub_0012FE20); /* call 0x0012FE20 */

loc_0013199C: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x24) = 7;
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001319C6; /* je: equal / zero */

loc_001319AB: ;
    ebp = MEM32(eax + 4);
    eax = eax + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = ebp;
    edx = MEM32(eax);
    ebp = 0x7FFFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001319CB; /* jne: not equal / not zero */

loc_001319BF: ;
    PUSH32(esp, 0x001319C4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001319C4: ;
    goto loc_001319CB;

loc_001319C6: ;
    ebp = 0x7FFFFF;

loc_001319CB: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM8(esp + 0x24) = 1;
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001319E4; /* jne: not equal / not zero */

loc_001319DD: ;
    ecx = ebx;
    PUSH32(esp, 0x001319E4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001319E4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(esp + 0x24) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00131A01; /* je: equal / zero */

loc_001319ED: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00131A01; /* jne: not equal / not zero */

loc_001319FA: ;
    ecx = edi;
    PUSH32(esp, 0x00131A01u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00131A01: ;
    ecx = MEM32(esp + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00131A25; /* je: equal / zero */

loc_00131A13: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00131A25; /* jne: not equal / not zero */

loc_00131A20: ;
    PUSH32(esp, 0x00131A25u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00131A25: ;
    ecx = MEM32(esp + 0x14);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x18;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00131A40
 * Original: 0x00131A40 - 0x00131AEF (175 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131A40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x9000);
    PUSH32(esp, edi);
    edi = ebx + 0x9000;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00131A7A; /* jne: not equal / not zero */

loc_00131A57: ;
    goto loc_00131A60;

    /* nop */

loc_00131A60: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00131AD2; /* jge: greater or equal (signed >=) */

loc_00131A6E: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00131A60; /* je: equal / zero */

loc_00131A7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00131A87; /* jne: not equal / not zero */

loc_00131A81: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_00131A87: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00131A91; /* jne: not equal / not zero */

loc_00131A8B: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_00131A91: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00131A9B; /* jne: not equal / not zero */

loc_00131A95: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_00131A9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00131AA7; /* jne: not equal / not zero */

loc_00131A9F: ;
    /* nop */

loc_00131AA0: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00131AA0; /* je: equal / zero */

loc_00131AA7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00131AD2; /* jge: greater or equal (signed >=) */

loc_00131AAF: ;
    /* nop */

loc_00131AB0: ;
    ecx = esi + esi * 8;
    ecx = ecx << 4;
    ecx = ecx + ebx;
    PUSH32(esp, 0x00131ABDu); RECOMP_ABI_CALL(0x001309F0u, sub_001309F0); /* call 0x001309F0 */

loc_00131ABD: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00131AC8u); RECOMP_ABI_CALL(0x000A2F60u, sub_000A2F60); /* call 0x000A2F60 */

loc_00131AC8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00131AB0; /* jl: less (signed <) */

loc_00131AD2: ;
    ecx = 0; /* xor self */
    MEM32(edi) = ecx;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = ecx;
    MEM32(edi + 0x10) = ecx;
    MEM32(edi + 0x14) = ecx;
    MEM32(edi + 0x18) = ecx;
    MEM32(edi + 0x1C) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00131AF0
 * Original: 0x00131AF0 - 0x00131B52 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131AF0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x9424) = esi;
    MEM32(ecx + 0x9428) = esi;
    MEM32(ecx + 0x942C) = esi;
    edx = 0; /* xor self */
    goto loc_00131B10;

    /* nop */

loc_00131B10: ;
    eax = MEM32(ecx + 0x9424);
    edi = MEM32(ecx + 0x942C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    MEM32(ecx + 0x9424) = eax;
    MEM32(ecx + 0x942C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00131B3E; /* jl: less (signed <) */

loc_00131B31: ;
    MEM32(ecx + 0x9424) = esi;
    eax = 0xFF;
    goto loc_00131B3F;

loc_00131B3E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00131B3F: ;
    MEM32(ecx + eax * 4 + 0x9020) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00131B10; /* jl: less (signed <) */

loc_00131B4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131B60
 * Original: 0x00131B60 - 0x00131BC4 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131B60(void)
{

loc_00131B60: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x9000;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(esi + 0x9424) = eax;
    MEM32(esi + 0x9428) = eax;
    MEM32(esi + 0x942C) = eax;
    edx = 0; /* xor self */
    ecx = esi + 0x9430;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = edx;
    ecx = esi;
    MEM32(esi + 0x9450) = eax;
    PUSH32(esp, 0x00131BC0u); RECOMP_ABI_CALL(0x00131AF0u, sub_00131AF0); /* call 0x00131AF0 */

loc_00131BC0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131BD0
 * Original: 0x00131BD0 - 0x00131C34 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131BD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00131BD9u); RECOMP_ABI_CALL(0x00131B60u, sub_00131B60); /* call 0x00131B60 */

loc_00131BD9: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x9854) = eax;
    MEM32(esi + 0x9858) = eax;
    edx = 0xFF;
    edi = 0; /* xor self */

loc_00131BF0: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131BF0; /* jne: not equal / not zero */

loc_00131BFC: ;
    MEM32(esi + 0x9854) = ecx;
    MEM32(esi + 0x9858) = edi;
    edx = esi + 0x9454;
    edi = edi;

loc_00131C10: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x9858);
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
    if (CMP_L(_fas, _fbs)) goto loc_00131C10; /* jl: less (signed <) */

loc_00131C2F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131C40
 * Original: 0x00131C40 - 0x00131C98 (88 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131C40(void)
{

loc_00131C40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3522C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x3DC1C4;
    edx = esi + 4;
    eax = 0; /* xor self */
    edi = edx;
    ecx = 0x2617;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x00131C81u); RECOMP_ABI_CALL(0x00131A40u, sub_00131A40); /* call 0x00131A40 */

loc_00131C81: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x3DC10C;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00131CA0
 * Original: 0x00131CA0 - 0x00131D87 (231 bytes, 60 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131CA0: ;
    esp = esp - 0x404;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    MEM32(esp + 0x404) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x410);
    eax = esp + 0x208;
    PUSH32(esp, eax);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, esi);
    MEM8(esp + 0x210) = LO8(ebx);
    PUSH32(esp, 0x00131CD2u); RECOMP_ABI_CALL(0x0014E310u, sub_0014E310); /* call 0x0014E310 */

loc_00131CD2: ;
    ecx = esp + 0x210;
    esp = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00131CE2u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00131CE2: ;
    ecx = eax;
    PUSH32(esp, 0x00131CE9u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00131CE9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00131D06; /* je: equal / zero */

loc_00131CED: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x00131CFDu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00131CFD: ;
    esp = esp + 0x404;
    esp += 8; return; /* ret 4 */

loc_00131D06: ;
    PUSH32(esp, 0x100);
    edx = esp + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00131D16u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00131D16: ;
    eax = esp + 0x114;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEM8(esp + 0x11B) = LO8(ebx);
    MEM8(esp + 0x11C) = LO8(ebx);
    PUSH32(esp, 0x00131D36u); RECOMP_ABI_CALL(0x00125580u, sub_00125580); /* call 0x00125580 */

loc_00131D36: ;
    edx = esp + 0x31C;
    PUSH32(esp, edx);
    eax = esp + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    MEM8(esp + 0x328) = LO8(ebx);
    PUSH32(esp, 0x00131D54u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00131D54: ;
    ecx = esp + 0x328;
    esp = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00131D64u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00131D64: ;
    ecx = eax;
    PUSH32(esp, 0x00131D6Bu); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00131D6B: ;
    ecx = MEM32(esp + 0x408);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    PUSH32(esp, 0x00131D7Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00131D7E: ;
    esp = esp + 0x404;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131D90
 * Original: 0x00131D90 - 0x00131EAC (284 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00131D90: ;
    esp = esp - 0x404;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x408) = eax;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x414);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    esi = ecx;
    MEM8(esp + 0x14) = LO8(ebx);
    PUSH32(esp, 0x00131DBFu); RECOMP_ABI_CALL(0x0014E310u, sub_0014E310); /* call 0x0014E310 */

loc_00131DBF: ;
    ecx = esp + 0x14;
    esp = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00131DCCu); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00131DCC: ;
    ecx = eax;
    PUSH32(esp, 0x00131DD3u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00131DD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131E55; /* jne: not equal / not zero */

loc_00131DD7: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x210;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00131DEAu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00131DEA: ;
    eax = esp + 0x118;
    PUSH32(esp, eax);
    ecx = esp + 0x21C;
    PUSH32(esp, ecx);
    MEM8(esp + 0x31F) = LO8(ebx);
    MEM8(esp + 0x120) = LO8(ebx);
    PUSH32(esp, 0x00131E0Du); RECOMP_ABI_CALL(0x00125580u, sub_00125580); /* call 0x00125580 */

loc_00131E0D: ;
    edx = esp + 0x320;
    PUSH32(esp, edx);
    eax = esp + 0x124;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    MEM8(esp + 0x32C) = LO8(ebx);
    PUSH32(esp, 0x00131E2Bu); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00131E2B: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x330;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00131E3Du); RECOMP_ABI_CALL(0x0014E310u, sub_0014E310); /* call 0x0014E310 */

loc_00131E3D: ;
    eax = esp + 0x34;
    esp = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00131E4Au); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00131E4A: ;
    ecx = eax;
    PUSH32(esp, 0x00131E51u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00131E51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131E83; /* je: equal / zero */

loc_00131E55: ;
    edi = MEM32(eax + 0x4C);
    ecx = MEM32(esi + 0x9858);
    edx = esi + 4;
    ecx = ecx & edi;
    POP32(esp, edi);
    eax = ecx + ecx * 8;
    eax = eax << 4;
    POP32(esp, esi);
    eax = eax + edx;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x00131E7Au); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00131E7A: ;
    esp = esp + 0x404;
    esp += 8; return; /* ret 4 */

loc_00131E83: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x110;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00131E94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00131E94: ;
    ecx = MEM32(esp + 0x40C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x00131EA3u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_00131EA3: ;
    esp = esp + 0x404;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131EB0
 * Original: 0x00131EB0 - 0x001322D3 (1059 bytes, 299 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131EB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00131EB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352344);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x440;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x45C);
    MEM32(esp + 0x448) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    edi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = edi;
    MEM8(esp + 0x54) = LO8(ebx);
    PUSH32(esp, 0x00131EF9u); RECOMP_ABI_CALL(0x0014E310u, sub_0014E310); /* call 0x0014E310 */

loc_00131EF9: ;
    ebp = MEM32(esp + 0x46C);
    ecx = esp + 0x254;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEM8(esp + 0x260) = LO8(ebx);
    PUSH32(esp, 0x00131F1Au); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00131F1A: ;
    eax = esp + 0x260;
    esp = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00131F2Au); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00131F2A: ;
    ecx = eax;
    PUSH32(esp, 0x00131F31u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00131F31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00131F6B; /* jne: not equal / not zero */

loc_00131F35: ;
    ecx = esp + 0x34C;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    MEM8(esp + 0x358) = LO8(ebx);
    PUSH32(esp, 0x00131F50u); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_00131F50: ;
    eax = esp + 0x358;
    esp = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00131F60u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00131F60: ;
    ecx = eax;
    PUSH32(esp, 0x00131F67u); RECOMP_ABI_CALL(0x0011B7C0u, sub_0011B7C0); /* call 0x0011B7C0 */

loc_00131F67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131F84; /* je: equal / zero */

loc_00131F6B: ;
    ecx = MEM32(edi + 0x9858);
    edx = edi + 4;
    ecx = ecx & MEM32(eax + 0x4C);
    eax = ecx + ecx * 8;
    eax = eax << 4;
    eax = eax + edx;
    goto loc_001322AC;

loc_00131F84: ;
    _fa = (uint32_t)(MEM32(edi + 0x9454)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x9454), 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00131FA0; /* jge: greater or equal (signed >=) */

loc_00131F90: ;
    PUSH32(esp, 0x00131F95u); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_00131F95: ;
    ecx = eax;
    PUSH32(esp, 0x00131F9Cu); RECOMP_ABI_CALL(0x0011B290u, sub_0011B290); /* call 0x0011B290 */

loc_00131F9C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00131FA7; /* je: equal / zero */

loc_00131FA0: ;
    eax = 0; /* xor self */
    goto loc_001322AC;

loc_00131FA7: ;
    ecx = esp + 0x14C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM8(esp + 0x154) = LO8(ebx);
    PUSH32(esp, 0x00131FBCu); RECOMP_ABI_CALL(0x0014E310u, sub_0014E310); /* call 0x0014E310 */

loc_00131FBC: ;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x460) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, ebx);
    MEM8(esp + 0x464) = 2;
    PUSH32(esp, 0x00131FDDu); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00131FDD: ;
    edx = MEM32(eax);
    esp = esp + 0xC;
    ecx = esp + 0x14C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00131FEFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00131FEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001321A4; /* je: equal / zero */

loc_00131FF7: ;
    PUSH32(esp, ebp);
    edx = esp + 0x150;
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x00132009u); RECOMP_ABI_CALL(0x0012CC90u, sub_0012CC90); /* call 0x0012CC90 */

loc_00132009: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x38;
    MEM8(esp + 0x45C) = 3;
    PUSH32(esp, 0x0013201Bu); RECOMP_ABI_CALL(0x001322F0u, sub_001322F0); /* call 0x001322F0 */

loc_0013201B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132024; /* je: equal / zero */

loc_00132021: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00132024: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132031; /* je: equal / zero */

loc_0013202C: ;
    PUSH32(esp, 0x00132031u); RECOMP_ABI_CALL(0x00011A20u, sub_00011A20); /* call 0x00011A20 */

loc_00132031: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x38;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x0013203Fu); RECOMP_ABI_CALL(0x00132350u, sub_00132350); /* call 0x00132350 */

loc_0013203F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132048; /* je: equal / zero */

loc_00132045: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00132048: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132055; /* je: equal / zero */

loc_00132050: ;
    PUSH32(esp, 0x00132055u); RECOMP_ABI_CALL(0x00011A20u, sub_00011A20); /* call 0x00011A20 */

loc_00132055: ;
    MEM32(esp + 0x18) = esi;
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0x458) = 4;

loc_00132067: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x00132076u); RECOMP_ABI_CALL(0x001323B0u, sub_001323B0); /* call 0x001323B0 */

loc_00132076: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013207F; /* je: equal / zero */

loc_0013207C: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013207F: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013208C; /* je: equal / zero */

loc_00132087: ;
    PUSH32(esp, 0x0013208Cu); RECOMP_ABI_CALL(0x00011A20u, sub_00011A20); /* call 0x00011A20 */

loc_0013208C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013216A; /* je: equal / zero */

loc_00132098: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001320F8; /* jne: not equal / not zero */

loc_0013209E: ;
    eax = esp + 0x30;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001320A9u); RECOMP_ABI_CALL(0x00132410u, sub_00132410); /* call 0x00132410 */

loc_001320A9: ;
    esp = esp + 8;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x458) = 5;
    if (CMP_EQ(_fa, _fb)) goto loc_001320BD; /* je: equal / zero */

loc_001320BA: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001320BD: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001320CA; /* je: equal / zero */

loc_001320C5: ;
    PUSH32(esp, 0x001320CAu); RECOMP_ABI_CALL(0x00011A20u, sub_00011A20); /* call 0x00011A20 */

loc_001320CA: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM8(esp + 0x458) = 4;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001320F8; /* je: equal / zero */

loc_001320E0: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_001320F8; /* jne: not equal / not zero */

loc_001320F3: ;
    PUSH32(esp, 0x001320F8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001320F8: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x00132101u); RECOMP_ABI_CALL(0x00117950u, sub_00117950); /* call 0x00117950 */

loc_00132101: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00132110; /* je: equal / zero */

loc_00132109: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x20);

loc_00132110: ;
    edi = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(esp + 0x458) = 6;
    if (CMP_LE(_fas, _fbs)) goto loc_00132145; /* jle: less or equal (signed <=) */

loc_00132121: ;
    goto loc_00132130;

loc_00132123: ;
    eax = MEM32(esp + 0x20);
    goto loc_00132130;

    /* nop */

loc_00132130: ;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + esi * 4);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132140u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00132140: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132123; /* jl: less (signed <) */

loc_00132145: ;
    ecx = esp + 0x20;
    MEM8(esp + 0x458) = 4;
    PUSH32(esp, 0x00132156u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00132156: ;
    edi = MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x464);
    eax = MEM32(esp + 0x24);
    goto loc_00132067;

loc_0013216A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00132170u); RECOMP_ABI_CALL(0x00125170u, sub_00125170); /* call 0x00125170 */

loc_00132170: ;
    edx = MEM32(eax);
    esp = esp + 4;
    ecx = esp + 0x14C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00132182u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00132182: ;
    ecx = esp + 0x1C;
    MEM8(esp + 0x458) = 3;
    PUSH32(esp, 0x00132193u); RECOMP_ABI_CALL(0x001322E0u, sub_001322E0); /* call 0x001322E0 */

loc_00132193: ;
    ecx = esp + 0x34;
    MEM8(esp + 0x458) = 2;
    PUSH32(esp, 0x001321A4u); RECOMP_ABI_CALL(0x0012CEC0u, sub_0012CEC0); /* call 0x0012CEC0 */

loc_001321A4: ;
    ecx = MEM32(esp + 0x14);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00132275; /* je: equal / zero */

loc_001321B2: ;
    PUSH32(esp, 0x001321B7u); RECOMP_ABI_CALL(0x0025BB40u, sub_0025BB40); /* call 0x0025BB40 */

loc_001321B7: ;
    edi = edi + 4;
    ecx = edi;
    PUSH32(esp, 0x001321C1u); RECOMP_ABI_CALL(0x00132500u, sub_00132500); /* call 0x00132500 */

loc_001321C1: ;
    esi = eax;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x48) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM8(esp + 0x458) = 7;
    if (CMP_EQ(_fa, _fb)) goto loc_00132230; /* je: equal / zero */

loc_001321D7: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x30) = esp;
    if (CMP_EQ(_fa, _fb)) goto loc_001321EF; /* je: equal / zero */

loc_001321EC: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001321EF: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    eax = esp;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x34) = esp;
    if (CMP_EQ(_fa, _fb)) goto loc_00132207; /* je: equal / zero */

loc_00132204: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00132207: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x38) = esp;
    if (CMP_EQ(_fa, _fb)) goto loc_0013221F; /* je: equal / zero */

loc_0013221C: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013221F: ;
    eax = MEM32(esp + 0x470);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0013222Eu); RECOMP_ABI_CALL(0x001316B0u, sub_001316B0); /* call 0x001316B0 */

loc_0013222E: ;
    goto loc_00132232;

loc_00132230: ;
    eax = 0; /* xor self */

loc_00132232: ;
    ecx = MEM32(esp + 0x28);
    ebp = eax;
    esi = esi - edi;
    eax = 0x38E38E39;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    eax = MEM32(edi + eax * 4 + 0x9454);
    edx = MEM32(esp + 0x464);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    MEM8(esp + 0x468) = 2;
    PUSH32(esp, 0x0013226Eu); RECOMP_ABI_CALL(0x0011BD00u, sub_0011BD00); /* call 0x0011BD00 */

loc_0013226E: ;
    ecx = eax;
    PUSH32(esp, 0x00132275u); RECOMP_ABI_CALL(0x0011BB70u, sub_0011BB70); /* call 0x0011BB70 */

loc_00132275: ;
    ecx = esp + 0x10;
    MEM8(esp + 0x458) = 1;
    PUSH32(esp, 0x00132286u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00132286: ;
    ecx = esp + 0x18;
    MEM8(esp + 0x458) = LO8(ebx);
    PUSH32(esp, 0x00132296u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00132296: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x458) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001322AAu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_001322AA: ;
    eax = ebp;

loc_001322AC: ;
    ecx = MEM32(esp + 0x450);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x44C);
    PUSH32(esp, 0x001322C6u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_001322C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44C;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001322E0
 * Original: 0x001322E0 - 0x001322EC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001322E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001322E0: ;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001322EB; /* je: equal / zero */

loc_001322E6: ;
    g_seh_ebp = ebp; sub_00011A20(); return; /* tail jmp 0x00011A20 */

loc_001322EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001322F0
 * Original: 0x001322F0 - 0x00132348 (88 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001322F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001322F0: ;
    ecx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132341; /* je: equal / zero */

loc_001322F8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    ecx = MEM32(edi + 8);
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013233E; /* jle: less or equal (signed <=) */

loc_00132309: ;
    PUSH32(esp, esi);
    /* nop */

loc_00132310: ;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132344; /* je: equal / zero */

loc_0013231A: ;
    ecx = MEM32(0x5BD988);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00132328u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00132328: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132344; /* je: equal / zero */

loc_0013232C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013233D; /* je: equal / zero */

loc_00132334: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00132335: ;
    ecx = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132310; /* jl: less (signed <) */

loc_0013233D: ;
    POP32(esp, esi);

loc_0013233E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00132341: ;
    esp += 8; return; /* ret 4 */

loc_00132344: ;
    eax = 0; /* xor self */
    goto loc_00132335;

}

/**
 * sub_00132350
 * Original: 0x00132350 - 0x001323A8 (88 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132350: ;
    ecx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001323A1; /* je: equal / zero */

loc_00132358: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    ecx = MEM32(edi + 8);
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0013239E; /* jle: less or equal (signed <=) */

loc_00132369: ;
    PUSH32(esp, esi);
    /* nop */

loc_00132370: ;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001323A4; /* je: equal / zero */

loc_0013237A: ;
    ecx = MEM32(0x5BEBA8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00132388u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00132388: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001323A4; /* je: equal / zero */

loc_0013238C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0013239D; /* je: equal / zero */

loc_00132394: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00132395: ;
    ecx = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132370; /* jl: less (signed <) */

loc_0013239D: ;
    POP32(esp, esi);

loc_0013239E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001323A1: ;
    esp += 8; return; /* ret 4 */

loc_001323A4: ;
    eax = 0; /* xor self */
    goto loc_00132395;

}

/**
 * sub_001323B0
 * Original: 0x001323B0 - 0x00132408 (88 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001323B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001323B0: ;
    ecx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132401; /* je: equal / zero */

loc_001323B8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1C);
    ecx = MEM32(edi + 8);
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001323FE; /* jle: less or equal (signed <=) */

loc_001323C9: ;
    PUSH32(esp, esi);
    /* nop */

loc_001323D0: ;
    eax = MEM32(edi + 0x10);
    esi = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132404; /* je: equal / zero */

loc_001323DA: ;
    ecx = MEM32(0x5BA964);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001323E8u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_001323E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132404; /* je: equal / zero */

loc_001323EC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001323FD; /* je: equal / zero */

loc_001323F4: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001323F5: ;
    ecx = MEM32(edi + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001323D0; /* jl: less (signed <) */

loc_001323FD: ;
    POP32(esp, esi);

loc_001323FE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00132401: ;
    esp += 8; return; /* ret 4 */

loc_00132404: ;
    eax = 0; /* xor self */
    goto loc_001323F5;

}

/**
 * sub_00132410
 * Original: 0x00132410 - 0x00132457 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132410(void)
{

loc_00132410: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    PUSH32(esp, 0x0013241Fu); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_0013241F: ;
    ecx = MEM32(esp + 0x10);
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00132432u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00132432: ;
    edx = MEM32(esp + 4);
    edx = edx << 4;
    eax = MEM32(edx + esi + 4);
    ecx = edx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00132444u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00132444: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013244Fu); RECOMP_ABI_CALL(0x00132460u, sub_00132460); /* call 0x00132460 */

loc_0013244F: ;
    esp = esp + 8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00132460
 * Original: 0x00132460 - 0x001324F6 (150 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132460: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x352371);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00132485u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00132485: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00132491u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00132491: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00132499u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00132499: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013249Fu); RECOMP_ABI_CALL(0x001A9FA0u, sub_001A9FA0); /* call 0x001A9FA0 */

loc_0013249F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x001324B3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001324B3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001324BBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001324BB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001324CB; /* je: equal / zero */

loc_001324C8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001324CB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001324E3; /* je: equal / zero */

loc_001324DC: ;
    ecx = esi;
    PUSH32(esp, 0x001324E3u); RECOMP_ABI_CALL(0x00011A20u, sub_00011A20); /* call 0x00011A20 */

loc_001324E3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00132500
 * Original: 0x00132500 - 0x00132532 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132500(void)
{

loc_00132500: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00132509u); RECOMP_ABI_CALL(0x00132540u, sub_00132540); /* call 0x00132540 */

loc_00132509: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = esi + ecx * 4 + 0x9000;
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    eax = eax + eax * 8;
    eax = eax << 4;
    ecx = ecx | edi;
    POP32(esp, edi);
    eax = eax + esi;
    MEM32(edx) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00132540
 * Original: 0x00132540 - 0x0013258A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132540: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x9428);
    eax = esi + 0x9020;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x9430);
    edx = esi + edx * 4 + 0x9430;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x0013257Eu); RECOMP_ABI_CALL(0x000A31D0u, sub_000A31D0); /* call 0x000A31D0 */

loc_0013257E: ;
    MEM32(esi + 0x9450) = MEM32(esi + 0x9450) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x9450)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00132590
 * Original: 0x00132590 - 0x001325B6 (38 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132590(void)
{

loc_00132590: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x9858);
    PUSH32(esp, edi);
    edi = ecx + 4;
    esi = esi & edx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001325A9u); RECOMP_ABI_CALL(0x00132600u, sub_00132600); /* call 0x00132600 */

loc_001325A9: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001325B1u); RECOMP_ABI_CALL(0x001325C0u, sub_001325C0); /* call 0x001325C0 */

loc_001325B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001325C0
 * Original: 0x001325C0 - 0x001325FE (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001325C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001325C0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x9858);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x9454) = MEM32(eax + edx * 4 + 0x9454) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x9454) >= 0)) goto loc_001325FA; /* jns: not sign (positive) */

loc_001325DD: ;
    MEM32(eax + edx * 4 + 0x9454) = edx;
    ecx = MEM32(eax + 0x9858);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x9454) = esi;

loc_001325FA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132600
 * Original: 0x00132600 - 0x0013267F (127 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132600: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0013260Eu); RECOMP_ABI_CALL(0x00132680u, sub_00132680); /* call 0x00132680 */

loc_0013260E: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x9430);
    eax = esi + eax * 4 + 0x9430;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x9424);
    edx = MEM32(esi + 0x942C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    MEM32(esi + 0x9424) = eax;
    MEM32(esi + 0x942C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00132665; /* jl: less (signed <) */

loc_00132654: ;
    MEM32(esi + 0x9424) = 0;
    eax = 0xFF;
    goto loc_00132666;

loc_00132665: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00132666: ;
    MEM32(esi + eax * 4 + 0x9020) = edi;
    eax = MEM32(esi + 0x9450);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x9450) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132680
 * Original: 0x00132680 - 0x001326BF (63 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132680(void)
{

loc_00132680: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi + esi * 8;
    ecx = ecx << 4;
    ecx = ecx + edi;
    PUSH32(esp, 0x00132695u); RECOMP_ABI_CALL(0x001309F0u, sub_001309F0); /* call 0x001309F0 */

loc_00132695: ;
    ecx = esi;
    ecx = ecx & 0x1F;
    eax = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(edi + eax * 4 + 0x9000);
    eax = edi + eax * 4 + 0x9000;
    edx = ~edx;
    ecx = ecx & edx;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001326C0
 * Original: 0x001326C0 - 0x001326DE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001326C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001326C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001326C8u); RECOMP_ABI_CALL(0x00131C40u, sub_00131C40); /* call 0x00131C40 */

loc_001326C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001326D8; /* je: equal / zero */

loc_001326CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001326D5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_001326D5: ;
    esp = esp + 4;

loc_001326D8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001326E0
 * Original: 0x001326E0 - 0x00132724 (68 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001326E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001326E0: ;
    SET_LO8(ecx, MEM8(0x523618));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013271E; /* jne: not equal / not zero */

loc_001326EF: ;
    edx = MEM32(0x523618);
    edx = edx | eax;
    ecx = 0x519DBC;
    MEM32(0x523618) = edx;
    MEM32(0x519DB8) = 0x3DC1C4;
    PUSH32(esp, 0x00132711u); RECOMP_ABI_CALL(0x00131BD0u, sub_00131BD0); /* call 0x00131BD0 */

loc_00132711: ;
    PUSH32(esp, 0x35A390);
    PUSH32(esp, 0x0013271Bu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0013271B: ;
    esp = esp + 4;

loc_0013271E: ;
    eax = 0x519DB8;
    esp += 4; return; /* ret */

}

/**
 * sub_00132730
 * Original: 0x00132730 - 0x0013274F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132730: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DC1E4;
    if (TEST_Z(_fa, _fb)) goto loc_00132749; /* je: equal / zero */

loc_00132740: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00132746u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00132746: ;
    esp = esp + 4;

loc_00132749: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132750
 * Original: 0x00132750 - 0x00132768 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132750(void)
{

loc_00132750: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132770
 * Original: 0x00132770 - 0x00132777 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132770(void)
{

loc_00132770: ;
    MEM32(ecx) = 0x3DC1F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00132780
 * Original: 0x00132780 - 0x0013279F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132780: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DC1F4;
    if (TEST_Z(_fa, _fb)) goto loc_00132799; /* je: equal / zero */

loc_00132790: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00132796u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00132796: ;
    esp = esp + 4;

loc_00132799: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001327A0
 * Original: 0x001327A0 - 0x001327EE (78 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001327A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001327A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001327A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001327A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001327D4; /* je: equal / zero */

loc_001327AC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001327B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001327B3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001327BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001327BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001327D4; /* je: equal / zero */

loc_001327BE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001327C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001327C5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001327CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001327CC: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_001327D4: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    esi = esi + 8;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001327EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001327EA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001327F0
 * Original: 0x001327F0 - 0x0013280D (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001327F0(void)
{

loc_001327F0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx;
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    eax = eax + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00132809u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00132809: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00132810
 * Original: 0x00132810 - 0x00132855 (69 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132810(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132810: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0013284D; /* ja: above (unsigned >) */

loc_00132819: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x132858); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00132820u) goto loc_00132820;
    if (_jt == 0x00132825u) goto loc_00132825;
    if (_jt == 0x0013282Du) goto loc_0013282D;
    if (_jt == 0x00132835u) goto loc_00132835;
    if (_jt == 0x0013283Du) goto loc_0013283D;
    if (_jt == 0x00132845u) goto loc_00132845;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00132820: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_00132825: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

loc_0013282D: ;
    eax = 2;
    esp += 8; return; /* ret 4 */

loc_00132835: ;
    eax = 3;
    esp += 8; return; /* ret 4 */

loc_0013283D: ;
    eax = 4;
    esp += 8; return; /* ret 4 */

loc_00132845: ;
    eax = 5;
    esp += 8; return; /* ret 4 */

loc_0013284D: ;
    eax = 6;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132870
 * Original: 0x00132870 - 0x001328C0 (80 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132870: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00132878u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00132878: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001328AC; /* je: equal / zero */

loc_0013287C: ;
    edx = MEM32(esp + 8);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013288Bu); RECOMP_ABI_CALL(0x00138870u, xml1_guest_bone_name_lookup); /* call 0x00138870 */

loc_0013288B: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    esp = esp + 8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001328AC; /* je: equal / zero */

loc_00132896: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001328A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001328A8: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001328AC: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001328C0
 * Original: 0x001328C0 - 0x001328C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001328C0(void)
{

loc_001328C0: ;
    MEM32(ecx) = 0x3DC254;
    esp += 4; return; /* ret */

}

/**
 * sub_001328D0
 * Original: 0x001328D0 - 0x0013290E (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001328D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001328D0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x4568);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x37B4) = MEM32(eax + edx * 4 + 0x37B4) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x37B4) >= 0)) goto loc_0013290A; /* jns: not sign (positive) */

loc_001328ED: ;
    MEM32(eax + edx * 4 + 0x37B4) = edx;
    ecx = MEM32(eax + 0x4568);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x37B4) = esi;

loc_0013290A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132910
 * Original: 0x00132910 - 0x001329A9 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132910: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36C (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00132927; /* jl: less (signed <) */

loc_0013291E: ;
    eax = 0x36C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00132927: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0013293A; /* jne: not equal / not zero */

loc_00132938: ;
    edx = ~edx;

loc_0013293A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132964; /* jne: not equal / not zero */

loc_00132945: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013299F; /* jge: greater or equal (signed >=) */

loc_00132952: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00132960; /* jne: not equal / not zero */

loc_0013295E: ;
    edx = ~edx;

loc_00132960: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132945; /* je: equal / zero */

loc_00132964: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132972; /* jne: not equal / not zero */

loc_0013296C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00132972: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013297C; /* jne: not equal / not zero */

loc_00132976: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0013297C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132987; /* jne: not equal / not zero */

loc_00132981: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_00132987: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132998; /* jne: not equal / not zero */

loc_0013298C: ;
    /* nop */

loc_00132990: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132990; /* je: equal / zero */

loc_00132998: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x36C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001329A4; /* jl: less (signed <) */

loc_0013299F: ;
    eax = 0x36C;

loc_001329A4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001329B0
 * Original: 0x001329B0 - 0x001329EE (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001329B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001329B0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x27B8);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x24AC) = MEM32(eax + edx * 4 + 0x24AC) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x24AC) >= 0)) goto loc_001329EA; /* jns: not sign (positive) */

loc_001329CD: ;
    MEM32(eax + edx * 4 + 0x24AC) = edx;
    ecx = MEM32(eax + 0x27B8);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x24AC) = esi;

loc_001329EA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001329F0
 * Original: 0x001329F0 - 0x00132A89 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001329F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001329F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC2 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00132A07; /* jl: less (signed <) */

loc_001329FE: ;
    eax = 0xC2;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00132A07: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00132A1A; /* jne: not equal / not zero */

loc_00132A18: ;
    edx = ~edx;

loc_00132A1A: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132A44; /* jne: not equal / not zero */

loc_00132A25: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00132A7F; /* jge: greater or equal (signed >=) */

loc_00132A32: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00132A40; /* jne: not equal / not zero */

loc_00132A3E: ;
    edx = ~edx;

loc_00132A40: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132A25; /* je: equal / zero */

loc_00132A44: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132A52; /* jne: not equal / not zero */

loc_00132A4C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00132A52: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132A5C; /* jne: not equal / not zero */

loc_00132A56: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_00132A5C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132A67; /* jne: not equal / not zero */

loc_00132A61: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_00132A67: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132A78; /* jne: not equal / not zero */

loc_00132A6C: ;
    /* nop */

loc_00132A70: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132A70; /* je: equal / zero */

loc_00132A78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132A84; /* jl: less (signed <) */

loc_00132A7F: ;
    eax = 0xC2;

loc_00132A84: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00132A90
 * Original: 0x00132A90 - 0x00132ACE (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132A90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00132A90: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x2B68);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x20BC) = MEM32(eax + edx * 4 + 0x20BC) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x20BC) >= 0)) goto loc_00132ACA; /* jns: not sign (positive) */

loc_00132AAD: ;
    MEM32(eax + edx * 4 + 0x20BC) = edx;
    ecx = MEM32(eax + 0x2B68);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x20BC) = esi;

loc_00132ACA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132AD0
 * Original: 0x00132AD0 - 0x00132B69 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132AD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2AA (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00132AE7; /* jl: less (signed <) */

loc_00132ADE: ;
    eax = 0x2AA;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00132AE7: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00132AFA; /* jne: not equal / not zero */

loc_00132AF8: ;
    edx = ~edx;

loc_00132AFA: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132B24; /* jne: not equal / not zero */

loc_00132B05: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2AA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00132B5F; /* jge: greater or equal (signed >=) */

loc_00132B12: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00132B20; /* jne: not equal / not zero */

loc_00132B1E: ;
    edx = ~edx;

loc_00132B20: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132B05; /* je: equal / zero */

loc_00132B24: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132B32; /* jne: not equal / not zero */

loc_00132B2C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00132B32: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132B3C; /* jne: not equal / not zero */

loc_00132B36: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_00132B3C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132B47; /* jne: not equal / not zero */

loc_00132B41: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_00132B47: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132B58; /* jne: not equal / not zero */

loc_00132B4C: ;
    /* nop */

loc_00132B50: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132B50; /* je: equal / zero */

loc_00132B58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2AA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132B64; /* jl: less (signed <) */

loc_00132B5F: ;
    eax = 0x2AA;

loc_00132B64: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00132B70
 * Original: 0x00132B70 - 0x00132BAE (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132B70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00132B70: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0xA340);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x9914) = MEM32(eax + edx * 4 + 0x9914) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x9914) >= 0)) goto loc_00132BAA; /* jns: not sign (positive) */

loc_00132B8D: ;
    MEM32(eax + edx * 4 + 0x9914) = edx;
    ecx = MEM32(eax + 0xA340);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x9914) = esi;

loc_00132BAA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132BB0
 * Original: 0x00132BB0 - 0x00132C49 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132BB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28A (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00132BC7; /* jl: less (signed <) */

loc_00132BBE: ;
    eax = 0x28A;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00132BC7: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00132BDA; /* jne: not equal / not zero */

loc_00132BD8: ;
    edx = ~edx;

loc_00132BDA: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132C04; /* jne: not equal / not zero */

loc_00132BE5: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28A (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00132C3F; /* jge: greater or equal (signed >=) */

loc_00132BF2: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_00132C00; /* jne: not equal / not zero */

loc_00132BFE: ;
    edx = ~edx;

loc_00132C00: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132BE5; /* je: equal / zero */

loc_00132C04: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132C12; /* jne: not equal / not zero */

loc_00132C0C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00132C12: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132C1C; /* jne: not equal / not zero */

loc_00132C16: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_00132C1C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132C27; /* jne: not equal / not zero */

loc_00132C21: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_00132C27: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00132C38; /* jne: not equal / not zero */

loc_00132C2C: ;
    /* nop */

loc_00132C30: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132C30; /* je: equal / zero */

loc_00132C38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00132C44; /* jl: less (signed <) */

loc_00132C3F: ;
    eax = 0x28A;

loc_00132C44: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00132C50
 * Original: 0x00132C50 - 0x00132C8E (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132C50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00132C50: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x15A0);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x151C) = MEM32(eax + edx * 4 + 0x151C) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x151C) >= 0)) goto loc_00132C8A; /* jns: not sign (positive) */

loc_00132C6D: ;
    MEM32(eax + edx * 4 + 0x151C) = edx;
    ecx = MEM32(eax + 0x15A0);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x151C) = esi;

loc_00132C8A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132C90
 * Original: 0x00132C90 - 0x00132CCE (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132C90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00132C90: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0xC70);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0xA64) = MEM32(eax + edx * 4 + 0xA64) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0xA64) >= 0)) goto loc_00132CCA; /* jns: not sign (positive) */

loc_00132CAD: ;
    MEM32(eax + edx * 4 + 0xA64) = edx;
    ecx = MEM32(eax + 0xC70);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0xA64) = esi;

loc_00132CCA: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132CD0
 * Original: 0x00132CD0 - 0x00132D0E (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132CD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00132CD0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x1928);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x1824) = MEM32(eax + edx * 4 + 0x1824) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x1824) >= 0)) goto loc_00132D0A; /* jns: not sign (positive) */

loc_00132CED: ;
    MEM32(eax + edx * 4 + 0x1824) = edx;
    ecx = MEM32(eax + 0x1928);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x1824) = esi;

loc_00132D0A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132D10
 * Original: 0x00132D10 - 0x00132D3F (47 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132D10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00132D10: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0x28) = MEM32(eax + edx * 4 + 0x28) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0x28) >= 0)) goto loc_00132D3B; /* jns: not sign (positive) */

loc_00132D27: ;
    MEM32(eax + edx * 4 + 0x28) = edx;
    ecx = MEM32(eax + 0x30);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0x28) = esi;

loc_00132D3B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132D40
 * Original: 0x00132D40 - 0x00132D7E (62 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132D40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00132D40: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + 0xB2E8);
    PUSH32(esp, esi);
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax + edx * 4 + 0xA534) = MEM32(eax + edx * 4 + 0xA534) + esi;
    if (((int32_t)MEM32(eax + edx * 4 + 0xA534) >= 0)) goto loc_00132D7A; /* jns: not sign (positive) */

loc_00132D5D: ;
    MEM32(eax + edx * 4 + 0xA534) = edx;
    ecx = MEM32(eax + 0xB2E8);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = esi | edx;
    MEM32(eax + edx * 4 + 0xA534) = esi;

loc_00132D7A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132D80
 * Original: 0x00132D80 - 0x00132DCA (74 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132D80(void)
{

loc_00132D80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3525E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = 0;
    MEM32(esi) = 0x3DC270;
    PUSH32(esp, 0x00132DB2u); RECOMP_ABI_CALL(0x0019BD00u, sub_0019BD00); /* call 0x0019BD00 */

loc_00132DB2: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 4) = eax;
    esp = esp + 4;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00132DD0
 * Original: 0x00132DD0 - 0x00132DDD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132DD0(void)
{

loc_00132DD0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132DE0
 * Original: 0x00132DE0 - 0x00132DE7 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132DE0(void)
{

loc_00132DE0: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_00132DF0
 * Original: 0x00132DF0 - 0x00132E0F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132DF0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3DC254;
    if (TEST_Z(_fa, _fb)) goto loc_00132E09; /* je: equal / zero */

loc_00132E00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00132E06u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00132E06: ;
    esp = esp + 4;

loc_00132E09: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132E10
 * Original: 0x00132E10 - 0x00132E3A (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132E10: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132E37; /* je: equal / zero */

loc_00132E17: ;
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132E25u); RECOMP_ABI_CALL(0x00132810u, sub_00132810); /* call 0x00132810 */

loc_00132E25: ;
    ecx = eax;
    eax = MEM32(edx + 0x20);
    esi = 1;
    esi = esi << LO8(ecx);
    eax = eax | esi;
    MEM32(edx + 0x20) = eax;
    POP32(esp, esi);

loc_00132E37: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132E40
 * Original: 0x00132E40 - 0x00132E6C (44 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132E40: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132E69; /* je: equal / zero */

loc_00132E47: ;
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132E55u); RECOMP_ABI_CALL(0x00132810u, sub_00132810); /* call 0x00132810 */

loc_00132E55: ;
    ecx = eax;
    eax = MEM32(edx + 0x20);
    esi = 1;
    esi = esi << LO8(ecx);
    esi = ~esi;
    eax = eax & esi;
    MEM32(edx + 0x20) = eax;
    POP32(esp, esi);

loc_00132E69: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132E70
 * Original: 0x00132E70 - 0x00132E82 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132E70: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132E81; /* je: equal / zero */

loc_00132E77: ;
    eax = MEM32(eax + 4);
    MEM32(eax + 0x20) = 0;

loc_00132E81: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00132E90
 * Original: 0x00132E90 - 0x00132EBD (45 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132E90: ;
    edx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132EB8; /* je: equal / zero */

loc_00132E97: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00132EA2u); RECOMP_ABI_CALL(0x00132810u, sub_00132810); /* call 0x00132810 */

loc_00132EA2: ;
    ecx = eax;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0x20), esi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00132EB8: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132EC0
 * Original: 0x00132EC0 - 0x00132EE2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132EC0: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132EDF; /* je: equal / zero */

loc_00132EC7: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = MEM32(eax + 4);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x2C) = ecx;

loc_00132EDF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132EF0
 * Original: 0x00132EF0 - 0x00132F04 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132EF0: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132F01; /* je: equal / zero */

loc_00132EF7: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x30) = ecx;

loc_00132F01: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132F10
 * Original: 0x00132F10 - 0x00132F3F (47 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132F10: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132F3C; /* je: equal / zero */

loc_00132F17: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = MEM32(eax + 4);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x3C) = edx;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = edx;

loc_00132F3C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00132F40
 * Original: 0x00132F40 - 0x00132F5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132F40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00132F48u); RECOMP_ABI_CALL(0x00132F60u, sub_00132F60); /* call 0x00132F60 */

loc_00132F48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00132F58; /* je: equal / zero */

loc_00132F4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00132F55u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00132F55: ;
    esp = esp + 4;

loc_00132F58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00132F60
 * Original: 0x00132F60 - 0x00132FB7 (87 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132F60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3525E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00132FA1; /* je: equal / zero */

loc_00132F8C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00132FA1; /* jne: not equal / not zero */

loc_00132F9C: ;
    PUSH32(esp, 0x00132FA1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00132FA1: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3DC1E4;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00132FC0
 * Original: 0x00132FC0 - 0x0013304C (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00132FC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00133019; /* je: equal / zero */

loc_00132FEB: ;
    PUSH32(esp, 0x00132FF0u); RECOMP_ABI_CALL(0x00142DE0u, sub_00142DE0); /* call 0x00142DE0 */

loc_00132FF0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00132FF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00132FF8: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133013; /* je: equal / zero */

loc_00132FFE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00133013; /* jne: not equal / not zero */

loc_0013300E: ;
    PUSH32(esp, 0x00133013u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00133013: ;
    MEM32(esi) = 0;

loc_00133019: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013303D; /* je: equal / zero */

loc_00133028: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013303D; /* jne: not equal / not zero */

loc_00133038: ;
    PUSH32(esp, 0x0013303Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013303D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00133050
 * Original: 0x00133050 - 0x00133088 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133050: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133086; /* je: equal / zero */

loc_00133058: ;
    PUSH32(esp, 0x0013305Du); RECOMP_ABI_CALL(0x00142E40u, sub_00142E40); /* call 0x00142E40 */

loc_0013305D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00133065u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133065: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133080; /* je: equal / zero */

loc_0013306B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00133080; /* jne: not equal / not zero */

loc_0013307B: ;
    PUSH32(esp, 0x00133080u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00133080: ;
    MEM32(esi) = 0;

loc_00133086: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00133090
 * Original: 0x00133090 - 0x0013311C (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133090: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001330E9; /* je: equal / zero */

loc_001330BB: ;
    PUSH32(esp, 0x001330C0u); RECOMP_ABI_CALL(0x00142F00u, sub_00142F00); /* call 0x00142F00 */

loc_001330C0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001330C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001330C8: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001330E3; /* je: equal / zero */

loc_001330CE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001330E3; /* jne: not equal / not zero */

loc_001330DE: ;
    PUSH32(esp, 0x001330E3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001330E3: ;
    MEM32(esi) = 0;

loc_001330E9: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013310D; /* je: equal / zero */

loc_001330F8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013310D; /* jne: not equal / not zero */

loc_00133108: ;
    PUSH32(esp, 0x0013310Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013310D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00133120
 * Original: 0x00133120 - 0x00133158 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133120: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133156; /* je: equal / zero */

loc_00133128: ;
    PUSH32(esp, 0x0013312Du); RECOMP_ABI_CALL(0x001433E0u, sub_001433E0); /* call 0x001433E0 */

loc_0013312D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00133135u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133135: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133150; /* je: equal / zero */

loc_0013313B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00133150; /* jne: not equal / not zero */

loc_0013314B: ;
    PUSH32(esp, 0x00133150u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00133150: ;
    MEM32(esi) = 0;

loc_00133156: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00133160
 * Original: 0x00133160 - 0x001331FF (159 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133160: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x2910);
    PUSH32(esp, edi);
    edi = ebx + 0x2910;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013319A; /* jne: not equal / not zero */

loc_00133177: ;
    goto loc_00133180;

    /* nop */

loc_00133180: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x36C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001331F2; /* jge: greater or equal (signed >=) */

loc_0013318E: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133180; /* je: equal / zero */

loc_0013319A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001331A7; /* jne: not equal / not zero */

loc_001331A1: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_001331A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001331B1; /* jne: not equal / not zero */

loc_001331AB: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_001331B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001331BB; /* jne: not equal / not zero */

loc_001331B5: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_001331BB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001331C7; /* jne: not equal / not zero */

loc_001331BF: ;
    /* nop */

loc_001331C0: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001331C0; /* je: equal / zero */

loc_001331C7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x36C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001331F2; /* jge: greater or equal (signed >=) */

loc_001331CF: ;
    /* nop */

loc_001331D0: ;
    ecx = esi + esi * 2;
    edx = MEM32(ebx + ecx * 4);
    ecx = ebx + ecx * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001331DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001331DD: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001331E8u); RECOMP_ABI_CALL(0x00132910u, sub_00132910); /* call 0x00132910 */

loc_001331E8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x36C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001331D0; /* jl: less (signed <) */

loc_001331F2: ;
    ecx = 0x1C;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00133200
 * Original: 0x00133200 - 0x001332AD (173 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x2158);
    PUSH32(esp, edi);
    edi = ebx + 0x2158;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013323A; /* jne: not equal / not zero */

loc_00133217: ;
    goto loc_00133220;

    /* nop */

loc_00133220: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133293; /* jge: greater or equal (signed >=) */

loc_0013322E: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133220; /* je: equal / zero */

loc_0013323A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133247; /* jne: not equal / not zero */

loc_00133241: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_00133247: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133251; /* jne: not equal / not zero */

loc_0013324B: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_00133251: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013325B; /* jne: not equal / not zero */

loc_00133255: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_0013325B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133267; /* jne: not equal / not zero */

loc_0013325F: ;
    /* nop */

loc_00133260: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133260; /* je: equal / zero */

loc_00133267: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133293; /* jge: greater or equal (signed >=) */

loc_0013326F: ;
    /* nop */

loc_00133270: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013327Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013327E: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00133289u); RECOMP_ABI_CALL(0x001329F0u, sub_001329F0); /* call 0x001329F0 */

loc_00133289: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00133270; /* jl: less (signed <) */

loc_00133293: ;
    eax = 0; /* xor self */
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = eax;
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001332B0
 * Original: 0x001332B0 - 0x0013334C (156 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001332B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001332B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x1550);
    PUSH32(esp, edi);
    edi = ebx + 0x1550;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001332EA; /* jne: not equal / not zero */

loc_001332C7: ;
    goto loc_001332D0;

    /* nop */

loc_001332D0: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2AA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013333F; /* jge: greater or equal (signed >=) */

loc_001332DE: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001332D0; /* je: equal / zero */

loc_001332EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001332F7; /* jne: not equal / not zero */

loc_001332F1: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_001332F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133301; /* jne: not equal / not zero */

loc_001332FB: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_00133301: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013330B; /* jne: not equal / not zero */

loc_00133305: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_0013330B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133317; /* jne: not equal / not zero */

loc_0013330F: ;
    /* nop */

loc_00133310: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133310; /* je: equal / zero */

loc_00133317: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2AA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0013333F; /* jge: greater or equal (signed >=) */

loc_0013331F: ;
    /* nop */

loc_00133320: ;
    edx = MEM32(ebx + esi * 8);
    ecx = ebx + esi * 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013332Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013332A: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00133335u); RECOMP_ABI_CALL(0x00132AD0u, sub_00132AD0); /* call 0x00132AD0 */

loc_00133335: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2AA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00133320; /* jl: less (signed <) */

loc_0013333F: ;
    ecx = 0x16;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00133350
 * Original: 0x00133350 - 0x001333F0 (160 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133350: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x8E30);
    PUSH32(esp, edi);
    edi = ebx + 0x8E30;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013338A; /* jne: not equal / not zero */

loc_00133367: ;
    goto loc_00133370;

    /* nop */

loc_00133370: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x28A (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001333E3; /* jge: greater or equal (signed >=) */

loc_0013337E: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133370; /* je: equal / zero */

loc_0013338A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133397; /* jne: not equal / not zero */

loc_00133391: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_00133397: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001333A1; /* jne: not equal / not zero */

loc_0013339B: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_001333A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001333AB; /* jne: not equal / not zero */

loc_001333A5: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_001333AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001333B7; /* jne: not equal / not zero */

loc_001333AF: ;
    /* nop */

loc_001333B0: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001333B0; /* je: equal / zero */

loc_001333B7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x28A (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001333E3; /* jge: greater or equal (signed >=) */

loc_001333BF: ;
    /* nop */

loc_001333C0: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001333CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001333CE: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001333D9u); RECOMP_ABI_CALL(0x00132BB0u, sub_00132BB0); /* call 0x00132BB0 */

loc_001333D9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x28A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001333C0; /* jl: less (signed <) */

loc_001333E3: ;
    ecx = 0x15;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001333F0
 * Original: 0x001333F0 - 0x001334EA (250 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001333F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001333F0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1480);
    PUSH32(esp, edi);
    edi = ebx + 0x1480;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133421; /* jne: not equal / not zero */

loc_00133406: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001334E1; /* jge: greater or equal (signed >=) */

loc_00133415: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133406; /* je: equal / zero */

loc_00133421: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013342E; /* jne: not equal / not zero */

loc_00133428: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_0013342E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133438; /* jne: not equal / not zero */

loc_00133432: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_00133438: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133442; /* jne: not equal / not zero */

loc_0013343C: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_00133442: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013344D; /* jne: not equal / not zero */

loc_00133446: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133446; /* je: equal / zero */

loc_0013344D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001334E1; /* jge: greater or equal (signed >=) */

loc_00133456: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_00133460: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xA4);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00133471u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133471: ;
    edx = esi + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001334E0; /* jge: greater or equal (signed >=) */

loc_00133479: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001334A7; /* jne: not equal / not zero */

loc_0013348C: ;
    /* nop */

loc_00133490: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001334E0; /* jge: greater or equal (signed >=) */

loc_0013349B: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133490; /* je: equal / zero */

loc_001334A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001334B4; /* jne: not equal / not zero */

loc_001334AE: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_001334B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001334BE; /* jne: not equal / not zero */

loc_001334B8: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_001334BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001334C8; /* jne: not equal / not zero */

loc_001334C2: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_001334C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001334D7; /* jne: not equal / not zero */

loc_001334CC: ;
    /* nop */

loc_001334D0: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001334D0; /* je: equal / zero */

loc_001334D7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001334E0; /* jge: greater or equal (signed >=) */

loc_001334DC: ;
    esi = edx;
    goto loc_00133460;

loc_001334E0: ;
    POP32(esp, esi);

loc_001334E1: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001334F0
 * Original: 0x001334F0 - 0x00133597 (167 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001334F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001334F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x820);
    PUSH32(esp, edi);
    edi = ebx + 0x820;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013352A; /* jne: not equal / not zero */

loc_00133507: ;
    goto loc_00133510;

    /* nop */

loc_00133510: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x82 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133583; /* jge: greater or equal (signed >=) */

loc_0013351E: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133510; /* je: equal / zero */

loc_0013352A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133537; /* jne: not equal / not zero */

loc_00133531: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_00133537: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133541; /* jne: not equal / not zero */

loc_0013353B: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_00133541: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013354B; /* jne: not equal / not zero */

loc_00133545: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_0013354B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133557; /* jne: not equal / not zero */

loc_0013354F: ;
    /* nop */

loc_00133550: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133550; /* je: equal / zero */

loc_00133557: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x82 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133583; /* jge: greater or equal (signed >=) */

loc_0013355F: ;
    /* nop */

loc_00133560: ;
    ecx = esi;
    ecx = ecx << 4;
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013356Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013356E: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00133579u); RECOMP_ABI_CALL(0x000E9EC0u, sub_000E9EC0); /* call 0x000E9EC0 */

loc_00133579: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x82 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00133560; /* jl: less (signed <) */

loc_00133583: ;
    eax = 0; /* xor self */
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001335A0
 * Original: 0x001335A0 - 0x0013369F (255 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001335A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001335A0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1700);
    PUSH32(esp, edi);
    edi = ebx + 0x1700;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001335D1; /* jne: not equal / not zero */

loc_001335B6: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133695; /* jge: greater or equal (signed >=) */

loc_001335C5: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001335B6; /* je: equal / zero */

loc_001335D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001335DE; /* jne: not equal / not zero */

loc_001335D8: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_001335DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001335E8; /* jne: not equal / not zero */

loc_001335E2: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_001335E8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001335F2; /* jne: not equal / not zero */

loc_001335EC: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_001335F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001335FD; /* jne: not equal / not zero */

loc_001335F6: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001335F6; /* je: equal / zero */

loc_001335FD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133695; /* jge: greater or equal (signed >=) */

loc_00133606: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_00133610: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5C);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013361Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013361E: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133694; /* jge: greater or equal (signed >=) */

loc_00133626: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133657; /* jne: not equal / not zero */

loc_00133639: ;
    /* nop */

loc_00133640: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133694; /* jge: greater or equal (signed >=) */

loc_0013364B: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133640; /* je: equal / zero */

loc_00133657: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133665; /* jne: not equal / not zero */

loc_0013365F: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_00133665: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013366F; /* jne: not equal / not zero */

loc_00133669: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_0013366F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013367A; /* jne: not equal / not zero */

loc_00133674: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0013367A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133688; /* jne: not equal / not zero */

loc_0013367F: ;
    /* nop */

loc_00133680: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133680; /* je: equal / zero */

loc_00133688: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133694; /* jge: greater or equal (signed >=) */

loc_0013368D: ;
    esi = eax;
    goto loc_00133610;

loc_00133694: ;
    POP32(esp, esi);

loc_00133695: ;
    edx = 0; /* xor self */
    MEM32(edi) = edx;
    MEM32(edi + 4) = edx;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001336A0
 * Original: 0x001336A0 - 0x0013377F (223 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001336A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001336A0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, edi);
    edi = ebx + 8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001336CB; /* jne: not equal / not zero */

loc_001336B0: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133776; /* jge: greater or equal (signed >=) */

loc_001336BF: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001336B0; /* je: equal / zero */

loc_001336CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001336D8; /* jne: not equal / not zero */

loc_001336D2: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_001336D8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001336E2; /* jne: not equal / not zero */

loc_001336DC: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_001336E2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001336EC; /* jne: not equal / not zero */

loc_001336E6: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_001336EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001336F7; /* jne: not equal / not zero */

loc_001336F0: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001336F0; /* je: equal / zero */

loc_001336F7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133776; /* jge: greater or equal (signed >=) */

loc_001336FC: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_00133700: ;
    edx = MEM32(ebx + esi * 8);
    ecx = ebx + esi * 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0013370Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0013370A: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133775; /* jge: greater or equal (signed >=) */

loc_00133712: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013373C; /* jne: not equal / not zero */

loc_00133725: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133775; /* jge: greater or equal (signed >=) */

loc_00133730: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133725; /* je: equal / zero */

loc_0013373C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013374A; /* jne: not equal / not zero */

loc_00133744: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_0013374A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133754; /* jne: not equal / not zero */

loc_0013374E: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_00133754: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013375F; /* jne: not equal / not zero */

loc_00133759: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_0013375F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013376C; /* jne: not equal / not zero */

loc_00133764: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133764; /* je: equal / zero */

loc_0013376C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133775; /* jge: greater or equal (signed >=) */

loc_00133771: ;
    esi = eax;
    goto loc_00133700;

loc_00133775: ;
    POP32(esp, esi);

loc_00133776: ;
    MEM32(edi) = 0;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00133780
 * Original: 0x00133780 - 0x00133820 (160 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133780: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x9690);
    PUSH32(esp, edi);
    edi = ebx + 0x9690;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001337BA; /* jne: not equal / not zero */

loc_00133797: ;
    goto loc_001337A0;

    /* nop */

loc_001337A0: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x36C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133813; /* jge: greater or equal (signed >=) */

loc_001337AE: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001337A0; /* je: equal / zero */

loc_001337BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001337C7; /* jne: not equal / not zero */

loc_001337C1: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_001337C7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001337D1; /* jne: not equal / not zero */

loc_001337CB: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_001337D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001337DB; /* jne: not equal / not zero */

loc_001337D5: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_001337DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001337E7; /* jne: not equal / not zero */

loc_001337DF: ;
    /* nop */

loc_001337E0: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001337E0; /* je: equal / zero */

loc_001337E7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x36C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00133813; /* jge: greater or equal (signed >=) */

loc_001337EF: ;
    /* nop */

loc_001337F0: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2C);
    edx = MEM32(ecx + ebx);
    ecx = ecx + ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001337FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001337FE: ;
    PUSH32(esp, 1);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00133809u); RECOMP_ABI_CALL(0x00132910u, sub_00132910); /* call 0x00132910 */

loc_00133809: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x36C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001337F0; /* jl: less (signed <) */

loc_00133813: ;
    ecx = 0x1C;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00133820
 * Original: 0x00133820 - 0x0013387F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133820: ;
    edx = ecx;
    eax = MEM32(edx + 0x1810);
    eax = MEM32(edx + eax * 4 + 0x1708);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1818;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x1810);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    MEM32(edx + 0x1810) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00133869; /* jl: less (signed <) */

loc_0013385F: ;
    MEM32(edx + 0x1810) = 0;

loc_00133869: ;
    MEM32(edx + 0x1814) = MEM32(edx + 0x1814) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1814)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1820);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1820) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00133880
 * Original: 0x00133880 - 0x00133926 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133880: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523A1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x001338A5u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_001338A5: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001338B1u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001338B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001338B9u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001338B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001338BFu); RECOMP_ABI_CALL(0x0028F380u, sub_0028F380); /* call 0x0028F380 */

loc_001338BF: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x001338D3u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_001338D3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001338DBu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_001338DB: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001338EB; /* je: equal / zero */

loc_001338E8: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001338EB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00133913; /* je: equal / zero */

loc_001338FC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00133913; /* jne: not equal / not zero */

loc_0013390C: ;
    ecx = esi;
    PUSH32(esp, 0x00133913u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00133913: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00133930
 * Original: 0x00133930 - 0x001339D6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133930: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523A1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00133955u); RECOMP_ABI_CALL(0x001F5C20u, sub_001F5C20); /* call 0x001F5C20 */

loc_00133955: ;
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x00133961u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00133961: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00133969u); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_00133969: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013396Fu); RECOMP_ABI_CALL(0x002883C0u, sub_002883C0); /* call 0x002883C0 */

loc_0013396F: ;
    esi = eax;
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 1;
    PUSH32(esp, 0x00133983u); RECOMP_ABI_CALL(0x001F5C60u, sub_001F5C60); /* call 0x001F5C60 */

loc_00133983: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013398Bu); RECOMP_ABI_CALL(0x001E9BC0u, sub_001E9BC0); /* call 0x001E9BC0 */

loc_0013398B: ;
    edi = MEM32(esp + 0x38);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0013399B; /* je: equal / zero */

loc_00133998: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013399B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = 1;
    MEM8(esp + 0x14) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001339C3; /* je: equal / zero */

loc_001339AC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001339C3; /* jne: not equal / not zero */

loc_001339BC: ;
    ecx = esi;
    PUSH32(esp, 0x001339C3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001339C3: ;
    ecx = MEM32(esp + 0xC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001339E0
 * Original: 0x001339E0 - 0x001339F0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001339E0(void)
{

loc_001339E0: ;
    PUSH32(esp, 0x1A59F0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001339EFu); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_001339EF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001339F0
 * Original: 0x001339F0 - 0x00133A47 (87 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001339F0(void)
{

loc_001339F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523CE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    eax = 0; /* xor self */
    edi = esi + 4;
    MEM32(esi) = 0x3DC288;
    MEM32(esp + 0x14) = eax;
    MEM32(edi) = eax;
    MEM32(esi + 8) = eax;
    MEM8(esp + 0x14) = 2;
    PUSH32(esp, 0x00133A2Cu); RECOMP_ABI_CALL(0x00142F00u, sub_00142F00); /* call 0x00142F00 */

loc_00133A2C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00133A34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133A34: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00133A50
 * Original: 0x00133A50 - 0x00133AA5 (85 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133A50: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 8;
    PUSH32(esp, 0x00133A60u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00133A60: ;
    edx = MEM32(esp + 0x4C);
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x00133A71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133A71: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133A9B; /* je: equal / zero */

loc_00133A77: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00133A85u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_00133A85: ;
    eax = MEM32(esp + 0x54);
    ecx = eax + 8;
    PUSH32(esp, ecx);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00133A9Bu); RECOMP_ABI_CALL(0x00242850u, sub_00242850); /* call 0x00242850 */

loc_00133A9B: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00133AB0
 * Original: 0x00133AB0 - 0x00133B05 (85 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133AB0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 8;
    PUSH32(esp, 0x00133AC0u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00133AC0: ;
    edx = MEM32(esp + 0x4C);
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00133AD1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133AD1: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133AFB; /* je: equal / zero */

loc_00133AD7: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00133AE5u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_00133AE5: ;
    eax = MEM32(esp + 0x54);
    ecx = eax + 8;
    PUSH32(esp, ecx);
    edx = eax + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00133AFBu); RECOMP_ABI_CALL(0x00242850u, sub_00242850); /* call 0x00242850 */

loc_00133AFB: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00133B10
 * Original: 0x00133B10 - 0x00133B1B (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133B10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00133B10: ;
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x8C)); return; /* indirect tail jmp */

}

/**
 * sub_00133B20
 * Original: 0x00133B20 - 0x00133BB0 (144 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133B20(void)
{

loc_00133B20: ;
    esp = esp - 0x8C;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00133B32u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00133B32: ;
    ecx = esp + 0x50;
    PUSH32(esp, 0x00133B3Bu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00133B3B: ;
    eax = MEM32(esp + 0x9C);
    ecx = eax;
    edx = eax;
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x00133B60u); RECOMP_ABI_CALL(0x0023E590u, sub_0023E590); /* call 0x0023E590 */

loc_00133B60: ;
    eax = MEM32(esp + 0x98);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x00133B7Bu); RECOMP_ABI_CALL(0x002427F0u, sub_002427F0); /* call 0x002427F0 */

loc_00133B7B: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00133B89u); RECOMP_ABI_CALL(0x00242660u, sub_00242660); /* call 0x00242660 */

loc_00133B89: ;
    edx = MEM32(esp + 0x94);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00133B9Au); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_00133B9A: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00133BA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133BA6: ;
    POP32(esp, esi);
    esp = esp + 0x8C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00133BB0
 * Original: 0x00133BB0 - 0x00133C00 (80 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133BB0(void)
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

loc_00133BB0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x68);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133BDE; /* je: equal / zero */

loc_00133BBB: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    edi = MEM32(esi);
    PUSH32(esp, 0x00133BCDu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00133BCD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x58); PUSH32(esp, 0x00133BD9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133BD9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00133BDE: ;
    ecx = MEM32(esp + 8);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00133BECu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00133BEC: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00133C00
 * Original: 0x00133C00 - 0x00133C96 (150 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00133C00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133C00: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ebp + 8;
    if (TEST_NZ(_fa, _fb)) goto loc_00133C4B; /* jne: not equal / not zero */

loc_00133C0E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00133C15u); RECOMP_ABI_CALL(0x00142DE0u, sub_00142DE0); /* call 0x00142DE0 */

loc_00133C15: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00133C1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133C1D: ;
    edi = MEM32(ebp + 4);
    ebx = MEM32(esi);
    edi = edi + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133C2C; /* je: equal / zero */

loc_00133C29: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00133C2C: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133C47; /* je: equal / zero */

loc_00133C32: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00133C47; /* jne: not equal / not zero */

loc_00133C42: ;
    PUSH32(esp, 0x00133C47u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00133C47: ;
    MEM32(edi) = ebx;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00133C4B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133C91; /* je: equal / zero */

loc_00133C51: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x10) = ecx;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = eax + 0x14;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(ebp + 4);
    eax = MEM32(esi);
    edx = edx + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00133C8Eu); RECOMP_ABI_CALL(0x00241750u, sub_00241750); /* call 0x00241750 */

loc_00133C8E: ;
    esp = esp + 8;

loc_00133C91: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00133CA0
 * Original: 0x00133CA0 - 0x00133CE4 (68 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133CA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0x00133CAFu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00133CAF: ;
    eax = MEM32(0x5BD8C8);
    ecx = MEM32(esp + 0xC);
    edi = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00133CC3u); RECOMP_ABI_CALL(0x0025AAD0u, sub_0025AAD0); /* call 0x0025AAD0 */

loc_00133CC3: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133CDD; /* je: equal / zero */

loc_00133CCA: ;
    eax = eax + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x00133CD6u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_00133CD6: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00133CDD: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00133CF0
 * Original: 0x00133CF0 - 0x00133D36 (70 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133CF0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00133D00u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133D00: ;
    ecx = MEM32(0x5BD8C8);
    edx = MEM32(esp + 0xC);
    esi = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00133D15u); RECOMP_ABI_CALL(0x0025AAD0u, sub_0025AAD0); /* call 0x0025AAD0 */

loc_00133D15: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133D2F; /* je: equal / zero */

loc_00133D1C: ;
    eax = eax + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = edi;
    PUSH32(esp, 0x00133D28u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_00133D28: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00133D2F: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00133D40
 * Original: 0x00133D40 - 0x00133D5E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133D40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00133D48u); RECOMP_ABI_CALL(0x00133D60u, sub_00133D60); /* call 0x00133D60 */

loc_00133D48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133D58; /* je: equal / zero */

loc_00133D4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00133D55u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_00133D55: ;
    esp = esp + 4;

loc_00133D58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133D60
 * Original: 0x00133D60 - 0x00133DE1 (129 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133D60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523CE);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x3DC288;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edi = esi + 8;
    MEM32(esp + 0x14) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_00133DAB; /* je: equal / zero */

loc_00133D96: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00133DAB; /* jne: not equal / not zero */

loc_00133DA6: ;
    PUSH32(esp, 0x00133DABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00133DAB: ;
    ecx = edi;
    MEM32(edi) = 0;
    MEM8(esp + 0x14) = 1;
    PUSH32(esp, 0x00133DBDu); RECOMP_ABI_CALL(0x00132FC0u, sub_00132FC0); /* call 0x00132FC0 */

loc_00133DBD: ;
    ecx = esi + 4;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x00133DCAu); RECOMP_ABI_CALL(0x00133090u, sub_00133090); /* call 0x00133090 */

loc_00133DCA: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x3DC1E4;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00133DF0
 * Original: 0x00133DF0 - 0x00133E29 (57 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133DF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    esi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00133DFDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133DFD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00133E1D; /* jle: less or equal (signed <=) */

loc_00133E01: ;
    eax = MEM32(edi + 0x1C);
    edx = 1;
    ecx = esi;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133E22; /* je: equal / zero */

loc_00133E11: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00133E19u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133E19: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00133E01; /* jl: less (signed <) */

loc_00133E1D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00133E22: ;
    eax = MEM32(edi + esi * 4 + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00133E30
 * Original: 0x00133E30 - 0x00133EB3 (131 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133E30: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00133E71; /* je: equal / zero */

loc_00133E3F: ;
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00133E54u); RECOMP_ABI_CALL(0x00133DF0u, sub_00133DF0); /* call 0x00133DF0 */

loc_00133E54: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00133E60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133E60: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133E87; /* je: equal / zero */

loc_00133E68: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00133E6Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133E6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00133E7B; /* jle: less or equal (signed <=) */

loc_00133E71: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_00133E7B: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00133E87u); RECOMP_ABI_CALL(0x00259CC0u, sub_00259CC0); /* call 0x00259CC0 */

loc_00133E87: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133EA6; /* je: equal / zero */

loc_00133E91: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00133EA6; /* jne: not equal / not zero */

loc_00133EA1: ;
    PUSH32(esp, 0x00133EA6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00133EA6: ;
    MEM32(esi + 0x20) = edi;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133EC0
 * Original: 0x00133EC0 - 0x00133F3E (126 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133EC0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133EFA; /* je: equal / zero */

loc_00133ED0: ;
    MEM32(esp + 8) = ebx;
    MEM32(esp + 0xC) = ebx;
    PUSH32(esp, 0x00133EDDu); RECOMP_ABI_CALL(0x00133DF0u, sub_00133DF0); /* call 0x00133DF0 */

loc_00133EDD: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00133EE9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133EE9: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133F14; /* je: equal / zero */

loc_00133EF1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00133EF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133EF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00133F02; /* jg: greater (signed >) */

loc_00133EFA: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00133F02: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00133F0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133F0D: ;
    ecx = eax;
    PUSH32(esp, 0x00133F14u); RECOMP_ABI_CALL(0x00269400u, sub_00269400); /* call 0x00269400 */

loc_00133F14: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133F30; /* je: equal / zero */

loc_00133F1B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00133F30; /* jne: not equal / not zero */

loc_00133F2B: ;
    PUSH32(esp, 0x00133F30u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00133F30: ;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x24) = LO8(ebx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00133F40
 * Original: 0x00133F40 - 0x00133FCC (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133F40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00133F99; /* je: equal / zero */

loc_00133F6B: ;
    PUSH32(esp, 0x00133F70u); RECOMP_ABI_CALL(0x00142E40u, sub_00142E40); /* call 0x00142E40 */

loc_00133F70: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00133F78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00133F78: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00133F93; /* je: equal / zero */

loc_00133F7E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00133F93; /* jne: not equal / not zero */

loc_00133F8E: ;
    PUSH32(esp, 0x00133F93u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00133F93: ;
    MEM32(esi) = 0;

loc_00133F99: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00133FBD; /* je: equal / zero */

loc_00133FA8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00133FBD; /* jne: not equal / not zero */

loc_00133FB8: ;
    PUSH32(esp, 0x00133FBDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00133FBD: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00133FD0
 * Original: 0x00133FD0 - 0x0013405C (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133FD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00134029; /* je: equal / zero */

loc_00133FFB: ;
    PUSH32(esp, 0x00134000u); RECOMP_ABI_CALL(0x00143020u, sub_00143020); /* call 0x00143020 */

loc_00134000: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00134008u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134008: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134023; /* je: equal / zero */

loc_0013400E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00134023; /* jne: not equal / not zero */

loc_0013401E: ;
    PUSH32(esp, 0x00134023u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00134023: ;
    MEM32(esi) = 0;

loc_00134029: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013404D; /* je: equal / zero */

loc_00134038: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013404D; /* jne: not equal / not zero */

loc_00134048: ;
    PUSH32(esp, 0x0013404Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013404D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00134060
 * Original: 0x00134060 - 0x001340EC (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134060: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001340B9; /* je: equal / zero */

loc_0013408B: ;
    PUSH32(esp, 0x00134090u); RECOMP_ABI_CALL(0x00143080u, sub_00143080); /* call 0x00143080 */

loc_00134090: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00134098u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134098: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001340B3; /* je: equal / zero */

loc_0013409E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001340B3; /* jne: not equal / not zero */

loc_001340AE: ;
    PUSH32(esp, 0x001340B3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001340B3: ;
    MEM32(esi) = 0;

loc_001340B9: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001340DD; /* je: equal / zero */

loc_001340C8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001340DD; /* jne: not equal / not zero */

loc_001340D8: ;
    PUSH32(esp, 0x001340DDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001340DD: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001340F0
 * Original: 0x001340F0 - 0x0013417C (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001340F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001340F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00134149; /* je: equal / zero */

loc_0013411B: ;
    PUSH32(esp, 0x00134120u); RECOMP_ABI_CALL(0x001430E0u, sub_001430E0); /* call 0x001430E0 */

loc_00134120: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00134128u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134128: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134143; /* je: equal / zero */

loc_0013412E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00134143; /* jne: not equal / not zero */

loc_0013413E: ;
    PUSH32(esp, 0x00134143u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00134143: ;
    MEM32(esi) = 0;

loc_00134149: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013416D; /* je: equal / zero */

loc_00134158: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013416D; /* jne: not equal / not zero */

loc_00134168: ;
    PUSH32(esp, 0x0013416Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013416D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00134180
 * Original: 0x00134180 - 0x0013420C (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134180: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001341D9; /* je: equal / zero */

loc_001341AB: ;
    PUSH32(esp, 0x001341B0u); RECOMP_ABI_CALL(0x00143140u, sub_00143140); /* call 0x00143140 */

loc_001341B0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001341B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001341B8: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001341D3; /* je: equal / zero */

loc_001341BE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001341D3; /* jne: not equal / not zero */

loc_001341CE: ;
    PUSH32(esp, 0x001341D3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001341D3: ;
    MEM32(esi) = 0;

loc_001341D9: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001341FD; /* je: equal / zero */

loc_001341E8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001341FD; /* jne: not equal / not zero */

loc_001341F8: ;
    PUSH32(esp, 0x001341FDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001341FD: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00134210
 * Original: 0x00134210 - 0x0013429C (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134210: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00134269; /* je: equal / zero */

loc_0013423B: ;
    PUSH32(esp, 0x00134240u); RECOMP_ABI_CALL(0x001431A0u, sub_001431A0); /* call 0x001431A0 */

loc_00134240: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00134248u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134248: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134263; /* je: equal / zero */

loc_0013424E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00134263; /* jne: not equal / not zero */

loc_0013425E: ;
    PUSH32(esp, 0x00134263u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00134263: ;
    MEM32(esi) = 0;

loc_00134269: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013428D; /* je: equal / zero */

loc_00134278: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013428D; /* jne: not equal / not zero */

loc_00134288: ;
    PUSH32(esp, 0x0013428Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013428D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001342A0
 * Original: 0x001342A0 - 0x0013432C (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001342A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001342A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001342F9; /* je: equal / zero */

loc_001342CB: ;
    PUSH32(esp, 0x001342D0u); RECOMP_ABI_CALL(0x00143200u, sub_00143200); /* call 0x00143200 */

loc_001342D0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001342D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001342D8: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001342F3; /* je: equal / zero */

loc_001342DE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001342F3; /* jne: not equal / not zero */

loc_001342EE: ;
    PUSH32(esp, 0x001342F3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001342F3: ;
    MEM32(esi) = 0;

loc_001342F9: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013431D; /* je: equal / zero */

loc_00134308: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013431D; /* jne: not equal / not zero */

loc_00134318: ;
    PUSH32(esp, 0x0013431Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013431D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00134330
 * Original: 0x00134330 - 0x001343BC (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134330: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00134389; /* je: equal / zero */

loc_0013435B: ;
    PUSH32(esp, 0x00134360u); RECOMP_ABI_CALL(0x00143260u, sub_00143260); /* call 0x00143260 */

loc_00134360: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00134368u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134368: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134383; /* je: equal / zero */

loc_0013436E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00134383; /* jne: not equal / not zero */

loc_0013437E: ;
    PUSH32(esp, 0x00134383u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00134383: ;
    MEM32(esi) = 0;

loc_00134389: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001343AD; /* je: equal / zero */

loc_00134398: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001343AD; /* jne: not equal / not zero */

loc_001343A8: ;
    PUSH32(esp, 0x001343ADu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001343AD: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001343C0
 * Original: 0x001343C0 - 0x0013444C (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001343C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001343C0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00134419; /* je: equal / zero */

loc_001343EB: ;
    PUSH32(esp, 0x001343F0u); RECOMP_ABI_CALL(0x001432C0u, sub_001432C0); /* call 0x001432C0 */

loc_001343F0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001343F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001343F8: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134413; /* je: equal / zero */

loc_001343FE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00134413; /* jne: not equal / not zero */

loc_0013440E: ;
    PUSH32(esp, 0x00134413u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00134413: ;
    MEM32(esi) = 0;

loc_00134419: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013443D; /* je: equal / zero */

loc_00134428: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013443D; /* jne: not equal / not zero */

loc_00134438: ;
    PUSH32(esp, 0x0013443Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013443D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00134450
 * Original: 0x00134450 - 0x001344DC (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134450: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001344A9; /* je: equal / zero */

loc_0013447B: ;
    PUSH32(esp, 0x00134480u); RECOMP_ABI_CALL(0x00143320u, sub_00143320); /* call 0x00143320 */

loc_00134480: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00134488u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134488: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001344A3; /* je: equal / zero */

loc_0013448E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001344A3; /* jne: not equal / not zero */

loc_0013449E: ;
    PUSH32(esp, 0x001344A3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001344A3: ;
    MEM32(esi) = 0;

loc_001344A9: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001344CD; /* je: equal / zero */

loc_001344B8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001344CD; /* jne: not equal / not zero */

loc_001344C8: ;
    PUSH32(esp, 0x001344CDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001344CD: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001344E0
 * Original: 0x001344E0 - 0x0013456C (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001344E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001344E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00134539; /* je: equal / zero */

loc_0013450B: ;
    PUSH32(esp, 0x00134510u); RECOMP_ABI_CALL(0x00142FC0u, sub_00142FC0); /* call 0x00142FC0 */

loc_00134510: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00134518u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134518: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134533; /* je: equal / zero */

loc_0013451E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00134533; /* jne: not equal / not zero */

loc_0013452E: ;
    PUSH32(esp, 0x00134533u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00134533: ;
    MEM32(esi) = 0;

loc_00134539: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013455D; /* je: equal / zero */

loc_00134548: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013455D; /* jne: not equal / not zero */

loc_00134558: ;
    PUSH32(esp, 0x0013455Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013455D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00134570
 * Original: 0x00134570 - 0x001345FC (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134570: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001345C9; /* je: equal / zero */

loc_0013459B: ;
    PUSH32(esp, 0x001345A0u); RECOMP_ABI_CALL(0x00142EA0u, sub_00142EA0); /* call 0x00142EA0 */

loc_001345A0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001345A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001345A8: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001345C3; /* je: equal / zero */

loc_001345AE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001345C3; /* jne: not equal / not zero */

loc_001345BE: ;
    PUSH32(esp, 0x001345C3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001345C3: ;
    MEM32(esi) = 0;

loc_001345C9: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001345ED; /* je: equal / zero */

loc_001345D8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001345ED; /* jne: not equal / not zero */

loc_001345E8: ;
    PUSH32(esp, 0x001345EDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001345ED: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00134600
 * Original: 0x00134600 - 0x0013468C (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134600: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00134659; /* je: equal / zero */

loc_0013462B: ;
    PUSH32(esp, 0x00134630u); RECOMP_ABI_CALL(0x001433E0u, sub_001433E0); /* call 0x001433E0 */

loc_00134630: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00134638u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134638: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134653; /* je: equal / zero */

loc_0013463E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00134653; /* jne: not equal / not zero */

loc_0013464E: ;
    PUSH32(esp, 0x00134653u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00134653: ;
    MEM32(esi) = 0;

loc_00134659: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013467D; /* je: equal / zero */

loc_00134668: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013467D; /* jne: not equal / not zero */

loc_00134678: ;
    PUSH32(esp, 0x0013467Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013467D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00134690
 * Original: 0x00134690 - 0x0013471C (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134690: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001346E9; /* je: equal / zero */

loc_001346BB: ;
    PUSH32(esp, 0x001346C0u); RECOMP_ABI_CALL(0x00143380u, sub_00143380); /* call 0x00143380 */

loc_001346C0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001346C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001346C8: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001346E3; /* je: equal / zero */

loc_001346CE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_001346E3; /* jne: not equal / not zero */

loc_001346DE: ;
    PUSH32(esp, 0x001346E3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_001346E3: ;
    MEM32(esi) = 0;

loc_001346E9: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013470D; /* je: equal / zero */

loc_001346F8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013470D; /* jne: not equal / not zero */

loc_00134708: ;
    PUSH32(esp, 0x0013470Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013470D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00134720
 * Original: 0x00134720 - 0x001347AC (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134720: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3523E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00134779; /* je: equal / zero */

loc_0013474B: ;
    PUSH32(esp, 0x00134750u); RECOMP_ABI_CALL(0x00142F60u, sub_00142F60); /* call 0x00142F60 */

loc_00134750: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00134758u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00134758: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00134773; /* je: equal / zero */

loc_0013475E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00134773; /* jne: not equal / not zero */

loc_0013476E: ;
    PUSH32(esp, 0x00134773u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00134773: ;
    MEM32(esi) = 0;

loc_00134779: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0013479D; /* je: equal / zero */

loc_00134788: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0013479D; /* jne: not equal / not zero */

loc_00134798: ;
    PUSH32(esp, 0x0013479Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0013479D: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001347B0
 * Original: 0x001347B0 - 0x00134812 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001347B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001347B0: ;
    edx = ecx;
    eax = MEM32(edx + 0x3738);
    eax = MEM32(edx + eax * 4 + 0x2980);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x3740;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x3738);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x36C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x36C (32-bit) */
    MEM32(edx + 0x3738) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001347FC; /* jl: less (signed <) */

loc_001347F2: ;
    MEM32(edx + 0x3738) = 0;

loc_001347FC: ;
    MEM32(edx + 0x373C) = MEM32(edx + 0x373C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x373C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x37B0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x37B0) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134820
 * Original: 0x00134820 - 0x00134882 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134820: ;
    edx = ecx;
    eax = MEM32(edx + 0x2484);
    eax = MEM32(edx + eax * 4 + 0x2174);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x248C;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x2484);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC2 (32-bit) */
    MEM32(edx + 0x2484) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0013486C; /* jl: less (signed <) */

loc_00134862: ;
    MEM32(edx + 0x2484) = 0;

loc_0013486C: ;
    MEM32(edx + 0x2488) = MEM32(edx + 0x2488) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x2488)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x24A8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x24A8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134890
 * Original: 0x00134890 - 0x001348F2 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134890: ;
    edx = ecx;
    eax = MEM32(edx + 0x2058);
    eax = MEM32(edx + eax * 4 + 0x15A8);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x2060;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x2058);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2AA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x2AA (32-bit) */
    MEM32(edx + 0x2058) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001348DC; /* jl: less (signed <) */

loc_001348D2: ;
    MEM32(edx + 0x2058) = 0;

loc_001348DC: ;
    MEM32(edx + 0x205C) = MEM32(edx + 0x205C) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x205C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x20B8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x20B8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134900
 * Original: 0x00134900 - 0x00134962 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134900: ;
    edx = ecx;
    eax = MEM32(edx + 0x98B4);
    eax = MEM32(edx + eax * 4 + 0x8E84);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x98BC;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x98B4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28A (32-bit) */
    MEM32(edx + 0x98B4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0013494C; /* jl: less (signed <) */

loc_00134942: ;
    MEM32(edx + 0x98B4) = 0;

loc_0013494C: ;
    MEM32(edx + 0x98B8) = MEM32(edx + 0x98B8) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x98B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x9910);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x9910) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134970
 * Original: 0x00134970 - 0x001349CF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134970: ;
    edx = ecx;
    eax = MEM32(edx + 0x150C);
    eax = MEM32(edx + eax * 4 + 0x1484);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x1514;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x150C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(edx + 0x150C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001349B9; /* jl: less (signed <) */

loc_001349AF: ;
    MEM32(edx + 0x150C) = 0;

loc_001349B9: ;
    MEM32(edx + 0x1510) = MEM32(edx + 0x1510) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x1510)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x1518);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x1518) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001349D0
 * Original: 0x001349D0 - 0x00134A32 (98 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001349D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001349D0: ;
    edx = ecx;
    eax = MEM32(edx + 0xA44);
    eax = MEM32(edx + eax * 4 + 0x834);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0xA4C;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0xA44);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x82) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x82 (32-bit) */
    MEM32(edx + 0xA44) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00134A1C; /* jl: less (signed <) */

loc_00134A12: ;
    MEM32(edx + 0xA44) = 0;

loc_00134A1C: ;
    MEM32(edx + 0xA48) = MEM32(edx + 0xA48) - 1;
    _fa = (uint32_t)(MEM32(edx + 0xA48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0xA60);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0xA60) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
