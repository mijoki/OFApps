#pragma once
#include "Building.h"
class House :
	public Building
{
public:
	House(shared_ptr<Map> inMap);
	~House();
	virtual void draw();
};

