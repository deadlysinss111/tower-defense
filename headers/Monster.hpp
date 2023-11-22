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
		Monster(string type);

		string getType();

		void setType(string type);
	};
}
