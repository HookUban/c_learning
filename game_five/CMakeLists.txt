cmake_minimum_required(VERSION 3.30)
project(game_five C)

set(CMAKE_C_STANDARD 99)

add_executable(game_five main.c
        game.c
        game.h
        test.c)
