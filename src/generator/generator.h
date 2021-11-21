#pragma once

#include <array>
#include <chrono>		// std::chrono::system_clock

class Generator {
	private:
		static std::array<std::array<int, 9>, 9> mSudokuBoardMatrix;
	public:
		Generator();

		static std::array<std::array<int, 9>, 9> SimpleGenerator(unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count());
};