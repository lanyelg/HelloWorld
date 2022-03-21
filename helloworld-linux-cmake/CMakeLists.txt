cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
add_compile_options("-g")
enable_testing()

set(CMAKE_VERBOSE_MAKEFILE on)

add_executable(HelloWorld HelloWorld.cpp main.cpp)

if(EXISTS runtest.cmake)
    include(runtest.cmake)
endif()
