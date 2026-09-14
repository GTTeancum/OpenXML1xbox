#pragma once
#ifdef __cplusplus
extern "C" {
#endif
void xml1_extend_main_menu(char *xml, unsigned size);
int xml1_install_pc_menu(const char *root, char *error, unsigned error_size);
void xml1_pc_menu_command(const char *command);
#ifdef __cplusplus
}
#endif
