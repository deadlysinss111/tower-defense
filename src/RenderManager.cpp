#include "RenderManager.hpp"
#include "GameObject.hpp"
#include <SFML/Graphics.hpp>


RenderManager::RenderManager(){}

RenderManager::~RenderManager(){}

void RenderManager::manage(sf::RenderWindow* window, std::vector<GameObject*>* objects) {
	for (int i = 0; i < objects->size(); i++) {
		objects->at(i)->display(window);
	}
}
