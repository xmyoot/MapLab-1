#pragma once
class Location
{
private:
	int _locationNumber;
	Location *_north = nullptr;
	Location *_south = nullptr;
	Location *_east = nullptr;
	Location *_west = nullptr;
public:
	Location(int locationNumber);
	~Location();
};

