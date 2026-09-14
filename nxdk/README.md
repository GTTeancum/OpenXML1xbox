# XML1 NXDK target

See [HANDOFF.md](HANDOFF.md) for the published checkpoint, private input
requirements, source map, measured results, and prioritized remaining work.

This fork compiles the existing XML1 generated C into a native original-Xbox
XBE using NXDK's `i386-pc-win32`, `pentium3` target. It has reached the first
street scene in xemu, with movement, enemy attacks, player attacks, HUD,
menus, and objective display observed. This is an experimental port, not a
finished or full-game-validated release.

The active original project at `D:/Programming/GitHub/OpenXML1xbox` is not
modified. Its copied working state is preserved in baseline commit `387e90d`;
the inherited XboxRecomp changes are in submodule commit `eac02c2`.

## Build on this machine

Prerequisites are the copied private generated C and analysis files, original
extracted XML1 files in `XBOXgame`, Python with the existing XboxRecomp
dependencies, `C:/nxdk`, and the MSYS2 Clang tools in `C:/msys64`.
The tested NXDK checkout is `fb5a9a7a58a431e8d70a9e7da87898059df376c0`.

From the fork root in PowerShell:

```powershell
& nxdk/build.ps1 -Prepare
& nxdk/stage-assets.ps1
```

`-Prepare` adapts the existing generated C and creates the kernel wrappers.
It lifts only two original D3D entry points that the desktop project had
replaced: Swap and the vertical-blank wait. It does not regenerate gameplay.
After preparation, `& nxdk/build.ps1` performs an incremental build.
The underlying MSYS command is `bash nxdk/build.sh`.

The executable is `nxdk/bin/default.xbe`. The staged directory also needs
`guest.xbe` (the original executable used as a data image), all original
game assets, and the directory layout copied by `stage-assets.ps1`.
Do not copy the original `default.xbe` over the compiled one.

## What runs on Xbox

- Existing gameplay C and the original Xbox D3D/DirectSound code are compiled
  for i386. There is no Dolphin dependency or desktop renderer in this link.
- The original Xbox graphics path submits to the console GPU. This target
  does not translate desktop DirectX calls back into Xbox graphics calls.
- Native code is linked at `0x01000000`. Original guest addresses above
  `0x20000` remain identity mapped; the first 64 KiB of the original image
  is shadowed because the native XBE owns the loader header at `0x10000`.
- Guest registers, floating-point state, stacks, and guest TLS are separate
  from the native C execution context. Guest threads use real Xbox threads.
- Kernel imports have explicit guest-ABI adapters. GPU interrupts and DPCs
  enter generated C through preallocated register/stack contexts, preserving
  native FPU state and the Xbox kernel's DPC return requirements.
- USB/XID controller reads and rumble use NXDK's native USB driver.
- The loader maintains original section references and reloads original bytes
  when a section is reacquired. The original address span remains physically
  committed; section unload does not yet reclaim physical pages.

The local cxbe copy preserves the linked PE base and permits the RAM actually
installed in the target. Its `-TITLECERT` option imports the original title ID,
alternate IDs, version, and title key material so the native kernel and guest
agree on the title identity. The port's display name and homebrew media/region
permissions are retained. The shared NXDK installation is not patched.

The target disables strict-aliasing optimizations and enables signed wrapping
to match the generated code's memory/type assumptions. Verified CPU-detection,
cache-flush, and interrupt-masking instructions are restored for native Xbox.

## Verification and limits

Boot-time tests execute an actual generated XML1 memcpy and CRT setjmp, check
guest ABI and stack restoration, native thread isolation/cleanup, x87 math,
nested virtual FPU saves, nested native longjmp, section reload/reference
behavior, CPU detection against native CPUID, weighted SSE skinning against
independently calculated vertices, matching title metadata, and entry into generated C from
a real kernel timer/DPC. `python nxdk/check-preparation.py` also checks that
preparing an already prepared tree preserves all generated source contents.

File read/write, directory enumeration, and file/device control adapters also
bridge guest I/O APC callbacks on the issuing native thread. A target test
performs a real asynchronous read from `guest.xbe`, dispatches its completion
into generated C, checks register preservation, and verifies that 80 failed
requests do not exhaust the callback table. Save-game round trips remain untested.

The native CPU feature path exposed a missing `LOOP` counter decrement in
the original generated SSE skinning routine. XboxRecomp commit `cd49783`
fixes the generator; preparation applies the same correction to the copied
gameplay C. The corrected path has been checked in the first street scene.
The generator's LOOP and SSE suites pass with:
`python -m unittest tools.recomp.test_lifter_loop tools.recomp.test_lifter_sse -q`
from `external/xboxrecomp`.

The tested gameplay configuration is **128 MB in xemu**. A 64 MB test exhausted
memory during DirectSound initialization. No stock 64 MB or physical-console
playability claim is made. The user requested that RAM and processor-speed
differences be set aside for this initial porting task.

`kernel-coverage.json` distinguishes reviewed native adapters, manual bridges,
native data imports, and unsupported services. Twelve imports still stop if
called: firmware/shutdown, exception/unwind/debug paths, and several original
device-driver services. Ordinary longjmp is implemented; crossing registered
SEH frames stops rather than silently skipping their cleanup. Unresolved
generated-function stubs also remain explicit failures.

Physical USB controller/rumble behavior, saves/loads, all levels, multiplayer,
and hardware performance have not been fully validated. Process-specific audio
recordings establish output, but audio quality is not signed off. Some black
video/subtitle transitions were also observed with the retail executable in
the same emulator; retain that distinction when investigating rendering.

## Isolated emulator tests

```powershell
& nxdk/run-xemu.ps1 -RunName my-test -MemoryMiB 128
python nxdk/qmp.py logs --map work/nxdk-xemu/my-test/xml1.map --path work/nxdk-xemu/my-test/guest.log
python nxdk/testpad.py connect --map work/nxdk-xemu/my-test/xml1.map
python nxdk/testpad.py a --map work/nxdk-xemu/my-test/xml1.map
python nxdk/telemetry.py --seconds 5 --map work/nxdk-xemu/my-test/xml1.map
python nxdk/qmp.py quit
```

Use a unique run name. Each run preserves its XBE hash, linker map, config,
EEPROM, and logs in `work/nxdk-xemu`. It uses a fork-local copied HDD image and
ports 46370/46371; run only one of these test instances at a time.
`-RetailOracle` selects the copied original executable for comparison.

The test controller is disabled by default. The harness writes only its
explicit buffer inside the emulated Xbox's RAM. It never sends host keyboard,
mouse, or controller events. The native controller path remains available
without the harness. `capture-native.py` requests xemu's own framebuffer
screenshot using the PID from the run manifest; it does not capture the desktop.

Swap telemetry measures submissions, not visual correctness or physical-Xbox
performance. Inspect the actual emulator captures for the tested behavior.
Use the map saved with a run after rebuilding; current-build addresses may
differ from those in a still-running executable.
