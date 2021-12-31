project(logic)

set(HEADER_FILES
        Random.h
        Stopwatch.h
        )

set(SOURCE_FILES
        Random.cpp
        Stopwatch.cpp
        )

add_library(logic_lib STATIC ${HEADER_FILES} ${SOURCE_FILES})