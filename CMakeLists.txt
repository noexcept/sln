# 需要最低的cmake版本
cmake_minimum_required(VERSION 3.20)

# C/C++语言标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)
# 全局开关警告当错误
# set(CMAKE_COMPILE_WARNING_AS_ERROR ON)

# 可执行文件目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/bin)
# 动态库存放目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)
# 静态库存放目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)

# MSVC 设置utf-8编码
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

project(sln VERSION 0.0.1.0)

# 软件名字
if(NOT DEFINED SLN_APP_NAME)
    set(SLN_APP_NAME "sln")
endif()
if(NOT DEFINED SLN_APP_VERSION_MAJOR)
    set(SLN_APP_VERSION_MAJOR 0)
endif()
if(NOT DEFINED SLN_APP_VERSION_MINOR)
    set(SLN_APP_VERSION_MINOR 0)
endif()
if(NOT DEFINED SLN_APP_VERSION_PATCH)
    set(SLN_APP_VERSION_PATCH 0)
endif()
if(NOT DEFINED SLN_APP_VERSION_TWEAK)
    set(SLN_APP_VERSION_TWEAK 0)
endif()

add_subdirectory(3rdparty)
add_subdirectory(src)