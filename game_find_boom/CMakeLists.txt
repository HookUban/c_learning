cmake_minimum_required(VERSION 3.30)
project(game_find_boom C)

set(CMAKE_C_STANDARD 99)

add_executable(game_find_boom main.c
        test.c
        game.c
        game.h)
