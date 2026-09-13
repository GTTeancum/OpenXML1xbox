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
