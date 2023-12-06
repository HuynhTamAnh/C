cmake_minimum_required(VERSION 3.26)
project(LearnC C)

set(CMAKE_C_STANDARD 11)

add_library(LearnC library.c
        Lesson1/bt1.c
        Lesson1/bt2.c
        Lesson1/bt5.c
        Lesson2/bt1.c
        Lesson3/bt1.c
        Lesson3/bt3.c
        Lesson3/bt4.c
        Lesson3/bt5.c
        Lesson3/bt6.c
        Lesson4/bt1.c
        Lesson4/bt2.c
        Lesson4/bt3.c
        "bài làm trên lớp/nháp trên lớp.c"
        Lesson4/bt4.c
        Lesson4/bt5.c
        Lesson4/bt6.c
        Lesson4/bt7.c
)

