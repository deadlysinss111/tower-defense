#pragma once
#include "GameObject.hpp"
#include <array>

class DynamicObject : public GameObject
{
public:
	// Constructors & Destructor
	DynamicObject(sf::RenderWindow* window, int x, int y, float width, float height, int speed);
	DynamicObject(sf::RenderWindow* window, int x, int y, float radius, int speed);
	~DynamicObject();

	virtual std::array<int, 2> move();
	virtual bool collisionsCircleCircle(sf::CircleShape* circleA, sf::CircleShape* circleB, std::array<int, 2> posCircleA, std::array<int, 2> posCircleB);
	virtual bool collisionsRectRect(sf::RectangleShape* rectA, sf::RectangleShape* rectB, std::array<int, 2> posRectA, std::array<int, 2> posRectB);
	virtual bool collisionsCirlceRect(sf::CircleShape* circle, sf::RectangleShape* rect, std::array<int, 2> posCircle, std::array<int, 2> posRect);

protected:
	// Extra attrbiutes of DynamicObject
	int speed[2];
};