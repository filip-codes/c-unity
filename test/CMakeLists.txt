cmake_minimum_required(VERSION 3.9)

add_executable(tests
    main.c
)

target_link_libraries(tests
    sum_module
    Unity
)