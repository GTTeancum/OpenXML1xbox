cmake_minimum_required(VERSION 3.20)
project(OpenXML1xbox LANGUAGES C)

if(NOT WIN32 OR NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(FATAL_ERROR "The initial XboxRecomp baseline requires Windows x64.")
endif()

# The generated game uses this runtime for CPU/kernel diagnostics.
# Upstream xbox_d3d8 currently uses D3D11: this is NOT the final DX8 backend.
add_subdirectory(external/xboxrecomp)
add_executable(guest-vmem-test tests/guest_vmem_test.c external/xboxrecomp/src/kernel/guest_vmem.c)
target_include_directories(guest-vmem-test PRIVATE external/xboxrecomp/src/kernel external/xboxrecomp/src)
add_executable(guest-crt-test tests/guest_crt_test.c src/guest_crt.c)
target_include_directories(guest-crt-test PRIVATE external/xboxrecomp/src/kernel external/xboxrecomp/src)
add_executable(guest-input-test tests/guest_input_test.c src/guest_input.c)
target_include_directories(guest-input-test PRIVATE src external/xboxrecomp/src/input external/xboxrecomp/src/kernel external/xboxrecomp/src)
message(STATUS "XML1 CPU/kernel bring-up; game rendering and audio integration remain pending")

option(OPENXML1_BUILD_BOOT_PROBE "Build the XML1 CPU/kernel diagnostic (graphics integration pending)" OFF)
if(OPENXML1_BUILD_BOOT_PROBE)
    file(GLOB RECOMP_SOURCES CONFIGURE_DEPENDS "src/recomp/gen/*.c")
    if(NOT RECOMP_SOURCES)
        message(FATAL_ERROR "Generate the supplied XBE first using scripts/generate-code.ps1")
    endif()
    add_custom_command(OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/build/flags-fixture.inc"
        COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/.venv/Scripts/python.exe" "${CMAKE_CURRENT_SOURCE_DIR}/scripts/generate-flags-test.py"
        DEPENDS scripts/generate-flags-test.py external/xboxrecomp/tools/recomp/translator.py
                external/xboxrecomp/tools/recomp/test_flag_join.py)
    add_executable(guest-flags-test tests/guest_flags_test.c "${CMAKE_CURRENT_SOURCE_DIR}/build/flags-fixture.inc")
    target_include_directories(guest-flags-test PRIVATE src/recomp/gen build)
    add_executable(xml1-boot-probe src/main.c src/recomp_manual.c src/guest_crt.c src/guest_input.c ${RECOMP_SOURCES})
    target_include_directories(xml1-boot-probe PRIVATE src src/recomp/gen external/xboxrecomp/include)
    target_link_libraries(xml1-boot-probe PRIVATE xboxrecomp dbghelp)
    target_compile_definitions(xml1-boot-probe PRIVATE _CRT_SECURE_NO_WARNINGS WIN32_LEAN_AND_MEAN NOMINMAX)
    # Fast diagnostic iterations first; benchmark only a separately optimized build.
    target_compile_options(xml1-boot-probe PRIVATE /bigobj /Zi /MP4 /Od /Ob0 /FIdiagnostics.h)
    target_link_options(xml1-boot-probe PRIVATE /DEBUG /INCREMENTAL:NO /STACK:16777216)
endif()
