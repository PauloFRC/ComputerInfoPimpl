cmake_minimum_required(VERSION 3.20)
project(PimplLog)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(private)
add_subdirectory(public)

add_executable(PimplLog main.cpp)

target_link_libraries(PimplLog PRIVATE log_impl)
