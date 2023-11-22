#include "Ennemies.hpp"

Ennemies::Ennemies(int health, int attack, float speed, int goldValue)
{
	this->health = health;
	this->attack = attack;
	this->speed = speed;
	this->goldValue = goldValue;
}

int Ennemies::getHealth()
{
	return this->health;
}

int Ennemies::getAttack()
{
	return this->attack;
}

float Ennemies::getSpeed()
{
	return this->speed;
}

int Ennemies::getGoldValue()
{
	return this->goldValue;
}

void Ennemies::setHealth(int newHealth)
{
	this->health = newHealth;
}

void Ennemies::setAttack(int newAttack)
{
	this->attack = newAttack;
}

void Ennemies::setSpeed(float newSpeed)
{
	this->speed = newSpeed;
}

void Ennemies::setGoldValue(int newGoldValue)
{
	this->goldValue = newGoldValue;
}
