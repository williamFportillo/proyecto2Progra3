cmake_minimum_required(VERSION 3.8)
project(Proyecto2Progra3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp matrices.h matrices.cpp nodo.cpp nodo.h)
add_executable(Proyecto2Progra3 ${SOURCE_FILES})