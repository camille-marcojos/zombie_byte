/******************
 * Program: scientist.hpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: header file for scientist class
*******************/
#ifndef SCIENTIST_H
#define SCIENTIST_H
#include "character.hpp"
#include <string>
using std::string;

class Scientist : public Character 
{
    private:
        vector<string> bag;
        bool infected;
        bool has_knife;
        bool has_syringe_and_needle;
        bool found_cure;
    public:
        Scientist();
        void add_item_to_bag(string item);
        void checkBag();
        bool emptyBag();
        void useItem(int itemNum);
        void getBloodSample();
        void isInfected();
        bool getInfected();
        void loseHealth();
        void checkHealth();
        void hasKnife();
        void hasSyringeAndNeedle();
        void journal();
        bool foundCure();
        int getHealth();
};

#endif