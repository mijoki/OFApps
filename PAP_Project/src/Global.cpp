#include "Global.h"

Global::Global() :lives(20), level(10),points(0),gameState(2) {
	ofRegisterGetMessages(this);
}

void Global::gotMessage(ofMessage& msg) {
	string inMsg = msg.message;
	if (inMsg == "Dead") {
		points = points + level;
	}
	else if (inMsg == "levelEnd") {
		//doLevelEnd
		setGameState(0);
	}else if(inMsg=="levelStart"){
		//doLevelbegin
	}
	else if (inMsg == "Escaped") {
		lives--;
		if (lives <= 0) {
			setGameState(4);
		}
	}
}

int Global::getLevel() {
	return level;
}

int Global::getLives() {
	return lives;
}

int Global::getPoints() {
	return points;
}

void Global::minusPoints(int amountToGo) {
	points = points - amountToGo;
}

void Global::setGameState(int newState) {
	gameState = newState;
}

int Global::getGameState() {
	return gameState;
}
