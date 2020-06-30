cmake_minimum_required(VERSION 3.17)

project(mcpp)

set(CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(lib)

add_executable(mcpp src/main.cpp src/window.cpp src/input.cpp src/chunk.cpp src/chunkmesh.cpp src/world.cpp src/mesh.cpp src/vertex.cpp src/indice.cpp)

include_directories(include)
include_directories(lib/glad/include)
include_directories(lib/glm/glm)

target_link_libraries(mcpp glm glfw glad)
