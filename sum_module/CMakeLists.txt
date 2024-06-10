cmake_minimum_required(VERSION 3.9)

add_library(sum_module STATIC
        sum_module.c
)

target_include_directories(sum_module PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)