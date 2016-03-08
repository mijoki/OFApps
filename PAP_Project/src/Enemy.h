#ifndef Enemy_h
#define Enemy_h

#include "ofMain.h"
#include "Global.h"

class Enemy {
public:
	Enemy( Global &inGlob);

	void draw();
	void move();
	void setHealth(int newHealth);
	float getHealth();
	ofVec2f getPos();
	bool isActive = true;
	int getRadius();

private:
	void checkHealth();
	Global global;
	float health;
	ofVec2f pos;
	int radius;
};

#endif