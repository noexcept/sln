# 需要最低的cmake版本
cmake_minimum_required(VERSION 3.20)

# C/C++语言标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# 可执行文件目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/bin)
# 动态库存放目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)
# 静态库存放目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)

project(sln)

add_subdirectory(src)