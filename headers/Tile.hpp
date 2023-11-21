#include <SFML/System/Vector2.hpp>

class GameObject;
class PathLine;

struct Content {
	GameObject* object;
	PathLine* path;
	char* id;
};

class Tile {
public:
	Tile(GameObject* object);
	~Tile();

	sf::Vector2f position;
	Content* content;

	void setContent(GameObject*);
	void setContent(PathLine*);
	void getContent();
};