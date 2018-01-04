#include "Board.h"
#include <assert.h>


Board::Board(Graphics & gfx)
	:gfx(gfx)
{
}

void Board::DrawCell(const Location & loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.x < width);
	assert(loc.y >= 0);
	assert(loc.y < height);

	const int off_x = x + boarderPadding + boarderWidth;
	const int off_y = y + boarderPadding + boarderWidth;

	gfx.DrawRectDim(loc.x * dimension + off_x + cellPadding , loc.y * dimension+ off_y + cellPadding , dimension - cellPadding *2 , dimension - cellPadding * 2, c);
}

int Board::GetGridWidth() const
{
	return width;
}

int Board::GetGridHeight() const
{
	return height;
}

bool Board::IsInsideBoard(const Location & loc) const
{
	return loc.x >= 0 && loc.x < width && loc.y >= 0 && loc.y < height;
}

void Board::DrawBoarder()
{
	const int top = y;
	const int left = x;
	const int bottom = top + (boarderWidth + boarderPadding) * 2 + height * dimension;
	const int right = left + (boarderWidth + boarderPadding) * 2 + width * dimension;
	//top
	gfx.DrawRect(left, top, right, top + boarderWidth, boarderColor);
	//left
	gfx.DrawRect(left, top + boarderWidth, left + boarderWidth, bottom - boarderWidth, boarderColor);
	//right
	gfx.DrawRect(right - boarderWidth, top + boarderWidth, right, bottom - boarderWidth, boarderColor);
	//bottom
	gfx.DrawRect(left, bottom - boarderWidth, right, bottom, boarderColor);


}
