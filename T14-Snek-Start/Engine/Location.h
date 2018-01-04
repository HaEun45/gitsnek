#pragma once

class Location 
{
public:
	void Add(const Location& val);
	bool operator==(const Location& rhs) const;
	int x;
	int y;
};