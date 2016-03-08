#include "Player.h"
Player::Player() : upgradeLevel(1) {

}


void Player::doDamage(Enemy &inEnemy) {
	Enemy *pointEn = &inEnemy;
	int workingValue = pointEn->getHealth();
	workingValue -= (10 * upgradeLevel);
	pointEn->setHealth(workingValue);
}