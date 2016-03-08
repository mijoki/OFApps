#include "enemy.h"


Enemy::Enemy(int _x, int _y) : x(_x), y(_y) {
	// Set the initial color
	color.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void Enemy::move() {
	x -= 1;
}

void Enemy::draw() {
	ofSetColor(color);
	ofFill();
	ofCircle(x, y, 30);
}

int Enemy::getX() {
	return x;
}

int Enemy::getY() {
	return y;
}