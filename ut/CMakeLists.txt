add_subdirectory(Deck)

add_executable(${PROJECT_NAME}_test main.cpp Deck/BasicDeckTests.cpp)

target_link_libraries(${PROJECT_NAME}_test deck_test_lib gtest gtest_main gmock)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_test)

enable_testing()
add_test(NAME ${PROJECT_NAME}_tests COMMAND ${PROJECT_NAME}_test)