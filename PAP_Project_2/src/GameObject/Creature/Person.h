#pragma once
#include "Creature.h"

enum jobs {
	Farmer = 0,
	Woodcutter =1,
	Builder=2,
	Collector=3,
	Cowboy=4,
	Breeder=5
};

class Person :
	public Creature
{
private:
	//bool isPenis;
	//int jobID;

public:
	Person(shared_ptr<Map> inMap);
	Person();
	~Person();
	virtual void draw();
	/*void doJob();
	void setJob(int inJob);
	void Wander();
	*/

};

