#pragma once
#include <SFML/Graphics.hpp>

namespace sf
{
	class RenderWindow;
	class Shape;
}


class GameObject {
public:
	GameObject(sf::RenderWindow* window, int x, int y, float width, float height);
	GameObject(sf::RenderWindow* window, int x, int y, float radius);
	GameObject();
	~GameObject();

	virtual void update(float deltaT, std::vector<GameObject*>* objectVector) {};
	virtual void display(sf::RenderWindow* window);
	/*void setTexture(sf::Texture*);*/
	virtual void move(sf::Vector2f vect, float deltaT) {};

	static std::map<int, sf::Texture> textureMap;

	bool dead;

	float x;
	float y;
	float h;
	float w;

protected:
	sf::Shape* shape;
	sf::RenderWindow* window;
	sf::Sprite sprite;
};

