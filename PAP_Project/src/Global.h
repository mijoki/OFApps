#ifndef Global_h
#define Global_h

#include "ofMain.h"

class Global {
public:
	Global();
	int getLevel();
	int getLives();
	void minusPoints(int amountToGo);
	int getPoints();
	void gotMessage(ofMessage& msg);
	int getGameState();
	void setGameState(int newState);

private:
	int level;
	int lives;
	int points;
	int gameState;
};
#endif