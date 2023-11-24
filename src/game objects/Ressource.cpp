#include "Ressource.hpp"

//Ressource::Ressource()
//{
//}

Ressource::Ressource(int value,sf::RenderWindow* window, int x, int y, float width, float height) : GameObject(window,x,y,width, height)
{
	value = 1;
}

Ressource::~Ressource()
{
}

//void Ressource::drawResource(sf::RenderWindow* window)
//{
//	tree.display(window);
//}

int Ressource::getRessourceValue() const
{
	return value;
}