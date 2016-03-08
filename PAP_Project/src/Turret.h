#ifndef Turret_h
#define Turret_h

#include "ofMain.h"
#include "Enemy.h"
#include "Ammo.h"

class Turret{
public:
	Turret(int side);
	void pingu(Enemy &inEnmey);
	void draw();
	vector<Ammo> ammos;
	ofVec2f getPos();
	float targetRotation;
	void setActive(bool newState);

private:
	void shoot(Enemy &inEnemy);
	ofVec2f pos;
	bool isActive = true;
	float currentRotation;
	float ammoSpeed;
	int range;
	int level;


};

#endif