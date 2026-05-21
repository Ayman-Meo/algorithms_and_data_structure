cmake_minimum_required(VERSION 4.2)
project(algorithms_and_data_structures)

set(CMAKE_CXX_STANDARD 26)

add_executable(program app/main.cpp
    app/include/utilities/log.hpp
    app/src/utilities/log.cpp
    app/include/cli/cli_app.hpp
    app/src/cli/cli_app.cpp
)
