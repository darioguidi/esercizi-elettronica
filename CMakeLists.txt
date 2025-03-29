cmake_minimum_required(VERSION 3.30)
project(esercizi_elettronica C)

set(CMAKE_C_STANDARD 23)

add_library(esercizi_elettronica STATIC library.c
        "Laboratorio 1/Esercizio 1.c")
