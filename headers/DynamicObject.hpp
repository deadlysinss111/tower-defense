#pragma once
#include "GameObject.hpp"

class DynamicObject : public GameObject
{
public:
    // Constructors & Destructor
    DynamicObject(sf::RenderWindow* window, int x, int y, float width, float height, float speed[2]);
    DynamicObject(sf::RenderWindow* window, int x, int y, float radius, float speed[2]);
    ~DynamicObject();

protected:
    // Extra attrbiutes of DynamicObject
    float speed[2];
};