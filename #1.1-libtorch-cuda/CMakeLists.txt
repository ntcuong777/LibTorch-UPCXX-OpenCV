cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(example-app)

find_package(Torch REQUIRED)

file(GLOB example_app_src
     "*.h"
     "*.cpp"
)

add_executable(example-app ${example_app_src})
target_link_libraries(example-app "${TORCH_LIBRARIES}")

set_property(TARGET example-app PROPERTY CXX_STANDARD 14)

