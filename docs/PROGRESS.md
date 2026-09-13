# XML1 Xbox bring-up

## Image and pipeline

- Supplied image: X-Men Legends (World).iso, 7,825,162,240 bytes.
- Extracted 293 files; source SHA256 recorded locally in analysis/iso.json.
- Retail title ID 0x4156001E, version 1, all regions; build timestamp 2004-08-15.
- Entry 0x001A1C97; kernel table 0x003C6BA0; 130 imports; XDK 5849.
- Includes D3D8, DSOUND, WMADEC, D3DX8 and XGRAPHC libraries; movies are SFD.
- Initial disassembly: 25,778 detected functions; code generation: 25,777 translated,
  one failed body at 0x00270007, 128 unresolved stubs, 2,446,525 generated C lines.
  Detection and translation counts do not prove instruction or function correctness.
- CPU/kernel diagnostic builds and executes the supplied game. It links the
  upstream runtime baseline, not the final DX8 implementation. No game imagery yet.

## CPU/kernel checkpoint, 2026-09-13

- Fixed infinite NtQueryVirtualMemory scanning: fail at the Xbox user-VMA upper
  bound and coalesce contiguous regions. Actual ordinal-217 bridge test passes,
  including stack cleanup and unchanged output on failure.
- Alchemy asks for exact virtual reservations above physical RAM. Upstream moved
  those requests into its low heap; XML1 rejected the changed address. Added
  reserve/commit/query/decommit/release metadata for the distinct extended map.
  Physical heap capped at 64 MiB; separate guest VA backing is 256 MiB.
- Reservation tests pass: exact address, conflicts, commit rounding, region
  queries, independent low/high storage, recommit, release/reuse and overflow.
  This is partial VM support: host page protections, strict total committed RAM
  accounting, below-RAM VM bookkeeping and concurrency remain to be completed.
- Verified 0x00342AA0 as overlap-safe CRT memmove. Its inline jump tables are
  misdecoded. A native cdecl replacement passes 108,290 overlap/alignment/zero-size
  vectors with full memory comparison, return value and stack cleanup checks.
  Use upstream PR #15's existing manual-function routing for this replacement.
- boot-008 reached over one million indirect calls and opened build.ini,
  z/assetsFB.zip and sounds/badaudio.wav. That exploratory run still skipped two
  unresolved functions; it is not proof of correct startup or asset parsing.
- Diagnostics now stop on every unresolved call. boot-009 stops at 0x0022E280,
  a verified function start missing from detection. Both it and 0x00194890 from
  the exploratory log are now verified and recovered through project seeds.
  0x00194890 has a clear SEH prologue following int3 alignment padding.
  Seed validation rejects a generation run if either entry is absent.
- Upstream Python suite after VM changes: 237 passed, 10 subtests passed.
- Toolkit changes preserved in patches/xboxrecomp-xml1-memory.patch against the
  exact submodule pin. setup.ps1 applies it idempotently. No upstream PR submitted.

No splash/FMV/menu/level screenshot milestone has been reached. Audio is unverified.

## D3D initialization and symbols

- boot-011, with fail-fast unresolved-call handling, reaches D3D initialization
  and stops at 0x0035E120 after 1,093,682 indirect calls.
- Pinned Cxbx XbSymbolDatabase 20eced544726f5558c5a408458f38a086cc4e543
  built as an independent CLI and scanned the supplied XBE. 301 named XDK function
  records recovered; only two lay outside existing detected function ranges.
- The stop is D3DDevice_SetRenderState_VertexBlend. Added it and the other missing
  D3D entry, SetRenderState_SampleAlpha, to the verified seed list (now six).
- Important recovered addresses: Direct3D_CreateDevice 0x003680D0,
  D3DDevice_Clear 0x00362430, D3DDevice_Swap 0x00368BE0,
  D3DDevice_SetRenderTarget 0x0035B3F0. Calling conventions are in local symbol output.
- scripts/scan-xdk-symbols.ps1 reproduces the scan. The scanner is an analysis
  dependency only; its source, original license and build stay under ignored work/.
- Six-seed build succeeds: 25,784 functions considered, 25,782 translated,
  one native manual replacement and one failed body; 128 unresolved stubs guarded.
- boot-012 passes the missing D3D entries and reaches assetsFB.zip and badaudio.wav
  loading with fail-fast handling enabled. Current stop is a null object call at
  guest return 0x0018C5BD in sub_0018C4F0, after 1,360,269 indirect calls.
  The object at 0x0057F4E4 has a null field at +0x438; investigate the producer
  through sub_0013C190 and sub_00138700. Guest stack includes ui/fonts/fonts_XBOX.
  Full 256-MiB guest diagnostic snapshot is local at build/guest-failure.bin.
  This is a resource-setup failure, not a rendering or gameplay milestone.

## Comparison joins, input, and first swap path

- The boot-012 null resource was caused by generated sub_00138160. Eight distinct
  comparisons converge on SETNE; the translator discarded their differing operand
  identities and emitted `_flags`, initialized to zero. Compatible CMP/TEST
  predecessors now share the existing runtime operand snapshots. Mixed operations,
  widths and unknown predecessors remain unmerged.
- Regression evidence: five Python join tests, plus 196 compiled/executed translated
  SETNE/CMOVNE vectors across both paths; upstream suite 242 passed, 10 subtests.
  Fix preserved separately in patches/xboxrecomp-flag-joins.patch. Both patches
  apply cleanly to the pinned checkout; setup applies both idempotently.
- boot-013 passes the resource setup, reads additional compressed assets, then
  reaches Xbox USB initialization. Seven verified XDK input entry points now use
  a native guest ABI shim over upstream Windows XInput, rather than Xbox USB drivers.
- `run-boot-probe.ps1 -TestPad` exposes a neutral virtual pad inside this process.
  The setter in guest_input.h can supply future scripted controls entirely within
  the target process. No desktop or OS input injection is used.
- Input test passes enumeration/change masks, opaque handle closure, 24-byte state
  serialization with neighboring memory guards, feedback completion event and
  stdcall cleanup. Its fake backend records zero host input/output calls.
- boot-014 with the process-local pad runs to its 20-second watchdog, at 2,496,705
  indirect calls. It waits in the D3D swap path: guest stack includes 0x00360100,
  0x0036828B, 0x00368BBF, 0x00368BDE, 0x00368C92, game return 0x001BD9CF.
  Device pointer 0x0036CB00; watchdog EDX 0x8007E000. See build/boot-014.log.
- Next: observe D3D state/draw submissions and implement genuine DX8 presentation.
  Neither frame submission nor a watchdog exit establishes visible/correct rendering.
  No real game screenshot or verified audio milestone yet.

## Genuine DX8

- System D3D8 is available to a 32-bit process; no 64-bit system DLL was found.
- Independent x86 probe loads only the system d3d8.dll, opens a hidden process-owned
  window and creates a D3D8 HAL device, then releases it and closes the window.
- Radeon 780M: VS 1.1, PS 1.4, eight texture stages/samplers reported.
- Windowed D3D8 requires the adapter display format; using D3DFMT_UNKNOWN returned
  INVALIDCALL. Using the queried display format succeeds (HRESULT 0).
- DX8 headers are the pinned mingw-w64 headers recorded under external/dx8-headers;
  original copyright notices and LGPL-2.1 text are retained.
- Graphics IPC, Xbox D3D8 interception, shaders, asset conversion, and actual game
  rendering remain pending. The probe is not a game screenshot milestone.
