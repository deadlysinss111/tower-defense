#include "Tile.hpp"
#include "GameObject.hpp"
#include "PathLine.hpp"
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

void Tile::setContent(PathLine* content) {
	this->path = content;
}
