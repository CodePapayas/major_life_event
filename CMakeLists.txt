cmake_minimum_required(VERSION 3.14)
project(major_life_event)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Source files (excluding main if you have one)
set(SRC_FILES
    src/environment.cpp
    src/agent.cpp
    src/brain.cpp
)

# Create a library from source files for linking with tests
add_library(${PROJECT_NAME}_lib ${SRC_FILES})
target_include_directories(${PROJECT_NAME}_lib PUBLIC ${CMAKE_SOURCE_DIR}/src)

# Main executable (uncomment when you have a main.cpp)
# add_executable(${PROJECT_NAME} src/main.cpp)
# target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}_lib)

# Enable testing
enable_testing()

# Test executable
add_executable(tests
    tests/test_env.cpp
)

target_link_libraries(tests PRIVATE ${PROJECT_NAME}_lib)
target_include_directories(tests PRIVATE ${CMAKE_SOURCE_DIR}/tests)

# Register tests with CTest
add_test(NAME unit_tests COMMAND tests)
