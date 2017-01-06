cmake_minimum_required(VERSION 3.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "exe/")

file(GLOB SOURCES_1 1/*)
file(GLOB SOURCES_2 2/*)
file(GLOB SOURCES_3 3/*)
file(GLOB SOURCES_4 4/*)
file(GLOB SOURCES_5 5/*)
file(GLOB SOURCES_6 6/*)
file(GLOB SOURCES_7 7/*)
file(GLOB SOURCES_8 8/*)
file(GLOB SOURCES_9 9/*)

add_executable(1 ${SOURCES_1})
add_executable(2 ${SOURCES_2})
add_executable(3 ${SOURCES_3})
add_executable(4 ${SOURCES_4})
add_executable(5 ${SOURCES_5})
add_executable(6 ${SOURCES_6})
add_executable(7 ${SOURCES_7})
add_executable(8 ${SOURCES_8})
add_executable(9 ${SOURCES_9})

