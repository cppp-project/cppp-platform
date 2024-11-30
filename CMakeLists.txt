# Copyright (C) 2024 The C++ Plus Project.
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

cmake_minimum_required(VERSION 3.10)
project(cppp-platform VERSION 1.3.0)

# Read source files
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/architectures.h" ARCHITECTURES)
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/compilers.h" COMPILERS)
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/languagestandards.h" LANGUAGESTANDARDS)
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/src/platforms.h" PLATFORMS)

# Genetate header
configure_file("${CMAKE_CURRENT_SOURCE_DIR}/include/cppp/cppp-platform.h.in" "${output_includedir}/cppp/cppp-platform.h")

# Install
# Includes
# PERMISSIONS 0644
install(FILES "${output_includedir}/cppp/cppp-platform.h"
        DESTINATION "${install_includedir}"
        RENAME "cppp/cppp-platform.h"
        PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ )
