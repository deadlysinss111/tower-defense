#include "GameManager.hpp"
#include <iostream>

// Constru & Destru
GameManager::GameManager()
{
	this->listGameObject = {};
	this->map = {};
	this->listWave = {};
	this->path = {};
}
GameManager::~GameManager()
{
	std::cout << "GameManager was PURGED\n";
}

// Setup
void GameManager::setup()
{
	// Fills the map lists and sublists with empty Tiles
	for (int x = 0; x < 20; x++)
	{
		std::vector<Tile*> tempVec;
		for (int y = 0; y < 15; y++)
		{
			Tile* tile = new Tile();
			tempVec.push_back(tile);
		}
		this->map.push_back(tempVec);
	}

	// Fills the path with it's component Tiles in order
	// seal of quality approved Valentin 22/11/2023 all copyright from Valentin Inc. 2023-2023
	for (int i = 0; i < 13; i++)
	{
		this->path.push_back(this->map[i][8]);
	}
	for (int i = 1; i < 6; i++)
	{
		this->path.push_back(this->map[13][8 + i]);
	}


	// Fills the listWave with waves

	// Creates the Core and 2-3 ressources
}

// Win & Loss conditions
bool GameManager::detectWin()
{
	float gameClearLevel = 0.f;
	for (const auto it : this->listWave)
	{
		gameClearLevel += it->getClearLevel();
	}

	if (gameClearLevel == 0.f)
		return true;
	else
		return false;
}
bool GameManager::detectLoss()
{
	//for (const auto it : listGameObject)
	//{
	//	if (dynamic_cast<Core*>(it))
	//		if ((static_cast<Core*>(it))->getHealth() <= 0)
	//			return true;
	//		else
	//			return false;
	//}
}