cmake_minimum_required(VERSION 3.27)
project(monty C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(monty
        monty.h
        op_push.c
        op_create.c
        op_pop.c
        op_pall.c
        op_swap.c
        op_pint.c
        op_mod.c
        op_mul.c
        op_add.c
        op_sub.c)
