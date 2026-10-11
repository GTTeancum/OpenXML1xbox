#pragma once
#ifdef __cplusplus
extern "C" {
#endif
int raven_pc_sound_cache_init(const char *root);
// Receives the title's final guest path after language/resource selection.
int raven_pc_sound_path(const char *input,char *output,unsigned capacity);
#ifdef __cplusplus
}
#endif
