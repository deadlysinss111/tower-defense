#pragma once

class Ennemies
{
private:
	int health;
	int attack;
	float speed;
	int goldValue;

public:

	Ennemies(int health, int attack, float speed, int goldValue);

	int getHealth();
	int getAttack();
	float getSpeed();
	int getGoldValue();

	void setHealth(int health);
	void setAttack(int attack);
	void setSpeed(float speed);
	void setGoldValue(int goldValue);


};

