#include "Location.h"

void Location::Add(const Location & val)
{
	x += val.x;
	y += val.y;
}

bool Location::operator==(const Location & rhs) const
{
	return x == rhs.x && y == rhs.y;
}

