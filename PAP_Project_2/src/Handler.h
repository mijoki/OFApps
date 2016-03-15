#pragma once
#include "Headers.h"
#include "ofMain.h"

enum imageSheet {
	grass = 0,
	warehouse = 1,
	forest = 2,
	mine = 3,
	farm = 4,
	male = 5,
	female = 6,
	cow = 7,
	house = 8,
	stockPile = 9,
	onyxHorse = 10
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

