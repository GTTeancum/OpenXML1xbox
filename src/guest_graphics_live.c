#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern RECOMP_TLS uint32_t g_eax,g_ecx,g_edx,g_esp;
extern ptrdiff_t g_xbox_mem_offset;

static int enabled=-1;
static uint32_t matrices[10][16], matrix_mask, viewport[6], stream, stride, textures[4], fvf, pixel_shader;
static uint32_t methods[0x800], method_set[0x800];
static unsigned char *packet;
static size_t used, capacity;
static uint32_t draws, frames;
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
    if (va==0x35AE90) {
        if (a[0]>=10) fatal("invalid transform");
        memcpy(matrices[a[0]],guest(a[1],64),64); matrix_mask|=1u<<a[0];
    } else if (va==0x35BA10) memcpy(viewport,guest(a[0],24),24);
    else if (va==0x35D760) fvf=a[0];
    else if (va==0x3692E0) pixel_shader=a[0];
    else if (va==0x35D360&&a[0]==0) { stream=a[1]; stride=a[2]; }
    else if (va==0x35C060) { if (a[0]>=4) fatal("invalid texture stage"); textures[a[0]]=a[1]; }
    else if (va==0x35D900) { unsigned m=(g_ecx&0x1FFF)/4; methods[m]=g_edx; method_set[m]=1; }
    else if (va==0x362430) {
        /* The initial protocol coalesces only the observed full black/depth-one
         * startup clears before geometry. Refuse a different clear sequence. */
        if (draws||a[0]||a[1]||((a[2]&0xF0)&&a[3])||((a[2]&1)&&a[4]!=0x3F800000)||((a[2]&2)&&a[5]))
            fatal("unimplemented clear sequence");
    }
    else if (va==0x367AF0) {
        if (a[0]!=6||a[2]<3||fvf!=0x142||stride!=24||pixel_shader||!stream||!textures[0]||textures[1]||textures[2]||textures[3]) {
            fprintf(stderr,"[DX8 LIVE] primitive=%u vertices=%u fvf=%X stride=%u pixel=%X texture=%X/%X/%X/%X\n",
                a[0],a[2],fvf,stride,pixel_shader,textures[0],textures[1],textures[2],textures[3]);
            fatal("unimplemented draw path");
        }
        if ((matrix_mask&0x43)!=0x43||!viewport[2]||!viewport[3]) fatal("missing transform/viewport state");
        const uint32_t *tex=guest(textures[0],20), *vb=guest(stream,12);
        if (((tex[3]>>8)&255)!=14||tex[4]) fatal("unimplemented texture format");
        uint32_t header[3]={1u<<((tex[3]>>20)&15),1u<<((tex[3]>>24)&15),a[2]};
        uint64_t offset=(uint64_t)vb[1]+(uint64_t)a[1]*stride, bytes=(uint64_t)a[2]*stride;
        size_t tex_bytes=(size_t)((header[0]+3)/4)*((header[1]+3)/4)*16;
        if (offset+bytes>64u*1024*1024||(uint64_t)tex[1]+tex_bytes>64u*1024*1024) fatal("resource bounds");
        uint32_t rs[168]; memcpy(rs,guest(0x36C860,sizeof(rs)),sizeof(rs));
        static const unsigned mapping[][2]={{0x300,60},{0x304,59},{0x33C,58},{0x340,61},{0x344,62},{0x348,63},
            {0x350,74},{0x354,57},{0x358,67},{0x35C,64}};
        for (unsigned i=0;i<sizeof(mapping)/sizeof(mapping[0]);++i)
            if (method_set[mapping[i][0]/4]) rs[mapping[i][1]]=methods[mapping[i][0]/4];
        append(header,sizeof(header)); append(viewport,sizeof(viewport));
        append(matrices[6],64); append(matrices[0],64); append(matrices[1],64);
        append(rs,sizeof(rs)); append(guest(0x36C660,512),512);
        append(guest(0x80000000+tex[1],tex_bytes),tex_bytes);
        append(guest(0x80000000+(uint32_t)offset,(size_t)bytes),(size_t)bytes);
        ++draws;
    }
}
static void send_bytes(const void* data,size_t bytes) {
    while (bytes) {
        DWORD written=0,part=(DWORD)(bytes>1024*1024?1024*1024:bytes);
        if (!WriteFile(pipe,data,part,&written,NULL)||!written) fatal("graphics worker write failed");
        bytes-=written; data=(const unsigned char*)data+written;
    }
}
void xml1_graphics_swap(void) {
    if (!live()) fatal("Swap requires XML1_LIVE_DX8=1 (trace mode stops before Swap)");
    uint32_t flags=*(uint32_t*)guest(g_esp+4,4);
    if (flags) fatal("unimplemented swap flags");
    if (pipe==INVALID_HANDLE_VALUE) connect_worker();
    send_bytes("XMLDX8R1",8); send_bytes(&draws,4); send_bytes(packet,used);
    DWORD ack=0,bytes=0;
    if (!ReadFile(pipe,&ack,4,&bytes,NULL)||bytes!=4||ack!=frames+1) fatal("graphics frame acknowledgement failed");
    ++frames;
    if (frames==1||frames%60==0) fprintf(stderr,"[DX8 LIVE] presented frame=%u draws=%u bytes=%zu\n",frames,draws,used);
    draws=0; used=0;
    /* Return only after the native renderer has consumed the submitted frame. */
    g_eax=0; g_esp+=8;
}
