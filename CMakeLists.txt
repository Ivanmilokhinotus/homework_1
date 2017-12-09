cmake_minimum_required(VERSION 3.2)
project(homework_1 LANGUAGES CXX VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()
add_subdirectory(greeter)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} greeter)
target_compile_options(${PROJECT_NAME} PRIVATE -Wextra -Wshadow -Wold-style-cast -Wpedantic)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)

if (UNIX AND NOT APPLE)
    set(CPACK_GENERATOR DEB)
endif ()
set(CPACK_PACKAGE_CONTACT ivanmilokhin@yandex.com)

set(CPACK_PACKAGE_VERSION_MAJOR ${PACKAGE_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${PACKAGE_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${PACKAGE_VERSION_PATCH})

include(CPack)
