#pragma once
#ifdef __cplusplus
extern "C" {
#endif
void xml1_extend_main_menu(char *xml, unsigned size);
int xml1_install_pc_menu(const char *root, char *error, unsigned error_size);
void xml1_pc_menu_command(const char *command);
int xml1_pc_native_token(const char *token);
void xml1_pc_native_item(unsigned item,const char *gamevar);
void xml1_pc_native_command(unsigned item,const char *command);
void xml1_pc_native_frame(unsigned frame);
int xml1_pc_native_activate(unsigned item);
void xml1_pc_native_adjustable(unsigned item,int enabled);
int xml1_pc_native_adjust(unsigned item);
void xml1_pc_native_slider_bounds(unsigned item,float left,float top,float right,float bottom,unsigned frame);
int xml1_pc_native_slider_value(unsigned item,float *value);
int xml1_pc_native_hover(unsigned item);
void xml1_pc_native_focus_trace(unsigned item,unsigned caller,unsigned active);
int xml1_pc_native_profile_indicator(unsigned item,unsigned focused);
int xml1_pc_native_prompt_pending(unsigned item);
void xml1_pc_native_prompt_original(unsigned item,const char *text);
void xml1_pc_native_text_handle(unsigned item,unsigned handle);
int xml1_pc_native_value(unsigned item,char *buffer,unsigned size);
void xml1_pc_native_closed(unsigned owner);
void xml1_pc_native_owner(unsigned item,unsigned owner);
void xml1_pc_native_menu(unsigned owner);
void xml1_pc_native_menu_type(unsigned vtable);
void xml1_pc_native_flags(unsigned item,unsigned flags);
void xml1_pc_native_bounds(unsigned item,int x,int top,int width,int height);
void xml1_graphics_menu_projection(unsigned item);
void xml1_pc_native_projection(unsigned item,const float *world,const float *view,const float *projection);
int xml1_pc_native_interested(unsigned item);
void xml1_graphics_menu_begin(unsigned item);
void xml1_graphics_menu_end(void);
void xml1_graphics_menu_command(unsigned command);
void xml1_graphics_menu_replay(unsigned command);
void xml1_graphics_menu_quad(float left,float top,float right,float bottom);
void xml1_graphics_menu_writer(unsigned writer,unsigned target,const unsigned *fields);
void xml1_graphics_menu_vertex_owner(unsigned address);
void xml1_pc_native_vertex_owner(unsigned address,unsigned item);
unsigned xml1_pc_native_vertex_item(unsigned address);
int xml1_pc_native_tracking(void);
/* Filter only the camera's final additive shake vector, after native timing. */
int xml1_pc_filter_camera_shake(float *xyz);
void xml1_pc_native_render_vertex(unsigned item,float x,float y,unsigned frame);
void xml1_pc_native_vertex_copy(unsigned destination,unsigned source,unsigned bytes);
void xml1_pc_native_screen_bounds(unsigned item,float left,float top,float right,float bottom);
#ifdef __cplusplus
}
#endif
