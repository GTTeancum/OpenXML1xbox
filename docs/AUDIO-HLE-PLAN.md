# Replacing APU emulation with a native DirectSound implementation

Status: implemented (src/dsound_hle.c, src/dsound_mixer.c, src/dsound_output.c).
Headless runs reach the intro movies and main-menu music with no DirectSound
fatal. Audible acceptance on real hardware and speakers is still required;
see "Results" and "Open questions".

## Why change direction

The current path (docs/AUDIO.md) emulates the MCPX APU at the register level:
the voice processor, the GP/EP DSP56300 programs through xemu's interpreter, the
effects image and AC97 DMA. Every fidelity problem is somewhere in that
emulation, and the frame-rate-coupled break-up is caused by that thread's
per-block CPU burst. The game does not need any of it. It only talks to the
XDK DirectSound library. That library is statically linked into the XBE and is
the only code that touches the APU.

The proposal is to replace DirectSound at its public entry points with native
C that mixes the game's own sample data and sends it to XAudio2. The game's
sound system, ZSND banks, 3D panning maths, music manager, Sofdec movie audio
and WMA soundtrack decoder all keep running unchanged as recompiled code. The
APU, DSP, VP, AC97 and libsamplerate paths are then no longer exercised.

This is HLE of an Xbox library, not emulation of hardware. It is the same
technique this port already uses for XInput (src/guest_input.c) and D3D Swap.

## Evidence

### The DSOUND library and its public surface

`scripts/scan-xdk-symbols.ps1` (pinned XbSymbolDatabase 20eced54, built with the
VS 18 2026 generator) names 113 DSOUND functions in the XBE. The library section
spans 0x0036F300-0x003791C0 (436 recompiled functions).

A scan of the generated code for direct calls that enter the DSOUND section from
outside it gives the complete direct-call API the game uses:

| Group | Entry points (XBE VA) |
|---|---|
| Device | DirectSoundCreate 00371AF8, IDirectSound_Release 0036F5C1, CreateSoundBuffer 0037192E, DirectSoundCreateStream 00371B3F, GetTime 0037068D, DownloadEffectsImage 00370666, DirectSoundUseLightHRTF 0036F5F2, DirectSoundDoWork 0037084D |
| Buffer | Release 0036F5DC, Play 00370719, Stop 0037073D, StopEx 00370755, GetStatus 00370799, SetBufferData 00371384, SetFormat 00371368, SetLoopRegion 00370779, SetFrequency 00370D0C, SetVolume 003706A9, SetHeadroom 003706E1, SetEG 003706C5, SetMixBins 00370D28, SetMixBinVolumes 003706FD, Lock 003707F1, Unlock 0036F5D7, GetCurrentPosition 003707B5, SetCurrentPosition 003707D5 |
| Stream | SetFormat 003713A4, SetMixBins 00370D44, SetMixBinVolumes 0037082B, SetVolume 00370821, SetHeadroom 00370826, Pause 00370830, FlushEx 00370835 |
| Media object | XFileCreateMediaObjectAsync 00370876, and two unnamed 5-byte thunks 0036F65B and 0036F660 still to identify |

No 3D calls (SetPosition, listener, cones) are made. The game computes
positional audio itself and applies it through SetMixBinVolumes.

Streams are also driven through their XMediaObject vtable (offsets 0x0C-0x24
at 00192A10, 00192DE0 and 00193370). Those targets are the CDirectSoundStream
methods already named: AddRef 0036FE18, Release 0036FE5F, GetInfo 0036FEAD,
Discontinuity 0036FF14, Flush 0036FF61, GetStatus 0036FFAC and Process
0036FFFD. The file media object that reads packets from disc is ordinary CPU
code over the kernel file API and can stay as recompiled code.

### The three clients

| Callers | Client | Usage |
|---|---|---|
| 0018FE50-00193870 | Raven sound system | ZSND one-shots through SetBufferData on bank data in guest memory. Streamed music and ambience through DirectSoundCreateStream and events from CreateEventA. Custom soundtracks go through the guest WMADEC library (e.g. 0037BCA1), which produces PCM packets. |
| 0030A970-0030B7C0 | CRI Sofdec/ADX `mwSnd` (FMV audio) | Classic ring buffer: CreateSoundBuffer, Lock/Unlock, GetCurrentPosition, SetFrequency, SetVolume. Balance is set through SetMixBinVolumes. |
| 0033CCA0-0033D630 | Alchemy `igDx8AudioContext` | Its own DirectSoundCreate and buffers. Whether the game uses it at runtime is still to be checked. |

### Data formats

The remake's Docs/02_AUDIO_RESEARCH.md and scripts/zsnd-reference.py
establish the bank data: Xbox ADPCM (format 0x0069, 36-byte blocks per
channel, 64 samples per block, stereo nibbles in 4-byte runs), decoded
bit-exact against ffmpeg's adpcm_ima_xbox. One-shots are 22.05 kHz mono and
music is 44.1 kHz stereo. The same decoder serves buffers and streams.

### Runtime hooks

The recompiler replaces a guest function by name when it is listed in
config/manual-functions.json. Both direct and indirect (vtable) calls then
dispatch to the hand-written C function, which reads stdcall arguments from
g_esp and sets g_eax. Guest event handles are host Win32 handles
(kernel_sync.c xbox_NtSetEvent), so a host audio thread can signal packet
completion directly.

The upstream xboxrecomp audio/dsound_device.c is a host-API stub, not wired to
guest memory or the XDK ABI. It is not a usable base.

## Design

1. **Guest-facing layer** (new src/dsound_hle.c). Entry points from the table
   above. It keeps opaque guest-visible objects allocated in guest memory so
   the guest can hold pointers, plus host-side state keyed by them. Before
   writing each function, read the XDK struct layouts from the guest callers:
   DSBUFFERDESC, DSSTREAMDESC, XMEDIAPACKET, DSMIXBINS, DSENVELOPEDESC and
   the effects image descriptor returned by DownloadEffectsImage.
2. **Voices.** A buffer voice points at guest bytes (SetBufferData does not
   copy). It has a format (PCM 8/16-bit or Xbox ADPCM), loop region, play
   cursor, frequency, volume, headroom, envelope and a mixbin volume set. A
   stream voice holds a FIFO of guest packets. On consumption it writes
   completed size and status and signals the packet event.
3. **Mixer.** A 48 kHz float mixer. It uses per-voice sample-rate conversion
   and mixbin volumes in hundredths of a dB, and folds the Xbox speaker bins
   (FL, FR, C, LFE, BL, BR) down to stereo or keeps 5.1 when the device has
   it. FX-send bins (reverb) are dropped in the first cut. They can be mapped
   to an XAudio2 reverb submix later.
4. **Output.** A single XAudio2 source voice fed by the mixer on its own
   thread. The existing device-recovery logic (audio_device_recovery.h) is
   reused. Nothing runs on the frame thread, so a low frame rate cannot starve
   audio.
5. **Clock.** GetCurrentPosition, GetTime and stream status derive from
   samples actually consumed by the device. Sofdec uses these for A/V sync, so
   they must advance in real time and not per frame.
6. **Switch-over.** Controlled by a build.ini/environment switch while the LLE
   path remains available for comparison. Once it is accepted, stop
   initializing the APU and remove the -APU MMIO route from the default
   configuration.

## Verification plan

- Unit tests for the ADPCM decoder against zsnd-reference.py output, the
  mixbin/volume maths and the stream packet lifecycle, without an audio
  device.
- Own-process PCM capture of the mixer output (as XML1_CAPTURE_DSP_PCM does
  now). Compare it to zsnd-reference.py for menu_flip and menu_accept, and to
  the decoded FMV reference for the first movie.
- Log every DSOUND entry point hit on boot, menu, movie and level 1. Any call
  outside the table above is a fatal, recorded error, not a silent success.
- Audible verification by the user in the staged build: menu music, menu
  cues, FMV lip sync, combat, and a low-FPS scene.

## Results

Implementation notes that differ from the design above:

- The recompiler's JSON overrides replace a function outright. Its wrap mode
  renames the body that direct call sites use, so a runtime switch back to
  the emulated path is not available. The pre-change executable was kept for
  comparison. `XML1_APU` is now ignored with a notice.
- Headroom follows the XDK rule recovered from 0037146F: 600 (6 dB) for 2D
  voices, 0 for 3D, mix-in or FX-in voices.
- A stereo voice is one native stereo hardware voice. Its count is
  ((channels-1)>>1)+1 (00374B08), and mix-bin slot b takes channel b % 2.
  Volumes are held per bin id (00374E7C).
- Stereo output renders only FL and FR. The game's music stream uses the bin
  list FL, FR, C, BL, BR, LFE, all at 0 dB except LFE at -11.68 dB. Under
  slot-b-takes-channel-b%2 that puts left into C and BR and right into BL.
  A Lo/Ro fold measured as left = 1.04L + 0.43R, right = 0.86L + 0.61R on
  the menu music, which is audibly lopsided. Front-only is consistent for
  the music, the game's own quad panner (FL/FR levels) and Sofdec (FL/FR).
  The emulated EP output could not settle this. Regressing it onto the
  pre-DSP FL/FR bins explains 2.6% of its energy, consistent with the
  earlier finding that the EP stage itself is wrong.
- Opt-in diagnostics: `XML1_CAPTURE_DSOUND_PCM=1` writes exactly the
  submitted samples to build/dsound-output.pcm (s16le, 48 kHz, stereo).
  `XML1_DSOUND_TRACE=1` logs buffer creation and mix-bin calls with the
  guest caller.

Measured evidence (headless, muted, build/dsound-hle-run1..3.log):

- ADPCM: dsound-mixer-test decodes menu_flip, menu_accept and 400 stereo
  blocks of menu_c with 0 mismatches against zsnd-reference.py (itself
  bit-exact with ffmpeg). Fixture: scripts/make-adpcm-fixture.py.
- Output pacing: in 58 s the XAudio2 queue was never observed empty
  (empty_observations=0), with steady 10.4-10.7 ms submission gaps.
- Sofdec i102: found in the capture with 0-sample lag drift over the whole
  movie. Mono waveform correlation in 0.5 s windows had a median of 0.9998
  (worst 0.9896). A linear fit to the ffmpeg-decoded ADX gives 33.4 dB
  residual SNR. The movie is not rendered in stereo, and that is decided in
  CRI's guest code, not here: CRI sets output mode 2 (0030BA20). Its
  ring-buffer writer (0030B460) then takes the path that pans one mono
  input (0030B2A0), so both sides carry 0.72 x (L+R). The old emulated path
  had the same input. Both ADX streams in i102 are identical.
- Streamed music: menu_c aligns in the capture and tracks the reference over
  21.4 s, with a per-second median SNR of 25.7 dB. The residual includes the
  menu's other sounds.

## Open questions

- Movies are mono because of CRI's configuration (above). Find which CRI or
  game call selects the single-input pan writer, and establish whether
  retail hardware plays them in stereo, before changing it.
- The stereo rule (front pair only) needs a listening check. A 5.1 output
  option could render all six speaker bins directly.
- Reverb and FX-send bins are dropped. DownloadEffectsImage returns a null
  descriptor, and the game never reads it (00190060).
- Confirm whether the Alchemy igDx8AudioContext client runs in gameplay.
- GetCurrentPosition reports the mixer's read cursor, which leads the audible
  output by the XAudio2 queue (up to 12 x 256 frames, 64 ms). Sofdec syncs
  video to it, so video can lead sound by up to that much. Check lip sync by
  ear before shortening the queue.
- Resolved: 0036F65B and 0036F660 jump to XAudioCreatePcmFormat and
  XAudioCreateAdpcmFormat and stay recompiled. SetEG is used as a
  release-only envelope (sustain 255) with StopEx(GetTime()+duration,
  ENVELOPE) at 00190480.
