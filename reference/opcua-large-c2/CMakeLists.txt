cmake_minimum_required(VERSION 3.16)
project(opcua-large-c2 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Locate open62541 (built externally; OPEN62541_DIR points at the
# source root containing build/bin/libopen62541.a + include/).
if(NOT DEFINED OPEN62541_DIR)
    message(FATAL_ERROR "OPEN62541_DIR must be set, e.g. -DOPEN62541_DIR=/tmp/open62541")
endif()

set(OPEN62541_BUILD_DIR ${OPEN62541_DIR}/build)
include_directories(
    ${OPEN62541_BUILD_DIR}/src_generated
    ${OPEN62541_BUILD_DIR}/deps
    ${OPEN62541_DIR}/include
    ${OPEN62541_DIR}/plugins/include
    ${OPEN62541_DIR}/arch
    ${OPEN62541_DIR}/deps
    ${CMAKE_CURRENT_SOURCE_DIR}/nodesets-generated
)

add_executable(opcua-large-c2
    src/main.c
    nodesets-generated/ns_di.c
    nodesets-generated/ns_packml.c
    nodesets-generated/ns_tmc.c
    nodesets-generated/ns_mcc11420.c
    nodesets-generated/ns_mcc11450.c
    nodesets-generated/ns_mcc11470.c
    nodesets-generated/ns_mcc11490.c
)

target_link_libraries(opcua-large-c2 PRIVATE
    ${OPEN62541_BUILD_DIR}/bin/libopen62541.a
    ssl crypto
)

# Compiler flags. The auto-generated nodeset files are HUGE (hundreds of
# MB combined) so we compile them at -O0 for build speed. They are pure
# initialisation code that runs once at startup; runtime perf is
# unaffected. The hand-written main.c can stay at default optimisation.
target_compile_options(opcua-large-c2 PRIVATE
    -O0
    -Wno-unused-variable
    -Wno-unused-but-set-variable
)
