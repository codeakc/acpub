cmake_minimum_required(VERSION 3.10)

# project name
project(HW)

# binary
add_executable(hw main.cpp)

# include sub-directories
add_subdirectory(math)

# link libraries
target_link_libraries(hw PUBLIC pthread) # existing system library for multi-threading
target_link_libraries(hw PUBLIC mymath)  # custom library to perform math operations

# include header files from other directories
target_include_directories(
					hw PUBLIC
					"${PROJECT_BINARY_DIR}"
					"${PROJECT_SOURCE_DIR}/math"
				)
