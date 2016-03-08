#include "Ammo.h"

Ammo::Ammo(int inX, int inY, ofVec2f inVec, int inLevel) :radius(5),level(inLevel) {
	pos.set(inX, inY);
	moveVec = inVec;
}

void Ammo::move() {
	pos += moveVec;
	if (pos.y<0 || pos.y>ofGetWindowHeight() || pos.x<0 || pos.x>ofGetScreenWidth()) {
		isActive = false;
	}

}

void Ammo::draw() {
	ofSetColor(0, 0, 255);
	ofFill();
	ofDrawEllipse(pos.x, pos.y, radius, radius);
}

int Ammo::getRadius() {
	return radius;
}

int Ammo::collided() {
	int toOut = level * 10;
	isActive = false;
	return toOut;
}

ofVec2f Ammo::getPos() {
	return pos;
}