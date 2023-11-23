#pragma once
#include "Tower.hpp"

class ArcheryTower : public Tower
{
private:
	int atk = 25;
	float atks = 2;
	int Bus = 7;
	int rg = 350;

public:
	ArcheryTower();
	ArcheryTower(sf::RenderWindow* window, int x, int y, int width, int height, sf::Color _color);
	ArcheryTower(sf::RenderWindow* window, int x, int y, int radius, sf::Color _color);
	~ArcheryTower();

	void draw(sf::RenderWindow& window);

	void Range(const sf::FloatRect& objectBounds);
	void FireRate();
	void Lvl();
	void UpgradeCost();

	void getUpgradeCost();

};

