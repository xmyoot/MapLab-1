#include "Map.h"



Map::Map(std::string startLocationName)
{
	CurrentLocation = new Location(startLocationName);
}


Map::~Map()
{
}

std::string Map::GetPathBackToHome()
{
	//TODO: Implement this
	return std::string();
}
