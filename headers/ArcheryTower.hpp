#pragma once
#include "Tower.hpp"

class ArcheryTower : public Tower
{
private:

public:
	ArcheryTower();
	ArcheryTower(sf::RenderWindow& window, int x, int y, float width, float height);
	ArcheryTower(sf::RenderWindow& window, int x, int y, float radius);
	~ArcheryTower();

	void draw(sf::RenderWindow& window);

	void Range();
	void FireRate();
	void Lvl();
	void UpgradeCost();

	void getUpgradeCost();

};

