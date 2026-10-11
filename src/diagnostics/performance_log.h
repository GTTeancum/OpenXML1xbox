#pragma once
#ifdef __cplusplus
extern "C" {
#endif
void xml1_performance_start(int enabled);
void xml1_performance_frame(unsigned frame);
void xml1_performance_event(const char *command);
#ifdef __cplusplus
}
#endif
