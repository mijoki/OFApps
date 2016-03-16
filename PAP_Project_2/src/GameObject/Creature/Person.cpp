#include "Person.h"



Person::Person(shared_ptr<Map> inMap):Creature(inMap)
{
}

Person::Person() {

}

Person::~Person()
{
}

void Person::draw() {
	getMyImage()->draw(getPos().x*50,getPos().y*50);
}

void Person::doJob()
{
	ofVec2f jobPos = findNearestJob();
	if (getPos() != jobPos) {
		move(jobPos);
	} else {
		switch (jobID)
			case(Farmer): {
			
			if((int)ofGetElapsedTimef()%5==0){

		}
		}
	}
	}

ofVec2f Person::findNearestJob()
{
	return ofVec2f();
}
