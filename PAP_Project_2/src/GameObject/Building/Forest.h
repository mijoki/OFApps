#pragma once
#include "Building.h"

class Forest :
	public Building
{
public:
	Forest(shared_ptr<Map> inMap);
	~Forest();
	virtual void draw();
};

