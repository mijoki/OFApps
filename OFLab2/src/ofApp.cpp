#include "ofApp.h"
#include <iostream>
#include <algorithm>

//--------------------------------------------------------------
void ofApp::setup() {
	gameOver = false;
	font.loadFont("verdana.ttf", 32);
	std::ifstream myfile(ofToDataPath("positions.txt").c_str());
	// Smooth edges
	ofEnableSmoothing();

	// Fixed framerate
	ofSetFrameRate(30);

	// No need to define the initial position of the ball
	// because the Ball constructor does it for you
	int inX, inY;
	if (myfile.is_open()) {
		while (myfile >> inX >> inY) {
			enemies.push_back(Enemy(inX, inY));
		}
		myfile.close();
	}
	else {
		std::cout << "could not load file" << std::endl;
	}
}

void ofApp::update() {
	if (!gameOver) {
		cout<<gameOver;
		for (auto &myEnemy : enemies) {
			myEnemy.move();
		}
		auto it = std::remove_if(enemies.begin(), enemies.end(), [this](Enemy enemy) {return enemy.getX() < -30;});
			enemies.erase(it, enemies.end());
		if (std::any_of(enemies.begin(), enemies.end(), [this](Enemy enemy) {return ship.checkDistance(enemy);})) {
			gameOver = true;
		}
	}
}

void ofApp::draw() {
	if (!gameOver) {
		ofBackgroundGradient(ofColor::gray, ofColor(30, 10, 30), OF_GRADIENT_CIRCULAR);
		ship.draw();
		// Now we have a method that does the drawing stuff
		for (auto &myEnemy : enemies) {
			myEnemy.draw();
		}
	}
	else {
		ofBackgroundGradient(ofColor::gray, ofColor(30, 10, 30), OF_GRADIENT_CIRCULAR);
		ofSetColor(0);
		font.drawString("Game Over", ofGetWidth()/2-120,ofGetHeight()/2);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == OF_KEY_UP) {
		ship.up();
	}
	if (key == OF_KEY_DOWN) {
		ship.down();
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
