cmake_minimum_required(VERSION 3.11)

project(openfbx_consumer LANGUAGES CXX)

include(CTest)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(openfbx CONFIG REQUIRED)

add_executable(openfbx_consumer main.cpp)
target_link_libraries(openfbx_consumer PRIVATE OpenFBX)
add_test(NAME openfbx_consumer COMMAND openfbx_consumer)
