/******************
 * Program: laboratory.cpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: implementation file for laboratory class
*******************/
#include "laboratory.hpp"
#include "space.hpp"
#include <iostream>
using std::cout;
using std::endl;

Laboratory::Laboratory() : Space() {

}

void Laboratory::interaction(){

    cout << "\n======== Searching " << type << " ========\n" << endl; 
    
    if(searched == 0)
    {
        cout << "A zombie comes rushing at you!" << endl;
        player->loseHealth();
        searched++;
    }
    
    if(!player->getInfected())
    {
        if(searched == 0){
            cout << "\nI made it! I must test this vaccine..."  << endl << endl;
            cout << "Vaccine Failed"  << endl << endl;;
            cout << "This can't be real. I need to find more clues."  << endl;
        }
    }else if(player->getInfected())
    {
        cout << "\n\"I made it, I'm not dead, I haven't turned. What's going on?\"" << endl;
        cout << "What's wrong with me?" << endl;
        player->getBloodSample();
    }

    cout << "\n===================================\n" << endl; 

}

