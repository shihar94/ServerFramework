cmake_minimum_required(VERSION 3.5.0)
project(server VERSION 0.1.0 LANGUAGES C CXX)

include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/src
)

file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        )


add_executable(${PROJECT_NAME} main.cpp ${all_SRCS})