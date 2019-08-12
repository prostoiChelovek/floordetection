cmake_minimum_required(VERSION 2.8.3)
project(floordetection)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wfatal-errors -O4 -march=native")
add_definitions(-std=c++11)

find_package(OpenCV 4 REQUIRED)

## System dependencies are found with CMake's conventions
find_package(Boost REQUIRED COMPONENTS system)

include_directories(include ${CMAKE_SOURCE_DIRECTORY}/src/lib)

## Declare a cpp library
file(GLOB LIB_SOURCES src/lib/*.cpp src/lib/*.hpp)
add_library(floordetection ${LIB_SOURCES})

target_link_libraries(floordetection ${OpenCV_LIBRARIES})

add_executable(run src/main.cpp)
target_link_libraries(run floordetection)
add_dependencies(run floordetection)