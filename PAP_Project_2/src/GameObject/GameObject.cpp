#include "GameObject.h"

//All game object will inherit from this class in some way, this will be fleshed out more when I need to do so.
//This will also probably become an abstract base class as this does not give any definition to what an object actually is within the game and thus I do not want any object of this typeS

GameObject::GameObject()
{
}


GameObject::~GameObject()
{
}

float GameObject::getHealth()
{
	return health;
}

void GameObject::setHealth(float inHealth)
{
	health = inHealth;
}

void GameObject::setMyImage(shared_ptr<ofImage> inImage)
{
	myImage = inImage;
}

shared_ptr<ofImage> GameObject::getMyImage()
{
	return myImage;
}

void GameObject::draw()
{
	myImage->draw(pos.x,pos.y);
}

ofVec2f GameObject::getPos()
{
	return pos;
}
