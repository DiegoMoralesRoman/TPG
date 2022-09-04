cmake_minimum_required(VERSION 3.16)

project(TermPG)

# Setup standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(tpg)

set(SOURCES main.cpp)

add_executable(TermPG ${SOURCES})
target_link_libraries(TermPG tpg)


