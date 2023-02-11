cmake_minimum_required(VERSION 3.10)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
add_compile_options("-g")
enable_testing()

set(CMAKE_VERBOSE_MAKEFILE on)

file(GLOB HelloWorldSrc "*.cpp")

add_executable(HelloWorld ${HelloWorldSrc})

if(EXISTS runtest.cmake)
    include(runtest.cmake)
endif()
