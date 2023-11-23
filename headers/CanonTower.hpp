#pragma once
#include "Tower.hpp"
#include "Projectile.hpp"

class CanonTower : public Tower
{
private:

	sf::RectangleShape detectionZone;
	std::vector<std::unique_ptr<Projectile>> projectiles;
	sf::Vector2f targetPosition;

public:

	static const int _w = 75;
	static const int _h = 75;
	static const int _x = 300;
	static const int _y = 500;
	static const int _r = 300;

	CanonTower();
	CanonTower(sf::RenderWindow* window, int x, int y, int width, int height, sf::Color _color);
	CanonTower(sf::RenderWindow* window, int x, int y, float radius, sf::Color _color);
	~CanonTower();

	void draw(sf::RenderWindow& window);

	void Range(const sf::FloatRect& objectBounds);
	void FireRate();
	void Lvl();
	void UpgradeCost();
	void move(float offsetX, float offsetY);

	void update(float deltaT, std::vector<GameObject*>* objectVector);

	void getUpgradeCost();
	sf::RectangleShape& getShape() { return dynamic_cast<sf::RectangleShape&>(*shape); }

};

