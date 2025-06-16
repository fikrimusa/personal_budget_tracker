cmake_minimum_required(VERSION 3.10)
project(BudgetTracker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

include_directories(include)

add_executable(budget_tracker
    src/main.cpp
    include/transaction.hpp
    include/budget_tracker.hpp
    src/cli.cpp
)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 9.0)
    target_link_libraries(budget_tracker PRIVATE stdc++fs)
endif()