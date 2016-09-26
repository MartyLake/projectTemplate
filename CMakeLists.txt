cmake_minimum_required (VERSION 3.6.1)
project (projectTemplateProjectName)
add_executable(mainExecutable
	src/main.cpp
	./Tasklist.h
)
set_property(TARGET mainExecutable PROPERTY CXX_STANDARD 11)
