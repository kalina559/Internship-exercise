cmake_minimum_required(VERSION 2.8)

project(zadanie_praktyki)
add_executable(main "main.cpp")
include_directories(sources)
include_directories(headers)

FILE(GLOB_RECURSE LibFiles "headers/*.h")
add_custom_target(headers SOURCES ${LibFiles})

FILE(GLOB_RECURSE LibFiles "sources/*.cpp")
add_custom_target(sources SOURCES ${LibFiles})
