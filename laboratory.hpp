/******************
 * Program: laboratory.hpp
 * Author: Camille Marcojos
 * Date: 12/8/19
 * Description: header file for laboratory class
*******************/
#ifndef LABORATORY_H
#define LABORATORY_H
#include "space.hpp"
#include <string>
using std::string;

class Laboratory : public Space
{
    private:
    public:
        Laboratory();
        void interaction();
};

#endif