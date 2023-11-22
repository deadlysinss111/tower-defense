#include "DynamicObject.hpp"
#include <iostream>

// Constructors & Destructor
DynamicObject::DynamicObject(sf::RenderWindow* window, int x, int y, float width, float height, int speed[2]) : GameObject(window, x, y, width, height)
{
	this->speed[0] = speed[0];
	this->speed[1] = speed[1];
}
DynamicObject::DynamicObject(sf::RenderWindow* window, int x, int y, float radius, int speed[2]) : GameObject(window, x, y, radius)
{
	this->speed[0] = speed[0];
	this->speed[1] = speed[1];
}
DynamicObject::~DynamicObject()
{
	std::cout << "DynamicObject was PURGED\n";
}

void DynamicObject::move(sf::Vector2f vect, float deltaT) {
	this->x += vect.x * deltaT;
	this->y += vect.y * deltaT;
	this->shape->setPosition(x, y);
}