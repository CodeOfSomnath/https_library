cmake_minimum_required(VERSION 3.12)
project(https)
add_library(${PROJECT_NAME} src/main.c
                            src/https_windows.c
                            )

target_include_directories(${PROJECT_NAME} PUBLIC include/)

target_link_libraries(${PROJECT_NAME} PUBLIC Winhttp)