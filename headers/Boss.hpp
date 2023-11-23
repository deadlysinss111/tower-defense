#pragma once
#include "Ennemies.hpp"

class Boss : public Ennemies
{
public:
	Boss(sf::RenderWindow* window, int x, int y, int r);

	void ability();
};
