/* 
 * File:   Bar.cpp
 * Author: cecco
 * 
 * Created on 24 marzo 2015, 18.23
 */
#include "RLBar.h"

RLBar::RLBar(int x) : Brick(x) {
    id = 5;   
    maxRotation = 4;
    
    Brick::init3dCubes();
}


RLBar::~RLBar() {
}

int RLBar::getBodyValue(int r, int c) { 
    if(r>=0 && r<4 && c>=0 && c<=4)
        return body[rotation][r][c]; 
    return 0;
}
