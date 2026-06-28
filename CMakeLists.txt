cmake_minimum_required(VERSION 3.20)

project(Rig-S VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Include header files
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/Application.cpp
)

# Header files
set(HEADERS
    include/Application.h
)

# Create executable
add_executable(Rig-S
    ${SOURCES}
    ${HEADERS}
)

# Compiler warnings
if(MSVC)
    target_compile_options(Rig-S PRIVATE /W4)
else()
    target_compile_options(Rig-S PRIVATE -Wall -Wextra -Wpedantic)
endif()

message(STATUS "Building Rig-S Version ${PROJECT_VERSION}")
