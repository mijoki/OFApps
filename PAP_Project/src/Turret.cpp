#include "Turret.h"

Turret::Turret(int side): targetRotation(0), currentRotation(0), range(40), ammoSpeed(5), level(1) {
	if (side == 0) {
		pos.set(20, ofGetWindowHeight()-50);
	} else {
		pos.set(ofGetWindowWidth() - 20, ofGetWindowHeight()-50);
	}
}

void Turret::shoot(Enemy &inEnemy) {
	if (ofGetFrameNum() % 50 == 0&&inEnemy.getPos().y!=-20) {
		ofVec2f moveVec;
		moveVec = inEnemy.getPos();
		moveVec -= pos;
		moveVec.normalize();
		moveVec *= ammoSpeed;
		ammos.push_back(Ammo(pos.x, pos.y, moveVec, level));
	}
}

void Turret::pingu(Enemy &inEnemy){
	ammos.erase(std::remove_if(ammos.begin(), ammos.end(), [this](Ammo ammo) {return !ammo.isActive;}), ammos.end());
	if (isActive) {
			shoot(inEnemy);
		for (auto &ammo : ammos) {
			ammo.move();
		}
	}
}

ofVec2f Turret::getPos() {
	return pos;
}

void Turret::draw() {
	if (isActive) {
		ofSetColor(0, 255, 0);
		ofFill();
		ofEllipse(pos, 20, 20);
		for (auto &ammo : ammos) {
			if (ammo.isActive) {
				ammo.draw();
			}
		}
	}
}

void Turret::setActive(bool newState) {
	isActive = newState;
}