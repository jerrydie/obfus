cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(zpid_1 LANGUAGES CXX)


add_executable(${PROJECT_NAME}
                src/main.cpp
                src/df40940sdvcv__dfnids.hpp
                src/fgbcxh4g43xvc.cpp
                src/fgbcxn4g43xvc.cpp
                src/fbbcxn4g43xvc.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
