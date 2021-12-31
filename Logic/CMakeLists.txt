project(logic)

set(HEADER_FILES
        Random.h
        )

set(SOURCE_FILES
        Random.cpp
        )

add_library(logic_lib STATIC ${HEADER_FILES} ${SOURCE_FILES})