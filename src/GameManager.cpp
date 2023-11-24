#include "GameManager.hpp"
#include "Tile.hpp"
#include "DynamicObject.hpp"
#include "Waves.hpp"
#include "RenderManager.hpp"
#include "Monster.hpp"
#include "InputManager.hpp"
#include "ArcheryTower.hpp"
#include "Core.hpp"
#include <iostream>
#include <Ressource.hpp>

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
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//Cores 
	//if games is completet the creation of the cores is in level function

	Core cores(100, window, 8, 13, 10, 10); //8 13 fin du path
	cores.display(window);

	//Ressources 

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
	for (int i = 0; i < this->listGameObject.at(0)->size(); i++) {

			this->listGameObject.at(0)->at(i)->update(deltaT, this->listGameObject);
	}
	this->renderManager->manage(this->window, &this->listGameObject);
}
void GameManager::Mapping() {
	InputManager inputManager(window);

	inputManager.keyMapping(sf::Keyboard::C, []() {
		std::cout << "Touche C presse !" << std::endl;
		void(*FArcheryTower);
		});

	inputManager.keyMapping(sf::Keyboard::A, []() {
		std::cout << "Touche A presse !" << std::endl;
		void(*FCanonTower);
		});

	inputManager.keyMapping(sf::Keyboard::N, []() {
		std::cout << "Touche N presse !" << std::endl;
		void(*FNyaTower);
		});
}
void GameManager::FArcheryTower()
{
	sf::Vector2i mousePosition = sf::Mouse::getPosition();
	ArcheryTower archeryTower(window, mousePosition.x/10, mousePosition.y/10, 10, 10, sf::Color::Red);
	archeryTower.draw(*window);
}
void GameManager::FCanonTower()
{
	sf::Vector2i mousePosition = sf::Mouse::getPosition();
	ArcheryTower archeryTower(window, mousePosition.x / 10, mousePosition.y / 10, 10, 10, sf::Color::Red); // 10 taille peut être d'une tile
	archeryTower.draw(*window);
}
void GameManager::FNyaTower()
{
	sf::Vector2i mousePosition = sf::Mouse::getPosition();
	ArcheryTower archeryTower(window, mousePosition.x / 10, mousePosition.y / 10, 10, 10, sf::Color::Red);
	archeryTower.draw(*window);
}
bool GameManager::isonPath(int x, int y)
{
	// Vérifier si la position (x, y) est sur le chemin
	for (const auto& tile : this->path)
	{
		/*if (tile->getX() == x && tile->getY() == y)
		{
			return true;
		}*/
	}
	return false;
}
void GameManager::ajouterRessource(int x, int y)
{
	// Ajouter la ressource à la position (x, y)
	Ressource* ressource = new Ressource(1, window, x, y, 10,10); // Assurez-vous d'avoir une classe Ressource avec le constructeur correspondant
	listRessource.push_back(*ressource);
}
