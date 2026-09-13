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

## Immediate-reference boundary repair and first movie open (2026-09-13)

- 000BE01A is the original epilogue inside000BDFD0. A weak immediate candidate
  at000BE000 landed inside the test instruction at000BDFFF and split the real
  function. Reject such candidates unless existing prologue/constant-return/
  virtual-thunk probes provide evidence that the sweep was misaligned.
- A synthetic regression fails before and passes after; all37 disassembler tests
  pass in an isolated checkout. A first stricter version lost a real constant
  callback002B8AD0; the revised rule retains it and tests both thunk exceptions.
- Regeneration confirms000BDFD0 now ends at000BE01F and the callback remains.
  boot-038 passes saved-game enumeration and opens movies/ntsc/i/1/i102.sfd.
  Three workers encounter unresolved target00345453; no FMV rendering yet.
- Saved as the sixth ordered toolkit patch; idempotence checks pass. The isolated
  fork branch is pushed. GitHub PR creation returned server errors/HTTP502, and
  read-back checks show no PR, so creation needs a later retry. See UPSTREAM-REVIEW.

## Movie worker entry and callback ABI diagnosis (2026-09-13)

- Verified00345453 is a separate CRT worker entry: push0xc, push scope table,
  call SEH prologue003432A8. Discovery had merged it after00345449. Added the
  eighth explicit seed, regenerated and rebuilt successfully.
- boot-039 enters workers and opens the movie, then attempts invalid callback
  targets3 and005EF620. These are not missing code entries to seed.
- Added a reproducible process-local callback contract check to guard-generated.py
  at the actual cdecl dispatch call0030BBE7. boot-040 catches the first violation:
  callback0030C0F0 returns ESP0125BF58 instead of0125BF54 and changes ESI from
  005BF8F8 to0030FFA4. This explains later invalid callback-table reads.
- 0030C0F0 calls0030FF50, whose final nested call at0030FF9F targets003072A0
  (return0030FFA4). Inspect nested stack/callee-save behavior before any workaround.
  No FMV frame or audible-output milestone. Another upstream PR retry still
  returned a GitHub server error; the tested fork branch remains ready.


## Kernel dispatch race and movie graphics formats (2026-09-13)

- Deterministic interleaving of two actual kernel lookups reproduced the movie
  worker stack corruption: thread A selected KfRaiseIrql, thread B selected
  MmGetPhysicalAddress, then A invoked the wrong service and popped an extra
  stack word. build/kernel-thread-before.log records ESP+8 instead of+4.
- Made g_kernel_dispatch_slot thread-local, matching guest register storage.
  The same test now passes with the correct service, IRQL, return and cleanup
  (build/kernel-thread-after.log). Saved as the seventh ordered toolkit patch;
  all seven reverse-application/idempotence checks pass. Nested ABI diagnostics
  remain enabled; boot-043/044 no longer fail on the prior callback contract.
- boot-043/044 reach decoder callback00395C20. The runtime bytes match the
  original PSFD_I section at raw384000; a preliminary inspection crossed the
  preceding section boundary and incorrectly read disk padding. Added the
  verified entry, regenerated and built; boot-045 passes it and next reaches
  callback00396920, the original PSFD_P entry (raw386000). Its runtime prefix
  also matches; the tenth seed regenerated and built successfully.
- Extended native DX8 packets to v2 for FVF102/stride20 and swizzled ARGB8888
  textures, retaining v1 replay compatibility and the existing DXT3/FVF142 path.
  Uses the toolkit's CPU unswizzle helper, then native D3D8 ARGB upload.
  Whole-frame, split-batch and v2 splash captures match exactly. Known-color
  ARGB replay produces identical pixels with FVF142 and102. boot-045 passes the
  new draw path; no FMV, menu, level1 or audio-fidelity milestone yet.
- Upstream boundary PR creation succeeded: sp00nznet/xboxrecomp#42. No duplicate
  PR was present before the successful retry. Comparison-join PR remains#41.

- boot-046 passes both recovered PSFD entries and the added draw path, stopping
  at callback00336970. Native capture of every presented frame reached frame225;
  the final capture was visually inspected and is black, not an FMV milestone.
  No duplicate splash or black screenshot posted. The cross-thread kernel test
  still passes after the final regeneration/build. Next: verify00336970 against
  original bytes and diagnose this worker callback before another seed.


## Decoder callback recovered; movie fidelity and lifetime diagnosis (2026-09-13)

- Verified00336970 against original/runtime bytes and its three initializer
  stores into decoder field12FC (00325462/0032616E/0032617F). Added seed11,
  regenerated and built. boot-047 now reaches the30-second watchdog instead of
  a missing decoder function, presenting through frame422. Final native capture
  remains black; no screenshot posted.
- An asset-free kernel-dispatch regression now uses synthetic imports103/151.
  It fails before the TLS change (wrong ordinal151, ESP20008) and passes after
  (ordinal103, ESP20004). Isolated upstream checkout also builds/passes CTest.
  Submitted upstream PR43, commit8a40793, including test/CMake/README.
- boot-048/049 instead hit null callbacks at00322E18/00322E8F. Guest dump shows
  stream object005E9100 entirely cleared, not a legitimate missing code target.
  Added narrow lifetime observations at0030EF30/60/90. boot-050 confirms clears
  from worker callback00307254 and main cleanup00322CED, followed by refcount
  releases0030C161/003137D6. Diagnose synchronization/lifetime before patching
  null dispatch or suppressing destruction.
- Added native submission texture statistics. Early movie textures are all zero;
  later ones show only1280 nonzero-alpha pixels in1024x512 textures, occasionally
  a few hundred nonzero RGB pixels. This suggests incomplete decoded/copy output;
  full-frame output/fidelity is unproven. It is not evidence of a renderer-only
  color problem. No FMV milestone claimed.
- boot-050 advances through i102,i101,i103,i104,i105.sfd and then stops at unresolved
  main-thread callback00184FD0 (not yet validated/seeded). Other runs wait in
  original GPU FIFO/fence routines: boot-047 guest stack includes0035FEBF,
  00360184,00361262; current abstract completion may not cover FIFO consumption.
- Local ffprobe identifies i102.sfd as640x480 MPEG1 video at60000/1001 with two
  ADX audio streams, duration10.403267s. Finishing multiple intros in a short
  probe is not a playback correctness claim. Next investigate incomplete image
  transfer and worker lifetime/timing alongside the new game callback.


## Full-height movie conversion and first partial main menu (2026-09-13)

- XbSymbolDatabase identifies XGSwizzleRect at003A6D39. Instrumented calls use
  correct1024x512 destination and640x480 source rectangles. Added --swizzle-test
  executing the original generated function against an independent Morton
  address reference, full/partial rectangles and the F2000000 write-combined
  alias read back through82000000. Tests pass before and after the next fix.
- Source buffers before swizzling contain only2 populated rows; the incomplete
  image is upstream of the swizzle. Added opt-in XML1_MOVIE_WATCH, a one-shot
  PAGE_GUARD on this process's own pixel buffer (no UI/input/capture APIs).
  Deferred symbol reporting identifies the writer without logging in the handler.
  First-page watch caught a metadata read; the second-page watch in boot-056
  caught a write in sub0032B8A0+19E4, the original MMX YUV-to-ARGB converter.
- Its outer loop does ADD, MOV, DEC, MOV, JA. DEC preserves the carry from ADD;
  the generated JA used uninitialized fallback_flags=0 and stopped after one
  two-row iteration. Added INC/DEC unsigned conditions using retained carry and
  new zero result, plus carry-demand detection in the translator.
- Synthetic native regression fails before and passes after:2744 INC/DEC cases
  plus196 prior join cases =2940. Local recompiler suite173 passed/10 subtests;
  isolated upstream suite168 passed/10 subtests. Saved as ordered patch8, with
  all patch idempotence checks passing. Submitted upstream PR44, commit6f7689c.
- Regenerated/build successful. boot-057 reports480 populated rows and307200
  nonzero-alpha pixels, with139295/198836 colored pixels in first movie buffers.
  Native movie captures201/243 were visually inspected: very dark early fade
  images, not recognizable FMV artwork to post. Playback advances far too quickly
  through five intros, so timing/lifetime and full decoder fidelity remain open.
- Verified and seeded00184FD0 (seed12) after original prior ret4. Startup now
  reaches a new two-texture draw (primitive6, FVF142, stride24,48 vertices).
  Native DX8 currently refuses it. Before that stop, frame407 contains the
  main menu text: Begin Story, Load Game, Danger Room, Options, Review, Credits.
  This is a PARTIAL menu; background/later draw and interactivity are unverified.
  Capture copied unchanged to outputs/xml1-dx8-main-menu-partial.bmp and posted
  as new content. No claim of complete menu, FMV fidelity, audio or playable level1.
- Next: implement the observed second texture stage with native DX8, while
  retaining the movie timing/lifetime defects as required work, not skipping FMVs.

## Native menu geometry and fixed-function rendering (boot058–071)

- Added indexed triangle strips using original stream/base/index data; normals,
  materials and directional lights; L8/A8 texture formats; a second texture
  stage with generated normal coordinates and original texture matrices.
  Shared FVF stride handling covers the observed 12/102/112/142/152 layouts.
- Version4 replay packets carry the additional state. Ordered Clear commands
  flush preceding geometry before applying native DX8 depth/stencil/color clears.
  Partial color-channel clears remain explicitly unsupported.
- Native regression: splash pixels match across whole/split batches and wire
  versions1–4, including a depth-only clear between batches. Known ARGB colors,
  enabled/disabled directional light and red material, and second-stage texel
  selection through transformed normal coordinates all pass (dx8-v4-test.log).
- boot069 first renders the metallic menu logo; capture407 copied unchanged to
  outputs/xml1-dx8-menu-logo.bmp and posted once. boot071 runs25 seconds through
  frame780, rendering menu background geometry, then ends at diagnostic bound3.
  Background shading is not yet validated. No level1/playability claim.
- Texture mip chains currently transmit only the base level and remain required
  fidelity work. boot061 also ended with an AV after prolonged partial-menu
  rendering; this has not been established resolved. Movie timing/lifetime and
  audio correctness remain open. Next: process-local Begin Story input harness.

## Begin Story and IDE queue crash (boot072–073)

- Added opt-in XML1_TEST_A_FRAME (requires XML1_TEST_PAD=1), issuing one A press
  for12 presented frames entirely inside the game process. Extended synthetic
  input test verifies press/release payloads and zero host input/output calls.
- boot072 atframe600 selects Begin Story and loads NYC sound assets, then hits
  the same fault as boot061: sub0034D2C7 reads guestFFFFFFC9 on an audio thread.
  Original close code walks IdexChannelObject.DeviceQueue.DeviceListHead at+28.
  The kernel export contained null links; its old16-byte slot also overlaps
  XboxSignatureKey at those offsets. Moved it to separate reserved storage and
  initialized an empty circular list, matching host-backed I/O with no guest IRPs.
- Synthetic import regression fails before and passes after, locally and in an
  isolated upstream build. Saved ordered patch9 and submitted upstream PR45.
  boot073 passes the crash, loads NYC/Wolverine/Cyclops assets, and reaches a
  renderer refusal atframe654 (culling/stencil/fill/blend state). Still no playable
  level1 or full audio/graphics fidelity claim. Movie timing remains unresolved.

- boot074 identifies the next state as Xbox cull0900 (clockwise). Native CW/CCW
  mapping passes an opposite-side plane test. boot075 then reaches triangle fan7.
  Version5 packets carry primitive type, preserving original fan/index ordering.
  Native regression confirms an equivalent fan and strip have identical pixels;
  earlier batching, lighting, texture-stage and culling tests still pass.

## First level1 native frame (boot076)

- Native capture653 shows Wolverine standing in the NYC environment, including
  street geometry, trees, fences, vehicles and a question-mark marker. Copied
  unchanged to outputs/xml1-dx8-level1-first.bmp and posted once as new content.
  This is a first rendered scene, not yet sustained gameplay/fidelity validation.
- The following frame stops at triangle-list primitive5,18 vertices. Added
  native triangle-list mapping with count divisibility validation; regression
  confirms equivalent list, strip and fan capture identical pixels. Rebuilt game
  and renderer. Next run boot077 checks progress beyond that draw.

- boot077 reaches level1 with health/energy bars and item counters, continues to
  frame1080, and ends at the60-second diagnostic bound3 without a guard/crash.
  Capture720 was inspected; no duplicate scene was posted. This verifies continued
  rendering while idle, not combat, movement, level completion or audio fidelity.
- Added opt-in XML1_TEST_MOVE_FRAME, after the A-release interval, to hold the
  left stick right for60 presented frames within the process-local test pad.
  Synthetic test verifies its wire press/release and zero host input/output calls.

- boot078 uses A600–612 and left-stick-right750–810. Native captures780/840
  visibly show the character and camera displaced to the taxi/tree area; HUD
  remains rendered. Capture840 copied to outputs/xml1-dx8-level1-movement.bmp
  for evidence (not posted as an additional screenshot). The run ends at the
 60-second diagnostic bound3 without another crash or graphics guard. Movement
  and camera response are demonstrated, but combat, complete level traversal,
  timing/performance, texture mip chains, FMVs and audio correctness remain open.

## Full texture mip uploads (boot079)

- Version6 packets preserve the resource's explicit mip count. Each level is
  bounds checked and uploaded; uncompressed levels are independently unswizzled.
  DXT3 retains complete blocks even below4x4, matching xemu's texture layout.
- Native tests use distinct red/green/blue mip levels and explicitly select each
  level for ARGB and DXT3, including2x2/1x1 DXT blocks. Earlier primitive, lighting,
  texture-stage, clear and batch tests remain passing. boot079 reachesframe1080
  with movement and ends at the60-second bound3. No duplicate screenshot posted.
- Next audio finding: the toolkit monitor clears DSP output then fills it from
  its separate software mixer. Actual guest DSP output is therefore discarded;
  routing and native sample capture are required before any audio fidelity claim.

## Actual DSP output and APU trap diagnosis (boot080–082)

- Ordered patch10 routes completed256-frame DSP blocks to the root XAudio2
  output, preserving data across backpressure. Native PCM/CSV capture reveals
  entirely silent samples. Synthetic output payload/retry and GP/EP tests pass;
  adapter regeneration is identical and ten-patch idempotence passes.
- boot082 starts APU atFECTL100F then stops processing atFECTL1FEF, ISTS60,
  IEND9: an APU trap/interrupt is pending and the standalone IRQ signal is stubbed.
  VP mixbins are also zero before that trap. Next: trace and implement guest ISR
  delivery, followed by silent voice/physical-memory and pacing investigation.
  Audio is still incorrect; no recognizable FMV milestone claimed. See AUDIO.md.

## Guest APU interrupt delivery (boot083–084)

- Implemented level-triggered device IRQ publication and guest dispatch on the
  kernel worker stack/TIB, with registered IRQL and stack checks. KeGetCurrentIrql
  now returns the tracked value. Dispatcher startup is synchronized with timers.
  Saved as ordered patch11; eleven-patch idempotence and adapter regeneration pass.
- The guest APU handler claims vector5 and clears its own trap: FECTL1FEF returns
  to1F0F and DSP execution continues past20480 frames. Synthetic IRQ context,
  IRQL/stack, acknowledgement/reassertion test passes, as do dispatch-thread and
  PCM output payload/backpressure tests.
- Samples remain zero. VP traces show4–6 active voices at physical table00848000;
  next inspect each actual source/SG/stream segment and pre-mix sample data.
  Voice resampling currently ignores pitch ratio and is also required fidelity
  work. No new meaningful screenshot posted; no audible/FMVs claim. See AUDIO.md.


## Pageable audio DMA mapping (boot085–093)

- Voice/gain tracing established that movie voice76 becomes unmuted but reads
  zeros: MmGetPhysicalAddress returned low guest VA offsets into an unrelated
  contiguous backing allocation. Ordered patch12 routes APU VP/GP/EP physical
  transfers through a live page map. Low guest pages reserve identities from
  the same atomic contiguous allocator, avoiding physical offset collisions.
- The map preserves offsets, supports physical and guest page zero, and splits
  DMA at physical page boundaries. CPU writes and DMA writes share guest bytes.
  Synthetic tests pass for stable identities, collision avoidance, independent
  contiguous storage and transfers across physically adjacent but virtually
  distant pages. GP/EP bootstrap/MMIO, output retry/payload, IRQ and kernel
  dispatch tests also pass. Adapter regeneration is identical. Overlapping
  patches are now checked by reversing the complete stack in a temporary copy;
  all twelve validate without changing the checkout.
- boot092 produced975562 nonzero stereo sample values, peak20854, no clipping
  by17.444 seconds. boot093 completed its60-second diagnostic bound(exit3),
  produced900808 nonzero values with the same peak and no clipping, but audio
  subsequently became silent and presentation stopped afterframe780. This is
  a DMA correctness milestone, not a claim of correct audio or movie playback.
  Native captures remain black; no duplicate screenshot posted.
- Next: resolve movie/audio progression and implement correct voice resampling;
  then revalidate level1 input after the IRQ and physical-memory changes.
  Page mappings currently persist for the process lifetime, as does the existing
  contiguous arena allocator. No full virtual-memory remap/free semantics claimed.


## Native vertical blank waits (boot094–096)

- boot094 diagnostic logging proves KeWaitForSingleObject on0036E8BC resolves
  to an invalid Windows handle and returnsC0000001 repeatedly. The original
  XDK symbol0035B040 is D3DDevice_BlockUntilVerticalBlank; it clears the guest
  device event before waiting. This was spinning, not waiting for refresh.
- Added a manual DX8 implementation using an XMLDX8V1 renderer command. The
  system D3D8 device must observe active scan followed by vertical blank before
  acknowledging; unsupported calls or a1-second timeout fail explicitly.
  This uses the native display clock (reported59Hz here); exact Xbox mode/field
  timing across other display modes remains unverified.
- boot095 exposed concurrent pipe commands from guest background/render threads.
  Commands and acknowledgements now share a process-local critical section.
  boot096 reaches the45-second diagnostic bound3 without transport failure;
  initial observed native waits take15–16ms. Full DX8 batch tests pass, including
  three native blank waits followed by pixel-identical splash rendering.
- The changed pacing reveals repeated2097200-byte movie buffer allocations
  exhausting the guest heap (50339888 of50855936 bytes used). Movie buffers and
  heap reuse/lifetime are the next investigation. The sampled native frame240
  remains black; no recognizable FMV or repeat screenshot posted. Level1 has
  not yet been revalidated with the new IRQ, physical mapping and display waits.


## Movie virtual-memory release (boot097–101)

- boot099 confirms repeated MEM_RELEASE requests for movie buffers0136D000,
  0156E000,0176F000,etc. Each buffer is2097200 bytes. The old low-address VM
  free fell through to native VirtualFree, despite allocating from xbox_HeapAlloc.
  No guest blocks were freed; boot096 had22 live blocks and exhausted the heap.
- Ordered patch13 rounds VM allocations to pages and records low heap-backed
  VM ownership/state/protection in guest_vmem. Release returns the owning block
  to xbox_HeapFree. Decommit/recommit and queries use that same metadata; an
  interior release is rejected. The synthetic VM test now verifies low-address
  query, decommit/recommit, neighboring-byte preservation, exact-owner release
  and reuse in addition to the existing high-address VM tests. All pass.
- boot100(45s) and boot101(30s, native capture every presentation) finish at
  diagnostic bound3 without movie heap exhaustion. Repeated movie releases
  reuse0136D000. Thirteen-patch reverse-stack validation passes.
- Movie output remains black: boot101's renderer upload atframe240 contains
  242574 colored pixels and307200 alpha-bearing pixels in the1024x512 ARGB
  texture. The F0000000 aperture is already a view of contiguous memory, and
  upload contents confirm that path. Next inspect the actual movie draw packet,
  transforms/UVs/blending and native output rather than assuming another alias
  mismatch. No new screenshot posted; no FMV/audio fidelity claim.


## First native FMV image and guest FIST rounding (boot102–107)

- Captured movie-frame241.bin from the game's actual draw: geometry and texture
  are present, but texture factor01000101 almost eliminates the output. Changing
  only that factor in a diagnostic replay reveals the image; this override was
  never installed in the game and is not milestone evidence.
- Traced original color packing through243650,1A41F0 and3439C4. The helper's
  apparently mismatched double push/pop leaves the original x87 value intact.
  The fault is generated FIST/P using llrint despite the guest control word
  selecting truncation. White255.5 rounds to256, overflowing packed channels.
  Extracted XBE is byte-identical to the default.xbe read directly from the ISO
  (SHA2562ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac).
- Ordered patch14 implements guest rounding control for signed16/32/64-bit
  stores: nearest-even, down, up and truncation; out-of-range/non-finite results
  become integer-indefinite. Unmasked exceptions/status tracking are outside
  this change. Native regression verifies rounding/bounds and white packing;
  all84 recompiler tests pass; fourteen-patch reverse-stack check passes.
- boot106 now emitsFFFFFFFF without overrides. boot107 reaches its75-second
  bound3 and displays Activision FMV artwork in the native backbuffer. Posted
  outputs/xml1-dx8-fmv-activision.bmp comes from boot107frame300. Visible block
  artifacts remain; this is an FMV-image milestone, not correct decoding or
  synchronized audio/video. Current gameplay still needs revalidation.
- Upstream PR47: https://github.com/sp00nznet/xboxrecomp/pull/47, isolated pin
  worktree commit55aa0ba. Native CTest and84 Python tests pass there as well.
  Next investigate decoder block artifacts, pacing/audio resampling and return
  to level1 with the accumulated fixes.


## Intermittent FMV artifacts, paired source/upload evidence (boot108–109)

- Decoded the first180 frames of original i102.sfd with local FFmpeg as a
  reference. Nearest-frame search for the posted boot107frame300 points to
  reference177; visual inspection shows clean reference artwork where the
  native capture has block artifacts. Reference conversion is diagnostic only.
- Added opt-in converted-source and native upload captures under
  XML1_CAPTURE_MOVIE_SOURCE. boot108 converted sources20/40/60/80 look clean.
  boot109 paired source/upload at presentation300 compare exactly across all
  307200 visible pixels (scripts/check-movie-upload.py); native frame300 is
  also clean. Thus neither persistent texture unswizzling corruption nor
  consistently broken decoding explains the observed artifacts. Timing and
  buffer ownership remain under investigation; do not claim a fidelity fix.
- boot109 finishes75s bound3, with active nonzero DSP input through86016 APU
  frames and movie lifecycle activity. No heap exhaustion or fatal guard found.
  No repeat Activision screenshot posted; no A/V synchronization claim.
- Rechecked upstream open PRs. NewPR46 implements presentation-only gamma ramps
  for the toolkit D3D11 backend; it does not explain localized movie blocks and
  does not apply directly to this native system-D3D8 renderer. PR47 remains open.


## FIFO native renderer transport (boot110–111)

- Added transport acquisition timing. boot110 proves rendering and background
  vblank requests can wait hundreds of milliseconds behind the critical
  section: observed flush453ms and vblank437ms near frame232. The shared pipe
  must remain serialized, but lock reacquisition had no FIFO guarantee.
- Replaced it with a ticket gate: each caller reserves its place before waiting,
  so a repeated background request cannot overtake a queued flush/swap. Waiting
  callers sleep1ms instead of spinning. Native regression queues16 own-process
  threads and verifies exact FIFO execution, plus32-bit ticket rollover.
- boot111 reaches the30-second bound3 with no transport wait at or above100ms
  and no fatal guard. Presents reachframe300, but movie processing remains slow;
  this does not prove real-time playback, synchronized audio or eliminate the
  intermittent image artifacts. Further performance/decoder-lifetime and audio
  resampling work remains. No repeat screenshot posted.


## Stateful voice resampling (boot112)

- Added libsamplerate0.2.2 as a pinned submodule at
  c96f5e3de9c4488f4e6c97f59f5245f22fda22f7 (annotated release tag resolves here).
  Its BSD license is retained in external/libsamplerate/COPYING. CMake links
  the real library and enables RECOMP_APU_LIBSAMPLERATE, replacing the shim's
  dummy SRC functions only for this configuration.
- Ordered patch15 restores xemu's callback-based SINC_FASTEST resampling path
  from the previously pinned reference. Rate changes now affect source-frame
  consumption. Starvation supplies silence without a zero-progress callback
  loop; filters reset with voice/VP reset and are freed on VP finalization.
  The exact Xbox interpolation kernel remains unverified.
- Native actual-VP regression fetches stereo PCM through the real SG path and
  verifies rates0.5,1,48000/44100,2; expected consumption and tone crossings;
  stereo preservation; identical output across32/64-frame reads; reset clears
  history; finalization releases state. GP/EP bootstrap/MMIO test also passes.
  Fifteen-patch reverse-stack validation passes. Setup now creates/installs the
  Python environment before invoking the Python-backed patch-stack checker.
- boot112 finishes40s bound3 without fatal guards or heap exhaustion. Native
  output reaches1440000 sample frames(30s) by38.663 wall seconds,2305818 nonzero
  stereo values, peak27417 and no clipping. Pitch path is improved, but output
  is still slower than real time and full A/V fidelity is not established.
  Next investigate pacing/performance, then revalidate movies/menu/level1.


## Consumer-paced audio output (boot113–115)

- Profiling boot113 separates throttle time from processing/output: by24576 VP
  frames,6.08s was spent in throttle and14.56s in processing/output. The old
  throttle periodically rebased its clock after overruns and added waits on top
  of the native output path; 30s of PCM had required38.663s in boot112.
- Ordered patch16 adds an XAudio2 voice callback event for completed source
  buffers. Root PCM output waits for this event under backpressure instead of
  polling Sleep(1). The native-DSP path bypasses the separate wall-clock
  throttle; XAudio2's48kHz consumer and bounded queue set the pace.
- boot114 showed that retaining the APU device mutex during output waits would
  starve guest register writes. Completed256-frame PCM blocks are now copied
  locally, the mutex is released around output, then reacquired. A native test
  uses another own-process thread to prove the mutex is available during the
  callback and held afterward, while checking payload and buffer clearing.
- boot115 ends30s bound3 with nonzero audio:1344000 sample frames(28s) at28.010
  wall seconds,1938666 nonzero stereo values, peak17301, no clipping or fatal
  guard. This establishes near-real-time production in this run, not full
  audible fidelity or movie synchronization. Movie presentation remains slow.
- Output retry/payload/event-wait test, output mutex test, actual VP resampling
  and GP/EP bootstrap tests pass. Sixteen-patch reverse-stack validation passes.
  Next investigate movie processing speed and revalidate menu/level1 with audio.


## Optimized playback and renderer handoff (boot116–121)

- A separate opt-in build uses /O2 /Ob1 for generated game code. The default
  diagnostic build remains /Od /Ob0; both retain fail-fast guards and symbols.
  Optimized CPU comparison/carry (2940 cases), FIST rounding, VP resampling and
  original XGSwizzleRect tests pass. This does not establish optimization safety:
  upstream still emits uninitialized local EBP saves in standard-frame functions.
- Initial converter-to-swizzle timing was misleading as a CPU measurement:
  boot118 times the converter itself at roughly7–8ms, while the broader interval
  often spans31–47ms. Thread CPU time is also logged but has coarse accounting
  granularity. Native worker command logging reports commands exceeding50ms.
- The FIFO transport gate now uses WaitOnAddress/WakeByAddressAll instead of
  Sleep(1) polling. Compare-and-wait prevents a missed release; waking all avoids
  leaving the next ticket asleep. This requires Windows8+ synchronization APIs;
  graphics still uses the real system Direct3D8. Both builds pass the16-thread
  FIFO and unsigned-ticket rollover test.
- boot117 (optimized, polling gate) reaches captured frame360 in30s. boot119
  (address wait) stalls before movies, repeatedly waiting on a guest handle;
  boot120 repeat reaches captured frame420 in30s. This is an unresolved startup
  reliability failure, not a successful result to discard. Timing still falls
  short of the requested playback quality.
- boot121 runs the intro sequence without forced input: later movie paths i101,
  i103, i104 and i105 are reached. Native frame780 shows the Raven logo, new
  artwork relative to the earlier Activision capture. Full movie/A-V fidelity,
  current level1 and sustained gameplay remain unverified.


## Longer playback and remaining synchronization failures (boot122�125)

- The runner now supports1�600 seconds and rejects a run whose requested end
  crosses the30-hour cutoff. Previous limits could not cover the natural intro
  sequence at current playback speed.
- boot122 exits with assertion failure in the APU stream reader: a segment-list
  entry has a zero physical offset. Ordered patch17 logs voice/index/segment,
  descriptor addresses, length, CBO and list configuration before the existing
  assertions. The guard is retained; zero is not silently replaced or skipped.
- boot123 diagnostic build reaches only the first captured frame in25 seconds.
  Its watchdog reports repeated00128900 calls. This is not movie completion.
- boot124 optimized run reaches the final Sofdec intro without reproducing the
  assertion, then stops advancing at the menu transition. At300s its main thread
  waits in ordinal277 RtlEnterCriticalSection with guest critical section0037A70C,
  entered by DirectSound helper0036F535 through0036FB7C/003707B2. PCM processing
  continues, but its nonzero count stops increasing. This identifies the next
  audio lock investigation; it does not establish who owns the lock or why.
- Opt-in XML1_MOVIE_TIMELINE records up to256 calls from first conversion through
  swizzle. boot124 shows8.06ms conversion followed by27.07ms in native GPU flush;
  the previous assumption that D3DX copy dominated was not supported by this trace.
  The switch is cached in current code to avoid environment lookup on every call.
- Empty native flushes now acknowledge already-completed work without repeating
  a backbuffer lock. Every preceding draw/clear batch still completes before its
  acknowledgement. Native fixture tests pass, including empty flushes before and
  between batches, exact splash pixel equality, formats/materials/lights/culling,
  list/strip/fan geometry, mip levels and vertical blank ordering. Tests may select
  a separately built worker with --worker for validation.
- boot125 reaches frame420 in30 seconds, bound3. Early empty flush submissions
  take0.038�0.101ms, but the first movie flush interval remains24.78ms overall.
  Queue and submission timings are now recorded separately. Playback speed is
  still unresolved; removing redundant readbacks alone does not solve it.


## Guest-visible IRQL and deferred callbacks

- DirectSound helper0036F535 reads fs:[0x24] before acquiring guest lock0037A70C.
  The runtime updated a host TLS IRQL value but left the guest KPCR byte at zero.
  kernel_run_dpc also invoked deferred routines without raising their IRQL.
- Ordered patch18 publishes raise/lower changes to the calling thread's guest
  KPCR and runs queued/timer DPC callbacks at DISPATCH_LEVEL, restoring the prior
  level and checking stack cleanup. This corrects visible execution context; it
  does not by itself implement single-CPU preemption or interrupt spinlocks.
- Native interrupt regression checks the actual guest byte and kernel API during
  ISR execution; then queues a synthetic DPC through ordinal119, verifies all
  callback arguments and level2, and verifies return to prior level1. The DPC-level
  convenience API and lowering to0 are covered. Test passes;18-patch stack validates.
- KPCR layout cross-check: Cxbx-Reloaded src/core/kernel/common/types.h defines
  Irql at0x24 (https://github.com/Cxbx-Reloaded/Cxbx-Reloaded/blob/master/src/core/kernel/common/types.h).
  Original game instructions independently demonstrate the direct byte read.

- boot126 with corrected IRQL reproduces the stream assertion: voice68, listA
  segment0, descriptor00860400, offset0, length00868000. IRQL correction alone
  does not resolve it.
- boot127 correlates the descriptor with an actual MmGetPhysicalAddress request:
  guest80000000 from call0037800F returns physical0 immediately before the
  assertion. This is a valid contiguous buffer, not an empty descriptor. The
  earlier zero-offset diagnostic interpretation was incorrect for this case.
- Ordered patch19 accepts physical0 while retaining the64MB range, nonzero length
  and nonzero sample-count checks. A native regression invokes the actual stream
  reader with a descriptor at physical0 and verifies32 original stereo PCM
  samples exactly (normalized16-bit values); existing resampling tests pass.
  The game's failing descriptor is ADPCM, whose physical read uses the same
  zero-capable memory path. Game-level verification remains necessary.

- A second source-reader regression uses a known stereo Xbox ADPCM block at
  physical0 (index0, zero nibbles, predictors+2000/-2000). All32 returned stereo
  samples match the expected constant predictors. Both PCM and ADPCM cases pass.
- boot128 passes the previous zero-address failure and reaches the main menu
  with its background visible (native frame1560). This is new visual evidence
  compared with the previous menu over black; saved as the main-menu-background
  deliverable. Current level1 still requires a process-local Begin Story run.


## Separate native raster waits, fence tag and directed test input (boot129�134)

- boot129's frame1800 A press opens story cinematic r102, with subtitles and
  native movie imagery; the240-second run ends before level1. A decoded i102
  audio reference and captured DSP output have weak waveform alignment. New
  exploratory compare-movie-audio.py reports energy/waveform correlations and
  excludes silent windows; self-comparison validates the non-silent windows.
  These metrics are not a complete audio-fidelity check.
- Native vertical blank observation now has an independent pipe and hidden
  system-D3D8 device on the same default adapter. It still waits for a measured
  active-to-blank transition, but no longer holds the rendering/fence transport.
  It accepts only the native V1 command and uses a separate lifetime-bound job.
  Renderer pixel/format/material/geometry/mip/vblank regressions pass.
- boot130 reaches frame660 in30 seconds versus420 before. The first measured
  movie flush drops from24.78ms to0.064ms. Converter time remains about7ms;
  movie playback and audio still need work.
- Faster timing made boot131's predetermined A press occur before the menu.
  That run was deliberately terminated after it reached an idle menu; exit-1
  is intentional, not a crash. A new opt-in XML1_TEST_INPUT_FILE harness reads
  monotonically increasing IDs with a/start/right/neutral commands. It never
  sends host input. Complete lines apply once, buttons release after300ms and
  rightward movement uses leftX for1000ms. Existing fixed-frame
  controls remain. Unit tests verify complete-line handling, one-shot behavior,
  elapsed-time release, packet state and zero host input/output calls.
- boot132 captures stereo mixbins0/1 before DSP processing. Their waveform also
  mismatches the decoded movie reference, placing at least part of the remaining
  sound discrepancy before the DSP. This does not identify the exact cause.
- boot132 stalls in original D3D helper0035FB50. Its0035FB70 loop compares the
  completed fence to bits0x7C of NV_PGRAPH_PATT_COLOR0 (FD400B10). The bridge had
  updated only the memory counter. Both tag and counter are now published after
  the same real native completion; unrelated register bits are preserved.
  boot133 first rejected the MMIO address through the RAM-only resource guard;
  the implementation now accesses the explicitly validated mapped aperture.
- boot134 completes300 seconds at captured frame7440 without that fence stall,
  traversing menu and attract video. A later short file-driven A press did not
  enter the story; elapsed-time holds and packet-poll logs are in the next build
  to distinguish missed input from scene timing. Current level1 is not verified.

## Directed level1 input and stream format evidence (boot135-137)

- boot135 revalidates level1 on the current fence/IRQL/audio-buffer fixes.
  Normal process-local Start, A, Start presses pass through menu and story video.
  Right movement moves Wolverine to the taxi/tree corner and the camera follows;
  the game polls the later A press. The run ends at its300-second bound, exit3,
  with no fatal guard. This is not proof of combat completion or sound fidelity.
- The file harness now supports left/up/down and B/X/Y as well. Wire-state tests
  pass for each direction and button; no host input is generated.
- boot136 finishes300 seconds without a fatal guard. New diagnostic patch20
  reports voice68 with ADPCM container2, samples-per-block2 and stereo1 in both
  its voice configuration and SSL descriptor. They agree; no stream-format
  override is justified by this evidence. Audio fidelity remains unresolved.
- boot137 enters level1 and moves upward into the courtyard. The next upward
  command hits the bridge's light-ID>=32 guard at frame1871 (exit4).
  The original supplied-XBE SetLight at0035BC40 dynamically grows its table in
  blocks of16 IDs, so a32-ID limit in the bridge is artificial. LightEnable at
  0035BF00 also creates the default directional definition when absent.
- The bridge now retains arbitrary DWORD light IDs separately from the compact
  per-draw enabled-light mask. Definitions survive disabling/re-enabling, and
  absent definitions receive the same directional default as original code.
  It still rejects more than32 simultaneous lights; native DX8 also checks its
  own hardware capabilities. No light is silently discarded.
- Sparse-light tests cover200 retained IDs, re-enabling, DWORD_MAX, defaults and
  enabled overflow. Default/optimized builds and native renderer pixel/lighting/
  culling/primitive/mip/vblank regressions pass;20-patch stack validation passes.
- boot138 passes the former movement failure, logging actual light IDs32-39.
  Frame2640 shows live enemies attacking Wolverine, hit effects and damage7.
  Saved native capture: outputs/xml1-dx8-level1-first-combat.bmp in this task's
  deliverables directory. A later A press is polled, but Wolverine dies while
  largely idle; frame2880 displays the normal elimination menu. This is not
  verified successful player combat. The run was deliberately stopped after
  frame3180 once this state was recorded; its termination is not a game crash.

## Full analog harness and pre-resampling source evidence (boot139-141)

- File commands now cover black/white, left/right triggers and rta/rtb/rtx/rty
  (right trigger plus the named face button). Native tests verify all eight
  analog bytes for each command and combinations, with zero host input calls.
- boot139 uses repeated A/A/B attacks after two upward movements. Native frame3780
  shows an Anti-Mutant Troop health bar reduced while Wolverine needs health.
  The player still dies; the run was deliberately stopped on the elimination
  menu (exit-1). This is not a successful encounter or a crash.
- boot141 exercises health packs and right-trigger powers alongside attacks.
  Frame2760 shows one remaining health pack (from three) and reduced energy.
  Later commands reach the normal elimination and empty Load Game menus.
  The run ends300-second bound3 at captured frame4980 without a fatal guard.
  No encounter-clear, save/load correctness or full-level success is claimed.
- Optional XML1_CAPTURE_VOICE_SOURCE=0..255 captures a selected voice immediately
  after sample fetch, before SRC/mixing/DSP. build/apu-voice-source.f32 is stereo
  float32; its CSV records sample frame/count, format, base and next ring offset.
  Toolkit patch21 only inserts this diagnostic callback. The known PCM fixture
  verifies captured values and channel polarity; existing source/SRC tests pass.
- boot140 runs60 seconds to bound3 with voice76, pre-DSP and final-output captures.
  Source records3776..984800 retain format5A01E0E6/base2124 during the first movie.
  analyze-voice-ring.py finds538080 of981024 frames unchanged at the same ring
  position (54.85%), including519670 nonzero frames. Raw-source waveform windows
  still mismatch the FFmpeg-decoded44100-Hz i102 reference before SRC.
  This directs investigation toward source decoding and movie buffer refill
  timing. Repetition can be legitimate, so it alone does not prove underrun.
  An offline exploratory removal of unchanged reads improves some alignment but
  is NOT used in playback and is NOT an audio fix or fidelity certification.
- Default/optimized builds succeed. An attempted optimized relink while boot139
  was running was blocked by Windows' executable lock; rebuilding after its
  deliberate termination succeeds. No test result from a failed build is used.

## Shared native vblank completion (boot142-146)

- Added opt-in XML1_NATIVE_PROFILE. It samples only the own process's main
  guest thread, copies up to64KiB of its stack while suspended, resumes before
  unwinding/symbol lookup/output, and writes build/native-profile.csv. Unwind
  reads use the copied stack; they do not race a live stack. Sampling is bounded
  to200 observations after5 seconds, with50ms between observations. This is a
  diagnostic profile, not a frame-rate benchmark or another process controller.
- boot142/143's initial RIP/stack-candidate experiment was too weak to identify
  callers. An APU getenv-cache experiment did not materially reduce the waits
  and was reverted. No proposed toolkit patch22 remains. Captured-stack unwind
  in boot144 instead identifies136/200 samples in native vblank waiting:78
  queued at its gate and58 waiting on the worker acknowledgement.
- The old FIFO vblank gate made concurrent waiters consume separate native
  refreshes. A shared-completion condition now lets already-waiting callers
  observe the same real DX8 active-to-blank completion. The first caller sends
  the worker request outside the synchronization lock; later callers wait on
  its generation. Calls arriving after completion start a new observation.
  Draw/fence transport stays separate, and no timer substitutes for scanout.
- A native regression gates the producer and queues eight callers in each of
  three batches. Each batch performs exactly one producer completion; none
  returns before it, later batches wait again, and generation rollover passes.
  Existing native renderer pixel/format/lighting/geometry/mip/vblank checks pass.
- boot145 ends60-second bound3 at capture2280. First-movie voice76 records
  3776..463840 contain460064 source frames (~10.432s at44100Hz), close to the
  decoded458656-frame (~10.400s) source. Same-position unchanged ring reads fall
  from538080/981024 in boot140 to0/460064. Source waveform windows at1/3/5/7s
  align at1.000/3.000/5.000/7.000s, correlations0.946/0.864/0.890/0.939.
- Final DSP output energy alignment improves to0.935, with the first movie
  starting about6 seconds into capture. Half-second waveform correlations are
  still only about0.42-0.46 in magnitude. Timing is substantially improved, but
  neither this metric nor zero repeated reads certifies full audio fidelity.
- boot146 reaches level1 and native pause/resume, movement, combat, healing and
  powers on the new synchronization. Frame4080 shows Wolverine farther along
  the street with enemies and depleted consumables. Successful encounter/level
  completion and overall graphics/audio correctness remain unproven.
- boot146 completes180-second bound3 with no fatal guard; this bounded run is
  a regression check, not proof of successful encounter or full-level completion.

## Audio transfer boundary and optional DSP comparison (boot147-152)

- boot147/148 capture pre-GP mix and xemu's GP monitor tap. Both preserve much
  closer movie waveform alignment than final DSP output. The monitor tap alone
  cannot establish actual GP output routing, so its implication was checked
  against real transfers rather than treated as proof.
- boot151 finds no GP FIFO0 writes. boot152 captures actual GP scratch writes
  and EP scratch reads:32-word blocks in GP8000/8800 rings;256-word blocks in
  EP10000/10800 rings. Ring sizes2048 bytes. Extracted left/right streams retain
  the close waveform match across the boundary (0.925/0.809/0.885/0.934 in the
  four tested windows). The remaining difference is after EP input, not in this
  GP-to-EP transfer. Correct audible output still is not verified.
- A pinned DSP56300 v0.1.3 MSVC static library can now be linked optionally for
  comparison. Rust1.96.0 is local to build/. Default engine stays C; environment
  ep selects EP only,1 selects both. The generic APU bootstrap/memory test passes
  with JIT, and upstream31 library plus1009 integration tests pass.
- boot149/150 do NOT yield a usable JIT comparison: five silent output blocks,
  then very slow DSP execution. A temporary trace shows PC4D5 with33,129,090
  cycles and repeated run-budget debt; trace edits were removed. No JIT audio
  quality claim and no default backend replacement were made.
- boot147/148/151/152 finish25-second bound3 on C without fatal guards. Default
  and optimized builds pass; native APU/output checks and21-patch validation
  pass. See DSP-COMPARISON.md for formats, pins and reproduction details.

## EP comparison investigation (boot153-157)

- Isolated original filter reproduces JIT block-length corruption in compiled
  execution. Disabling DO/DOR inlining allows 60-second live playback but is
  not a validated backend fix. Default remains C.
- tools/ep-replay strictly checks captured EP reads and records FIFO output.
  C replay matches all 960,000 channel samples in the first ten seconds of
  movie audio after a 2304-frame startup offset. Whole-capture equality is
  not established. JIT diverges at read8 even when single-stepped.
- Temporary bridge and Rust experiments were restored. The optional no-inline
  patch is saved for reproduction. See DSP-COMPARISON.md for limitations.
  No new visual milestone; level completion and full fidelity remain open.

## Raised-IRQL exclusion (boot158-160)

- boot158 stalls after Start at frame1099 during an opening movie. Native
  thread snapshots show the main thread waiting in DirectSound critical-section
  entry while its worker repeatedly moves linked-list nodes in 00372F9A via
  00372AA8. Audio device processing continues. No desktop input/capture was used.
- The kernel previously published IRQL but did not exclude concurrent raised
  regions. Added a shared gate on transitions from below DISPATCH_LEVEL to
  DISPATCH_LEVEL or higher, retained through nested raises, released on lowering
  below DISPATCH_LEVEL. Guest KPCR publication and return levels remain intact.
- A four-thread regression fails with exit4 before the change (a contender
  enters while its owner is raised), then passes with the change. It checks
  nested 2/5/2 transitions, restoration to APC/passive levels, and4000 protected
  counter updates with forced scheduling opportunities. Device IRQ/DPC and
  thread-local dispatch tests pass; default/optimized builds pass.
- boot159 completes300-second bound3 through movie skips, level1 movement,
  attacks, powers, healing and defeat. The first encounter remains uncleared.
  boot160 retries Start at frame1082, close to the earlier failure, and continues
  rendering into the menu. This is regression evidence, not proof every race is
  eliminated. The22-patch stack validates in reverse order.
- Limitation: this conservative gate serializes raised regions; it does not
  implement full single-CPU scheduling or higher-priority ISR preemption of a
  raised guest thread. A path waiting for such an ISR while holding the gate
  needs a fuller scheduler rather than a forced completion or skipped wait.
  No new screenshots or claim of overall graphics/audio correctness.
- boot160 subsequently completes90-second bound3 without a fatal guard.

## Combined input and measured frame rate (boot161, ongoing)

- The process-local file harness accepts plus-separated combinations such as
  up+left+a+rt. Direction-only commands retain1000ms; combinations containing
  a button use300ms. Neutral clears all components. Guest polling tests check
  simultaneous axis/button bytes and clearing, with zero host input calls.
- Optimized native DX8/APU combat measures11.05 FPS across frame2340..2460
  (10.855s); a paused level interval measures13.60 FPS at2580..2640. These are
  capture timestamp measurements, not an instrumentation-free benchmark.
  Current performance is inadequate; this is still part of the active goal.

## Native texture reuse and pending fence submission (boot162-163)

- External read-only captured-stack profiling of boot161 main thread samples
  finds71/80 samples in graphics receive_ack, including41 in push-buffer flush.
  The worker recreated managed DX8 textures for each draw, including unchanged
  texture data. No desktop input/capture or window manipulation was used.
- Added an exact-content native texture cache bounded to256 entries and64MiB
  of retained payload. Dimensions, format/mips, hash and full bytes must all
  agree; changed data cannot reuse an old upload. Eviction releases its COM
  reference, and worker teardown clears the cache before releasing the device.
  XML1_DX8_NO_TEXTURE_CACHE disables it for comparison. Transport still sends
  complete texture data; no guest update is assumed absent.
- Native rendering regressions pass. test-dx8-texture-cache.py compares exact
  cached/uncached BMP bytes for changed/repeated textures, an intentional hash
  collision, and eviction after270 distinct textures. Statistics also prove
  actual reuse and the256-entry bound.
- boot162 starting area measures42.80 FPS across3180..3600. Its action interval
  measures35.10 FPS across5340..5520, but then stalls in a GPU event wait in
  0035FDE0 (KeWaitForSingleObject loop at0035FF34). It was intentionally stopped.
- Before a pending resource fence wait, the bridge now submits all preceding
  recorded native work. The existing worker completion acknowledgement still
  precedes publication of latest-issued fence (latest-2), including its tag.
  It does not publish a future/unissued fence or skip the original guest wait.
  This covers deferred kickoff before the guest chooses its event-wait path.
- boot163 completes300-second bound3 through movement, attacks, powers, healing
  and pauses, passing12720 presented frames without the prior fence stall or
  a fatal guard. Combat interval6840..7020 measures33.26 FPS. Both boot builds
  relink successfully. Full encounter/level completion is still unverified.
- FPS comes from consecutive native capture timestamps. Starting area versus
  combat are different scenes; these are not universal minimum/average figures.
  Overall visual/audio correctness and all synchronization paths remain open.

## 2026-09-13 15:45 UTC - Directed combat and navigation, boot164

- A 600-second optimized native DX8/APU run ends at diagnostic bound3 with
  26340 presented frames and no fatal guard. It reaches the normal elimination
  menu after the player loses health near the burning street wreckage.
- Direction-only input followed by neutral and then attacks visibly reduces
  an Anti-Mutant Troop health bar (frame6840); frame8580 retains a damaged
  target. This is direct evidence that player attacks can damage an enemy,
  not proof that the encounter or level is complete.
- Frame13620 shows a fallen troop at the curb; frame14520 shows the energy
  potion collection increment, followed by the increased inventory. Enemy
  defeat is suggested by the body and drops, but no death-event trace or
  complete encounter-clear condition was captured.
- Frame18120 shows a20-point hit beside glowing wreckage. Health stays stable
  away from the hazards in later paused/resumed checks. Earlier health loss
  with no visible attacker must not be diagnosed as an invisible-enemy bug
  from screenshots alone; environmental damage is an observed explanation.
- The ordinary pause-menu map toggle works, but frame21360 shows white map
  boundaries while frame22320 shows only the green player arrow. Correct
  minimap geometry/clipping remains unverified and merits a renderer check.
- Native evidence frames are preserved locally in work/boot164-evidence.
  No screenshots are reposted because these are additional observations of
  the existing combat/location, not a new verified progression milestone.
- About9h31m of the30-hour goal allowance has elapsed. Full level traversal,
  overall rendering fidelity and audio correctness remain unfinished.

## 2026-09-13 - Human playtest entry point

- Added opt-in XML1_DX8_VISIBLE=1 for the game renderer, with a640x480 client
  area, native window message handling and user-close support. The vblank
  helper remains hidden. Ordinary diagnostic runs remain hidden by default.
- Play XML1.cmd and scripts/playtest.ps1 select optimized native DX8, C DSP
  audio and real XInput, explicitly clearing automated test-input variables.
  The default session limit is30 minutes; each playtest has a timestamped log.
- Rebuilt the32-bit renderer; all native batch, texture-format, lighting,
  culling, primitive, mipmap and vblank rendering regressions pass. PowerShell
  launcher syntax parses without errors. The visible window and physical
  controller session are left for the user to test; no desktop input is sent.
- Closing the renderer currently ends the game with a pipe-disconnect
  diagnostic. Full human playability and all fidelity requirements remain
  unverified. Do not rebuild or run competing probes while a human test
  process is active; verify live process state before resuming implementation.

## 2026-09-13 - Saved frame-pointer regression, upstream PR48

- Rechecked upstream origin/main, available branches and open pull requests;
  the pin remains3706cef and no existing PR addresses this prologue save.
- A synthetic eight-byte x86 function (push ebp; mov ebp,esp; mov eax,[ebp];
  pop ebp; ret) exposes an uninitialized generated local. MSVC /Od /we4700
  rejects the original generated PUSH32 with C4700. This is a demonstrated
  recompiler defect, not a diagnosis of the minimap or any combat behavior.
- Initializing the prologue local from the existing g_ebp bridge before PUSH
  makes the fixture compile and return the seeded caller frame, retain it in
  the saved-frame stack slot, and restore the expected guest stack pointer.
- Added the23rd ordered toolkit patch. Full reverse-stack validation passes;
  all175 local recompiler tests plus16 subtests pass, and9 focused tests pass
  against the clean upstream base. Submitted upstream PR48:
  https://github.com/sp00nznet/xboxrecomp/pull/48
- The game generated sources/executables were not regenerated or rebuilt
  for this change while the user prepares a human test. The active playtest
  binary therefore remains the previously validated build. Runtime integration
  and broader frame-bridge correctness remain work to do.
- No active human-playtest process was present at the checks this turn.
  Keep inspecting live process state before competing runs or binary updates.

## 2026-09-13 16:00 UTC - Diagnostic runtime integration of PR48

- Regenerated the supplied game's25,773 translated functions, retaining10
  manual overrides and121 explicit missing-function guards. A total of1,251
  generated functions now initialize EBP before a classic prologue saves it.
- Rebuilt build/project/Release/xml1-boot-probe.exe successfully. The separate
  optimized human-test executable was not rebuilt or replaced (SHA256
  C28EAE19866B3FACE440574927F78F464C184C5DB8FA70479CB554C8D0621E04).
- boot165, a20-second hidden native DX8/APU startup check, ends at bound3
  without a fatal guard. It presents beyond420 frames and submits nonzero
  audio. Its frame420 native capture was inspected; no duplicate is posted.
  This proves startup execution only, not level traversal or audio fidelity.
- The minimap observation still lacks an isolated replay of its disappearing
  geometry. No unsupported inference or minimap fix is claimed this turn.
- About9h46m of the30-hour goal allowance has elapsed. No game process remains
  active after the bounded startup check; the human-test launcher is available.

## 2026-09-13 16:08 UTC - Human visible-mode polling correction

- The first requested human launch connected an XInput controller and opened
  the genuine native DX8 window. Its graphics worker waited up to10ms for
  window messages between every synchronous pipe command; pipe data cannot
  wake that message-only wait. Numerous flushes accumulated that delay.
  Captures600..720 took roughly44 seconds (about2.7 FPS, scene-dependent).
- Replaced the timed idle wait with SwitchToThread plus continued native
  window-message pumping and pipe checks. This removes forced command latency
  but can consume additional CPU while the pipe is idle. An event-driven read
  remains a possible refinement; no fake GPU completion or vblank is used.
- Built the renderer separately, then restarted with explicit user approval.
  The first replacement attempt hit a transient executable lock and relaunched
  the old renderer; that attempt was stopped immediately. The subsequent copy
  succeeded and its SHA256 was verified before relaunch:
  81E3F8F53786C95D6A8CE0892075C4669E7AC892B34ACA425087A103C5059D79.
- Active corrected session: human-playtest-20260913-120703.log, game PID35668
  at the last check. Empty flush samples are0.016..0.044ms. Main-menu capture
  frames1500..1680 span4.0469663s, or44.48 FPS. Frame1680 was inspected as the
  main menu; this is not a combat measurement or full fidelity certification.
- User retains interactive control. No host input or desktop capture was used.
  The optimized game executable remains unchanged; only its native worker was
  replaced. The older session logs remain preserved under their own names.

## 2026-09-13 - Human reports scratchy audio and black transition

- User reports scratchy audio and a transition that fades to black and does
  not return. The session was left running for diagnosis. These are observed
  playtest defects; neither overall graphics nor audio correctness is met.
- Game PID35668 and both native renderer helpers remain alive. Frames continue
  advancing (past22000 at the later check); no fatal guard is logged. Native
  frames3600 and5520 show Wolverine's HUD, potion counters and a map arrow
  over a black world view. This is not a complete process/renderer hang.
- Saved read-only native thread stacks and a256MiB live guest-memory snapshot
  locally (work/human-black-transition-stacks.txt, human-black-guest-ram.bin).
  The memory snapshot is non-atomic and must not be treated as a synchronized
  emulator save state. Helpers verify the target executable name and never
  send desktop input. Stack inspection briefly suspends/resumes individual
  target threads; symbol processing happens after resumption.
- Sampled cached rendering transforms:2000 samples over frames15435..16955,
  followed by700 full ten-matrix samples over21253..21786. No non-finite values
  were found. The samples mostly show HUD transforms; intermittent perspective
  and other world transforms exist. Sampling does not prove that all world
  geometry or all camera states are correct, or isolate the failure's cause.
- Movie/path logs show r102 story startup followed by NYC sound-bank loading.
  The exact user action leading to the transition is still awaiting clarification.
- Saved native black-view captures and a log snapshot in the local
  work/human-transition-evidence directory. No duplicate/black screenshot is
  posted as a milestone. The session remains running, with user control intact.
- Scratchy audio still needs discrimination between PCM/DSP distortion and
  output starvation. Existing clipped-sample counts alone cannot establish
  the cause or certify fidelity; no speculative audio fix was applied.

## 2026-09-13 - Working transition comparison and complete frame capture

- Stopped the preserved black-world human session for an instrumented
  reproduction. Its full log was retained in work/human-transition-evidence.
  No attempt was made to repair or force the live game's scene state.
- Added opt-in next-complete-frame command capture to the diagnostic build.
  It mirrors the ordered native transport, including intermediate flushes
  and clears, and closes only after the final native acknowledgement. Exclusive
  file creation prevents overwriting evidence; per-frame data is capped512MiB.
- boot166 uses the /Od diagnostic build with the prologue fix, neutral/process-
  local input, hidden native DX8 and audio, and records DSP PCM. It reaches a
  visible level1 scene and ends at the180-second bound3 without a fatal guard.
  It is a working comparison, not a reproduction of the human failure: build,
  timing and input differ. The optimized human-test executable is unchanged.
- Native captures1661/frame2422 (8,338,440 bytes) and1662/frame4429 (8,487,804)
  complete successfully. The second replays offline through native DX8 with
  146 texture requests and visible scene plus pause menu, preserving geometry
  flushed before the final20-draw batch. The attempt to select the minimap
  actually selected Load Game and returned to pause; no map-mode test passed.
- A700-sample matrix/FVF comparison from working frames2907..3297 includes
  FVF112/152 and35 distinct world matrices. The failed run's earlier samples
  showed only102/142 and7 world matrices. This supports investigating scene
  submission/game state but sampling alone does not prove a root cause.
- Saved actual submitted PCM/timeline as work/boot166-dsp.pcm and .csv for
  subsequent audio diagnosis. Scratchiness is not fixed or certified absent.
  Full traversal and the black-world human transition remain unresolved.

## 2026-09-13: conditional DSP ALU defect isolated; audio still unresolved

- Offline EP tracing of boot152 shows X:$636 initialization flag=1 and the
  original filter clearing its history every256 samples. Actual submitted
  PCM has a boundary discontinuity absent from captured GP output/EP input.
  EXTRACTU offset/width semantics match DSP56300FM Rev.5 pp.13-72/73.
- Found a separate, demonstrable interpreter decode defect: IFcc/IFcc.U
  encodings were treated as register-to-register parallel moves. A false
  TFR X0,A IFEQ executed, and CLR A IFGE incorrectly reset the six-frame
  firmware control counter. Implemented conditional ALU dispatch using the
  existing predicate evaluator, preserving CCR for IFcc and updating only
  for true IFcc.U, per the manual pp.13-74/75. The import script reproduces it.
- New8192-vector test covers every CCR value, all16 predicates, both update
  modes, and destination preservation. It fails before the fix and passes
  afterward, alongside640 arithmetic,17040 EXTRACTU, DMA and bootstrap cases.
- Diagnostic build and boot167 complete the60-second bound (exit3), render
  FMV, and produce57.11seconds of PCM without fatal errors. The human/optimized
  executable remains unchanged. Local captures: work/boot167-dsp.pcm and
  work/boot167-transfers.bin; trace work/filter-boundary-replay/trace-fixed.log.
- This is NOT an audio-fidelity fix: fresh EP replay still has descriptor
  flags008002 and filter initialization=1. The firmware's BC3=2 path enters
  P:$304 with B1=1 after API6, whose DMA helper leaves N5 in B. The conditional
  fix does correct the counter but does not clear this separate reset path.
  Replay validates transfers through10000frames, then reaches its diagnostic
  limit; it is not a complete replay of the57-second capture.
- Fresh waveform correlation is lower (~0.21-0.32 absolute in selected
  comparisons) and discontinuities persist. Do not certify scratchiness
  resolved or silently bypass the original filter. Black-world transition
  remains separately unresolved, with prior human evidence preserved.

## 2026-09-13: independent EP comparison after conditional decode fix

- Revalidated clock16:42:46 UTC: about10h28 elapsed, below30-hour cutoff.
  No game was running at turn start; previous turn made verified progress.
- Built local work/ep-diff harness against both pinned DSP backends. It uses
  strict recorded EP transfers, one-instruction stepping, and native register
  snapshots, with no interactive input. JIT compiled-loop execution is not
  used because of the separately established DO/DOR inlining defect.
- Captured250000 early instruction states per engine, then250000 states
  starting at EP frame1100. Data/accumulator/address registers agree after
  aligning extra DMA polling iterations and normalizing16/24-bit address
  representations. This comparison excludes full SR/OMR equality: initial
  backend reset defaults differ, so it is not a complete CPU equivalence test.
- More directly, both engines emit exactly identical1138296-byte FIFO record
  streams through the latter capture, including nonzero audio. This replaces
  the earlier inability to obtain a matching JIT replay prefix; that earlier
  test predated the IFcc fix. Both engines can still share integration or
  firmware-control problems; agreement is not proof of correct audio.
- boot167 EP input/source correlations are0.66/0.47/0.60/0.61 in selected
  source windows, below boot152. Final output is lower still. Do not describe
  the conditional instruction correction as an audible improvement.
- Preserved the previous human executable locally in
  work/human-build-before-frame-fix/xml1-boot-probe.exe before starting an
  optimized rebuild with the prologue and conditional-DSP corrections.
  The missing-world transition still requires a fresh reproduction test.

## 2026-09-13: subway exit identified from user report and original scripts

- User clarified the failure occurs AFTER defeating street enemies, descending
  into the subway, defeating more enemies, and returning above ground. The
  opening-movie transition is a different test and does not reproduce it.
- boot168 diagnostic300-second test let r102 finish without skipping it and
  rendered level1 at frame2760. Full-frame capture1681/frame3454 completed.
  Exit3 is the time bound. The pause-map selection test was not completed.
- Optimized rebuild with saved-frame and DSP conditional fixes succeeded;
  before additional tracing its SHA256 was
  C4A3EBCA51306960FC8E7D3D64677D170D87AD13320D9981CFD43158BFBF388D.
- Original assetsfb.zip contains nyc1_1_1.fb with plain Python subwayupa.py
  and subwayupb.py. Both fade out, wait1s, copy the hero to the up marker,
  reposition the camera, wait0.1s, set party light black, reset the camera,
  fade back to0 over1s, wait1s, then restore AI and controls. Assets unchanged.
- User supplied https://marvelmods.com/forum/index.php/topic,1367.60.html .
  Read that page and the thread's first page, which documents cameraFade,
  cameraReset and waittimed. Original XML1 Xbox scripts use screenFade here;
  the community XML2/MUA command descriptions are context, not ABI evidence.
- Derived original binding addresses from the XBE function/name/type table:
  screenFade98EC0, copyOriginAndAngles9B8A0, cameraToLocationAngles99FA0,
  cameraResetOldSchool98EA0, setPartyLightColor9A040, lockControls99B00,
  waittimedCC9F0, setallaiactive993F0. Table function pointer is BEFORE name,
  not after; verified against translated function bodies.
- Added opt-in XML1_TRACE_SUBWAY entry/call diagnostics to graphics observation
  (already covers indirect calls). Captures original fade float arguments and
  camera-call target/arguments without changing execution. Optimized rebuild
  with this tracing passes. It has not yet exercised the subway exit.
- Earlier failed human RAM snapshot has the fade object at56DD08+BA8:
  current(+10)=0, target(+14)=0, remaining(+18)=-0.00002838, duration(+1C)=1.
  Derived from original1586C0 ->18B6A0 setter, not guessed offsets.
  Camera singleton48D128 targets (2280,2502.04,45.1), matching subway_upA
  marker (2280,2502.04,0) plus view height. Camera location method504E0,
  reset method50570 identified from its vtable. This suggests the teleport
  and fade-back progressed; world visibility/camera reset needs investigation.
  The snapshot is non-atomic, so it is not proof that every script step passed.

## 2026-09-13: live route attempt and validated hero-position lookup

- Previous turn made progress (subway binding instrumentation). Clock16:59:45
  UTC was about10h45 after start. boot169 optimized600-second process-local
  input run reached level1, moved/jumped through the starting area, and ended
  at its configured bound3. It did NOT reach the subway exit or clear the
  fights; do not call it a successful transition regression test.
- Read-only inspection shows camera singleton offsets10..24 retain scripted
  position/target while the hero moves. The earlier failed target matching
  subway_upA therefore proves stored requested state, not the live viewpoint.
  Its matrix at+304 likewise stayed constant during this route movement.
  Renderer view slot0 sampled700 times was a fixed handedness matrix; that
  sample alone also does not provide the live game camera position.
- Derived actual entity lookup from original6BF80 ->BEF20 ->BDFD0: singleton
  4DB2B8, mask at+185C, identity table at+105C, pointer table at+4. Hero slot1
  ID is at48585C. Local read-only work/live-state helper validates identity
  before reading the entity's position at+20, derived from copyOriginAndAngles.
- Failed human snapshot: hero ID A01, entity0470F188, position
  (2280,2502.040039,0.1), facing1.5708; collision bounds
  (2264,2486.040039,0.1)..(2296,2518.040039,72.1). This is subway_upA with
  floor offset and translated bounds, independent of the camera target data.
- boot169: hero ID1201, same allocator address0470F188, moves from the start
  through positions1176/1915/-10.62 and1390/1340/1.30. Identity is re-read,
  not assumed stable across boots. These reads are non-atomic diagnostics.
  Camera-request fields staying constant confirms they are insufficient for
  route navigation or diagnosing the active viewpoint by themselves.
- Work remains: reproduce the exit (a targeted original-script test can first
  isolate camera/visibility behavior), then validate the full combat/subway
  route normally. Scratchy audio and full level1 fidelity remain unresolved.

## 2026-09-13: reliable subway reproduction; camera reapply restores world

- Previous turn advanced state/evidence. Clock17:10:54 UTC was about10h56
  elapsed. Added XML1_TEST_GAME_DIR gated on XML1_TEST_PAD=1; normal launcher
  explicitly clears the diagnostic root. Original ISO/game data unchanged.
- scripts/make-subway-fixture.py validates the100-record FB stream and makes
  a separate ZIP copy with only the map-start script extended. It executes
  verbatim original subwaydowna and subwayupa commands after timed waits.
  This deliberately bypasses fights/approach for isolation, not gameplay proof.
- boot170 optimized180-second run reproduces the human black-world/HUD state.
  Native underground frame1980 is preserved as work/boot170-underground.bmp;
  black frame3120 as work/boot170-reproduced-black.bmp. Read-only RAM/state
  preserved in work/boot170-black-ram.bin and work/boot170-black-state.txt.
  Trace shows the entire up sequence through AI/control restoration, with
  screenFade alpha0 and duration1. Hero is2280/2502.04/0.1. Bound exit3.
- A second --camera-check fixture adds cameraToLocationAngles with the same
  exit coordinates8s after returning, then cameraResetOldSchool8s later.
  boot171 restores visible street geometry/player/enemy after reapply
  (work/boot171-camera-reapply.bmp, frame2100). Reset at tick383507937 is
  followed by black frame2400; defeat follows by frame2640. The character
  was being attacked and near death, so that latter reset observation is
  partly confounded; repeat with controlled survival before claiming causality.
- Reapplying the original exit camera restores the world, strongly narrowing
  investigation to the return to normal gameplay camera. This is a diagnostic
  ablation, not a shipped workaround: neither script nor camera reset is bypassed
  in ordinary game data. The prologue fix alone did not cure the transition.
- Both bounded game processes are terminal. No additional screenshots posted;
  no subway/level completion or audio-fidelity claim. Next: protected diagnostic
  camera comparison, then repair the responsible original runtime behavior and
  validate normal traversal after both fights.

### 2026-09-13: subway reset produces invalid camera coordinates

Boot172 repeated the isolated camera fixture with setallaiactive(FALSE) immediately after the unchanged exit script completes. Wolverine remains alive with unchanged health: camera reapply restores the visible street, second reset returns to black plus HUD. Native evidence: work/boot172-reset.bmp is frame2400 BEFORE the second reset (visible street); work/boot172-after-second-reset.bmp is frame3360 AFTER reset (black world, live hero). No screenshots posted. Baseline game assets unchanged. Fixture hash b836d0ef5eb076cb1780a64bfe4dc1e3cb7e8c7c9f87b55af1dd791e67abfb66. This bypasses approach and fights, so does not validate ordinary traversal.

Opt-in original-camera snapshots at script calls show reset makes camera offsets F8/FC NaN immediately; subsequent updates propagate NaN to Z too. These offsets participate in reset/update calculations, unlike the stale requested-position and +304 matrix fields discussed earlier. Fade current/target remain zero; hero position is the correct subway exit. boot172 and boot173 end at diagnostic bound3.

Boot173 call tracing localizes first corruption before NaN: reset -> 50880 -> 1206E0/120680 angle wrapping -> 341916 -> 348658 -> 34893F. Input 0x4096CBEC (~4.712 radians) to 1206E0 returns corrupted 0x585C0000 (~9.7e14), stored in camera angle234. Later 4B140 normalizes that corrupted angle through 1206E0 and stores NaN into angle230; camera position then becomes NaN. Generated 34893F contains unimplemented FXAM placeholders immediately before FNSTSW-based operand classification. This is a concrete missing x87 operation in the CRT path; precise instruction fix and regression validation are next. Do not claim fixed yet. Boot173 trace originally included interleaved audio calls; reset trace counters/enable are now TLS to keep subsequent traces on the script thread.

Targeted optimized xml1-boot-probe build succeeds. An incidental ALL-target build exposed duplicate symbols in the existing apu-output-lock-test (recomp_apu_dsp_output, recomp_apu_irq_level, xml1_apu_trace_frame, xml1_apu_trace_voices pulled from apu_output.obj); this test-target linkage remains unresolved. Not a game build failure. Scratchy audio remains unresolved independently.

### 2026-09-13: x87 classification implementation, game validation pending

Patch24 xboxrecomp-x87-classification.patch adds shared TLS g_fp_cc status condition bits, implements FXAM classification/sign for the existing double-backed value stack, makes FCOM/FTST publish status separately from comparison/EFLAGS bookkeeping, and makes FNSTSW include live TOP plus those bits. FCOMI retains separate EFLAGS comparison behavior. Conformance harness definitions updated. Intel FXAM reference: https://cdrdv2-public.intel.com/812383/253666-sdm-vol-2a.pdf . Binary64 subnormals loaded in x87 are normal extended-range values; empty tags and unsupported raw extended encodings remain beyond the existing stack representation. This is not a claim of complete x87 emulation.

Compiled x87-status-test passes 112 golden classification/sign/TOP/value-preservation and subsequent FTST reset cases, with FXAM and FNSTSW in separate generated functions. Lifter unittest discovery passes84 tests. Patch stack reverse verification passes24 patches. Full source generation and121 missing-function guards complete. Optimized game build started in exec session67481, output build/x87-game-build.log, still live at this entry. Do not restart a duplicate build; inspect/poll that session/process. Pending: bounded boot174 using subway-camera-quiet-fixture, verify finite camera after original exit/reset and actual native frames. No game-fix claim yet.

Additional observed classifier hazards: generated34893F uses byte SAR as int32 of unsigned-byte value and byte ROL as ROL32. These can mishandle C3/sign classification paths; not changed in patch24. Evaluate the isolated game run and cover these operand widths before claiming general math correctness. Existing all-target apu-output-lock-test duplicate-symbol issue and scratchy audio still unresolved.
`nFull pytest discovery initially found two stale FNSTSW output-shape assertions; updated them to shared g_fp_cc. Re-run passes175 tests and16 subtests. Included those test updates in patch24.

### 2026-09-13: subway exit restored in isolated original-script tests

Optimized game rebuild completed successfully. Boot174 (camera-quiet fixture) keeps finite camera coordinates after the original exit and remains visible after an additional camera reapply/reset. work/boot174-after-second-reset.bmp frame3240 shows living Wolverine on the visible street. Boot175 uses baseline subway-fixture: verbatim original down/up scripts, enemies active, NO extra camera reapply/reset or AI-disable commands. Exit remains visible. work/boot175-exit-combat.bmp frame2400 shows Wolverine with two active enemies by the subway stairs; work/boot175-original-exit.bmp frame3360 shows the later defeat menu OVER a visible world. Death follows idle harness input, not a black-world transition. Both runs ended at their100s diagnostic bound3; no full route/level completion claimed. Before patch24, this same baseline fixture (boot170) produced NaN camera positions and black world after exit.

New user-facing native capture saved as outputs/subway-exit-after-x87-fix.png in the Codex task directory, converted losslessly from boot175 frame2400. Original assets remain unchanged. The normal human launcher uses the newly rebuilt optimized binary and original data, not the fixture. Human traversal of the two fights and exit remains the appropriate wider regression check; audio scratchiness is still unresolved.

Upstream PR49 https://github.com/sp00nznet/xboxrecomp/pull/49 created from fork branch fix/x87-value-classification, commit74458dc. Clean upstream tests161 +10 subtests pass; local patched toolkit176 +16 subtests pass. Added compiled FXAM regression to patch24 and verified complete reverse patch stack. Direct upstream branch push was rejected403; fork push and PR succeeded.

Fixed the existing apu-output-lock-test linkage by supplying its own no-op diagnostic capture hooks, avoiding pulling the production audio output implementation into the test. Target builds and passes: completed PCM copied, device mutex released during output and reacquired afterward, with no audio device. This resolves the duplicate-symbol test-target issue noted above, not scratchy audio.

### 2026-09-13: fresh audio capture after the x87 fix

Boot176 completes60-second bound3 with original data, optimized x87-fixed game, native DX8 and original DSP firmware. Captures preserved: work/boot176-dsp.pcm (57.349s) and work/boot176-transfers.bin. No screenshots posted. Source comparison work/boot176-audio-comparison.json: energy alignment0.944, selected waveform correlations absolute0.423/0.439/0.424/0.477. This is exploratory similarity, not fidelity. A phase-aligned first20s difference measurement still shows a strong256-sample discontinuity: phase0 mean807.37 vs medianphase72.94 (ratio11.07); earlier boot167 ratio9.71. The x87 camera fix does NOT resolve the pre-playback audio artifact.

New read-only EP loader trace (work/filter-boundary-replay/trace-loader176.log) shows API6 selected with X:BC1=0/X:BC3=2, P:10C=1C35/P:10D=0. At P:260, N0=0, i.e. the selected program loader has zero length. It then runs the already resident entry304. API helper180 sets N5=1; 2E7 clears B and2E8 moves N5 toB; entry304 sees nonzeroB, leading to flags008002 and filter initialization1 on successive blocks. This is a lead into control/program selection, not permission to clear the flag or bypass the filter. The recorded bootstrap has the same zero API6 size. EEPROM XC_AUDIO already correctly reports stereo0 (tests/audio_settings_test.c), so simply changing audio EEPROM mode is not a supported fix.

Replay session48387 is terminal: intentionally limited10000 EP frames, exits4 with Capture exceeds frame limit (61656reads,9998writes). This is a partial diagnostic trace, not complete replay success. Local replay source was instrumented only to read loader registers for frames0-3; no DSP state modified. Root code unchanged this turn. Next: establish why zero-length alternate program selection repeatedly requests filter initialization, and isolate its contribution without shipping a filter bypass. Windows queue underruns may be an additional issue but cannot explain the captured waveform discontinuity by themselves.

### 2026-09-13: controlled offline filter-history experiment

New local-only work/ep-reset-experiment replay isolates the repeated initialization. Baseline4000 EP frames produces3998 output blocks (1,023,488 stereo samples). Suppressing descriptor bit15 in B1 only atPC519 after the first processed frame initially failed strict replay: firmware requested312 bytes of saved history at scratch7134 that the original reset-every-block capture never read. This failure is evidence that changing initialization changes memory traffic, not a successful audio comparison.

Added an explicitly scoped experimental history store: record the DSP's own312-byte writes at7134 and serve only the newly introduced reads from that store; require a prior write. All other reads still match the original captured transfer sequence exactly. Successful4000-frame experiment reports3997 suppressed resets,3998 history writes,3997 history reads. This modifies ONLY the offline replay, not the game or shipped DSP runtime. Inputs are work/boot176-transfers.bin. Outputs work/ep-reset-experiment/baseline.bin/.pcm and history.bin/.pcm; logs baseline.log/history.log. Early failed suppressed.bin is only256 frames and must not be used for comparison.

Across equal-length output prefixes, 256-sample boundary mean/median delta falls from955.18/88.75 (10.76x) to189.01/90.40 (2.09x). Source waveform correlation improves in sampled windows to absolute0.545/0.619/0.659/0.690, with energy alignment0.944. This isolates a major artifact contribution from repeated initialization but does not prove full audio correctness, perceptual quality, or the right production fix. Remaining work is to explain original EP program selection/control that leaves initialization enabled, then fix the actual runtime/translation fault. Do NOT promote the experimental bit clear/history workaround into the game as a fidelity fix.

### 2026-09-13: concrete EP program-selection translation fault

Located bootstrap image prefix in original XBE at guest6F1300, referenced by original37908E. That initializer uploads six program bodies and builds the EP API table using378EDE. In the final selector case, original sequence DEC EAX; MOV EAX,[EBP+C]; JE must branch on DEC's result. Generated code instead tested the newly loaded output pointer, choosing the default zero pointer/zero length for selector5. Intended body is6F80F8 with lengthC9 DSP words. This directly explains the observed zero-length API6 table and is a CPU translation fault, not a reason to alter filter firmware.

Patch25 xboxrecomp-incdec-result-snapshot.patch saves the width-correct INC/DEC result, sign and overflow at the arithmetic instruction; conditional consumers use that snapshot while CF stays unchanged. Signed predicates account for overflow. Translator declares snapshot temporaries for INC/DEC functions. Added288 compiled overwritten-register cases covering8/16/32-bit INC/DEC, zero/sign/overflow/signed-less conditions; these pass alongside2940 existing translated flag/carry cases. One initial test used unsupported SETO and was changed to JO to test the intended arithmetic flag behavior without expanding opcode scope. Full existing pytest discovery176 +16 subtests passes. Complete25-patch reverse validation passes.

Regeneration completed with guards. Verified actual378EF6 now saves decrement result in_fa, loads the pointer, then tests_fa==0. Optimized build is RUNNING in exec session76274, output build/incdec-result-game-build.log (targets xml1-boot-probe and guest-flags-test). No game run yet with patch25. Keep session; do not start duplicate builds. Next boot177 should capture original movie DSP PCM/transfers without fixture/input, verify API6 lengthC9 and compare audio, then recheck subway because the flag fix affects the whole title. No audio-fix or complete-level claim yet. All filter-history suppression remains offline-only.

### 2026-09-13: correct EP program loaded; audio not yet correct

Optimized patch25 build completed successfully. guest-flags-test passes3228 executed cases (288 new overwritten-result cases plus2940 existing). Added standalone compiled regression test_incdec_result.py to patch25: fails on prior upstream INC/DEC branch with input1/DEC/ZF after MOV, passes with correction. Clean upstream branch169 tests +10 subtests pass. Existing PR44 updated rather than duplicated: https://github.com/sp00nznet/xboxrecomp/pull/44 , fork branchfix/incdec-unsigned-conditions commit6f97b13. Full25-patch reverse verification passes.

Boot177 uses original data and normal DSP behavior, no offline reset suppression. Completes60s bound3. Captures work/boot177-dsp.pcm (57.669s), work/boot177-transfers.bin. EP table API6 is now1C35/C9; observed corresponding scratch read at70D4 is804 bytes, proving actual intended program transfer (previously0 bytes). Source comparison correlations improve to0.801/0.623/0.734/0.753; energy0.952. Still NOT audio-correct: first20s phase0 delta1277.60 vs ordinary median95.77 (13.34x), with another large spike atphase32=1314.37; phases64..224 are roughly91..97. The discontinuity changed shape instead of disappearing. Clipping also remains. No claim of audible quality made.

All game changes remain genuine runtime/translation fixes; experimental filter-history suppression is still local offline-only. No game processes or builds remain running. Next: inspect the newly loaded C9-word program (originalXBE6F80F8) and its32/256-sample output behavior, recheck subway after the global flag fix, then continue complete-level/audio fidelity work. Disassembler available build/dsp56300/release/dsp56300-disasm.exe. No new screenshots posted this turn.

### 2026-09-13: subway recheck and DSP ring phase correction

Boot178 rechecked the unmodified down/up subway scripts in the isolated fixture after the global INC/DEC correction. The camera remains finite; native frame3000 shows living Wolverine and enemies at the subway exit. Original approach/combat traversal still needs a human retest. No duplicate screenshot posted.

Disassembled the correctly loaded C9-word EP program: five-channel stereo downmix. Captured EP input already contained the phase0/32 discontinuities. In boot177, all53800 EP channel reads exactly matched the latest captured GP writes when mapping GP8000 to EP10000 (observed payload agreement, not a general SGE mapping assumption). Per-channel ring stamps showed5574 of10760 reads combining different ring generations. The APU core incremented ep_frame_div even while FECTL stopped VP/GP/EP processing, changing the EP read phase on resume.

Patch26 xboxrecomp-idle-dsp-phase.patch preserves DSP phase and pending monitor PCM while native output supplies paced silence during inactive intervals. It does not alter firmware, sample values, ring pointers, or the HLE output path. Boot179 original assets,60s bound3:10983 EP reads, all identical to latest GP writes, ZERO mixed-generation reads; every read has the same contiguous age pattern15..8. First20s phase0 discontinuity falls from13.34x the median to1.006x; phase32 also becomes ordinary (97.42 vs median96.80 s16 units). Source movie energy correlation improves0.952 to0.991 and sample-window correlations to0.925/0.809/0.885/0.934. These are objective improvements, not proof of full audio fidelity or absence of clipping/underruns in other scenes.

Added scripts/check-dsp-ring-continuity.py for reproducible strict capture parsing and ring-generation analysis. Extended the native audio lock test: inactive output must submit silence with the device mutex released/reacquired, preserve all eight DSP phases, and preserve pending PCM. Test passes; optimized game and test targets build successfully. Complete26-patch stack reverse verification passes. Captures/reports remain local work/boot179-*. Latest optimized executable contains this fix. No game process remains running. Goal still active; normal subway traversal, full level1, listening and remaining audio fidelity need validation. Elapsed approximately12h20m of30h at this checkpoint.

### 2026-09-13: broader audio evidence and human test resumed

Boot180 captured voice76 source, premix, GP and final PCM for35s. First movie source and subsequent stages have identical L/R channels throughout this capture despite stereo format5A01E0E6 and stereo ADX assets. Source fit against both original ADX channels at lag3904 is0.99972 correlation with approximately0.72*L+0.72*R duplicated into both outputs. This explains much of the prior single-channel reference correlation deficit; do not treat that deficit alone as decoder distortion. Source clipping6370 samples and final4332 remain across the35s run. Premix/GP waveform-window correlations match, but GP applies gain: they are NOT sample-identical (whole-capture RMSE0.103). Movie stereo mixing remains unresolved. Added opt-in read-only XML1_TRACE_ADX call tracing. Boot18220s shows ADXT_Create with two channels; no traced SetOutPan calls. Further trace needed to locate actual mix/downmix configuration. Work scripts and reports source-stereo-fit.py, source-format-ranges.py, audio-stage-report.py, boot180-*. Original level scripts extracted read-only under work/level-script-inspection.

Boot181 original data, process-local input only,300s bound3: movement, obstacle collision, attacks/object destruction exercised, but no normal subway traversal or level completion. Gameplay stereo is distinct (only7.05% identical L/R frames including silence),191 full-scale samples across the300s capture. All diagnostic runs have ended.

User asked to drive again. First launch failed before game start because PowerShell7/.NET left null diagnostic environment settings as empty values (Invalid XML1_DSP_JIT mode). playtest.ps1 now explicitly removes absent environment variables and restores absence afterward. Successful visible human session launched2026-09-13 18:32:44UTC: exec26412, gamePID9260, log build/human-playtest-20260913-143244.log,30-minute bound. Original data, Windows XInput, latest camera/INCDEC/DSP-phase fixes. DO NOT send process-local input, restart, rebuild running executables, or interfere while user tests. Wait for user feedback; read-only logs allowed. Goal still active, approximately12h19m elapsed of30h. No new screenshots posted.

### 2026-09-13: read-only CRI stereo-path mapping during human playtest

Human session26412/PID9260 remains live; no input, restart or executable rebuild performed. Mapped original CRI backend: global5BF27C initialized by3096C0 from30B610 -> vtable476738; factory +14 ->30AC80, object vtable476750. Constructor stores output/input channel counts at+2C/+30 and leaves stereo pan+44/+48 zero. Original30B460 selects direct stereo interleave30B260 only when pan=-15/+15; otherwise runs30B2A0 and30B340, using the original cosine table42C5A8 (index15 approximately0.7071). That original mix path can account for the duplicated channels and gain in the movie capture. This is NOT yet proof of a translation bug or that original hardware would output differently. Need observe actual object pan/configuration and its setup before changing semantics. Extended opt-in XML1_TRACE_ADX to backend factory/mixer/setter addresses and read-only object state. Source edit only; intentionally NOT built while the user plays. Current executable remains the version launched18:32:44UTC.
