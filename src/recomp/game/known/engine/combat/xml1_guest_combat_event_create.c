#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "audio/raven_effect_sound_guest.h"
#include "audio/raven_loop_sound_runtime.h"
#include "engine/powers/raven_power_bindings_guest.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/combat/raven_filter_guest.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_combat_event_create; original guest entry 0x000E6040.
 * Evidence: tests/engine/combat/raven_filter_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000E6040
 * Original: 0x000E6040 - 0x000E6CBF (3199 bytes, 849 insns)
 * Category: game_physics
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_combat_event_create(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6040: ;
    raven_loop_guest_factory_trace(ecx,MEM32(esp+4));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350E8C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx + 0xC3D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC3D8), 0x30C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6079; /* jne: not equal / not zero */

loc_000E6065: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_000E6079: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000E6082u); RECOMP_ABI_CALL(0x000E4D30u, sub_000E4D30); /* call 0x000E4D30 */

loc_000E6082: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edi = MEM32(ebx + ecx * 4 + 0xB6D0);
    edx = ebx + ecx * 4 + 0xB6D0;
    ecx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    eax = eax + ebx;
    PUSH32(esp, 0x3D7798);
    edi = edi | esi;
    MEM32(edx) = edi;
    edi = MEM32(esp + 0x24);
    esi = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x000E60BFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E60BF: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6120; /* jne: not equal / not zero */

loc_000E60C6: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E60D2: ;
    ecx = esi;
    PUSH32(esp, 0x000E60D9u); RECOMP_ABI_CALL(0x000E52B0u, sub_000E52B0); /* call 0x000E52B0 */

loc_000E60D9: ;
    goto loc_000E60DD;

loc_000E60DB: ;
    eax = 0; /* xor self */

loc_000E60DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if (TEST_NZ(_fa, _fb)) goto loc_000E6C8D; /* jne: not equal / not zero */

loc_000E60ED: ;
    esi = esi - ebx;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000E610Au); RECOMP_ABI_CALL(0x000E5FA0u, sub_000E5FA0); /* call 0x000E5FA0 */

loc_000E610A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_000E6120: ;
    PUSH32(esp, 0x3D778C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E612Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E612B: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E614B; /* jne: not equal / not zero */

loc_000E6132: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6142: ;
    ecx = esi;
    PUSH32(esp, 0x000E6149u); RECOMP_ABI_CALL(0x000E51F0u, sub_000E51F0); /* call 0x000E51F0 */

loc_000E6149: ;
    goto loc_000E60DD;

loc_000E614B: ;
    PUSH32(esp, 0x3D7780);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6156u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6156: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E617D; /* jne: not equal / not zero */

loc_000E615D: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 2;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6171: ;
    ecx = esi;
    PUSH32(esp, 0x000E6178u); RECOMP_ABI_CALL(0x000E53A0u, sub_000E53A0); /* call 0x000E53A0 */

loc_000E6178: ;
    goto loc_000E60DD;

loc_000E617D: ;
    PUSH32(esp, 0x3D7774);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6188u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6188: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E61AF; /* jne: not equal / not zero */

loc_000E618F: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 3;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E61A3: ;
    ecx = esi;
    PUSH32(esp, 0x000E61AAu); RECOMP_ABI_CALL(0x000E5E00u, sub_000E5E00); /* call 0x000E5E00 */

loc_000E61AA: ;
    goto loc_000E60DD;

loc_000E61AF: ;
    PUSH32(esp, 0x3D7768);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E61BAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E61BA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E61E1; /* jne: not equal / not zero */

loc_000E61C1: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 4;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E61D5: ;
    ecx = esi;
    PUSH32(esp, 0x000E61DCu); RECOMP_ABI_CALL(0x000E5460u, sub_000E5460); /* call 0x000E5460 */

loc_000E61DC: ;
    goto loc_000E60DD;

loc_000E61E1: ;
    PUSH32(esp, 0x3D7758);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E61ECu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E61EC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6213; /* jne: not equal / not zero */

loc_000E61F3: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 5;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6207: ;
    ecx = esi;
    PUSH32(esp, 0x000E620Eu); RECOMP_ABI_CALL(0x000E5E20u, sub_000E5E20); /* call 0x000E5E20 */

loc_000E620E: ;
    goto loc_000E60DD;

loc_000E6213: ;
    PUSH32(esp, 0x3D774C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E621Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E621E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6245; /* jne: not equal / not zero */

loc_000E6225: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 6;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6239: ;
    ecx = esi;
    PUSH32(esp, 0x000E6240u); RECOMP_ABI_CALL(0x000E54F0u, sub_000E54F0); /* call 0x000E54F0 */

loc_000E6240: ;
    goto loc_000E60DD;

loc_000E6245: ;
    PUSH32(esp, 0x3D7740);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6250u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6250: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6277; /* jne: not equal / not zero */

loc_000E6257: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 7;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E626B: ;
    ecx = esi;
    PUSH32(esp, 0x000E6272u); RECOMP_ABI_CALL(0x000CF610u, sub_000CF610); /* call 0x000CF610 */

loc_000E6272: ;
    goto loc_000E60DD;

loc_000E6277: ;
    PUSH32(esp, 0x3D7734);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6282u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6282: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E62A9; /* jne: not equal / not zero */

loc_000E6289: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 8;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E629D: ;
    ecx = esi;
    PUSH32(esp, 0x000E62A4u); RECOMP_ABI_CALL(0x000D7780u, sub_000D7780); /* call 0x000D7780 */

loc_000E62A4: ;
    goto loc_000E60DD;

loc_000E62A9: ;
    PUSH32(esp, 0x3D7720);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E62B4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E62B4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E62DB; /* jne: not equal / not zero */

loc_000E62BB: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 9;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E62CF: ;
    ecx = esi;
    PUSH32(esp, 0x000E62D6u); RECOMP_ABI_CALL(0x000E55D0u, sub_000E55D0); /* call 0x000E55D0 */

loc_000E62D6: ;
    goto loc_000E60DD;

loc_000E62DB: ;
    PUSH32(esp, 0x3D7708);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E62E6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E62E6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E630D; /* jne: not equal / not zero */

loc_000E62ED: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0xA;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6301: ;
    ecx = esi;
    PUSH32(esp, 0x000E6308u); RECOMP_ABI_CALL(0x000E5660u, sub_000E5660); /* call 0x000E5660 */

loc_000E6308: ;
    goto loc_000E60DD;

loc_000E630D: ;
    PUSH32(esp, 0x3D76FC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6318u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6318: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E633F; /* jne: not equal / not zero */

loc_000E631F: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0xB;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6333: ;
    ecx = esi;
    PUSH32(esp, 0x000E633Au); RECOMP_ABI_CALL(0x000E56E0u, sub_000E56E0); /* call 0x000E56E0 */

loc_000E633A: ;
    goto loc_000E60DD;

loc_000E633F: ;
    PUSH32(esp, 0x3D76F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E634Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E634A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6371; /* jne: not equal / not zero */

loc_000E6351: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6365: ;
    ecx = esi;
    PUSH32(esp, 0x000E636Cu); RECOMP_ABI_CALL(0x000CFBF0u, sub_000CFBF0); /* call 0x000CFBF0 */

loc_000E636C: ;
    goto loc_000E60DD;

loc_000E6371: ;
    PUSH32(esp, 0x3D76E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E637Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E637C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E63A3; /* jne: not equal / not zero */

loc_000E6383: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0xD;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6397: ;
    ecx = esi;
    PUSH32(esp, 0x000E639Eu); RECOMP_ABI_CALL(0x000E4AD0u, sub_000E4AD0); /* call 0x000E4AD0 */

loc_000E639E: ;
    goto loc_000E60DD;

loc_000E63A3: ;
    PUSH32(esp, 0x3D76D8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E63AEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E63AE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E63D5; /* jne: not equal / not zero */

loc_000E63B5: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0xE;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E63C9: ;
    ecx = esi;
    PUSH32(esp, 0x000E63D0u); RECOMP_ABI_CALL(0x000E4AF0u, sub_000E4AF0); /* call 0x000E4AF0 */

loc_000E63D0: ;
    goto loc_000E60DD;

loc_000E63D5: ;
    PUSH32(esp, 0x3D76CC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E63E0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E63E0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6407; /* jne: not equal / not zero */

loc_000E63E7: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0xF;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E63FB: ;
    ecx = esi;
    PUSH32(esp, 0x000E6402u); RECOMP_ABI_CALL(0x000E4C40u, sub_000E4C40); /* call 0x000E4C40 */

loc_000E6402: ;
    goto loc_000E60DD;

loc_000E6407: ;
    PUSH32(esp, 0x3D76B8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6412u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6412: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6439; /* jne: not equal / not zero */

loc_000E6419: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x10;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E642D: ;
    ecx = esi;
    PUSH32(esp, 0x000E6434u); RECOMP_ABI_CALL(0x000E4460u, sub_000E4460); /* call 0x000E4460 */

loc_000E6434: ;
    goto loc_000E60DD;

loc_000E6439: ;
    PUSH32(esp, 0x3D76A4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6444u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6444: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E646B; /* jne: not equal / not zero */

loc_000E644B: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x11;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E645F: ;
    ecx = esi;
    PUSH32(esp, 0x000E6466u); RECOMP_ABI_CALL(0x000E4B10u, sub_000E4B10); /* call 0x000E4B10 */

loc_000E6466: ;
    goto loc_000E60DD;

loc_000E646B: ;
    PUSH32(esp, 0x3D7694);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6476u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6476: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E649D; /* jne: not equal / not zero */

loc_000E647D: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x12;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6491: ;
    ecx = esi;
    PUSH32(esp, 0x000E6498u); RECOMP_ABI_CALL(0x000E4B30u, sub_000E4B30); /* call 0x000E4B30 */

loc_000E6498: ;
    goto loc_000E60DD;

loc_000E649D: ;
    PUSH32(esp, 0x3D7684);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E64A8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E64A8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E64CF; /* jne: not equal / not zero */

loc_000E64AF: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x13;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E64C3: ;
    ecx = esi;
    PUSH32(esp, 0x000E64CAu); RECOMP_ABI_CALL(0x000E4B50u, sub_000E4B50); /* call 0x000E4B50 */

loc_000E64CA: ;
    goto loc_000E60DD;

loc_000E64CF: ;
    PUSH32(esp, 0x3D7670);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E64DAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E64DA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6501; /* jne: not equal / not zero */

loc_000E64E1: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x14;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E64F5: ;
    ecx = esi;
    PUSH32(esp, 0x000E64FCu); RECOMP_ABI_CALL(0x000E4B70u, sub_000E4B70); /* call 0x000E4B70 */

loc_000E64FC: ;
    goto loc_000E60DD;

loc_000E6501: ;
    PUSH32(esp, 0x3D7660);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E650Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E650C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6533; /* jne: not equal / not zero */

loc_000E6513: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x15;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6527: ;
    ecx = esi;
    PUSH32(esp, 0x000E652Eu); RECOMP_ABI_CALL(0x000D3FD0u, sub_000D3FD0); /* call 0x000D3FD0 */

loc_000E652E: ;
    goto loc_000E60DD;

loc_000E6533: ;
    PUSH32(esp, 0x3D764C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E653Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E653E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6565; /* jne: not equal / not zero */

loc_000E6545: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x16;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6559: ;
    ecx = esi;
    PUSH32(esp, 0x000E6560u); RECOMP_ABI_CALL(0x000E4170u, sub_000E4170); /* call 0x000E4170 */

loc_000E6560: ;
    goto loc_000E60DD;

loc_000E6565: ;
    PUSH32(esp, 0x3D7634);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6570u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6570: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6597; /* jne: not equal / not zero */

loc_000E6577: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x17;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E658B: ;
    ecx = esi;
    PUSH32(esp, 0x000E6592u); RECOMP_ABI_CALL(0x000E4300u, sub_000E4300); /* call 0x000E4300 */

loc_000E6592: ;
    goto loc_000E60DD;

loc_000E6597: ;
    PUSH32(esp, 0x3D761C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E65A2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E65A2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E65C9; /* jne: not equal / not zero */

loc_000E65A9: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x18;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E65BD: ;
    ecx = esi;
    PUSH32(esp, 0x000E65C4u); RECOMP_ABI_CALL(0x000E43C0u, sub_000E43C0); /* call 0x000E43C0 */

loc_000E65C4: ;
    goto loc_000E60DD;

loc_000E65C9: ;
    PUSH32(esp, 0x3D760C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E65D4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E65D4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E65FB; /* jne: not equal / not zero */

loc_000E65DB: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x19;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E65EF: ;
    ecx = esi;
    PUSH32(esp, 0x000E65F6u); RECOMP_ABI_CALL(0x000E50E0u, sub_000E50E0); /* call 0x000E50E0 */

loc_000E65F6: ;
    goto loc_000E60DD;

loc_000E65FB: ;
    PUSH32(esp, 0x3D7600);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6606u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6606: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E662D; /* jne: not equal / not zero */

loc_000E660D: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x1A;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6621: ;
    ecx = esi;
    PUSH32(esp, 0x000E6628u); RECOMP_ABI_CALL(0x000E4190u, sub_000E4190); /* call 0x000E4190 */

loc_000E6628: ;
    goto loc_000E60DD;

loc_000E662D: ;
    PUSH32(esp, 0x3D75F0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6638u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6638: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E665F; /* jne: not equal / not zero */

loc_000E663F: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x1B;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6653: ;
    ecx = esi;
    PUSH32(esp, 0x000E665Au); RECOMP_ABI_CALL(0x000E4580u, sub_000E4580); /* call 0x000E4580 */

loc_000E665A: ;
    goto loc_000E60DD;

loc_000E665F: ;
    PUSH32(esp, 0x3D75E4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E666Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E666A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6691; /* jne: not equal / not zero */

loc_000E6671: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x1C;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6685: ;
    ecx = esi;
    PUSH32(esp, 0x000E668Cu); RECOMP_ABI_CALL(0x000E4520u, sub_000E4520); /* call 0x000E4520 */

loc_000E668C: ;
    goto loc_000E60DD;

loc_000E6691: ;
    PUSH32(esp, 0x3D75D4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E669Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E669C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E66C3; /* jne: not equal / not zero */

loc_000E66A3: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x1D;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E66B7: ;
    ecx = esi;
    PUSH32(esp, 0x000E66BEu); RECOMP_ABI_CALL(0x000E46A0u, sub_000E46A0); /* call 0x000E46A0 */

loc_000E66BE: ;
    goto loc_000E60DD;

loc_000E66C3: ;
    PUSH32(esp, 0x3D75C4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E66CEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E66CE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E66F5; /* jne: not equal / not zero */

loc_000E66D5: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x1E;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E66E9: ;
    ecx = esi;
    PUSH32(esp, 0x000E66F0u); RECOMP_ABI_CALL(0x000E47B0u, sub_000E47B0); /* call 0x000E47B0 */

loc_000E66F0: ;
    goto loc_000E60DD;

loc_000E66F5: ;
    PUSH32(esp, 0x3D75AC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6700u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6700: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6727; /* jne: not equal / not zero */

loc_000E6707: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x1F;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E671B: ;
    ecx = esi;
    PUSH32(esp, 0x000E6722u); RECOMP_ABI_CALL(0x000E4B90u, sub_000E4B90); /* call 0x000E4B90 */

loc_000E6722: ;
    goto loc_000E60DD;

loc_000E6727: ;
    PUSH32(esp, 0x3D7594);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6732u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6732: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6759; /* jne: not equal / not zero */

loc_000E6739: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x20;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E674D: ;
    ecx = esi;
    PUSH32(esp, 0x000E6754u); RECOMP_ABI_CALL(0x000E4BB0u, sub_000E4BB0); /* call 0x000E4BB0 */

loc_000E6754: ;
    goto loc_000E60DD;

loc_000E6759: ;
    PUSH32(esp, 0x3D757C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6764u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6764: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E678B; /* jne: not equal / not zero */

loc_000E676B: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x21;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E677F: ;
    ecx = esi;
    PUSH32(esp, 0x000E6786u); RECOMP_ABI_CALL(0x000E4BD0u, sub_000E4BD0); /* call 0x000E4BD0 */

loc_000E6786: ;
    goto loc_000E60DD;

loc_000E678B: ;
    PUSH32(esp, 0x3D7564);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6796u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6796: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E67BD; /* jne: not equal / not zero */

loc_000E679D: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x22;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E67B1: ;
    ecx = esi;
    PUSH32(esp, 0x000E67B8u); RECOMP_ABI_CALL(0x000E4840u, sub_000E4840); /* call 0x000E4840 */

loc_000E67B8: ;
    goto loc_000E60DD;

loc_000E67BD: ;
    PUSH32(esp, 0x3D7548);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E67C8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E67C8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E67EF; /* jne: not equal / not zero */

loc_000E67CF: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x23;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E67E3: ;
    ecx = esi;
    PUSH32(esp, 0x000E67EAu); RECOMP_ABI_CALL(0x000E47D0u, sub_000E47D0); /* call 0x000E47D0 */

loc_000E67EA: ;
    goto loc_000E60DD;

loc_000E67EF: ;
    PUSH32(esp, 0x3D752C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E67FAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E67FA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6821; /* jne: not equal / not zero */

loc_000E6801: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x24;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6815: ;
    ecx = esi;
    PUSH32(esp, 0x000E681Cu); RECOMP_ABI_CALL(0x000E4BF0u, sub_000E4BF0); /* call 0x000E4BF0 */

loc_000E681C: ;
    goto loc_000E60DD;

loc_000E6821: ;
    PUSH32(esp, 0x3D7520);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E682Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E682C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6853; /* jne: not equal / not zero */

loc_000E6833: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x25;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6847: ;
    ecx = esi;
    PUSH32(esp, 0x000E684Eu); RECOMP_ABI_CALL(0x000E48F0u, sub_000E48F0); /* call 0x000E48F0 */

loc_000E684E: ;
    goto loc_000E60DD;

loc_000E6853: ;
    PUSH32(esp, 0x3D7510);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E685Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E685E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6885; /* jne: not equal / not zero */

loc_000E6865: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x26;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6879: ;
    ecx = esi;
    PUSH32(esp, 0x000E6880u); RECOMP_ABI_CALL(0x000E49E0u, sub_000E49E0); /* call 0x000E49E0 */

loc_000E6880: ;
    goto loc_000E60DD;

loc_000E6885: ;
    PUSH32(esp, 0x3D7500);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6890u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6890: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E68B7; /* jne: not equal / not zero */

loc_000E6897: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x27;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E68AB: ;
    ecx = esi;
    PUSH32(esp, 0x000E68B2u); RECOMP_ABI_CALL(0x000E5F10u, sub_000E5F10); /* call 0x000E5F10 */

loc_000E68B2: ;
    goto loc_000E60DD;

loc_000E68B7: ;
    PUSH32(esp, 0x3D74F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E68C2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E68C2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E68E9; /* jne: not equal / not zero */

loc_000E68C9: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x28;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E68DD: ;
    ecx = esi;
    PUSH32(esp, 0x000E68E4u); RECOMP_ABI_CALL(0x000E4DF0u, sub_000E4DF0); /* call 0x000E4DF0 */

loc_000E68E4: ;
    goto loc_000E60DD;

loc_000E68E9: ;
    PUSH32(esp, 0x3D74E8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E68F4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E68F4: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E691B; /* jne: not equal / not zero */

loc_000E68FB: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x29;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E690F: ;
    ecx = esi;
    PUSH32(esp, 0x000E6916u); RECOMP_ABI_CALL(0x000E4EB0u, sub_000E4EB0); /* call 0x000E4EB0 */

loc_000E6916: ;
    goto loc_000E60DD;

loc_000E691B: ;
    PUSH32(esp, 0x3D74D4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6926u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6926: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E694D; /* jne: not equal / not zero */

loc_000E692D: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x2A;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6941: ;
    ecx = esi;
    PUSH32(esp, 0x000E6948u); RECOMP_ABI_CALL(0x000E4FA0u, sub_000E4FA0); /* call 0x000E4FA0 */

loc_000E6948: ;
    goto loc_000E60DD;

loc_000E694D: ;
    PUSH32(esp, 0x3D74C4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6958u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6958: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E697F; /* jne: not equal / not zero */

loc_000E695F: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x2B;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6973: ;
    ecx = esi;
    PUSH32(esp, 0x000E697Au); RECOMP_ABI_CALL(0x000E5010u, sub_000E5010); /* call 0x000E5010 */

loc_000E697A: ;
    goto loc_000E60DD;

loc_000E697F: ;
    PUSH32(esp, 0x3D74B8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E698Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E698A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E69B1; /* jne: not equal / not zero */

loc_000E6991: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x2C;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E69A5: ;
    ecx = esi;
    PUSH32(esp, 0x000E69ACu); RECOMP_ABI_CALL(0x000E5760u, sub_000E5760); /* call 0x000E5760 */

loc_000E69AC: ;
    goto loc_000E60DD;

loc_000E69B1: ;
    PUSH32(esp, 0x3D74A8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E69BCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E69BC: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E69E3; /* jne: not equal / not zero */

loc_000E69C3: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x2D;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E69D7: ;
    ecx = esi;
    PUSH32(esp, 0x000E69DEu); RECOMP_ABI_CALL(0x000E57D0u, sub_000E57D0); /* call 0x000E57D0 */

loc_000E69DE: ;
    goto loc_000E60DD;

loc_000E69E3: ;
    PUSH32(esp, 0x3D74A0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E69EEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E69EE: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6A15; /* jne: not equal / not zero */

loc_000E69F5: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x2E;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6A09: ;
    ecx = esi;
    PUSH32(esp, 0x000E6A10u); RECOMP_ABI_CALL(0x000E5830u, sub_000E5830); /* call 0x000E5830 */

loc_000E6A10: ;
    goto loc_000E60DD;

loc_000E6A15: ;
    PUSH32(esp, 0x3D7494);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6A20u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6A20: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6A47; /* jne: not equal / not zero */

loc_000E6A27: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x2F;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6A3B: ;
    ecx = esi;
    PUSH32(esp, 0x000E6A42u); RECOMP_ABI_CALL(0x000E5A40u, sub_000E5A40); /* call 0x000E5A40 */

loc_000E6A42: ;
    goto loc_000E60DD;

loc_000E6A47: ;
    PUSH32(esp, 0x3D7480);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6A52u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6A52: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6A79; /* jne: not equal / not zero */

loc_000E6A59: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x30;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6A6D: ;
    ecx = esi;
    PUSH32(esp, 0x000E6A74u); RECOMP_ABI_CALL(0x000E5860u, sub_000E5860); /* call 0x000E5860 */

loc_000E6A74: ;
    goto loc_000E60DD;

loc_000E6A79: ;
    PUSH32(esp, 0x3D7470);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6A84u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6A84: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6AAB; /* jne: not equal / not zero */

loc_000E6A8B: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x31;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6A9F: ;
    ecx = esi;
    PUSH32(esp, 0x000E6AA6u); RECOMP_ABI_CALL(0x000E5890u, sub_000E5890); /* call 0x000E5890 */

loc_000E6AA6: ;
    goto loc_000E60DD;

loc_000E6AAB: ;
    PUSH32(esp, 0x3D7464);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6AB6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6AB6: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6ADD; /* jne: not equal / not zero */

loc_000E6ABD: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x32;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6AD1: ;
    ecx = esi;
    PUSH32(esp, 0x000E6AD8u); RECOMP_ABI_CALL(0x000E5960u, sub_000E5960); /* call 0x000E5960 */

loc_000E6AD8: ;
    goto loc_000E60DD;

loc_000E6ADD: ;
    PUSH32(esp, 0x3D7454);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6AE8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6AE8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6B0F; /* jne: not equal / not zero */

loc_000E6AEF: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x33;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6B03: ;
    ecx = esi;
    PUSH32(esp, 0x000E6B0Au); RECOMP_ABI_CALL(0x000E59D0u, sub_000E59D0); /* call 0x000E59D0 */

loc_000E6B0A: ;
    goto loc_000E60DD;

loc_000E6B0F: ;
    PUSH32(esp, 0x3D7440);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6B1Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6B1A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6B41; /* jne: not equal / not zero */

loc_000E6B21: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x34;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6B35: ;
    ecx = esi;
    PUSH32(esp, 0x000E6B3Cu); RECOMP_ABI_CALL(0x000E5D90u, sub_000E5D90); /* call 0x000E5D90 */

loc_000E6B3C: ;
    goto loc_000E60DD;

loc_000E6B41: ;
    PUSH32(esp, 0x3D7430);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6B4Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6B4C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6B73; /* jne: not equal / not zero */

loc_000E6B53: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x35;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6B67: ;
    ecx = esi;
    PUSH32(esp, 0x000E6B6Eu); RECOMP_ABI_CALL(0x000E4410u, sub_000E4410); /* call 0x000E4410 */

loc_000E6B6E: ;
    goto loc_000E60DD;

loc_000E6B73: ;
    PUSH32(esp, 0x3D7424);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6B7Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6B7E: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6BA5; /* jne: not equal / not zero */

loc_000E6B85: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x36;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6B99: ;
    ecx = esi;
    PUSH32(esp, 0x000E6BA0u); RECOMP_ABI_CALL(0x000E5B00u, sub_000E5B00); /* call 0x000E5B00 */

loc_000E6BA0: ;
    goto loc_000E60DD;

loc_000E6BA5: ;
    PUSH32(esp, 0x3D7414);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6BB0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6BB0: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6BD7; /* jne: not equal / not zero */

loc_000E6BB7: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x37;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6BCB: ;
    ecx = esi;
    PUSH32(esp, 0x000E6BD2u); RECOMP_ABI_CALL(0x000E5BA0u, sub_000E5BA0); /* call 0x000E5BA0 */

loc_000E6BD2: ;
    goto loc_000E60DD;

loc_000E6BD7: ;
    PUSH32(esp, 0x3D7408);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6BE2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6BE2: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6C09; /* jne: not equal / not zero */

loc_000E6BE9: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x38;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6BFD: ;
    ecx = esi;
    PUSH32(esp, 0x000E6C04u); RECOMP_ABI_CALL(0x000E5C30u, sub_000E5C30); /* call 0x000E5C30 */

loc_000E6C04: ;
    goto loc_000E60DD;

loc_000E6C09: ;
    PUSH32(esp, 0x3D73F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6C14u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6C14: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E6C3B; /* jne: not equal / not zero */

loc_000E6C1B: ;
    MEM32(esp + 0x20) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x39;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6C2F: ;
    ecx = esi;
    PUSH32(esp, 0x000E6C36u); RECOMP_ABI_CALL(0x000E5CB0u, sub_000E5CB0); /* call 0x000E5CB0 */

loc_000E6C36: ;
    goto loc_000E60DD;

loc_000E6C3B: ;
    PUSH32(esp, 0x3D73EC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E6C46u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000E6C46: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x20) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_000E6C6D; /* jne: not equal / not zero */

loc_000E6C51: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x3A;
    if (TEST_Z(_fa, _fb)) goto loc_000E60DB; /* je: equal / zero */

loc_000E6C61: ;
    ecx = esi;
    PUSH32(esp, 0x000E6C68u); RECOMP_ABI_CALL(0x000E5D20u, sub_000E5D20); /* call 0x000E5D20 */

loc_000E6C68: ;
    goto loc_000E60DD;

loc_000E6C6D: ;
    if (raven_effect_sound_construct(esi, edi)) { eax = esi; goto loc_000E60DD; }
    if (xml1_lightning_event_construct(esi, edi)) { eax = esi; goto loc_000E60DD; }
    if (xml1_filter_event_construct(esi, edi)) { eax = esi; goto loc_000E60DD; }
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = 0x3B;
    if (TEST_Z(_fa, _fb)) goto loc_000E6C80; /* je: equal / zero */

loc_000E6C79: ;
    ecx = esi;
    PUSH32(esp, 0x000E6C80u); RECOMP_ABI_CALL(0x000E5460u, sub_000E5460); /* call 0x000E5460 */

loc_000E6C80: ;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    goto loc_000E60ED;

loc_000E6C8D: ;
    eax = eax - ebx;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    eax = MEM32(ebx + ecx * 4 + 0xC3DC);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}
