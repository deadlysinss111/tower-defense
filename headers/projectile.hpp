#pragma once
#include <SFML/Graphics.hpp>
#include "DynamicObject.hpp"

class Projectile : public DynamicObject
{
private:
    sf::Vector2f velocity;

public:
    Projectile();
    Projectile(sf::RenderWindow* window, float x, float y, float speed, sf::Vector2f direction, float radius, sf::Color color);//circle
    Projectile(sf::RenderWindow* window, float x, float y, float spedd, sf::Vector2f direction, float width, float height, sf::Color color);//rect
    ~Projectile();

    void update(float deltaT, std::vector<GameObject*>* objectVector) override;
};
