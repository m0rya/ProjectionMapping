#include "ofApp.h"
ofVec2f pnt[9];

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofEnableAlphaBlending();
    ofSetCircleResolution(20);
    ofBackground(0);
    
    
    pnt[0] = ofVec2f(10,10);
    pnt[1] = ofVec2f(10,100);
    pnt[2] = ofVec2f(10,200);
    
    pnt[3] = ofVec2f(110,10);
    pnt[4] = ofVec2f(110,100);
    pnt[5] = ofVec2f(110,200);
    
    pnt[6] = ofVec2f(210,10);
    pnt[7] = ofVec2f(210,110);
    pnt[8] = ofVec2f(210,200);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,0,0);
    ofBeginShape();
    ofVertex(pnt[0].x, pnt[0].y);
    ofVertex(pnt[1].x, pnt[1].y);
    ofVertex(pnt[4].x, pnt[4].y);
    
    ofVertex(pnt[3].x, pnt[3].y);
    ofEndShape();
    
    ofSetColor(0,255,0);
    ofBeginShape();
    ofVertex(pnt[1].x, pnt[1].y);
    ofVertex(pnt[2].x, pnt[2].y);
    ofVertex(pnt[5].x, pnt[5].y);
    ofVertex(pnt[4].x, pnt[4].y);
    ofEndShape();
    
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
    for(int i=0; i<9; i++){
        int dis = ofDist(x,y,pnt[i].x, pnt[i].y);
        if(dis < 20){
            pnt[i] = ofVec2f(x,y);
        }
    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
