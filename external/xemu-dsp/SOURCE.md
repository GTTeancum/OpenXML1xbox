# xemu DSP interpreter

Source: https://github.com/xemu-project/xemu/tree/75650bd8cd91945f7b79774e2cee0b200ca373ff/hw/xbox/mcpx/apu/dsp

Pinned revision: `75650bd8cd91945f7b79774e2cee0b200ca373ff`. Imported by scripts/vendor-dsp.py. Original notices
are retained. DSP interpreter code is GPL-2.0-or-later; DMA code carries its
original LGPL notice. COPYING contains the upstream license text.

Local adaptations: select the existing C interpreter without the Rust JIT or UI
settings; narrow qemu compatibility headers provide allocation/endian helpers;
trace event macros are disabled. DSP instructions and DMA operations retain
upstream implementations except the EXTRACTU immediate extension imported from
src/dsp_extractu.c.inc (normal arithmetic mode, manual-derived semantics).
Y-memory bounds failures log register/program context before the original assert.
Standalone CMake and tests are project additions.
