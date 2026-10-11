"""Decode compiled Raven data at the verified XML cache publication boundary."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
p=index.label_path(0x14A3EE)
s=index.canonical_read(p)
marker='loc_0014A3EE: ;\n    MEM8(edi + esi) = 0;'
hook=marker+r'''
    /* The XML resource cache owns this buffer. 0014A3D5 allocated esi+1
       bytes with category ebx/tag ebx+0x51; 0014A406 publishes edi. Decode
       before publication so cache hits, menus and resident XML share the
       same lifetime as retail text. Never bypass the native cache. */
    if (esi>=4 && MEM32(edi)==0x000011B1u) {
        unsigned _xml_size=0; char _error[256];
        char *_xml=xml1_decode_pkgb((const void *)((uintptr_t)g_xbox_mem_offset+edi),esi,&_xml_size,_error,sizeof(_error));
        if(!_xml) { fprintf(stderr,"[XMLB CACHE ERROR] %s\n",_error); _exit(4); }
        uint32_t _old_buffer=edi, _saved_sp=esp;
        PUSH32(esp,ebx+0x51); PUSH32(esp,ebx); PUSH32(esp,_xml_size+1);
        PUSH32(esp,0x0014A3EEu); RECOMP_ABI_CALL(0x00123490u,sub_00123490);
        esp+=12;
        if(!eax || esp!=_saved_sp) { fprintf(stderr,"[XMLB CACHE ERROR] allocation/ABI\n"); _exit(4); }
        edi=eax;
        for(unsigned _i=0;_i<=_xml_size;++_i) MEM8(edi+_i)=(unsigned char)_xml[_i];
        xml1_free_decoded_pkgb(_xml);
        PUSH32(esp,ebx); PUSH32(esp,_old_buffer);
        PUSH32(esp,0x0014A3EEu); RECOMP_ABI_CALL(0x001234F0u,sub_001234F0);
        esp+=8;
        if(esp!=_saved_sp) { fprintf(stderr,"[XMLB CACHE ERROR] free ABI\n"); _exit(4); }
        fprintf(stderr,"[XMLB CACHE] binary=%u text=%u\n",esi,_xml_size);
    }'''
legacy_hook=hook
hook=hook.replace('xml1_decode_pkgb(', 'xml1_decode_runtime_xmlb(')
if legacy_hook in s:
    s=s.replace(legacy_hook,hook,1)
if hook not in s:
    if s.count(marker)!=1:raise SystemExit('Verified XML cache read boundary missing')
    if '#include "engine/resources/pkgb_decode.h"' not in s:s='#include "engine/resources/pkgb_decode.h"\n'+s
    s=s.replace(marker,hook,1)
if '#include "engine/progression/raven_talent_runtime.h"' not in s:
    s='#include "engine/progression/raven_talent_runtime.h"\n'+s
p.write_text(index.restore_names(s))
print('Installed XMLB cache publication guard')
