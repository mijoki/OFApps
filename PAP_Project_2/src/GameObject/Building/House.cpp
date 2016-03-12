#include "House.h"



House::House(shared_ptr<Map> inMap):Building(inMap)
{
}


House::~House()
{
}

void House::draw()
{
	getMyImage()->draw(getPos());
}
