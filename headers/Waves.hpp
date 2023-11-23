#pragma once

#include "GameObject.hpp"

#include <SFML/System/Clock.hpp>
#include <vector>

class Waves
{

private:
	float timeUntilNext;
	float clearLevelUntilNext;
	sf::Clock clock;
	std::vector<GameObject*> listEnnemies;
	float nbMaxEnnemies;

public:
	Waves(std::vector<GameObject*> nbEnnemies);
	~Waves();
	void StardWaves();
	void EndWaves();
	float getClearLevel();
};

