#pragma once
#include "DynamicObject.hpp"
#include "Tile.hpp"
#include "Wave.hpp"

#include <vector>

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class GameManager
{
public:
	
	void setup();
	bool collisionRectRect(sf::RectangleShape ARGrect1, sf::RectangleShape ARGrect2);
	bool collisionCircleCircle(sf::CircleShape ARGcircle1, sf::CircleShape ARGcircle2);
	bool collisionCircleRect(sf::CircleShape ARGcircle, sf::RectangleShape ARGrect);

	bool detectWin();
	bool detectLoss();

	void display();

private:
	std::vector<GameObject*> listGameObject;
	std::vector<Tile*> map;
	std::vector<Wave*> listWave;
};