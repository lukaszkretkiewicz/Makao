cmake_minimum_required(VERSION 3.14)
project(Makao VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -pedantic -Werror -DNDEBUG)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
include(cmake/GTest.cmake)
include_directories (
    ${GTEST_INCLUDE_DIRS}
    ${GMOCK_INCLUDE_DIRS}
    )
add_subdirectory(src)
add_subdirectory(ut)
enable_testing()