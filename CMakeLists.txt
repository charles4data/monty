cmake_minimum_required(VERSION 3.27)
project(monty C)

<<<<<<< HEAD
set(CMAKE_C_STANDARD 90)
=======
set(CMAKE_C_STANDARD 11)
>>>>>>> dcf267b04aee4575ceb78583a3e0390074116694

include_directories(.)

add_executable(monty
<<<<<<< HEAD
        monty.h)
=======
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
>>>>>>> dcf267b04aee4575ceb78583a3e0390074116694
