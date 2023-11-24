#include <SFML/System/Vector2.hpp>

class GameObject;
namespace sf {
	class RenderWindow;
	class Shape;
}


class Tile {
public:
	Tile(sf::Vector2f* position, GameObject* object);
	Tile();
	~Tile();
	sf::Vector2f position;
	GameObject* object;
	bool path;
	sf::Shape* shape;

	void setContent(GameObject*);
	void getContent();

	//void displayPath(sf::RenderWindow* window);
	//void displayGrass(sf::RenderWindow* window);
};