cmake_minimum_required(VERSION 3.7)
project(Sandbox)

add_subdirectory("${PROJECT_SOURCE_DIR}/Engine" "${PROJECT_SOURCE_DIR}/Build/Engine")
add_subdirectory("${PROJECT_SOURCE_DIR}/Client" "${PROJECT_SOURCE_DIR}/Build/Client")