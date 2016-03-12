#include "Person.h"



Person::Person()
{
}


Person::~Person()
{
}

void Person::draw() {
	getMyImage()->draw(getPos());
}