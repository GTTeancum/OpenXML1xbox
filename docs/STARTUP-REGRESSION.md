# Combat-handler startup regression

The staged build crashed before the main menu at indirect call 001F5C14.
The additive handler registration hook runs at the end of E7C20, invoked
from the original CRT static-initializer table. It called the game allocator
123490 before its underlying allocator singleton 5BBAB4 existed. The null
virtual dispatch was a consequence of that initialization-order error.

The permanent host-owned handler tables now use guest-addressable runtime
heap storage (xbox_HeapAlloc). The game never frees these tables. Existing
XML1 handlers, initialization order and asset paths are unchanged.

The registration fixture previously supplied scratch storage and therefore
skipped precisely the allocation that failed during real startup. It now
starts with no table and no game allocator, invokes the native registration
path, verifies all 83 entries and idempotence, and releases its private table.
The fixture also restores the lightning-table pointer and allocator state.

The IRQL bridge test's separate physical-address checks still expected low
virtual addresses to equal physical addresses. The current implementation
assigns stable, distinct physical page identities. The test now checks stable
identity, page offsets, live DMA reads, contiguous translation and stack
cleanup. Production memory mapping was not changed.

Evidence is under work/xml2-integration/startup-fix (local, not distributed).
All six executable diagnostic modes passed, as did guest-physical-test,
raven-bishop-drain-test and raven-script-strings-test. The earlier full set of
17 standalone Raven tests also passed before this narrow startup repair.

The staged executable launched from outside the repository with a clean
XML1/RECOMP environment. Native captures show intro video content and the
main menu with its 3D Cerebro background. The first bounded startup run ended
with the explicitly configured 40-second diagnostic watchdog (exit 3); the
subsequent flow remained alive until the harness terminated it. This was
not a spontaneous exit. Save-file hashes were unchanged.

Audio was muted and its audible quality is not verified. This is a bounded
startup regression check, not certification of every imported power or a
full gameplay acceptance pass. Beta publication is separate and pending.

## Handler activation evidence

All 15 new handlers have always-on callback entry/return logging under the
`[XML2 HANDLER]` prefix in the player's `build/game-errors.log`. Records include
handler name, callback, actor address, call count and `context=game` or
`context=fixture`. The first four calls and powers of two are logged per
callback to avoid continuous per-frame disk writes. Shared callbacks identify
their actual receiving handler table. An entry without a corresponding return
helps identify a crash inside a callback; it is not itself proof of a crash.

The registration suite requires every new handler to enter and return from
at least one registered callback. All 15 passed. This executes the new code
through the guest dispatcher with isolated actors/native-interface fixtures;
it does not just check that names are registered. Existing fixtures check
relevant ABI, movement, decision, contact and lifetime paths. These are basic
non-crash checks, not every branch, populated-world interaction, power effect
or full live-combat validation of all 15. See the local
`handler-activation-coverage.json` and `staged-powerup-definition-game*.log`.

The final executable's six diagnostic modes were rerun from outside the
repository and all passed (`staged-regressions.json`). No game assets, user
configuration or saved games were edited for the startup repair.

Final staged SHA-256:
`b606f1930e7f649c7af860ef9c49dd2e983332756ba44b14340b5fa6e9b61365`.
The final hidden, muted run reached level 1; native captures show Wolverine,
the level geometry and HUD, then a changed player position and approaching
enemies after process-local movement input. The process remained alive until
explicit harness termination, with no fatal runtime diagnostic. Save hashes
were unchanged and no game/renderer process was left running. Evidence:
`final-flow/flow-result.json`, `final-flow/flow.log`, and native captures 4/6.
This short stock-Wolverine run does not establish live combat coverage of the
15 imported handlers; their per-handler non-crash evidence is the dispatcher
fixture suite described above. Audio quality remains unverified (muted).
