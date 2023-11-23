#pragma once
#include "Tower.hpp"

class NyaTower : public Tower
{
private:

	int atk = 200;
	float atks = 0.2;
	int Bus = 100;
	int rg = 1000;

public:
	NyaTower();
	NyaTower(sf::RenderWindow* window, int x, int y, int width, int height, sf::Color _color);
	NyaTower(sf::RenderWindow* window, int x, int y, int radius, sf::Color _color);
	~NyaTower();

	void draw(sf::RenderWindow& window);

	void Range(const sf::FloatRect& objectBounds);
	void FireRate();
	void Lvl();
	void UpgradeCost();

	void getUpgradeCost();

};

