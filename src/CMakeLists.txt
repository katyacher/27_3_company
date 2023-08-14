cmake_minimum_required(VERSION 3.5.0)

add_executable(27_3_company main.cpp ${MY_INCLUDE_DIR}/manager.h manager.cpp ${MY_INCLUDE_DIR}/employee.h employee.cpp ${MY_INCLUDE_DIR}/boss.h boss.cpp)

target_include_directories(27_3_company PUBLIC ${MY_INCLUDE_DIR})