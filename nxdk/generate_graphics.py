"""Restore the two retail D3D entry points replaced by the desktop renderer.

Only these functions are lifted again. Existing gameplay C is retained.
"""
from pathlib import Path
import sys,json,re
root=Path(__file__).resolve().parent.parent
sys.path.insert(0,str(root/'external/xboxrecomp'))
from tools.recomp import config
from tools.recomp.translator import FunctionTranslator
config.configure_from_xbe(str(root/'XBOXgame/default.xbe'))
db={}
for entry in json.loads((root/'analysis/disasm/functions.json').read_text()):
    address=int(entry['start'],16);entry['_addr']=address;entry['end']=int(entry['end'],16);db[address]=entry
abi={int(x['address'],16):x for x in json.loads((root/'analysis/abi/abi_functions.json').read_text())}
translator=FunctionTranslator((root/'XBOXgame/default.xbe').read_bytes(),db,abi_db=abi,seh_prolog=0x3432a8,seh_epilog=0x3432fc)
text='''/* Generated retail Xbox D3D adapters; private game code. */
#if defined(NXDK)
#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
extern void port_after_swap(void);
/* NXDK per-function register bank */
#define port_registers() _port_regs
'''
for address,name in ((0x35b040,'xml1_graphics_wait_vblank'),(0x368be0,'xml1_graphics_swap')):
    body=translator.translate_function(address,db[address])
    body=body.replace(f'sub_{address:08X}',name)
    if name=='xml1_graphics_swap':
        assert body.count('esp += 8; return;')==1
        body=body.replace('esp += 8; return;', 'port_after_swap(); esp += 8; return;')
    body=re.sub(r'(void \w+\(void\)\s*\{)',r'\1\n    PortRegisterBank *const _port_regs=port_acquire_register_bank();',body)
    text+=body+'\n'
text+='#endif\n'
target=root/'src/recomp/gen/recomp_nxdk_graphics.c'
if not target.exists() or target.read_text()!=text:target.write_text(text)
print('Restored native Swap and vertical-blank wait from the original XBE')
