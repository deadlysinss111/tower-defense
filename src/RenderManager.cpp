#include "RenderManager.hpp"
#include "GameObject.hpp"
#include "Tile.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>


RenderManager::RenderManager(sf::RenderWindow* window){
	this->window = window;
}

RenderManager::~RenderManager(){}

void RenderManager::manage(std::vector<GameObject*>* objects, std::vector<std::vector<Tile*>>* map) {
	for (int i = 0; i < objects->size(); i++) {
		objects->at(i)->display(this->window);
	}
	for (int i = 0; i < map->size(); i++) {
		for (int j = 0; j < map->at(i).size(); j++) {
			//this->window->draw(*map->at(i).at(j)->shape);
		}
	}
}
