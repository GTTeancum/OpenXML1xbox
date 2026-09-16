#pragma once
#include <windows.h>
#include <cstdio>
#include <cerrno>
#include <stdexcept>

// One blocking reader fetches only the next command's first byte. The render
// thread can wait on an event plus its window messages instead of repeatedly
// polling the pipe and consuming a CPU core. The FILE stream is never accessed
// concurrently: ready transfers ownership back until the next request.
class PipeReady {
    FILE *input_;
    HANDLE request_=nullptr, ready_=nullptr, thread_=nullptr;
    volatile LONG stop_=0;
    int next_=EOF;
    int read_errno_=0;
    DWORD read_error_=0;
    static DWORD WINAPI run(void *context) {
        auto self=static_cast<PipeReady*>(context);
        for (;;) {
            WaitForSingleObject(self->request_,INFINITE);
            if(InterlockedCompareExchange(&self->stop_,0,0))return 0;
            self->next_=std::fgetc(self->input_);
            // errno and GetLastError are thread-local: preserve them here,
            // before the render thread reports an unexpected stream exit.
            self->read_errno_=errno;
            self->read_error_=GetLastError();
            SetEvent(self->ready_);
        }
    }
public:
    int read_errno() const {return read_errno_;}
    DWORD read_error() const {return read_error_;}
    explicit PipeReady(FILE *input):input_(input) {
        request_=CreateEventW(nullptr,FALSE,FALSE,nullptr);
        ready_=CreateEventW(nullptr,FALSE,FALSE,nullptr);
        if(request_ && ready_)thread_=CreateThread(nullptr,0,run,this,0,nullptr);
        if(!thread_) {
            if(request_)CloseHandle(request_);
            if(ready_)CloseHandle(ready_);
            throw std::runtime_error("Cannot create graphics pipe readiness reader");
        }
    }
    ~PipeReady() {
        InterlockedExchange(&stop_,1);SetEvent(request_);
        // Cancellation can race the reader entering ReadFile. Repeat until
        // it exits; never close the FILE or events while it still owns them.
        while(WaitForSingleObject(thread_,0)==WAIT_TIMEOUT) {
            CancelSynchronousIo(thread_);WaitForSingleObject(thread_,10);
        }
        CloseHandle(thread_);CloseHandle(ready_);CloseHandle(request_);
    }
    int next(bool (*pump)()) {
        SetEvent(request_);
        for (;;) {
            if(!pump())return EOF;
            DWORD result=MsgWaitForMultipleObjectsEx(1,&ready_,INFINITE,
                QS_ALLINPUT,MWMO_INPUTAVAILABLE);
            if(result==WAIT_OBJECT_0)return next_;
            if(result!=WAIT_OBJECT_0+1)throw std::runtime_error("Graphics pipe readiness wait failed");
        }
    }
};
