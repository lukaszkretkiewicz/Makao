add_subdirectory(Hello)

add_executable(${PROJECT_NAME}_test main.cpp Hello/helloTests.cpp)

target_link_libraries(${PROJECT_NAME}_test hello_test_lib gtest gtest_main gmock)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_test)

enable_testing()
add_test(NAME ${PROJECT_NAME}_tests COMMAND ${PROJECT_NAME}_test)