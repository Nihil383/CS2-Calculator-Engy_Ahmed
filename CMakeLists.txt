cmake_minimum_required(VERSION 3.10)

project(CS2Calculator)

add_executable(calculatorV1
    test.cpp
    calculator.cpp
)

target_include_directories(calculatorV1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
