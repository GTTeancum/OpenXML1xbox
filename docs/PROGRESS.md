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
- The initial capability probe is not a game screenshot milestone.

## First legal splash through genuine DX8 (2026-09-13 07:46 UTC)

- boot-018 captures 1,137 actual D3D calls before the first Swap wait, including
  two DrawVertices triangle strips: 4 and 3,648 vertices, FVF 0x142/stride 24.
- Optional XML1_TRACE_D3D observer retains transient matrices/viewports and the
  deferred texture/render state arrays. Vertex and texture bytes are copied at
  each draw, so subsequent game writes cannot change the recorded submissions.
- scripts/prepare-d3d-replay.py packages those submissions for the x86 DX8 worker.
  It checks the narrow supported path: fixed function, single DXT3 texture, strip.
  Other rendering paths are not implemented by this diagnostic.
- Native system D3D8 replays the game's matrices, vertices, texture stages, blend
  and depth states. The worker saves its own locked backbuffer; no desktop capture,
  OS input injection, asset viewer, or synthetic test scene was used.
- Visually inspected 640x480 result shows XML1 character artwork/logo and readable
  legal text. Posted the capture to the user. This is a diagnostic replay of the
  legal splash, NOT a live playable build or proof of graphical correctness.
- The repeat capture using draw-time resource snapshots has the same hash as the
  initial end-of-frame resource replay. Logs: build/boot-018-d3d-draw-payload.log;
  screenshot build/d3d-first-replay.bmp; ignored packet build/d3d-replay.bin.
- Xbox enum values checked against Cxbx XbD3D8Types.h at
  585c49a50af1255ab155099e06f24505f9c5a800: triangle strip=6, view=0,
  projection=1, world=6. Toolkit d3d8_xbox.h uses PC values for these and must
  not be used verbatim to decode the actual guest API.
- Fastcall SetRenderState_Simple emits NV097 methods without updating the guest
  state array; replay overlays observed methods. Depth function is 0x354 and
  blend equation 0x350 (the toolkit D3D11 file mislabels 0x354 as depth enable).
- Build succeeded, both actual draws returned successful HRESULTs, and the own
  backbuffer readback succeeded. No audio, FMV, menu or level 1 milestone yet.
- Next: connect live guest submissions to the DX8 worker, replace the GPU swap
  wait with real frame completion, then advance startup with fail-fast diagnostics.
  Goal remains active with the original 2026-09-14 12:14:26 UTC cutoff.

## Live DX8 presentation (2026-09-13 07:55 UTC)

- Added a persistent x86 system-DX8 worker connected to the x64 game through a
  process-specific local named pipe. The game packages actual draw-time state,
  textures and vertices; Swap returns only after the worker presents the frame
  and acknowledges it. This uses the upstream manual-function override mechanism.
- The worker owns its hidden render window and captures only its own backbuffer.
  A Windows job binds worker lifetime to the game process, including watchdog
  termination. Verified neither process remained after the bounded boot.
- Command: `scripts/run-boot-probe.ps1 -Seconds 20 -TestPad -LiveDX8`.
  Build the x86 worker in build/renderer and the Release game in build/project.
- boot-019-live-dx8.log: frame 1, two draws, 418,152 payload bytes; worker reports
  successful Present. Inspected and posted build/dx8-live-frame-000001.bmp:
  genuine live legal splash with XML1 art/logo/text.
- Startup continues loading assets and allocating audio objects after Swap.
  At the 20-second watchdog it is in DSOUND's DSP command path, with guest stack
  00372A0F/00372A89/0036F56A/0036F729/00370689/001900EB. This differs from the
  original GPU Swap wait. No second frame, FMV, menu or audio milestone yet.
- Narrow renderer limitations remain explicit and fail-fast: current strip/FVF
  0x142, single DXT3 texture, full black/depth-one clears before geometry. Other
  draw, texture, clear, swap-flag and selected state paths need implementation.
  Xbox swap callbacks/counters and subsequent GPU fence behavior are not yet
  validated. A successful first frame does not establish those semantics.
- Rechecked upstream branch and all-PR listings for audio/DSP/swap fixes:
  main is still 3706cefa; the only other branch is unchanged. Audio PRs 31 and24
  are already merged. The APU DSP source explicitly remains GP/EP passthrough;
  its optional doorbell ACK computes no DSP results. Do not mistake enabling
  that workaround for audio correctness. No ACK workaround was enabled here.
- Next: integrate actual audio processing / DSP command behavior to advance
  startup, while extending native DX8 support as new submissions are reached.

## DSP interpreter adapter (2026-09-13 08:02 UTC)

- Imported the pinned xemu DSP56300 C interpreter and DMA implementation under
  external/xemu-dsp with original notices/COPYING and a reproducible import script.
  Selected its C backend; no JIT/UI dependency and no dummy command acknowledgement.
- Standalone MSVC build succeeds. Executed 640 arithmetic vectors through the
  actual instruction decoder, bidirectional scratch DMA with guards, and DSP
  bootstrap masking. Test passes; this is adapter evidence, not audio correctness.
- Identified required integration: toolkit DSP state/API replacement, GP/EP MMIO
  and real frame processing, physical-memory routing across the separate contiguous
  mapping, and game-host APU initialization. See docs/AUDIO.md.
- Recorded user clarification: post screenshots only for new visible content.
  No new screenshot or additional gameplay milestone in this checkpoint.

## APU integration and upstream PR (2026-09-13 08:14 UTC)

- Opened upstream PR41 for compatible CMP/TEST metadata at control-flow joins.
  Isolated upstream test run: 165 passed, 10 subtests. User authorized PRs.
- Connected the full DSP interpreter to GP/EP reset, memory registers, scatter/
  gather DMA and frame processing; replaced the passthrough source in the root
  build. Optional -APU initializes the audio device and routes APU MMIO faults.
- New APU/DSP integration test passes register round-trips and real bootstrap
  across two SG pages. The 640-vector DSP test still passes in the combined build.
- boot-020/021 with -APU exercises MMIO and reaches a different DSOUND startup/
  cleanup loop, with 8007000E in the guest stack. The allocation/kernel/translated
  control flow must be traced before calling this an actual memory exhaustion.
  DSP correctness for the game and any audible output remain unverified.
- Toolkit changes are a third reproducible patch; clean apply check and repeated
  setup patch checks pass. No new screenshot, FMV/menu/level milestone yet.

## AC97 startup and kernel ABI fixes (2026-09-13)

- A process-local native probe located the actual wait in the AC97 channel-reset
  poll. The guest reads reset once before spinning; hardware must self-clear it.
  Implemented the startup register subset, with tests for all four channels,
  preserved interrupt enables, reset DMA registers and read-only status bits.
  This does not implement AC97 DMA advancement or interrupts.
- Fixed KfRaiseIrql/KfLowerIrql to take fastcall CL rather than stack arguments.
  Actual retail-thunk tests fail before and pass after, including stack cleanup.
- Fixed MmGetPhysicalAddress for the separately mapped contiguous RAM window.
  Actual retail-thunk tests prove conversion to physical offsets and unchanged
  low addresses. This removes the DSP scatter/gather bounds failure.
- Saved both kernel fixes as a fourth ordered toolkit patch. boot-025 now starts
  the APU, creates the audio worker and opens x_common.zsM before the interpreter
  rejects EXTRACTU immediate (0x0c1890 at DSP PC 0x0519). The prior 8007000E stack
  value was not evidence of memory exhaustion. No new visual/audio milestone.

## DSP EXTRACTU (2026-09-13)

- Implemented the encountered immediate instruction using NXP DSP56300FM Rev. 5,
  pages 13-72/73. Supports 56-bit extraction in normal arithmetic mode, clears
  C/V, updates E/U/N/Z and preserves S/L. Sixteen-bit arithmetic mode fails
  explicitly; register-controlled EXTRACTU remains unimplemented.
- 17,040 executed vectors pass a separate bit-by-bit reference, including field
  boundaries, both accumulators, aliasing, three scaling settings and flags.
  Existing 640 arithmetic vectors, DMA guards and bootstrap checks also pass.
- Changes reproduce through vendor-dsp.py from src/dsp_extractu.c.inc. The
  imported processor sources retain their license notices and document changes.
- boot-026/027 advances through the instruction and reads x_common.zsM, then
  stops on a Y-memory bounds failure at PC031e/op5ee800/address0fc9. R0=0fc2,
  N0=7; nearby program includes the literal R0 initialization. Diagnostics log
  the original failing state without suppressing the assertion. No new screen,
  audible-output validation or gameplay milestone.

## DSP program provenance (2026-09-13)

- Added a native dump of DSP program RAM at the original Y-memory assertion.
  boot-028 reproduces the failure and saves build/dsp-failure-program.bin.
- Program words 0310..0327 exactly match original XBE file offset 46f528.
  The R0 initialization at program 0317..0318 also matches XBE offset 46f544.
  Thus the observed 0fc2 literal is present in the shipped program, not introduced
  by this upload. This narrows the investigation but does not prove all program
  relocation, initialization, control flow or DSP memory mapping correct.
- The current C decoder interprets 5ee800 as MOVE Y:(R0+N0),A. The pinned xemu
  C and JIT integrations both map Y RAM only below 0800. Do not enlarge or wrap
  this mapping without evidence of actual hardware behavior or required setup.

## Stereo output settings and next GPU wait (2026-09-13)

- A bounded per-processor instruction history identifies the failing program as
  EP. Fixed the C backend's missing processor identity initialization and tested
  GP/EP identity after synchronization. The original bounds assertion remains.
- Toolkit XC_AUDIO returned 00010001, documented incorrectly as stereo plus AC3.
  Cxbx EmuEEPROM.h defines stereo=0, mono=1, AC3=10000. Our host uses two-channel
  PCM, so the fifth toolkit patch reports stereo PCM with no encoded capability.
  The settings API test passes and ordered patch idempotence checks pass.
- boot-030/031 no longer hits the EP assertion, loads x_voice.zsS and additional
  audio data, and reaches the watchdog in D3D sub_0035FDE0 (native RIP +2264).
  Source has a resource/fence completion poll at 0035FF17 and an event wait path;
  these need completion semantics tied to actual DX8 submissions.
- Existing DSP vectors pass with diagnostic history enabled. No new screen or
  audio-correctness claim. Encoded output remains unsupported and its DSP memory
  issue remains recorded rather than suppressed.

## GPU fence evidence (2026-09-13)

- boot-032/033 shows the live worker presented two frames before the wait.
  Both submissions have next fence=9 and completion=3. The wait targets fence9,
  flags10, called from003601C3, with zero pending native draw packets.
- The original InsertFence routine0035FD20 writes semaphore commands containing
  the current counter, records the fence/push-buffer pair and increments by2.
  The wait inserts a fence when its target equals the next counter. Completion
  is polled through device+30 (8007E000 here). The original flush0035FC00 is the
  relevant point to connect an acknowledgement for already submitted work.
- Captured the worker's first eight frames for diagnosis (still post only new
  content). Inspected frame2; it shows the same legal splash, not a new milestone.
- Do not simply skip the wait. Next implementation must tie fence signalling to
  native DX8 completion, including a flush without Present, and refuse unsupported
  pending work. Current Present acknowledgement alone does not update guest fences.

## Native completion and partial-frame batches (2026-09-13)

- Added XMLDX8F1 flush packets with independent acknowledgement sequence numbers.
  Worker completes submitted rendering through a blocking lock/unlock of its
  lockable DX8 backbuffer. Flushes do not Present or advance frame counters.
  After acknowledgement, guest completion receives the last inserted fence.
- Pending supported draws can be flushed as a batch. The worker preserves the
  current frame across batches and clears only when starting a new frame. The
  host rejects clears after any geometry in the frame, even after batch flush.
- Native whole-frame versus two-batch test passes byte-for-byte, hash7168533f...
  (scripts/test-dx8-batches.py, build/test-dx8-batches.log). This validates the
  observed splash path, not general rendering or all Xbox GPU command semantics.
- boot-035 passes the prior fence wait and presents over180 frames, then stops
  at ICALL0011F170. Vtable003DAD3C slot8 points to this valid function; verified
  original prologue sub esp,48 after embedded jump-table bytes. Added seed for
  complete disassembly/regeneration. No new visual or audio-correctness milestone.
- Regeneration and native build completed. boot-036 passes0011F170 and enumerates
  UDATA/4156001e before stopping at the fail-fast unresolved sub_000BE01A.
  Investigate that target's original bytes/caller before choosing a seed or alias.
