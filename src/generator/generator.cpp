#include "generator.h"

#include <random>

int Generator::SimpleGenerator() {
	// Generate first row as random numbers
	for(int i = 0; i < 9; i++) {
		mSudokuBoardMatrix[0][i] = rand() % 10;
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
}