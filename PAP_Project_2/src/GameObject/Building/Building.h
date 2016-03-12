#pragma once
#include "../GameObject.h"
#include "../Map/Map.h"

class Building :
	public GameObject
{
public:
	Building(shared_ptr<Map> inMap);
	~Building();
	virtual void draw() = 0;
};

