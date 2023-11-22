#include "Waves.hpp"

Waves::Waves()
{
}

Waves::Waves(sf::vector<GameObject> nbEnnemies)
{
	timeUntilNext = 60;
	clearLevelUntilNext = 60;
}

Waves::~Waves()
{
}

void Waves::StardWaves()
{
	nbMaxEnnemies = static_cast<float>(nbEnnemies.size());
	clock;
}



void Waves::EndWaves()
{
	if (clock.getElapsedTime().asSeconds() == timeUntilNext || clock.getElapsedTime().asSeconds() == clearLevelUntilNext)
	{
		clock.restart();
		StardWaves();
	}
}

float Waves::pourcentWaveEnd(sf::vector<GameObject> nbEnnemies)
{
	float _nbEnnemies = static_cast<float>(nbEnnemies.size());
	if (_nbEnnemies < nbMaxEnnemies)
	{
		float pourcentKill = _nbEnnemies / nbMaxEnnemies;
	}
	return pourcentKill;
}
//paterne des waves dans un fichier non ?
