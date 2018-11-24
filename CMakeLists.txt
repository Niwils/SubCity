cmake_minimum_required (VERSION 3.1)
project (Subcity)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/tools/cmake/")
set(CMAKE_CXX_FLAGS "-std=c++0x")

find_package(SDL2 REQUIRED)

add_executable(${PROJECT_NAME} src/citylife.cpp)
include(src/engine/CMakeLists.txt)

include_directories(${SDL2_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY})
