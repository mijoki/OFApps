#include "ofApp.h"

//--------------------------------------------------------------

/*
This work in progress is very limited but I have placed the ground work down so I can implement new features and object rapidly using inheritence.
It will be a sort of build your own town/village game where each villager has their own job (I.e. lumberjack, blacksmith and farmer) which they would complete through out the game.
The player will need to designate land to be used in a certain way, such as a warehouse which will be used to store all materials.
Once a basic game is done (Basic movement, basic gameplay mechanics, etc) I will flesh it out more in ways such as villagers interacting with each other to create relationships that could either make them work more efficiently or less efficiently.
*/

void ofApp::setup(){
	

}

//--------------------------------------------------------------
void ofApp::update(){
	handler.update();
}

//--------------------------------------------------------------
void ofApp::draw() {
	handler.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
