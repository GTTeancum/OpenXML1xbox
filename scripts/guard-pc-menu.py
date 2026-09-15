"""Install the PC application-exit command at its verified dispatch boundary."""
from pathlib import Path
root = Path(__file__).resolve().parents[1]
hooks = {
    'recomp_0023.c': ('loc_0011C680: ;', '''loc_0011C680: ;
    /* Command-manager vtable 003DA650 + 14: execute const char*. */
    if (MEM32(esp+4)) xml1_pc_menu_command((const char *)((uintptr_t)g_xbox_mem_offset+MEM32(esp+4)));'''),
}
for name, (marker, hook) in hooks.items():
    p = root / 'src/recomp/gen' / name
    s = p.read_text(encoding='utf-8')
    if hook in s:
        continue
    if s.count(marker) != 1:
        raise SystemExit('Verified PC menu boundary missing: '+marker)
    s = '#include "pc_menu.h"\n' + s.replace(marker, hook, 1)
    p.write_text(s, encoding='utf-8')
print('Installed PC menu and application-exit command hooks')

# Four-player PC binding tables and capture prompts exceed the Xbox menu's
# 3840-vertex font budget. Increase the allocation through the original
# initializer; its bounds checks, double buffers and font rendering stay intact.
p = root / 'src/recomp/gen/recomp_0028.c'
s = p.read_text(encoding='utf-8')
font_original = 'loc_001457BE: ;\n    PUSH32(esp, 0xF00);'
font_pc = 'loc_001457BE: ;\n    PUSH32(esp, 0x1E00); /* PC menu font capacity: 7680 vertices */'
if font_pc not in s:
    if s.count(font_original) != 1:
        raise SystemExit('Verified native menu font allocation boundary missing')
    p.write_text(s.replace(font_original, font_pc, 1), encoding='utf-8')

# Remove exploratory bulk-copy hooks. The verified native font upload below
# is the only copy boundary needed for menu vertex ownership.
for filename, marker, call in (
    ('recomp_0096.c', 'loc_003677B0: ;', 'xml1_pc_native_vertex_copy(MEM32(esp+4),MEM32(esp+8),MEM32(esp+12)*4u);'),
    ('recomp_0082.c', 'loc_00340E00: ;', 'xml1_pc_native_vertex_copy(MEM32(esp+4),MEM32(esp+8),MEM32(esp+12));'),
    ('recomp_0083.c', 'loc_00344D90: ;', 'xml1_pc_native_vertex_copy(MEM32(esp+4),MEM32(esp+8),MEM32(esp+12));'),
):
    p = root / 'src/recomp/gen' / filename
    s = p.read_text(encoding='utf-8')
    revised = s.replace(marker + '\n    ' + call, marker)
    if revised != s:
        p.write_text(revised, encoding='utf-8')

p = root / 'src/recomp/gen/recomp_0028.c'
s = p.read_text(encoding='utf-8')
unlock_marker='loc_00144A00: ;'
unlock_hook=unlock_marker+'''\n    { unsigned pc_array=MEM32(ecx+MEM32(ecx+0x14)*4+4);
      xml1_graphics_menu_writer(pc_array,MEM32(MEM32(pc_array)+0x68),(const unsigned *)((uintptr_t)g_xbox_mem_offset+pc_array)); }'''
if unlock_hook not in s:
    if s.count(unlock_marker)!=1:
        raise SystemExit('Verified font array unlock boundary missing')
    s=s.replace(unlock_marker,unlock_hook,1)
marker = 'loc_00144922: ;'
hook = marker + '\n    xml1_graphics_menu_vertex_owner(MEM32(ecx + 0x28));'
if hook not in s:
    if s.count(marker) != 1:
        raise SystemExit('Verified font vertex writer boundary missing')
    s = s.replace(marker, hook, 1)
if '#include "pc_menu.h"' not in s:
    s = '#include "pc_menu.h"\n' + s
if s != p.read_text(encoding='utf-8'):
    p.write_text(s, encoding='utf-8')

p = root / 'src/recomp/gen/recomp_0040.c'
s = p.read_text(encoding='utf-8')
marker = 'loc_001B68DB: ;'
hook = marker + '''
    /* Native array upload uses inline rep movs, bypassing CRT/D3D helpers. */
    xml1_pc_native_vertex_copy(eax, MEM32(MEM32(ebp + 8) + 0x50), esi);'''
if hook not in s:
    if s.count(marker) != 1:
        raise SystemExit('Verified native array upload boundary missing')
    s = s.replace(marker, hook, 1)
if '#include "pc_menu.h"' not in s:
    s = '#include "pc_menu.h"\n' + s
if s != p.read_text(encoding='utf-8'):
    p.write_text(s, encoding='utf-8')

p = root / 'src/recomp/gen/recomp_0023.c'
s = p.read_text(encoding='utf-8')
marker = 'loc_0011C6A2: ;\n    esi = eax;'
hook = marker + '''
    /* Native parser has consumed one token; keep its existing command chain. */
    if (esi && xml1_pc_native_token((const char *)((uintptr_t)g_xbox_mem_offset+esi))) goto loc_0011C705;'''
if hook not in s:
    if s.count(marker) != 1:
        raise SystemExit('Verified native per-token boundary missing')
    p.write_text(s.replace(marker, hook, 1), encoding='utf-8')

p = root / 'src/recomp/gen/recomp_0032.c'
s = p.read_text(encoding='utf-8')
# Replace this diagnostic as a whole when its traversal changes. Its verified
# original instruction is the boundary; repeated generation must not stack it.
trace_start=s.index('loc_0017CF91: ;')
trace_end=s.index('    ecx = MEM32(esp + 0x1C);',trace_start)
if 'XML1_PC_NATIVE_BOUNDS' in s[trace_start:trace_end]:
    s=s[:trace_start]+'loc_0017CF91: ;\n'+s[trace_end:]
native_hooks = {
    'loc_0017CDE8: ;': '''loc_0017CDE8: ;
    {
        float pc_volume;
        unsigned pc_callback=MEM32(esi+0x30);
        if((pc_callback==0x0008CA20u || pc_callback==0x0008CB70u) && xml1_pc_native_slider_value(esi,&pc_volume)) {
            /* Same native settings setters and refresh used by the original
               arrow callbacks, with an absolute normalized mouse value. */
            PUSH32(esp,0x0017CDE8u); RECOMP_ABI_CALL(0x0008C980u,sub_0008C980);
            unsigned pc_settings=eax,pc_saved_esp=esp;
            unsigned pc_target=MEM32(MEM32(pc_settings)+(pc_callback==0x0008CA20u?0x4C:0x54));
            unsigned pc_bits;memcpy(&pc_bits,&pc_volume,4);
            ecx=pc_settings;PUSH32(esp,pc_bits);PUSH32(esp,0x0017CDE8u);
            RECOMP_ICALL_SAFE(pc_target,pc_saved_esp);
            pc_saved_esp=esp;pc_target=MEM32(MEM32(pc_settings)+4);
            ecx=pc_settings;PUSH32(esp,0x0017CDE8u);RECOMP_ICALL_SAFE(pc_target,pc_saved_esp);
            MEMF(0x571860)=pc_volume;MEM8(0x571864)|=8;
            if(getenv("XML1_PC_NATIVE_BOUNDS")) fprintf(stderr,"[PC SLIDER SET] item=%08X value=%.4f\\n",esi,pc_volume);
        }
    }''',
    'loc_0017CF91: ;': '''loc_0017CF91: ;
    if(MEM32(esi+0x84) && getenv("XML1_PC_NATIVE_BOUNDS")) {
        for(unsigned pc_slot=8;pc_slot<=16;pc_slot+=4) {
            unsigned pc_component=MEM32(MEM32(esi+0x84)+pc_slot);
            if(!pc_component) continue;
            unsigned pc_node=MEM32(pc_component+4);
            fprintf(stderr,"[PC SLIDER SCENE] item=%08X slot=%X component=%08X vt=%08X node=%08X",esi,pc_slot,pc_component,MEM32(pc_component),pc_node);
            if(pc_node) for(unsigned pc_i=0;pc_i<24;++pc_i) fprintf(stderr," %08X",MEM32(pc_node+pc_i*4));
            fprintf(stderr,"\\n");
            if(pc_slot==8 && pc_node) {
                unsigned pc_queue[32]={pc_node},pc_count=1;
                for(unsigned pc_index=0;pc_index<pc_count;++pc_index) {
                    unsigned pc_child=pc_queue[pc_index],pc_vt=MEM32(pc_child);
                    fprintf(stderr,"[PC SLIDER TREE] item=%08X node=%08X fields",esi,pc_child);
                    for(unsigned pc_i=0;pc_i<24;++pc_i) fprintf(stderr," %08X",MEM32(pc_child+pc_i*4));
                    fprintf(stderr,"\\n");
                    /* Group layout: 00259DE0 traverses children at +1C.
                       0025AAC0 identifies its separate parent-list layout. */
                    if(MEM32(pc_vt+0x54)!=0x0025AAC0u) continue;
                    unsigned pc_list=MEM32(pc_child+0x1C);
                    if(!pc_list) continue;
                    unsigned pc_size=MEM32(pc_list+8),pc_data=MEM32(pc_list+0x10);
                    if(pc_size>32 || !pc_data) continue;
                    for(unsigned pc_i=0;pc_i<pc_size && pc_count<32;++pc_i) {
                        unsigned pc_next=MEM32(pc_data+pc_i*4),pc_seen=0;
                        for(unsigned pc_j=0;pc_j<pc_count;++pc_j) if(pc_queue[pc_j]==pc_next)pc_seen=1;
                        if(pc_next && !pc_seen) pc_queue[pc_count++]=pc_next;
                    }
                }
            }
        }
    }''',
    'loc_0017CE0B: ;': '''loc_0017CE0B: ;
    { static unsigned pc_seen[8], pc_count;
      unsigned pc_known=0;
      for(unsigned pc_i=0;pc_i<pc_count;++pc_i) if(pc_seen[pc_i]==eax) pc_known=1;
      if(eax && !pc_known && pc_count<8 && getenv("XML1_PC_NATIVE_BOUNDS")) {
        pc_seen[pc_count++]=eax;
        fprintf(stderr,"[PC SLIDER COMPONENT] item=%08X component=%08X fields",esi,eax);
        for(unsigned pc_i=0;pc_i<8;++pc_i) fprintf(stderr," %08X",MEM32(eax+pc_i*4));
        fprintf(stderr,"\\n");
      }
    }''',
    'loc_0017CE21: ;': '''loc_0017CE21: ;
    { static unsigned pc_seen[8], pc_count;
      unsigned pc_known=0;
      for(unsigned pc_i=0;pc_i<pc_count;++pc_i) if(pc_seen[pc_i]==eax) pc_known=1;
      if(eax && !pc_known && pc_count<8 && getenv("XML1_PC_NATIVE_BOUNDS")) {
        pc_seen[pc_count++]=eax;
        fprintf(stderr,"[PC SLIDER ANIMATION] item=%08X animation=%08X fields",esi,eax);
        for(unsigned pc_i=0;pc_i<8;++pc_i) fprintf(stderr," %08X",MEM32(eax+pc_i*4));
        fprintf(stderr,"\\n");
      }
    }''',
    'loc_0017CF89: ;': '''loc_0017CF89: ;
    if (getenv("XML1_PC_NATIVE_BOUNDS")) {
        unsigned pc_model = MEM32(eax);
        fprintf(stderr, "[PC SLIDER MODEL] item=%08X node=%08X vtable=%08X fields", esi, pc_model, pc_model?MEM32(pc_model):0);
        if (pc_model) for(unsigned pc_i=0;pc_i<24;++pc_i) fprintf(stderr," %08X",MEM32(pc_model+pc_i*4));
        fprintf(stderr,"\\n");
    }''',
    'loc_00173340: ;': 'loc_00173340: ;\n    xml1_pc_native_focus_trace(ecx,MEM32(esp),MEM32(esp+4));',
    'loc_00173A3C: ;': 'loc_00173A3C: ;\n    xml1_pc_native_command(esi, (const char *)((uintptr_t)g_xbox_mem_offset+eax));',
    'loc_0017D555: ;': 'loc_0017D555: ;\n    xml1_graphics_menu_begin(esi);',
    'loc_0017D583: ;': 'loc_0017D583: ;\n    xml1_graphics_menu_projection(esi);\n    xml1_graphics_menu_end();',
    'loc_00173890: ;': 'loc_00173890: ;\n    xml1_pc_native_item(ecx, 0);',
    'loc_00173BA3: ;': '''loc_00173BA3: ;
    xml1_pc_native_item(esi, (const char *)((uintptr_t)g_xbox_mem_offset+eax));''',
    'loc_0017D750: ;\n    PUSH32(esp, esi);\n    esi = ecx;': '''loc_0017D750: ;
    PUSH32(esp, esi);
    esi = ecx;
    xml1_pc_native_owner(esi, MEM32(esi + 4));
    xml1_pc_native_flags(esi, MEM8(esi + 0x39));
    xml1_pc_native_adjustable(esi, MEM32(MEM32(esi) + 0x3C) == 0x0017CE40u);
    xml1_pc_native_bounds(esi, SMEM16(esi + 0x5C), SMEM16(esi + 0x5E), SMEM16(esi + 0x60), SMEM16(esi + 0x62));
    if (xml1_pc_native_hover(esi) && MEM32(esi + 4) && MEM32(MEM32(esi + 4) + 0x290) != esi) {
        ecx = MEM32(esi + 4);
        PUSH32(esp, esi);
        PUSH32(esp, 0x0017D78Eu);
        RECOMP_ABI_CALL(0x001639F0u, sub_001639F0);
    }
    if (xml1_pc_native_activate(esi)) {
        ecx = esi;
        uint32_t pc_use_target = MEM32(MEM32(esi) + 0x2C);
        uint32_t pc_use_esp = esp;
        PUSH32(esp, 0x0017D78Eu);
        RECOMP_ICALL_SAFE(pc_use_target, pc_use_esp);
    }
    int pc_adjust = xml1_pc_native_adjust(esi);
    if (pc_adjust) {
        ecx = esi;
        uint32_t pc_adjust_esp = esp;
        uint32_t pc_adjust_target = MEM32(MEM32(esi) + 0x3C);
        PUSH32(esp, 0);
        PUSH32(esp, (uint32_t)pc_adjust);
        PUSH32(esp, 0x0017D78Eu);
        RECOMP_ICALL_SAFE(pc_adjust_target, pc_adjust_esp);
    }
    /* Preserve the game's resolved controller glyphs before a PC prompt update. */
    if (xml1_pc_native_prompt_pending(esi)) {
        ecx = esi;
        PUSH32(esp, 0x0017D78Eu);
        RECOMP_ABI_CALL(0x0017D590u, sub_0017D590);
        xml1_pc_native_prompt_original(esi, (const char *)((uintptr_t)g_xbox_mem_offset+eax));
    }
''',
    'loc_0017D78E: ;': '''loc_0017D78E: ;
    /* Apply PC text after native gamevar refresh, using the actual string handle. */
    xml1_pc_native_text_handle(esi, MEM32(esi + 0x74));
    if (xml1_pc_native_value(esi, (char *)((uintptr_t)g_xbox_mem_offset+esp-512), 512)) {
        esp -= 512;
        uint32_t pc_text = esp;
        PUSH32(esp, pc_text);
        ecx = esi + 0x74;
        PUSH32(esp, 0x0017D78Eu);
        RECOMP_ABI_CALL(0x001613A0u, sub_001613A0);
        esp += 512;
        xml1_pc_native_text_handle(esi, MEM32(esi + 0x74));
    }''',
}
# Binary and list-cycle controls override the text item's Update method.
# Their XBE vtables (003DF614 and 003DF3E4) retain the same Use/Focus ABI.
text_update = native_hooks['loc_0017D750: ;\n    PUSH32(esp, esi);\n    esi = ecx;']
pointer_update = text_update.split('    xml1_pc_native_owner', 1)[1].split('    /* Preserve the game', 1)[0]
pointer_update = '    xml1_pc_native_owner' + pointer_update
for entry, resume in [('00174860', '0017491D'), ('00177940', '00177970')]:
    marker = f'loc_{entry}: ;\n    PUSH32(esp, esi);\n    esi = ecx;'
    start = s.index(marker)
    end = s.index('    eax = MEM32(esi + 0x34);', start)
    s = s[:start] + marker + '\n' + pointer_update.replace('0017D78E', resume) + s[end:]
for marker, hook in native_hooks.items():
    if marker.startswith('loc_0017D750:'):
        # Replace this complete preamble so older installed hook revisions
        # cannot accumulate duplicate value updates on repeated generation.
        start = s.index(marker)
        end = s.index('    eax = MEM32(esi + 0x34);', start)
        s = s[:start] + hook + '\n' + s[end:]
        continue
    if hook in s or (marker=='loc_0017D78E: ;' and hook[len(marker):] in s):
        continue
    if s.count(marker) != 1:
        raise SystemExit('Verified native item boundary missing: '+marker)
    s = s.replace(marker, hook, 1)
if '#include "pc_menu.h"' not in s:
    s = '#include "pc_menu.h"\n' + s
if s != p.read_text(encoding='utf-8'):
    p.write_text(s, encoding='utf-8')

# Reuse CMenuItem's own focus-model assignment ABI (00173380/001733AB).
# This fills the declared model at its IGB anchor; it does not draw an overlay.
p = root / 'src/recomp/gen/recomp_0032.c'
s = p.read_text(encoding='utf-8')
marker = 'loc_0017D78E: ;'
hook = marker + '''
    if (MEM32(esi + 0x58)) {
        unsigned pc_owner = MEM32(esi + 4);
        int pc_indicator = xml1_pc_native_profile_indicator(esi,
            pc_owner && MEM32(pc_owner + 0x290) == esi);
        if (pc_indicator >= 0) {
            unsigned pc_name = MEM32(0x458674);
            if (pc_indicator && MEM32(esi + 0x54)) {
                PUSH32(esp, 0x0017D78Eu);
                RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0);
                unsigned pc_index = MEM32(esi + 0x54) & 0xFFFFFFu;
                pc_name = eax + MEM32(eax + pc_index * 4 + 4) + 0x1008u;
            }
            ecx = MEM32(esi + 0x58);
            unsigned pc_target = MEM32(MEM32(ecx) + 0x28);
            unsigned pc_stack = esp;
            PUSH32(esp, 0);
            PUSH32(esp, pc_name);
            PUSH32(esp, 0x0017D78Eu);
            RECOMP_ICALL_SAFE(pc_target, pc_stack);
        }
    }'''
if hook[len(marker):] not in s:
    if s.count(marker)!=1:raise SystemExit('Native text update boundary missing')
    p.write_text(s.replace(marker,hook,1),encoding='utf-8')

p = root / 'src/recomp/gen/recomp_0034.c'
s = p.read_text(encoding='utf-8')
for marker, hook in {
    'loc_0018A7E2: ;': 'loc_0018A7E2: ;\n    xml1_graphics_menu_writer(MEM32(esi),MEM32(MEM32(MEM32(esi))+8),(const unsigned *)((uintptr_t)g_xbox_mem_offset+MEM32(esi)));',
    'loc_0018A7A0: ;': 'loc_0018A7A0: ;\n    xml1_graphics_menu_quad(MEMF(esp+4),MEMF(esp+8),MEMF(esp+12),MEMF(esp+16));',
    'loc_0018ADA8: ;': 'loc_0018ADA8: ;\n    xml1_graphics_menu_command(esi);',
    'loc_0018B0DB: ;': 'loc_0018B0DB: ;\n    xml1_graphics_menu_replay(ebp);',
    'loc_0018B409: ;': 'loc_0018B409: ;\n    xml1_graphics_menu_end();',
}.items():
    if hook in s:
        continue
    if s.count(marker) != 1:
        raise SystemExit('Verified deferred-font boundary missing: '+marker)
    s = s.replace(marker, hook, 1)
if '#include "pc_menu.h"' not in s:
    s = '#include "pc_menu.h"\n' + s
if s != p.read_text(encoding='utf-8'):
    p.write_text(s, encoding='utf-8')

p = root / 'src/recomp/gen/recomp_0033.c'
s = p.read_text(encoding='utf-8')
marker = 'loc_00184FD0: ;'
hook = marker + '\n    xml1_pc_native_closed(MEM32(ecx + 0xC08));'
if hook not in s:
    if s.count(marker) != 1:
        raise SystemExit('Verified native close boundary missing')
    s = s.replace(marker, hook, 1)
if '#include "pc_menu.h"' not in s:
    s = '#include "pc_menu.h"\n' + s
if s != p.read_text(encoding='utf-8'):
    p.write_text(s, encoding='utf-8')

# Camera update has finished both effect slots at this boundary. Filtering the
# final additive vector leaves its original calculations, RNG and expiry checks
# intact for every shake mode, for direct and indirect calls alike.
p = root / 'src/recomp/gen/recomp_0004.c'
s = p.read_text(encoding='utf-8')
marker = 'loc_0004BF70: ;'
hook = marker + '\n    xml1_pc_filter_camera_shake((float *)((uintptr_t)g_xbox_mem_offset + ebx + 0x2D8u));'
if hook not in s:
    if s.count(marker) != 1 or 'void sub_0004BEF0(void)' not in s:
        raise SystemExit('Verified camera shake completion boundary missing')
    s = s.replace(marker, hook, 1)
if '#include "pc_menu.h"' not in s:
    s = '#include "pc_menu.h"\n' + s
if s != p.read_text(encoding='utf-8'):
    p.write_text(s, encoding='utf-8')

# PC volume preview: notify the original stream updater when the native music
# setter changes its gain. The XBE setter only stores B9E4; the stream updater
# checks B9EC before invoking 0014FAE0 and clears it after updating its streams.
# Keep native clamping, attenuation, streaming, and Accept/Back setters intact.
p = root / 'src/recomp/gen/recomp_0029.c'
s = p.read_text(encoding='utf-8')
marker = 'loc_0014F730: ;'
hook = marker + '\n    MEM8(ecx + 0xB9EC) = 1; /* PC music-volume preview: native stream refresh */'
if hook not in s:
    if s.count(marker) != 1 or 'loc_0014FC87: ;' not in s:
        raise SystemExit('Verified native music setter/stream-refresh boundary missing')
    s = s.replace(marker, hook, 1)
    p.write_text(s, encoding='utf-8')
