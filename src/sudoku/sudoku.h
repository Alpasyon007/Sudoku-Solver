#pragma once

#include <array>

class Sudoku {
	private:
		int mSudokuBoardMatrix[9][9];
	public:
		Sudoku();
		Sudoku(std::array<std::array<int, 9>, 9> initialBoard);

		void PrintBoard();
		bool CheckBoard(std::array<std::array<int, 9>, 9> board);
};