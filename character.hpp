/******************
 * Program: character.hpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: header file for character class
*******************/
#ifndef CHARACTER_H
#define CHARACTER_H
#include <string> 
#include <vector>
using std::string;
using std::vector;

class Character 
{
      protected:
        int strength;
        string type;
    public:
        Character();
        virtual ~Character();
        void setType(string);
        string getType();
        int getStrength();
        void setStrength(int s);
        virtual void add_item_to_bag(string) = 0;
        virtual void checkBag() = 0;
        virtual void useItem(int) = 0;
        //virtual void inject() = 0;
        virtual void getBloodSample() = 0;
        virtual void isInfected() = 0;

};

#endif