#ifndef ship_h
#define ship_h

#include "ofMain.h"
#include "enemy.h"

class Ship {
private:
	// Properties
	int x;
	int y;
public:
	// Constructor
	Ship();

	// Methods
	void draw();
	void up();
	void down();
	bool checkDistance(Enemy inEnemy);
	int getX();
	int getY();

	// Properties
	ofColor color;
};
#endif