cmake_minimum_required(VERSION 3.0.0)

add_executable(27_3_company main.cpp ${MY_INCLUDE_DIR}/team.h team.cpp ${MY_INCLUDE_DIR}/employee.h employee.cpp)

target_include_directories(27_3_company PUBLIC ${MY_INCLUDE_DIR})