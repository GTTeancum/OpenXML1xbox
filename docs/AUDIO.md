# Audio bring-up

The live game currently waits in the DSOUND DSP command path after presenting
the legal splash. Correct audio and advancement beyond that wait are not proven.

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
