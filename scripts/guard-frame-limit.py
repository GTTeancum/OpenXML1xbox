"""Set the PC default for the retail frame limiter without changing game time.

World XBE 00011178 passes 49 as DISPLAY_OPTIONS/max_fps's fallback. The
following native code stores 1/max_fps at FrameManager+4. 00011400 polls the
ordinary game clock until that interval elapses. Keep that whole path, its
actual elapsed timestamp and the original upper bound of 60 intact.
"""
from pathlib import Path

path = Path(__file__).resolve().parents[1] / 'src/recomp/gen/recomp_0000.c'
text = path.read_text(encoding='utf-8')
old = 'loc_00011178: ;\n    edx = MEM32(eax);\n    { uint32_t _icall_esp = g_esp;\n    PUSH32(esp, 0x31);'
new = old.replace('PUSH32(esp, 0x31);',
    '/* PC default: native max_fps=60; retain real elapsed-time simulation. */\n    PUSH32(esp, 0x3C);')
if text.count(new) == 1:
    print('Native PC frame-limit default already installed')
elif text.count(old) == 1:
    path.write_text(text.replace(old, new), encoding='utf-8')
    print('Native PC frame-limit default: 49 -> 60')
else:
    raise SystemExit('Pinned frame-limit initialization changed; retrace before patching')
