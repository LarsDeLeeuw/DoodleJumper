cmake_minimum_required(VERSION 3.16)
project(DoodleJumper)

set(CMAKE_CXX_STANDARD 14)
# find libraries: additional modules
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

# find SFML library:
find_package(SFML COMPONENTS system graphics window REQUIRED)

add_executable(DoodleJumper main.cpp)

target_link_libraries(DoodleJumper
        logic_lib
        ${SFML_LIBRARIES}
        )

add_subdirectory(Logic)
add_subdirectory(Google_tests)