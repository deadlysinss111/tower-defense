#include "Ennemies.hpp"

Ennemies::Ennemies(sf::RenderWindow* window, int x, int y, int radius, int health, int attack, sf::Vector2f* speed, int goldValue) : DynamicObject(window, x, y, radius, speed)
{
	this->health = health;
	this->attack = attack;
	this->speed = *speed;
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


void Ennemies::setGoldValue(int newGoldValue)
{
	this->goldValue = newGoldValue;
}

void Ennemies::takeDamage(int damageTake)
{

	setHealth(this->getHealth() - damageTake);
	
	if (this->getHealth() <=  0) {
		this->dead = true;
	}

}
