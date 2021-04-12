cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(example-app)

file(GLOB example_app_src
     "*.h"
     "*.cpp"
)

find_package(Torch REQUIRED)
#set(CMAKE_CXX_COMPILER "/home/hung/upcxx-2021.3.0/bin/upcxx -O")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

#add_compile_options(-O)

add_executable(example-app ${example_app_src})
target_link_libraries(example-app "${TORCH_LIBRARIES}")

message(STATUS "CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
message(STATUS "TORCH_CXX_FLAGS: ${TORCH_CXX_FLAGS}")
message(STATUS "TORCH_LIBRARIES: ${TORCH_LIBRARIES}")

set_property(TARGET example-app PROPERTY CXX_STANDARD 14)

