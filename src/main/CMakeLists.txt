project(main)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_directories(${PROJECT_NAME}
    PRIVATE sln::core
)
