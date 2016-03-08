#include "ship.h"

Ship::Ship() : x(50), y(10) {
	y = ofGetHeight() / 2;
	// Set the initial color
	color.set(255, 255, 255);
}

void Ship::draw() {
	ofSetColor(color);
	ofFill();
	ofCircle(x, y, 30);
}

void Ship::down() {
	y += 10;
}

void Ship::up() {
	y -= 10;
}

bool Ship::checkDistance(Enemy inEnemy) {
	if (ofDist(inEnemy.getX(), inEnemy.getY(), x, y) <= 60) {
		return true;
	}
	else {
		return false;
	}
}

int Ship::getX() {
	return x;
}

int Ship::getY() {
	return y;
}