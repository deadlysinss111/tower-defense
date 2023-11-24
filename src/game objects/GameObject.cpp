#include <iostream>

#include "GameObject.hpp"
#include <SFML/Graphics/Texture.hpp>

static std::map<int, sf::Texture> textureMap;


GameObject::GameObject(sf::RenderWindow* window, int x, int y, float width, float height) {
	//this->shape = new sf::RectangleShape(sf::Vector2f(width, height));
	//this->x = x; this->y = y;
	//this->w = width; this->h = height;
	//this->shape->setOrigin(sf::Vector2f(w / 2, h / 2));
	//this->shape->setPosition(sf::Vector2f(this->x, this->y));
	//this->window = window;
}

GameObject::GameObject(sf::RenderWindow* window, int x, int y, float radius) {
	//this->shape = new sf::CircleShape(radius);
	//this->x = x; this->y = y;
	//this->w = radius; this->h = radius;
	//this->shape->setOrigin(sf::Vector2f(w / 2, h / 2));
	//this->shape->setPosition(sf::Vector2f(this->x, this->y));
	//this->window = window;
}



GameObject::~GameObject() {
	delete this->shape;
};

void GameObject::display(sf::RenderWindow* window) {
	window->draw(*this->shape);
}
