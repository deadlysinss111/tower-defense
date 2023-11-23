#include "Projectile.hpp"

Projectile::Projectile()
{
}

Projectile::Projectile(sf::RenderWindow* window, float x, float y, float speed, sf::Vector2f direction, float radius, sf::Color color)
{

}

Projectile::Projectile(sf::RenderWindow* window, float x, float y, float speed, sf::Vector2f direction, float width, float height, sf::Color color) :DynamicObject(window, x, y, width, height, speed)
{

}

Projectile::~Projectile()
{
}

void Projectile::update(float deltaT, std::vector<GameObject*>* objectVector)
{
}
