/* Exercise save-directory enumeration without touching any player files. */
#include "kernel.h"
#include "xbox_memory_layout.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *recomp_lookup(ULONG address) { (void)address; abort(); }
void *recomp_lookup_manual(ULONG address) { (void)address; abort(); }

/* Exercise the same tagged-handle bridge used by generated game code, not
 * only the underlying file implementation. Direct CloseHandle in that bridge
 * used to bypass search cleanup despite the low-level tests passing. */
extern ptrdiff_t g_xbox_mem_offset;
extern RECOMP_TLS uint32_t g_eax,g_esp;
typedef void (*guest_fn)(void);
extern guest_fn recomp_lookup_kernel(uint32_t);
static uint8_t *guest;
static uint32_t invoke(uint32_t target,const uint32_t *args,unsigned count) {
    g_esp=0x20000;
    uint32_t *stack=(uint32_t *)(guest+g_esp);stack[0]=0;
    for(unsigned i=0;i<count;++i)stack[i+1]=args[i];
    guest_fn fn=recomp_lookup_kernel(target);if(!fn)abort();fn();
    if(g_esp!=0x20004+4*count)abort();
    return g_eax;
}
static int bridge_lifetime(const WCHAR *directory) {
    char utf8[MAX_PATH*3];
    WideCharToMultiByte(CP_UTF8,0,directory,-1,utf8,sizeof(utf8),NULL,NULL);
    xbox_path_init(utf8,utf8);
    guest=VirtualAlloc(NULL,16*1024*1024,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE);
    if(!guest)return 20;
    g_xbox_mem_offset=(ptrdiff_t)guest;
    uint32_t *imports=(uint32_t *)(guest+0x10000);
    imports[0]=0x80000000u|202;imports[1]=0x80000000u|207;imports[2]=0x80000000u|187;
    xbox_kernel_set_thunk_address(0x10000,3);xbox_kernel_bridge_init();
    uint32_t *oa=(uint32_t *)(guest+0x30000);oa[0]=0;oa[1]=0x30100;oa[2]=0;
    uint16_t *name=(uint16_t *)(guest+0x30100);name[0]=3;name[1]=4;
    *(uint32_t *)(guest+0x30104)=0x30200;memcpy(guest+0x30200,"D:\\",4);
    name=(uint16_t *)(guest+0x30300);name[0]=8;name[1]=9;
    *(uint32_t *)(guest+0x30304)=0x30400;memcpy(guest+0x30400,"save.dat",9);
    int result=0;DWORD before,after;GetProcessHandleCount(GetCurrentProcess(),&before);
    for(unsigned pass=0;pass<256 && !result;++pass) {
        uint32_t open[]={0x30500,FILE_LIST_DIRECTORY,0x30000,0x30600,7,1};
        if(invoke(imports[0],open,6)){result=21;break;}
        uint32_t handle=*(uint32_t *)(guest+0x30500);
        uint32_t query[]={handle,0,0,0,0x30600,0x31000,1024,XboxFileDirectoryInformation,0x30300,0};
        uint32_t status=invoke(imports[1],query,10);
        PXBOX_FILE_DIRECTORY_INFORMATION entry=(void *)(guest+0x31000);
        if(status || entry->FileNameLength!=8 || memcmp(entry->FileName,"save.dat",8)) {
            fprintf(stderr,"bridge reopen pass=%u status=%08x\n",pass,status);result=22;
        }
        /* Alternate early-close and exhausted scans. Both must reset on reopen. */
        if(pass&1)if(invoke(imports[1],query,10)!=(uint32_t)STATUS_NO_MORE_FILES)result=23;
        if(invoke(imports[2],&handle,1))result=24;
    }
    GetProcessHandleCount(GetCurrentProcess(),&after);if(after>before+2)result=25;
    VirtualFree(guest,0,MEM_RELEASE);g_xbox_mem_offset=0;
    /* Path initialization creates these known private test artifacts. */
    WCHAR path[MAX_PATH];
    for(unsigned i=0;i<6;++i){swprintf_s(path,MAX_PATH,L"%s\\Partition%u.img",directory,i);DeleteFileW(path);}
    const WCHAR *sub[]={L"TitleData",L"UserData",L"Cache",L"SystemData"};
    for(unsigned i=0;i<4;++i){swprintf_s(path,MAX_PATH,L"%s\\%s",directory,sub[i]);RemoveDirectoryW(path);}
    if(!result)puts("Directory bridge: 256 tagged-handle open/query/close cycles, early and exhausted searches, no search leaks");
    return result;
}

int main(void) {
    WCHAR temp[MAX_PATH], directory[MAX_PATH], filename[MAX_PATH];
    GetTempPathW(MAX_PATH,temp);
    swprintf_s(directory,MAX_PATH,L"%sxml1-directory-test-%lu",temp,GetCurrentProcessId());
    if(!CreateDirectoryW(directory,NULL))return 10;
    swprintf_s(filename,MAX_PATH,L"%s\\save.dat",directory);
    HANDLE file=CreateFileW(filename,GENERIC_WRITE,0,NULL,CREATE_NEW,0,NULL);
    if(file==INVALID_HANDLE_VALUE)return 11;
    CloseHandle(file);
    int result=0;
    DWORD handles_before=0,handles_after=0;
    GetProcessHandleCount(GetCurrentProcess(),&handles_before);
    for(unsigned pass=0;pass<256 && !result;++pass) {
        HANDLE dir=CreateFileW(directory,FILE_LIST_DIRECTORY,FILE_SHARE_READ|FILE_SHARE_WRITE|FILE_SHARE_DELETE,
            NULL,OPEN_EXISTING,FILE_FLAG_BACKUP_SEMANTICS,NULL);
        if(dir==INVALID_HANDLE_VALUE){result=12;break;}
        char data[1024]={0};XBOX_IO_STATUS_BLOCK io={0};
        XBOX_ANSI_STRING pattern={8,9,"save.dat"};
        NTSTATUS status=xbox_NtQueryDirectoryFile(dir,NULL,NULL,NULL,&io,data,sizeof(data),
            XboxFileDirectoryInformation,&pattern,FALSE);
        PXBOX_FILE_DIRECTORY_INFORMATION entry=(PXBOX_FILE_DIRECTORY_INFORMATION)data;
        if(status!=STATUS_SUCCESS || entry->FileNameLength!=8 || memcmp(entry->FileName,"save.dat",8)) {
            fprintf(stderr,"directory reopen pass=%u status=%08lx name_length=%lu\n",pass,(unsigned long)status,entry->FileNameLength);
            result=13;
        }
        /* Stop before EOF, like callers that found their desired save. The
         * next open must not inherit this search even if Windows reuses handles. */
        xbox_NtClose(dir);
    }
    /* Modded rosters and large save collections must not hit a 64-search cap. */
    HANDLE directories[128]={0};
    for(unsigned i=0;i<128 && !result;++i) {
        directories[i]=CreateFileW(directory,FILE_LIST_DIRECTORY,FILE_SHARE_READ|FILE_SHARE_WRITE|FILE_SHARE_DELETE,
            NULL,OPEN_EXISTING,FILE_FLAG_BACKUP_SEMANTICS,NULL);
        char data[1024];XBOX_IO_STATUS_BLOCK io={0};XBOX_ANSI_STRING pattern={8,9,"save.dat"};
        if(xbox_NtQueryDirectoryFile(directories[i],NULL,NULL,NULL,&io,data,sizeof(data),
            XboxFileDirectoryInformation,&pattern,FALSE)!=STATUS_SUCCESS){result=15;break;}
        for(unsigned eof=0;eof<2;++eof)
            if(xbox_NtQueryDirectoryFile(directories[i],NULL,NULL,NULL,&io,data,sizeof(data),
                XboxFileDirectoryInformation,&pattern,FALSE)!=STATUS_NO_MORE_FILES)result=16;
        if(xbox_NtQueryDirectoryFile(directories[i],NULL,NULL,NULL,&io,data,sizeof(data),
            XboxFileDirectoryInformation,&pattern,TRUE)!=STATUS_SUCCESS)result=17;
    }
    for(unsigned i=0;i<128;++i)if(directories[i] && directories[i]!=INVALID_HANDLE_VALUE)xbox_NtClose(directories[i]);
    GetProcessHandleCount(GetCurrentProcess(),&handles_after);
    if(handles_after>handles_before+2){fprintf(stderr,"leaked handles: %lu\n",handles_after-handles_before);result=14;}
    if(!result)result=bridge_lifetime(directory);
    DeleteFileW(filename);RemoveDirectoryW(directory);
    if(!result)puts("Directory lifetime: 256 partial scans/close/reopen, 128 concurrent searches, stable EOF/restart, no leaked search handles");
    return result;
}
