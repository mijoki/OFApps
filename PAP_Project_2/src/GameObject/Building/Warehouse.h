#pragma once
#include "Building.h"

class Warehouse :
	public Building
{
public:
	Warehouse(shared_ptr<Map> inMap);
	~Warehouse();
	virtual void draw();
};

