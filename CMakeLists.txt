cmake_minimum_required(VERSION 3.26)
project(sencha C)

set(CMAKE_C_STANDARD 11)

include_directories(C-Primer)

add_executable(sencha
        C-Primer/output.c
        C-Primer/output.h)
