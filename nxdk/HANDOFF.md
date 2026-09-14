# NXDK proof-of-concept handoff

## Status and scope

Accepted by the user on 2026-09-14 as sufficient proof of concept. The requested
three-hour experiment started at 20:09:44 UTC and was stopped early at the user's
request, around 22:18 UTC; checkpoint cleanup finished afterward.

The existing XML1 XboxRecomp C compiles to native i386 with NXDK and has run the
first street scene, movement, combat, HUD, and menus in XEMU. This establishes an
XML1-specific target, not full-game compatibility or a general NXDK backend for
every XboxRecomp title. It does not implement the previously discussed Wii/MUA2
port. The native C still models guest registers, stack addresses, and calling
conventions. Compiling for x86 does not remove those semantic requirements.

The original Xbox D3D/DirectSound code is compiled into this target. There is no
Dolphin, SDL renderer, desktop D3D8 worker, or D3D11 translation layer in the link.
XEMU is used to test the XBE; it is not needed on an actual Xbox.

## Published revisions

| Repository/revision | Purpose |
| --- | --- |
| `GTTeancum/OpenXML1xbox`, branch `nxdk-port` | Main published target |
| `387e90d` | Snapshot of the existing project's working state |
| `df8b1fc` | Initial native target and runtime bridges |
| `9e832f2` | CPU/skinning, title identity, section and longjmp work |
| `b956975` | Tested asynchronous I/O APC bridge |
| `6b788be` | Points the submodule to its published fork |
| `GTTeancum/xboxrecomp`, `cd49783`, branch `xml1-nxdk-snapshot` | Generator LOOP fix, atop inherited snapshot `eac02c2` |

The `.gitmodules` URL points to the fork that contains the required commit.
The original XboxRecomp baseline was `3706cefa416aedea6d10c87ced805f89576560c4`.
Do not update the submodule to upstream HEAD as a routine setup step.

## Reproduction boundary: Git alone is not enough

```powershell
git clone --branch nxdk-port --recurse-submodules https://github.com/GTTeancum/OpenXML1xbox.git OpenXML1-NXDK
cd OpenXML1-NXDK
```

This fetches the support source and pinned dependencies. It does **not** fetch
the following private inputs, which were copied from the existing XML1 project:

| Required local path | Contents/use |
| --- | --- |
| `src/recomp/gen/` | Complete validated generated C and headers; retain the whole directory |
| `analysis/default_analysis.json` | Entry point, title ID, original kernel imports |
| `analysis/disasm/functions.json` | Function boundaries used to regenerate the two graphics adapters |
| `analysis/abi/abi_functions.json` | Their original calling conventions |
| `XBOXgame/` | Original extracted executable and complete asset tree |

The original executable SHA-256 is
`2ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac`;
title ID `0x4156001E`, entry point `0x001A1C97`. These are specific to the supplied
XML1 image. A different executable needs its own analysis and validation.

`generated-manifest.json` records hashes of the prepared C files, not the complete
private input archive. The Git baseline commit does not contain the ignored C.
The validated local copy is `D:\Programming\GitHub\OpenXML1-NXDK`.
Preserve or privately back up these inputs before removing that local copy.

The inherited `scripts/generate-code.ps1` is a Windows-project pipeline using
`game/default.xbe`, `.venv`, and ordered project guards. A complete fresh
regeneration from only a clean clone plus the original disc was **not tested**
during this experiment. Do not represent that script as a validated one-command
NXDK bootstrap. The validated path starts from the copied generated C and uses
`nxdk/build.ps1 -Prepare` to adapt it.

## Environment and build

Tested environment: Windows PowerShell, Python 3.12 with the existing XboxRecomp
Python dependencies (including Capstone), MSYS2 Clang 21.1.8, and a built NXDK
checkout at `C:/nxdk`, revision `fb5a9a7a58a431e8d70a9e7da87898059df376c0`.
The compiler target is `i386-pc-win32`, `-march=pentium3`.

The scripts currently contain machine-specific paths:

- `build.ps1`: `C:/msys64`; it sets `MSYSTEM=MINGW64` and uses Clang64 tools.
- `build.sh`/`Makefile`: default `C:/nxdk`.
- `prepare.py` and `generate_kernel.py`: `C:/nxdk` source/header paths.
- `run-xemu.ps1`: `C:/Games/Emulators/Xemu`, its BIOS/MCPX/EEPROM/HDD layout,
  and the installed NXDK `extract-xiso` tool.

Changing only `NXDK_DIR` does not make every preparation script portable. Adapt
all relevant paths on another machine. No shared NXDK source was patched;
the modified cxbe host tool lives under `nxdk/tools/cxbe`.

With private inputs restored and dependencies built:

```powershell
New-Item -ItemType Directory -Path work -Force | Out-Null
& nxdk/build.ps1 -Prepare
& nxdk/stage-assets.ps1
```

Preparation preserves gameplay C, restores the original Swap and vblank entry
points, applies the verified native adaptations, and generates kernel wrappers.
After source changes, use `& nxdk/build.ps1`. Check the exit status and
`work/nxdk-build.log` before running; a failed build may leave an older XBE.

The playable layout is `nxdk/bin/default.xbe` beside `guest.xbe` and the original
asset directories. `guest.xbe` supplies original data/metadata; it is not executed
as the game. Do not overwrite the compiled `default.xbe` with the retail one.
Staging copies assets without deleting destination files. Git excludes game
assets, generated C, XBE/ISO build products, and local captures.

## Runtime/source map

| File | Responsibility and important constraint |
| --- | --- |
| `main.c` | Load original data, initialize contexts, run self-tests, enter generated startup; entry returning is expected because the game creates a thread |
| `context.h`, `prepare.py` | Thread-local guest register bank; generated functions cache the bank once per activation |
| `memory.c` | Native code starts at `0x01000000`; original `0x10000..0x1ffff` is shadowed, higher original addresses identity mapped; guest stacks/TLS and section reloads |
| `kernel.c`, `generate_kernel.py` | Explicit guest ABI wrappers; native thread creation, data imports, IRQ/DPC/APC adapters; `kernel-coverage.json` is the current service inventory |
| `callbacks.c` | Eight preallocated interrupt contexts with 64 KiB guest stacks; native FXSAVE/FXRSTOR and kernel CR0 requirements |
| `runtime.c` | Guest call preservation, ordinary longjmp bridges, diagnostics, original memmove replacement; SEH-crossing longjmp is unsupported |
| `generate_graphics.py`, `services.c` | Original native graphics entry points, swap telemetry and native service hooks |
| `input.c` | Native USB/XID, four-pad bookkeeping, rumble, explicitly opt-in process-local test pad |
| `math.c` | Native math replacements for NXDK library gaps |
| `selftest.c` | Actual generated-code and native kernel boundary tests |
| `tools/cxbe` | Preserve high PE base and import original title identity/key metadata into the native certificate |

Keep `-fno-strict-aliasing` and `-fwrapv`: the generated C depends on type-punning
and wrapping behavior. `kernel.c` and `callbacks.c` disable compiler-generated
SSE/MMX before native interrupt FPU state has been saved. The guest register bank
does not substitute for saving the native compiler's FPU state.

The original XDK startup's GDT manipulation is replaced with descriptor
bookkeeping that preserves NXDK's native code segment. Verified CPUID, cache
flush, and interrupt instructions are restored only in identified routines.
Do not blindly execute instructions decoded from embedded data as real code.

## Evidence and verification scope

| Check | Result / limit |
| --- | --- |
| Native build | 32-bit XBE, 31,797,248 bytes |
| Main menu / first street | Artwork, text, world geometry/textures, character and HUD inspected |
| Gameplay | Movement, enemy attacks, player combat, objective UI, defeat and empty load-game UI inspected; no complete level/playthrough claim |
| SSE skinning | CPUID exposed spikes; missing LOOP decrement/back-edge fixed in generator and copied output; multi-bone numerical test and corrected character image pass |
| Generated-code tests | memcpy/tail/ABI, x87 math, thread isolation, FPU save/restore, nested longjmp, sections, CPUID, skinning and certificate identity pass |
| Interrupt boundary | Real timer/DPC enters generated code and preserves interrupted state |
| I/O APC boundary | Real asynchronous read of `guest.xbe`, callback into generated C, register preservation and 80 failed-request cleanup checks pass; no save-game round trip claim |
| Generator tests | `python -m unittest tools.recomp.test_lifter_loop tools.recomp.test_lifter_sse -q` from submodule: 18 pass |
| Preparation | `python nxdk/check-preparation.py`: content-idempotent across 114 generated/support files |
| Memory configuration | Gameplay tested with 128 MB in XEMU; 64 MB ran out during DirectSound initialization |
| Audio | Process-specific recording established output; quality not signed off |

Final rebuilt XBE SHA-256:
`c5f39c830f214d04d6081ba9291b732064f5f2dcc7f5162c4d732ab662ac3616`.
Its section payloads exactly matched the executed APC build (whole-file hash
`403a8b5375ff1b74df3a2bad9eaadf016f31f1919c21724585515ee1d748f2a3`).
Do not treat a whole-file hash difference after relinking as a gameplay result;
cxbe metadata can change.

Local evidence is under `work/nxdk-xemu/`: `skinning-fixed` contains corrected
menu/street/combat captures; `io-apc/guest.log` contains the final native test
results; `combat128` contains the earlier attack/knock-up capture. `run.json`
records executable hash, PID, memory and time. Captures remain local by project
policy; published results above describe what was actually inspected.

## Repeating a test and diagnosing failures

Follow the commands in [README.md](README.md#isolated-emulator-tests). Use a unique
run name, `-MemoryMiB 128`, and only one instance on QMP 46370/GDB 46371. The tested
emulator was XEMU 0.8.136 with debug BIOS 4627 and MCPX 1.0. Firmware/HDD files are
external prerequisites. The script copies EEPROM per run and uses a fork-local
HDD copy. It does not alter another emulator instance's files.

1. Read `qmp.py logs` using that run's saved `xml1.map`. A newer map may address
   unrelated memory in an older running executable.
2. Confirm self-tests passed, then use `testpad.py connect`. At the main menu,
   `a` starts the story. `start` can skip movies or open pause depending on state;
   inspect between transitions instead of assuming every press did the same thing.
3. `testpad.py move-up --hold 1` and bounded attack commands operate only the
   opt-in buffer in the emulated process. They do not test a physical controller.
4. Use `capture-native.py` with the PID in `run.json` and inspect the resulting
   image. It requests XEMU's own framebuffer capture. No host input or desktop
   capture is permitted. Swap counts alone do not prove correct output.
5. Use `inspect-native.py` and kernel/source logs for exceptions. A guest failure
   at elevated IRQL must not call blocking UI or sleep routines.
6. Close only the test instance with `python nxdk/qmp.py quit`.

The COM1 log was not the reliable diagnostic channel in these tests; the in-memory
log read through QMP was. Original entry returning with EAX=1 is not by itself a
failure. Some black movie/subtitle transitions were also seen with the retail
executable under the same emulator; their presence alone does not isolate a port
defect. No blanket movie/audio equivalence was established.

## Remaining work, in practical order

1. Preserve the private input snapshot; validate and document a complete clean
   generation pipeline before treating the Git repository as self-sufficient.
2. Continue first-level and later-level gameplay, reloads and scene transitions;
   exercise actual save/load round trips and title identity compatibility.
3. Validate physical USB controllers/rumble and actual Xbox execution. Hardware
   performance and stock 64 MB operation are unverified; RAM/speed were explicitly
   set aside for the initial experiment.
4. Investigate audio quality and movie transitions with equivalent retail scenes.
5. Implement reached unsupported paths, preserving diagnostics and regression
   cases. Twelve kernel imports remain unsupported: HalReturnToFirmware,
   RtlRaiseException, HalInitiateShutdown, DbgPrint, RtlUnwind, KeBugCheck,
   IofCompleteRequest, IoCreateDevice, IoInvalidDeviceRequest, IoStartPacket,
   IoStartNextPacket and IoMarkIrpMustComplete. Unresolved generated function
   stubs also remain. The plain LOOP fix does not implement the entire LOOP family.
6. Address inherited unmodelled instruction/flag paths as they are reached.
   An experimental blanket diagnostic guard was removed before the accepted
   checkpoint; do not assume every inherited silent fallback now traps.
7. Revisit physical section reclamation, finite callback tables, exception cleanup,
   multiplayer and long-duration stability as their real usage becomes measurable.

Do not describe this checkpoint as a completed port, stock-hardware validation,
or proof that other titles can use the runtime unchanged. It is concrete evidence
that this existing XML1 C can be made to execute natively through NXDK.
