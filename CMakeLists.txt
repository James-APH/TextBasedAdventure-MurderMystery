cmake_minimum_required(VERSION 3.16)

project(MurderMysteryGame VERSION 1.0 LANGUAGES CXX)

# -----------------------------
# C++ standard
# -----------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# -----------------------------
# Output directories
# -----------------------------
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# -----------------------------
# Include directories
# -----------------------------
include_directories(${PROJECT_SOURCE_DIR}/include)

# -----------------------------
# Main source files
# -----------------------------
set(GAME_SOURCES
    src/Character.cpp
    src/Game.cpp
    src/Item.cpp
    src/Puzzle.cpp
    src/Room.cpp
    src/RoomList.cpp
    src/RoomState.cpp
)

# -----------------------------
# Main executable
# -----------------------------
add_executable(game
    src/project/main.cpp
    ${GAME_SOURCES}
)

target_include_directories(game PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)

# -----------------------------
# Warnings
# -----------------------------
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    target_compile_options(game PRIVATE -Wall -Wextra -Wpedantic)
elseif (MSVC)
    target_compile_options(game PRIVATE /W4)
endif()
