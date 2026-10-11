# Native fixture generation depends on the actual generated tree, including
# functions moved into subsystem directories. No chunk-number assumptions.
file(GLOB_RECURSE XML1_GENERATED_INPUTS CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/gen/*.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/recomp/gen/*.h")
list(APPEND XML1_GENERATED_INPUTS
    "${CMAKE_CURRENT_SOURCE_DIR}/scripts/recomp_source.py"
    "${CMAKE_CURRENT_SOURCE_DIR}/config/symbols/xml1.json")
