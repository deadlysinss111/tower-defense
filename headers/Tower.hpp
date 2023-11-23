#pragma once
#include "GameObject.h"
#include "projectile.hpp"

class Tower : public GameObject
{
private:

	int atk;//damage
	float rg;//range
	float atks;//attack speed
	float Bus;//Buillet speed 
	int PC = 70;//Build cost

	sf::RectangleShape detectionZone;
	std::vector<std::unique_ptr<Projectile>> projectiles;
	sf::Vector2f targetPosition;

public:

	Tower();
	Tower(sf::RenderWindow* window, int x, int y, float width, float height, sf::Color _color);
	Tower(sf::RenderWindow* window, int x, int y, float radius, sf::Color _color);
	~Tower();

	void Draw(sf::RenderWindow& window);

	void PurchaseCost(int _cost);

	void GetPurchaseCost();

};

