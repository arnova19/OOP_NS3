cmake_minimum_required(VERSION 3.16)
project(OOP_NS3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_library(core
  src/Dummy.cpp
)
target_include_directories(core PUBLIC include)

add_executable(sim app/main.cpp)
target_link_libraries(sim PRIVATE core)
