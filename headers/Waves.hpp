#pragma once

#include <SFML/System/Clock.hpp>
#include 

class Waves
{

private:
	sf::vector<GameObject> nbEnnemies;
	float timeUntilNext;
	float clearLevelUntilNext;
	sf::Clock clock;
	float nbMaxEnnemies;

public:

	Waves();
	Waves(sf::vector<GameObject> nbEnnemies);
	~Waves();
	void StardWaves();
	void EndWaves();


};

