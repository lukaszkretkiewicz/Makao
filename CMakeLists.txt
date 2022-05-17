cmake_minimum_required(VERSION 3.14)
project(Makao VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -pedantic -Werror -DNDEBUG)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -ftest-coverage -fprofile-arcs --coverage ")
include(cmake/GTest.cmake)
include_directories (
    ${GTEST_INCLUDE_DIRS}
    ${GMOCK_INCLUDE_DIRS}
    )   
find_package(SFML 2.5.1 COMPONENTS system window graphics network audio REQUIRED)
include(cmake/CodeCoverage.cmake)

add_subdirectory(src)
add_subdirectory(ut)
enable_testing()

SET(CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
SET(CMAKE_C_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")

SETUP_TARGET_FOR_COVERAGE(
				${PROJECT_NAME}_coverage  # Name for custom target.
				${PROJECT_NAME}_test         # Name of the test driver executable that runs the tests.
									# NOTE! This should always have a ZERO as exit code
									# otherwise the coverage generation will not complete.
				coverage            # Name of output directory.
				)