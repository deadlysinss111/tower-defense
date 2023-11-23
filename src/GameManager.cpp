#include "GameManager.hpp"
#include "Tile.hpp"
#include "DynamicObject.hpp"
#include "Waves.hpp"
#include "RenderManager.hpp"
#include "Monster.hpp"
#include <iostream>

GameManager* GameManager::instance_ = nullptr;

// Singleton constructor filter
GameManager* GameManager::instance(sf::RenderWindow* window)
{
	if (instance_ == nullptr)
	{
		instance_ = new GameManager(window);
	}
	return instance_;
}

// Constru & Destru
GameManager::GameManager(sf::RenderWindow* window)
{
	this->window = window;
	this->listGameObject = {};
	this->map = {};
	this->listWave = {};
	this->path = {};
	this->renderManager = new RenderManager();
}
GameManager::~GameManager()
{
	delete this->renderManager;
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
			Tile tile;
			tempVec.push_back(&tile);
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
	//for (int m = 0; m < 5; m++)
	//{
	//	Monster monster(0, 0, 20, "solider");
	//}

	// Creates the Core and 2-3 ressources
}

// Win & Loss conditions
bool GameManager::detectWin()
{
	float gameClearLevel = 0.f;
	for (const auto it : this->listWave)
	{
		//gameClearLevel += it->getClearLevel();
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
				return false;
	//}
}
void GameManager::manage(float deltaT){
	for (int i = 0; i < this->listGameObject.size(); i++) {
		this->listGameObject[i]->update(deltaT, &this->listGameObject);
	}
	this->renderManager->manage(this->window, &this->listGameObject);
}