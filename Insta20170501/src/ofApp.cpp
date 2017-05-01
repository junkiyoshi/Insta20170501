#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(0);
	ofEnableDepthTest();
	ofSetWindowTitle("noise_tunnel");

	this->noise_value_1 = ofRandom(10);
	this->noise_value_2 = ofRandom(10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	cam.begin();

	ofNoFill();
	ofSetColor(0, 255, 255);
	ofSetLineWidth(2);
	float diameter = 250;

	float tmp_noise_value_1 = this->noise_value_1;
	float tmp_noise_value_2 = this->noise_value_2;


	for (int i = 1000; i > -1000; i -= 10) {
		ofEllipse(ofVec3f(ofMap(ofNoise(tmp_noise_value_2), 0, 1, -50, 50), ofMap(ofNoise(tmp_noise_value_2), 0, 1, -50, 50), i), diameter * ofNoise(tmp_noise_value_1), diameter * ofNoise(tmp_noise_value_1));
		tmp_noise_value_1 += 0.08;
		tmp_noise_value_2 += 0.05;
	}

	this->noise_value_1 += 0.08;
	this->noise_value_2 += 0.05;

	cam.end();
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
