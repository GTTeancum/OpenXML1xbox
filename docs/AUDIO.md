# Audio bring-up

The live game produces original DSP audio through XAudio2 with mapped DMA and
stateful voice resampling. Consumer-paced output now produces samples near real time in boot115; complete
audio fidelity and synchronization remain unverified. Details below retain the
bring-up history.

XboxRecomp at 3706cefa includes XAudio2 error handling (PR31) and synchronized
DirectSound cursors (PR24). Its GP/EP DSP file is explicitly a passthrough stub.
RECOMP_APU_DSP_ACK clears command words without executing DSP programs; it is
not enabled for XML1. The game host now initializes the APU and routes its MMIO
when run with `-APU`; the GP/EP source is replaced by real interpreter processing.

## Interpreter dependency

external/xemu-dsp contains xemu's C DSP56300 interpreter and DMA implementation
from 75650bd8cd91945f7b79774e2cee0b200ca373ff. See its SOURCE.md and COPYING.
The narrow adapters remove UI configuration/JIT dependencies and provide the
allocation/endian/trace definitions required by standalone MSVC compilation.
Instruction arithmetic and DMA behavior come from the pinned implementation.

Build and run the adapter checks:

```powershell
cmake -S external/xemu-dsp -B build/dsp -A x64
cmake --build build/dsp --config Release
./build/dsp/Release/dsp-core-test.exe
```

The tests execute 640 immediate-add vectors through the instruction decoder,
including both accumulators, positive/negative boundaries and extended carries.
They also execute scratch-memory DMA in both directions with neighboring-byte
guards and verify bootstrap word masking. These checks pass on MSVC; they do
not validate full DSP instruction coverage, timing, effects or game audio.

## GP/EP connection

src/apu_dsp_real.c adapts the pinned xemu GP/EP reset, memory registers, DMA and
frame processing. scripts/adapt-apu-dsp.py records the standalone adaptations;
patches/xboxrecomp-dsp-integration.patch replaces stale toolkit DSP structures,
routes GP/EP MMIO and connects cleanup. It applies cleanly to the pinned source.

`apu-dsp-test` passes GP reset/bootstrap across scatter/gather pages and GP/EP
X/Y/P/mix-buffer register round-trips. It opens no audio device. The existing
640-vector core/DMA/bootstrap test also still passes in the combined build.

`run-boot-probe.ps1 -Seconds 20 -TestPad -LiveDX8 -APU` now exercises the APU
register handler. boot-020/021 reaches an initialization/cleanup loop with
0x8007000E on the guest stack, earlier than the previous DSP command wait.
This was not an out-of-memory condition: a subsequent native-thread probe located
the actual wait in the AC97 channel-reset poll. Startup register handling now
self-clears reset and preserves interrupt enables, tested without an audio device.
The contiguous-window MmGetPhysicalAddress fix then allows DSP scatter/gather DMA
to read physical offsets. boot-025 starts the APU, creates the audio worker and
opens x_common.zsM, before rejecting DSP opcode 0x0c1890 at PC 0x0519.
EXTRACTU immediate is now implemented for normal arithmetic mode from NXP's
DSP56300FM Rev. 5, pp. 13-72/73; 17,040 independent instruction vectors pass.
Sixteen-bit arithmetic mode remains explicitly unsupported. boot-026/027 passes
that instruction and reads the common sound bank, then stops at a Y-memory
bounds assertion: PC 0x031e, opcode 0x5ee800, address 0x0fc9 (R0=0x0fc2, N0=7).
Program/register context is recorded before the original assertion; mapping,
program setup and decoding still need investigation. AC97 DMA progress is not implemented.

boot-029 identifies that failure as EP execution. The toolkit advertised
0x00010001 (mono plus AC3), incorrectly labeled stereo in its source, while
the native output is two-channel PCM. The fifth toolkit patch reports stereo
PCM (0), verified against Cxbx's src/common/EmuEEPROM.h definitions and by a
settings API test. boot-030/031 passes this startup point and loads x_voice.zsS;
the sampled game thread now waits in D3D sub_0035FDE0. The encoded-output DSP
failure remains unresolved; stereo output correctness is not yet verified.

## Remaining integration

- Resolve APU physical memory correctly. The current diagnostic runtime backs
  low guest RAM and the 0x80000000 contiguous allocation window separately;
  the current connection uses contiguous RAM for the observed DSP allocations.
  Low-memory PCM buffers and all physical-address translations remain unverified.
- Diagnose the Y-memory bounds failure, then exercise the game's
  actual GP/EP programs beyond the synthetic integration tests.
- Validate the actual command completion, decoded/mixed output and timing through
  native logs/captures. Do not replace the wait with a success-only return.

Current evidence: build/boot-019-live-dx8.log, build/build-dsp-test.log and the
executed dsp-core-test output. No FMV/audio milestone is claimed.

## Native DSP output routing and silent APU diagnosis (boot080–082)

The inherited monitor discarded the completed256-frame DSP buffer, cleared it,
and filled a1024-frame XAudio2 submission from a separate HLE software mixer.
Root builds now enable RECOMP_APU_NATIVE_DSP_OUTPUT through ordered toolkit
patch10, submitting the actual256 stereo samples and preserving them across
bounded XAudio2 backpressure. Inactive XAudio2/submission failure is explicit.
The legacy HLE mixer remains the upstream default when the macro is absent.

src/apu_output.c optionally captures precisely the submitted samples with
XML1_CAPTURE_DSP_PCM=1 to build/apu-dsp-output.pcm (s16le,48kHz,stereo) and a
wall-time/sample-count CSV. This is own-process PCM, not host loopback capture.
The output regression verifies stereo payload preservation across two rejected
submissions, with no audio device opened. GP/EP bootstrap/MMIO tests still pass;
the DSP adapter regenerates byte-identically and all ten patches are idempotent.

boot080/081 captures are entirely zero. GP/EP reset flags are both3, but sampled
VP mixbins are zero. boot082 then identifies an APU transition from active
FECTL100F to trapped FECTL1FEF, ISTS60, IEND9; DSP frame processing stops while
the output path continues silence. Standalone pci_irq_assert is a stub. The
next required work is real process-local delivery to the registered guest ISR,
plus the earlier silent voice/memory path. Do not bypass the trap or pretend
completion. No audible fidelity milestone is established. Sample production is
also slower than48kHz wall time (192000 frames in about4.96s), requiring timing
validation after interrupt/voice processing works. FMV timing remains open.

## APU interrupt delivery (boot083–084)

Ordered patch11 publishes the APU interrupt level to the connected guest vector5
handler0037342F (context010810F4). The kernel dispatcher invokes it on its guest
stack/TIB, at the registered IRQL, and checks stack cleanup. The guest handler
acknowledges the APU registers; the implementation does not clear the trap on its
behalf. KeGetCurrentIrql now returns the actual thread-local tracked IRQL rather
than constant0. Dispatcher creation is shared/synchronized with timer startup.

boot083/084 show claimed interrupts and transitions from trappedFECTL1FEF back
to active1F0F, with DSP execution continuing past20480 frames. The synthetic
device IRQ regression verifies context, device IRQL, acknowledgement, no repeat
after deassertion, reassertion, stack cleanup and restored IRQL. Prior thread
dispatch and PCM payload/backpressure regressions still pass. All11 ordered
patch checks and DSP adapter regeneration pass.

Audio remains silent. boot084 reports VP voice table base00848000,4–6 active
voices, and heads0043/004C, so voice activation occurs. First activevoice64 is a
looping16-bit mono voice (format5200E0E6); it may be a persistent silent helper.
Do not infer the contents of the other active voices from this first voice.
Next: trace all active voice source/SG or stream segments and samples before
mixing, and verify low guest RAM versus contiguous physical backing. The current
voice_resample ignores pitch ratio and will also need real resampling for audio
fidelity; its separate libsamplerate shim is stubbed but is not used by that path.
No recognizable FMV or audible correctness milestone has been established.


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


Long-run failures remain: boot122 asserts on a zero streaming segment address;
patch17 records descriptor context without bypassing the assertion. boot124
instead completes the intro sequence and then blocks the main thread entering
DirectSound critical section0037A70C. Lock ownership/recursion and guest IRQ/DPC
interaction are the next investigation. Correct sustained audio is not verified.


The zero-offset failure is now explained: boot127 records guest80000000 passed
to MmGetPhysicalAddress at0037800F and returned as physical0 immediately before
the assertion. Patch19 accepts valid physical0; actual stream-reader regressions
verify both16-bit PCM and known stereo ADPCM at that address. Patch18 separately
publishes IRQL to guest fs:[0x24] and runs DPCs at dispatch level. boot128 reaches
the main menu with both fixes. Full audio fidelity and level1 remain unverified.


Audio comparison remains weak even with independent native vblank observation.
XML1_CAPTURE_APU_MIX optionally records48-kHz stereo mixbins0/1 immediately before
DSP processing as build/apu-premix-stereo.f32. Their mismatch with the decoded
movie reference shows the final DSP/output stage is not the sole investigation.
scripts/compare-movie-audio.py accepts s16 PCM or --native-format f32 captures;
its exploratory normalized correlations exclude quiet windows and do not certify
perceptual quality, channel routing or full-band frequency response.

Diagnostic patch20 compares SSL and voice format fields without changing them.
boot136 voice68 agrees on ADPCM container2, samples-per-block2, stereo1, with
valid physical0. This does not support overriding voice fields from descriptors.
boot135 sustains APU output while reaching level1 and accepting movement, but
reference waveform mismatch and full audio fidelity remain unresolved.
