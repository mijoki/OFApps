#ifndef enemy_h
#define enemy_h

#include "ofMain.h"
#include "ship.h"

class Enemy {
private:
	// Properties
	int x;
	int y;
	Ship *enemyShip;
public:

	// Constructor
	Enemy(int _x, int _y, Ship &inShip);

	// Methods
	void move();
	void draw();
	int getX();
	bool checkDistance(Ship inShip);
	int getY();

	// Properties
	ofColor color;
	
};
#endif