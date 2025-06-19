cmake_minimum_required(VERSION 3.30)
project(contacts C)

set(CMAKE_C_STANDARD 99)

# 添加头文件目录（确保编译器能找到头文件）
#include_directories(${PROJECT_SOURCE_DIR})

# 添加所有源文件
add_executable(contacts
        main.c
        contacts.c
        contacts.h
)