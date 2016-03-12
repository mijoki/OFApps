#include "Farm.h"



Farm::Farm(shared_ptr<Map> inMap):Building(inMap)
{
}


Farm::~Farm()
{
}

void Farm::draw()
{
	getMyImage()->draw(getPos());
}
