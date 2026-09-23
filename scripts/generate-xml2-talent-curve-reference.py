"""Extract the recovered XML2 arithmetic into a local differential-test fixture.

No recovered game body is committed. This intentionally tests only the blend
block; it cannot prove XML parsing, actor ownership or live combat correctness.
"""
import argparse
import hashlib
from pathlib import Path

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--source', required=True, type=Path)
parser.add_argument('--out', required=True, type=Path)
args = parser.parse_args()
source = args.source.read_text()
start = source.index('loc_000CEE66: ;')
end = source.index('loc_000CEEA3: ;', start)
block = source[start:end]
if 'RECOMP_ABI_CALL' in block or 'RECOMP_ICALL' in block or block.count('fp_pop();') != 3:
    raise SystemExit('Recovered arithmetic shape changed; review before generating')
prefix = r'''
/* Local recovered XML2 arithmetic, generated; never redistribute. */
static void recovered_xml2_blend(float result[2], const float point[2],
                                int rank, int previous, int next)
{
    union { uint32_t u; int32_t s; float f; } memory[16] = {0};
    uint32_t esp = 0, ecx = (uint32_t)(rank - 1), edi = (uint32_t)previous, ebp = (uint32_t)next;
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0;
    double stack[8] = {0};
    unsigned top = 0;
    #define MEM32(a) memory[(a)/4].u
    #define SMEM32(a) memory[(a)/4].s
    #define MEMF(a) memory[(a)/4].f
    #define fp_push(v) do { double value = (v); top = (top + 7) & 7; stack[top] = value; } while (0)
    #define fp_pop() (top = (top + 1) & 7)
    #define fp_top() stack[top]
    #define fp_st1() stack[(top+1)&7]
    MEMF(0x10) = result[0]; MEMF(0x14) = result[1];
    MEMF(0x24) = point[0]; MEMF(0x1C) = point[1];
'''
suffix = r'''
    result[0] = MEMF(0x10); result[1] = MEMF(0x14);
    #undef MEM32
    #undef SMEM32
    #undef MEMF
    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st1
}
'''
args.out.parent.mkdir(parents=True, exist_ok=True)
args.out.write_text(prefix + block + suffix)
print('Recovered blend SHA256:', hashlib.sha256(block.encode()).hexdigest())
