#include "DynamicObject.hpp"
#include <iostream>


DynamicObject::DynamicObject(sf::RenderWindow* window, int x, int y, float width, float height, sf::Vector2f* speed) : GameObject(window, x, y, width, height)
{
	this->speed = *speed;
}
DynamicObject::DynamicObject(sf::RenderWindow* window, int x, int y, float radius, sf::Vector2f* speed) : GameObject(window, x, y, radius)
{
	this->speed = *speed;
}
DynamicObject::~DynamicObject()
{
	std::cout << "DynamicObject was PURGED\n";
}

void DynamicObject::setSpeed(float x, float y) {
	this->speed.x = x;
	this->speed.y = y;
}

void DynamicObject::update(float deltaT) {
	this->move(deltaT);
}

void DynamicObject::move(float deltaT) {
	this->x += this->speed.x * deltaT;
	this->y += this->speed.y * deltaT;
	this->shape->setPosition(x, y);
}