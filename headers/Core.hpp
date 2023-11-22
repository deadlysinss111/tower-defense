#pragma once

#include "GameObject.hpp"

class Core : public GameObject
{

private:
	int hp = 100;

public:
	Core();
	Core(int hp, sf::RenderWindow* window, int x, int y, float width, float height);
	~Core();

	void createCore();
	bool takeDamage();
	void decrementHp(int amount);
	
};

