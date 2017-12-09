cmake_minimum_required(VERSION 3.2)
project(greeter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

configure_file(greeter.h.in greeter.h)

add_library(${PROJECT_NAME} greeter.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_BINARY_DIR})
target_compile_options(${PROJECT_NAME} PRIVATE -Wextra -Wshadow -Wold-style-cast -Wpedantic)

add_subdirectory(tests)
