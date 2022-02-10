cmake_minimum_required(VERSION 3.0.0)
project(Tutorial VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB SOURCE_FILES src/*.cpp)

add_executable(Tutorial ${SOURCE_FILES})
target_include_directories(Tutorial PUBLIC include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
