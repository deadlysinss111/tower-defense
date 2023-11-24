#include "HUD.hpp"

HUD::HUD()
{
}

void HUD::updateGold(int Gold)
{
}

void HUD::updtaeWood(int Wood)
{
}

void HUD::updateTower()
{
}

void HUD::UpgradeTower()
{
}

void HUD::UpdateHealth()
{
}

void HUD::afficher(sf::RenderWindow& window)
{
	sf::Vector2i mousePosition = sf::Mouse::getPosition();
	GoldText.setPostition(window.getSize().x-10, window.getSize().y - 10);
	Woodtext.setPostition(window.getSize().x - 0, window.getSize().y - 10);

	TowerText.setPostition(mousePosition.x, mousePosition.y);
	UpgradeText.setPostition(mousePosition.x, mousePosition.y);


}
