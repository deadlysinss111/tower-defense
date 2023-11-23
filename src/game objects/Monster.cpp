#include "Monster.hpp"
#include <map>
#include <vector>
#include <iostream>

namespace std
{
	map<string, vector<int>> Monster::MonsterChoice = { {"soldier", { 75, 8, 3, 3 }},{"tanker", { 100, 10, 2, 5 }} };

	Monster::Monster(sf::RenderWindow* window, int x, int y, int r, string type) : Ennemies::Ennemies(window, x, y, r, 0, 0, 0, 0)
	{
		this->type = type;
		this->shape->setFillColor(sf::Color::Cyan);

		auto found = this->MonsterChoice.find(type);

		if (found != MonsterChoice.end()) {

			vector<int> values = found->second;

			Ennemies::setHealth(values[0]);
			Ennemies::setAttack(values[1]);
			Ennemies::setSpeed(values[2]);
			Ennemies::setGoldValue(values[3]);
		}
		else {
			cerr << "Erreur : Type de monstre inconnu" << endl;
		}
	}

	string Monster::getType()
	{
		return this->type;
	}

	void Monster::setType(string type)
	{
		this->type = type;
	}

}

void std::Monster::update(float deltaT, std::vector<GameObject*>* objectVector) {
	//this->move(&(sf::Vector2f(10, 10)), 0.05);
}