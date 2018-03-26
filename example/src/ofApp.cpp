#include "ofApp.h"

bool isRendered = false;

//--------------------------------------------------------------
void ofApp::setup(){
    raytracer = shared_ptr<ofxRayTracer>(new ofxRayTracer);
    raytracer->setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    raytracer->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    raytracer->draw();
	if (!isRendered && raytracer -> howManyRendered >= raytracer -> totalPixels) {
		ofImage img;
		img.setFromPixels(raytracer->renderedPixels);
		img.save("render.png");
		isRendered = true;
	}
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
