#include <windows.h>
#include <bcrypt.h>
#include <stdio.h>
#include <string.h>

static const char *stable_worker(const char *versioned,const unsigned char *payload,DWORD size) {
    static char stable[32768],temporary[32768];
    char root[30000];DWORD n=GetEnvironmentVariableA("LOCALAPPDATA",root,sizeof(root));
    if(!n || n>=sizeof(root))return versioned;
    snprintf(stable,sizeof(stable),"%s\\OpenXML1\\xml1-dx8-worker.exe",root);
    HANDLE f=CreateFileA(stable,GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,0,NULL);
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
        snprintf(temporary,sizeof(temporary),"%s.tmp-%lu-%llu",stable,GetCurrentProcessId(),GetTickCount64());
        if(CopyFileA(versioned,temporary,TRUE)) {
            valid=MoveFileExA(temporary,stable,MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH);
            if(!valid)DeleteFileA(temporary);
        }
    }
    // An older running game may own the stable file. Do not disturb its run;
    // retain the verified versioned fallback and report the actual identity.
    fprintf(stderr,"[DX8 WORKER IDENTITY] path=%s stable=%d\n",valid?stable:versioned,valid);
    return valid?stable:versioned;
}

/* Windows cannot execute the 32-bit DX8 image inside a 64-bit process.
 * Ship it as RCDATA and materialize an immutable, content-addressed copy
 * under this user's cache. No launcher, redistributable or adjacent EXE is
 * required. Compare the full existing payload before trusting the cache. */
static const char *prepare_worker(void)
{
    static char path[32768];
    HMODULE module=GetModuleHandleW(NULL);
    HRSRC resource=FindResourceW(module,MAKEINTRESOURCEW(101),MAKEINTRESOURCEW(10));
    if (!resource) return NULL;
    DWORD size=SizeofResource(module,resource);
    const unsigned char *bytes=LockResource(LoadResource(module,resource));
    unsigned char digest[32];
    if (!bytes || !size || BCryptHash(BCRYPT_SHA256_ALG_HANDLE,NULL,0,
            (PUCHAR)bytes,size,digest,sizeof(digest))<0) return NULL;
    char root[30000],hex[65];
    DWORD length=GetEnvironmentVariableA("LOCALAPPDATA",root,sizeof(root));
    if (!length || length>=sizeof(root)) return NULL;
    for (unsigned i=0;i<32;i++) sprintf(hex+2*i,"%02x",digest[i]);
    snprintf(path,sizeof(path),"%s\\OpenXML1",root);
    if (!CreateDirectoryA(path,NULL) && GetLastError()!=ERROR_ALREADY_EXISTS) return NULL;
    snprintf(path,sizeof(path),"%s\\OpenXML1\\dx8-%s.exe",root,hex);
    HANDLE file=CreateFileA(path,GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,0,NULL);
    if (file!=INVALID_HANDLE_VALUE) {
        LARGE_INTEGER actual; DWORD read; unsigned char block[4096];
        int valid=GetFileSizeEx(file,&actual) && actual.QuadPart==size;
        for (DWORD offset=0;valid && offset<size;) {
            DWORD count=size-offset; if(count>sizeof(block))count=sizeof(block);
            valid=ReadFile(file,block,count,&read,NULL) && read==count && !memcmp(block,bytes+offset,count);
            offset+=count;
        }
        CloseHandle(file);
        return valid?stable_worker(path,bytes,size):NULL; /* Refuse corrupted cache entries. */
    }
    file=CreateFileA(path,GENERIC_WRITE,0,NULL,CREATE_NEW,FILE_ATTRIBUTE_NORMAL,NULL);
    if(file==INVALID_HANDLE_VALUE)return NULL;
    DWORD written=0;
    int ok=WriteFile(file,bytes,size,&written,NULL) && written==size && FlushFileBuffers(file);
    CloseHandle(file);
    if(!ok){DeleteFileA(path);return NULL;}
    return stable_worker(path,bytes,size);
}

static const char *worker_path;
static BOOL CALLBACK initialize_worker(PINIT_ONCE once,PVOID parameter,PVOID *context) {
    (void)once;(void)parameter;(void)context;worker_path=prepare_worker();return TRUE;
}
const char *xml1_embedded_worker(void) {
    static INIT_ONCE once=INIT_ONCE_STATIC_INIT;
    InitOnceExecuteOnce(&once,initialize_worker,NULL,NULL);return worker_path;
}
