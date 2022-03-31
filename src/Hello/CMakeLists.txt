set(
    HELLO_HEADERS
    hello.hpp
)

set(
    HELLO_SOURCES
    hello.cpp
)

add_library(hello_lib ${HELLO_HEADERS} ${HELLO_SOURCES})