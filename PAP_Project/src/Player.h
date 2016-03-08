#ifndef Player_h
#define Player_h

#include "ofMain.h"
#include "Enemy.h"

class Player {
	//Upgrades doing damage etc
public:
	Player();
	void doDamage(Enemy &inEnemy);

private:
	int upgradeLevel;
};

#endif