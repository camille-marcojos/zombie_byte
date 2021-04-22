/******************
 * Program: cafeteria.cpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: implementation file for cafeteria class
*******************/
#include "cafeteria.hpp"
#include "space.hpp"
#include <iostream>
using std::cout;
using std::endl;

Cafeteria::Cafeteria() : Space() {

}

void Cafeteria::interaction(){

    cout << "\n======== Searching " << type << " ========\n" << endl; 
    
    if(searched == 0){
        cout << "You found a knife!" << endl;
        player->add_item_to_bag("Knife");
        searched++;
        player->hasKnife();
    } else if(searched > 0){
        cout << "There is nothing else here." << endl;
    }

    cout << "\n==================================\n" << endl; 

}

