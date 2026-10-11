#include <windows.h>
#include <bcrypt.h>
#include <stdio.h>
#include <string.h>
#include <wchar.h>

static int matches_payload(const wchar_t *path,const unsigned char *payload,DWORD size) {
    HANDLE file=CreateFileW(path,GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,0,NULL);
    if(file==INVALID_HANDLE_VALUE)return 0;
    LARGE_INTEGER actual;
    int valid=GetFileSizeEx(file,&actual)&&actual.QuadPart==size;
    unsigned char block[4096];
    for(DWORD offset=0;valid&&offset<size;) {
        DWORD count=size-offset,read=0;if(count>sizeof(block))count=sizeof(block);
        valid=ReadFile(file,block,count,&read,NULL)&&read==count&&!memcmp(block,payload+offset,count);
        offset+=count;
    }
    CloseHandle(file);
    return valid;
}

static const wchar_t *stable_worker(const wchar_t *versioned,const unsigned char *payload,DWORD size) {
    static wchar_t stable[32768],temporary[32768];
    wchar_t root[30000];DWORD n=GetEnvironmentVariableW(L"LOCALAPPDATA",root,30000);
    if(!n || n>=30000)return versioned;
    swprintf(stable,32768,L"%ls\\OpenXML1\\xml1-dx8-worker.exe",root);
    HANDLE f=CreateFileW(stable,GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,0,NULL);
    int valid=0;
    if(f!=INVALID_HANDLE_VALUE) {
        LARGE_INTEGER actual;valid=GetFileSizeEx(f,&actual)&&actual.QuadPart==size;
        unsigned char block[4096];
        for(DWORD offset=0;valid && offset<size;) {
            DWORD count=size-offset,read=0;if(count>sizeof(block))count=sizeof(block);
            valid=ReadFile(f,block,count,&read,NULL)&&read==count&&!memcmp(block,payload+offset,count);offset+=count;
        }
        CloseHandle(f);
    }
    if(!valid) {
        swprintf(temporary,32768,L"%ls.tmp-%lu-%llu",stable,GetCurrentProcessId(),GetTickCount64());
        if(CopyFileW(versioned,temporary,TRUE)) {
            valid=MoveFileExW(temporary,stable,MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH);
            if(!valid)DeleteFileW(temporary);
        }
    }
    // An older running game may own the stable file. Do not disturb its run;
    // retain the verified versioned fallback and report the actual identity.
    char utf8[131072];
    if(!WideCharToMultiByte(CP_UTF8,0,valid?stable:versioned,-1,utf8,sizeof(utf8),NULL,NULL))
        strcpy(utf8,"<path conversion failed>");
    fprintf(stderr,"[DX8 WORKER IDENTITY] path=%s stable=%d\n",utf8,valid);
    return valid?stable:versioned;
}

/* Windows cannot execute the 32-bit DX8 image inside a 64-bit process.
 * Ship it as RCDATA and materialize an immutable, content-addressed copy
 * under this user's cache. No launcher, redistributable or adjacent EXE is
 * required. Compare the full existing payload before trusting the cache. */
static const wchar_t *prepare_worker(void)
{
    static wchar_t path[32768];
    HMODULE module=GetModuleHandleW(NULL);
    HRSRC resource=FindResourceW(module,MAKEINTRESOURCEW(101),MAKEINTRESOURCEW(10));
    if (!resource) return NULL;
    DWORD size=SizeofResource(module,resource);
    const unsigned char *bytes=LockResource(LoadResource(module,resource));
    unsigned char digest[32];
    if (!bytes || !size || BCryptHash(BCRYPT_SHA256_ALG_HANDLE,NULL,0,
            (PUCHAR)bytes,size,digest,sizeof(digest))<0) return NULL;
    /* Keep profile paths UTF-16 all the way to CreateProcessW. ANSI APIs
     * replace characters outside the system code page with '?', making an
     * otherwise valid user cache path fail before the first rendered frame. */
    wchar_t root[30000],hex[65];
    DWORD length=GetEnvironmentVariableW(L"LOCALAPPDATA",root,30000);
    if (!length || length>=30000) return NULL;
    for (unsigned i=0;i<32;i++) swprintf(hex+2*i,65-2*i,L"%02x",digest[i]);
    swprintf(path,32768,L"%ls\\OpenXML1",root);
    if (!CreateDirectoryW(path,NULL) && GetLastError()!=ERROR_ALREADY_EXISTS) return NULL;
    swprintf(path,32768,L"%ls\\OpenXML1\\dx8-%ls.exe",root,hex);
    if(matches_payload(path,bytes,size))return stable_worker(path,bytes,size);
    /* Never publish a partially written executable. A killed first launch used
     * to leave the final hash-named file truncated and all later launches then
     * refused it permanently. Reconstruct only from this EXE's trusted resource,
     * flush privately, then publish atomically. Do not execute a damaged cache. */
    wchar_t temporary[32768];
    swprintf(temporary,32768,L"%ls.tmp-%lu-%llu",path,GetCurrentProcessId(),GetTickCount64());
    HANDLE file=CreateFileW(temporary,GENERIC_WRITE,0,NULL,CREATE_NEW,FILE_ATTRIBUTE_NORMAL,NULL);
    if(file==INVALID_HANDLE_VALUE)return NULL;
    DWORD written=0;
    int ok=WriteFile(file,bytes,size,&written,NULL) && written==size && FlushFileBuffers(file);
    DWORD error=ok?ERROR_SUCCESS:GetLastError();
    CloseHandle(file);
    if(ok&&!MoveFileExW(temporary,path,MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH)) {
        error=GetLastError();ok=0;
    }
    if(!ok) {
        DeleteFileW(temporary);
        /* A concurrent launcher may have installed the same verified payload
         * while this process wrote. A locked/corrupt file is still a failure. */
        if(!matches_payload(path,bytes,size)){SetLastError(error);return NULL;}
    }
    if(!matches_payload(path,bytes,size)){SetLastError(ERROR_INVALID_DATA);return NULL;}
    fprintf(stderr,"[DX8 WORKER CACHE] verified embedded renderer published\n");
    return stable_worker(path,bytes,size);
}

static const wchar_t *worker_path;
static BOOL CALLBACK initialize_worker(PINIT_ONCE once,PVOID parameter,PVOID *context) {
    (void)once;(void)parameter;(void)context;worker_path=prepare_worker();return TRUE;
}
const wchar_t *xml1_embedded_worker(void) {
    static INIT_ONCE once=INIT_ONCE_STATIC_INIT;
    InitOnceExecuteOnce(&once,initialize_worker,NULL,NULL);return worker_path;
}
