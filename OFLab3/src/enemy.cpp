#include "enemy.h"


Enemy::Enemy(int _x, int _y, Ship &inShip) : x(_x), y(_y), enemyShip(&inShip) {
	// Set the initial color
	color.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void Enemy::move() {
	x += (enemyShip->getX() - x)*0.01;
	y += (enemyShip->getY() - y)*0.01;
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

bool Enemy::checkDistance(Ship inShip) {
	if (ofDist(inShip.getX(), inShip.getY(), x, y) <= 60) {
		return true;
	}
	else {
		return false;
	}
}