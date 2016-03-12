#include "Forest.h"



Forest::Forest(shared_ptr<Map> inMap):Building(inMap)
{
}


Forest::~Forest()
{
}

void Forest::draw() {
	getMyImage()->draw(getPos());
}
