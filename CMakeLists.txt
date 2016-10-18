cmake_minimum_required (VERSION 3.6.1)
project (projectTemplateProjectName)

#============================================
set (VERSION_MAJOR 0)
set (VERSION_MINOR 1)
set (PROJECT_SOURCE_DIR src)

configure_file (
  "${PROJECT_SOURCE_DIR}/versionNumber.h.in"
  "${PROJECT_BINARY_DIR}/versionNumber.h"
)

add_executable(mainExecutable
	${PROJECT_SOURCE_DIR}/main.cpp
	${PROJECT_BINARY_DIR}/versionNumber.h

	# These files aren't compiled, they're just here for convenience
	./Tasklist.h
	./CMakeLists.txt
	${PROJECT_SOURCE_DIR}/versionNumber.h.in
)
set_property(TARGET mainExecutable PROPERTY CXX_STANDARD 11)

include_directories("${PROJECT_BINARY_DIR}")

#===========================================
# Google Tests external project
# From http://www.kaizou.org/2014/11/gtest-cmake.html

# We need thread support
find_package(Threads REQUIRED)

# Enable ExternalProject CMake module
include(ExternalProject)

# Download and install GoogleTest
ExternalProject_Add(
    gtest
    URL https://github.com/google/googletest/archive/master.zip
    PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gtest
    # Disable install step
    INSTALL_COMMAND ""
)

# Get GTest source and binary directories from CMake project
ExternalProject_Get_Property(gtest source_dir binary_dir)

# Create a libgtest target to be used as a dependency by test programs
add_library(libgtest IMPORTED STATIC GLOBAL)
add_dependencies(libgtest gtest)

# Set libgtest properties
set_target_properties(libgtest PROPERTIES
    "IMPORTED_LOCATION" "${binary_dir}/googlemock/gtest/libgtest.a"
    "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
)

# Create a libgmock target to be used as a dependency by test programs
add_library(libgmock IMPORTED STATIC GLOBAL)
add_dependencies(libgmock gtest)

# Set libgmock properties
set_target_properties(libgmock PROPERTIES
    "IMPORTED_LOCATION" "${binary_dir}/googlemock/libgmock.a"
    "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
)

# I couldn't make it work with INTERFACE_INCLUDE_DIRECTORIES
include_directories("${source_dir}/googletest/include"
                    "${source_dir}/googlemock/include")
