cmake_minimum_required(VERSION 3.7)
list(APPEND CMAKE_MODULE_PATH ../modules/CMakePCHCompiler)

project(Engine CXX CXXPCH)

set(ENGINE_LIBRARY_NAME "Engine")

set(ENGINE_VERSION_MAJOR 1)
set(ENGINE_VERSION_MINOR 0)
set(ENGINE_VERSION_PATCH 0)
set(PROJECT_VERSION ${ENGINE_VERSION_MAJOR}.${ENGINE_VERSION_MINOR}.${ENGINE_VERSION_PATCH})

include_directories(src vendor/spdlog/include)

add_library(Engine src/ngpch.cpp src/ngpch.hpp src/Engine.hpp src/Core/Application.cpp src/Core/Application.hpp src/Core/Core.hpp src/Core/EntryPoint.hpp src/Core/Log.cpp src/Core/Log.hpp)
target_precompiled_header(Engine src/ngpch.hpp)

set_target_properties(${ENGINE_LIBRARY_NAME} PROPERTIES
        CSS_STANDARD 17
        CXX_STANDARD_REQUIRED YES
        CXX_EXTENSIONS NO
        VERSION ${PROJECT_VERSION}
        SOVERSION ${ENGINE_VERSION_MAJOR}
        )