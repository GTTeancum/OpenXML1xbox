"""Install verified XML1 package selection hooks after recompilation."""
from pathlib import Path
root=Path(__file__).resolve().parents[1]
p=root/'src/recomp/gen/recomp_0024.c'
s=p.read_text(encoding='utf-8')
if '#include "build_settings.h"' not in s:s='#include "build_settings.h"\n'+s
hooks={
'loc_00121A60: ;':'''loc_00121A60: ;
    /* Loose mode enters the native packagedef branch, never an FB shortcut. */
    if (xml1_prefer_files_loose()) { eax=0; esp+=12; return; }''',
'loc_00123AEF: ;':'''loc_00123AEF: ;
    /* Disable the Xbox-forced ZIP flags before any archive is opened.
       The native tail installs the ordinary filesystem loader node. */
    if (xml1_prefer_files_loose()) {
        MEM8(esi+4)=0; MEM8(esi+5)=0; MEM8(esi+6)=0;
        goto loc_00123BA6;
    }'''}
for marker,hook in hooks.items():
    if hook in s:continue
    if s.count(marker)!=1:raise SystemExit('Verified package boundary missing: '+marker)
    s=s.replace(marker,hook,1)
p.write_text(s,encoding='utf-8')
print('Installed strict loose package selection hooks')

# The native text-language getter returns this constructor's 16-byte field.
for p in (root/'src/recomp/gen').glob('recomp_*.c'):
    s=p.read_text(encoding='utf-8')
    marker='loc_00149B19: ;'
    if marker not in s:continue
    hook=marker+"\n    /* build.ini selects the native text resource language. */\n    for(unsigned _lang=0;_lang<4;++_lang) MEM8(edi+0xC64+_lang)=xml1_build_settings.text_language[_lang];"
    if hook not in s:
        if s.count(marker)!=1:raise SystemExit('Ambiguous language constructor boundary')
        if '#include "build_settings.h"' not in s:s='#include "build_settings.h"\n'+s
        s=s.replace(marker,hook,1);p.write_text(s,encoding='utf-8')
    break
else:raise SystemExit('Verified native text-language boundary missing')

# Decode genuine XML2 PKGB bytes for the retained XML1 text XML parser.
p=root/'src/recomp/gen/recomp_0024.c'
s=p.read_text(encoding='utf-8')
marker='loc_001277B5: ;\n    MEM8(esi + ebp) = LO8(ebx);'
hook=marker+'''
    if (esi>=4 && MEM32(ebp)==0x000011B1u) {
        unsigned _xml_size=0; char _error[256];
        char *_xml=xml1_decode_pkgb((const void *)((uintptr_t)g_xbox_mem_offset+ebp),esi,&_xml_size,_error,sizeof(_error));
        if(!_xml) { fprintf(stderr,"[PKGB ERROR] %s\\n",_error); _exit(4); }
        uint32_t _old_buffer=ebp, _saved_sp=esp;
        PUSH32(esp,0x33); PUSH32(esp,4); PUSH32(esp,_xml_size+1);
        PUSH32(esp,0x001277B5u); RECOMP_ABI_CALL(0x00123490u,sub_00123490);
        esp+=12;
        if(!eax || esp!=_saved_sp) { fprintf(stderr,"[PKGB ERROR] Guest allocation/ABI failure\\n"); _exit(4); }
        ebp=eax;
        for(unsigned _i=0;_i<=_xml_size;++_i) MEM8(ebp+_i)=(unsigned char)_xml[_i];
        xml1_free_decoded_pkgb(_xml);
        PUSH32(esp,4); PUSH32(esp,_old_buffer);
        PUSH32(esp,0x001277B5u); RECOMP_ABI_CALL(0x001234F0u,sub_001234F0);
        esp+=8;
        if(esp!=_saved_sp) { fprintf(stderr,"[PKGB ERROR] Guest free ABI failure\\n"); _exit(4); }
        fprintf(stderr,"[PKGB DECODE] binary=%u xml=%u\\n",esi,_xml_size);
    }'''
if hook not in s:
    if s.count(marker)!=1:raise SystemExit('Verified XML read buffer boundary missing')
    if '#include "pkgb_decode.h"' not in s:s='#include "pkgb_decode.h"\n'+s
    s=s.replace(marker,hook,1);p.write_text(s,encoding='utf-8')

# Save enumeration/load must parse the stored name's language, not today's prefix length.
p=root/'src/recomp/gen/recomp_0023.c'
s=p.read_text(encoding='utf-8')
if '#include "save_name.h"' not in s:s='#include "save_name.h"\n'+s
for marker,body in {
    'loc_0011F504: ;':'unsigned _slot=xml1_save_slot_offset((const unsigned char*)((uintptr_t)g_xbox_mem_offset+esp+0x14),128); if(_slot)esi=esp+0x14+_slot;',
    'loc_0011F6D4: ;':'unsigned _slot=xml1_save_slot_offset((const unsigned char*)((uintptr_t)g_xbox_mem_offset+esp+0x28),128); if(_slot)MEM32(esp+0x1C)=_slot-1;',
    'loc_00120504: ;':'unsigned _slot=xml1_save_slot_offset((const unsigned char*)((uintptr_t)g_xbox_mem_offset+esp+0x1C),128); if(_slot)ebp=_slot-1;',
}.items():
    hook=marker+'\n    { /* Cross-language save slot. */ '+body+' }'
    if hook in s:continue
    if s.count(marker)!=1:raise SystemExit('Verified save-name boundary missing: '+marker)
    s=s.replace(marker,hook,1)
p.write_text(s,encoding='utf-8')
