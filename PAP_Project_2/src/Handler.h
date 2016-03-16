#pragma once
#include "Headers.h"
#include "ofMain.h"

enum imageSheet {
	grass = 0,
	warehouse = 1,
	forest = 2,
	mine = 3,
	farm = 4,
	person = 5,
	cow = 6,
	house = 7,
	stockPile = 8,
	onyxHorse = 9
};

class Handler
{
private:
	shared_ptr<Map> map = make_shared<Map>();
	vector<shared_ptr<ofImage>> images;
	vector<GameObject*> gameObjects;
	vector<Building*> buildings;
	vector<Creature*> creatures;
public:
	Handler();
	~Handler();
	void draw();
	void update();
};

