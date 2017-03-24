#pragma once
#include <stack>
#include "Location.h"
#include <unordered_map>
#include <vector>
#include <iostream>

class Map
{
private:
	std::stack<Location *> _locationsVisited;
	std::unordered_map<std::string, Location *> _mapLookup;
	std::vector <std::string> _wayHome;
public:
	void addedDirection(std::string theWay) {
		_wayHome.push_back(theWay);
	}
	void displayWayHome() {
		std::cout << "YOU GOT HERE BY TAKING THIS PATH: " << std::endl;
		for (auto x = 0; x < _wayHome.size(); x++) {
			std::cout << (x + 1) << ") " << _wayHome[x] << std::endl;
		}
	}
	Map(std::string startLocationName);
	~Map();

	Location * CurrentLocation = nullptr;
	std::string GetPathBackToHome() {
		displayWayHome();
		return "Goodluck!";
	};
	void Move(Location *newLocation);
	Location* LookupLocationOnMap(int x, int y);
};

