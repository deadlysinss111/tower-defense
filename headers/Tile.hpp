#include <SFML/System/Vector2.hpp>

class GameObject;
class PathLine;



class Tile {
public:
	Tile(GameObject* object);
	Tile();
	~Tile();
	sf::Vector2f position;
	GameObject* object;
	PathLine* path;

	void setContent(GameObject*);
	void setContent(PathLine*);
	void getContent();
};