# Native main-menu Quit

The player installation adds **Quit** after Credits, using the retail menu's
unused seventh button, background and focus artwork. The Select prompt uses
the eighth text anchor below it. The seven action buttons keep their original
positions and spacing.

`src/pc_menu.cpp` installs this UI change in the player's `ui/menus/main.eng`,
`.fre` and `.ger` documents. Installation requires `.xml1-player-layout`, runs
after first-run extraction, and only consumes the original unused debug slots.
Subsequent launches preserve the installed menu; customized slots are left alone.
This does not rename resources, modify PKGB declarations, or change the original
XBE, ISO or asset archive. The button command is `quitapp`.

`scripts/guard-pc-menu.py` retains the command hook across code generation. The
verified original command-manager vtable is at `003DA650`; its execute method
at offset `14` is `0011C680`. Only the exact `quitapp` command takes the Windows
application-exit path. The pause menu's existing `mainmenuexit` command still
opens its normal confirmation and returns to the main menu.

Exit uses the existing window-close process-lifetime contract: `ExitProcess(0)`
stops the in-process audio engine and closes the handles for renderer jobs with
`JOB_OBJECT_LIMIT_KILL_ON_JOB_CLOSE`. It avoids running CRT destructors against
live guest/audio threads. Tests must check both the main exit code and the
absence of surviving renderer processes, not merely that the window disappeared.

## Verification

- The staged executable's hidden, muted 1920Ã—1080 run showed all seven buttons,
  the animated menu background, Quit focus artwork and the separate Select prompt.
- D-pad Up wrapped from Begin Story to Quit; A selected it. Exit code was 0,
  with the explicit Quit log and no surviving game or renderer processes.
- Native evidence: `work/quit-audit/10006.bmp` and
  `work/quit-audit/main-menu-quit.png`; source capture is under `!GAME/build`.
- The native 640×480 output run reached the Central Park save with Wolverine,
  environment artwork and HUD, opened the normal pause-menu exit confirmation,
  selected Yes, returned to the animated main menu, focused Quit and exited with
  code 0. All seven buttons and the Select prompt fit without clipping or overlap.
  No game or renderer processes remained after exit.
- 4:3 native evidence: `work/quit-audit/10012.bmp` (gameplay), `10013.bmp`
  (confirmation), `10014.bmp` (main menu), `10015.bmp` (Quit selected).
  `work/automap-quit43-loose/data/build/dx8-live.log` confirms a 640×480 backbuffer;
  `work/automap-quit43-loose/game.log` records the Quit command. This is a menu
  fit check at 4:3 output, not a full acceptance of 4:3 gameplay presentation.
- Tests are muted. These checks establish process shutdown, not a new acceptance
  claim for audio quality or physical headphone recovery.

Headless rendering still defaults to 1080p. An explicit
`XML1_DX8_RESOLUTION=640x480` is now respected for the requested 4:3 layout check.
