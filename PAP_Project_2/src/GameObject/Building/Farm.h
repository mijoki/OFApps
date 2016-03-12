#pragma once
#include "Building.h"
class Farm :
	public Building
{
public:
	Farm(shared_ptr<Map> inMap);
	~Farm();
	virtual void draw();
};

