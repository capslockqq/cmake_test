#####################################################################
# simple AVR library
#####################################################################
file(GLOB helloworld_SRC
    "*.hh"
    "*.h"
    "*.cc"
    "*.cpp")
if(BUILD_TYPE STREQUAL "TARGET")
    add_avr_library(
    mycpplib
    ${helloworld_SRC}
    )
else()
    add_library (
        pc-mycpplib
        ${helloworld_SRC}
    )
endif()
