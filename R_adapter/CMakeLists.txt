cmake_minimum_required(VERSION 3.14.1)
project(KML_VSL_WRAPPER C)

# --------------------------------------------------------------------
# config build option
# --------------------------------------------------------------------
# Store in CPU architecture var the current build architecture
execute_process(COMMAND uname -m OUTPUT_VARIABLE ARCH OUTPUT_STRIP_TRAILING_WHITESPACE)

# ---------------------------------------------------------------------
# config the output path of the library and the installation:
# ---------------------------------------------------------------------
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin" CACHE PATH "Output directory for application")
set(INCLUDE_OUTPUT_PATH    "${CMAKE_BINARY_DIR}/include")

if(${CMAKE_INSTALL_PREFIX} STREQUAL "/usr/local")
    set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/build/install)
endif()

message(STATUS "The default output path of include file:     ${INCLUDE_OUTPUT_PATH}")
message(STATUS "The default output path of build bin files:  ${EXECUTABLE_OUTPUT_PATH}")

# --------------------------------------------------------------------
# cmake options
# --------------------------------------------------------------------
message(STATUS "CPU Architecture: ${CMAKE_HOST_SYSTEM_PROCESSOR}")

include(config.cmake.in)

add_subdirectory(src)

