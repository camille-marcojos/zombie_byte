/******************
 * Program: hallway.hpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: 
*******************/
#ifndef HALLWAY_H
#define HALLWAY_H
#include "space.hpp"
#include <string>
using std::string;

class Hallway : public Space
{
    private:
        int infectedSearched;
        int searched2;
    public:
        Hallway();
        void interaction();
};

#endif