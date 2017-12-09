cmake_minimum_required(VERSION 3.2)
project(greeter_tests LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
configure_file(version.h.in version.h)

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

add_executable(${PROJECT_NAME} tests.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} greeter ${Boost_LIBRARIES})
target_compile_definitions(${PROJECT_NAME} PRIVATE BOOST_TEST_DYN_LINK)
target_compile_options(${PROJECT_NAME} PRIVATE -Wextra -Wshadow -Wold-style-cast -Wpedantic)

add_test(${PROJECT_NAME} ${PROJECT_NAME})
