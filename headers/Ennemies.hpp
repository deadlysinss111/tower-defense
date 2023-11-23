#pragma once
#include "dynamicObject.hpp"

class Ennemies : public DynamicObject
{
private:
	int health;
	int attack;
	int speed;
	int goldValue;

public:

	Ennemies(sf::RenderWindow* window, int x, int y, int radius, int health, int attack, sf::Vector2f* speed, int goldValue);

	int getHealth();
	int getAttack();
	float getSpeed();
	int getGoldValue();

	void setHealth(int health);
	void setAttack(int attack);
	void setSpeed(float speed);
	void setGoldValue(int goldValue);

	void takeDamage(int damageTake);
};

