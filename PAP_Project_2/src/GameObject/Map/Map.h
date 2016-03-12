#pragma once
#include "../GameObject.h"
#include "MapNode.h"

class Map :
	public GameObject
{
private:
	vector<vector<MapNode>> nodes;

public:
	Map();
	~Map();
	virtual void draw();
	void addLine();
	void addNode(int _x, int _y);
	MapNode& getNode(int _x, int _y);
	MapNode& getNode(ofVec2f inPos);
};

