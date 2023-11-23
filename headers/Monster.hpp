#pragma once
#include "Ennemies.hpp"
#include <string>
#include <vector>


class Monster : public Ennemies
{
private:
	std::string type;
	static std::map<std::string, std::vector<int>> MonsterChoice;

public:
	Monster(int x, int y, int r, std::string type);
	void update(float deltaT, std::vector<GameObject*>* objectVector);

	std::string getType();

	void setType(std::string type);
};