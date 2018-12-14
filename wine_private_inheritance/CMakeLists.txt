cmake_minimum_required(VERSION 3.1)
project(wine_private_inheritance)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -Wpedantic -Wshadow -Wundef -Wno-missing-field-initializers")

add_executable(wine_private_inheritance main.cpp Wine.cpp Wine.hpp)