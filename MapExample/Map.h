#pragma once
#include <stack>
#include "Location.h"
class Map
{
private:
	std::stack<Location *> _locationsVisited;
	Location *_currentLocation = nullptr;
public:
	Map(int startLocation);
	~Map();
};

