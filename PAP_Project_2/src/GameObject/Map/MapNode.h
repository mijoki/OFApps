#pragma once
#include "../GameObject.h"
class MapNode :
	public GameObject
{
private:
	int walkValue;
	bool visited;
	int curScore;
	ofVec2f cameFrom;

public:
	MapNode(ofVec2f inValue);
	~MapNode();
	virtual void draw();
	int getWalkValue();
	void setWalkValue(int inValue);
	bool getVisited();
	void setVisited(bool inValue);
	int getCurScore();
	void setCurScore(int inValue);
	ofVec2f getCameFrom();
	void setCameFrom(ofVec2f inValue);
	vector<ofVec2f> getAdj();
};

