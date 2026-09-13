# Audio bring-up

The live game currently waits in the DSOUND DSP command path after presenting
the legal splash. Correct audio and advancement beyond that wait are not proven.

XboxRecomp at 3706cefa includes XAudio2 error handling (PR31) and synchronized
DirectSound cursors (PR24). Its GP/EP DSP file is explicitly a passthrough stub.
RECOMP_APU_DSP_ACK clears command words without executing DSP programs; it is
not enabled for XML1. The template-based game host also does not yet initialize
the standalone APU or route its MMIO to the provided handler.

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

## Remaining integration

- Replace the toolkit's stale embedded DSP structures with the imported API,
  and connect GP/EP reset, memory registers, frame execution and DMA callbacks.
- Resolve APU physical memory correctly. The current diagnostic runtime backs
  low guest RAM and the 0x80000000 contiguous allocation window separately;
  blindly passing low guest RAM as a unified physical array is incorrect for
  the observed contiguous DSP resources.
- Initialize the APU and route memory-mapped register faults in the game host.
- Validate the actual command completion, decoded/mixed output and timing through
  native logs/captures. Do not replace the wait with a success-only return.

Current evidence: build/boot-019-live-dx8.log, build/build-dsp-test.log and the
executed dsp-core-test output. No FMV/audio milestone is claimed.
