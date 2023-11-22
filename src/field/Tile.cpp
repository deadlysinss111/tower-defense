#include "Tile.hpp"
#include "GameObject.hpp"
#include "PathLine.hpp"
#include <typeinfo>
#include <iostream>




Tile::Tile(GameObject* object){
	this->setContent(object);
}

Tile::~Tile(){}

void Tile::setContent(GameObject* content) {
	this->object = content;
}

void Tile::setContent(PathLine* content) {
	this->path = content;
}
