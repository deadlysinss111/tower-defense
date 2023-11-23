#pragma once

#include <vector>

namespace sf {
	class RenderWindow;
}
class GameObject;

class RenderManager {
public:
	RenderManager();
	~RenderManager();

	void manage(sf::RenderWindow* window, std::vector<GameObject*>* objects);
};