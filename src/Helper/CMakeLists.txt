set(
    HEADERS
    Helper.hpp
)

set(
    MODULE_NAME helper_lib
)

add_library(${MODULE_NAME} ${HEADERS})
set_target_properties(${MODULE_NAME} PROPERTIES LINKER_LANGUAGE CXX)
