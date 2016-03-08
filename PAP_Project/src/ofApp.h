#pragma once

#include "ofMain.h"
#include "Enemy.h"
#include "Ammo.h"
#include "Player.h"
#include "Turret.h"
#include "Global.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void doGameUpdateThings();
		
		//Variables
		vector<Turret> Turrets;
		vector<Enemy> Enemies;
		Player player;
		Global global;
		
private:
	bool setCurAmount=false;
	int targetAmount;
	int curAmount;

};
