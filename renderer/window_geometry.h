#pragma once
#include <algorithm>
#include <cstdint>

struct Xml1WindowSize { long width, height; };
// Decorations consume work-area space; the render resolution is unchanged.
inline Xml1WindowSize xml1_fit_window(long width,long height,long work_width,long work_height,
                                      long border_width,long border_height,bool enlarge=false) {
    const long available_width=std::max(1L,work_width-border_width);
    const long available_height=std::max(1L,work_height-border_height);
    if(width<=0 || height<=0)return {1,1};
    long w=available_width;
    long h=static_cast<long>(int64_t(w)*height/width);
    if(h>available_height) {h=available_height;w=static_cast<long>(int64_t(h)*width/height);}
    if(!enlarge && w>=width && h>=height){w=width;h=height;}
    return {std::max(1L,w)+border_width,std::max(1L,h)+border_height};
}
