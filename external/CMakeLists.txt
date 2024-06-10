cmake_minimum_required(VERSION 3.9)

add_library(Unity STATIC
        unity/src/unity.c
)

target_include_directories(Unity PUBLIC
        unity/src
)