/* 
 * File:   Bar.cpp
 * Author: cecco
 * 
 * Created on 24 marzo 2015, 18.23
 */

#include "ZBar.h"

ZBar::ZBar(int x) : Brick(x) {
    id = 6;   
    maxRotation = 2;
    
    Brick::init3dCubes();
}


ZBar::~ZBar() {
}

int ZBar::getBodyValue(int r, int c) { 
    if(r>=0 && r<4 && c>=0 && c<=4)
        return body[rotation][r][c]; 
    return 0;
}
