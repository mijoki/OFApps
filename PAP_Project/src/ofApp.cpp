#include "ofApp.h"
/*
To Do List:
Menus,
Upgrades,
Game over,
Enemies 'channel' to a point,
Possible sound,
Highscore file,

*/
//--------------------------------------------------------------
void ofApp::setup(){
	Turrets.push_back(Turret(0));
	Turrets.push_back(Turret(1));
	Enemies.push_back(Enemy(global));
}

//--------------------------------------------------------------
void ofApp::update(){
	switch (global.getGameState()) {
	case 0:
		break;
	case 1:
		break;
	case 2:
		doGameUpdateThings();
		break;
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255);

	switch (global.getGameState()) {
	case 0:
		//doMenuThings();
		break;
	case 1:
		//doUpgradeMenuThings();
		break;
	case 2:
		for (auto &turret : Turrets) {
			turret.draw();
		}

		for (auto &enemy : Enemies) {
			enemy.draw();
		}
		break;
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
 	cout << "BREAK" << endl;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	for (auto &enemy : Enemies) {
		ofVec2f tempPos = enemy.getPos();
		if (mouseX >= tempPos.x-enemy.getRadius()&&mouseX <= tempPos.x + enemy.getRadius() && mouseY >= tempPos.y - enemy.getRadius() &&mouseY <= tempPos.y + enemy.getRadius()) {
			player.doDamage(enemy);
		}
	}
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

void ofApp::doGameUpdateThings() {
	Enemies.erase(std::remove_if(Enemies.begin(), Enemies.end(), [this](Enemy enemy) {return !enemy.isActive;}), Enemies.end());
	if (ofGetFrameNum() % 100 == 0) {
		if (!setCurAmount) {
			curAmount = 0;

			targetAmount = 20 * ((global.getLevel() % 5) + 1);
			setCurAmount = true;
		}
		if (curAmount <= targetAmount) {
			curAmount++;
			Enemies.push_back(Enemy(global));
		}
		else {
			if (Enemies.empty()) {
				ofSendMessage("levelEnd");
			}
		}
	}
	for (auto &turret : Turrets) {
		unique_ptr<int> currDist(new int(99999999));
		Enemy currEnemy(global);
		for (auto &enemy : Enemies) {
			enemy.move();
			for (auto &ammo : turret.ammos) {
				if (ammo.getPos().distance(enemy.getPos()) < ammo.getRadius() + enemy.getRadius()) {
					enemy.setHealth(enemy.getHealth() - ammo.collided());
				}
			}
			unique_ptr<int> testDist(new int(turret.getPos().squareDistance(enemy.getPos())));
			if (testDist < currDist) {
				currDist = std::move(testDist);
				currEnemy = enemy;
			}
		}
		if (currEnemy.getPos().y != -20) {
			turret.pingu(currEnemy);
		}
	}
}
