cmake_minimum_required(VERSION 3.20)

project(ProjectileSimulator)

set(CMAKE_CXX_STANDARD 20)

add_executable(projectile_simulator
    main.cpp
    src/suvat.cpp
)

target_include_directories(projectile_simulator
    PRIVATE
    include
)