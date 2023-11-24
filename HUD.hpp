#pragma once

#include <SFML/Graphics.hpp>
#include "Text.hpp"
class HUD
{
private:
    Texte GoldText;
    Texte Woodtext;

    Texte TowerText;
    Texte UpgradeText;

    Texte HealthText;

public:

    HUD();

    void updateGold(int Gold);
    void updtaeWood(int Wood);

    void updateTower();
    void UpgradeTower();

    void UpdateHealth();

    void afficher(sf::RenderWindow& window);
};

