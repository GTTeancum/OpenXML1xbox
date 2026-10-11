"""Optional diagnostics for live handler fixture selection; no state changes."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
p=index.label_path(0x9DE6A)
s=p.read_text()
hooks={
 '0009DE6A':'if(getenv("XML1_TRACE_HANDLER_PROBES"))fprintf(stderr,"[HANDLER PROBE] selector=%s node=%s\\n",(const char*)XBOX_PTR(edi),(const char*)XBOX_PTR(eax));',
 '0009DE81':'if(getenv("XML1_TRACE_HANDLER_PROBES"))fprintf(stderr,"[HANDLER PROBE] resolved actor=%08X\\n",eax);',
 '0009DEE6':'if(getenv("XML1_TRACE_HANDLER_PROBES"))fprintf(stderr,"[HANDLER PROBE] resolved node=%08X actor=%08X\\n",eax,esi);',
}
for address,hook in hooks.items():
 marker='loc_'+address+': ;'
 assert s.count(marker)==1,address
 replacement=marker+'\n    '+hook
 if replacement not in s:s=s.replace(marker,replacement)
p.write_text(s)
