/* 
 * File:   Bar.cpp
 * Author: cecco
 * 
 * Created on 24 marzo 2015, 18.23
 */

#include "RZBar.h"

RZBar::RZBar(int x) : Brick(x) {
    id = 7;   
    maxRotation = 2;
    
    Brick::init3dCubes();
}


RZBar::~RZBar() {
}

int RZBar::getBodyValue(int r, int c) { 
    if(r>=0 && r<4 && c>=0 && c<=4)
        return body[rotation][r][c]; 
    return 0;
}
