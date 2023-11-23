#include "ArcheryTower.hpp"


ArcheryTower::ArcheryTower(sf::RenderWindow* window, int x, int y, int width, int height, sf::Color _color) : Tower(window, x, y, width, height, _color)
{
    shape->setFillColor(_color);

    detectionZone.setFillColor(sf::Color(255, 255, 50, 50));  // Couleur rouge semi-transparente

}

ArcheryTower::ArcheryTower(sf::RenderWindow* window, int x, int y, int radius, sf::Color _color) : Tower(window, x, y, radius, _color)
{
    shape->setFillColor(_color);
}

ArcheryTower::~ArcheryTower()
{

}

void ArcheryTower::draw(sf::RenderWindow& window)
{
    window.draw(*shape);

    window.draw(detectionZone);
}

void ArcheryTower::Range(const sf::FloatRect& objectBounds){
    // Mettre à jour la position de la zone de détection pour qu'elle suive la tour
    detectionZone.setPosition(shape->getPosition());

    // Ajuster la taille de la zone de détection en fonction de la portée de la tour
    detectionZone.setSize(sf::Vector2f(rg, rg));
    detectionZone.setOrigin(sf::Vector2f(detectionZone.getSize().x / 1.5, detectionZone.getSize().y / 1.5));

    // Vérifier si les limites de l'objet entrent dans la zone de détection
    if (detectionZone.getGlobalBounds().intersects(objectBounds))
    {
        // L'objet est dans la zone de détection, appeler FireRate
        FireRate();


        // projt.display(window);
    }
}

void ArcheryTower::FireRate()
{
    Projectile projt(window, detectionZone.getSize().x, detectionZone.getSize().y, &sf::Vector2f(2, 2), 25, sf::Color::Red);
    projt.display(window);
}

void ArcheryTower::Lvl()
{
}

void ArcheryTower::UpgradeCost()
{
}
