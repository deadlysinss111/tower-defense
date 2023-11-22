#include "DynamicObject.hpp"


DynamicObject::DynamicObject(sf::RenderWindow* window, int x, int y, float width, float height, int speed)
{
}

DynamicObject::DynamicObject(sf::RenderWindow* window, int x, int y, float radius, int speed)
{
}

DynamicObject::~DynamicObject()
{
}

std::array<int, 2> DynamicObject::move()
{
	return std::array<int, 2>();
}

bool DynamicObject::collisionsCircleCircle(sf::CircleShape* circleA, sf::CircleShape* circleB, std::array<int, 2> posCircleA, std::array<int, 2> posCircleB)
{
	return false;
}

bool DynamicObject::collisionsRectRect(sf::RectangleShape* rectA, sf::RectangleShape* rectB, std::array<int, 2> posRectA, std::array<int, 2> posRectB)
{
	return false;
}

bool DynamicObject::collisionsCirlceRect(sf::CircleShape* circle, sf::RectangleShape* rect, std::array<int, 2> posCircle, std::array<int, 2> posRect)
{
	return false;
}
