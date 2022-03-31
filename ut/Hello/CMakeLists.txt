set(
    HELLO_TEST_SOURCES
    helloTests.cpp
)

add_library(hello_test_lib ${HELLO_TEST_SOURCES})
target_link_libraries(hello_test_lib hello_lib )