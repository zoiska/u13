cmake_minimum_required(VERSION 3.26)
project(u13)

set(CMAKE_CXX_STANDARD 17)

add_executable(u13 main.cpp
        Hoersaal/Hoersaal.cpp
        Hoersaal/Hoersaal.h
        Punkt/Punkt.cpp
        Punkt/Punkt.h
        Bruch/Bruch.cpp
        Bruch/Bruch.h
        VeryLong/VeryLong.cpp
        VeryLong/VeryLong.h)
