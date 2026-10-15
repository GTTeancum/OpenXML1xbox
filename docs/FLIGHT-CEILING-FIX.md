# Shared flight ceiling — 2026-10-13

Holding ascend could carry a player-controlled flyer out of the level. Reproduced
with Storm in `nyc/alison/nyc1_1_1` using the previous player executable
(`79934E841797877B55DFFFC781239C665F3BD23CE5A161511DC6074DCEEB47D9`).
The native capture shows Storm above the buildings with empty space around her.
This confirms the runaway ascent; the reported eventual death was not separately
waited out in that reproduction.

The map loader reads `extent_min` / `extent_max`, with geometry-derived defaults,
and initializes the spatial grid through 6BB20. The grid's resulting bounds are
the same values used by the existing AI ascent check at FCD52..FCDA6. That check
subtracts the local collision-box centre (74B80) and one unit from maximum Z.
Shared flight movement 43210 accelerated upward without applying that boundary.

The fix limits upward velocity before the native velocity setter, using the
current tick duration, actor bounds and loaded map bounds. It also limits the
resolved position before the original position setter in 40E60 and its translated
tail entries. This second check is necessary: the collision sweep's minimum Z
displacement at 413CB otherwise creeps upward even at zero vertical speed.
Descent and horizontal movement are preserved. Actors already above the boundary
can descend without being teleported. There are no character or map exceptions,
new asset attributes, hardcoded world heights, or player-asset edits.

Validation:

- Release build and `raven-flight-ceiling-test` passed. The latter exercises 72
  sustained-ascent combinations (10,000 ticks each), including differing frame
  durations, actor sizes, negative world elevations, collision epsilon, descent,
  invalid bounds and above-ceiling recovery.
- Storm in NYC: loaded maximum Z 360, local box Z 0..72, resulting ceiling 323.
  Thirty logged samples remained exactly at Z 323 with upward speed zero and
  ascend held. Health remained 70. A subsequent flight confirmed deliberate
  descent input (0x100), negative vertical velocity, landing and intact health.
- Rogue in NYC: repeated ascend remained at or below Z 323, followed by deliberate
  descent and landing with health 80. This uses the same movement code and assets
  protocol as Storm, without a character-specific fix.
- Rogue in `arbiter/a_int/arb3_1`: loaded bounds changed to -360..600. Existing
  physical collision stopped ascent at Z 83.000107, below the map boundary. Landing
  and walking remained functional. This is physical-roof coverage, not proof of
  reaching that map's outer ceiling.
- Actual native captures were inspected for flying characters, level geometry,
  effects, HUD, landing and the Arbiter dialogue-to-gameplay transition. Runs were
  headless/muted with process-local input only. Audio and FMVs were not retested.
  These were isolated mission-entry fixtures, not complete campaign traversal or
  an exhaustive test of every character and map.

Optional `XML1_TRACE_FLIGHT=1` logs position, vertical speed, loaded bounds, actor
box, tick duration, input and health every 30 shared-flight updates. Disabled by
default. Local evidence is under `work/flight-ceiling/` (`before2`, `final-storm`,
`final-rogue`, `final-rogue-nyc`). Private fixtures only select the test hero, grant
flight, skip mission-entry media and prevent enemy targeting; they are not staged.

The tested standalone executable is staged at
`C:\Games\X-Men Legends\X-Men Legends.exe`, SHA-256
`B07EA647DEF531A3DE51281333D5F398F1C7A17B1512ACB91B04A5B797568EE6`.
The previous executable is retained locally at
`work/flight-ceiling/previous-X-Men Legends.exe`.
