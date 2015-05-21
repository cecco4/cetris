/* 
 * File:   main.cpp
 * Author: cecco
 *
 * Created on 23 marzo 2015, 21.35
 */

#include "SystemSDL.h"

using namespace std;


int main(int argc,char *argv[]) {
    SystemSDL *sys = new SystemSDL(480, 640, 32);

    if(!sys->init())
        return 1;

    sys->loop();

    delete sys;
    return 0;
}

