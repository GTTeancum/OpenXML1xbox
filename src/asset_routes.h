#pragma once
#include "build_settings.h"
int xml1_asset_routes_init(const char *root, const Xml1BuildSettings *settings, char *error, unsigned size);
/* 0 unchanged, 1 replacement in output, -1 denied. */
int xml1_asset_path_filter(const char *input, char *output, unsigned size);
