#include "Tile.hpp"
#include "GameObject.hpp"
#include <typeinfo>
#include <iostream>




Tile::Tile(GameObject* object = NULL) {
	this->setContent(object);
}
Tile::Tile() {

}

Tile::~Tile(){}

void Tile::setContent(GameObject* content) {
	this->object = content;
}
