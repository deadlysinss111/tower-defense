#pragma once

#include <SFML/System/Clock.hpp>

class Waves
{

private:
	int nbEnnemies;
	float timeUntilNext;
	float clearLevelUntilNext;
	sf::Clock clock;

public:

	Waves();
	Waves(int nbEnnemies);
	~Waves();
	void StardWaves();
	void EndWaves();


};

