#pragma once

#include <vector>

namespace sf {
	class RenderWindow;
}
class GameObject;
class Tile;

class RenderManager {
public:
	RenderManager(sf::RenderWindow* window);
	~RenderManager();
	sf::RenderWindow* window;

	void manage(std::vector<GameObject*>* objects, std::vector<std::vector<Tile*>>* map);
};