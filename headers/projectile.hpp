#pragma once
#include <SFML/Graphics.hpp>
#include "DynamicObject.hpp"

class Projectile : public DynamicObject
{
private:
    sf::Vector2f velocity;

public:
    Projectile();
    Projectile(sf::RenderWindow* window, float x, float y, sf::Vector2f* speed, int radius, sf::Color color);//circle
    Projectile(sf::RenderWindow* window, float x, float y, sf::Vector2f* speed, int width, int height, sf::Color color);//rect
    ~Projectile();

    void update(float deltaT, std::vector<GameObject*>* objectVector) override;
};
