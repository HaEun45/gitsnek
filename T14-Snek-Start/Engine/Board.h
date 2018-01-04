#pragma once

#include "Graphics.h"
#include "Location.h"

class Board {
public:
	Board(Graphics& gfx);
	void DrawCell(const Location& loc, Color c);
	int GetGridWidth()const;
	int GetGridHeight()const;
	bool IsInsideBoard(const Location& loc) const;
	void DrawBoarder();
private:
	static constexpr Color boarderColor = Colors::Blue;
	static constexpr int dimension = 20;
	static constexpr int cellPadding = 1;
	static constexpr int width = 32;
	static constexpr int height = 24;
	static constexpr int boarderWidth = 4;
	static constexpr int boarderPadding = 2;
	static constexpr int x = 70;
	static constexpr int y = 50;
	Graphics& gfx;
};

