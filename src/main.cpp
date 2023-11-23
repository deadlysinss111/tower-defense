#define NOMINMAX
#include <windows.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "GameObject.hpp"
#include "GameManager.hpp"
#include "Tower.hpp"
#include "CanonTower.hpp"

int main(int argc, char** argv)
{
    sf::RenderWindow window(sf::VideoMode(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN)), "SFML");
    sf::Clock clock;
    
    CanonTower Rect(&window, CanonTower::_x, CanonTower::_y, CanonTower::_w, CanonTower::_h, sf::Color(50,155,200,255));
    CanonTower Rect2(&window, CanonTower::_x+700, CanonTower::_y, CanonTower::_w, CanonTower::_h, sf::Color(50,155,200,255));

    bool isPlaying = true;

    while (isPlaying)
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) 
            {
                window.close();
                isPlaying = false;
            }

        }
        // Gestion des touches fléchées
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            // Action lorsque la flèche gauche est enfoncée
            Rect2.move(-1.f, 0.f);
            // Ajoutez ici le code que vous souhaitez exécuter pour la flèche gauche
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            // Action lorsque la flèche droite est enfoncée
            Rect2.move(1.f, 0.f);
            // Ajoutez ici le code que vous souhaitez exécuter pour la flèche droite
        }


        window.clear();
        Rect.Range(Rect2.getShape().getGlobalBounds());
        Rect.draw(window);
        Rect2.draw(window);

        sf::Time elapsed = clock.restart();

        window.display();
    }

    return 0;
}