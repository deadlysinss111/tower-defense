#include "Tile.hpp"
#include "GameObject.hpp"
#include "PathLine.hpp"
#include <typeinfo>
#include <iostream>

Tile::Tile(GameObject* object){
	this->setContent(object);
	//this->getContent();
}

Tile::~Tile(){}

void Tile::setContent(GameObject* content) {
	this->content->object = content;
	this->content->id = "object";
}

void Tile::setContent(PathLine* content) {
	this->content->path = content;
	this->content->id = "path";
}

void Tile::getContent() {
	this->content->
}