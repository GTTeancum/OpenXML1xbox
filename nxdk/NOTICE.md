The Xbox USB gamepad port mapping and transfer pattern in `input.c` are
adapted from NXDK's SDL Xbox joystick driver by Lucas Eriksson (2019) and
Ryan Wendland (2021), under the MIT license in `licenses/input-MIT.txt`.
SDL is not linked into this target.

`tools/cxbe` is copied from the installed NXDK cxbe source and retains its
source copyright/SPDX notices. It is GPL-2.0-or-later; a copy of GPL v2 is
in `licenses/cxbe-GPL-2.0.txt`. The local changes preserve the linked PE
base and use the memory installed in the machine. This host build tool is
not linked into the Xbox executable.

`capture-native.py` was copied from the existing local OpenJKDF2ogx testing
scripts and adjusted to keep its cache in this fork. It requests xemu's
own framebuffer screenshot and does not capture or drive the desktop.

Generated game C, original executable, assets, and the resulting game XBE
are private local build inputs/outputs, excluded from Git. They are not
covered by the licenses of the surrounding port support code.
