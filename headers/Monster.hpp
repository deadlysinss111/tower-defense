#pragma once
#include "Ennemies.hpp"
#include <string>

namespace std
{
	class Monster : public Ennemies
	{
	private:
		string type;
		static map<string, vector<int>> MonsterChoice;

	public:
		Monster(sf::RenderWindow* window, int x, int y, int r, string type);
		void update(float deltaT, std::vector<GameObject*>* objectVector);

		string getType();

		void setType(string type);
	};
}
