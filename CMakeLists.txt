cmake_minimum_required(VERSION 3.26)
project(LearnC C)

set(CMAKE_C_STANDARD 11)

add_library(LearnC library.c
        library.h
        "Lesson1/gán biến.c")
