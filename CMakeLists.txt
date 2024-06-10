cmake_minimum_required(VERSION 3.9)
project("Sample Project" C)

set(TARGET_GROUP test CACHE STRING "Group to build")

add_subdirectory(sum_module)

if(TARGET_GROUP STREQUAL production)
    add_subdirectory(src)
elseif(TARGET_GROUP STREQUAL test)
    include(CTest)

    add_subdirectory(external)
    add_subdirectory(test)
else()
    message(FATAL_ERROR "Given TARGET_GROUP unknown")
endif()