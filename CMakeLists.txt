cmake_minimum_required(VERSION 3.2)
project(OOP)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
include_directories((${PROJECT_SOURCE_DIR}))

add_subdirectory(src)
add_subdirectory(tests)
add_executable(main main.cpp)
target_link_libraries(main PRIVATE sample)