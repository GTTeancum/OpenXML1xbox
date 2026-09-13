# Combat freeze and shutdown correction, 2026-09-13

The human run in `build/human-playtest-20260913-190022.log` froze during
combat around frame1015 while music continued. Evidence was preserved before
the user closed the window: `work/frozen-190022.bin`,
`work/frozen-combat-stacks.txt`, and `work/frozen-190022-dx8-live*.log`.

Main thread39496 of process39564 repeatedly entered KeWaitForSingleObject from
BlockOnTime0035FDE0, through resource wait00360190 and lock003615B0. Event0036E8CC
is an inlined Xbox dispatcher event, not a host event handle. Resource00F9AB00
waited for fence000023EB. Live completion at8007E000 was already000023EB,
next fence000023ED, and PGRAPH tag2C. This is graphics synchronization; it does
not establish a gameplay Python script failure.

BlockOnTime can receive the current, unissued fence. Its original
InsertFence0035FD20 issues that fence, advances the counter by two and kicks
off. Native kickoff waits for actual GPU completion, but the original caller
then proceeds toward the Xbox hardware event without rechecking completion.

The generated-code integration now rechecks confirmed completion at verified
boundary0035FE0F before entering that path. Original insertion, counter/ring
writes and stack cleanup remain intact. Pending issued fences still submit
through the entry observer; current fences rely on their own insert/kickoff,
removing a redundant pre-insert flush. No arbitrary kernel-wait success or
synthetic fence signal was introduced.

`graphics-fence-wait-test` compiles the actual generated InsertFence/BlockOnTime
and production graphics bridge. A controlled pipe peer verifies that completion
and the PGRAPH tag remain unchanged before acknowledgement. Six cases exercise
the captured current-fence state, deferred work, already-complete work and
counter wrap, including fence packet/ring writes and guest ABI preservation.
Additional checks reject pending and inactive-native completion. Removing the
recheck reproduces entry into the legacy fence path after native completion
(`work/fence-before.log`, exit1). Restoring it passes (`work/fence-after.log`).

The user's window close stopped the renderer but left the frozen game process
and XAudio2 alive: no later graphics call detected the broken pipe. The remaining
repository game processes were terminated through ordinary process management.
An independent monitor now observes each renderer process. Worker exit stops
the game even when its main thread is blocked, closing its audio and worker jobs.
`worker-lifetime-test` verifies normal and error exits against a blocked parent
without starting the game, opening audio, or injecting desktop input.

Both tests pass and the optimized game executable rebuilt successfully. The
game remains closed. Human combat and window-close retests remain necessary.
Full audio fidelity, sustained performance and save listing/loading remain
unverified. The human log includes six empty-queue observations around47.98s
(maximum submission gap35.153ms), plus further starvation during the frozen
run, with gaps up to276.947ms. Audio is not established as fixed by these tests.

Upstream architecture was rechecked: main3706cefa and
work/v0.7.0-non-local208fc9d4 are the advertised branches; a search of100 PR
titles/branch names found no ready32-bit runtime option. The supported game
output is x86-64. The32-bit conformance harness tests translated instructions,
not a full game runtime. Our32-bit worker uses genuine system Direct3D8; the
earlier host probe found no64-bit system D3D8 DLL.
