/******************
 * Program: hallway.cpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: implementation file for hallway class
*******************/
#include "hallway.hpp"
#include "space.hpp"
#include <iostream>
using std::cout;
using std::endl;

Hallway::Hallway() : Space() {
    infectedSearched = 0;
    searched2 = 0;
}

void Hallway::interaction(){

    cout << "\n======== Searching " << type << " ========\n" << endl; 
    
    if(roomNum == 1)
    {
        if(searched == 0){
            cout << "You slowly make your way through the hallway and notice a life-less"  << endl;
            cout << "body on the floor by the elevator doors. You cautiously walk past the body to get to the"  << endl;
            cout << "stairwell, but it springs to life, grabbing your leg, and implanting a shallow"  << endl;
            cout << "bite into your ankle! You kick off the zombie and dig your heel into it's head."  << endl;
            cout << "With its head crushed, the zombie goes still." << endl << endl;
            cout << "Frantic, you wrap a makeshift tourniquet around your ankle." << endl << endl;
            cout << "\"I have to keep going.\"" << endl << endl;
            player->isInfected();
            player->loseHealth();
            searched++;
        } else if(searched > 0){
            cout << "There is nothing else here." << endl;
        }
    } else if(roomNum == 2)
    {
        if(player->getInfected())
        {
            if(infectedSearched == 0)
            {
                cout << "The pain from the bite is getting worse. You feel your forehead to guage your" << endl;
                cout << "temperature, and, expecting worse, you're surprised to feel only a low-grade fever."  << endl << endl;
                cout << "\"I should be progressing more rapidly. It's only a matter of time.\""  << endl;
                infectedSearched++;
            } else if(infectedSearched > 0)
            {
                cout << "There is nothing else here." << endl;
            }
        }else if(!player->getInfected())
        {
            if(searched2 == 0)
            {
                cout << "Almost there..."  << endl;
                searched2++;
            } else if(searched2 > 0){
                cout << "There is nothing else here." << endl;
            }
        }
    }

    cout << "\n===================================\n" << endl; 

}

