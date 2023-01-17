cmake_minimum_required(VERSION 3.10)

project(FlowControl VERSION 1.0 LANGUAGES CXX)

message(STATUS "Flow Control")

if(3 LESS_EQUAL 1)
    message(STATUS "The message will be printed")
else()
    message(STATUS "The message can be printed")
endif()


if("23" STREQUAL 23)
    message(STATUS "Maybe right")
else()
    message(STATUS "Maybe not right")
endif()

if(1.2.3 VERSION_LESS 1.2)
    message(STATUS "Right?")
else()
    message(STATUS "Not Right?")
endif()

message(STATUS "The current dir is ${CMAKE_SOURCE_DIR}")
message(STATUS "The current dir is ${CMAKE_BINARY_DIR}")
message(STATUS "The current dir is ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "The current dir is ${CMAKE_CURRENT_BINARY_DIR}")

set(l 1 2 3 4)
foreach(loopVar IN LISTS l ITEMS an chao da bat)
    message(STATUS "The value is ${loopVar}")
endforeach()
