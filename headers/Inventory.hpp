#pragma once

#include "Ressource.hpp"

class Inventory
{

private:
	int gold;
	int wood;

	Ressource ressource;

public:
	
	Inventory();
	~Inventory();
	void addGold();
	void addWood();
	void decrementGold();
	void decrementWood();
};

