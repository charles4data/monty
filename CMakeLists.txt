cmake_minimum_required(VERSION 3.27)
project(monty C)

set(CMAKE_C_STANDARD 90)

include_directories(.)

add_executable(monty
        monty.h)
