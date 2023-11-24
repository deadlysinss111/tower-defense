#include "Core.hpp"

//#include <utility>
//#include "Ennemy.hpp"

//Core::Core()
//{
//}

Core::Core(int hp, sf::RenderWindow* window, int x, int y, float width, float height): GameObject(window, x,y,width,height)
{
	hp = 100;
}

Core::~Core()
{
}

void Core::createCore()
{
}

bool Core::takeDamage()
{
	//if (Ennemy.getGlobalBouds().intersect())
	//{
	//	decrementHp(Ennemy.getDammage());
	//	if (hp == 0)
	//	{
	//		return false;
	//	}
	//}
	return true;
}

void Core::decrementHp(int amount) {
	hp = std::max(0, hp - amount);
}	