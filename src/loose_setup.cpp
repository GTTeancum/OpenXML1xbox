#include <windows.h>
#include <commctrl.h>
#include <filesystem>
#include <fstream>
#include <string>
#include <thread>
#include <mutex>
#include <atomic>
#include <stdexcept>
#include <cstdio>
#include "loose_extract.h"
#include "loose_setup.h"
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
namespace fs=std::filesystem;
namespace {
struct SetupLock {
    HANDLE handle=INVALID_HANDLE_VALUE;
    ~SetupLock() {if(handle!=INVALID_HANDLE_VALUE)CloseHandle(handle);}
};
struct Setup {
    fs::path root,archive,stage;
    std::atomic<bool> cancel{false},finished{false};
    std::mutex mutex;unsigned done=0,total=1;std::string current="Preparing files",error;
    bool success=false;std::thread worker;
};
int progress(void *context,unsigned done,unsigned total,const char *name) {
    auto& s=*(Setup*)context;
    {std::lock_guard<std::mutex> lock(s.mutex);s.done=done;s.total=total?total:1;s.current=name;}
    return !s.cancel;
}
void cleanup_stage(Setup& s) {
    // Only remove the unique staging directory owned by this invocation.
    fs::path root=fs::absolute(s.root).lexically_normal();
    fs::path stage=fs::absolute(s.stage).lexically_normal();
    if(stage.parent_path()!=root || stage.filename().wstring().find(L".loose-setup-")!=0)
        throw std::runtime_error("Refusing cleanup outside the setup staging directory");
    DWORD attrs=GetFileAttributesW(stage.c_str());
    if(attrs==INVALID_FILE_ATTRIBUTES)return;
    if(attrs&FILE_ATTRIBUTE_REPARSE_POINT)throw std::runtime_error("Setup staging directory became a link");
    fs::remove_all(stage);
}
void run(Setup& s) {
    try {
        char error[1024]={0};
        if(!xml1_extract_loose(s.archive.c_str(),s.stage.c_str(),progress,&s,error,sizeof(error)))throw std::runtime_error(error);
        // Publish only complete files. Existing files are user-owned and kept.
        // Reject reparse directories so installation cannot write outside root.
        for(auto& entry:fs::recursive_directory_iterator(s.stage)) {
            if(!entry.is_regular_file())continue;
            if(s.cancel)throw std::runtime_error("Setup cancelled. Completed files were preserved; restart to try again.");
            fs::path relative=fs::relative(entry.path(),s.stage),target=s.root/relative;
            fs::path parent=s.root;
            for(auto& component:relative.parent_path()) {
                parent/=component;
                DWORD attrs=GetFileAttributesW(parent.c_str());
                if(attrs!=INVALID_FILE_ATTRIBUTES && (attrs&FILE_ATTRIBUTE_REPARSE_POINT))throw std::runtime_error("Installation directory is a link: "+parent.u8string());
                fs::create_directory(parent);
            }
            if(fs::exists(target) && !fs::is_regular_file(target))
                throw std::runtime_error("A directory occupies an asset filename: "+relative.u8string());
            if(!fs::exists(target)) {
                if(!MoveFileExW(entry.path().c_str(),target.c_str(),MOVEFILE_WRITE_THROUGH))throw std::runtime_error("Cannot install "+relative.u8string());
            }
        }
        // Never mark interrupted or failed preparation as complete.
        if(s.cancel)throw std::runtime_error("Setup cancelled");
        fs::path marker=s.stage/".xml1-loose-ready";
        std::ofstream file(marker,std::ios::binary);file<<"OpenXML1 loose assets version 1\n";file.close();
        if(!file)throw std::runtime_error("Cannot write loose setup completion marker");
        if(!MoveFileExW(marker.c_str(),(s.root/".xml1-loose-ready").c_str(),MOVEFILE_WRITE_THROUGH))
            throw std::runtime_error("Cannot publish loose setup completion marker");
        s.success=true;
    } catch(const std::exception& e) {s.error=e.what();}
    try { cleanup_stage(s); }
    catch(const std::exception& e) { if(!s.success)s.error+="; "+std::string(e.what()); }
    s.finished=true;
}
HRESULT CALLBACK dialog(HWND window,UINT message,WPARAM w,LPARAM,LONG_PTR data) {
    auto& s=*(Setup*)data;
    if(message==TDN_CREATED) {
        SendMessageW(window,TDM_SET_PROGRESS_BAR_RANGE,0,MAKELPARAM(0,1000));
        s.worker=std::thread([&s]{run(s);});
    } else if(message==TDN_TIMER) {
        {std::lock_guard<std::mutex> lock(s.mutex);
            SendMessageW(window,TDM_SET_PROGRESS_BAR_POS,(WPARAM)(1000ull*s.done/s.total),0);
            std::wstring name(s.current.begin(),s.current.end());
            SendMessageW(window,TDM_SET_ELEMENT_TEXT,TDE_CONTENT,(LPARAM)name.c_str());
        }
        if(s.finished)SendMessageW(window,TDM_CLICK_BUTTON,IDCANCEL,0);
    } else if(message==TDN_BUTTON_CLICKED) {
        if(!s.finished) {s.cancel=true;return S_FALSE;}
    }
    return S_OK;
}
}
extern "C" int xml1_prepare_loose_assets(const char *game_root,int headless,char *error,unsigned error_size) {
    Setup s;
    SetupLock setup_lock;
    try {
        s.root=fs::absolute(fs::u8path(game_root));
        fs::path marker=s.root/".xml1-loose-ready";
        if(fs::exists(marker)) {
            std::ifstream f(marker);std::string version;std::getline(f,version);
            if(version!="OpenXML1 loose assets version 1")throw std::runtime_error("Unrecognized loose setup marker");
            return 1;
        }
        s.archive=s.root/"z/assetsfb.zip";
        if(!fs::is_regular_file(s.archive))throw std::runtime_error("First-run setup needs z/assetsfb.zip in the game directory.");
        setup_lock.handle=CreateFileW((s.root/".xml1-loose-setup.lock").c_str(),GENERIC_READ|GENERIC_WRITE,
            0,nullptr,OPEN_ALWAYS,FILE_ATTRIBUTE_TEMPORARY|FILE_FLAG_DELETE_ON_CLOSE,nullptr);
        if(setup_lock.handle==INVALID_HANDLE_VALUE)
            throw std::runtime_error("Cannot start setup. Close any other game setup using this directory and check that the directory is writable.");
        // A second process may have completed setup between the first check and lock acquisition.
        if(fs::exists(marker)) {
            std::ifstream f(marker);std::string version;std::getline(f,version);
            if(version!="OpenXML1 loose assets version 1")throw std::runtime_error("Unrecognized loose setup marker");
            return 1;
        }
        s.stage=s.root/(".loose-setup-"+std::to_string(GetCurrentProcessId())+"-"+std::to_string(GetTickCount64()));
        if(headless)run(s);
        else {
            INITCOMMONCONTROLSEX controls{sizeof(controls),ICC_PROGRESS_CLASS};InitCommonControlsEx(&controls);
            TASKDIALOGCONFIG config{};config.cbSize=sizeof(config);config.hInstance=GetModuleHandleW(nullptr);
            config.dwFlags=TDF_SHOW_PROGRESS_BAR|TDF_CALLBACK_TIMER|TDF_ALLOW_DIALOG_CANCELLATION|TDF_SIZE_TO_CONTENT;
            config.dwCommonButtons=TDCBF_CANCEL_BUTTON;
            config.pszWindowTitle=L"X-Men Legends — First-run setup";
            config.pszMainInstruction=L"Preparing game files";
            config.pszContent=L"Extracting loose assets and building packages. This only needs to run once.";
            config.pszFooter=L"Existing files and saved games will be kept.";
            config.pfCallback=dialog;config.lpCallbackData=(LONG_PTR)&s;
            HRESULT hr=TaskDialogIndirect(&config,nullptr,nullptr,nullptr);
            if(FAILED(hr)) {s.cancel=true;if(s.worker.joinable())s.worker.join();throw std::runtime_error("Could not open the first-run setup dialog");}
            if(s.worker.joinable())s.worker.join();
        }
        if(!s.success)throw std::runtime_error(s.error.empty()?"Setup did not complete":s.error);
        return 1;
    } catch(const std::exception& e) {
        if(error_size)snprintf(error,error_size,"%s",e.what());
        if(!headless)MessageBoxA(nullptr,e.what(),"X-Men Legends setup",MB_OK|MB_ICONERROR);
        return 0;
    }
}
