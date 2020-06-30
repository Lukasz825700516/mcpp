cmake_minimum_required(VERSION 3.17)

project(glad)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(glad SHARED ${PROJECT_SOURCE_DIR}/src/glad.c)