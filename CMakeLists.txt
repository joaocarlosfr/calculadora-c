cmake_minimum_required(VERSION 3.20)

project(calculadora-c C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

find_package(raylib REQUIRED)

add_executable(calculator
    src/main.c
)

target_link_libraries(calculator raylib)