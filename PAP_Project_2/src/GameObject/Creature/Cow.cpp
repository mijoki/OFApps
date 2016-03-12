#include "Cow.h"



Cow::Cow()
{
}


Cow::~Cow()
{
}

void Cow::draw()
{
	getMyImage()->draw(getPos());
}
