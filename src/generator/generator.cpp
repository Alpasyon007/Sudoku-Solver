// Header Files
#include "generator.h"

// Includes
#include <algorithm>
#include <chrono>
#include <random>

// Init static member variables
std::array<std::array<int, 9>, 9> Generator::mSudokuBoardMatrix {{{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
																  { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
																  { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
																  { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
																  { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
																  { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
																  { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
																  { 0, 0, 0, 0, 0, 0, 0, 0, 0 }}};

// A simple generator
std::array<std::array<int, 9>, 9> Generator::SimpleGenerator(unsigned int seed /* = std::chrono::system_clock::now().time_since_epoch().count() */) {
	//  Shuffle numbers 1-9 for the first row of the board
	std::array<int,9> numbers { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::shuffle (numbers.begin(), numbers.end(), std::default_random_engine(seed));

	// Assign first row from shuffled numbers
	for(int i = 0; i < 9; i++) {
		mSudokuBoardMatrix[0][i] = numbers[i];
	}

	// Generate next row as shift to the left of previous line
	for(int i = 0; i < 8; i++) {
		// Shift lines by 3
		for(int j = 0; j < 3; j++) {
			mSudokuBoardMatrix[i + 1][j]	 = mSudokuBoardMatrix[i][j + 3];
			mSudokuBoardMatrix[i + 1][j + 3] = mSudokuBoardMatrix[i][j + 6];
			mSudokuBoardMatrix[i + 1][j + 6] = mSudokuBoardMatrix[i][j];
		}
		// Shift lines 4 and 7 by 1
		if(i == 2 || i == 5) {
			for(int j = 0; j < 8; j++) {
				mSudokuBoardMatrix[i + 1][j]	= mSudokuBoardMatrix[i][j + 1];
			}
			mSudokuBoardMatrix[i + 1][8]		= mSudokuBoardMatrix[i][0];
		}
	}

	return mSudokuBoardMatrix;
}