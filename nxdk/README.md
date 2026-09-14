# XML1 NXDK port

Isolated fork of the active XML1 project at 2026-09-14 20:09 UTC.
The inherited working tree is preserved in baseline commit 387e90d;
the inherited XboxRecomp changes are in submodule commit eac02c2.

This target compiles the existing generated C using NXDK's
`i386-pc-win32`, `pentium3` target. The desktop player is retained as
reference, but is not part of the NXDK link.

Build from the MSYS2 shell with `bash nxdk/build.sh`.
This is porting work in progress, not a playable release.

