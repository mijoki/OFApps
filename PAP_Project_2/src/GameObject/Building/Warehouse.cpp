#include "Warehouse.h"

//Basic warehouse
/*
TODO:
Values for each resources with appropiate get and set functions
*/

Warehouse::Warehouse(shared_ptr<Map> inMap):Building(inMap)
{
}


Warehouse::~Warehouse()
{
}

void Warehouse::draw()
{
	getMyImage()->draw(getPos());
}
