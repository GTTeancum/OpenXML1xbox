#pragma once
#ifdef __cplusplus
extern "C" {
#endif
void xml1_extend_main_menu(char *xml, unsigned size);
int xml1_install_pc_menu(const char *root, char *error, unsigned error_size);
void xml1_pc_menu_command(const char *command);
int xml1_pc_native_token(const char *token);
void xml1_pc_native_item(unsigned item,const char *gamevar);
int xml1_pc_native_value(unsigned item,char *buffer,unsigned size);
void xml1_pc_native_closed(unsigned owner);
void xml1_pc_native_owner(unsigned item,unsigned owner);
void xml1_pc_native_bounds(unsigned item,int x,int top,int width,int height);
#ifdef __cplusplus
}
#endif
