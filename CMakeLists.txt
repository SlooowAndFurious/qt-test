cmake_minimum_required(VERSION 3.16)

project(test VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 6.7 REQUIRED COMPONENTS Core Gui Widgets)

add_executable(test
    main.cpp
    mainwindow.cpp
)

target_include_directories(test PRIVATE ${Qt6_INCLUDE_DIRS})
target_link_libraries(test PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)

