cmake_minimum_required(VERSION 2.6)
project(basic_test)

################################
# GTest
################################
#### PLEASE CHANGE PATH TOU YOUR GTEST DIRECTORY ####
ADD_SUBDIRECTORY (C:/Users/Iorwet/Documents/repoGit/C++/SHM/googletest gtest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

################################
# Unit Tests
################################
# Add test cpp file
add_executable( test_zadanie test_zadanie10.cpp )
# Link test executable against gtest & gtest_main
target_link_libraries(test_zadanie gtest gtest_main)
add_test( test_zadanie test_zadanie )
