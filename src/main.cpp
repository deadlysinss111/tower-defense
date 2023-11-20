#include <iostream>
#include <SFML/Graphics.hpp>


int main(int argc, char** argv)
{
    sf::RenderWindow window(sf::VideoMode(GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN)), "SFML");
    sf::Clock clock;

    bool isPlaying = true;

    while (isPlaying)
    {
        window.clear();

        sf::Time elapsed = clock.restart();

        window.display();
    }

    return 0;
}