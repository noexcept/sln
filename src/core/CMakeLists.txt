project(core)

add_library(${PROJECT_NAME} SHARED
    core.cpp
        log.cpp
        log.h
)
add_library(sln::core ALIAS core)