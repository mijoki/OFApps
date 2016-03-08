#include "Enemy.h"

Enemy::Enemy( Global &inGlob) : global(inGlob),radius(20) {
	//int workingHealth = int(global.getLevel() / 5)*10;
	health = global.getLevel() * 10;
	pos.set(ofRandom(0,ofGetWindowWidth()),-radius);
}

void Enemy::move() {
	checkHealth();
	if (isActive) {
		pos.y += 0.1;
		if (pos.y > ofGetWindowHeight() + radius) {
			ofSendMessage("Escaped");
			isActive = false;
		}
	}
}

void Enemy::checkHealth() {
	if (health <= 0) {
		ofSendMessage("Dead");
		isActive = false;
	}
}

int Enemy::getRadius() {
	return radius;
}

void Enemy::draw() {
	if (isActive) {
		ofSetColor(255, 0, 0);
		ofFill();
		ofEllipse(pos, radius, radius);
	}
}

void Enemy::setHealth(int newHealth) {
	health = newHealth;
}

float Enemy::getHealth() {
	return health;
}

ofVec2f Enemy::getPos() {
	return pos;
}