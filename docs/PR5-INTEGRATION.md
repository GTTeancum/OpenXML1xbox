# PR #5 local integration

Applied native-dsound PR head `11cbde2168404b228546c0d9a184499742e81c8b` to the existing working tree, preserving in-progress character/script/rendering work. Subsequently merged PR #5 on GitHub at the user's request, on 2026-09-19 at 00:00:09 UTC (September 18 locally), as `c47610afe99a212b6bafacba19ce5753032acfe2`. The dirty local checkout was not reset or pulled; local integration repairs and unrelated development changes remain local.

Resolved CMake/main overlaps, regenerated all 39 DirectSound overrides, repaired the PR's malformed audio-thread patch and removed the unused BUFFER macro parameter. Existing dirty toolkit changes were preserved; only the new toolkit patch was applied.

Validation: optimized build, dsound-mixer-test, 3 ADPCM fixtures with zero sample mismatches, native powerup regression, and a private headless/muted run through FMV/menu/NYC gameplay and power activations. Individually inspected captures 1, 2, 11 and 14. Private userdata unchanged; overlay restored. Audio capture: 86.91 seconds, 18 clipped samples; this is not a listening-quality certification. Reverb/FX sends remain absent as documented by the PR.

Staged executable: `D:\Programming\GitHub\OpenXML1xbox\XBOXgame\X-Men Legends.exe`
SHA256: `4e369c49fb66746e5fa999710b1f705f352b1cd716268e0f3af60e5e1a723fbc`
Rollback binary: `D:\Programming\GitHub\OpenXML1xbox\work\pr5-integration\before\X-Men Legends.exe`

The character goal remains unfinished. This staging updates the executable only; private imported test assets were not copied to player assets.
