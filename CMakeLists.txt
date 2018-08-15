cmake_minimum_required(VERSION 3.8)
# Specify the project name
project(Buy_my_ticket)

# Google test config
enable_testing()
find_package(GTest REQUIRED)
include(CTest)

set(CMAKE_CXX_STANDARD 11)

# Include header files
include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

# Set the source & test variable
aux_source_directory(${CMAKE_CURRENT_LIST_DIR}/src SOURCE_DIR)
aux_source_directory(${CMAKE_CURRENT_LIST_DIR}/test TEST_DIR)

set(SOURCE_FILE main.cpp ${SOURCE_DIR})

# Executable main
add_executable(Buy_my_ticket ${SOURCE_FILE})

# Executable googletest
add_executable(test_suite ${SOURCE_DIR} ${TEST_DIR})
target_link_libraries(test_suite GTest::GTest GTest::Main)
