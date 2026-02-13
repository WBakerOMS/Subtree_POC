cmake_minimum_required(VERSION 3.10.0)
project(Subtree_POC VERSION 0.1.0 LANGUAGES C CXX)

include(core/CMakeLists.txt)
include(extended/CMakeLists.txt)

add_executable(Subtree_POC main.cpp ${myApp_SOURCES})

include(CTest)
enable_testing()

