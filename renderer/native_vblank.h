#pragma once
#include <winternl.h>
#include <d3dkmthk.h>

// This is a Windows display wait, not a rendering backend. The kernel signals
// the actual VidPN source's vertical blank; no scanline polling or timer-based
// synthetic guest completion is involved. Rendering remains Direct3D 8.
class NativeVblank {
    D3DKMT_HANDLE adapter_=0;
    UINT source_=0;
    wchar_t display_[32]={};
    using Open=NTSTATUS (WINAPI *)(D3DKMT_OPENADAPTERFROMHDC*);
    using Close=NTSTATUS (WINAPI *)(const D3DKMT_CLOSEADAPTER*);
    using Wait=NTSTATUS (WINAPI *)(const D3DKMT_WAITFORVERTICALBLANKEVENT*);
    Close close_=nullptr;
    Wait wait_=nullptr;
public:
    void clear() {if(adapter_ && close_) {D3DKMT_CLOSEADAPTER a={adapter_};close_(&a);}adapter_=0;display_[0]=0;}
    ~NativeVblank(){clear();}
    void open(HMONITOR monitor) {
        MONITORINFOEXW info={};info.cbSize=sizeof(info);
        if(!monitor || !GetMonitorInfoW(monitor,&info))throw std::runtime_error("Cannot identify vertical-blank display");
        open_display(info.szDevice);
    }
    void select_display(const char *display) {
        wchar_t wide[32]={};
        if(!MultiByteToWideChar(CP_ACP,0,display,-1,wide,32))throw std::runtime_error("Invalid display identity");
        if(std::wcscmp(wide,display_))open_display(wide);
    }
    void open_display(const wchar_t *display) {
        clear();
        HMODULE gdi=GetModuleHandleW(L"gdi32.dll");
        auto open=(Open)GetProcAddress(gdi,"D3DKMTOpenAdapterFromHdc");
        close_=(Close)GetProcAddress(gdi,"D3DKMTCloseAdapter");
        wait_=(Wait)GetProcAddress(gdi,"D3DKMTWaitForVerticalBlankEvent");
        if(!open || !close_ || !wait_)throw std::runtime_error("Windows display wait is unavailable");
        HDC dc=CreateDCW(L"DISPLAY",display,nullptr,nullptr);
        if(!dc)throw std::runtime_error("Cannot open vertical-blank display");
        D3DKMT_OPENADAPTERFROMHDC a={};a.hDc=dc;
        NTSTATUS status=open(&a);DeleteDC(dc);
        if(status<0)throw std::runtime_error("Cannot open Windows display adapter for vertical blank");
        adapter_=a.hAdapter;source_=a.VidPnSourceId;
        std::wcsncpy(display_,display,31);display_[31]=0;
        std::printf("[DX8 DISPLAY WAIT] backend=D3DKMT display=%ls source=%u luid=%08lx:%08lx\n",
            display_,source_,a.AdapterLuid.HighPart,a.AdapterLuid.LowPart);
    }
    void wait() {
        if(!adapter_)throw std::runtime_error("Vertical-blank display was not initialized");
        D3DKMT_WAITFORVERTICALBLANKEVENT a={};a.hAdapter=adapter_;a.VidPnSourceId=source_;
        NTSTATUS status=wait_(&a);
        if(status<0) {std::fprintf(stderr,"[DX8 DISPLAY WAIT ERROR] status=%08lx\n",status);throw std::runtime_error("Windows vertical-blank wait failed");}
    }
};
