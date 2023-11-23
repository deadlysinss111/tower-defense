#pragma once
#include "Tower.hpp"

class NyaTower : public Tower 
{
private:

public:
	NyaTower();
	NyaTower(sf::RenderWindow* window, int x, int y, float width, float height, sf::Color _color);
	NyaTower(sf::RenderWindow* window, int x, int y, float radius, sf::Color _color);
	~NyaTower();

	void draw(sf::RenderWindow& window);

	void Range();
	void FireRate();
	void Lvl();
	void UpgradeCost();

	void getUpgradeCost();

};

