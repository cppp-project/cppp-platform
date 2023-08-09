# Copyright (C) 2023 The C++ Plus Project.
# This file is part of the cppp-platform library.
#
# The cppp-platform library is free software; you can redistribute it
# and/or modify it under the terms of the The Unlicense as published
# by the unlicense.org
#
# The cppp-platform library is distributed in the hope that it will be
# useful, but WITHOUT ANY WARRANTY; without even the implied warranty
# of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the The
# Unlicense for more details.
#
# You should have received a copy of the The Unlicense along with the
# cppp-platform library; see the file COPYING.
# If not, see <http://unlicense.org/>.

cmake_minimum_required(VERSION 3.12)
project(cppp-platform VERSION 1.3.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/build-aux")
    set(BUILD_AUX "${CMAKE_CURRENT_SOURCE_DIR}/build-aux")
elseif(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/../build-aux")
    set(BUILD_AUX "${CMAKE_CURRENT_SOURCE_DIR}/../build-aux")
else()
    message(FATAL_ERROR "CMake build-aux directory is not exists, try to execute 'setup.cmd' or './setup.sh' to get it.")
endif()
set(AUX_DIR "${BUILD_AUX}/cmake")

message(STATUS "Using '${BUILD_AUX}' for C++ Plus build-aux directory.")
add_subdirectory("${BUILD_AUX}")

include("${AUX_DIR}/cppp.cmake")

# Read source files
file(READ "${srcdir}/src/architectures.h" ARCHITECTURES)
file(READ "${srcdir}/src/compilers.h" COMPILERS)
file(READ "${srcdir}/src/languagestandards.h" LANGUAGESTANDARDS)
file(READ "${srcdir}/src/platforms.h" PLATFORMS)

# Genetate header
configure_file("${srcdir}/include/cppp/cppp-platform.h.in" "${output_includedir}/cppp/cppp-platform.h")

# Generate header file for install
cppp_nls_autotranslate("${output_includedir}/cppp/cppp-platform.h" "${srcdir}/lang")

# Install
# Includes
# PERMISSIONS 0644
install(FILES "${output_includedir}/cppp/cppp-platform.h"
        DESTINATION "${install_includedir}"
        RENAME "cppp/cppp-platform.h"
        PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ )
