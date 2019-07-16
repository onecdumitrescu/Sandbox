cmake_minimum_required(VERSION 3.7)
project(Client)

set (CLIENT_VERSION_MAJOR 1)
set (CLIENT_VERSION_MINOR 0)

set(CMAKE_CXX_STANDARD 17)

include_directories(../Engine/vendor/spdlog/include ../Engine/src ../Engine/vendor)
link_directories(../Build/Engine)

add_executable(Sandbox src/ClientApp.cpp)
target_link_libraries(Sandbox Engine)