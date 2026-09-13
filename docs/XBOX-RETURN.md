# Future original-Xbox target

The user requires the option of returning this project to original Xbox
hardware later. The current64-bit Windows game build is acceptable as an
interim target; it must not redefine the game's portable data or mod formats.

Preserve original32-bit guest addresses, file layouts, save formats and asset
representations at game-facing boundaries. Keep Windows process management,
audio output, graphics transport and host allocations outside gameplay logic.
Future mod tooling should distinguish Xbox-compatible changes from optional
PC enhancements and retain the source needed to produce Xbox-compatible assets.

The present executable cannot be deployed back to Xbox. XboxRecomp's current
Windows runtime assumes a64-bit host in memory mapping and device-fault handling.
An Xbox build would require a32-bit runtime/toolchain port, Xbox platform
backends, packaging and hardware validation, including original memory and
performance limits. This future work has not been implemented or estimated.

For now, retain the tested Windows/DX8 bridge and avoid incidental changes to
game data formats. A future architecture change should be evaluated against
this requirement as well as the immediate PC deliverable.
