#include "Waves.hpp"

Waves::Waves()
{
}

Waves::Waves(int nbEnnemies)
{
	timeUntilNext = 60;
	clearLevelUntilNext = 60;
}

Waves::~Waves()
{
}

void Waves::StardWaves()
{
	//level.leve1(1); //appelle du niveau 1 waves 1
	//int nblevels = nbleves +1; //a definir dans hpp
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
//paterne des waves dans un fichier non ?
