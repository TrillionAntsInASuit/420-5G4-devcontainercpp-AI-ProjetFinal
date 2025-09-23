cmake_minimum_required(VERSION 3.18)
project(libfonctions)

file(GLOB SOURCES "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})