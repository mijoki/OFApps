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
	~GameObject();
	float getHealth();
	void setMyImage(shared_ptr<ofImage> inImage);
	void setHealth(float inHealth);
	shared_ptr<ofImage> getMyImage();
	virtual void draw();
	virtual void setPos(ofVec2f inPos) = 0;
	virtual void setPos(int _x, int _y) = 0;
	ofVec2f getPos();
};

