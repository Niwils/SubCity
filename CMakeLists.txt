cmake_minimum_required (VERSION 3.1)
project (Subcity)

option(BUILD_TESTS "-DBUILD_TESTS - Build test programs" OFF)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/tools/cmake/")
set(CMAKE_CXX_FLAGS "-std=c++0x")

find_package(SDL2 REQUIRED)
find_package(Boost 1.68 REQUIRED)

add_executable(${PROJECT_NAME} src/citylife.cpp)
include(src/engine/CMakeLists.txt)

if(BUILD_TESTS)
	find_package(CxxTest)
	if(CXXTEST_FOUND)
		enable_testing()
		include_directories(${CXXTEST_INCLUDE_DIR})
		include(test/CMakeLists.txt)
	endif()
endif()

include_directories(${SDL2_INCLUDE_DIR} ${BOOST_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} engine ${SDL2_LIBRARY} ${BOOST_LIBRARIES})
