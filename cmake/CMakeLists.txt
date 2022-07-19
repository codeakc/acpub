cmake_minimum_required(VERSION 3.10)

# project name
project(HW)

# binary
add_executable(hw main.c)

# link libraries
target_link_libraries(hw PUBLIC pthread)
