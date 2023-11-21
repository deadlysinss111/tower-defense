#define NOMINMAX
#include <windows.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "GameObject.hpp"
#include "Tile.hpp"


int main(int argc, char** argv)
{
    sf::RenderWindow window(sf::VideoMode(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN)), "SFML");
    sf::Clock clock;
    GameObject object(&window, 0, 0, 50);
    Tile tile(&object);
    //tile.getContent();

    bool isPlaying = true;

    while (isPlaying)
    {
        window.clear();

        sf::Time elapsed = clock.restart();

        window.display();
    }

    return 0;
}