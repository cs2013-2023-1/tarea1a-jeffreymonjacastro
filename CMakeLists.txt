cmake_minimum_required(VERSION 3.24)
project(tarea1a_jeffreymonjacastro)

set(CMAKE_CXX_STANDARD 14)

include_directories(tarea)

add_executable(tests
        tarea/foo.cpp
        tarea/foo.h
        tarea/main.cpp)
