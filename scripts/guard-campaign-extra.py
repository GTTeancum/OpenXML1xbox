"""Follow native campaign record initialization/copies for additional state."""
from pathlib import Path
from recomp_source import RecompSources
root = Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
pending = {}
for address,call,native in [
    ('0007F760','xml1_campaign_install_capacity();','    PUSH32(esp, 0xFFFFFFFFu);'),
    ('0006EB00','xml1_campaign_record_init(ecx);','    PUSH32(esp, ebx);'),
    ('0006F940','xml1_campaign_record_copy(ecx, MEM32(esp+4));','    PUSH32(esp, ebx);'),
    ('00073616','xml1_recall_tick(esi);','    _fa = (uint32_t)(MEM8(esi + 0x57C))'),
    ('00080640','xml1_recall_cancel();','    PUSH32(esp, esi);'),
    ('00082A77','xml1_recall_arrive(ebp);','    edx = MEM32(ebp);'),
]:
    path=index.label_path(int(address,16))
    text=pending.get(path,path.read_text())
    marker=f'loc_{address}: ;\n';insert=f'    {call}\n'
    if text.count(marker)!=1: raise SystemExit('Missing campaign record boundary '+address)
    tail=text.split(marker,1)[1]
    if tail.startswith(insert): tail=tail[len(insert):]
    else: text=text.replace(marker,marker+insert,1)
    if not tail.startswith(native): raise SystemExit('Changed campaign record entry '+address)
    include='#include "engine/world/raven_campaign_state_guest.h"\n'
    if include not in text:text=include+text
    include='#include "engine/scripting/raven_script_extensions.h"\n'
    if include not in text:text=include+text
    pending[path]=text
for path,text in pending.items():
    if path.read_text()!=text:path.write_text(text)
print('Installed additional campaign record init/copy boundaries')
