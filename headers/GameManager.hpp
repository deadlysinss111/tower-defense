#pragma once

#include <vector>

#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Tile;
class Wave;
class GameObject;
class RenderManager;

class GameManager
{
public:

	// Singleton constructor filter
	static GameManager* instance(sf::RenderWindow* window);

	GameManager(sf::RenderWindow* window);
	~GameManager();

	void setup();
	/*bool collisionRectRect(sf::RectangleShape ARGrect1, sf::RectangleShape ARGrect2);
	bool collisionCircleCircle(sf::CircleShape ARGcircle1, sf::CircleShape ARGcircle2);
	bool collisionCircleRect(sf::CircleShape ARGcircle, sf::RectangleShape ARGrect);*/

	bool detectWin();
	bool detectLoss();

	void manage(float deltaT);

	std::vector<GameObject*> listGameObject;
	std::vector<std::vector<Tile*>> map;

	static GameManager* instance_;
private:

	// Singleton security
	
	
	std::vector<Wave*> listWave;
	std::vector<Tile*> path;
	sf::RenderWindow* window;
	RenderManager* renderManager;
};