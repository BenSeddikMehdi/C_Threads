cmake_minimum_required(VERSION 3.15)
project(C_Threads C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Threads main.c twoThreads.h Safety_Speed.h)