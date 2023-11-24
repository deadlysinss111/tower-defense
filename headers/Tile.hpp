#include <SFML/System/Vector2.hpp>

class GameObject;



class Tile {
public:
	Tile(GameObject* object);
	Tile();
	~Tile();
	sf::Vector2f position;
	GameObject* object;

	void setContent(GameObject*);
	void getContent();
};