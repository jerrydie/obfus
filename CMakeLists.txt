cmake_minimum_required(VERSION 3.19 FATAL_ERROR)

project(zpid_1 LANGUAGES CXX)


add_executable(${PROJECT_NAME}
                src/main.cpp
                src/hardcore_algorithm.hpp
                src/hardcore_algorithm.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_EXTENSIONS OFF)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
