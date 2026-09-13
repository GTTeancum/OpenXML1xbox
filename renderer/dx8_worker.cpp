#include <windows.h>
// mingw-w64 vocabulary used by the pinned, otherwise unmodified DX8 headers.
typedef BOOL WINBOOL;
#ifndef __MSABI_LONG
#define __MSABI_LONG(value) value##L
#endif
#include <d3d8.h>
#include <cstdio>
#include <cstring>
#include "dx8_replay.h"
#include <io.h>
#include <fcntl.h>

// Stage one: establish actual system D3D8 capabilities before defining the
// Xbox-to-PC graphics bridge. This probe does not run or render game code.
int main(int argc, char** argv) {
    const bool replayMode = argc == 4 && std::strcmp(argv[1], "--replay") == 0;
    const bool liveMode = argc == 3 && std::strcmp(argv[1], "--stream") == 0;
    if (liveMode) {
        std::freopen("build/dx8-live.log","wb",stdout);
        std::freopen("build/dx8-live-errors.log","wb",stderr);
        std::setvbuf(stdout,nullptr,_IONBF,0);
    }
    if (!replayMode && !liveMode && (argc != 2 || std::strcmp(argv[1], "--probe") != 0)) {
        std::fprintf(stderr, "Usage: xml1-dx8-worker --probe | --replay packet.bin capture.bmp\n");
        return 2;
    }
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX);
    HMODULE library = LoadLibraryExW(L"d3d8.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);
    if (!library) { std::fprintf(stderr, "System D3D8 load failed: %lu\n", GetLastError()); return 1; }
    using Create = IDirect3D8* (WINAPI*)(UINT);
    auto create = reinterpret_cast<Create>(GetProcAddress(library, "Direct3DCreate8"));
    IDirect3D8* api = create ? create(D3D_SDK_VERSION) : nullptr;
    if (!api) { std::fprintf(stderr, "Direct3DCreate8 failed\n"); FreeLibrary(library); return 1; }
    wchar_t modulePath[MAX_PATH] = {};
    GetModuleFileNameW(library, modulePath, MAX_PATH);
    std::printf("System D3D8: %ls\n", modulePath);
    D3DADAPTER_IDENTIFIER8 adapter = {};
    D3DCAPS8 caps = {};
    api->GetAdapterIdentifier(D3DADAPTER_DEFAULT, 0, &adapter);
    HRESULT hr = api->GetDeviceCaps(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, &caps);
    if (FAILED(hr)) { api->Release(); FreeLibrary(library); return 1; }
    std::printf("Adapter: %s\nVertex shader: %08lx; pixel shader: %08lx\nMax texture: %lux%lu; stages: %lu; simultaneous textures: %lu\n",
        adapter.Description, caps.VertexShaderVersion, caps.PixelShaderVersion,
        caps.MaxTextureWidth, caps.MaxTextureHeight, caps.MaxTextureBlendStages, caps.MaxSimultaneousTextures);
    WNDCLASSW wc = {};
    wc.lpfnWndProc = DefWindowProcW;
    wc.hInstance = GetModuleHandleW(nullptr);
    wc.lpszClassName = L"OpenXML1DX8Probe";
    RegisterClassW(&wc);
    HWND window = CreateWindowW(wc.lpszClassName, L"XML1 D3D8 probe", WS_OVERLAPPEDWINDOW,
        0, 0, 640, 480, nullptr, nullptr, wc.hInstance, nullptr);
    D3DPRESENT_PARAMETERS pp = {};
    D3DDISPLAYMODE mode = {};
    api->GetAdapterDisplayMode(D3DADAPTER_DEFAULT, &mode);
    pp.BackBufferWidth = 640;
    pp.BackBufferHeight = 480;
    pp.BackBufferFormat = mode.Format;
    pp.BackBufferCount = 1;
    pp.SwapEffect = D3DSWAPEFFECT_DISCARD;
    pp.hDeviceWindow = window;
    pp.Windowed = TRUE;
    pp.EnableAutoDepthStencil = TRUE;
    pp.AutoDepthStencilFormat = D3DFMT_D24S8;
    pp.Flags = D3DPRESENTFLAG_LOCKABLE_BACKBUFFER;
    IDirect3DDevice8* device = nullptr;
    hr = api->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, window,
        D3DCREATE_HARDWARE_VERTEXPROCESSING | D3DCREATE_FPU_PRESERVE, &pp, &device);
    std::printf("Hidden D3D8 HAL device creation: %08lx\n", static_cast<unsigned long>(hr));
    if (device && replayMode) {
        try { replay(device,argv[2],argv[3]); }
        catch (const std::exception& error) { std::fprintf(stderr,"%s\n",error.what()); hr=E_FAIL; }
    }
    if (device && liveMode) {
        try {
            HANDLE pipe=CreateFileA(argv[2],GENERIC_READ|GENERIC_WRITE,0,nullptr,OPEN_EXISTING,0,nullptr);
            if (pipe==INVALID_HANDLE_VALUE) throw std::runtime_error("Cannot connect live graphics pipe");
            int fd=_open_osfhandle((intptr_t)pipe,_O_RDONLY|_O_BINARY);
            FILE* input=fd>=0?_fdopen(fd,"rb"):nullptr;
            if (!input) throw std::runtime_error("Cannot read graphics pipe");
            for (unsigned frame=1;;++frame) {
                int next=std::fgetc(input);
                if (next==EOF) break;
                std::ungetc(next,input);
                char capture[128];
                std::snprintf(capture,sizeof(capture),"build/dx8-live-frame-%06u.bmp",frame);
                replay_stream(device,input,(frame<=8||frame%60==0)?capture:nullptr,true);
                DWORD ack=frame,written=0;
                if (!WriteFile(pipe,&ack,4,&written,nullptr)||written!=4) break;
                if (frame==1||frame%60==0) std::printf("Presented live frame %u\n",frame);
            }
            std::fclose(input);
        } catch (const std::exception& error) { std::fprintf(stderr,"%s\n",error.what()); hr=E_FAIL; }
    }
    if (device) device->Release();
    if (window) DestroyWindow(window);
    UnregisterClassW(wc.lpszClassName, wc.hInstance);
    api->Release();
    FreeLibrary(library);
    return FAILED(hr) ? 1 : 0;
}
