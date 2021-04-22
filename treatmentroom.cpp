/******************
 * Program: treatmentroom.cpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: header file for treatment room class
*******************/
#include "treatmentroom.hpp"
#include "space.hpp"
#include <iostream>
using std::cout;
using std::endl;

TreatmentRoom::TreatmentRoom() : Space() {
    searched2 = 0;
}

void TreatmentRoom::interaction(){

    cout << "\n======== Searching " << type << " ========\n" << endl; 
    
    if(roomNum == 1)
    {
        if(searched == 0){
            cout << "You found a health pack!" << endl;
            player->add_item_to_bag("Health Pack");
            searched++;
        } else if(searched > 0){
            cout << "There is nothing else here." << endl;
        }
    } else if(roomNum == 2)
    {
         if(searched2 == 0){
            cout << "A zombie comes rushing at you!" << endl;
            player->loseHealth();
            searched2++;
        } else if(searched2 == 1){
            cout << "You found a needle and syringe!" << endl;
            player->add_item_to_bag("Needle and Syringe");
            player->hasSyringeAndNeedle();
            searched2++;
        }
        else if(searched2 > 1){
            cout << "There is nothing else here." << endl;
        }
    }

    cout << "\n==================================\n" << endl; 

}

