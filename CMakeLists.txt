# CMakeLists for libplatform
cmake_minimum_required(VERSION 3.0)

# Project
project(libplatform)

# Source path
set(LP_SOURCE ${CMAKE_SOURCE_DIR})
set(LP_SRCDIR ${LP_SOURCE}/src)
set(LP_FILE_TITLE ${LP_SRCDIR}/title.h)
set(LP_FILE_END ${LP_SRCDIR}/end.h)
set(LP_FILES ${LP_FILE_TITLE} ${LP_SRCDIR}/lparchs.h ${LP_SRCDIR}/lpcomps.h ${LP_SRCDIR}/lpplat.h ${LP_SRCDIR}/lpstds.h ${LP_FILE_END})

# Build path
set(LP_BUILD_OUTPUT ${CMAKE_BINARY_DIR})
set(LP_OUT_INCLUDE_DIR ${LP_BUILD_OUTPUT}/include)
set(LP_OUT_RUNTIME_DIR ${LP_BUILD_OUTPUT}/bin)
set(LP_OUT_LIBRARY_DIR ${LP_BUILD_OUTPUT}/lib)

# Make include
file(REMOVE ${LP_OUT_INCLUDE_DIR}/platform_predef.h)
foreach(FILE ${LP_FILES})
    message("Adding ${FILE}...")
    file(READ ${FILE} _DATA )
    write_file(${LP_OUT_INCLUDE_DIR}/platform_predef.h ${_DATA} APPEND)
endforeach()
