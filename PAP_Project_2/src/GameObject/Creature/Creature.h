#pragma once
#include "../GameObject.h"
#include "../Map/Map.h"

class Creature :
	public GameObject
{
private:
	shared_ptr<Map> map;
	//vector<ofVec2f> path;
public:
	Creature(shared_ptr<Map> inValue);
	Creature();
	~Creature();
	void move(int _x, int _y);
	void moveUp();
	void moveDown();
	void moveRight();
	void moveLeft();
	void moveLU();
	void moveLD();
	void moveRU();
	void moveRD();
};

