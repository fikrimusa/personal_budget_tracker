cmake_minimum_required(VERSION 3.10)
project(BudgetTracker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable folder organization in IDEs (like VS Code)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Include directories (so #include "transaction.hpp" works)
include_directories(include)

# Create the executable
add_executable(budget_tracker
    src/main.cpp
    include/transaction.hpp  # Optional: Ensures header changes trigger rebuilds
)

# Link stdc++fs if needed (for older GCC)
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 9.0)
    target_link_libraries(budget_tracker PRIVATE stdc++fs)
endif()