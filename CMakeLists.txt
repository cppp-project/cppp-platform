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
