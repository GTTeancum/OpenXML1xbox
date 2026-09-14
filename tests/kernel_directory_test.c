#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef void (*guest_fn)(void);
extern guest_fn recomp_lookup_kernel(uint32_t);
extern RECOMP_TLS uint32_t g_eax, g_esp;
extern ptrdiff_t g_xbox_mem_offset;
void *recomp_lookup(ULONG a) { (void)a; abort(); }
void *recomp_lookup_manual(ULONG a) { (void)a; abort(); }
static uint8_t *mem;
static guest_fn query;
static int invoke(HANDLE h, const char *pattern, unsigned restart, unsigned klass) {
    uint32_t *sp=(uint32_t *)(mem+0x20000);
    memset(sp,0,64); sp[0]=0xBEEF0001;
    sp[1]=(uint32_t)(uintptr_t)h; sp[5]=0x30000; sp[6]=0x31000;
    sp[7]=512; sp[8]=klass; sp[9]=pattern?0x32000:0; sp[10]=restart;
    if(pattern) {
        *(uint16_t *)(mem+0x32000)=(uint16_t)strlen(pattern);
        *(uint16_t *)(mem+0x32002)=(uint16_t)strlen(pattern)+1;
        *(uint32_t *)(mem+0x32004)=0x32100;
        strcpy((char *)mem+0x32100,pattern);
    }
    memset(mem+0x30000,0xCC,8); memset(mem+0x31000,0xCC,512);
    g_esp=0x20000; query();
    if(g_esp!=0x2002C) { fprintf(stderr,"FAIL directory query stack: %08X expected 0002002C\n",g_esp); return 0; }
    if(*(uint32_t *)(mem+0x30000)!=g_eax) { puts("FAIL I/O status differs"); return 0; }
    return 1;
}
int main(void) {
    char root[MAX_PATH], path[MAX_PATH];
    GetTempPathA(MAX_PATH,root); sprintf(path,"%sxml1-dir-test-%lu",root,GetCurrentProcessId());
    if(!CreateDirectoryA(path,NULL)) return 10;
    char child[MAX_PATH]; sprintf(child,"%s\\SaveSlot",path); CreateDirectoryA(child,NULL);
    HANDLE h=CreateFileA(path,FILE_LIST_DIRECTORY,FILE_SHARE_READ|FILE_SHARE_WRITE|FILE_SHARE_DELETE,NULL,OPEN_EXISTING,FILE_FLAG_BACKUP_SEMANTICS,NULL);
    if(h==INVALID_HANDLE_VALUE||(uintptr_t)h>UINT32_MAX) return 11;
    mem=VirtualAlloc(NULL,16*1024*1024,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE); if(!mem) return 12;
    g_xbox_mem_offset=(ptrdiff_t)mem;
    *(uint32_t *)(mem+0x10000)=0x800000CF;
    *(uint32_t *)(mem+0x10004)=0x800000CA;
    *(uint32_t *)(mem+0x10008)=0x800000BB;
    *(uint32_t *)(mem+0x1000C)=0x800000E2;
    xbox_kernel_set_thunk_address(0x10000,4); xbox_kernel_bridge_init();
    query=recomp_lookup_kernel(*(uint32_t *)(mem+0x10000));
    int ok=invoke(h,"Save*",1,1);
    XBOX_FILE_DIRECTORY_INFORMATION *e=(void *)(mem+0x31000);
    if(ok && (g_eax || e->FileNameLength!=8 || memcmp(e->FileName,"SaveSlot",8) || !(e->FileAttributes&16))) {
        fprintf(stderr,"FAIL filtered directory: status=%08X length=%lu\n",g_eax,e->FileNameLength); ok=0;
    }
    if(ok) ok=invoke(h,NULL,0,1) && g_eax==0x80000006u;
    if(ok) ok=invoke(h,"Save*",1,1) && g_eax==0;
    if(ok) ok=invoke(h,"*",1,1) && g_eax==0 && e->FileNameLength==8 && !memcmp(e->FileName,"SaveSlot",8);
    if(ok) ok=invoke(h,"*",1,2) && g_eax==0xC0000003u;
    /* XFindFirstFile shortens ANSI_STRING.Length to exclude its wildcard,
     * without inserting a NUL at the new end of the directory name. */
    xbox_path_init(path,NULL);
    *(uint32_t *)(mem+0x40000)=0;
    *(uint32_t *)(mem+0x40004)=0x40100;
    *(uint32_t *)(mem+0x40008)=0;
    const char counted[]="D:\\SaveSlot*ignored";
    memcpy(mem+0x40200,counted,sizeof(counted));
    *(uint16_t *)(mem+0x40100)=11;
    *(uint16_t *)(mem+0x40102)=sizeof(counted);
    *(uint32_t *)(mem+0x40104)=0x40200;
    uint32_t *sp=(uint32_t *)(mem+0x20000);memset(sp,0,64);
    sp[0]=0xBEEF0001;sp[1]=0x40500;sp[2]=1;sp[3]=0x40000;
    sp[4]=0x40600;sp[5]=7;sp[6]=1;
    g_esp=0x20000;recomp_lookup_kernel(*(uint32_t *)(mem+0x10004))();
    if(g_eax || g_esp!=0x2001C) {
        fprintf(stderr,"FAIL counted directory name: status=%08X ESP=%08X\n",g_eax,g_esp);ok=0;
    }
    if(!g_eax) {
        uint32_t token=*(uint32_t *)(mem+0x40500);
        char saved[MAX_PATH]; sprintf(saved,"%s\\save.dat",child);
        HANDLE file=CreateFileA(saved,GENERIC_WRITE,7,NULL,CREATE_ALWAYS,0,NULL);
        DWORD written; WriteFile(file,"roundtrip",9,&written,NULL); CloseHandle(file);
        *(uint32_t *)(mem+0x40000)=token;
        memcpy(mem+0x40200,"save.dat",9);
        *(uint16_t *)(mem+0x40100)=8; *(uint16_t *)(mem+0x40102)=9;
        memset(sp,0,64);sp[0]=0xBEEF0001;sp[1]=0x40504;sp[2]=0x00110100;
        sp[3]=0x40000;sp[4]=0x40600;sp[5]=7;sp[6]=0x4040;
        g_esp=0x20000;recomp_lookup_kernel(*(uint32_t *)(mem+0x10004))();
        if(g_eax || g_esp!=0x2001C) {
            fprintf(stderr,"FAIL relative save open: status=%08X ESP=%08X\n",g_eax,g_esp);ok=0;
        } else {
            uint32_t file_token=*(uint32_t *)(mem+0x40504);
            mem[0x40700]=1;memset(sp,0,64);
            sp[0]=0xBEEF0001;sp[1]=file_token;sp[2]=0x40600;
            sp[3]=0x40700;sp[4]=1;sp[5]=13;
            g_esp=0x20000;recomp_lookup_kernel(*(uint32_t *)(mem+0x1000C))();
            if(g_eax || g_esp!=0x20018) ok=0;
            sp[0]=0xBEEF0001;sp[1]=file_token;g_esp=0x20000;
            recomp_lookup_kernel(*(uint32_t *)(mem+0x10008))();
            if(g_eax || GetFileAttributesA(saved)!=INVALID_FILE_ATTRIBUTES) {
                puts("FAIL relative save delete-on-close");ok=0;
            }
        }
        DeleteFileA(saved);
        sp[0]=0xBEEF0001;sp[1]=token;g_esp=0x20000;
        recomp_lookup_kernel(*(uint32_t *)(mem+0x10008))();
        if(g_eax || g_esp!=0x20008) ok=0;
    }
    CloseHandle(h); RemoveDirectoryA(child); RemoveDirectoryA(path); VirtualFree(mem,0,MEM_RELEASE);
    if(!ok) return 1;
    puts("PASS: Xbox directory ABI, 40-byte cleanup, filter, continuation, restart, dot exclusion, class rejection, counted object-name prefix, and relative save deletion"); return 0;
}

