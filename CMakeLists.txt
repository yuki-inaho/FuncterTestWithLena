cmake_minimum_required(VERSION 3.5)

set(PROJ_NAME image_reader_functer)
project(${PROJ_NAME})

set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_CXX_FLAGS "-O3 -std=gnu++11 -fopenmp") # 最適化

include_directories(
        include
)

set(SOURCE_CODE
        src/main.cpp
        src/ImageManager.cpp
        )

add_executable(image_reader_functer ${SOURCE_CODE})


find_package(PkgConfig REQUIRED)
pkg_check_modules(OpenCV opencv REQUIRED)

include_directories(${OpenCV_CFLAGS})
target_link_libraries(${PROJ_NAME} ${OpenCV_LDFLAGS})
