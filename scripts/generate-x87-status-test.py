from pathlib import Path
import sys
root=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(root/'external/xboxrecomp'))
from tools.recomp.disasm import Instruction, Operand
from tools.recomp.lifter import Lifter
out=[]
for name,mnemonic,operand in [('examine','fxam',''),('status','fnstsw','ax'),('test_zero','ftst','')]:
    ins=Instruction(0,2,mnemonic,operand,'')
    if operand: ins.operands=[Operand(type='reg',reg=operand)]
    out.append('static void '+name+'(void) {\n'+'\n'.join(Lifter().lift_instruction(ins))+'\n}')
(root/'build/x87-status-fixture.inc').write_text('\n'.join(out))
