/******************
 * Program: space.cpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: space.cpp is the implementation file space class
*******************/
#include "space.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

Space::Space(){

    top = NULL;
    left = NULL;
    right = NULL;
    bottom = NULL;
    type = " ";
    searched = 0;
    roomNum = 1;
    player = NULL;
}

void Space::setType(string t){
    
    type = t;
}

string Space::getType(){
    
    return type;
}

void Space::setPointers(Space* l, Space* r, Space* t,Space* b){
    
    left = l;
    right = r;
    top = t;
    bottom = b;

}
Space* Space::getNext(){

    return right;
}

Space* Space::getPrev(){

    return left;
}

Space* Space::getTop(){

    return top;
}

Space* Space::getBottom(){

    return bottom;
}

void Space::enterRoom(){

    cout << "**************************************" << endl;
    cout << "        In " << type << endl;
    cout << "**************************************" << endl;
}

void Space::leaveRoom(){

    cout << "**************************************" << endl;
    cout << "       Leaving " << type << endl;
    cout << "**************************************" << endl;

}


void Space::set_Player_In_Room(Scientist* p)
{
    player = p;
}


int Space::getSearched(){

    return searched;
}

void Space::setRoomNum(int n){

    roomNum = n;

}

Space::~Space(){
    
}


