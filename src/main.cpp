#include "sudoku/sudoku.h"
#include "generator/generator.h"

int main() {
	Sudoku SudokuGame(Generator::SimpleGenerator());

	SudokuGame.PrintBoard();
}