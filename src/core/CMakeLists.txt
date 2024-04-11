project(core VERSION 1.1.1.9)

configure_file(manifest_conf.h.in manifest_conf.h)

add_library(${PROJECT_NAME} SHARED
    core.cpp
    log.cpp
    log.h
    core_define.h
    manifest.cpp
    manifest.h
    crash.cpp
    crash.h
    standard_paths.cpp
    standard_paths.h
)
add_library(sln::core ALIAS core)

target_link_libraries(${PROJECT_NAME} PRIVATE spdlog)
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_BINARY_DIR}")
target_compile_definitions(${PROJECT_NAME} PRIVATE CORE_EXPORTS)