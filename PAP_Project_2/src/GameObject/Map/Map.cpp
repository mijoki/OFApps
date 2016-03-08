#include "Map.h"

//2D array of "Nodes" which each represent the x,y co-ordinate system. 

Map::Map()
{
}


Map::~Map()
{
}

void Map::addLine()
{
	vector<MapNode> in;
	nodes.push_back(in);
}

void Map::addNode(int _x, int _y)
{
	nodes[_x].push_back( MapNode(ofVec2f(_x, _y)));
}

MapNode& Map::getNode(int _x, int _y)
{
	return nodes[_x][_y];
}

MapNode& Map::getNode(ofVec2f inPos)
{
	return nodes[inPos.x][inPos.y];
}
