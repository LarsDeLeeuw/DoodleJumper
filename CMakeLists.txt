cmake_minimum_required(VERSION 3.21)
project(DoodleJumper)

set(CMAKE_CXX_STANDARD 14)

add_executable(DoodleJumper main.cpp Game.cpp Game.h Stopwatch.cpp Stopwatch.h Camera.cpp Camera.h Random.cpp Random.h World.cpp World.h BG_Tile.cpp BG_Tile.h Bonus.cpp Bonus.h)
