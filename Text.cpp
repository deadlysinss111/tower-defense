#include "Text.hpp"

Texte::Texte(const std::string& cheminPolice, unsigned int taille, const sf::Color& couleur)
{

    if (!font.loadFromFile(cheminPolice)) {
        // Gestion de l'erreur si la police ne peut pas être chargée
        printf("parceque const marche pas ");
    }

    texte.setFont(font);
    texte.setCharacterSize(taille);
    texte.setFillColor(couleur);
}

void Texte::setPostition(float x, float y)
{
    texte.setPosition(x, y);
}

void Texte::setString(const std::string& str)
{
    texte.setString(str);
}

void Texte::afficher(sf::RenderWindow& window)
{
    window.draw(texte);

}
