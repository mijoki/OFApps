#pragma once

#include "ofMain.h"

class GameObject
{
private:
	shared_ptr<ofImage> myImage;
	float health;
	ofVec2f pos;
public:
	GameObject();
	virtual ~GameObject();
	float getHealth();
	void setMyImage(shared_ptr<ofImage> inImage);
	void setHealth(float inHealth);
	shared_ptr<ofImage> getMyImage();
	virtual void draw() = 0;
	void setPos(ofVec2f inPos);
	void setPos(int _x, int _y);
	ofVec2f getPos();
};

