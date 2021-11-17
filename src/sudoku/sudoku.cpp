#include "sudoku.h"
#include <iostream>

Sudoku::Sudoku() : mSudokuBoardMatrix{
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	}} {};

Sudoku::Sudoku(int initialBoard[9][9]) : mSudokuBoardMatrix{
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	},
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0	} } {

	if(CheckBoard(initialBoard)) {
		for(int i = 0; i < 9; i++) {
			for(int j = 0; j < 9; j++) {
				mSudokuBoardMatrix[i][j] = initialBoard[i][j];
			}
		}
	}
};

void Sudoku::PrintBoard() {
	for(int i = 0; i < 9; i++) {
		// Print horizontal seperators
		if(i % 3 == 0 && i != 0) {
			for(int j = 0; j < 21; j++) {
				if(j == 6 || j == 14) {
					std::cout << "+";
				} else {
					std::cout << "-";
				}
			}
			std::cout << std::endl;
		}
		for(int j = 0; j < 9; j++) {
			// Print vertical seperators
			if(j % 3 == 0 && j != 0) {
				std::cout << "| ";
			}
			std::cout << mSudokuBoardMatrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

bool Sudoku::CheckBoard(int board[9][9]) {
	return true;
};