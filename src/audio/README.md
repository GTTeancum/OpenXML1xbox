# Audio

This module contains the Windows port's DirectSound compatibility, mixing and
output implementation, imported PC sound-bank decoding/cache, and Raven sound
event support. It preserves the current game and guest ABI behavior.

- `dsound_*`: DirectSound emulation, mixing and output.
- `audio_device_recovery.h`: endpoint recovery policy used by production and
  deterministic host fixtures.
- `raven_pc_*`: PC ADPCM decoding, bank conversion and disposable decoded cache.
- `raven_loop_sound*`: loop ownership, timeout and event integration.
- `raven_effect_sound_guest*`: guest effect sound integration.

`*_guest` files bridge guest registers/memory to audio services. Portable bank
and loop logic does not need to operate the desktop. The existing APU/DSP kernel
integration remains outside this first migration; its placement is still pending.

Headers are included as `audio/<name>.h` from the `src` include root. CMake audio
libraries and fixtures live in `cmake/Audio.cmake`; production executable wiring
remains with the main target. C/C++ fixtures live in `tests/audio`.
