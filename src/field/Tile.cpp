#include "Tile.hpp"
#include "GameObject.hpp"
#include <typeinfo>
#include <iostream>
#include <SFML/Graphics.hpp>


Tile::Tile(sf::Vector2f* position, GameObject* object = NULL) {
	this->setContent(object);
	this->position = *position;
	this->shape = new sf::RectangleShape(sf::Vector2f(50, 50));
	this->shape->setPosition(*position);
	this->path = false;
}

Tile::~Tile(){
	delete this->shape;
}

void Tile::setContent(GameObject* content) {
	this->object = content;
}

//void Tile::displayGrass(sf::RenderWindow* window) {
//	sf::CircleShape* circle = new sf::CircleShape(50);
//	this->shape->setFillColor(sf::Color::Green);
//	window->draw(*circle);
//	delete circle;
//}
//
//void Tile::displayPath(sf::RenderWindow* window) {
//	this->shape->setFillColor(sf::Color::Yellow);
//	window->draw(*this->shape);
//}
