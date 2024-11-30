cmake_minimum_required(VERSION 3.10)
project(cppp-platform VERSION 1.3.0)

option(BUILD_EXAMPLE "Build example" OFF)

# Read source files
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/architectures.h" ARCHITECTURES)
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/compilers.h" COMPILERS)
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/languagestandards.h" LANGUAGESTANDARDS)
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/platforms.h" PLATFORMS)

# Genetate header
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/include/cppp/cppp-platform.h.in" "${CMAKE_BINARY_DIR}/include/cppp/cppp-platform.h")

# Build example
if(BUILD_EXAMPLE)
    add_executable(example "${CMAKE_CURRENT_SOURCE_DIR}/src/example.c")
    target_include_directories(example PRIVATE "${CMAKE_BINARY_DIR}/include")
endif()


# Install
# Includes
# PERMISSIONS 0644
install(FILES "${CMAKE_BINARY_DIR}/include/cppp/cppp-platform.h"
        DESTINATION "${CMAKE_INSTALL_PREFIX}/include"
        RENAME "cppp/cppp-platform.h"
        PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ )
