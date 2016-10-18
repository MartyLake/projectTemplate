cmake_minimum_required (VERSION 3.6.1)
project (projectTemplateProjectName)


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

include_directories("${PROJECT_BINARY_DIR}")

set_property(TARGET mainExecutable PROPERTY CXX_STANDARD 11)
