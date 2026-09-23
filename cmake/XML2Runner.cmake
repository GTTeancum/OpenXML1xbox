# Local recovered inputs are never copied into source control or player staging.
if(NOT TARGET raven-xml2-query-instrumented)
    message(FATAL_ERROR "Set RAVEN_XML2_RECOVERY_SOURCE to the recovered XML2 project")
endif()
set(_xml2_src "${RAVEN_XML2_RECOVERY_SOURCE}/src")
add_executable(xml2-replay-test tests/xml2_replay_test.c)
target_include_directories(xml2-replay-test PRIVATE src external/xboxrecomp/include external/xboxrecomp/src external/xboxrecomp/src/input)
target_compile_definitions(xml2-replay-test PRIVATE _CRT_SECURE_NO_WARNINGS)
add_executable(xml2-transport-test tests/xml2_transport_test.c)
target_include_directories(xml2-transport-test PRIVATE src "${CMAKE_CURRENT_BINARY_DIR}")
file(GLOB _xml2_generated CONFIGURE_DEPENDS "${_xml2_src}/recomp/gen/*.c")
list(REMOVE_ITEM _xml2_generated "${_xml2_src}/recomp/gen/recomp_0007.c")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/scripts/prepare-xml2-combat.py"
    "${_xml2_src}/recomp/gen/recomp_0007.c")
execute_process(COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/.venv/Scripts/python.exe"
    "${CMAKE_CURRENT_SOURCE_DIR}/scripts/prepare-xml2-combat.py"
    "${_xml2_src}/recomp/gen/recomp_0007.c"
    "${CMAKE_CURRENT_BINARY_DIR}/xml2-combat-corrected.c"
    COMMAND_ERROR_IS_FATAL ANY)
list(REMOVE_ITEM _xml2_generated "${_xml2_src}/recomp/gen/recomp_0029.c")
list(REMOVE_ITEM _xml2_generated "${_xml2_src}/recomp/gen/recomp_0104.c")
list(REMOVE_ITEM _xml2_generated "${_xml2_src}/recomp/gen/recomp_0064.c")
file(READ "${_xml2_src}/recomp/gen/recomp_0064.c" _xml2_skinning)
set(_xml2_skin_loop "if (_flags /* loop: loop */) goto loc_002B5A1D;")
string(FIND "${_xml2_skinning}" "${_xml2_skin_loop}" _xml2_skin_loop_at)
if(_xml2_skin_loop_at EQUAL -1)
    message(FATAL_ERROR "Recovered XML2 skinning LOOP adaptation point changed")
endif()
# Original 2B5A5B E2 C0 decrements ECX, branches while nonzero, and
# preserves arithmetic flags. The recovered fallback never took this edge,
# dropping all but the first bone influence. Original-x86 vectors cover it.
string(REPLACE "${_xml2_skin_loop}"
    "/* Original 002B5A5B LOOP: count every bone influence; flags unchanged. */\n    if (--ecx != 0) goto loc_002B5A1D;"
    _xml2_skinning "${_xml2_skinning}")
file(GENERATE OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/xml2-skinning-corrected.c" CONTENT "${_xml2_skinning}")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${_xml2_src}/recomp/gen/recomp_0064.c")
# This recovered include assumes an obsolete sibling checkout. Normalize only
# that include in the build copy; the renderer implementation stays unchanged.
file(READ "${_xml2_src}/guest_graphics.c" _xml2_graphics)
string(REPLACE "../../xboxrecomp/src/d3d/d3d8_swizzle.h" "d3d8_swizzle.h" _xml2_graphics "${_xml2_graphics}")
string(REPLACE "GetFullPathNameA(\"build-dx8/xml1-dx8-worker.exe\","
    "GetFullPathNameA(getenv(\"XML2_DX8_WORKER\") ? getenv(\"XML2_DX8_WORKER\") : \"build-dx8/xml1-dx8-worker.exe\","
    _xml2_graphics "${_xml2_graphics}")
# Preserve diagnostic stdout/stderr in both renderer workers.
string(REPLACE "start.cb=sizeof(start);"
    "start.cb=sizeof(start); start.dwFlags |= STARTF_USESTDHANDLES; start.hStdOutput=GetStdHandle(STD_OUTPUT_HANDLE); start.hStdError=GetStdHandle(STD_ERROR_HANDLE); start.hStdInput=GetStdHandle(STD_INPUT_HANDLE); SetHandleInformation(start.hStdOutput,HANDLE_FLAG_INHERIT,HANDLE_FLAG_INHERIT); SetHandleInformation(start.hStdError,HANDLE_FLAG_INHERIT,HANDLE_FLAG_INHERIT);"
    _xml2_graphics "${_xml2_graphics}")
string(REPLACE "command,NULL,NULL,FALSE,CREATE_NO_WINDOW" "command,NULL,NULL,TRUE,CREATE_NO_WINDOW" _xml2_graphics "${_xml2_graphics}")
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/xml2_vertex_trace.inc" _xml2_vertex_trace)
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/xml2_vertex_trace.inc")
set(_xml2_vertex_anchor "const int track_menu_vertices=xml1_pc_native_tracking();")
string(FIND "${_xml2_graphics}" "${_xml2_vertex_anchor}" _xml2_vertex_position)
if(_xml2_vertex_position EQUAL -1)
    message(FATAL_ERROR "Recovered XML2 vertex capture insertion point changed")
endif()
string(REPLACE "${_xml2_vertex_anchor}" "${_xml2_vertex_trace}\n${_xml2_vertex_anchor}" _xml2_graphics "${_xml2_graphics}")
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/xml2-guest-graphics-base.c" "${_xml2_graphics}")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/scripts/prepare-xml2-shaders.py"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/guest_graphics_live.c"
    "${_xml2_src}/recomp/gen/recomp_0104.c")
execute_process(COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/.venv/Scripts/python.exe"
    "${CMAKE_CURRENT_SOURCE_DIR}/scripts/prepare-xml2-shaders.py"
    "${CMAKE_CURRENT_BINARY_DIR}/xml2-guest-graphics-base.c"
    "${CMAKE_CURRENT_BINARY_DIR}/xml2-guest-graphics.c"
    "${_xml2_src}/recomp/gen/recomp_0104.c"
    "${CMAKE_CURRENT_BINARY_DIR}/xml2-shader-instrumented.c"
    COMMAND_ERROR_IS_FATAL ANY)
file(READ "${_xml2_src}/main.c" _xml2_main)
set(RAVEN_XML2_SKIN_VECTORS "" CACHE PATH "Directory containing original-x86 skin-vectors.h for diagnostic checks")
if(RAVEN_XML2_SKIN_VECTORS)
    if(NOT EXISTS "${RAVEN_XML2_SKIN_VECTORS}/skin-vectors.h")
        message(FATAL_ERROR "Missing original-x86 skinning oracle vectors")
    endif()
    string(REPLACE "int xml2_crt_selftest(void);" "int xml2_crt_selftest(void); int xml2_skinning_selftest(void);" _xml2_main "${_xml2_main}")
    string(REPLACE "int result=test_input?xml2_input_selftest():xml2_crt_selftest();"
        "int result=test_input?xml2_input_selftest():xml2_crt_selftest(); if(!test_input && !result)result=xml2_skinning_selftest();" _xml2_main "${_xml2_main}")
endif()
string(REPLACE "setvbuf(stdout, NULL, _IONBF, 0);"
    "if (!CreateDirectoryA(\"build\", NULL) && GetLastError()!=ERROR_ALREADY_EXISTS) return 4; setvbuf(stdout, NULL, _IONBF, 0);"
    _xml2_main "${_xml2_main}")
string(REPLACE "#define YOUR_GAME_XBE_PATH      \"../../default.xbe\""
    "#define YOUR_GAME_XBE_PATH (getenv(\"XML2_XBE_PATH\") ? getenv(\"XML2_XBE_PATH\") : \"../../default.xbe\")" _xml2_main "${_xml2_main}")
string(REPLACE "#define YOUR_GAME_DIR           \"../..\""
    "#define YOUR_GAME_DIR (getenv(\"XML2_GAME_ROOT\") ? getenv(\"XML2_GAME_ROOT\") : \"../..\")" _xml2_main "${_xml2_main}")
string(REPLACE "GetFullPathNameA(\"../runtime/saves\","
    "GetFullPathNameA(getenv(\"XML2_SAVE_ROOT\") ? getenv(\"XML2_SAVE_ROOT\") : \"../runtime/saves\","
    _xml2_main "${_xml2_main}")
file(GENERATE OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/xml2-main.c" CONTENT "${_xml2_main}")
file(READ "${_xml2_src}/guest_input.c" _xml2_input)
string(REPLACE "#include <string.h>" "#include <string.h>\n#include \"xml2_test_pad.h\"" _xml2_input "${_xml2_input}")
string(FIND "${_xml2_input}" "    char line[128],action[24];unsigned id;" _input_start)
string(FIND "${_xml2_input}" "    test_state.Gamepad=pad;" _input_end)
if(_input_start LESS 0 OR _input_end LESS _input_start)
    message(FATAL_ERROR "Recovered XML2 test pad adaptation points changed")
endif()
string(SUBSTRING "${_xml2_input}" 0 ${_input_start} _input_prefix)
string(SUBSTRING "${_xml2_input}" ${_input_end} -1 _input_suffix)
set(_xml2_input "${_input_prefix}    char line[128];unsigned id,duration;\n    int ok=fgets(line,sizeof(line),file)!=NULL;fclose(file);\n    if(!ok)return;\n    XBOX_GAMEPAD pad;int parsed=xml2_test_pad_command(line,&id,&pad,&duration);\n    if(parsed==0)return;\n    if(parsed<0 || frame>0xffffffffu-duration){fprintf(stderr,\"[FATAL INPUT] invalid bounded pad command\\n\");_exit(4);}\n    if(id<=command_id)return;\n${_input_suffix}")
string(REPLACE "release_frame=frame+4;" "release_frame=frame+duration;" _xml2_input "${_xml2_input}")
string(REPLACE "id,action,frame" "id,line,frame" _xml2_input "${_xml2_input}")
string(REPLACE "#include \"xml2_test_pad.h\"" "#include \"xml2_test_replay.h\"" _xml2_input "${_xml2_input}")
set(_replay_anchor "    FILE *file=fopen(\"logs/input-command.txt\",\"rb\");if(!file)return;\n    char line[128];unsigned id,duration;\n    int ok=fgets(line,sizeof(line),file)!=NULL;fclose(file);\n    if(!ok)return;")
string(FIND "${_xml2_input}" "${_replay_anchor}" _replay_at)
if(_replay_at LESS 0)
    message(FATAL_ERROR "XML2 replay insertion point changed")
endif()
string(REPLACE "${_replay_anchor}"
    "    char line[128];unsigned id,duration;\n    int replay=xml2_test_replay(frame,line,sizeof(line));\n    if(!replay)return;\n    if(replay<0) {\n        FILE *file=fopen(\"logs/input-command.txt\",\"rb\");if(!file)return;\n        int ok=fgets(line,sizeof(line),file)!=NULL;fclose(file);\n        if(!ok)return;\n    }" _xml2_input "${_xml2_input}")
file(GENERATE OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/xml2-guest-input.c" CONTENT "${_xml2_input}")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${_xml2_src}/guest_input.c")
file(READ "${_xml2_src}/observe.c" _xml2_observe)
set(_xml2_observe_anchor "void xml2_observe(uint32_t va) { xml1_graphics_live_observe(va); }")
string(FIND "${_xml2_observe}" "${_xml2_observe_anchor}" _xml2_observe_at)
if(_xml2_observe_at EQUAL -1)
    message(FATAL_ERROR "Recovered XML2 observer adaptation point changed")
endif()
string(REPLACE "${_xml2_observe_anchor}"
    "void raven_xml2_query_observe(uint32_t va);\nvoid xml2_observe(uint32_t va) { raven_xml2_query_observe(va); xml1_graphics_live_observe(va); }"
    _xml2_observe "${_xml2_observe}")
file(GENERATE OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/xml2-observe.c" CONTENT "${_xml2_observe}")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${_xml2_src}/observe.c")
add_executable(xml2-shared-probe
    "${CMAKE_CURRENT_BINARY_DIR}/xml2-main.c" "${_xml2_src}/recomp_manual.c" "${_xml2_src}/recomp_extra.c"
    "${_xml2_src}/guest_crt.c" "${_xml2_src}/guest_cpu.c" "${CMAKE_CURRENT_BINARY_DIR}/xml2-guest-input.c"
    "${_xml2_src}/crt_selftest.c" "${CMAKE_CURRENT_BINARY_DIR}/xml2-observe.c"
    "${CMAKE_CURRENT_BINARY_DIR}/xml2-guest-graphics.c"
    "${CMAKE_CURRENT_BINARY_DIR}/xml2-shader-instrumented.c"
    "${CMAKE_CURRENT_BINARY_DIR}/xml2-skinning-corrected.c" ${_xml2_generated}
    "${CMAKE_CURRENT_BINARY_DIR}/xml2-combat-corrected.c"
    $<TARGET_OBJECTS:raven-xml2-query-instrumented>)
target_include_directories(xml2-shared-probe PRIVATE "${_xml2_src}" "${_xml2_src}/recomp"
    "${_xml2_src}/recomp/gen" external/xboxrecomp/include external/xboxrecomp/src/d3d)
target_link_libraries(xml2-shared-probe PRIVATE raven-actor-talent xml1-nv2a-vertex xboxrecomp d3d11 dxgi dxguid xinput winmm dbghelp)
target_compile_definitions(xml2-shared-probe PRIVATE _CRT_SECURE_NO_WARNINGS WIN32_LEAN_AND_MEAN NOMINMAX)
if(RAVEN_XML2_SKIN_VECTORS)
    target_sources(xml2-shared-probe PRIVATE tests/xml2_skinning_test.c)
    target_include_directories(xml2-shared-probe PRIVATE "${RAVEN_XML2_SKIN_VECTORS}")
endif()
if(MSVC)
    target_compile_options(xml2-shared-probe PRIVATE /bigobj /Od)
endif()
# The recovered live renderer uses its DX8 worker path. Linking upstream D3D11
# libraries is not acceptance of that backend as the game's renderer.
