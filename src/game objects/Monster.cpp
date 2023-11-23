#include "Monster.hpp"
#include <map>
#include <vector>
#include <iostream>

std::map<std::string, std::vector<int>> Monster::MonsterChoice = { {"soldier", { 75, 8, 3, 3 }},{"tanker", { 100, 10, 2, 5 }} };

Monster::Monster(int x, int y, int r, std::string type) : Ennemies::Ennemies(window, x, y, r, 0, 0, 0, 0)
{
	this->type = type;
	this->shape->setFillColor(sf::Color::Cyan);

	auto found = this->MonsterChoice.find(type);

	if (found != MonsterChoice.end()) {

		std::vector<int> values = found->second;

		Ennemies::setHealth(values[0]);
		Ennemies::setAttack(values[1]);
		Ennemies::setSpeed(values[2]);
		Ennemies::setGoldValue(values[3]);
	}
	else {
		std::cerr << "Erreur : Type de monstre inconnu" << std::endl;
	}
}

std::string Monster::getType()
{
	return this->type;
}

void Monster::setType(std::string type)
{
	this->type = type;
}

void Monster::update(float deltaT, std::vector<GameObject*>* objectVector) {
	//this->move(&(sf::Vector2f(10, 10)), 0.05);
}