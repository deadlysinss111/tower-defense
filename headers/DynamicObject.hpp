#pragma once
#include "GameObject.hpp"
#include <array>

class DynamicObject : public GameObject
{
public:
	// Constructors & Destructor
	DynamicObject(sf::RenderWindow* window, int x, int y, float width, float height, sf::Vector2f* speed);
	DynamicObject(sf::RenderWindow* window, int x, int y, float radius, sf::Vector2f* speed);
	~DynamicObject();
	
	void setSpeed(sf::Vector2f*);
	void update(float deltaT);

protected:
	// Extra attrbiutes of DynamicObject
	void move(float deltaT);
	sf::Vector2f speed;
};