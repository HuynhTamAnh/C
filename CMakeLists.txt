cmake_minimum_required(VERSION 3.26)
project(LearnC C)

set(CMAKE_C_STANDARD 11)

add_library(LearnC library.c
        Lesson1/bt1.c
        Lesson1/bt2.c
        Lesson1/bt5.c
        Lesson2/bt1.c
        lesson3/bt1.c
        lesson3/bt3.c
        lesson3/bt4.c
        lesson3/bt5.c
        lesson3/bt6.c
)

