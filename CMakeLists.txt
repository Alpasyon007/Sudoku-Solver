# CMake Bulid File
#
# CMake Version
cmake_minimum_required(VERSION 3.10)

# Compiler Settings
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set Variables
set(SOURCE_DIR src)

# Set the project name
project(SudokuSolver)

# Add the executable
add_executable(
	SudokuSolver
	${SOURCE_DIR}/main.cpp
	${SOURCE_DIR}/sudoku/sudoku.cpp
	${SOURCE_DIR}/sudoku/sudoku.h
	${SOURCE_DIR}/generator/generator.cpp
	${SOURCE_DIR}/generator/generator.h
)

# Include target directories
target_include_directories(
	SudokuSolver
	PRIVATE
	${SOURCE_DIR}/sudoku
	${SOURCE_DIR}/generator
)