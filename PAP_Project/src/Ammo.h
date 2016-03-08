#ifndef Ammo_h
#define Ammo_h

#include "ofMain.h"
#include "Enemy.h"

class Ammo {
public:
	Ammo(int inX, int inY, ofVec2f inVec, int inLevel);

	void move();
	void draw();
	int getRadius();
	int collided();
	bool isActive = true;
	ofVec2f getPos();

private:
	ofVec2f pos;
	ofVec2f moveVec;
	int radius;
	int level;
};

#endif