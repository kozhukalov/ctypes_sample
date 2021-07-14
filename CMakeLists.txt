cmake_minimum_required(VERSION 3.9)
project(mylib)

set(sources
    mylib.c
)

add_library(mylib SHARED ${sources})
