#include <windows.h>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "DynamicObject.hpp"


int main(int argc, char** argv)
{
    sf::RenderWindow window(sf::VideoMode(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN)), "SFML");
    sf::Clock clock;

    GameObject testGameObj(&window, 0, 0, 20, 20);
    int speed[2] = { 1, 1 };
    DynamicObject testDynaObj(&window, 100, 100, 50, speed);

    bool isPlaying = true;

    while (isPlaying)
    {
        window.clear();

        sf::Time elapsed = clock.restart();

        window.display();
    }

    return 0;
}   