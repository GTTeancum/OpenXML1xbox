"""Import the pinned xemu DSP interpreter; preserve notices and record adapters."""
from pathlib import Path
import shutil
import subprocess

root = Path(__file__).resolve().parents[1]
source = root / 'work/reference/xemu'
pin = '75650bd8cd91945f7b79774e2cee0b200ca373ff'
assert subprocess.check_output(['git','-C',str(source),'rev-parse','HEAD'],text=True).strip() == pin
dsp = source / 'hw/xbox/mcpx/apu/dsp'
dest = root / 'external/xemu-dsp'
dest.mkdir(exist_ok=True)
for name in ['dsp.c','dsp.h','dsp_internal.h','dsp_c.c','dsp_dma.c','dsp_dma.h','dsp_dma_regs.h','debug.h']:
    shutil.copyfile(dsp/name,dest/name)
shutil.copytree(dsp/'interp',dest/'interp',dirs_exist_ok=True)
shutil.copyfile(source/'COPYING',dest/'COPYING')
text = (dest/'dsp.c').read_text(encoding='utf-8').replace('#include "ui/xemu-settings.h"','/* Standalone interpreter backend; no UI settings dependency. */')
text = text.replace('    if (g_config.audio.use_dsp_jit) {\n        dsp_jit_init(dsp);\n    } else {\n        dsp_c_init(dsp);\n    }','    dsp_c_init(dsp);')
start = text.index('void dsp_set_engine(DSPState *dsp, bool use_jit)')
text = text[:start] + '''void dsp_set_engine(DSPState *dsp, bool use_jit)
{
    (void)dsp;
    assert(!use_jit); /* This build intentionally includes the C interpreter. */
}
'''
(dest/'dsp.c').write_text(text,encoding='utf-8')
(dest/'SOURCE.md').write_text(f'''# xemu DSP interpreter

Source: https://github.com/xemu-project/xemu/tree/{pin}/hw/xbox/mcpx/apu/dsp

Pinned revision: `{pin}`. Imported by scripts/vendor-dsp.py. Original notices
are retained. DSP interpreter code is GPL-2.0-or-later; DMA code carries its
original LGPL notice. COPYING contains the upstream license text.

Local adaptations: select the existing C interpreter without the Rust JIT or UI
settings; narrow qemu compatibility headers provide allocation/endian helpers;
trace event macros are disabled. DSP instructions and DMA operations retain
upstream implementations. Standalone CMake and tests are project additions.
''',encoding='utf-8')
print('Imported pinned DSP interpreter and DMA sources')
