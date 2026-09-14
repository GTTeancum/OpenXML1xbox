#pragma once

typedef struct Xml1BuildSettings {
    int prefer_files_loose;
    char text_language[4], movie_language[4], audio_language[4];
} Xml1BuildSettings;
extern Xml1BuildSettings xml1_build_settings;
/* Missing file uses defaults. Invalid values fail with a useful error. */
int xml1_read_build_settings(const char *path, Xml1BuildSettings *out, char *error, unsigned error_size);
int xml1_prefer_files_loose(void);
