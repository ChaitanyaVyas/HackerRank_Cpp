cmake_minimum_required(VERSION 3.4)
project(HackerRank_Cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 01_Introduction/01_HelloWorld.cpp 01_Introduction/02_InputOutput.cpp)
add_executable(01_Introduction-01_HelloWorld ${SOURCE_FILES})

set(SOURCE_FILES 01_Introduction/02_InputOutput.cpp)
add_executable(01_Introduction-02_InputOutput ${SOURCE_FILES})

set(SOURCE_FILES 01_Introduction/03_BasicDataTypes.cpp)
add_executable(01_Introduction-03_BasicDataTypes ${SOURCE_FILES})

set(SOURCE_FILES 01_Introduction/04_ConditionalStatements.cpp)
add_executable(01_Introduction-04_ConditionalStatements ${SOURCE_FILES})

set(SOURCE_FILES 01_Introduction/05_ForLoop.cpp)
add_executable(01_Introduction-05_ForLoop ${SOURCE_FILES})

set(SOURCE_FILES 01_Introduction/06_Functions.cpp)
add_executable(01_Introduction-06_Functions ${SOURCE_FILES})

set(SOURCE_FILES 01_Introduction/07_Pointer.cpp)
add_executable(01_Introduction-07_Pointer ${SOURCE_FILES})

set(SOURCE_FILES 01_Introduction/08_ArrayIntroduction.cpp)
add_executable(01_Introduction-08_ArrayIntroduction ${SOURCE_FILES})

set(SOURCE_FILES 01_Introduction/09_VariableSizedArrays.cpp)
add_executable(01_Introduction-09_VariableSizedArrays ${SOURCE_FILES})



set(SOURCE_FILES 04_STL/01_Vector-Sort.cpp)
add_executable(04_STL-01_Vector-Sort ${SOURCE_FILES})