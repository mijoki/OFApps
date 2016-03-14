#pragma once

#include "ofMain.h"
#include "../src/GameObject/Map/Map.h"
#include "../src/GameObject/Building/Warehouse.h"


class ofApp : public ofBaseApp{
private:
	shared_ptr<Map> map = make_shared<Map>();
	shared_ptr<ofImage> grass;
	vector<Building*> buildings;

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
		
};
