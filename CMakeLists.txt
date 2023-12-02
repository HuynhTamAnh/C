cmake_minimum_required(VERSION 3.26)
project(LearnC C)

set(CMAKE_C_STANDARD 11)

add_library(LearnC library.c
        Lesson1/bt1.c
        Lesson1/bt2.c
        Lesson1/bt3.c
        Lesson1/bt5.c)

