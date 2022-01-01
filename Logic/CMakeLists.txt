project(logic)

set(HEADER_FILES
        Random.h
        Stopwatch.h
        Subject.h
        Observer.h
        Entity.h
        )

set(SOURCE_FILES
        Random.cpp
        Stopwatch.cpp
        Subject.cpp
        Observer.cpp
        Entity.cpp)

add_library(logic_lib STATIC ${HEADER_FILES} ${SOURCE_FILES})