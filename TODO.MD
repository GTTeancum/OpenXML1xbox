# X-Men Legends 1 XboxRecomp TODO

## Summary

1. Fix startup failure reported against beta 0.9 (GitHub #8).
2. Fix camera scrambling inside HAARP (GitHub #16).

## Detailed work

GitHub #8 (TODO #1) remains awaiting reporter evidence. Prior completed repair steps are recorded in docs/STABILITY-REPAIR-GOAL.md.

### 1. Beta 0.9 startup failure

[GitHub #8](https://github.com/GTTeancum/OpenXML1xbox/issues/8): investigate the window closing immediately after startup. The report includes a log with unresolved kernel imports and missing loose resources. Trace the actual failure and validate a clean installation and launch on the affected configuration; do not assume those warnings alone identify the cause. Two separate startup failures have been reproduced and fixed: non-ANSI profile paths and truncated/corrupt renderer caches. Unicode launch and atomic cache repair pass native gameplay/Forge checks. The reporter-specific Intel/NVIDIA failure remains unconfirmed. See docs/STABILITY-REPAIR-GOAL.md.

### 2. HAARP camera scrambling

[GitHub #16](https://github.com/GTTeancum/OpenXML1xbox/issues/16): identify the affected room and camera transition, reproduce the scrambling, and trace the camera/motionpath behavior. Verify the corrected scene and surrounding transitions in gameplay. This issue was excluded from the recent repair goal and remains unaddressed.
