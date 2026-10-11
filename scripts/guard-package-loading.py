"""Install verified XML1 package selection hooks after recompilation."""
from pathlib import Path
from recomp_source import RecompSources, find_function
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
pending={}
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
    p=index.label_path(int(marker[4:12],16))
    s=pending.get(p,index.canonical_read(p))
    if '#include "app/build_settings.h"' not in s:s='#include "app/build_settings.h"\n'+s
    if hook not in s:
        if s.count(marker)!=1:raise SystemExit('Verified package boundary missing: '+marker)
        s=s.replace(marker,hook,1)
    pending[p]=s
for p,s in pending.items():p.write_text(index.restore_names(s),encoding='utf-8')
print('Installed strict loose package selection hooks')

# World motionpath packagedef callback copies its input to a 128-byte stack
# buffer, then historically strips the last directory component if .igb is
# absent. Resolve the conventional extension before the native manager call.
# Old extension-bearing manifests continue to identify the same file.
p=index.path(0x1210E0)
s=index.canonical_read(p)
start,end=find_function(s,0x1210E0).span()
body=s[start:end]
marker='    POP32(esp, esi);\n    if (TEST_NZ(_fa, _fb)) goto loc_00121132;'
hook='''    POP32(esp, esi);
    if (xml1_prefer_files_loose()) {
        /* Buffer ends immediately before the original stack cookie. */
        if (!xml1_motionpath_name((char *)((uintptr_t)g_xbox_mem_offset+esp),128)) {
            fprintf(stderr,"[MOTIONPATH ERROR] Invalid or oversized package name\\n"); _exit(4);
        }
        goto loc_00121132;
    }
    if (TEST_NZ(_fa, _fb)) goto loc_00121132;'''
if hook not in body:
    if body.count(marker)!=1:raise SystemExit('Verified motionpath boundary missing')
    s=s[:start]+body.replace(marker,hook,1)+s[end:]
s=s.replace('#include "engine/resources/motionpath_name.h"\n','')
for header in ('engine/core/motionpath_name.h','app/build_settings.h'):
    if f'#include "{header}"' not in s:s=f'#include "{header}"\n'+s
p.write_text(index.restore_names(s),encoding='utf-8')

# The native text-language getter returns this constructor's 16-byte field.
p=index.label_path(0x149B19)
s=index.canonical_read(p)
marker='loc_00149B19: ;'
hook=marker+"\n    /* build.ini selects the native text resource language. */\n    for(unsigned _lang=0;_lang<4;++_lang) MEM8(edi+0xC64+_lang)=xml1_build_settings.text_language[_lang];"
if hook not in s:
    if s.count(marker)!=1:raise SystemExit('Ambiguous language constructor boundary')
    s=s.replace(marker,hook,1)
if '#include "app/build_settings.h"' not in s:s='#include "app/build_settings.h"\n'+s
p.write_text(index.restore_names(s),encoding='utf-8')

# Decode genuine XML2 PKGB bytes for the retained XML1 text XML parser.
p=index.label_path(0x1277B5)
s=index.canonical_read(p)
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
    if '#include "engine/resources/pkgb_decode.h"' not in s:s='#include "engine/resources/pkgb_decode.h"\n'+s
    s=s.replace(marker,hook,1);p.write_text(index.restore_names(s),encoding='utf-8')

# Save enumeration/load must parse the stored name's language, not today's prefix length.
pending={}
for marker,body in {
    'loc_0011F504: ;':'unsigned _slot=xml1_save_slot_offset((const unsigned char*)((uintptr_t)g_xbox_mem_offset+esp+0x14),128); if(_slot)esi=esp+0x14+_slot;',
    'loc_0011F6D4: ;':'unsigned _slot=xml1_save_slot_offset((const unsigned char*)((uintptr_t)g_xbox_mem_offset+esp+0x28),128); if(_slot)MEM32(esp+0x1C)=_slot-1;',
    'loc_00120504: ;':'unsigned _slot=xml1_save_slot_offset((const unsigned char*)((uintptr_t)g_xbox_mem_offset+esp+0x1C),128); if(_slot)ebp=_slot-1;',
}.items():
    p=index.label_path(int(marker[4:12],16))
    s=pending.get(p,index.canonical_read(p))
    if '#include "engine/saves/save_name.h"' not in s:s='#include "engine/saves/save_name.h"\n'+s
    hook=marker+'\n    { /* Cross-language save slot. */ '+body+' }'
    if hook not in s:
        if s.count(marker)!=1:raise SystemExit('Verified save-name boundary missing: '+marker)
        s=s.replace(marker,hook,1)
    pending[p]=s
for p,s in pending.items():p.write_text(index.restore_names(s),encoding='utf-8')
