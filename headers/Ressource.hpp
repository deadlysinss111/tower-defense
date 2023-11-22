#pragma once

#include "GameObject.hpp"


//Tree ressources to upgrade tower.
class Ressource : public GameObject
{
private:
	int value = 2;

public :
	Ressource();

	Ressource(int value ,sf::RenderWindow* window, int x, int y, float width, float height);

	~Ressource();

	int getRessourceValue() const;
};

