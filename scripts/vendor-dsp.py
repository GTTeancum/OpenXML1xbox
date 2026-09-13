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
c_backend = dest/'dsp_c.c'
c_backend.write_text(c_backend.read_text(encoding='utf-8').replace('    core->opaque = dsp;', '    core->opaque = dsp;\n    core->is_gp = dsp->is_gp;'), encoding='utf-8')
core_header = dest/'interp/dsp_cpu.h'
core_header.write_text(core_header.read_text(encoding='utf-8').replace('    bool is_gp;', '    uint32_t history[64][7];\n    unsigned history_cursor;\n    bool is_gp;'), encoding='utf-8')
emu = dest/'interp/dsp_emu.c.inc'
emu.write_text(emu.read_text(encoding='utf-8') + '\n' + (root/'src/dsp_extractu.c.inc').read_text(encoding='utf-8'), encoding='utf-8')
cpu = dest/'interp/dsp_cpu.c'
cpu_text = cpu.read_text(encoding='utf-8').replace('"extractu #CO, S2, D", NULL, NULL', '"extractu #CO, S2, D", NULL, emu_extractu_imm')
cpu_text = cpu_text.replace('    dsp->cur_inst = read_memory_p(dsp, dsp->pc);', '''    dsp->cur_inst = read_memory_p(dsp, dsp->pc);
    uint32_t *history = dsp->history[dsp->history_cursor++ % 64];
    history[0] = dsp->pc; history[1] = dsp->cur_inst;
    history[2] = dsp->registers[DSP_REG_R0]; history[3] = dsp->registers[DSP_REG_N0];
    history[4] = dsp->registers[DSP_REG_SR]; history[5] = dsp->registers[DSP_REG_A1];
    history[6] = dsp->registers[DSP_REG_B1];''')
cpu_text = cpu_text.replace('        assert(address < DSP_YRAM_SIZE);', '''        if (address >= DSP_YRAM_SIZE) {
            FILE *dump = fopen("build/dsp-failure-program.bin", "wb");
            if (dump) { fwrite(dsp->pram, sizeof(dsp->pram), 1, dump); fclose(dump); }
            fprintf(stderr, "DSP processor: %s\\n", dsp->is_gp ? "GP" : "EP");
            for (unsigned seq = dsp->history_cursor > 64 ? dsp->history_cursor - 64 : 0; seq < dsp->history_cursor; ++seq) {
                const uint32_t *h = dsp->history[seq % 64];
                fprintf(stderr, "DSP history: pc=%04x op=%06x R0=%06x N0=%06x SR=%06x A1=%06x B1=%06x\\n", h[0],h[1],h[2],h[3],h[4],h[5],h[6]);
            }
            fprintf(stderr, "DSP Y bounds: pc=%06x op=%06x address=%06x\\n", dsp->pc, dsp->cur_inst, address);
            for (unsigned reg = 0; reg < 64; ++reg)
                fprintf(stderr, "DSP reg[%u]=%06x\\n", reg, dsp->registers[reg]);
            for (unsigned at = dsp->pc > 8 ? dsp->pc - 8 : 0; at < dsp->pc + 8 && at < DSP_PRAM_SIZE; ++at)
                fprintf(stderr, "DSP P[%04x]=%06x\\n", at, dsp->pram[at]);
        }
        assert(address < DSP_YRAM_SIZE);''')
cpu.write_text(cpu_text, encoding='utf-8')
(dest/'SOURCE.md').write_text(f'''# xemu DSP interpreter

Source: https://github.com/xemu-project/xemu/tree/{pin}/hw/xbox/mcpx/apu/dsp

Pinned revision: `{pin}`. Imported by scripts/vendor-dsp.py. Original notices
are retained. DSP interpreter code is GPL-2.0-or-later; DMA code carries its
original LGPL notice. COPYING contains the upstream license text.

Local adaptations: select the existing C interpreter without the Rust JIT or UI
settings; narrow qemu compatibility headers provide allocation/endian helpers;
trace event macros are disabled. DSP instructions and DMA operations retain
upstream implementations except the EXTRACTU immediate extension imported from
src/dsp_extractu.c.inc (normal arithmetic mode, manual-derived semantics).
Y-memory bounds failures log register/program context before the original assert.
Standalone CMake and tests are project additions.
''',encoding='utf-8')
print('Imported pinned DSP interpreter and DMA sources')
