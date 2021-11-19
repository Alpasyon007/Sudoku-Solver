#pragma once

class Generator {
	private:
		const int numbers[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		int mSudokuBoardMatrix[9][9];
	public:
		Generator();

		int SimpleGenerator();
};