#pragma once

#include "ofMain.h"
#include "ofxOsc.h"

//DEFINE A PORT TO LISTEN TO
#define PORT 12345
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

		ofxOscReceiver receiver;
		int mouseX, mouseY;
		string mouseButtonState;
		deque<string> messageBuffer;
		int maxBufferSize = 20;
		int myNum;
		float myNum2;
		string myString;
		float myTime;

		float accelerometerX;
};
