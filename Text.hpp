#pragma once

#include <SFML/Graphics.hpp>

class Texte
{
private:
	sf::Font font;
	sf::Text texte;

public:

	Texte(const std::string& cheminPolice, unsigned int taille, const sf::Color& couleur);
	void setPostition(float x, float y);
	void setString(const std::string& str);
	void afficher(sf::RenderWindow& window);

};

