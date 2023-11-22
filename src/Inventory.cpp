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
	//si bouton améliration est préssé 
	// gold = gold- tower.getUpgradeCost();
	//wood = wood- tower.getUpgradeCost();
}

void Inventory::decrementGold()
{
	//si bouton construction est préssé 
	//gold = gold- tower.getCost();
}


