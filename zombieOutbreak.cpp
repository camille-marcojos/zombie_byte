/******************
 * Program: game.cpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: implementation file for zombie outbreak class
*******************/
#include "zombieOutbreak.hpp"
#include "menu.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::getline;
using std::cin;



ZombieOutbreak::ZombieOutbreak(){

    building.buildCDC();
    player = new Scientist;
}

void ZombieOutbreak::Intro(){

    cout << "\n====================== WELCOME TO ZOMBIE BYTE ======================\n" << endl;
    cout << "A very deadly and infectious virus has emerged and it's ravaging the world." << endl; 
    cout << "Once a person is infected, the virus transforms its host into a" << endl; 
    cout << "bloodythirsty, rabid animal whose sole purpose is to eat and feed on other" << endl; 
    cout << "living humans. One bite from an infected individual transmits the virus," << endl; 
    cout << "continuing its spread of infection. Nothing will stop them...except for a" << endl;
    cout << "bullet to the brain." << endl << endl; 

    cout << "They are the undead. "; 

    cout << "No one is safe." << endl << endl ;

    cout << "You are humanity’s only hope..." << endl << endl ;
    
    cout << "You are a Research Scientist at the world-renowned Centers for Disease" << endl;
    cout << "Control and Prevention and you’re on the brink of a cure." << endl << endl;
    
    cout << "However, the center has been compromised and infected humans are all over" << endl;
    cout << "the facility. You’ve barricaded yourself in your office, but in order to find" << endl;
    cout << "the missing ingredient for the vaccine, you must get to the laboratory on the top floor." << endl << endl;

    cout << "Navigate through the research facility, but beware of infected humans. You must reach" << endl;
    cout << "the laboratory in less than 25 steps." << endl;
    cout << "Don’t forget to pick up weapons and health packs along the way" << endl << endl;

    entertoContinue();
}

void ZombieOutbreak::play(){

    int steps, stepMax;
    steps = 0;
    stepMax = 25;

    Intro();
    building.get_current_room()->set_Player_In_Room(player);
    building.get_current_room()->enterRoom();
    cout << "\n     ** Flickering lights and distant alarm sounds **  \n" << endl;

    cout << "I've found it!! The missing ingredient for the vaccine." << endl;
    cout << "I have to get to the labratory to test my hypothesis, but" << endl;
    cout << "there are too many of them out there." << endl;

    cout << "\n     ** You press your ear to your office door and listen ** \n" << endl;

    cout << "I don't hear anything. Now is my chance - I have to make a move." << endl << endl;

    entertoContinue();

    cout << "--------------------------------" << endl << endl;

    bool playing = true;
    player->checkHealth();

    //Gameplay starts
    do{
    int playerMainChoice;
    cout << "What would you like to do?" << endl;
    cout << "1. Search Area" << endl;
    cout << "2. Leave Area" << endl;
    cout << "3. Check Bag" << endl;
    cout << "4. Use item" << endl;
    cout << "5. Check Health" << endl;
    cout << "Your input:";
    playerMainChoice = getMenuChoice();

    if(playerMainChoice == 1){

        building.get_current_room()->interaction();

        if(player->foundCure()){
            cout << "Congrats! You found the cure and saved humanity!" << endl << endl;
            cout << "GAME OVER" << endl << endl;
            playing = false;
        } 

    }else if(playerMainChoice == 2){

        int roomChoice;

        cout << "Where would you like to go?" << endl;

        if(building.get_current_room()->getNext() != NULL)
        {
            cout << "1. Next Area" << endl;
        } else {
            cout << "1. -" << endl;
        }

        if(building.get_current_room()->getPrev() != NULL)
        {
            cout << "2. Previous Area" << endl;
        } else {
            cout << "2. -" << endl;
        }

        if(building.get_current_room()->getTop() != NULL)
        {
            cout << "3. Upstairs" << endl;
        } else {
            cout << "3. -" << endl;
        }

        if(building.get_current_room()->getBottom() != NULL)
        {
            cout << "4. Downstairs" << endl;
        } else {
            cout << "4. -" << endl;
        }

        cout << "5. Stay in room" << endl;
        cout << "Your input: ";
        roomChoice = getMenuChoice();

        if(roomChoice == 1){
            
            if(building.get_current_room()->getNext() != NULL)
            {
                building.get_current_room()->leaveRoom();
                building.set_current_room(building.get_current_room()->getNext());
                building.get_current_room()->set_Player_In_Room(player);
                building.get_current_room()->enterRoom();
                steps++;
            } else {
                cout << "You can't go in there." << endl;
            }

        }else if(roomChoice == 2){

            if(building.get_current_room()->getPrev() != NULL)
            {
                building.get_current_room()->leaveRoom();
                building.set_current_room(building.get_current_room()->getPrev());
                building.get_current_room()->set_Player_In_Room(player);
                building.get_current_room()->enterRoom();
                steps++;
            } else {
                cout << "You can't go in there." << endl;
            }

        }else if(roomChoice == 3)
        {
            if(building.get_current_room()->getTop() != NULL)
            {
                building.get_current_room()->leaveRoom();
                building.set_current_room(building.get_current_room()->getTop());
                building.get_current_room()->set_Player_In_Room(player);
                building.get_current_room()->enterRoom();
                steps++;
            } else {
                cout << "You can't go upstairs." << endl;
            }
        }else if(roomChoice == 4){

            if(building.get_current_room()->getBottom() != NULL)
            {
                building.get_current_room()->leaveRoom();
                building.set_current_room(building.get_current_room()->getBottom());
                building.get_current_room()->set_Player_In_Room(player);
                building.get_current_room()->enterRoom();
                steps++;
            } else {
                cout << "You can't go down there." << endl;
            }
        }else if(roomChoice == 5){

        }

    }else if(playerMainChoice == 3)
    {
        player->checkBag();

    }else if(playerMainChoice == 4)
    {
        int itemChoice;
        if(player->emptyBag()){

            cout << "You have no items in your bag." << endl;
        } else{
            cout << "Which item do you want to use?" << endl;
            player->checkBag();
            cout << "Enter 0 to Exit." << endl;
            cout << "Your input: ";
            itemChoice = getNum();
            itemChoice--;
            player->useItem(itemChoice);
        }
        
    }else if(playerMainChoice == 5){
        player->checkHealth();
    }
    
    if(player->getHealth() <= 0 || steps >= stepMax){

        cout << "You died!" << endl << endl;
        cout << "GAME OVER" << endl;
        playing = false;
    }

    cout << "\nSteps: " << steps << endl;

    }while(playing == true);
}


ZombieOutbreak::~ZombieOutbreak(){

    delete player;
    
}
