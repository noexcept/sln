project(core)

add_library(${PROJECT_NAME} SHARED
    core.cpp
)
add_library(sln::core ALIAS core)