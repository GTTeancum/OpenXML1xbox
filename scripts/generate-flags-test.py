from pathlib import Path
import sys
root = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(root / 'external/xboxrecomp'))
from tools.recomp.test_flag_join import translate_join
code = translate_join().replace('sub_00010000', 'fixture_setne')
code += translate_join(bytes.fromhex('0f45c7c3')).replace('sub_00010000', 'fixture_cmovne')
(root / 'build').mkdir(exist_ok=True)
(root / 'build/flags-fixture.inc').write_text(code, encoding='utf-8')
