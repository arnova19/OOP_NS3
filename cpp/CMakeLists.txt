cmake_minimum_required(VERSION 3.16)
project(OOP_NS3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_library(core
    src/AwgnChannelModel.cpp
)

target_include_directories(core PUBLIC include)

add_executable(sim
    app/main.cpp
)

target_link_libraries(sim core)

