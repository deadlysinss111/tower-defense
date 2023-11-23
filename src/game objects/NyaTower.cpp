#include "NyaTower.hpp"

NyaTower::NyaTower()
{
}

NyaTower::NyaTower(sf::RenderWindow* window, int x, int y, int width, int height, sf::Color _color) : Tower(window, x, y, width, height, _color)
{
    shape->setFillColor(_color);

    detectionZone.setFillColor(sf::Color(255, 255, 50, 50));  // Couleur rouge semi-transparente

}

NyaTower::NyaTower(sf::RenderWindow* window, int x, int y, float radius, sf::Color _color) : Tower(window, x, y, radius, _color)
{
    shape->setFillColor(_color);
}

NyaTower::~NyaTower()
{

}

void NyaTower::draw(sf::RenderWindow& window)
{
    window.draw(*shape);

    window.draw(detectionZone);
}

void NyaTower::Range(const sf::FloatRect& objectBounds)
{
    // Mettre à jour la position de la zone de détection pour qu'elle suive la tour
    detectionZone.setPosition(shape->getPosition());

    // Ajuster la taille de la zone de détection en fonction de la portée de la tour
    detectionZone.setSize(sf::Vector2f(_r * 2, _r * 2));
    detectionZone.setOrigin(sf::Vector2f(detectionZone.getSize().x / 2, detectionZone.getSize().y / 2));

    // Vérifier si les limites de l'objet entrent dans la zone de détection
    if (detectionZone.getGlobalBounds().intersects(objectBounds))
    {
        // L'objet est dans la zone de détection, appeler FireRate
        FireRate();


        // projt.display(window);
    }
}

void NyaTower::FireRate()
{
    std::cout << "non";
    Projectile projt(window, detectionZone.getSize().x, detectionZone.getSize().y, 50, sf::Vector2f(2, 2), 1, 1, sf::Color::Red);
    projt.display(window);
}

void NyaTower::Lvl()
{
}

void NyaTower::UpgradeCost()
{
}
