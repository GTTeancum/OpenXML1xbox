#include "xbox_memory_layout.h"
#include "dx8_packet.h"
#include "guest_input.h"
#include "../external/xboxrecomp/src/d3d/d3d8_swizzle.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp;
extern ptrdiff_t g_xbox_mem_offset;

static int enabled=-1;
static uint32_t matrices[10][16], matrix_mask, viewport[6], stream, stride, textures[4], fvf, pixel_shader;
static uint32_t methods[0x800], method_set[0x800];
static uint32_t material[17], lights[32][26], light_mask, light_valid;
static int material_valid;
static unsigned char *packet;
static size_t used, capacity;
static uint32_t draws, frames;
static uint32_t sequence;
static int frame_geometry;
static void flush_completed_work(void);
static void ordered_clear(const uint32_t *args);
static HANDLE pipe=INVALID_HANDLE_VALUE, worker_job;
static void fatal(const char* message) {
    fprintf(stderr,"[FATAL DX8 LIVE] %s (Win32=%lu, frame=%u, draws=%u)\n",message,GetLastError(),frames,draws);
    _exit(4);
}
static int live(void) {
    if (enabled<0) { const char *v=getenv("XML1_LIVE_DX8"); enabled=v&&!strcmp(v,"1"); }
    return enabled;
}
static void *guest(uint32_t address,size_t bytes) {
    uint64_t end=(uint64_t)address+bytes;
    if (end<=xbox_GetMappedSize() || (address>=0x80000000 && end<=0x84000000))
        return (void*)((uintptr_t)g_xbox_mem_offset+address);
    fatal("invalid guest graphics memory"); return NULL;
}
static void append(const void* data,size_t bytes) {
    if (bytes>128u*1024*1024 || used+bytes>128u*1024*1024) fatal("frame exceeds diagnostic packet limit");
    if (used+bytes>capacity) {
        size_t next=(used+bytes+0xFFFF)&~(size_t)0xFFFF;
        void *replacement=realloc(packet,next);
        if (!replacement) fatal("graphics packet allocation failed");
        packet=replacement; capacity=next;
    }
    memcpy(packet+used,data,bytes); used+=bytes;
}
static void connect_worker(void) {
    char name[128], command[512];
    snprintf(name,sizeof(name),"\\\\.\\pipe\\OpenXML1DX8-%lu",GetCurrentProcessId());
    pipe=CreateNamedPipeA(name,PIPE_ACCESS_DUPLEX,PIPE_TYPE_BYTE|PIPE_READMODE_BYTE|PIPE_WAIT|PIPE_REJECT_REMOTE_CLIENTS,
        1,1024*1024,4096,10000,NULL);
    if (pipe==INVALID_HANDLE_VALUE) fatal("CreateNamedPipe failed");
    worker_job=CreateJobObjectW(NULL,NULL);
    JOBOBJECT_EXTENDED_LIMIT_INFORMATION limit={0};
    limit.BasicLimitInformation.LimitFlags=JOB_OBJECT_LIMIT_KILL_ON_JOB_CLOSE;
    if (!worker_job||!SetInformationJobObject(worker_job,JobObjectExtendedLimitInformation,&limit,sizeof(limit)))
        fatal("cannot bind graphics worker lifetime");
    STARTUPINFOA start={0}; PROCESS_INFORMATION process={0}; start.cb=sizeof(start);
    snprintf(command,sizeof(command),"build\\renderer\\Release\\xml1-dx8-worker.exe --stream %s",name);
    if (!CreateProcessA(NULL,command,NULL,NULL,FALSE,CREATE_NO_WINDOW|CREATE_SUSPENDED,NULL,NULL,&start,&process))
        fatal("cannot launch native DX8 worker");
    if (!AssignProcessToJobObject(worker_job,process.hProcess)) {
        TerminateProcess(process.hProcess,4); fatal("cannot contain graphics worker lifetime");
    }
    ResumeThread(process.hThread); CloseHandle(process.hThread); CloseHandle(process.hProcess);
    if (!ConnectNamedPipe(pipe,NULL)&&GetLastError()!=ERROR_PIPE_CONNECTED) fatal("graphics worker connection failed");
    fprintf(stderr,"[DX8 LIVE] connected persistent native DX8 worker\n");
}
void xml1_graphics_live_observe(uint32_t va) {
    if (!live()||va<0x35ADA0||va>=0x36F300) return;
    const uint32_t *a=guest(g_esp+4,32);
    if(va==0x3679B0||va==0x367840||va==0x367E30) {
        fprintf(stderr,"[DX8 DRAW API] va=%08X args=%08X/%08X/%08X/%08X/%08X fvf=%08X stride=%u pixel=%08X caller=%08X\n",
            va,a[0],a[1],a[2],a[3],a[4],fvf,stride,pixel_shader,*(const uint32_t *)guest(g_esp,4));
        fatal("unimplemented indexed/UP/immediate draw API");
    }
    if (va==0x35FC00 && frames) flush_completed_work();
    if (va==0x35FDE0) {
        static unsigned logged;
        if (logged++<8) {
            uint32_t device=*(uint32_t*)guest(0x36CAF8,4);
            const uint32_t *d=guest(device,0x40);
            fprintf(stderr,"[DX8 FENCE] target=%08X flags=%08X latest=%08X completion_ptr=%08X completion=%08X frames=%u pending_draws=%u caller=%08X\n",
                a[0],a[1],d[0x2c/4],d[0x30/4],*(uint32_t*)guest(d[0x30/4],4),frames,draws,*(uint32_t*)guest(g_esp,4));
        }
    }
    if (va==0x35AE90) {
        if (a[0]>=10) fatal("invalid transform");
        memcpy(matrices[a[0]],guest(a[1],64),64); matrix_mask|=1u<<a[0];
    } else if (va==0x35BA10) memcpy(viewport,guest(a[0],24),24);
    else if (va==0x35AFB0) { memcpy(material,guest(a[0],68),68); material_valid=1; }
    else if (va==0x35BC40) {
        if(a[0]>=32) fatal("light index exceeds supported range");
        memcpy(lights[a[0]],guest(a[1],104),104); light_valid|=1u<<a[0];
    }
    else if (va==0x35BF00) {
        if(a[0]>=32) fatal("light index exceeds supported range");
        if(a[1]) light_mask|=1u<<a[0]; else light_mask&=~(1u<<a[0]);
    }
    else if (va==0x35D760) fvf=a[0];
    else if (va==0x3692E0) pixel_shader=a[0];
    else if (va==0x35D360&&a[0]==0) { stream=a[1]; stride=a[2]; }
    else if (va==0x35C060) { if (a[0]>=4) fatal("invalid texture stage"); textures[a[0]]=a[1]; }
    else if (va==0x35D900) { unsigned m=(g_ecx&0x1FFF)/4; methods[m]=g_edx; method_set[m]=1; }
    else if (va==0x362430) {
        /* Coalesce the observed startup clear, preserving all later clears in
         * submission order through native DX8 commands. */
        if (frame_geometry||a[0]||a[1]||((a[2]&0xF0)&&a[3])||((a[2]&1)&&a[4]!=0x3F800000)||((a[2]&2)&&a[5])) {
            static unsigned reports;
            if(reports++<8) fprintf(stderr,"[DX8 CLEAR] count=%u rect=%08X flags=%08X color=%08X depth=%08X stencil=%08X\n",a[0],a[1],a[2],a[3],a[4],a[5]);
            ordered_clear(a);
        }
    }
    else if (va==0x367AF0||va==0x367B90) {
        int indexed=va==0x367B90;
        uint32_t vertex_count=indexed?a[1]:a[2];
        /* D3DTOP_DISABLE terminates the fixed-function texture cascade. Bound
         * resources in disabled stages do not participate in the draw. */
        uint32_t second_color_op=*(const uint32_t *)guest(0x36C660+128+12*4,4);
        const uint32_t *ts=guest(0x36C660,512);
        int second_active=ts[12]!=1&&second_color_op!=1;
        if (a[0]!=6||vertex_count<3||vertex_count>1000000||!xml1_fvf_stride(fvf)||stride!=xml1_fvf_stride(fvf)||pixel_shader||!stream||!textures[0]||(second_active&&(!textures[1]||ts[76]!=1))) {
            for(unsigned stage=0;stage<4;++stage) if (textures[stage]) {
                const uint32_t *t=guest(textures[stage],20);
                const uint32_t *s=guest(0x36C660+stage*128,128);
                fprintf(stderr,"[DX8 RESOURCE] stage=%u texture=%08X %08X %08X %08X %08X color=%u/%u/%u alpha=%u/%u/%u coord=%08X\n",stage,t[0],t[1],t[2],t[3],t[4],s[12],s[14],s[15],s[16],s[18],s[19],s[28]);
            }
            fprintf(stderr,"[DX8 LIVE] primitive=%u vertices=%u fvf=%X stride=%u pixel=%X texture=%X/%X/%X/%X\n",
                a[0],vertex_count,fvf,stride,pixel_shader,textures[0],textures[1],textures[2],textures[3]);
            const uint32_t *r=guest(0x36C860,168*4);
            fprintf(stderr,"[DX8 LIGHTING] lighting=%u specular=%u ambient=%08X colorvertex=%u localviewer=%u normalize=%u\n",r[102],r[103],r[115],r[105],r[104],r[142]);
            fatal("unimplemented draw path");
        }
        if ((matrix_mask&0x43)!=0x43||!viewport[2]||!viewport[3]) fatal("missing transform/viewport state");
        const uint32_t *tex=guest(textures[0],20), *vb=guest(stream,12);
        const uint32_t *tex1=second_active?guest(textures[1],20):NULL;
        uint32_t second_header[3]={0}; size_t second_bytes=0;
        if(tex1) {
            unsigned fmt=(tex1[3]>>8)&255;
            if((fmt!=14&&fmt!=6&&fmt!=0&&fmt!=25)||tex1[4]) fatal("unimplemented second texture format");
            second_header[0]=1u<<((tex1[3]>>20)&15); second_header[1]=1u<<((tex1[3]>>24)&15); second_header[2]=fmt;
            second_bytes=fmt!=14?(size_t)second_header[0]*second_header[1]*(fmt==6?4:1):(size_t)((second_header[0]+3)/4)*((second_header[1]+3)/4)*16;
            if((uint64_t)tex1[1]+second_bytes>64u*1024*1024) fatal("second texture bounds");
        }
        for(unsigned stage=0;stage<2;++stage)
            if(ts[stage*32+21]&&!(matrix_mask&(1u<<(stage+2)))) fatal("missing texture transform");
        uint32_t format=(tex[3]>>8)&255;
        if ((format!=14&&format!=6&&format!=0&&format!=25)||tex[4]) fatal("unimplemented texture format");
        uint32_t header[5]={1u<<((tex[3]>>20)&15),1u<<((tex[3]>>24)&15),vertex_count,format,fvf};
        uint64_t offset=(uint64_t)vb[1]+(indexed?0:(uint64_t)a[1]*stride), bytes=(uint64_t)vertex_count*stride;
        size_t tex_bytes=format!=14?(size_t)header[0]*header[1]*(format==6?4:1):(size_t)((header[0]+3)/4)*((header[1]+3)/4)*16;
        if (offset+bytes>64u*1024*1024||(uint64_t)tex[1]+tex_bytes>64u*1024*1024) fatal("resource bounds");
        uint32_t rs[168]; memcpy(rs,guest(0x36C860,sizeof(rs)),sizeof(rs));
        if(rs[102]&&(!material_valid||(light_mask&~light_valid))) fatal("missing material or enabled light definition");
        static const unsigned mapping[][2]={{0x300,60},{0x304,59},{0x33C,58},{0x340,61},{0x344,62},{0x348,63},
            {0x350,74},{0x354,57},{0x358,67},{0x35C,64}};
        for (unsigned i=0;i<sizeof(mapping)/sizeof(mapping[0]);++i)
            if (method_set[mapping[i][0]/4]) rs[mapping[i][1]]=methods[mapping[i][0]/4];
        append(header,sizeof(header)); append(viewport,sizeof(viewport));
        append(matrices[6],64); append(matrices[0],64); append(matrices[1],64);
        append(rs,sizeof(rs)); append(guest(0x36C660,512),512);
        append(material,sizeof(material)); append(&light_mask,4);
        for(unsigned i=0;i<32;++i) if(light_mask&(1u<<i)) append(lights[i],104);
        append(second_header,sizeof(second_header)); append(matrices[2],64); append(matrices[3],64);
        const void *pixels=guest(0x80000000+tex[1],tex_bytes);
        if (format==6) {
            static unsigned argb_reports;
            if (argb_reports<4 || frames%60==0) {
                const uint32_t *rgba=pixels;
                size_t colored=0,opaque=0;
                for (size_t i=0;i<tex_bytes/4;++i) {
                    colored+=(rgba[i]&0xFFFFFF)!=0;
                    opaque+=(rgba[i]>>24)!=0;
                }
                fprintf(stderr,"[DX8 ARGB] frame=%u texture=%08X data=%08X size=%ux%u colored=%zu alpha_nonzero=%zu first=%08X\n",
                    frames,textures[0],tex[1],header[0],header[1],colored,opaque,rgba[0]);
                ++argb_reports;
            }
        }
        if(format!=14) {
            void *linear=malloc(tex_bytes);
            if (!linear) fatal("texture conversion allocation failed");
            xbox_unswizzle_rect(linear,pixels,header[0],header[1],format==6?4:1);
            append(linear,tex_bytes); free(linear);
        } else append(pixels,tex_bytes);
        if(tex1) {
            const void *second_pixels=guest(0x80000000+tex1[1],second_bytes);
            if(second_header[2]!=14) {
                void *linear=malloc(second_bytes);
                if(!linear) fatal("second texture conversion allocation failed");
                xbox_unswizzle_rect(linear,second_pixels,second_header[0],second_header[1],second_header[2]==6?4:1);
                append(linear,second_bytes);free(linear);
            } else append(second_pixels,second_bytes);
        }
        if(indexed) {
            const uint16_t *indices=guest(a[2],vertex_count*2);
            uint32_t device=*(const uint32_t *)guest(0x36CAF8,4);
            uint32_t base=*(const uint32_t *)guest(device+0x1C,4);
            for(uint32_t i=0;i<vertex_count;++i) {
                uint64_t at=(uint64_t)vb[1]+((uint64_t)base+indices[i])*stride;
                if(at+stride>64u*1024*1024) fatal("indexed vertex bounds");
                append(guest(0x80000000+(uint32_t)at,stride),stride);
            }
            static unsigned reports;
            if(reports++<6) fprintf(stderr,"[DX8 INDEXED] indices=%u base=%u stream=%08X first=%u\n",vertex_count,base,stream,indices[0]);
        } else append(guest(0x80000000+(uint32_t)offset,(size_t)bytes),(size_t)bytes);
        ++draws;
        frame_geometry=1;
    }
}
static void send_bytes(const void* data,size_t bytes) {
    while (bytes) {
        DWORD written=0,part=(DWORD)(bytes>1024*1024?1024*1024:bytes);
        if (!WriteFile(pipe,data,part,&written,NULL)||!written) fatal("graphics worker write failed");
        bytes-=written; data=(const unsigned char*)data+written;
    }
}
static void receive_ack(void) {
    DWORD ack=0,bytes=0;
    if (!ReadFile(pipe,&ack,4,&bytes,NULL)||bytes!=4||ack!=sequence+1)
        fatal("graphics acknowledgement failed");
    ++sequence;
}
static void flush_completed_work(void) {
    uint32_t device=*(uint32_t*)guest(0x36CAF8,4);
    uint32_t *d=guest(device,0x40);
    if (g_ecx!=device) fatal("unexpected push-buffer flush device");
    uint32_t fence=d[0x2c/4]-2;
    send_bytes("XMLDX8F4",8); send_bytes(&draws,4); send_bytes(packet,used); receive_ack();
    draws=0; used=0;
    /* InsertFence records this counter before incrementing by two. Signal only
     * after all preceding native submissions have completed; no Present here. */
    *(uint32_t*)guest(d[0x30/4],4)=fence;
    static unsigned logged;
    if (logged++<8) fprintf(stderr,"[DX8 FENCE] native completion=%08X sequence=%u\n",fence,sequence);
}
static void ordered_clear(const uint32_t *a) {
    if((a[2]&~0xF3u)||((a[2]&0xF0)!=0&&(a[2]&0xF0)!=0xF0)||a[0]>4096)
        fatal("unsupported clear flags or rectangle count");
    const void *rects=a[0]?guest(a[1],(size_t)a[0]*16):NULL;
    if(pipe==INVALID_HANDLE_VALUE) connect_worker();
    if(draws) {
        send_bytes("XMLDX8F4",8); send_bytes(&draws,4); send_bytes(packet,used); receive_ack();
        draws=0; used=0;
    }
    uint32_t header[5]={a[2],a[3],a[4],a[5],a[0]};
    send_bytes("XMLDX8C4",8); send_bytes(header,sizeof(header));
    if(a[0]) send_bytes(rects,(size_t)a[0]*16);
    receive_ack();
}
void xml1_graphics_swap(void) {
    if (!live()) fatal("Swap requires XML1_LIVE_DX8=1 (trace mode stops before Swap)");
    uint32_t flags=*(uint32_t*)guest(g_esp+4,4);
    if (flags) fatal("unimplemented swap flags");
    if (frames<8) {
        uint32_t device=*(uint32_t*)guest(0x36CAF8,4);
        const uint32_t *d=guest(device,0x40);
        fprintf(stderr,"[DX8 SUBMIT] frame=%u latest_fence=%08X completed=%08X draws=%u\n",
            frames+1,d[0x2c/4],*(uint32_t*)guest(d[0x30/4],4),draws);
    }
    if (pipe==INVALID_HANDLE_VALUE) connect_worker();
    send_bytes("XMLDX8R4",8); send_bytes(&draws,4); send_bytes(packet,used);
    receive_ack();
    ++frames;
    xml1_input_test_frame(frames);
    if (frames==1||frames%60==0) fprintf(stderr,"[DX8 LIVE] presented frame=%u draws=%u bytes=%zu\n",frames,draws,used);
    draws=0; used=0; frame_geometry=0;
    /* Return only after the native renderer has consumed the submitted frame. */
    g_eax=0; g_esp+=8;
}
