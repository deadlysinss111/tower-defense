#include "Inventory.hpp"

Inventory::Inventory()
{
	gold = 140;
	wood = 0;
}

Inventory::~Inventory()
{
}


void Inventory::addWood()
{
	wood = wood + ressource.getRessourceValue();
}

void Inventory::addGold()
{
	//gold = gold + Ennemies.getGoldValue();
}

void Inventory::decrementWood()
{
	//si bouton am�liration est pr�ss� 
	// gold = gold- tower.getUpgradeCost();
	//wood = wood- tower.getUpgradeCost();
}

void Inventory::decrementGold()
{
	//si bouton construction est pr�ss� 
	//gold = gold- tower.getCost();
}


