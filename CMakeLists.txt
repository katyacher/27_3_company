cmake_minimum_required(VERSION 3.5.0)
project(27_3_company VERSION 0.1.0 LANGUAGES C CXX)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
