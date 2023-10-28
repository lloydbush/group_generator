cmake_minimum_required(VERSION 3.25.1)

file(GLOB src "*.cpp")

project(group_gen)

add_executable(${PROJECT_NAME} ${src})

