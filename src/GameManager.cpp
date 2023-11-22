#include "GameManager.hpp"

// Constru & Destru
GameManager::GameManager();
{
	this->listGameObject = {};
	this->map = {};
	this->listWave = {};
}
GameManager::~GameManager();
{
	std::cout << "GameManager was PURGED\n";
}

// Setup
void GameManager::setup()
{
	// Fills the map lists and sublists with empty Tiles
	for (int x = 0; x < 30; x++)
	{
		for (int y = 0; y < 20; y++)
		{

		}
	}

	// Fills the path with it's component Tiles in order

	// Fills the listWave with waves
	for (int w = 0; w < 3; w++)
	{

	}

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
	for (const auto it : listGameObject)
	{
		if (dynamic_cast<Core*>(it))
			if ((static_cast<Core*>(it))->getHealth() <= 0)
				return true;
			else
				return false;
	}
}