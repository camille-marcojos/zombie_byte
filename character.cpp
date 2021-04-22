/******************
 * Program: character.cpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: implementation file for character.cpp.
*******************/
#include "character.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

Character::Character(){

    strength = 0;
    type = " ";

}

Character::~Character(){


}

void Character::setType(string t){

    type = t;
    
}

string Character::getType(){

    return type;
}


int Character::getStrength(){

    return strength;
}

void Character::setStrength(int s){

    strength = s;

}