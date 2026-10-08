cmake_minimum_required(VERSION 4.1)
project(SLAM)

set(CMAKE_CXX_STANDARD 20)

add_executable(SLAM main.cpp
        Car.cpp
        Car.h
        Landmark.cpp
        Landmark.h)
