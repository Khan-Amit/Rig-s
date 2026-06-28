cmake_minimum_required(VERSION 3.10)

project(RigS)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(RigS
    src/main.cpp
    src/RigController.cpp
    src/Logger.cpp
    src/Config.cpp
)
