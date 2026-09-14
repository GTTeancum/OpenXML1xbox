# XboxRecomp upstream review

Reviewed 2026-09-14. The current patch review and submission work is complete.
The user removed community mod-hook documentation from scope. This review does
not assert that every downstream patch is ready for upstream adoption.

## Upstream state

- [main](https://github.com/sp00nznet/xboxrecomp/tree/main) remains at
  `3706cefa416aedea6d10c87ced805f89576560c4`, the project's unchanged pin.
- `work/v0.7.0-non-local` remains at `208fc9d4a71acb1f85662dd19c47bd83c76c2fc1`:
  115 commits behind main, with no unique commits to adopt.
- Open PRs #38–40 concern POSIX/Darwin compatibility. [PR #46](https://github.com/sp00nznet/xboxrecomp/pull/46)
  adds D3D11 gamma presentation; it does not supply this project's native DX8 path.
- [PR #52](https://github.com/sp00nznet/xboxrecomp/pull/52) changes the conformance
  harness to run native x86 snippets in a Linux container on non-Windows hosts.
  It is useful testing infrastructure, not an additional Windows runtime fix.
- Existing submissions #41–45, #47–51 and #53 are still open. Reviewed their
  current titles/status and avoided duplicate submissions. #44 includes the
  later INC/DEC result-snapshot correction.
- Earlier merged compiler/kernel/MMX/graphics fixes are already in the pin.
  Closed #13 was superseded; its original weak code-pointer recovery should not
  be transplanted into this project.

## New isolated submissions

Each branch starts directly at upstream main, contains one runtime correction
and its synthetic test, and has no dependency on another open PR. No game data,
XBE, generated title code, private assets, or title-specific hooks are included.

| PR | Correction | Before/after evidence |
| --- | --- | --- |
| [#54](https://github.com/sp00nznet/xboxrecomp/pull/54) | Read KfRaiseIrql/KfLowerIrql arguments from CL | Clean upstream reads poisoned stack byte 7 instead of CL. Fixed test checks both ordinals, nested levels, old-level return, upper ECX bits and unchanged stack canary. CTest 1/1 passes. |
| [#55](https://github.com/sp00nznet/xboxrecomp/pull/55) | Translate the contiguous virtual window into physical offsets | Three window cases fail before the fix. Nine total cases verify lower/upper boundaries, interior and outside-window addresses, and stdcall stack cleanup. CTest 1/1 passes. |
| [#56](https://github.com/sp00nznet/xboxrecomp/pull/56) | Advertise stereo PCM through XC_AUDIO | Clean upstream returns 0x00010001. Corrected setting is zero, with DWORD type and length preserved. Settings-only CTest 1/1 passes; no audio device is used. |

Verified remote heads: #54 `58d8f97222c5ae07e089fa68fe6d29bcbf1e5a61`,
#55 `127f3fa9e3af0b6eefcdd142c137ce20c05ffb36`,
#56 `8a7886779c811446feef04a46cd3f80bb423206c`.
All three are open, awaiting upstream review; GitHub reports no check runs yet.
Tests ran with MSVC x64 on Windows. Cross-platform success is not claimed.

Reproduction commands are in each PR. Local failing/passing CTest logs are
`work/upstream-irql-{before,after}.log`,
`work/upstream-physical-{before,after}.log` and
`work/upstream-audio-setting-{before,after}.log`.
The reusable checkout is `work/upstream-irql-abi`; it retains all three branches.

These changes were already present in the player's downstream patch stack.
This contribution pass did not change the player executable, start the game,
or replace the XboxRecomp pin. It does not close audio-quality or device-recovery
acceptance work.

## Disposition of the 35 ordered XboxRecomp patches

Submitted means proposed for upstream review, not merged. Retained means reviewed
and intentionally left downstream for the stated dependency or validation reason.
This inventory is a record of the review, not a new community mod-hook task.

| Local patch | Disposition |
| --- | --- |
| [xboxrecomp-xml1-memory.patch](../patches/xboxrecomp-xml1-memory.patch) | Retain locally: extended guest VA reservation/query bookkeeping is a broad allocator change; needs independent overlap, release, overflow, concurrency and platform coverage. |
| [xboxrecomp-flag-joins.patch](../patches/xboxrecomp-flag-joins.patch) | Submitted: [PR #41](https://github.com/sp00nznet/xboxrecomp/pull/41). |
| [xboxrecomp-dsp-integration.patch](../patches/xboxrecomp-dsp-integration.patch) | Retain locally: requires the project DSP implementation and build integration (`dsp.h`, XML1 callbacks); cannot build as an isolated upstream patch. |
| [xboxrecomp-kernel-abi.patch](../patches/xboxrecomp-kernel-abi.patch) | Split into [PR #54](https://github.com/sp00nznet/xboxrecomp/pull/54) (IRQL fastcall) and [PR #55](https://github.com/sp00nznet/xboxrecomp/pull/55) (contiguous physical addresses). |
| [xboxrecomp-stereo-output.patch](../patches/xboxrecomp-stereo-output.patch) | Submitted: [PR #56](https://github.com/sp00nznet/xboxrecomp/pull/56). |
| [xboxrecomp-immediate-boundaries.patch](../patches/xboxrecomp-immediate-boundaries.patch) | Submitted: [PR #42](https://github.com/sp00nznet/xboxrecomp/pull/42). |
| [xboxrecomp-kernel-dispatch-thread.patch](../patches/xboxrecomp-kernel-dispatch-thread.patch) | Submitted: [PR #43](https://github.com/sp00nznet/xboxrecomp/pull/43). |
| [xboxrecomp-incdec-carry.patch](../patches/xboxrecomp-incdec-carry.patch) | Submitted: [PR #44](https://github.com/sp00nznet/xboxrecomp/pull/44). |
| [xboxrecomp-idex-channel.patch](../patches/xboxrecomp-idex-channel.patch) | Submitted: [PR #45](https://github.com/sp00nznet/xboxrecomp/pull/45). |
| [xboxrecomp-native-dsp-output.patch](../patches/xboxrecomp-native-dsp-output.patch) | Retain locally: depends on the project GP/EP output callback and native DSP mode. |
| [xboxrecomp-device-interrupts.patch](../patches/xboxrecomp-device-interrupts.patch) | Retain locally: changes interrupt delivery and dispatcher cadence; needs standalone ISR/DPC scheduling and concurrency tests before proposing the model upstream. |
| [xboxrecomp-physical-pages.patch](../patches/xboxrecomp-physical-pages.patch) | Retain locally: mixed XML1 physical-page callbacks, diagnostics and allocator concurrency changes. The atomic allocator hunk is separable but still needs contention/overflow/reset coverage. |
| [xboxrecomp-guest-vm-release.patch](../patches/xboxrecomp-guest-vm-release.patch) | Retain locally with the extended-VA allocator; it is not independent of xml1-memory. |
| [xboxrecomp-fist-rounding.patch](../patches/xboxrecomp-fist-rounding.patch) | Submitted: [PR #47](https://github.com/sp00nznet/xboxrecomp/pull/47). |
| [xboxrecomp-voice-resampling.patch](../patches/xboxrecomp-voice-resampling.patch) | Retain locally: requires libsamplerate integration and source/voice lifetime tests; the raw patch does not supply upstream build dependencies. |
| [xboxrecomp-audio-consumption-pacing.patch](../patches/xboxrecomp-audio-consumption-pacing.patch) | Retain locally: native DSP producer pacing and mutex ownership changes; callbacks and queue ownership need an independent upstream integration. |
| [xboxrecomp-ssl-diagnostics.patch](../patches/xboxrecomp-ssl-diagnostics.patch) | Retain locally: investigation logging, not a standalone behavior fix. |
| [xboxrecomp-guest-irql.patch](../patches/xboxrecomp-guest-irql.patch) | Retain locally: guest KPCR publication and DPC entry state depend on the dispatcher/memory work; needs a standalone multi-threaded context test. |
| [xboxrecomp-stream-physical-zero.patch](../patches/xboxrecomp-stream-physical-zero.patch) | Retain locally: assumes this port's physical arena and adds XML1 probe entry points. Needs a generic source-fetch regression and memory-model agreement. |
| [xboxrecomp-stream-format-diagnostics.patch](../patches/xboxrecomp-stream-format-diagnostics.patch) | Retain locally: voice-format investigation logging. |
| [xboxrecomp-voice-source-capture.patch](../patches/xboxrecomp-voice-source-capture.patch) | Retain locally: calls the project-owned audio capture harness. |
| [xboxrecomp-irql-exclusion.patch](../patches/xboxrecomp-irql-exclusion.patch) | Retain locally: global raised-IRQL exclusion is a scheduling policy, not just an ABI correction. Requires broader preemption/deadlock coverage. |
| [xboxrecomp-prologue-saved-frame.patch](../patches/xboxrecomp-prologue-saved-frame.patch) | Submitted: [PR #48](https://github.com/sp00nznet/xboxrecomp/pull/48). |
| [xboxrecomp-x87-classification.patch](../patches/xboxrecomp-x87-classification.patch) | Submitted: [PR #49](https://github.com/sp00nznet/xboxrecomp/pull/49). |
| [xboxrecomp-incdec-result-snapshot.patch](../patches/xboxrecomp-incdec-result-snapshot.patch) | Submitted: [PR #44](https://github.com/sp00nznet/xboxrecomp/pull/44). |
| [xboxrecomp-idle-dsp-phase.patch](../patches/xboxrecomp-idle-dsp-phase.patch) | Retain locally: depends on the project-native DSP output and pacing path. |
| [xboxrecomp-sar-operand-width.patch](../patches/xboxrecomp-sar-operand-width.patch) | Submitted: [PR #50](https://github.com/sp00nznet/xboxrecomp/pull/50). |
| [xboxrecomp-directory-query-abi.patch](../patches/xboxrecomp-directory-query-abi.patch) | Submitted: [PR #51](https://github.com/sp00nznet/xboxrecomp/pull/51). |
| [xboxrecomp-playback-diagnostics.patch](../patches/xboxrecomp-playback-diagnostics.patch) | Retain locally: project audio diagnostics and queue telemetry; no standalone behavior fix. |
| [xboxrecomp-dsp-output-headroom.patch](../patches/xboxrecomp-dsp-output-headroom.patch) | Retain locally: queue sizes/priming are tuned for 256-frame native DSP submissions and depend on the new producer path. |
| [xboxrecomp-hdtv-settings.patch](../patches/xboxrecomp-hdtv-settings.patch) | Retain locally for this review: mixes flag definitions, advertised output policy, raw SMC mode and guest export changes. Needs independent mode-selection tests rather than XML1 screenshots alone. |
| [xboxrecomp-audio-device-recovery.patch](../patches/xboxrecomp-audio-device-recovery.patch) | Retain locally: mixed backend callback/reinitialization changes depend on the native DSP producer. Physical device recovery remains an open project check; do not submit as verified general recovery. |
| [xboxrecomp-muted-output.patch](../patches/xboxrecomp-muted-output.patch) | Retain locally: XML1_MUTED harness feature guarded by native-DSP configuration. |
| [xboxrecomp-counted-object-names.patch](../patches/xboxrecomp-counted-object-names.patch) | Submitted: [PR #53](https://github.com/sp00nznet/xboxrecomp/pull/53). Upstream submission excludes XML1 tracing. |
| [xboxrecomp-asset-path-filter.patch](../patches/xboxrecomp-asset-path-filter.patch) | Retain locally: title-owned language/archive policy extension, not correction of an upstream kernel contract; no general cross-platform API is proposed. |

`dsp56300-no-inline-do.patch` targets the separate DSP dependency, not XboxRecomp,
and is outside this upstream submission set. The project-owned native DX8 renderer,
menu extension, package conversion and host launch/recording harness likewise stay
in OpenXML1xbox.
