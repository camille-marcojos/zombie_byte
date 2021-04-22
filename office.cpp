/******************
 * Program: Office.cpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: implementation file for office class
*******************/
#include "office.hpp"
#include "space.hpp"
#include <iostream>
using std::cout;
using std::endl;

Office::Office() : Space() {
    
}

void Office::interaction(){

    cout << "\n======== Searching " << type << " ========\n" << endl; 

    if(searched == 0){
        cout << "You found a health pack!" << endl;
        player->add_item_to_bag("Health Pack");
        searched++;
    } else if(searched == 1){
        cout << "You found a journal. You open it and read it's contents..." << endl << endl;
        player->journal();
        player->add_item_to_bag("Journal");
        searched++;
    } else if(searched > 1){
        cout << "There is nothing else here." << endl;
    }

    cout << "\n===================================\n" << endl; 

}

