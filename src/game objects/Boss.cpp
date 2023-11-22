#include "Boss.hpp"

void Boss::ability() {
	if (this->getHealth() < 1000) {
		int newHealth = this->getHealth() + 5;
		if (newHealth <= 1000) {
			this->setHealth(newHealth);
		}
		else {
			this->setHealth(1000);
		}
	}
}

