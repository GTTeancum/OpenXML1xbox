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
