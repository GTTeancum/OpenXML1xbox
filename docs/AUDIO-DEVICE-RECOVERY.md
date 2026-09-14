# Audio device handoff and unlimited human sessions

The 1080p human run `build/human-playtest-20260913-200737.log` ended with exit 4
at about 99 seconds, after `[FATAL APU OUTPUT] XAudio2 completion timeout/device
error`. The renderer had no error. The user confirmed disconnecting headphones
to charge them. The old code treated one unsuccessful 100 ms completion wait as
fatal; it did not record whether that was a timeout or a device HRESULT.

The backend already requests the Windows default endpoint through XAudio2's
virtual audio client. Windows can migrate this client between devices, so a
handoff delay must not terminate the game. Microsoft also documents releasing
and recreating XAudio2 after a critical engine error:
[OnCriticalError](https://learn.microsoft.com/en-us/windows/win32/api/xaudio2/nf-xaudio2-ixaudio2enginecallback-oncriticalerror).

The output policy now retries transient waits, checking actual queue space after
the wait so a completion racing its deadline is recognized. Critical engine /
voice errors and submission failures retain their HRESULT. A critical error or
one second without queue progress triggers recreation of the host audio engine
and voices on the current Windows default output. Callbacks only report errors;
recreation runs on the audio producer outside the guest APU mutex.

The unaccepted PCM block is submitted once after recovery. Audio still queued
on a lost device is abandoned with that device, so a brief interruption at the
disconnect is possible. If no endpoint exists, the guest DSP continues at a
48 kHz wall-clock pace without retaining an audio backlog. The host retries once
per second and resumes current audio when an output appears. Offline blocks are
logged separately and omitted from the diagnostic submitted-PCM capture. No
Windows device selection or other application's audio is changed.

Tests passed:

- Production recovery policy with a fake endpoint/clock: transient 200 ms delay,
  critical error, unresponsive endpoint, no-output pacing, reconnection, and an
  immediately failing replacement device. Pending PCM is accepted once.
- Production XAudio2 queue: callback/deadline race, timeout versus API error,
  critical-engine notification, shutdown/reinitialization, PCM ring ownership
  and priming.
- Real XAudio2 lifecycle with silent PCM: stop only the test process's own engine,
  signal a simulated critical error, and separately stop its engine without an
  error callback. Both recover; 600 blocks are accepted in about 4.2 seconds.
- The legacy queue regression and guest APU mutex-release tests pass.

The live test does not physically disconnect the user's headphones. A real
headphone unplug/reconnect during gameplay still needs a human retest. This
change does not establish complete audio fidelity.

The human launcher now defaults to `-Minutes 0`, which removes the watchdog
environment variable entirely. Human play has no session time limit. Diagnostic
scripts retain their explicit bounds, and `-Minutes N` remains an optional human
launcher argument for a deliberately bounded run.
