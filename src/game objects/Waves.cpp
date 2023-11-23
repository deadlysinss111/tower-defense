#include "Waves.hpp"

Waves::Waves(std::vector<GameObject*> nbEnnemies)
{
	this->listEnnemies = nbEnnemies;
	this->timeUntilNext = 60;
	this->clearLevelUntilNext = 60;
	this->nbMaxEnnemies = nbEnnemies.size();
}

Waves::~Waves()
{
}

void Waves::StardWaves()
{
	clock;
}



void Waves::EndWaves()
{
	if (clock.getElapsedTime().asSeconds() == timeUntilNext || clock.getElapsedTime().asSeconds() == clearLevelUntilNext)
	{
		clock.restart();
		StardWaves();
	}
	else if (this->getClearLevel() == 0)
	{
		clock.restart();
		StardWaves();
	}
}

float Waves::getClearLevel(std::vector<GameObject*> nbEnnemies)
{
	float _nbEnnemies = static_cast<float>(nbEnnemies.size());
	float pourcentKill = _nbEnnemies / nbMaxEnnemies;
	return pourcentKill;
}
//paterne des waves dans un fichier non ?
