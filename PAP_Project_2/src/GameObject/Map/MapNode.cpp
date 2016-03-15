#include "MapNode.h"

//These nodes currently bear the scars of my attempted A* algorithm. It will be cleaned up and will also point to objects that are inside it

MapNode::MapNode(ofVec2f inValue)
{
	setPos(ofVec2f(inValue.x*50,inValue.y*50));
	setCameFrom(ofVec2f(-1, -1));
	walkValue = 1;
	curScore = 9999;
	visited = false;
}


MapNode::~MapNode()
{
}

void MapNode::draw()
{
	getMyImage()->draw(getPos());
}

int MapNode::getWalkValue()
{
	return walkValue;
}

void MapNode::setWalkValue(int inValue)
{
	walkValue = inValue;
}

bool MapNode::getVisited()
{
	return visited;
}

void MapNode::setVisited(bool inValue)
{
	visited = inValue;
}

int MapNode::getCurScore()
{
	return curScore;
}

void MapNode::setCurScore(int inValue)
{
	curScore = inValue;
}

ofVec2f MapNode::getCameFrom()
{
	return cameFrom;
}

void MapNode::setCameFrom(ofVec2f inValue)
{
	cameFrom = inValue;
}

vector<ofVec2f> MapNode::getAdj()
{
	vector<ofVec2f> toReturn;
	for (int x = -1;x < 2;x++) {
		for (int y = -1;y < 2;y++) {
			if (y != 0 && x != 0) {
				if (getPos().x + x >= 0 && getPos().y + y >= 0)
					toReturn.push_back(ofVec2f(getPos().x + x, getPos().y + y));
			}
		}
	}
	return toReturn;
}


