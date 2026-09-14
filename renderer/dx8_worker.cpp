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

static bool user_closed = false;
static LRESULT CALLBACK playtest_window_proc(HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
    if (message == WM_CLOSE) { user_closed = true; return 0; }
    return DefWindowProcW(window, message, wparam, lparam);
}

static bool pump_playtest_window() {
    MSG message;
    while (PeekMessageW(&message, nullptr, 0, 0, PM_REMOVE)) {
        TranslateMessage(&message);
        DispatchMessageW(&message);
    }
    return !user_closed;
}

// Stage one: establish actual system D3D8 capabilities before defining the
// Xbox-to-PC graphics bridge. This probe does not run or render game code.
int main(int argc, char** argv) {
    const bool replayMode = argc == 4 && std::strcmp(argv[1], "--replay") == 0;
    const bool benchmarkMode = argc == 4 && std::strcmp(argv[1], "--benchmark") == 0;
    const bool vblankMode = argc == 3 && std::strcmp(argv[1], "--vblank-stream") == 0;
    const bool liveMode = vblankMode || (argc == 3 && std::strcmp(argv[1], "--stream") == 0);
    const char* visibleEnv = std::getenv("XML1_DX8_VISIBLE");
    const bool visible = liveMode && !vblankMode && visibleEnv && !std::strcmp(visibleEnv, "1");
    if (liveMode) {
        std::freopen(vblankMode?"build/dx8-vblank.log":"build/dx8-live.log","wb",stdout);
        std::freopen(vblankMode?"build/dx8-vblank-errors.log":"build/dx8-live-errors.log","wb",stderr);
        std::setvbuf(stdout,nullptr,_IONBF,0);
    }
    if (!replayMode && !benchmarkMode && !liveMode && (argc != 2 || std::strcmp(argv[1], "--probe") != 0)) {
        std::fprintf(stderr, "Usage: xml1-dx8-worker --probe | --replay packet.bin capture.bmp | --benchmark packet.bin iterations\n");
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
    wc.lpfnWndProc = playtest_window_proc;
    wc.hInstance = GetModuleHandleW(nullptr);
    wc.lpszClassName = L"OpenXML1DX8Probe";
    RegisterClassW(&wc);
    const DWORD windowStyle = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX;
    unsigned render_width=liveMode&&!vblankMode?1280:640,render_height=liveMode&&!vblankMode?720:480;
    const char* resolution=vblankMode?nullptr:std::getenv("XML1_DX8_RESOLUTION");
    if(resolution) {
        if(!std::strcmp(resolution,"1280x720")) {render_width=1280;render_height=720;}
        else if(!std::strcmp(resolution,"1920x1080")) {render_width=1920;render_height=1080;}
        else if(!std::strcmp(resolution,"640x480")) {render_width=640;render_height=480;}
        else {std::fprintf(stderr,"Unsupported XML1_DX8_RESOLUTION\n");return 2;}
    }
    output_width=render_width;output_height=render_height;
    RECT client = {0, 0, (LONG)render_width, (LONG)render_height};
    AdjustWindowRect(&client, windowStyle, FALSE);
    HWND window = CreateWindowW(wc.lpszClassName, visible ? L"OpenXML1 - DX8 Playtest" : L"XML1 D3D8 probe", windowStyle,
        CW_USEDEFAULT, CW_USEDEFAULT, client.right-client.left, client.bottom-client.top,
        nullptr, nullptr, wc.hInstance, nullptr);
    D3DPRESENT_PARAMETERS pp = {};
    D3DDISPLAYMODE mode = {};
    api->GetAdapterDisplayMode(D3DADAPTER_DEFAULT, &mode);
    std::printf("Native display refresh: %u Hz\n",mode.RefreshRate);
    pp.BackBufferWidth = render_width;
    pp.BackBufferHeight = render_height;
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
    std::printf("%s D3D8 HAL device creation: %08lx\n", visible ? "Visible playtest" : "Hidden", static_cast<unsigned long>(hr));
    std::printf("Native backbuffer: %ux%u\n",render_width,render_height);
    if (device && visible) ShowWindow(window, SW_SHOWNORMAL);
    if (device && replayMode) {
        try { replay(device,argv[2],argv[3]); }
        catch (const std::exception& error) { std::fprintf(stderr,"%s\n",error.what()); hr=E_FAIL; }
    }
    if(device && benchmarkMode) {
        quiet_replay=true;
        unsigned iterations=(unsigned)std::strtoul(argv[3],nullptr,10);
        if(!iterations || iterations>10000) return 2;
        try {
            LARGE_INTEGER start,end,frequency; QueryPerformanceFrequency(&frequency);
            for(unsigned i=0;i<5;++i) replay(device,argv[2],nullptr);
            QueryPerformanceCounter(&start);
            for(unsigned i=0;i<iterations;++i) replay(device,argv[2],nullptr);
            QueryPerformanceCounter(&end);
            double ms=1000.0*(end.QuadPart-start.QuadPart)/frequency.QuadPart/iterations;
            std::printf("[DX8 BENCHMARK] iterations=%u mean_ms=%.3f render_fps=%.2f\n",iterations,ms,1000.0/ms);
        } catch(const std::exception& error) {std::fprintf(stderr,"%s\n",error.what());hr=E_FAIL;}
    }
    if (device && liveMode) {
        try {
            HANDLE pipe=CreateFileA(argv[2],GENERIC_READ|GENERIC_WRITE,0,nullptr,OPEN_EXISTING,0,nullptr);
            if (pipe==INVALID_HANDLE_VALUE) throw std::runtime_error("Cannot connect live graphics pipe");
            int fd=_open_osfhandle((intptr_t)pipe,_O_RDONLY|_O_BINARY);
            FILE* input=fd>=0?_fdopen(fd,"rb"):nullptr;
            if (!input) throw std::runtime_error("Cannot read graphics pipe");
            unsigned frame=1;
            LARGE_INTEGER fps_start,fps_previous,fps_frequency;QueryPerformanceFrequency(&fps_frequency);
            QueryPerformanceCounter(&fps_start);fps_previous=fps_start;double max_frame_ms=0;
            for (unsigned sequence=1;;++sequence) {
                if (visible) {
                    // The producer waits for each acknowledgement before
                    // sending its next command, so no next-command bytes
                    // can remain in stdio's buffer at this boundary.
                    DWORD available = 0;
                    while (pump_playtest_window()) {
                        if (!PeekNamedPipe(pipe, nullptr, 0, nullptr, &available, nullptr)) break;
                        if (available) break;
                        // A synchronous pipe does not wake a message-only
                        // wait. A 10ms timeout here delays every guest flush,
                        // reducing gameplay to a few FPS. Yield without a
                        // fixed delay and keep pumping this window's messages.
                        SwitchToThread();
                    }
                    if (user_closed) { std::printf("Playtest window closed by user\n"); break; }
                }
                int next=std::fgetc(input);
                if (next==EOF) break;
                std::ungetc(next,input);
                char capture[128];
                std::snprintf(capture,sizeof(capture),"build/dx8-live-frame-%06u.bmp",frame);
                ULONGLONG command_start=GetTickCount64();
                if(vblankMode) {
                    char magic[8];
                    if(std::fread(magic,1,8,input)!=8 || std::memcmp(magic,"XMLDX8V1",8))
                        throw std::runtime_error("Invalid vertical blank command");
                    wait_native_vblank(device);
                    DWORD ack=sequence,written=0;
                    if(!WriteFile(pipe,&ack,4,&written,nullptr)||written!=4) break;
                    continue;
                }
                // Human sessions opt out of synchronous GPU readback and BMP writes.
                const bool capture_enabled = !std::getenv("XML1_DX8_NO_CAPTURE");
                bool presented=replay_stream(device,input,(capture_enabled && (std::getenv("XML1_DX8_CAPTURE_ALL")||frame<=8||frame%60==0))?capture:nullptr,true);
                ULONGLONG command_ms=GetTickCount64()-command_start;
                if(command_ms>=50) std::printf("[DX8 COMMAND] seq=%u frame=%u presented=%u ms=%llu\n",sequence,frame,presented,command_ms);
                DWORD ack=sequence,written=0;
                if (!WriteFile(pipe,&ack,4,&written,nullptr)||written!=4) break;
                if (presented) {
                    LARGE_INTEGER now;QueryPerformanceCounter(&now);
                    double frame_ms=1000.0*(now.QuadPart-fps_previous.QuadPart)/fps_frequency.QuadPart;
                    if(frame_ms>max_frame_ms)max_frame_ms=frame_ms;fps_previous=now;
                    if(frame%120==0) {
                        double seconds=(double)(now.QuadPart-fps_start.QuadPart)/fps_frequency.QuadPart;
                        std::printf("[DX8 FPS] frame=%u fps=%.2f mean_ms=%.3f max_frame_ms=%.3f output=%ux%u\n",frame,120.0/seconds,1000.0*seconds/120,max_frame_ms,render_width,render_height);
                        fps_start=now;max_frame_ms=0;
                    }
                    if (frame==1||frame%60==0) {std::printf("Presented live frame %u\n",frame);report_texture_cache(frame);}
                    ++frame;
                }
            }
            std::fclose(input);
        } catch (const std::exception& error) { std::fprintf(stderr,"%s\n",error.what()); hr=E_FAIL; }
    }
    if(texture_requests) report_texture_cache(0);
    clear_texture_cache();
    if (device) device->Release();
    if (window) DestroyWindow(window);
    UnregisterClassW(wc.lpszClassName, wc.hInstance);
    api->Release();
    FreeLibrary(library);
    return FAILED(hr) ? 1 : 0;
}
