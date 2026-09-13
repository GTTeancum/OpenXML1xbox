"""Adapt pinned xemu GP/EP integration to the standalone XboxRecomp APU."""
from pathlib import Path
import re
import subprocess
root = Path(__file__).resolve().parents[1]
assert subprocess.check_output(['git','-C',str(root/'work/reference/xemu'),'rev-parse','HEAD'],text=True).strip() == '75650bd8cd91945f7b79774e2cee0b200ca373ff'
source = root/'work/reference/xemu/hw/xbox/mcpx/apu/dsp/gp_ep.c'
s = source.read_text(encoding='utf-8')
s = s.replace('#include "hw/xbox/mcpx/apu/apu_int.h"', '''#include "apu_state.h"
#include "fpconv.h"
#ifndef DPRINTF
#define DPRINTF(...) ((void)0)
#endif
/* Adapted from xemu 75650bd8cd91945f7b79774e2cee0b200ca373ff.
 * Real C-interpreter DSP processing; native contiguous RAM backs physical DMA. */''')
start=s.index('void mcpx_apu_update_dsp_preference')
end=s.index('static void scatter_gather_rw',start)
s=s[:start]+'''void mcpx_apu_update_dsp_preference(MCPXAPUState *d)
{
    d->monitor.point = MCPX_APU_DEBUG_MON_GP_OR_EP;
    d->gp.realtime = true;
    d->ep.realtime = true;
}

'''+s[end:]
s=s.replace('memory_region_size(d->ram)', '(64u * 1024u * 1024u)')
s=s.replace('            memory_region_set_dirty(d->ram, paddr, bytes_to_copy);','')
# Each register switch becomes a single-iteration block, retaining its breaks.
# This expresses GCC range cases using portable C comparisons for MSVC.
s=s.replace('switch (addr) {','do {')
s=re.sub(r'case ([^\n]+?) \.\.\. ([^\n]+?): \{',r'if (addr >= \1 && addr <= \2) {',s)
s=re.sub(r'    case (NV_PAPU_\w+):\n(.*?)        break;',r'    if (addr == \1) {\n\2        break;\n    }',s,flags=re.S)
s=re.sub(r'    default:\n(.*?)        break;\n    }',r'\1        break;\n    } while (0);',s,flags=re.S)
s=re.sub(r'const MemoryRegionOps (?:gp|ep)_ops = \{.*?\};\n', '',s,flags=re.S)
s += '''
uint64_t xml1_ac97_read(uint32_t address, unsigned size);
void xml1_ac97_write(uint32_t address, uint64_t value, unsigned size);
uint64_t xml1_apu_dsp_read(MCPXAPUState *d, uint64_t addr, unsigned size)
{
    if (addr >= 0x400000 && addr < 0x401000) return xml1_ac97_read((uint32_t)addr-0x400000,size);
    if (addr >= 0x30000 && addr < 0x40000) return gp_read(d,addr-0x30000,size);
    if (addr >= 0x50000 && addr < 0x60000) return ep_read(d,addr-0x50000,size);
    return 0;
}
void xml1_apu_dsp_write(MCPXAPUState *d, uint64_t addr, uint64_t value, unsigned size)
{
    if (addr >= 0x400000 && addr < 0x401000) { xml1_ac97_write((uint32_t)addr-0x400000,value,size); return; }
    if (addr >= 0x30000 && addr < 0x40000) gp_write(d,addr-0x30000,value,size);
    else if (addr >= 0x50000 && addr < 0x60000) ep_write(d,addr-0x50000,value,size);
}
'''
s=s.replace('    /* Write VP results to the GP DSP MIXBUF */','    extern void xml1_apu_trace_frame(unsigned gp,unsigned ep,const float *mix,unsigned count);\n    xml1_apu_trace_frame(d->gp.regs[NV_PAPU_GPRST],d->ep.regs[NV_PAPU_EPRST],&mixbins[0][0],NUM_MIXBINS*NUM_SAMPLES_PER_FRAME);\n    /* Write VP results to the GP DSP MIXBUF */')
s=s.replace('    /* Write VP results to the GP DSP MIXBUF */','    static unsigned voice_reports;\n    if(++voice_reports<=4 || voice_reports%4096==0) {\n        extern void xml1_apu_trace_voices(const uint8_t *ram,unsigned base,unsigned a,unsigned b,unsigned c);\n        xml1_apu_trace_voices(d->ram_ptr,d->regs[NV_PAPU_VPVADDR],d->regs[NV_PAPU_TVL2D],d->regs[NV_PAPU_TVL3D],d->regs[NV_PAPU_TVLMP]);\n    }\n    /* Write VP results to the GP DSP MIXBUF */')
assert 'case NV_PAPU_' not in s and 'default:' not in s
(root/'src/apu_dsp_real.c').write_text(s,encoding='utf-8')
