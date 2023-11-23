#include <windows.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "DynamicObject.hpp"
#include "GameManager.hpp"


int main(int argc, char** argv)
{
    sf::RenderWindow window(sf::VideoMode(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN)), "SFML");
    //sf::RenderWindow window(sf::VideoMode(500, 500), "SFML");
    sf::Clock clock;

    GameManager* gameManager = GameManager::instance(&window);

    GameObject testGameObj(&window, 0, 0, 20, 20);
    //int speed[2] = { 1, 1 };
    //DynamicObject testDynaObj(&window, 100, 100, 50, speed);

    bool isPlaying = true;

    while (isPlaying)
    {
        sf::Time elapsed = clock.restart();

        window.clear();

        gameManager->manage(elapsed.asSeconds());

        window.display();
    }

    return 0;
}   