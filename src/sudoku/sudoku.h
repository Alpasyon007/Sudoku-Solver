#pragma once

class Sudoku {
	private:
		int mSudokuBoardMatrix[9][9];
	public:
		Sudoku();
		Sudoku(int initialBoard[9][9]);

		void PrintBoard();
		bool CheckBoard(int board[9][9]);
};