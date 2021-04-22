/******************
 * Program: scientist.cpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: implementation file for scientist class
*******************/
#include "scientist.hpp"
#include "character.hpp"
#include <iostream>
using std::cout;
using std::endl;

Scientist::Scientist(){

    strength = 30;
    type = "Scientist";
    infected = false;
    has_knife = false;
    has_syringe_and_needle = false;
    found_cure = false;

}

void Scientist::add_item_to_bag(string item){

    bag.push_back(item);
    cout << "You added the item to your bag." << endl;

}

void Scientist::checkBag(){

    if (bag.empty()){

        cout << "** You have no items in your bag. **" << endl << endl;
    }else {

        cout << "\n********** Your Items **********" << endl;
        for(unsigned int i = 0; i < bag.size(); i++)
        {
            int j = i;
            j++;
            cout << j << ": " << bag.at(i) << endl;
        }
        cout << "********************************\n" << endl;

    }

}

void Scientist::useItem(int itemNum){

    cout << "\n========== Use Item ==========\n" << endl;

    if(itemNum > (bag.size()-1))
    {
        cout << "Invalid option." << endl;

    }else if(bag.empty()){

        cout << "You don't have anything in your bag." << endl;

    }else if(itemNum == -1){

    }else if(bag.at(itemNum) == "Health Pack"){

        int healthpoints = 10;

        if (strength + healthpoints > 30) {
            strength = 30;
        } else {
            strength += healthpoints;
        }
        cout << "You've healed yourself. You have " << strength << " health points." << endl;
        bag.erase(bag.begin() + itemNum);

    }else if(bag.at(itemNum) == "Needle and Syringe"){
        cout << "There's nothing to use your deedle and syringe on." << endl;
    }else if(bag.at(itemNum) == "Knife"){
        cout << "There's nothing to use your knife on." << endl;
    }else if(bag.at(itemNum) == "Journal"){
        cout << "You open the journal and read it's contents..." << endl << endl;
        journal();

    cout << "\n==============================\n" << endl;
    }
}


void Scientist::isInfected(){
    infected = true;
}

bool Scientist::getInfected(){
    return infected;
}

void Scientist::getBloodSample(){

    if(has_syringe_and_needle){
        cout << "You search your bag for your syringe and needle. You have a theory..." << endl << endl;
        cout << "You carefully use the syringe and needle on yourself and" << endl;
        cout << "slowly draw a small sample of your blood." << endl << endl;
        cout << "You plate it on a petri dish that's contaminated with infected cells..." << endl;
        cout << "You notice the antibodies in your blood are destroying the infected cells." << endl << endl;
        cout << "\"My god...I found the cure.\"" << endl;
        found_cure = true;
    } else {
        cout << "I must test this vaccine..."  << endl << endl;
        cout << "Vaccine Failed"  << endl << endl;;
        cout << "This can't be real. I need to find more clues."  << endl;
    }

}

bool Scientist::emptyBag(){

    if(bag.empty()){
        return true;
    } else
        return false;
}

void Scientist::loseHealth(){

    int damage;
    if(has_knife)
    {
        damage = rand() % 10 + 5;
        strength -= damage;
        cout << "You jabbed your knife into the zombie's head, but you took some damage." << endl;
    }else
    {
        damage = rand() % 20 + 10;
        strength -= damage;
        cout << "You escaped, but took major damage." << endl;
    }

}

void Scientist::checkHealth(){

    cout << "+++++ Health +++++" << endl;
    cout << "        " << strength << endl;
    cout << "++++++++++++++++++" << endl << endl;
}

void Scientist::hasKnife(){
    has_knife = true;
}

void Scientist::hasSyringeAndNeedle(){
    has_syringe_and_needle = true;
}

void Scientist::journal(){
    cout << "Developing a Zombie Vaccine" << endl << endl;
    cout << "Pathogenicity – It is also currently assumed that an infected individual" << endl;
    cout << "will become a zombie; the case definition of zombieism includes a shambling gait, " << endl;
    cout << "necrosis on face or limbs, and an expressed desire to consume human flesh. However, " << endl;
    cout << "it may be the case that individuals can become infected with the zombie virus without " << endl;
    cout << "exhibiting symptoms. A new study to detect zombie virus antibodies in the blood of " << endl;
    cout << "non-zombies is currently enrolling subjects." << endl << endl;
}

bool Scientist::foundCure(){

    return found_cure;
}

int Scientist::getHealth(){

    return strength;
}
