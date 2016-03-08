#include "ofMain.h"
#include "ofApp.h"
//Needed to change to a Glut window as I was having Open GL issues at one point. I will retest this at a later date though.

//========================================================================
int main( ){
	ofAppGlutWindow window; // create a window
							// set width, height, mode (OF_WINDOW or OF_FULLSCREEN)
	ofSetupOpenGL(&window, 1280, 720, OF_WINDOW);
	ofRunApp(new ofApp()); // start the app

}
