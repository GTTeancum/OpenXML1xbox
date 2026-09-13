from pathlib import Path
import sys
root = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(root / 'external/xboxrecomp'))
from tools.recomp.test_flag_join import translate_join
from tools.recomp.test_incdec_carry import translate_incdec
code = translate_join().replace('sub_00010000', 'fixture_setne')
code += translate_join(bytes.fromhex('0f45c7c3')).replace('sub_00010000', 'fixture_cmovne')
for i in range(8):
    code += translate_incdec(bool(i&1),bool(i&2),bool(i&4)).replace('sub_00010000',f'fixture_incdec_{i}')
code += '\nstatic void (*incdec_fixtures[8])(void) = {'+','.join(f'fixture_incdec_{i}' for i in range(8))+'};\n'
(root / 'build').mkdir(exist_ok=True)
(root / 'build/flags-fixture.inc').write_text(code, encoding='utf-8')
