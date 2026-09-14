# X-Men Legends 1 XboxRecomp TODO

1. **Smoke test various levels with 1–4 players.** Cover loading, combat, powers, character selection, camera/HUD behavior, joining/leaving, and scripted transitions. Record results by level and player count, including a complete level 1 run.

2. **Keep FPS consistently above 30 at 1080p.** Profile and improve heavy combat, effects, transitions, and multiplayer without reducing resolution or fidelity. Verify frame times during sustained gameplay, including with OBS recording.

3. **Add an option to run assetsfb.zip loose.** Load its extracted directory tree without rebuilding the ZIP. Document configuration, search precedence, fallback behavior, and folder layout; verify packaged and loose modes.

4. **Support .pkgb manifests and loose resources instead of .fb bundles.** Build on loose ZIP support with a repeatable conversion and loading workflow. Use the XML2 examples in `C:/Games/X-Men Legends II/`, especially `build.ini` and `Packages/generated`, and verify edited resources work without rebuilding bundles.

5. **Integrate a PC options menu.** Match X-Men Legends II's PC options and behavior, themed as X-Men Legends 1 XboxRecomp. Include working display, graphics, audio, and control settings with persistence, defaults, and controller/mouse/keyboard navigation.

6. **Integrate mouse and keyboard controls.** Provide gameplay and menu controls, rebinding, sensitivity settings, saved preferences, and appropriate input prompts. Verify focus changes and mixed-device local multiplayer.

7. **Verify save listing and loading.** Confirm saves appear immediately and after restarting, restore the correct progress, and support multiple saves and overwriting. The directory-query fix still needs a complete human save/load check.

8. **Verify clean audio and headphone recovery.** Test 15–20 minutes of combat and transitions for crackle, stutter, missing sounds, and A/V drift. Confirm physically disconnecting/reconnecting headphones preserves gameplay and restores sound.

9. **Finish HD and window-behavior checks.** Review HUD, menus, FMVs, effects, and transitions at 720p/1080p. Confirm the title-bar FPS counter and normal mouse cursor during human play.

10. **Validate long recordings and update documentation.** Check a 15–20 minute OBS recording for synchronization, recording lag, and automatic MP4 finalization. Add the public YouTube URL when supplied and update outdated project status claims.

11. **Plan the 32-bit/original-Xbox return path.** Identify runtime, compiler, memory, and platform requirements. Preserve compatible game data and mod formats while isolating Windows-only features.

12. **Document mod hooks and upstream reusable fixes.** Provide gameplay/script extension points that survive regeneration, a repeatable mod example, and suitable XboxRecomp pull requests after checking existing branches and PRs.
