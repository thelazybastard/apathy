cmake_minimum_required(VERSION 4.0)

project (apathy VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_FILES
    main.cpp
    player.cpp
    player.h
    antagonist.cpp
    antagonist.h
    events.cpp
    events.h
)

add_executable(apathy ${SOURCE_FILES})