from pathlib import Path
import sys
root = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(root / 'external/xboxrecomp'))
from tools.recomp.test_flag_join import translate_join
from tools.recomp.test_incdec_carry import translate_incdec
from tools.recomp import config
from tools.recomp.translator import FunctionTranslator
code = translate_join().replace('sub_00010000', 'fixture_setne')
code += translate_join(bytes.fromhex('0f45c7c3')).replace('sub_00010000', 'fixture_cmovne')
for i in range(8):
    code += translate_incdec(bool(i&1),bool(i&2),bool(i&4)).replace('sub_00010000',f'fixture_incdec_{i}')
code += '\nstatic void (*incdec_fixtures[8])(void) = {'+','.join(f'fixture_incdec_{i}' for i in range(8))+'};\n'
names=[]
for width,dec,inc in ((8,'fec8','fec0'),(16,'6648','6640'),(32,'48','40')):
    for increment,operation in enumerate((dec,inc)):
        for condition,opcode in (('z','94'),('s','98'),('o','90'),('l','9c')):
            name=f'fixture_saved_{width}_{increment}_{condition}'
            names.append(name)
            # The MOV deliberately destroys the original arithmetic register.
            image=bytes.fromhex(operation+'b8efbeadde0f'+opcode+'c00fb6c0c3')
            if condition=='o':
                image=bytes.fromhex(operation+'b8efbeadde7006b800000000c3b801000000c3')
            base=0x10000
            config._install([config.Section('.text',base,len(image),0,len(image),True)],entry_point=base,kernel_thunk_addr=base,origin='saved-incdec-result')
            db={base:{'start':hex(base),'end':base+len(image),'_addr':base,'size':len(image)}}
            code+=FunctionTranslator(image,db).translate_function(base,db[base]).replace('sub_00010000',name)
code+='\nstatic void (*saved_incdec_fixtures[24])(void)={'+','.join(names)+'};\n'
(root / 'build').mkdir(exist_ok=True)
(root / 'build/flags-fixture.inc').write_text(code, encoding='utf-8')
