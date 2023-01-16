cmake_minimum_required(VERSION 3.10)

project(SIMPLE_TARGET
        VERSION 1.0
        LANGUAGES CXX)

# When calling add_library, not state explicitly the SHARED|STATIC
add_library(collector src/collector.cpp)
add_library(algo src/algo.cpp)
add_library(engine src/engine.cpp)
add_library(ui src/ui.cpp)

# not use same executable name with project name
add_executable(MyApp src/main.cpp)

# state explicitly the PUBLIC and PRIVATE dependencies
target_link_libraries(collector
    PUBLIC ui
    PRIVATE algo engine
)

target_link_libraries(MyApp PRIVATE collector)