/******************
 * Program: treatmentroom.hpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: header file for treatment room class
*******************/
#ifndef TREATMENTROOM_H
#define TREATMENTROOM_H
#include "space.hpp"
#include <string>
using std::string;

class TreatmentRoom : public Space
{
    private:
        int searched2;
    public:
        TreatmentRoom();
        void interaction();
};

#endif