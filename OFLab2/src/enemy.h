#ifndef enemy_h
#define enemy_h

#include "ofMain.h"

class Enemy {
private:
	// Properties
	int x;
	int y;
public:
	// Constructor
	Enemy(int _x, int _y);

	// Methods
	void move();
	void draw();
	int getX();
	int getY();

	// Properties
	ofColor color;
};
#endif