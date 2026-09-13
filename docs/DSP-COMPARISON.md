# DSP comparison diagnostics

The default remains the C DSP interpreter. The optional Rust EP comparison is
not a validated replacement. Its loop optimization corrupts the game's block
length; disabling it allows playback but still gives different control-data
reads in offline replay. Do not use it as a fidelity oracle.

The xemu bridge is pinned at75650bd8cd91945f7b79774e2cee0b200ca373ff.
Its DSP56300 dependency is v0.1.3, commit
bde7c233a447d32d558c48cb4438e1425fe0bbcc from
https://github.com/mborgerson/dsp56300. Local source is in
work/reference/dsp56300. Rust1.96.0 MSVC is installed only under build/rustup and
build/cargo; no user PATH modification was made.

To rebuild that existing local reference:

```powershell
$env:RUSTUP_HOME="$PWD/build/rustup"
$env:CARGO_HOME="$PWD/build/cargo"
$env:CARGO_TARGET_DIR="$PWD/build/dsp56300"
./build/cargo/bin/cargo.exe build --manifest-path work/reference/dsp56300/Cargo.toml --release --locked -p dsp56300-emu-ffi
```

Configure optional CMake cache paths OPENXML1_DSP56300_LIBRARY to the resulting
build/dsp56300/release/dsp56300_emu_ffi.lib and
OPENXML1_DSP56300_INCLUDE_DIR to the reference's crates/emu-ffi/include directory.
Leave XML1_DSP_JIT unset for C. Setting it to ep selects only the encode processor;
1 selects both processors. Unsupported requests fail explicitly. Logs identify
the selected engine. No runtime switching is implemented.

Native APU bootstrap/memory tests pass with C and JIT. The pinned Rust project's
31 library tests and1009 integration tests pass. These do not prove this game's
DSP programs execute correctly. boot150's temporary trace (since removed) shows
EP reaching PC4D5 with a33,129,090-cycle count and large run-budget debt; investigate
this behavior before drawing C-versus-JIT audio conclusions.

Capture switches:

- XML1_CAPTURE_APU_MIX: stereo mixbins0/1 before GP, apu-premix-stereo.f32.
- XML1_CAPTURE_GP_PCM: xemu's GP monitor tap at X:1400/1420, apu-gp-stereo.f32.
  This tap alone is not proof of the GP's actual outgoing data.
- XML1_CAPTURE_DSP_TRANSFERS: apu-dsp-transfers.bin records three little-endian
  uint32 fields (kind,address-or-index,byte-count), then raw payload. Kinds0/1
  are GP FIFO writes / EP FIFO reads;2/3 are GP scratch writes / EP scratch reads.
- XML1_CAPTURE_DSP_PCM: final submitted stereo s16 output and timeline.

All capture files are in build/. Transfers may include original DSP program
bytes and remain local/excluded from Git. extract-dsp-transfer-stereo.py extracts
observed 24-bit scratch channels; it neither guesses routing nor alters playback.

boot152 proves the actual GP/EP boundary for the first movie: GP writes32-word
channel blocks into scratch rings8000/8800; EP reads256-word blocks from its
10000/10800 rings. Both rings span2048 bytes. Extract with kind2/chunk128 or
kind3/chunk1024 and those observed addresses. Both retain waveform correlations
0.925/0.809/0.885/0.934 at the tested reference windows. The weaker final output
therefore arises after those samples enter EP processing. This is a diagnostic
boundary, not proof of an incorrect instruction or a completed audio fix.

## Isolated filter and replay results (boot153-157)

The original filter at P:5CA starts with X:63C=256. C execution and JIT single
steps preserve that value. JIT compiled execution overwrites it during the
filter; the next filter then uses a much larger count. This explains the huge
cycle debt. The isolated fixture uses locally extracted firmware only and is
kept in work/filter-probe; it is not distributed. Temporary bridge/register
tracing was removed. The exact optimizer defect is not fixed.

patches/dsp56300-no-inline-do.patch adds an opt-in diagnostic check to the pinned
Rust source. Applying it there, rebuilding, and setting XML1_DSP_NO_INLINE_DO=1
disables DO/DOR inlining. boot157 used that patch with EP JIT and completed a
60-second native DX8/APU run at diagnostic bound3 with nonzero audio. Source
comparison correlations were 0.437/0.444/0.412/0.500 at 1/3/5/7 seconds: similar
to C, not evidence that either is correct. The reference checkout/library were
then restored to the original pin; setup does not apply this patch.

tools/ep-replay is a standalone terminal diagnostic built with:

```powershell
cmake -S tools/ep-replay -B build/ep-replay -A x64
cmake --build build/ep-replay --config Release --target ep-replay
./build/ep-replay/Release/ep-replay.exe work/boot152-transfers.bin work/new-replay.bin
```

It supplies captured EP scratch/FIFO reads only when kind, address and byte
count match exactly, retaining zero-length requests. GP records are validated
and skipped. FIFO writes are saved as two uint32 words (index,size) followed
by payload. Output must be a new file. Invalid/truncated records, mismatches,
and execution limits fail explicitly. EP_REPLAY_STEP selects single stepping.
The optional JIT uses the same CMake paths described above.

On boot152, C consumes 31,634 EP reads and emits 4,519 FIFO writes. FIFO0 PCM
matches all 960,000 channel samples in the first ten seconds of nonzero movie
audio exactly: live sample-frame start287948, replay start285644 (2304 frames
of startup offset). This validates that portion of the replay against actual
submitted audio. Whole-capture equality and audio fidelity are not established.

JIT, both single-step and with DO inlining disabled, fails at EP read8: capture
expects scratch70D4/96 bytes, but JIT requests70D4/0. Replay does not invent data
or skip this mismatch. Captures do not contain every possible host MMIO write
or timing event; this divergence alone does not identify an instruction bug.
Further comparison needs that control path explained first.
