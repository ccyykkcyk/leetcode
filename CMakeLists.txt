cmake_minimum_required(VERSION 3.25)
project(
  leetcode
  DESCRIPTION "leetcode solution"
  LANGUAGES CXX)

if(MINGW)
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -gdwarf-4")
endif(MINGW)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_SOURCE_DIR}/include)

find_package(Catch2 3 REQUIRED)
include(Catch)

add_subdirectory(test)
