cmake_minimum_required(VERSION 3.20)
project(OpenXML1xbox LANGUAGES C)

if(NOT WIN32 OR NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(FATAL_ERROR "The initial XboxRecomp baseline requires Windows x64.")
endif()

# Toolchain validation only. No retail game code has been supplied yet.
# Upstream xbox_d3d8 currently uses D3D11: this is NOT the final DX8 backend.
add_subdirectory(external/xboxrecomp)
message(STATUS "Toolkit baseline only: XML1 executable and native Windows D3D8 backend pending")
